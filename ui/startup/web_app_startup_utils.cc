// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/startup/web_app_startup_utils.h"

#include <memory>
#include <utility>
#include <vector>

#include "base/bind.h"
#include "base/callback.h"
#include "base/check.h"
#include "base/command_line.h"
#include "base/containers/contains.h"
#include "base/feature_list.h"
#include "base/files/file_path.h"
#include "base/location.h"
#include "base/memory/raw_ptr.h"
#include "base/memory/ref_counted.h"
#include "base/no_destructor.h"
#include "base/strings/string_util.h"
#include "build/build_config.h"
#include "chrome/browser/apps/app_service/app_service_proxy.h"
#include "chrome/browser/apps/app_service/app_service_proxy_factory.h"
#include "chrome/browser/apps/app_service/launch_utils.h"
#include "chrome/browser/profiles/keep_alive/profile_keep_alive_types.h"
#include "chrome/browser/profiles/keep_alive/scoped_profile_keep_alive.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/ui/browser.h"
#include "chrome/browser/ui/browser_dialogs.h"
#include "chrome/browser/ui/startup/infobar_utils.h"
#include "chrome/browser/ui/startup/launch_mode_recorder.h"
#include "chrome/browser/ui/startup/startup_browser_creator.h"
#include "chrome/browser/ui/startup/startup_browser_creator_impl.h"
#include "chrome/browser/ui/startup/startup_types.h"
#include "chrome/browser/web_applications/os_integration/os_integration_manager.h"
#include "chrome/browser/web_applications/os_integration/web_app_file_handler_manager.h"
#include "chrome/browser/web_applications/web_app.h"
#include "chrome/browser/web_applications/web_app_id.h"
#include "chrome/browser/web_applications/web_app_provider.h"
#include "chrome/browser/web_applications/web_app_registrar.h"
#include "chrome/browser/web_applications/web_app_registry_update.h"
#include "chrome/browser/web_applications/web_app_sync_bridge.h"
#include "chrome/browser/web_applications/web_app_utils.h"
#include "chrome/common/chrome_features.h"
#include "chrome/common/chrome_switches.h"
#include "components/keep_alive_registry/keep_alive_types.h"
#include "components/keep_alive_registry/scoped_keep_alive.h"
#include "third_party/blink/public/common/custom_handlers/protocol_handler_utils.h"
#include "third_party/blink/public/common/security/protocol_handler_security_level.h"
#include "url/gurl.h"

