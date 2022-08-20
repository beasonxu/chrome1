// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/app_list/arc/arc_app_utils.h"

#include <map>
#include <memory>
#include <string>
#include <tuple>
#include <utility>

#include "ash/components/arc/arc_prefs.h"
#include "ash/components/arc/arc_util.h"
#include "ash/components/arc/metrics/arc_metrics_constants.h"
#include "ash/components/arc/metrics/arc_metrics_service.h"
#include "ash/components/arc/mojom/intent_helper.mojom.h"
#include "ash/components/arc/session/arc_bridge_service.h"
#include "ash/components/arc/session/arc_service_manager.h"
#include "base/check.h"
#include "base/containers/contains.h"
#include "base/json/json_writer.h"
#include "base/metrics/histogram_functions.h"
#include "base/metrics/histogram_macros.h"
#include "base/no_destructor.h"
#include "base/observer_list.h"
#include "base/scoped_multi_source_observation.h"
#include "base/strings/string_number_conversions.h"
#include "base/strings/string_piece.h"
#include "base/strings/string_util.h"
#include "base/strings/stringprintf.h"
#include "base/synchronization/waitable_event.h"
#include "base/values.h"
#include "chrome/browser/apps/app_service/launch_utils.h"
#include "chrome/browser/ash/arc/arc_migration_guide_notification.h"
#include "chrome/browser/ash/arc/arc_util.h"
#include "chrome/browser/ash/arc/boot_phase_monitor/arc_boot_phase_monitor_bridge.h"
#include "chrome/browser/ash/arc/notification/arc_management_transition_notification.h"
#include "chrome/browser/ash/arc/session/arc_session_manager.h"
#include "chrome/browser/ash/arc/window_predictor/window_predictor_utils.h"
#include "chrome/browser/ash/login/login_pref_names.h"
#include "chrome/browser/ash/policy/handlers/powerwash_requirements_checker.h"
#include "chrome/browser/browser_process.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/profiles/profile_observer.h"
#include "chrome/browser/ui/app_list/app_list_client_impl.h"
#include "chrome/browser/ui/app_list/arc/intent.h"
#include "chrome/browser/ui/app_list/search/ranking/launch_data.h"
#include "chrome/browser/ui/app_list/search/search_controller.h"
#include "chrome/browser/ui/app_list/search/search_result_ranker/ranking_item_util.h"
#include "chrome/browser/ui/ash/shelf/arc_app_shelf_id.h"
#include "chrome/browser/ui/ash/shelf/arc_shelf_spinner_item_controller.h"
#include "chrome/browser/ui/ash/shelf/chrome_shelf_controller.h"
#include "chrome/browser/ui/ash/shelf/shelf_spinner_controller.h"
#include "chrome/common/pref_names.h"
#include "components/app_restore/app_restore_utils.h"
#include "components/app_restore/features.h"
#include "components/arc/common/intent_helper/arc_intent_helper_package.h"
#include "components/language/core/browser/pref_names.h"
#include "components/prefs/pref_service.h"
#include "content/public/browser/browser_context.h"
#include "ui/aura/window.h"
#include "ui/display/display.h"
#include "ui/display/screen.h"
#include "ui/events/event_constants.h"
#include "ui/gfx/geometry/rect.h"

// Helper macro which returns the AppInstance.
#define GET_APP_INSTANCE(method_name)                                    \
  (arc::ArcServiceManager::Get()                                         \
       ? ARC_GET_INSTANCE_FOR_METHOD(                                    \
             arc::ArcServiceManager::Get()->arc_bridge_service()->app(), \
             method_name)                                                \
       : nullptr)

// Helper function which returns the IntentHelperInstance.
#define GET_INTENT_HELPER_INSTANCE(method_name)                    \
  (arc::ArcServiceManager::Get()                                   \
       ? ARC_GET_INSTANCE_FOR_METHOD(arc::ArcServiceManager::Get() \
                                         ->arc_bridge_service()    \
                                         ->intent_helper(),        \
                                     method_name)                  \
       : nullptr)