namespace web_app {
namespace startup {

namespace {

base::OnceClosure& GetStartupDoneCallback() {
  static base::NoDestructor<base::OnceClosure> instance;
  return *instance;
}

// Encapsulates web app startup logic. This object keeps itself alive via ref
// counting, attaching a reference to each callback in its control flow. It will
// be destroyed after a window is created or it has been determined that no
// window should be created.
class StartupWebAppCreator
    : public base::RefCountedThreadSafe<StartupWebAppCreator> {
 public:
  // Factory to create a `StartupWebAppCreator` to handle the given command
  // line. Will return false if this launch will not be handled as a web app
  // launch, or true if it will.
  static bool MaybeHandleWebAppLaunch(
      const base::CommandLine& command_line,
      const base::FilePath& cur_dir,
      Profile* profile,
      chrome::startup::IsFirstRun is_first_run) {
    std::string app_id = command_line.GetSwitchValueASCII(switches::kAppId);
    // There must be a kAppId switch arg in the command line to launch.
    if (app_id.empty())
      return false;

    base::AdoptRef(new StartupWebAppCreator(command_line, cur_dir, profile,
                                            is_first_run, app_id))
        ->Start();
    return true;
  }

  REQUIRE_ADOPTION_FOR_REFCOUNTED_TYPE();

 private:
  friend class base::RefCountedThreadSafe<StartupWebAppCreator>;

  enum class LaunchResult {
    kHandled,
    kNotHandled,
  };

  StartupWebAppCreator(const base::CommandLine& command_line,
                       const base::FilePath& cur_dir,
                       Profile* profile,
                       chrome::startup::IsFirstRun is_first_run,
                       const AppId& app_id)
      : command_line_(command_line),
        cur_dir_(cur_dir),
        profile_(profile),
        is_first_run_(is_first_run),
        app_id_(app_id),
        web_app_launch_manager_(profile),
        profile_keep_alive_(
            profile,
            ProfileKeepAliveOrigin::kWebAppPermissionDialogWindow),
        keep_alive_(KeepAliveOrigin::WEB_APP_INTENT_PICKER,
                    KeepAliveRestartOption::DISABLED) {}

  ~StartupWebAppCreator() {
    auto startup_done = std::move(GetStartupDoneCallback());
    if (startup_done)
      std::move(startup_done).Run();
  }

  void Start() {
    WebAppProvider* const provider = WebAppProvider::GetForWebApps(profile_);
    DCHECK(provider);
    provider->on_registry_ready().Post(
        FROM_HERE, base::BindOnce(&StartupWebAppCreator::OnAppRegistryReady,
                                  base::WrapRefCounted(this)));
  }

  void OnAppRegistryReady() {
    if (MaybeLaunchProtocolHandler() == LaunchResult::kHandled)
      return;

    DCHECK(protocol_url_.is_empty());

    if (MaybeLaunchFileHandler() == LaunchResult::kHandled)
      return;

    DCHECK(file_launch_infos_.empty());

    launch_mode_ = LaunchMode::kAsWebAppInWindowByAppId;

    // Fall back to a normal app launch. This opens an empty browser window if
    // the app_id is invalid.
    LaunchApp();
  }

  void LaunchApp() {
    if (file_launch_infos_.empty()) {
      absl::optional<GURL> protocol;
      if (!protocol_url_.is_empty())
        protocol = protocol_url_;

      web_app_launch_manager_.LaunchApplication(
          app_id_, command_line_, cur_dir_,
          /*url_handler_launch_url=*/absl::nullopt, protocol,
          /*file_launch_url=*/absl::nullopt, /*launch_files=*/{},
          base::BindOnce(&StartupWebAppCreator::OnAppLaunched,
                         base::WrapRefCounted(this)));
      return;
    }

    for (const auto& [url, paths] : file_launch_infos_) {
      web_app_launch_manager_.LaunchApplication(
          app_id_, command_line_, cur_dir_,
          /*url_handler_launch_url=*/absl::nullopt,
          /*protocol_handler_launch_url=*/absl::nullopt,
          /*file_launch_url=*/url, /*launch_files=*/paths,
          base::BindOnce(&StartupWebAppCreator::OnAppLaunched,
                         base::WrapRefCounted(this)));
    }
  }

  // Determines if the launch is a protocol handler launch. If so, takes
  // responsibility for the rest of the launch process.
  LaunchResult MaybeLaunchProtocolHandler() {
    GURL protocol_url;
    base::CommandLine::StringVector args = command_line_.GetArgs();
    for (const auto& arg : args) {
#if BUILDFLAG(IS_WIN)
      GURL potential_protocol(base::AsStringPiece16(arg));
#else
      GURL potential_protocol(arg);
#endif  // BUILDFLAG(IS_WIN)
      // protocol_url is checked for validity later with getting the provider
      // and consulting the os_integration_manager. However because that process
      // has a wait for "on_registry_ready()", `potential_protocol` checks for
      // blink::IsValidCustomHandlerScheme() here to avoid loading the
      // WebAppProvider with a false positive.
      if (potential_protocol.is_valid() &&
          blink::IsValidCustomHandlerScheme(
              potential_protocol.scheme(),
              blink::ProtocolHandlerSecurityLevel::kStrict)) {
        protocol_url = std::move(potential_protocol);
        break;
      }
    }
    if (protocol_url.is_empty())
      return LaunchResult::kNotHandled;

    // Check if the user has already disallowed this app to launch the protocol.
    // This check takes priority over checking if the protocol is handled
    // by the application.
    WebAppProvider* const provider = WebAppProvider::GetForWebApps(profile_);
    DCHECK(provider->on_registry_ready().is_signaled());
    WebAppRegistrar& registrar = provider->registrar();
    if (registrar.IsDisallowedLaunchProtocol(app_id_, protocol_url.scheme())) {
      // If disallowed, return `kHandled` to signal that the launch is spoken
      // for, but do not launch a browser or app window. `this` will be deleted.
      return LaunchResult::kHandled;
    }

    // Check if this app has registered as a handler for the protocol.
    if (!registrar.IsRegisteredLaunchProtocol(app_id_, protocol_url.scheme()))
      return LaunchResult::kNotHandled;

    protocol_url_ = protocol_url;

    // `this` will stay alive until `launch_callback` is executed or destroyed.
    auto launch_callback =
        base::BindOnce(&StartupWebAppCreator::OnUserDecisionDialogCompleted,
                       base::WrapRefCounted(this));

    // Check if we have permission to launch the app directly.
    if (registrar.IsAllowedLaunchProtocol(app_id_, protocol_url_.scheme())) {
      std::move(launch_callback)
          .Run(/*allowed=*/true, /*remember_user_choice=*/false);
    } else {
      chrome::ShowWebAppProtocolLaunchDialog(protocol_url_, profile_, app_id_,
                                             std::move(launch_callback));
    }
    return LaunchResult::kHandled;
  }

  // Determines if the launch is a file handler launch. If so, takes
  // responsibility for the rest of the launch process.
  LaunchResult MaybeLaunchFileHandler() {
    std::vector<base::FilePath> launch_files =
        apps::GetLaunchFilesFromCommandLine(command_line_);
    if (launch_files.empty())
      return LaunchResult::kNotHandled;

    WebAppProvider* const provider = WebAppProvider::GetForWebApps(profile_);
    file_launch_infos_ = provider->os_integration_manager()
                             .file_handler_manager()
                             .GetMatchingFileHandlerUrls(app_id_, launch_files);
    if (file_launch_infos_.empty())
      return LaunchResult::kNotHandled;

    const WebApp* web_app = provider->registrar().GetAppById(app_id_);
    DCHECK(web_app);

    // `this` will stay alive until `launch_callback` is executed or destroyed.
    auto launch_callback =
        base::BindOnce(&StartupWebAppCreator::OnUserDecisionDialogCompleted,
                       base::WrapRefCounted(this));

    switch (web_app->file_handler_approval_state()) {
      case ApiApprovalState::kRequiresPrompt:
        chrome::ShowWebAppFileLaunchDialog(launch_files, profile_, app_id_,
                                           std::move(launch_callback));
        break;
      case ApiApprovalState::kAllowed:
        std::move(launch_callback)
            .Run(/*allowed=*/true, /*remember_user_choice=*/false);
        break;
      case ApiApprovalState::kDisallowed:
        // The disallowed case should have been handled by
        // `GetMatchingFileHandlerURL()`.
        NOTREACHED();
        break;
    }
    return LaunchResult::kHandled;
  }

  void OnPersistUserChoiceCompleted(bool allowed) {
    if (allowed)
      LaunchApp();
    // `this` will be deleted.
  }

  void OnUserDecisionDialogCompleted(bool allowed, bool remember_user_choice) {
    // `this` will stay alive until `persist_callback` is executed or destroyed.
    auto persist_callback =
        base::BindOnce(&StartupWebAppCreator::OnPersistUserChoiceCompleted,
                       base::WrapRefCounted(this), allowed);

    if (remember_user_choice) {
      if (!protocol_url_.is_empty()) {
        PersistProtocolHandlersUserChoice(profile_, app_id_, protocol_url_,
                                          allowed, std::move(persist_callback));
      } else {
        DCHECK(!file_launch_infos_.empty());
        PersistFileHandlersUserChoice(profile_, app_id_, allowed,
                                      std::move(persist_callback));
      }
    } else {
      std::move(persist_callback).Run();
    }
  }

  void OnAppLaunched(Browser* browser, apps::LaunchContainer container) {
    // The finalization step should only occur for the first app launch.
    if (app_window_has_been_launched_)
      return;

    FinalizeWebAppLaunch(launch_mode_, command_line_, is_first_run_, browser,
                         container);
    app_window_has_been_launched_ = true;
  }

  // Command line for this launch.
  const base::CommandLine command_line_;
  const base::FilePath cur_dir_;
  const raw_ptr<Profile> profile_;
  chrome::startup::IsFirstRun is_first_run_;

  // The app id for this launch, corresponding to --app-id on the command line.
  const AppId app_id_;

  WebAppLaunchManager web_app_launch_manager_;

  // This object keeps the profile and browser process alive while determining
  // whether to launch a window.
  ScopedProfileKeepAlive profile_keep_alive_;
  ScopedKeepAlive keep_alive_;

  absl::optional<LaunchMode> launch_mode_;

  // At most one of the following members should be non-empty.
  // If non-empty, this launch will be treated as a protocol handler launch.
  GURL protocol_url_;

  // If non-empty, this launch will be treated as a file handler launch.
  WebAppFileHandlerManager::LaunchInfos file_launch_infos_;

  // True after at least one app window has been launched.
  bool app_window_has_been_launched_ = false;
};

}  // namespace

bool MaybeHandleWebAppLaunch(const base::CommandLine& command_line,
                             const base::FilePath& cur_dir,
                             Profile* profile,
                             chrome::startup::IsFirstRun is_first_run) {
  return StartupWebAppCreator::MaybeHandleWebAppLaunch(command_line, cur_dir,
                                                       profile, is_first_run);
}

void FinalizeWebAppLaunch(absl::optional<LaunchMode> app_launch_mode,
                          const base::CommandLine& command_line,
                          chrome::startup::IsFirstRun is_first_run,
                          Browser* browser,
                          apps::LaunchContainer container) {
  if (!browser)
    return;

  LaunchMode mode;
  switch (container) {
    case apps::LaunchContainer::kLaunchContainerWindow:
      DCHECK(browser->is_type_app());
      mode = app_launch_mode.value_or(LaunchMode::kAsWebAppInWindowOther);
      break;
    case apps::LaunchContainer::kLaunchContainerTab:
      DCHECK(!browser->is_type_app());
      mode = LaunchMode::kAsWebAppInTab;
      break;
    case apps::LaunchContainer::kLaunchContainerPanelDeprecated:
      NOTREACHED();
      [[fallthrough]];
    case apps::LaunchContainer::kLaunchContainerNone:
      DCHECK(!browser->is_type_app());
      mode = LaunchMode::kUnknownWebApp;
      break;
  }

  LaunchModeRecorder().SetLaunchMode(mode);

  AddInfoBarsIfNecessary(browser, browser->profile(), command_line,
                         is_first_run,
                         /*is_web_app=*/true);

  StartupBrowserCreatorImpl::MaybeToggleFullscreen(browser);
}

void SetStartupDoneCallbackForTesting(base::OnceClosure callback) {
  GetStartupDoneCallback() = std::move(callback);
}

}  // namespace startup
}  // namespace web_app