namespace arc {

namespace {

// TODO(djacobo): Evaluate to build these strings by using
// ArcIntentHelperBridge::AppendStringToIntentHelperPackageName.
// Intent helper strings.
constexpr char kIntentHelperClassName[] =
    "org.chromium.arc.intent_helper.SettingsReceiver";
constexpr char kSetInTouchModeIntent[] =
    "org.chromium.arc.intent_helper.SET_IN_TOUCH_MODE";

constexpr char kAndroidClockAppId[] = "ddmmnabaeomoacfpfjgghfpocfolhjlg";
constexpr char kAndroidFilesAppId[] = "gmiohhmfhgfclpeacmdfancbipocempm";

constexpr char const* kAppIdsHiddenInLauncher[] = {
    kAndroidClockAppId, kSettingsAppId, kAndroidFilesAppId,
    kAndroidContactsAppId, kPlayGamesAppId};

// Returns true if |event_flags| came from a mouse or touch event.
bool IsMouseOrTouchEventFromFlags(int event_flags) {
  return (event_flags & (ui::EF_LEFT_MOUSE_BUTTON | ui::EF_MIDDLE_MOUSE_BUTTON |
                         ui::EF_RIGHT_MOUSE_BUTTON | ui::EF_BACK_MOUSE_BUTTON |
                         ui::EF_FORWARD_MOUSE_BUTTON | ui::EF_FROM_TOUCH)) != 0;
}

using AppLaunchObserverMap =
    std::map<content::BrowserContext*, base::ObserverList<AppLaunchObserver>>;

AppLaunchObserverMap* GetAppLaunchObserverMap() {
  static base::NoDestructor<
      std::map<content::BrowserContext*, base::ObserverList<AppLaunchObserver>>>
      instance;
  return instance.get();
}

void NotifyAppLaunchObservers(content::BrowserContext* context,
                              const ArcAppListPrefs::AppInfo& app_info) {
  AppLaunchObserverMap* const map = GetAppLaunchObserverMap();
  auto it = map->find(context);
  if (it != map->end()) {
    for (auto& observer : it->second)
      observer.OnAppLaunchRequested(app_info);
  }
}

bool Launch(content::BrowserContext* context,
            const std::string& app_id,
            const absl::optional<std::string>& intent,
            int event_flags,
            arc::mojom::WindowInfoPtr window_info) {
  ArcAppListPrefs* prefs = ArcAppListPrefs::Get(context);
  CHECK(prefs);

  std::unique_ptr<ArcAppListPrefs::AppInfo> app_info = prefs->GetApp(app_id);
  if (!app_info) {
    VLOG(2) << "Cannot launch unavailable app: " << app_id << ".";
    return false;
  }

  if (!app_info->ready) {
    VLOG(2) << "Cannot launch not-ready app: " << app_id << ".";
    return false;
  }

  if (!app_info->launchable) {
    VLOG(2) << "Cannot launch non-launchable app: " << app_id << ".";
    return false;
  }

  if (app_info->suspended) {
    VLOG(2) << "Cannot launch suspended app: " << app_id << ".";
    return false;
  }

  if (IsMouseOrTouchEventFromFlags(event_flags))
    SetTouchMode(IsMouseOrTouchEventFromFlags(event_flags));

  // Unthrottle the ARC instance before launching an ARC app. This is done
  // to minimize lag on an app launch.
  NotifyAppLaunchObservers(context, *app_info);

  if (app_info->shortcut || intent.has_value()) {
    const std::string intent_uri = intent.value_or(app_info->intent_uri);
    if (auto* app_instance = GET_APP_INSTANCE(LaunchIntentWithWindowInfo)) {
      app_instance->LaunchIntentWithWindowInfo(intent_uri,
                                               std::move(window_info));
    } else {
      return false;
    }
  } else {
    if (auto* app_instance = GET_APP_INSTANCE(LaunchAppWithWindowInfo)) {
      app_instance->LaunchAppWithWindowInfo(
          app_info->package_name, app_info->activity, std::move(window_info));
    } else {
      return false;
    }
  }
  prefs->SetLastLaunchTime(app_id);

  return true;
}

// Returns primary display id if |display_id| is invalid.
int64_t GetValidDisplayId(int64_t display_id) {
  if (display_id != display::kInvalidDisplayId)
    return display_id;
  if (auto* screen = display::Screen::GetScreen())
    return screen->GetPrimaryDisplay().id();
  return display::kInvalidDisplayId;
}

// Converts an app_id and a shortcut_id, eg. manifest_new_note_shortcut, into a
// full URL for an Arc app shortcut, of the form:
// appshortcutsearch://[app_id]/[shortcut_id].
std::string ConstructArcAppShortcutUrl(const std::string& app_id,
                                       const std::string& shortcut_id) {
  return "appshortcutsearch://" + app_id + "/" + shortcut_id;
}

}  // namespace

// Package names, kept in sorted order.
const char kPlayStoreActivity[] = "com.android.vending.AssetBrowserActivity";
const char kPlayStorePackage[] = "com.android.vending";

// App IDs, kept in sorted order.
const char kAndroidContactsAppId[] = "kipfkokfekalckplgaikemhghlbkgpfl";
const char kGmailAppId[] = "hhkfkjpmacfncmbapfohfocpjpdnobjg";
const char kGoogleCalendarAppId[] = "decaoeahkmjpajbmlbpogjjkjbjokeed";
const char kGoogleDuoAppId[] = "djkcbcmkefiiphjkonbeknmcgiheajce";
const char kGoogleMapsAppId[] = "gmhipfhgnoelkiiofcnimehjnpaejiel";
const char kGooglePhotosAppId[] = "fdbkkojdbojonckghlanfaopfakedeca";
const char kGoogleTVAppId[] = "kadljooblnjdohjelobhphgeimdbcpbo";
const char kInfinitePainterAppId[] = "afihfgfghkmdmggakhkgnfhlikhdpima";
const char kLightRoomAppId[] = "fpegfnbgomakooccabncdaelhfppceni";
const char kPlayBooksAppId[] = "cafegjnmmjpfibnlddppihpnkbkgicbg";
const char kPlayGamesAppId[] = "nplnnjkbeijcggmpdcecpabgbjgeiedc";
const char kPlayMoviesAppId[] = "dbbihmicnlldbflflckpafphlekmjfnm";
const char kPlayMusicAppId[] = "ophbaopahelaolbjliokocojjbgfadfn";
const char kPlayStoreAppId[] = "cnbgggchhmkkdmeppjobngjoejnihlei";
const char kSettingsAppId[] = "mconboelelhjpkbdhhiijkgcimoangdj";
const char kYoutubeAppId[] = "aniolghapcdkoolpkffememnhpphmjkl";
const char kYoutubeMusicAppId[] = "hpdkdmlckojaocbedhffglopeafcgggc";
const char kYoutubeMusicWebApkAppId[] = "jcmmigapnpnikbmnjknhcoageaeinihi";

bool ShouldShowInLauncher(const std::string& app_id) {
  for (auto* const id : kAppIdsHiddenInLauncher) {
    if (id == app_id)
      return false;
  }
  return true;
}

arc::mojom::WindowInfoPtr MakeWindowInfo(int64_t display_id) {
  arc::mojom::WindowInfoPtr window_info = arc::mojom::WindowInfo::New();
  window_info->display_id = display_id;
  return window_info;
}

bool LaunchApp(content::BrowserContext* context,
               const std::string& app_id,
               int event_flags,
               arc::UserInteractionType user_action) {
  return LaunchAppWithIntent(context, app_id, absl::nullopt /* launch_intent */,
                             event_flags, user_action,
                             MakeWindowInfo(display::kInvalidDisplayId));
}

bool LaunchApp(content::BrowserContext* context,
               const std::string& app_id,
               int event_flags,
               arc::UserInteractionType user_action,
               arc::mojom::WindowInfoPtr window_info) {
  return LaunchAppWithIntent(context, app_id, absl::nullopt /* launch_intent */,
                             event_flags, user_action, std::move(window_info));
}

bool LaunchAppWithIntent(content::BrowserContext* context,
                         const std::string& app_id,
                         const absl::optional<std::string>& launch_intent,
                         int event_flags,
                         arc::UserInteractionType user_action,
                         arc::mojom::WindowInfoPtr window_info) {
  DCHECK(!launch_intent.has_value() || !launch_intent->empty());
  if (user_action != UserInteractionType::NOT_USER_INITIATED)
    arc::ArcMetricsService::RecordArcUserInteraction(context, user_action);

  Profile* const profile = Profile::FromBrowserContext(context);

  // Even when ARC is not allowed for the profile, ARC apps may still show up
  // as a placeholder to show the guide notification for proper configuration.
  // Handle such a case here and shows the desired notification.
  if (IsArcBlockedDueToIncompatibleFileSystem(profile)) {
    VLOG(1) << "Attempt to launch " << app_id
            << " while ARC++ is blocked due to incompatible file system.";
    arc::ShowArcMigrationGuideNotification(profile);
    return false;
  }

  // Check if ARC apps are not allowed to start because device needs to be
  // powerwashed. If it is so then show notification instead of starting
  // the application.
  policy::PowerwashRequirementsChecker pw_checker(
      policy::PowerwashRequirementsChecker::Context::kArc, profile);
  if (pw_checker.GetState() !=
      policy::PowerwashRequirementsChecker::State::kNotRequired) {
    VLOG(1) << "Attempt to launch " << app_id
            << " while ARC++ is blocked due to powerwash request.";
    pw_checker.ShowNotification();
    return false;
  }

  // In case management transition is in progress ARC++ is not available.
  const ArcManagementTransition management_transition =
      GetManagementTransition(profile);
  if (management_transition != ArcManagementTransition::NO_TRANSITION) {
    VLOG(1) << "Attempt to launch " << app_id << " while management transition "
            << management_transition << " is in progress.";
    arc::ShowManagementTransitionNotification(profile);
    return false;
  }

  // Update display id.
  if (window_info)
    window_info->display_id = GetValidDisplayId(window_info->display_id);

  ArcAppListPrefs* const prefs = ArcAppListPrefs::Get(context);
  std::unique_ptr<ArcAppListPrefs::AppInfo> app_info = prefs->GetApp(app_id);
  absl::optional<std::string> launch_intent_to_send = launch_intent;
  if (app_info && !app_info->ready) {
    if (!IsArcPlayStoreEnabledForProfile(profile)) {
      if (prefs->IsDefault(app_id)) {
        // The setting can fail if the preference is managed.  However, the
        // caller is responsible to not call this function in such case.  DCHECK
        // is here to prevent possible mistake.
        if (!SetArcPlayStoreEnabledForProfile(profile, true))
          return false;
        DCHECK(IsArcPlayStoreEnabledForProfile(profile));

        // PlayStore item has special handling for shelf controllers. In order
        // to avoid unwanted initial animation for PlayStore item do not create
        // deferred launch request when PlayStore item enables Google Play
        // Store.
        if (app_id == kPlayStoreAppId) {
          prefs->SetLastLaunchTime(app_id);
          return true;
        }
      } else {
        // Only reachable when ARC always starts.
        DCHECK(arc::ShouldArcAlwaysStart());
      }
    } else {
      // Handle the case when default app tries to re-activate OptIn flow.
      if (IsArcPlayStoreEnabledPreferenceManagedForProfile(profile) &&
          !ArcSessionManager::Get()->enable_requested() &&
          prefs->IsDefault(app_id)) {
        SetArcPlayStoreEnabledForProfile(profile, true);
        // PlayStore item has special handling for shelf controllers. In order
        // to avoid unwanted initial animation for PlayStore item do not create
        // deferred launch request when PlayStore item enables Google Play
        // Store.
        if (app_id == kPlayStoreAppId) {
          prefs->SetLastLaunchTime(app_id);
          return true;
        }
      }
    }

    // App launched by user rather than full restore.
    if (window_info &&
        window_info->window_id <=
            app_restore::kArcSessionIdOffsetForRestoredLaunching) {
      arc::ArcBootPhaseMonitorBridge::RecordFirstAppLaunchDelayUMA(context);
    }

    if (full_restore::features::IsArcWindowPredictorEnabled() &&
        IsArcVmEnabled()) {
      if (LaunchArcAppWithGhostWindow(profile, app_id, *app_info, event_flags,
                                      user_action, window_info)) {
        prefs->SetLastLaunchTime(app_id);
        return true;
      }
      VLOG(2) << "Failed to launch ghost window, fallback to use shelf spinner";
    }

    ChromeShelfController* chrome_controller =
        ChromeShelfController::instance();
    // chrome_controller may be null in tests.
    if (chrome_controller) {
      chrome_controller->GetShelfSpinnerController()->AddSpinnerToShelf(
          app_id,
          std::make_unique<ArcShelfSpinnerItemController>(
              app_id, event_flags, user_action, std::move(window_info)));

      // On some boards, ARC is booted with a restricted set of resources by
      // default to avoid slowing down Chrome's user session restoration.
      // However, the restriction should be lifted once the user explicitly
      // tries to launch an ARC app.
      NotifyAppLaunchObservers(context, *app_info);
    }
    prefs->SetLastLaunchTime(app_id);
    return true;
  } else if (app_id == kPlayStoreAppId) {
    // Record launch request time in order to track Play Store default launch
    // performance.
    const std::vector<std::string> extra = {base::StringPrintf(
        "%s=%" PRId64, kRequestStartTimeParamKey,
        (base::TimeTicks::Now() - base::TimeTicks()).InMilliseconds())};
    if (!launch_intent_to_send) {
      launch_intent_to_send =
          GetLaunchIntent(kPlayStorePackage, kPlayStoreActivity, extra);
    } else {
      launch_intent_to_send =
          AppendLaunchIntent(launch_intent_to_send.value(), extra);
    }
  }

  arc::ArcBootPhaseMonitorBridge::RecordFirstAppLaunchDelayUMA(context);
  return Launch(context, app_id, launch_intent_to_send, event_flags,
                std::move(window_info));
}

bool LaunchAppShortcutItem(content::BrowserContext* context,
                           const std::string& app_id,
                           const std::string& shortcut_id,
                           int64_t display_id) {
  std::unique_ptr<ArcAppListPrefs::AppInfo> app_info =
      ArcAppListPrefs::Get(context)->GetApp(app_id);
  if (!app_info) {
    LOG(ERROR) << "App " << app_id << " is not available.";
    return false;
  }

  mojom::AppInstance* app_instance =
      ArcServiceManager::Get()
          ? ARC_GET_INSTANCE_FOR_METHOD(
                ArcServiceManager::Get()->arc_bridge_service()->app(),
                LaunchAppShortcutItem)
          : nullptr;

  if (!app_instance) {
    LOG(ERROR) << "Cannot find a mojo instance, ARC is unreachable or mojom"
               << " version mismatch.";
    return false;
  }

  app_instance->LaunchAppShortcutItem(app_info->package_name, shortcut_id,
                                      GetValidDisplayId(display_id));
  return true;
}

void UpdateWindowInfo(arc::mojom::WindowInfoPtr window_info) {
  arc::mojom::AppInstance* app_instance = GET_APP_INSTANCE(UpdateWindowInfo);
  if (!app_instance) {
    LOG(ERROR) << "Cannot find a mojo instance, ARC is unreachable or mojom"
               << " version mismatch.";
    return;
  }
  app_instance->UpdateWindowInfo(std::move(window_info));
}

void SetTaskActive(int task_id) {
  arc::mojom::AppInstance* app_instance = GET_APP_INSTANCE(SetTaskActive);
  if (!app_instance)
    return;
  app_instance->SetTaskActive(task_id);
}

void CloseTask(int task_id) {
  arc::mojom::AppInstance* app_instance = GET_APP_INSTANCE(CloseTask);
  if (!app_instance)
    return;
  app_instance->CloseTask(task_id);
}

bool SetTouchMode(bool enable) {
  arc::mojom::IntentHelperInstance* intent_helper_instance =
      GET_INTENT_HELPER_INSTANCE(SendBroadcast);
  if (!intent_helper_instance)
    return false;

  base::DictionaryValue extras;
  extras.SetBoolKey("inTouchMode", enable);
  std::string extras_string;
  base::JSONWriter::Write(extras, &extras_string);
  intent_helper_instance->SendBroadcast(kSetInTouchModeIntent,
                                        kArcIntentHelperPackageName,
                                        kIntentHelperClassName, extras_string);

  return true;
}

std::vector<std::string> GetSelectedPackagesFromPrefs(
    content::BrowserContext* context) {
  std::vector<std::string> packages;
  const Profile* const profile = Profile::FromBrowserContext(context);
  const PrefService* prefs = profile->GetPrefs();

  const base::Value::List& selected_package_prefs =
      prefs->GetValueList(arc::prefs::kArcFastAppReinstallPackages);
  for (const base::Value& item : selected_package_prefs) {
    std::string item_str = item.is_string() ? item.GetString() : std::string();
    packages.push_back(std::move(item_str));
  }

  return packages;
}

void StartFastAppReinstallFlow(const std::vector<std::string>& package_names) {
  arc::mojom::AppInstance* app_instance =
      GET_APP_INSTANCE(StartFastAppReinstallFlow);
  if (!app_instance) {
    LOG(ERROR) << "Failed to start Fast App Reinstall flow because app "
                  "instance is not connected.";
    return;
  }
  app_instance->StartFastAppReinstallFlow(package_names);
}

void UninstallPackage(const std::string& package_name) {
  VLOG(2) << "Uninstalling " << package_name;

  arc::mojom::AppInstance* app_instance = GET_APP_INSTANCE(UninstallPackage);
  if (!app_instance)
    return;

  app_instance->UninstallPackage(package_name);
}

void UninstallArcApp(const std::string& app_id, Profile* profile) {
  ArcAppListPrefs* arc_prefs = ArcAppListPrefs::Get(profile);
  DCHECK(arc_prefs);
  std::unique_ptr<ArcAppListPrefs::AppInfo> app_info =
      arc_prefs->GetApp(app_id);
  if (!app_info) {
    VLOG(2) << "Package being uninstalled does not exist: " << app_id << ".";
    return;
  }
  // For shortcut we just remove the shortcut instead of the package.
  if (app_info->shortcut)
    arc_prefs->RemoveApp(app_id);
  else
    UninstallPackage(app_info->package_name);
}

void RemoveCachedIcon(const std::string& icon_resource_id) {
  VLOG(2) << "Removing icon " << icon_resource_id;

  arc::mojom::AppInstance* app_instance = GET_APP_INSTANCE(RemoveCachedIcon);
  if (!app_instance)
    return;

  app_instance->RemoveCachedIcon(icon_resource_id);
}

bool ShowPackageInfo(const std::string& package_name,
                     mojom::ShowPackageInfoPage page,
                     int64_t display_id) {
  VLOG(2) << "Showing package info for " << package_name;

  if (auto* app_instance = GET_APP_INSTANCE(ShowPackageInfoOnPage)) {
    app_instance->ShowPackageInfoOnPage(package_name, page, display_id);
    return true;
  }

  if (auto* app_instance = GET_APP_INSTANCE(ShowPackageInfoOnPageDeprecated)) {
    app_instance->ShowPackageInfoOnPageDeprecated(package_name, page,
                                                  gfx::Rect());
    return true;
  }

  if (auto* app_instance = GET_APP_INSTANCE(ShowPackageInfoDeprecated)) {
    app_instance->ShowPackageInfoDeprecated(package_name, gfx::Rect());
    return true;
  }

  return false;
}

bool IsArcItem(content::BrowserContext* context, const std::string& id) {
  DCHECK(context);

  // Some unit tests use empty ids, some app ids are not valid ARC app ids.
  const ArcAppShelfId arc_app_shelf_id = ArcAppShelfId::FromString(id);
  if (!arc_app_shelf_id.valid())
    return false;

  const ArcAppListPrefs* const arc_prefs = ArcAppListPrefs::Get(context);
  if (!arc_prefs)
    return false;

  return arc_prefs->IsRegistered(arc_app_shelf_id.app_id());
}

void GetLocaleAndPreferredLanguages(const Profile* profile,
                                    std::string* out_locale,
                                    std::string* out_preferred_languages) {
  const PrefService::Preference* locale_pref =
      profile->GetPrefs()->FindPreference(
          ::language::prefs::kApplicationLocale);
  DCHECK(locale_pref);
  const std::string& locale = locale_pref->GetValue()->GetString();
  *out_locale =
      locale.empty() ? g_browser_process->GetApplicationLocale() : locale;

  // |preferredLanguages| consists of comma separated locale strings. It may be
  // empty or contain empty items, but those are ignored on ARC.  If an item
  // has no country code, it is derived in ARC.  In such a case, it may
  // conflict with another item in the list, then these will be dedupped (the
  // first one is taken) in ARC.
  *out_preferred_languages =
      profile->GetPrefs()->GetString(::language::prefs::kPreferredLanguages);
}

void GetAndroidId(
    base::OnceCallback<void(bool ok, int64_t android_id)> callback) {
  auto* app_instance = GET_APP_INSTANCE(GetAndroidId);
  if (!app_instance) {
    std::move(callback).Run(false, 0);
    return;
  }

  app_instance->GetAndroidId(base::BindOnce(std::move(callback), true));
}

std::string AppIdToArcPackageName(const std::string& app_id, Profile* profile) {
  ArcAppListPrefs* arc_prefs = ArcAppListPrefs::Get(profile);
  std::unique_ptr<ArcAppListPrefs::AppInfo> app_info =
      arc_prefs->GetApp(app_id);

  if (!app_info) {
    DLOG(ERROR) << "Couldn't retrieve ARC package name for AppID: " << app_id;
    return std::string();
  }
  return app_info->package_name;
}

std::string ArcPackageNameToAppId(const std::string& package_name,
                                  Profile* profile) {
  DCHECK(profile);
  ArcAppListPrefs* arc_prefs = ArcAppListPrefs::Get(profile);
  return arc_prefs ? arc_prefs->GetAppIdByPackageName(package_name)
                   : std::string();
}

void AddAppLaunchObserver(content::BrowserContext* context,
                          AppLaunchObserver* observer) {
  class ProfileDestroyedObserver : public ProfileObserver {
   public:
    ProfileDestroyedObserver() = default;

    ProfileDestroyedObserver(const ProfileDestroyedObserver&) = delete;
    ProfileDestroyedObserver& operator=(const ProfileDestroyedObserver&) =
        delete;

    ~ProfileDestroyedObserver() override = default;

    void Observe(Profile* profile) {
      if (!observed_profiles_.IsObservingSource(profile))
        observed_profiles_.AddObservation(profile);
    }

    void OnProfileWillBeDestroyed(Profile* profile) override {
      observed_profiles_.RemoveObservation(profile);
      GetAppLaunchObserverMap()->erase(profile);
    }

   private:
    base::ScopedMultiSourceObservation<Profile, ProfileObserver>
        observed_profiles_{this};
  };
  static base::NoDestructor<ProfileDestroyedObserver>
      profile_destroyed_observer;

  AppLaunchObserverMap* const map = GetAppLaunchObserverMap();
  auto result =
      map->emplace(std::piecewise_construct, std::forward_as_tuple(context),
                   std::forward_as_tuple());
  profile_destroyed_observer->Observe(Profile::FromBrowserContext(context));
  result.first->second.AddObserver(observer);
}

void RemoveAppLaunchObserver(content::BrowserContext* context,
                             AppLaunchObserver* observer) {
  AppLaunchObserverMap* const map = GetAppLaunchObserverMap();
  auto it = map->find(context);
  if (it != map->end())
    it->second.RemoveObserver(observer);
}

const std::string GetAppFromAppOrGroupId(content::BrowserContext* context,
                                         const std::string& app_or_group_id) {
  const arc::ArcAppShelfId app_shelf_id =
      arc::ArcAppShelfId::FromString(app_or_group_id);
  if (!app_shelf_id.has_shelf_group_id())
    return app_shelf_id.app_id();

  const ArcAppListPrefs* const prefs = ArcAppListPrefs::Get(context);
  DCHECK(prefs);

  // Try to find a shortcut with requested shelf group id.
  const std::vector<std::string> app_ids = prefs->GetAppIds();
  for (const auto& app_id : app_ids) {
    std::unique_ptr<ArcAppListPrefs::AppInfo> app_info = prefs->GetApp(app_id);
    DCHECK(app_info);
    if (!app_info || !app_info->shortcut)
      continue;
    const arc::ArcAppShelfId shortcut_shelf_id =
        arc::ArcAppShelfId::FromIntentAndAppId(app_info->intent_uri, app_id);
    if (shortcut_shelf_id.has_shelf_group_id() &&
        shortcut_shelf_id.shelf_group_id() == app_shelf_id.shelf_group_id()) {
      return app_id;
    }
  }

  // Shortcut with requested shelf group id was not found, use app id as
  // fallback.
  return app_shelf_id.app_id();
}

void ExecuteArcShortcutCommand(content::BrowserContext* context,
                               const std::string& id,
                               const std::string& shortcut_id,
                               int64_t display_id) {
  const arc::ArcAppShelfId arc_shelf_id = arc::ArcAppShelfId::FromString(id);
  DCHECK(arc_shelf_id.valid());
  arc::LaunchAppShortcutItem(context, arc_shelf_id.app_id(), shortcut_id,
                             display_id);

  // Send a training signal to the search controller.
  AppListClientImpl* app_list_client_impl = AppListClientImpl::GetInstance();
  if (!app_list_client_impl)
    return;

  app_list::LaunchData launch_data;
  // TODO(crbug.com/1199206): This should set launch_data.launched_from.
  launch_data.id =
      ConstructArcAppShortcutUrl(arc_shelf_id.app_id(), shortcut_id),
  launch_data.result_type = ash::AppListSearchResultType::kArcAppShortcut;
  launch_data.ranking_item_type = app_list::RankingItemType::kArcAppShortcut;
  app_list_client_impl->search_controller()->Train(std::move(launch_data));
}

void RecordPlayStoreLaunchWithinAWeek(PrefService* prefs, bool launched) {
  if (!prefs->GetBoolean(arc::prefs::kArcPlayStoreLaunchMetricCanBeRecorded))
    return;
  auto time_oobe_finished = prefs->GetTime(ash::prefs::kOobeOnboardingTime);
  if (time_oobe_finished.is_null())
    return;
  bool within_a_week = base::Time::Now() - time_oobe_finished < base::Days(7);
  if (within_a_week && !launched)
    return;
  base::UmaHistogramBoolean("Arc.PlayStoreLaunchWithinAWeek", within_a_week);
  prefs->ClearPref(arc::prefs::kArcPlayStoreLaunchMetricCanBeRecorded);
}

}  // namespace arc
