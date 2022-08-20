// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/webui/chromeos/login/gaia_screen_handler.h"

#include <algorithm>
#include <memory>
#include <string>
#include <utility>

#include "ash/components/login/auth/challenge_response/cert_utils.h"
#include "ash/components/login/auth/public/cryptohome_key_constants.h"
#include "ash/components/login/auth/public/saml_password_attributes.h"
#include "ash/components/login/auth/public/sync_trusted_vault_keys.h"
#include "ash/components/login/auth/public/user_context.h"
#include "ash/components/settings/cros_settings_names.h"
#include "ash/constants/ash_features.h"
#include "ash/constants/ash_switches.h"
#include "ash/public/cpp/login_screen.h"
#include "base/bind.h"
#include "base/callback.h"
#include "base/callback_helpers.h"
#include "base/containers/contains.h"
#include "base/containers/flat_set.h"
#include "base/feature_list.h"
#include "base/guid.h"
#include "base/i18n/message_formatter.h"
#include "base/i18n/number_formatting.h"
#include "base/json/json_reader.h"
#include "base/logging.h"
#include "base/memory/ref_counted.h"
#include "base/metrics/histogram_functions.h"
#include "base/strings/string_util.h"
#include "base/strings/utf_string_conversions.h"
#include "base/system/sys_info.h"
#include "base/task/thread_pool.h"
#include "base/timer/timer.h"
#include "base/trace_event/trace_event.h"
#include "base/values.h"
#include "chrome/browser/ash/authpolicy/authpolicy_helper.h"
#include "chrome/browser/ash/login/helper.h"
#include "chrome/browser/ash/login/login_pref_names.h"
#include "chrome/browser/ash/login/reauth_stats.h"
#include "chrome/browser/ash/login/saml/public_saml_url_fetcher.h"
#include "chrome/browser/ash/login/saml/saml_metric_utils.h"
#include "chrome/browser/ash/login/screens/network_error.h"
#include "chrome/browser/ash/login/screens/saml_confirm_password_screen.h"
#include "chrome/browser/ash/login/screens/signin_fatal_error_screen.h"
#include "chrome/browser/ash/login/session/user_session_manager.h"
#include "chrome/browser/ash/login/signin_partition_manager.h"
#include "chrome/browser/ash/login/startup_utils.h"
#include "chrome/browser/ash/login/ui/login_display_host.h"
#include "chrome/browser/ash/login/ui/login_display_host_webui.h"
#include "chrome/browser/ash/login/ui/signin_ui.h"
#include "chrome/browser/ash/login/ui/user_adding_screen.h"
#include "chrome/browser/ash/login/users/chrome_user_manager.h"
#include "chrome/browser/ash/login/users/chrome_user_manager_util.h"
#include "chrome/browser/ash/login/wizard_context.h"
#include "chrome/browser/ash/policy/core/browser_policy_connector_ash.h"
#include "chrome/browser/ash/profiles/profile_helper.h"
#include "chrome/browser/ash/profiles/signin_profile_handler.h"
#include "chrome/browser/ash/settings/cros_settings.h"
#include "chrome/browser/browser_process.h"
#include "chrome/browser/browser_process_platform_part.h"
#include "chrome/browser/certificate_provider/certificate_provider_service.h"
#include "chrome/browser/certificate_provider/certificate_provider_service_factory.h"
#include "chrome/browser/certificate_provider/pin_dialog_manager.h"
#include "chrome/browser/lifetime/browser_shutdown.h"
#include "chrome/browser/net/nss_temp_certs_cache_chromeos.h"
#include "chrome/browser/net/system_network_context_manager.h"
#include "chrome/browser/policy/networking/device_network_configuration_updater_ash.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/ui/webui/chromeos/login/cookie_waiter.h"
#include "chrome/browser/ui/webui/chromeos/login/enrollment_screen_handler.h"
#include "chrome/browser/ui/webui/chromeos/login/online_login_helper.h"
#include "chrome/browser/ui/webui/chromeos/login/reset_screen_handler.h"
#include "chrome/browser/ui/webui/chromeos/login/saml_confirm_password_handler.h"
#include "chrome/browser/ui/webui/chromeos/login/signin_fatal_error_screen_handler.h"
#include "chrome/browser/ui/webui/chromeos/login/signin_screen_handler.h"
#include "chrome/browser/ui/webui/chromeos/login/user_creation_screen_handler.h"
#include "chrome/browser/ui/webui/signin/signin_utils.h"
#include "chrome/common/channel_info.h"
#include "chrome/common/chrome_features.h"
#include "chrome/common/pref_names.h"
#include "chrome/grit/generated_resources.h"
#include "chrome/installer/util/google_update_settings.h"
#include "chromeos/components/onc/certificate_scope.h"
#include "chromeos/components/security_token_pin/constants.h"
#include "chromeos/components/security_token_pin/error_generator.h"
#include "chromeos/constants/devicetype.h"
#include "chromeos/strings/grit/chromeos_strings.h"
#include "chromeos/version/version_loader.h"
#include "components/login/base_screen_handler_utils.h"
#include "components/login/localized_values_builder.h"
#include "components/policy/proto/chrome_device_policy.pb.h"
#include "components/prefs/pref_service.h"
#include "components/strings/grit/components_strings.h"
#include "components/sync/base/features.h"
#include "components/user_manager/known_user.h"
#include "components/user_manager/user_manager.h"
#include "components/version_info/version_info.h"
#include "content/public/browser/browser_thread.h"
#include "content/public/browser/render_frame_host.h"
#include "content/public/browser/storage_partition.h"
#include "google_apis/gaia/gaia_auth_util.h"
#include "google_apis/gaia/gaia_urls.h"
#include "mojo/public/cpp/bindings/callback_helpers.h"
#include "net/base/net_errors.h"
#include "net/cert/x509_certificate.h"
#include "services/network/public/mojom/network_context.mojom.h"
#include "third_party/abseil-cpp/absl/types/optional.h"
#include "ui/base/l10n/l10n_util.h"
#include "ui/chromeos/devicetype_utils.h"

// Enable VLOG level 1.
#undef ENABLED_VLOG_LEVEL
#define ENABLED_VLOG_LEVEL 1

using content::BrowserThread;
namespace em = enterprise_management;

namespace chromeos {

namespace {

const char kAuthIframeParentName[] = "signin-frame";

const char kEndpointGen[] = "1.0";

absl::optional<SyncTrustedVaultKeys> GetSyncTrustedVaultKeysForUserContext(
    const base::Value::Dict& js_object,
    const std::string& gaia_id) {
  if (!base::FeatureList::IsEnabled(
          ::syncer::kSyncTrustedVaultPassphraseRecovery)) {
    return absl::nullopt;
  }

  SyncTrustedVaultKeys parsed_keys = SyncTrustedVaultKeys::FromJs(js_object);
  if (parsed_keys.gaia_id() != gaia_id)
    return absl::nullopt;

  return absl::make_optional(std::move(parsed_keys));
}

// Must be kept consistent with ChromeOSSamlApiUsed in enums.xml
// These values are persisted to logs. Entries should not be renumbered and
// numeric values should never be reused
enum class ChromeOSSamlApiUsed {
  kNotSamlLogin = 0,
  kSamlApiUsed = 1,
  kSamlApiNotUsed = 2,
  kMaxValue = kSamlApiNotUsed,
};

void RecordAPILogin(bool is_third_party_idp, bool is_api_used) {
  ChromeOSSamlApiUsed login_type;
  if (!is_third_party_idp) {
    login_type = ChromeOSSamlApiUsed::kNotSamlLogin;
  } else if (is_api_used) {
    login_type = ChromeOSSamlApiUsed::kSamlApiUsed;
  } else {
    login_type = ChromeOSSamlApiUsed::kSamlApiNotUsed;
  }
  base::UmaHistogramEnumeration("ChromeOS.SAML.APILogin", login_type);
}

GaiaScreenHandler::GaiaScreenMode GetGaiaScreenMode(const std::string& email) {
  int authentication_behavior = 0;
  CrosSettings::Get()->GetInteger(kLoginAuthenticationBehavior,
                                  &authentication_behavior);
  if (authentication_behavior ==
      em::LoginAuthenticationBehaviorProto::SAML_INTERSTITIAL) {
    if (email.empty())
      return GaiaScreenHandler::GAIA_SCREEN_MODE_SAML_INTERSTITIAL;

    // If there's a populated email, we must check first that this user is using
    // SAML in order to decide whether to show the interstitial page.
    const user_manager::User* user = user_manager::UserManager::Get()->FindUser(
        user_manager::known_user::GetAccountId(email, std::string() /* id */,
                                               AccountType::UNKNOWN));

    if (user && user->using_saml())
      return GaiaScreenHandler::GAIA_SCREEN_MODE_SAML_INTERSTITIAL;
  }

  return GaiaScreenHandler::GAIA_SCREEN_MODE_DEFAULT;
}

std::string GetEnterpriseDomainManager() {
  policy::BrowserPolicyConnectorAsh* connector =
      g_browser_process->platform_part()->browser_policy_connector_ash();
  return connector->GetEnterpriseDomainManager();
}

std::string GetEnterpriseEnrollmentDomain() {
  policy::BrowserPolicyConnectorAsh* connector =
      g_browser_process->platform_part()->browser_policy_connector_ash();
  return connector->GetEnterpriseEnrollmentDomain();
}

std::string GetSSOProfile() {
  policy::BrowserPolicyConnectorAsh* connector =
      g_browser_process->platform_part()->browser_policy_connector_ash();
  return connector->GetSSOProfile();
}

std::string GetRealm() {
  policy::BrowserPolicyConnectorAsh* connector =
      g_browser_process->platform_part()->browser_policy_connector_ash();
  return connector->GetRealm();
}

std::string GetChromeType() {
  switch (chromeos::GetDeviceType()) {
    case chromeos::DeviceType::kChromebox:
      return "chromebox";
    case chromeos::DeviceType::kChromebase:
      return "chromebase";
    case chromeos::DeviceType::kChromebit:
      return "chromebit";
    case chromeos::DeviceType::kChromebook:
      return "chromebook";
    default:
      return "chromedevice";
  }
}

void UpdateAuthParams(base::Value* params, bool is_restrictive_proxy) {
  CrosSettings* cros_settings = CrosSettings::Get();
  bool allow_new_user = true;
  cros_settings->GetBoolean(kAccountsPrefAllowNewUser, &allow_new_user);

  // nosignup flow if new users are not allowed.
  if (!allow_new_user || is_restrictive_proxy)
    params->SetStringKey("flow", "nosignup");
}

bool ShouldCheckUserTypeBeforeAllowing() {
  if (!chromeos::features::IsFamilyLinkOnSchoolDeviceEnabled())
    return false;

  CrosSettings* cros_settings = CrosSettings::Get();
  bool family_link_allowed = false;
  cros_settings->GetBoolean(kAccountsPrefFamilyLinkAccountsAllowed,
                            &family_link_allowed);

  return family_link_allowed;
}

bool IsOnline(NetworkPortalDetector::CaptivePortalStatus status) {
  return status == NetworkPortalDetector::CAPTIVE_PORTAL_STATUS_ONLINE;
}

void GetVersionAndConsent(std::string* out_version, bool* out_consent) {
  *out_version = version_loader::GetVersion(version_loader::VERSION_SHORT);
  *out_consent = GoogleUpdateSettings::GetCollectStatsConsent();
}

user_manager::UserType CalculateUserType(const AccountId& account_id) {
  if (account_id.GetAccountType() == AccountType::ACTIVE_DIRECTORY)
    return user_manager::USER_TYPE_ACTIVE_DIRECTORY;

  return user_manager::USER_TYPE_REGULAR;
}

PinDialogManager* GetLoginScreenPinDialogManager() {
  DCHECK(ProfileHelper::IsSigninProfileInitialized());
  CertificateProviderService* certificate_provider_service =
      CertificateProviderServiceFactory::GetForBrowserContext(
          ProfileHelper::GetSigninProfile());
  return certificate_provider_service->pin_dialog_manager();
}

base::Value MakeSecurityTokenPinDialogParameters(
    bool enable_user_input,
    security_token_pin::ErrorLabel error_label,
    int attempts_left) {
  base::Value params(base::Value::Type::DICTIONARY);

  params.SetBoolKey("enableUserInput", enable_user_input);
  params.SetBoolKey("hasError",
                    error_label != security_token_pin::ErrorLabel::kNone);
  params.SetStringKey(
      "formattedError",
      GenerateErrorMessage(error_label, attempts_left, enable_user_input));
  if (attempts_left == -1) {
    params.SetStringKey("formattedAttemptsLeft", std::u16string());
  } else {
    params.SetStringKey(
        "formattedAttemptsLeft",
        GenerateErrorMessage(security_token_pin::ErrorLabel::kNone,
                             attempts_left, true));
  }
  return params;
}

bool ShouldPrepareForRecovery(const AccountId& account_id) {
  // Always return `true` if the testing switch is set. It will allow to test
  // the recovery without triggering the real recovery conditions which may be
  // difficult as of now.
  if (base::CommandLine::ForCurrentProcess()->HasSwitch(
          ash::switches::kForceCryptohomeRecoveryForTesting))
    return true;

  if (!account_id.is_valid())
    return false;
  // Cryptohome recovery is probably needed when password is entered incorrectly
  // for many times or password changed.
  // TODO(b/197615068): Add metric to record the number of times we prepared for
  // recovery and the number of times recovery is actually required.
  static const ash::ReauthReason kPossibleReasons[] = {
      ash::ReauthReason::INCORRECT_PASSWORD_ENTERED,
      ash::ReauthReason::INVALID_TOKEN_HANDLE,
      ash::ReauthReason::SYNC_FAILED,
      ash::ReauthReason::PASSWORD_UPDATE_SKIPPED,
      ash::ReauthReason::FORGOT_PASSWORD,
  };
  user_manager::KnownUser known_user(g_browser_process->local_state());
  absl::optional<int> reauth_reason = known_user.FindReauthReason(account_id);
  return reauth_reason.has_value() &&
         base::Contains(kPossibleReasons, reauth_reason.value());
}

}  // namespace

GaiaScreenHandler::GaiaScreenHandler(
    const scoped_refptr<NetworkStateInformer>& network_state_informer)
    : BaseScreenHandler(kScreenId),
      network_state_informer_(network_state_informer) {
  DCHECK(network_state_informer_.get());
}

GaiaScreenHandler::~GaiaScreenHandler() {
  if (is_security_token_pin_enabled_)
    GetLoginScreenPinDialogManager()->RemovePinDialogHost(this);
}

void GaiaScreenHandler::DisableRestrictiveProxyCheckForTest() {
  disable_restrictive_proxy_check_for_test_ = true;
}

void GaiaScreenHandler::LoadGaia(const login::GaiaContext& context) {
  auto partition_call = login::GetStartSigninSession(
      web_ui(), base::BindOnce(&GaiaScreenHandler::LoadGaiaWithPartition,
                               weak_factory_.GetWeakPtr(), context));

  if (!context.email.empty()) {
    const AccountId account_id = GetAccountId(
        context.email, std::string() /* id */, AccountType::UNKNOWN);
    const user_manager::User* const user =
        user_manager::UserManager::Get()->FindUser(account_id);

    if (user && user->using_saml() &&
        user->GetType() == user_manager::USER_TYPE_PUBLIC_ACCOUNT) {
      public_saml_url_fetcher_ =
          std::make_unique<PublicSamlUrlFetcher>(account_id);
      public_saml_url_fetcher_->Fetch(std::move(partition_call));
      return;
    }
  }
  public_saml_url_fetcher_.reset();
  std::move(partition_call).Run();
}

void GaiaScreenHandler::LoadGaiaWithPartition(
    const login::GaiaContext& context,
    const std::string& partition_name) {
  auto callback =
      base::BindOnce(&GaiaScreenHandler::OnSetCookieForLoadGaiaWithPartition,
                     weak_factory_.GetWeakPtr(), context, partition_name);
  if (context.gaps_cookie.empty()) {
    std::move(callback).Run(net::CookieAccessResult());
    return;
  }

  // When the network service is enabled the webRequest API doesn't allow
  // modification of the cookie header. So manually write the GAPS cookie into
  // the CookieManager.
  login::SigninPartitionManager* signin_partition_manager =
      login::SigninPartitionManager::Factory::GetForBrowserContext(
          Profile::FromWebUI(web_ui()));

  login::SetCookieForPartition(context, signin_partition_manager,
                               std::move(callback));
}

void GaiaScreenHandler::OnSetCookieForLoadGaiaWithPartition(
    const login::GaiaContext& context,
    const std::string& partition_name,
    net::CookieAccessResult result) {
  std::unique_ptr<std::string> version = std::make_unique<std::string>();
  std::unique_ptr<bool> consent = std::make_unique<bool>();
  base::OnceClosure get_version_and_consent =
      base::BindOnce(&GetVersionAndConsent, base::Unretained(version.get()),
                     base::Unretained(consent.get()));
  base::OnceClosure load_gaia = base::BindOnce(
      &GaiaScreenHandler::LoadGaiaWithPartitionAndVersionAndConsent,
      weak_factory_.GetWeakPtr(), context, partition_name,
      base::Owned(version.release()), base::Owned(consent.release()));
  base::ThreadPool::PostTaskAndReply(
      FROM_HERE, {base::MayBlock(), base::TaskPriority::USER_VISIBLE},
      std::move(get_version_and_consent), std::move(load_gaia));
}

void GaiaScreenHandler::LoadGaiaWithPartitionAndVersionAndConsent(
    const login::GaiaContext& context,
    const std::string& partition_name,
    const std::string* platform_version,
    const bool* collect_stats_consent) {
  base::Value params(base::Value::Type::DICTIONARY);

  // TODO(https://crbug.com/1338102): Looks like `forceReload` isn't used
  //                                  anywhere further. Remove?
  params.SetBoolKey("forceReload", context.force_reload);
  params.SetStringKey("gaiaId", context.gaia_id);
  params.SetBoolKey("readOnlyEmail", true);
  params.SetStringKey("email", context.email);

  UpdateAuthParams(&params, IsRestrictiveProxy());

  screen_mode_ = GetGaiaScreenMode(context.email);
  params.SetIntKey("screenMode", screen_mode_);

  const std::string app_locale = g_browser_process->GetApplicationLocale();
  if (!app_locale.empty())
    params.SetStringKey("hl", app_locale);

  std::string realm(GetRealm());
  if (!realm.empty()) {
    params.SetStringKey("realm", realm);
  }

  const std::string enterprise_enrollment_domain(
      GetEnterpriseEnrollmentDomain());
  const std::string enterprise_domain_manager(GetEnterpriseDomainManager());
  const std::string sso_profile(GetSSOProfile());

  if (!enterprise_enrollment_domain.empty()) {
    params.SetStringKey("enterpriseEnrollmentDomain",
                        enterprise_enrollment_domain);
  }
  if (!sso_profile.empty()) {
    params.SetStringKey("ssoProfile", sso_profile);
  }
  if (!enterprise_domain_manager.empty()) {
    params.SetStringKey("enterpriseDomainManager", enterprise_domain_manager);
  }
  params.SetBoolKey("enterpriseManagedDevice",
                    g_browser_process->platform_part()
                        ->browser_policy_connector_ash()
                        ->IsDeviceEnterpriseManaged());
  const AccountId& owner_account_id =
      user_manager::UserManager::Get()->GetOwnerAccountId();
  params.SetBoolKey("hasDeviceOwner", owner_account_id.is_valid());
  if (owner_account_id.is_valid() &&
      !::features::IsParentAccessCodeForOnlineLoginEnabled()) {
    // Some Autotest policy tests appear to wipe the user list in Local State
    // but preserve a policy file referencing an owner: https://crbug.com/850139
    const user_manager::User* owner_user =
        user_manager::UserManager::Get()->FindUser(owner_account_id);
    if (owner_user &&
        owner_user->GetType() == user_manager::UserType::USER_TYPE_CHILD) {
      params.SetStringKey("obfuscatedOwnerId", owner_account_id.GetGaiaId());
    }
  }

  params.SetStringKey("chromeType", GetChromeType());
  params.SetStringKey("clientId",
                      GaiaUrls::GetInstance()->oauth2_chrome_client_id());
  params.SetStringKey("clientVersion", version_info::GetVersionNumber());
  if (!platform_version->empty())
    params.SetStringKey("platformVersion", *platform_version);
  // Extended stable channel is not supported on Chrome OS Ash.
  params.SetStringKey("releaseChannel", chrome::GetChannelName(
                                            chrome::WithExtendedStable(false)));
  params.SetStringKey("endpointGen", kEndpointGen);

  std::string email_domain;
  if (CrosSettings::Get()->GetString(kAccountsPrefLoginScreenDomainAutoComplete,
                                     &email_domain) &&
      !email_domain.empty()) {
    params.SetStringKey("emailDomain", email_domain);
  }

  params.SetStringKey("gaiaUrl", GaiaUrls::GetInstance()->gaia_url().spec());
  switch (gaia_path_) {
    case GaiaPath::kDefault:
      // Use the default gaia signin path embedded/setup/v2/chromeos which is
      // set in authenticator.js
      break;
    case GaiaPath::kChildSignup:
      params.SetStringKey("gaiaPath",
                          GaiaUrls::GetInstance()
                              ->embedded_setup_chromeos_kid_signup_url()
                              .path()
                              .substr(1));
      break;
    case GaiaPath::kChildSignin:
      params.SetStringKey("gaiaPath",
                          GaiaUrls::GetInstance()
                              ->embedded_setup_chromeos_kid_signin_url()
                              .path()
                              .substr(1));
      break;
    case GaiaPath::kReauth:
      params.SetStringKey(
          "gaiaPath",
          GaiaUrls::GetInstance()->embedded_reauth_chromeos_url().path().substr(
              1));
      break;
  }

  // We only send `chromeos_board` Gaia URL parameter if user has opted into
  // sending device statistics.
  if (*collect_stats_consent)
    params.SetStringKey("lsbReleaseBoard", base::SysInfo::GetLsbReleaseBoard());

  params.SetStringKey("webviewPartitionName", partition_name);
  signin_partition_name_ = partition_name;

  params.SetBoolKey("extractSamlPasswordAttributes",
                    login::ExtractSamlPasswordAttributesEnabled());

  if (public_saml_url_fetcher_) {
    params.SetBoolKey("startsOnSamlPage", true);
    DCHECK(base::CommandLine::ForCurrentProcess()->HasSwitch(
        switches::kPublicAccountsSamlAclUrl));
    std::string saml_acl_url =
        base::CommandLine::ForCurrentProcess()->GetSwitchValueASCII(
            switches::kPublicAccountsSamlAclUrl);
    params.SetStringKey("samlAclUrl", saml_acl_url);
    if (public_saml_url_fetcher_->FetchSucceeded()) {
      params.SetStringKey("frameUrl",
                          public_saml_url_fetcher_->GetRedirectUrl());
    } else {
      LoginDisplayHost::default_host()->GetSigninUI()->ShowSigninError(
          SigninError::kFailedToFetchSamlRedirect, /*details=*/std::string());
      return;
    }
  }
  public_saml_url_fetcher_.reset();

  bool is_reauth = !context.email.empty();
  if (is_reauth && features::IsGaiaReauthEndpointEnabled()) {
    const AccountId account_id =
        GetAccountId(context.email, context.gaia_id, AccountType::GOOGLE);
    auto* user = user_manager::UserManager::Get()->FindUser(account_id);
    DCHECK(user);
    bool is_child_account = user && user->IsChild();
    // Enable the new endpoint for supervised account for now. We might expand
    // it to other account type in the future.
    if (is_child_account) {
      params.SetBoolKey("isSupervisedUser", is_child_account);
      params.SetBoolKey(
          "isDeviceOwner",
          account_id == user_manager::UserManager::Get()->GetOwnerAccountId());
    }
  }

  if (ash::features::IsCryptohomeRecoveryFlowEnabled() &&
      !gaia_reauth_request_token_.empty()) {
    params.SetStringKey("rart", gaia_reauth_request_token_);
  }

  PrefService* local_state = g_browser_process->local_state();
  if (local_state->IsManagedPreference(
          ash::prefs::kUrlParameterToAutofillSAMLUsername)) {
    params.SetStringKey("urlParameterToAutofillSAMLUsername",
                        local_state->GetString(
                            ash::prefs::kUrlParameterToAutofillSAMLUsername));
  }

  was_security_token_pin_canceled_ = false;

  frame_state_ = FRAME_STATE_LOADING;
  CallExternalAPI("loadAuthExtension", std::move(params));
}

void GaiaScreenHandler::ReloadGaia(bool force_reload) {
  if (frame_state_ == FRAME_STATE_LOADING && !force_reload) {
    VLOG(1) << "Skipping reloading of Gaia since gaia is loading.";
    return;
  }
  NetworkStateInformer::State state = network_state_informer_->state();
  if (state != NetworkStateInformer::ONLINE &&
      !signin_screen_handler_->proxy_auth_dialog_need_reload_) {
    VLOG(1) << "Skipping reloading of Gaia since network state="
            << NetworkStateInformer::StatusString(state);
    return;
  }

  signin_screen_handler_->proxy_auth_dialog_need_reload_ = false;
  VLOG(1) << "Reloading Gaia.";
  frame_state_ = FRAME_STATE_LOADING;
  LoadAuthExtension(force_reload);
}

void GaiaScreenHandler::DeclareLocalizedValues(
    ::login::LocalizedValuesBuilder* builder) {
  builder->Add("guestSignin", IDS_BROWSE_WITHOUT_SIGNING_IN_HTML);
  builder->Add("backButton", IDS_ACCNAME_BACK);
  builder->Add("closeButton", IDS_CLOSE);
  builder->Add("allowlistErrorConsumer", IDS_LOGIN_ERROR_ALLOWLIST);
  builder->Add("allowlistErrorEnterprise",
               IDS_ENTERPRISE_LOGIN_ERROR_ALLOWLIST);
  builder->Add("allowlistErrorEnterpriseAndFamilyLink",
               IDS_ENTERPRISE_AND_FAMILY_LINK_LOGIN_ERROR_ALLOWLIST);
  builder->Add("tryAgainButton", IDS_ALLOWLIST_ERROR_TRY_AGAIN_BUTTON);
  builder->Add("learnMoreButton", IDS_LEARN_MORE);
  builder->Add("gaiaLoading", IDS_LOGIN_GAIA_LOADING_MESSAGE);

  builder->AddF("loginWelcomeMessage", IDS_LOGIN_WELCOME_MESSAGE,
                ui::GetChromeOSDeviceTypeResourceId());
  builder->Add("enterpriseInfoMessage", IDS_LOGIN_DEVICE_MANAGED_BY_NOTICE);
  builder->Add("samlInterstitialMessage", IDS_LOGIN_SAML_INTERSTITIAL_MESSAGE);
  builder->Add("samlInterstitialChangeAccountLink",
               IDS_LOGIN_SAML_INTERSTITIAL_CHANGE_ACCOUNT_LINK_TEXT);
  builder->Add("samlInterstitialNextBtn",
               IDS_LOGIN_SAML_INTERSTITIAL_NEXT_BUTTON_TEXT);
  builder->Add("samlNotice", features::IsRedirectToDefaultIdPEnabled()
                                 ? IDS_LOGIN_SAML_NOTICE_SHORT
                                 : IDS_LOGIN_SAML_NOTICE);
  builder->Add("samlNoticeWithVideo", IDS_LOGIN_SAML_NOTICE_WITH_VIDEO);
  builder->Add("samlChangeProviderMessage",
               IDS_LOGIN_SAML_CHANGE_PROVIDER_MESSAGE);
  builder->Add("samlChangeProviderButton",
               IDS_LOGIN_SAML_CHANGE_PROVIDER_BUTTON);

  builder->Add("adPassChangeOldPasswordHint",
               IDS_AD_PASSWORD_CHANGE_OLD_PASSWORD_HINT);
  builder->Add("adPassChangeNewPasswordHint",
               IDS_AD_PASSWORD_CHANGE_NEW_PASSWORD_HINT);
  builder->Add("adPassChangeRepeatNewPasswordHint",
               IDS_AD_PASSWORD_CHANGE_REPEAT_NEW_PASSWORD_HINT);
  builder->Add("adPassChangeOldPasswordError",
               IDS_AD_PASSWORD_CHANGE_INVALID_PASSWORD_ERROR);
  builder->Add("adPassChangeNewPasswordRejected",
               IDS_AD_PASSWORD_CHANGE_NEW_PASSWORD_REJECTED_SHORT_ERROR);
  builder->Add("adPassChangePasswordsMismatch",
               IDS_AD_PASSWORD_CHANGE_PASSWORDS_MISMATCH_ERROR);

  builder->Add("securityTokenPinDialogTitle",
               IDS_SAML_SECURITY_TOKEN_PIN_DIALOG_TITLE);
  builder->Add("securityTokenPinDialogSubtitle",
               IDS_SAML_SECURITY_TOKEN_PIN_DIALOG_SUBTITLE);
}

void GaiaScreenHandler::GetAdditionalParameters(base::Value::Dict* dict) {
  dict->Set("isRedirectToDefaultIdPEnabled",
            base::Value(features::IsRedirectToDefaultIdPEnabled()));
}

void GaiaScreenHandler::InitializeDeprecated() {
  initialized_ = true;
  if (show_on_init_) {
    show_on_init_ = false;
    ShowGaiaScreenIfReady();
  }
}

void GaiaScreenHandler::RegisterMessages() {
  AddCallback("webviewLoadAborted",
              &GaiaScreenHandler::HandleWebviewLoadAborted);
  AddCallback("completeLogin", &GaiaScreenHandler::HandleCompleteLogin);
  AddCallback("launchSAMLPublicSession",
              &GaiaScreenHandler::HandleLaunchSAMLPublicSession);
  AddCallback("completeAuthentication",
              &GaiaScreenHandler::HandleCompleteAuthentication);
  AddCallback("usingSAMLAPI", &GaiaScreenHandler::HandleUsingSAMLAPI);
  AddCallback("recordSAMLProvider",
              &GaiaScreenHandler::HandleRecordSAMLProvider);
  AddCallback("samlChallengeMachineKey",
              &GaiaScreenHandler::HandleSamlChallengeMachineKey);
  AddCallback("loginWebuiReady", &GaiaScreenHandler::HandleGaiaUIReady);
  AddCallback("identifierEntered", &GaiaScreenHandler::HandleIdentifierEntered);
  AddCallback("authExtensionLoaded",
              &GaiaScreenHandler::HandleAuthExtensionLoaded);
  AddCallback("setIsFirstSigninStep",
              &GaiaScreenHandler::HandleIsFirstSigninStep);
  AddCallback("samlStateChanged", &GaiaScreenHandler::HandleSamlStateChanged);
  AddCallback("securityTokenPinEntered",
              &GaiaScreenHandler::HandleSecurityTokenPinEntered);
  AddCallback("onFatalError", &GaiaScreenHandler::HandleOnFatalError);
  AddCallback("removeUserByEmail", &GaiaScreenHandler::HandleUserRemoved);
  AddCallback("passwordEntered", &GaiaScreenHandler::HandlePasswordEntered);

  BaseScreenHandler::RegisterMessages();
}

void GaiaScreenHandler::OnPortalDetectionCompleted(
    const NetworkState* network,
    const NetworkPortalDetector::CaptivePortalStatus status) {
  VLOG(1) << "OnPortalDetectionCompleted "
          << NetworkPortalDetector::CaptivePortalStatusString(status);

  const NetworkPortalDetector::CaptivePortalStatus previous_status =
      captive_portal_status_;
  captive_portal_status_ = status;
  if (IsOnline(captive_portal_status_) == IsOnline(previous_status) ||
      disable_restrictive_proxy_check_for_test_ ||
      GetCurrentScreen() != kScreenId)
    return;

  LoadAuthExtension(true /* force */);
}

void GaiaScreenHandler::HandleIdentifierEntered(const std::string& user_email) {
  // We cannot tell a user type from the identifier, so we delay checking if
  // the account should be allowed.
  if (ShouldCheckUserTypeBeforeAllowing())
    return;

  if (LoginDisplayHost::default_host() &&
      !LoginDisplayHost::default_host()->IsUserAllowlisted(
          user_manager::known_user::GetAccountId(
              user_email, std::string() /* id */, AccountType::UNKNOWN),
          absl::nullopt)) {
    ShowAllowlistCheckFailedError();
  }
}

void GaiaScreenHandler::HandleAuthExtensionLoaded() {
  VLOG(1) << "Auth extension finished loading";
  auth_extension_being_loaded_ = false;
  // Recreate the client cert usage observer, in order to track only the certs
  // used during the current sign-in attempt.
  extension_provided_client_cert_usage_observer_ =
      std::make_unique<LoginClientCertUsageObserver>();

  // Clear old storage partitions after a new sign-in page is loaded. All
  // reference to the old storage partitions should be cleared.
  login::SigninPartitionManager* signin_partition_manager =
      login::SigninPartitionManager::Factory::GetForBrowserContext(
          Profile::FromWebUI(web_ui()));
  signin_partition_manager->DisposeOldStoragePartitions();
}

void GaiaScreenHandler::HandleWebviewLoadAborted(int error_code) {
  if (error_code == net::ERR_INVALID_AUTH_CREDENTIALS) {
    // Silently ignore this error - it is used as an intermediate state for
    // committed interstitials (see https://crbug.com/1049349 for details).
    return;
  }
  if (error_code == net::ERR_ABORTED) {
    LOG(WARNING) << "Ignoring Gaia webview error: "
                 << net::ErrorToShortString(error_code);
    return;
  }
  if ((was_security_token_pin_canceled_ && error_code == net::ERR_FAILED) ||
      (is_security_token_pin_dialog_running() &&
       error_code == net::ERR_TIMED_OUT)) {
    // Specific errors are expected when the security token PIN is aborted
    // (either with a generic failure if the user canceled the dialog, or with a
    // timeout error if the user didn't enter it on time). In that case, return
    // the user back to the first sign-in step instead of showing the network
    // error screen.
    ReloadGaia(/*force_reload=*/true);
    return;
  }

  frame_error_ = static_cast<net::Error>(error_code);
  LOG(ERROR) << "Gaia webview error: " << net::ErrorToShortString(error_code);
  NetworkError::ErrorReason error_reason =
      NetworkError::ERROR_REASON_FRAME_ERROR;
  frame_state_ = FRAME_STATE_ERROR;
  UpdateState(error_reason);
}

AccountId GaiaScreenHandler::GetAccountId(
    const std::string& authenticated_email,
    const std::string& id,
    const AccountType& account_type) const {
  const std::string canonicalized_email =
      gaia::CanonicalizeEmail(gaia::SanitizeEmail(authenticated_email));

  const AccountId account_id = user_manager::known_user::GetAccountId(
      authenticated_email, id, account_type);

  if (account_id.GetUserEmail() != canonicalized_email) {
    LOG(WARNING) << "Existing user '" << account_id.GetUserEmail()
                 << "' authenticated by alias '" << canonicalized_email << "'.";
  }

  return account_id;
}

void GaiaScreenHandler::HandleCompleteAuthentication(
    const std::string& gaia_id,
    const std::string& email,
    const std::string& password_value,
    const base::Value::List& scraped_saml_passwords_value,
    bool using_saml,
    const base::Value::List& services_list,
    bool services_provided,
    const base::Value::Dict& password_attributes,
    const base::Value::Dict& sync_trusted_vault_keys) {
  if (!LoginDisplayHost::default_host())
    return;

  DCHECK(!email.empty());
  DCHECK(!gaia_id.empty());

  if (!using_saml) {
    base::UmaHistogramEnumeration("OOBE.GaiaScreen.SuccessLoginRequests",
                                  login_request_variant_);
  }
  auto scraped_saml_passwords =
      ::login::ConvertToStringList(scraped_saml_passwords_value);
  const auto services = ::login::ConvertToStringList(services_list);
  auto password = password_value;

  if (IsSamlUserPasswordless()) {
    // In the passwordless case, the user data will be protected by non password
    // based mechanisms. Clear anything that got collected into passwords.
    scraped_saml_passwords.clear();
    password.clear();
  }

  if (using_saml && !using_saml_api_ && !IsSamlUserPasswordless()) {
    RecordScrapedPasswordCount(scraped_saml_passwords.size());
  }

  const AccountId account_id =
      GetAccountId(email, gaia_id, AccountType::GOOGLE);
  // Execute delayed allowlist check that is based on user type. If Gaia done
  // times out and doesn't provide us with services list try to use a saved
  // UserType.
  const user_manager::UserType user_type =
      services_provided
          ? login::GetUsertypeFromServicesString(services)
          : user_manager::UserManager::Get()->GetUserType(account_id);
  if (ShouldCheckUserTypeBeforeAllowing() &&
      !LoginDisplayHost::default_host()->IsUserAllowlisted(account_id,
                                                           user_type)) {
    ShowAllowlistCheckFailedError();
    return;
  }

  // Record amount of time from the moment screen was shown till
  // completeAuthentication signal come. Only for no SAML flow and only during
  // first run in OOBE.
  if (elapsed_timer_ && !using_saml &&
      session_manager::SessionManager::Get()->session_state() ==
          session_manager::SessionState::OOBE) {
    base::UmaHistogramMediumTimes("OOBE.GaiaLoginTime",
                                  elapsed_timer_->Elapsed());
    elapsed_timer_.reset();
  }

  const std::string sanitized_email = gaia::SanitizeEmail(email);
  LoginDisplayHost::default_host()->SetDisplayEmail(sanitized_email);

  OnlineLoginHelper::CompleteLoginCallback complete_login_callback =
      base::BindOnce([](std::unique_ptr<UserContext> user_context) {
        LoginDisplayHost::default_host()->CompleteLogin(*user_context);
      });

  if (password.empty() && !IsSamlUserPasswordless()) {
    CHECK_NE(scraped_saml_passwords.size(), 1);
    complete_login_callback = base::BindOnce(
        &GaiaScreenHandler::SAMLConfirmPassword, weak_factory_.GetWeakPtr(),
        std::move(scraped_saml_passwords));
  }

  login::SigninPartitionManager* signin_partition_manager =
      login::SigninPartitionManager::Factory::GetForBrowserContext(
          Profile::FromWebUI(web_ui()));
  online_login_helper_ = std::make_unique<OnlineLoginHelper>(
      signin_partition_name_, signin_partition_manager,
      base::BindOnce(&GaiaScreenHandler::OnCookieWaitTimeout,
                     weak_factory_.GetWeakPtr()),
      std::move(complete_login_callback));

  auto user_context = std::make_unique<UserContext>();
  SigninError error;
  if (!login::BuildUserContextForGaiaSignIn(
          user_type, account_id, using_saml, using_saml_api_, password,
          SamlPasswordAttributes::FromJs(password_attributes),
          GetSyncTrustedVaultKeysForUserContext(sync_trusted_vault_keys,
                                                gaia_id),
          *extension_provided_client_cert_usage_observer_, user_context.get(),
          &error)) {
    LoginDisplayHost::default_host()->GetSigninUI()->ShowSigninError(
        error, /*details=*/std::string());
    return;
  }

  online_login_helper_->SetUserContext(std::move(user_context));
  online_login_helper_->RequestCookiesAndCompleteAuthentication();

  if (test_expects_complete_login_) {
    VLOG(2) << "Complete test login for " << sanitized_email
            << ", requested=" << test_user_;

    test_expects_complete_login_ = false;
    test_user_.clear();
    test_pass_.clear();
  }
}

void GaiaScreenHandler::OnCookieWaitTimeout() {
  LoadAuthExtension(true /* force */);
  LoginDisplayHost::default_host()->GetSigninUI()->ShowSigninError(
      SigninError::kCookieWaitTimeout, /*details=*/std::string());
}

void GaiaScreenHandler::HandleCompleteLogin(const std::string& gaia_id,
                                            const std::string& typed_email,
                                            const std::string& password,
                                            bool using_saml) {
  VLOG(1) << "HandleCompleteLogin";
  DoCompleteLogin(gaia_id, typed_email, password, using_saml);
}

void GaiaScreenHandler::HandleLaunchSAMLPublicSession(
    const std::string& email) {
  const AccountId account_id =
      user_manager::KnownUser(g_browser_process->local_state())
          .GetAccountId(email, std::string() /* id */, AccountType::UNKNOWN);

  UserContext context(user_manager::USER_TYPE_PUBLIC_ACCOUNT, account_id);

  // TODO(https://crbug.com/1298392): Refactor this.
  LoginDisplayHost::default_host()->GetLoginDisplay()->delegate()->Login(
      context, SigninSpecifics());
}

void GaiaScreenHandler::HandleUsingSAMLAPI(bool is_third_party_idp) {
  SetSAMLPrincipalsAPIUsed(is_third_party_idp, /*is_api_used=*/true);
}

void GaiaScreenHandler::HandleRecordSAMLProvider(
    const std::string& x509certificate) {
  metrics::RecordSAMLProvider(x509certificate);
}

void GaiaScreenHandler::HandleSamlChallengeMachineKey(
    const std::string& callback_id,
    const std::string& url,
    const std::string& challenge) {
  CreateSamlChallengeKeyHandler();
  saml_challenge_key_handler_->Run(
      Profile::FromWebUI(web_ui()),
      base::BindOnce(&GaiaScreenHandler::HandleSamlChallengeMachineKeyResult,
                     weak_factory_.GetWeakPtr(), base::Value(callback_id)),
      GURL(url), challenge);
}

void GaiaScreenHandler::HandleSamlChallengeMachineKeyResult(
    base::Value callback_id,
    base::Value::Dict result) {
  ResolveJavascriptCallback(callback_id, result);
}

void GaiaScreenHandler::HandleGaiaUIReady() {
  VLOG(1) << "Gaia is loaded";

  frame_error_ = net::OK;
  frame_state_ = FRAME_STATE_LOADED;

  if (network_state_informer_->state() == NetworkStateInformer::ONLINE)
    UpdateState(NetworkError::ERROR_REASON_UPDATE);

  if (test_expects_complete_login_)
    SubmitLoginFormForTest();

  if (LoginDisplayHost::default_host()) {
    LoginDisplayHost::default_host()->OnGaiaScreenReady();
  } else {
    // Used to debug crbug.com/902315. Feel free to remove after that is fixed.
    LOG(ERROR) << "HandleGaiaUIReady: There is no LoginDisplayHost";
  }
}

void GaiaScreenHandler::HandleIsFirstSigninStep(bool is_first) {
  ash::LoginScreen::Get()->SetIsFirstSigninStep(is_first);
}

void GaiaScreenHandler::HandleSamlStateChanged(bool is_saml) {
  if (is_saml == is_security_token_pin_enabled_) {
    // We're already in the needed `is_security_token_pin_enabled_` state.
    return;
  }
  // Enable ourselves as a security token PIN dialog host during the SAML
  // sign-in, so that when the SAML page requires client authentication (e.g.,
  // against a smart card), this PIN request is embedded into the SAML login UI.
  if (is_saml) {
    GetLoginScreenPinDialogManager()->AddPinDialogHost(this);
  } else {
    security_token_pin_entered_callback_.Reset();
    security_token_pin_dialog_closed_callback_.Reset();
    GetLoginScreenPinDialogManager()->RemovePinDialogHost(this);
  }
  is_security_token_pin_enabled_ = is_saml;
}

void GaiaScreenHandler::HandleSecurityTokenPinEntered(
    const std::string& user_input) {
  // Invariant: when the pin_entered_callback is present, the closed_callback
  // must be present as well.
  DCHECK(!security_token_pin_entered_callback_ ||
         security_token_pin_dialog_closed_callback_);

  if (!is_security_token_pin_dialog_running()) {
    // The PIN request has already been canceled on the handler side.
    return;
  }

  was_security_token_pin_canceled_ = user_input.empty();
  if (user_input.empty()) {
    security_token_pin_entered_callback_.Reset();
    std::move(security_token_pin_dialog_closed_callback_).Run();
  } else {
    // The callback must be non-null, since the UI implementation should not
    // send multiple non-empty results.
    std::move(security_token_pin_entered_callback_).Run(user_input);
    // Keep `security_token_pin_dialog_closed_callback_`, in order to be able to
    // notify about the dialog closing afterwards.
  }
}

void GaiaScreenHandler::HandleOnFatalError(int error_code,
                                           const base::Value::Dict& params) {
  const base::Value params_value = base::Value(params.Clone());
  LoginDisplayHost::default_host()
      ->GetWizardController()
      ->ShowSignInFatalErrorScreen(
          static_cast<SignInFatalErrorScreen::Error>(error_code),
          &params_value);
}

void GaiaScreenHandler::HandleUserRemoved(const std::string& email) {
  const AccountId account_id = user_manager::known_user::GetAccountId(
      email, /*id=*/std::string(), AccountType::UNKNOWN);
  if (account_id == user_manager::UserManager::Get()->GetOwnerAccountId()) {
    // Shows powerwash UI if the user is device owner.
    DCHECK(LoginDisplayHost::default_host());
    LoginDisplayHost::default_host()->StartWizard(ResetView::kScreenId);
  } else {
    // Removes the account on the device.
    user_manager::UserManager::Get()->RemoveUser(
        account_id, user_manager::UserRemovalReason::GAIA_REMOVED,
        nullptr /*delegate*/);
  }
}

void GaiaScreenHandler::HandlePasswordEntered() {
  base::UmaHistogramEnumeration("OOBE.GaiaScreen.LoginRequests",
                                login_request_variant_);
}

void GaiaScreenHandler::DoCompleteLogin(const std::string& gaia_id,
                                        const std::string& typed_email,
                                        const std::string& password,
                                        bool using_saml) {
  DCHECK(!typed_email.empty());
  DCHECK(!gaia_id.empty());
  const std::string sanitized_email = gaia::SanitizeEmail(typed_email);
  LoginDisplayHost::default_host()->SetDisplayEmail(sanitized_email);
  const AccountId account_id =
      GetAccountId(typed_email, gaia_id, AccountType::GOOGLE);
  const user_manager::User* const user =
      user_manager::UserManager::Get()->FindUser(account_id);

  UserContext user_context;
  SigninError error;
  if (!login::BuildUserContextForGaiaSignIn(
          user ? user->GetType() : CalculateUserType(account_id),
          GetAccountId(typed_email, gaia_id, AccountType::GOOGLE), using_saml,
          using_saml_api_, password, SamlPasswordAttributes(),
          /*sync_trusted_vault_keys=*/absl::nullopt,
          *extension_provided_client_cert_usage_observer_, &user_context,
          &error)) {
    LoginDisplayHost::default_host()->GetSigninUI()->ShowSigninError(
        error, /*details=*/std::string());
    return;
  }

  LoginDisplayHost::default_host()->CompleteLogin(user_context);
}

void GaiaScreenHandler::StartClearingDnsCache() {
  if (dns_clear_task_running_ ||
      !g_browser_process->system_network_context_manager()) {
    return;
  }

  dns_cleared_ = false;

  g_browser_process->system_network_context_manager()
      ->GetContext()
      ->ClearHostCache(nullptr /* filter */,
                       // Need to ensure that even if the network service
                       // crashes, OnDnsCleared() is invoked.
                       mojo::WrapCallbackWithDropHandler(
                           base::BindOnce(&GaiaScreenHandler::OnDnsCleared,
                                          weak_factory_.GetWeakPtr()),
                           base::BindOnce(&GaiaScreenHandler::OnDnsCleared,
                                          weak_factory_.GetWeakPtr())));
  dns_clear_task_running_ = true;
}

void GaiaScreenHandler::OnDnsCleared() {
  DCHECK_CURRENTLY_ON(BrowserThread::UI);
  dns_clear_task_running_ = false;
  dns_cleared_ = true;
  ShowGaiaScreenIfReady();
}

void GaiaScreenHandler::StartClearingCookies(
    base::OnceClosure on_clear_callback) {
  cookies_cleared_ = false;
  LOG_ASSERT(Profile::FromWebUI(web_ui()) ==
             ProfileHelper::Get()->GetSigninProfile());
  ash::SigninProfileHandler::Get()->ClearSigninProfile(
      base::BindOnce(&GaiaScreenHandler::OnCookiesCleared,
                     weak_factory_.GetWeakPtr(), std::move(on_clear_callback)));
}

void GaiaScreenHandler::OnCookiesCleared(base::OnceClosure on_clear_callback) {
  DCHECK_CURRENTLY_ON(BrowserThread::UI);
  cookies_cleared_ = true;
  std::move(on_clear_callback).Run();
}

void GaiaScreenHandler::SubmitLoginFormForTest() {
  VLOG(2) << "Submit login form for test, user=" << test_user_;

  content::RenderFrameHost* frame =
      signin::GetAuthFrame(web_ui()->GetWebContents(), kAuthIframeParentName);

  // clang-format off
  std::string code =
      "document.getElementById('identifier').value = '" + test_user_ + "';";
  // clang-format on

  frame->ExecuteJavaScriptForTests(base::ASCIIToUTF16(code),
                                   base::NullCallback());
  CallExternalAPI("clickPrimaryButtonForTesting");

  if (!test_services_.empty()) {
    // Prefix each doublequote with backslash, so that it will remain correct
    // JSON after assigning to the element property.
    std::string escaped_services;
    base::ReplaceChars(test_services_, "\"", "\\\"", &escaped_services);
    code = "document.getElementById('services').value = \"" + escaped_services +
           "\";";
    frame->ExecuteJavaScriptForTests(base::ASCIIToUTF16(code),
                                     base::NullCallback());
  }

  if (!test_pass_.empty()) {
    code = "document.getElementById('password').value = '" + test_pass_ + "';";
    frame->ExecuteJavaScriptForTests(base::ASCIIToUTF16(code),
                                     base::NullCallback());
    CallExternalAPI("clickPrimaryButtonForTesting");
  }

  // Test properties are cleared in HandleCompleteAuthentication because the
  // form submission might fail and login will not be attempted after reloading
  // if they are cleared here.
}

void GaiaScreenHandler::SetSAMLPrincipalsAPIUsed(bool is_third_party_idp,
                                                 bool is_api_used) {
  using_saml_api_ = is_api_used;
  // This correctly records the standard GAIA login and SAML flow
  // with Chrome Credentials Passing API used/not used
  RecordAPILogin(is_third_party_idp, is_api_used);
}

void GaiaScreenHandler::Show() {
  base::Value::Dict data;
  data.Set("hasUserPods", LoginDisplayHost::default_host()->HasUserPods());
  ShowInWebUI(std::move(data));
  elapsed_timer_ = std::make_unique<base::ElapsedTimer>();
  hidden_ = false;
}

void GaiaScreenHandler::Hide() {
  hidden_ = true;
}

void GaiaScreenHandler::SetGaiaPath(GaiaScreenHandler::GaiaPath gaia_path) {
  gaia_path_ = gaia_path;
}

void GaiaScreenHandler::LoadGaiaAsync(const AccountId& account_id) {
  // TODO(https://crbug.com/1317991): Investigate why the call is making Gaia
  // loading slowly.
  // CallExternalAPI("onBeforeLoad");
  populated_account_id_ = account_id;

  login_request_variant_ = GaiaLoginVariant::kUnknown;
  if (account_id.is_valid()) {
    login_request_variant_ = GaiaLoginVariant::kOnlineSignin;
  } else {
    if (StartupUtils::IsOobeCompleted() && StartupUtils::IsDeviceOwned()) {
      login_request_variant_ = GaiaLoginVariant::kAddUser;
    } else {
      login_request_variant_ = GaiaLoginVariant::kOobe;
    }
  }

  StartClearingDnsCache();
  StartClearingCookies(base::BindOnce(&GaiaScreenHandler::ShowGaiaScreenIfReady,
                                      weak_factory_.GetWeakPtr()));
}

void GaiaScreenHandler::ShowSigninScreenForTest(const std::string& username,
                                                const std::string& password,
                                                const std::string& services) {
  VLOG(2) << "ShowSigninScreenForTest for user " << username
          << ", frame_state=" << frame_state();

  test_user_ = username;
  test_pass_ = password;
  test_services_ = services;
  test_expects_complete_login_ = true;

  LoginDisplayHost::default_host()
      ->GetWizardContextForTesting()  // IN-TEST
      ->skip_to_login_for_tests = true;

  // Submit login form for test if gaia is ready. If gaia is loading, login
  // will be attempted in HandleLoginWebuiReady after gaia is ready. Otherwise,
  // reload gaia then follow the loading case.
  if (frame_state() == GaiaScreenHandler::FRAME_STATE_LOADED) {
    SubmitLoginFormForTest();
  } else if (frame_state() != GaiaScreenHandler::FRAME_STATE_LOADING &&
             !auth_extension_being_loaded_) {
    LoginDisplayHost::default_host()->ShowGaiaDialog(EmptyAccountId());
  }
}

void GaiaScreenHandler::Reset() {
  CallExternalAPI("reset");
}

void GaiaScreenHandler::ShowSecurityTokenPinDialog(
    const std::string& /*caller_extension_name*/,
    security_token_pin::CodeType code_type,
    bool enable_user_input,
    security_token_pin::ErrorLabel error_label,
    int attempts_left,
    const absl::optional<AccountId>& /*authenticating_user_account_id*/,
    SecurityTokenPinEnteredCallback pin_entered_callback,
    SecurityTokenPinDialogClosedCallback pin_dialog_closed_callback) {
  DCHECK(is_security_token_pin_enabled_);
  // There must be either no active PIN dialog, or the active dialog for which
  // the PIN has already been entered.
  DCHECK(!security_token_pin_entered_callback_);

  security_token_pin_entered_callback_ = std::move(pin_entered_callback);
  // Note that this overwrites the previous closed_callback in the case where
  // the dialog was already shown. This is intended, since the closing callback
  // should only be used to notify that the dialog got canceled, which imposes a
  // stricter quota on the PIN request caller.
  security_token_pin_dialog_closed_callback_ =
      std::move(pin_dialog_closed_callback);

  CallExternalAPI("showPinDialog",
                  MakeSecurityTokenPinDialogParameters(
                      enable_user_input, error_label, attempts_left));
}

void GaiaScreenHandler::CloseSecurityTokenPinDialog() {
  DCHECK(is_security_token_pin_enabled_);
  // Invariant: when the pin_entered_callback is present, the closed_callback
  // must be present as well.
  DCHECK(!security_token_pin_entered_callback_ ||
         security_token_pin_dialog_closed_callback_);

  security_token_pin_entered_callback_.Reset();
  security_token_pin_dialog_closed_callback_.Reset();

  CallExternalAPI("closePinDialog");
}

void GaiaScreenHandler::SetNextSamlChallengeKeyHandlerForTesting(
    std::unique_ptr<SamlChallengeKeyHandler> handler_for_test) {
  saml_challenge_key_handler_for_test_ = std::move(handler_for_test);
}

void GaiaScreenHandler::CreateSamlChallengeKeyHandler() {
  if (saml_challenge_key_handler_for_test_) {
    saml_challenge_key_handler_ =
        std::move(saml_challenge_key_handler_for_test_);
    return;
  }
  saml_challenge_key_handler_ = std::make_unique<SamlChallengeKeyHandler>();
}

void GaiaScreenHandler::RecordScrapedPasswordCount(int password_count) {
  // We are handling scraped passwords here so this is SAML flow without
  // Chrome Credentials Passing API
  SetSAMLPrincipalsAPIUsed(/*is_third_party_idp=*/true, /*is_api_used=*/false);
  // Use a histogram that has 11 buckets, one for each of the values in [0, 9]
  // and an overflow bucket at the end.
  base::UmaHistogramExactLinear("ChromeOS.SAML.Scraping.PasswordCountAll",
                                password_count, 11);
}

bool GaiaScreenHandler::IsSamlUserPasswordless() {
  return extension_provided_client_cert_usage_observer_ &&
         extension_provided_client_cert_usage_observer_->ClientCertsWereUsed();
}

void GaiaScreenHandler::ShowGaiaScreenIfReady() {
  if (!initialized_) {
    show_on_init_ = true;
    return;
  }
  if (!dns_cleared_ || !cookies_cleared_ || !LoginDisplayHost::default_host()) {
    return;
  }

  std::string active_network_path = network_state_informer_->network_path();
  if (!untrusted_authority_certs_cache_) {
    // Make additional untrusted authority certificates available for client
    // certificate discovery in case a SAML flow is used which requires a client
    // certificate to be present.
    // When the WebUI is destroyed, `untrusted_authority_certs_cache_` will go
    // out of scope and the certificates will not be held in memory anymore.
    untrusted_authority_certs_cache_ =
        std::make_unique<network::NSSTempCertsCacheChromeOS>(
            g_browser_process->platform_part()
                ->browser_policy_connector_ash()
                ->GetDeviceNetworkConfigurationUpdater()
                ->GetAllAuthorityCertificates(
                    chromeos::onc::CertificateScope::Default()));
  }

  LoadAuthExtension(/* force=*/true);

  UpdateState(NetworkError::ERROR_REASON_UPDATE);

  // TODO(crbug.com/1105387): Part of initial screen logic.
  PrefService* prefs = g_browser_process->local_state();
  if (prefs->GetBoolean(::prefs::kFactoryResetRequested)) {
    DCHECK(LoginDisplayHost::default_host());
    LoginDisplayHost::default_host()->StartWizard(ResetView::kScreenId);
  }
}

void GaiaScreenHandler::ShowAllowlistCheckFailedError() {
  base::DictionaryValue params;
  params.SetBoolKey("enterpriseManaged", g_browser_process->platform_part()
                                             ->browser_policy_connector_ash()
                                             ->IsDeviceEnterpriseManaged());

  bool family_link_allowed = false;
  CrosSettings::Get()->GetBoolean(kAccountsPrefFamilyLinkAccountsAllowed,
                                  &family_link_allowed);
  params.SetBoolKey("familyLinkAllowed", family_link_allowed);

  CallExternalAPI("showAllowlistCheckFailedError", std::move(params));
}

void GaiaScreenHandler::ReloadGaiaAuthenticator() {
  CallExternalAPI("doReload");
}

void GaiaScreenHandler::LoadAuthExtension(bool force) {
  VLOG(1) << "LoadAuthExtension, force: " << force;
  if (auth_extension_being_loaded_) {
    VLOG(1) << "Skip loading the Auth extension as it's already being loaded";
    return;
  }

  auth_extension_being_loaded_ = true;
  login::GaiaContext context;
  context.force_reload = force;
  context.email = populated_account_id_.GetUserEmail();

  user_manager::KnownUser known_user(g_browser_process->local_state());
  if (!context.email.empty()) {
    if (const std::string* gaia_id =
            known_user.FindGaiaID(AccountId::FromUserEmail(context.email))) {
      context.gaia_id = *gaia_id;
    }

    context.gaps_cookie = known_user.GetGAPSCookie(
        AccountId::FromUserEmail(gaia::CanonicalizeEmail(context.email)));
  }

  if (ash::features::IsCryptohomeRecoveryFlowEnabled() &&
      ShouldPrepareForRecovery(populated_account_id_)) {
    populated_account_id_.clear();
    auto callback = base::BindOnce(&GaiaScreenHandler::OnGaiaReauthTokenFetched,
                                   weak_factory_.GetWeakPtr(), context);
    gaia_reauth_token_fetcher_ =
        std::make_unique<ash::GaiaReauthTokenFetcher>(std::move(callback));
    gaia_reauth_token_fetcher_->Fetch();
    return;
  }

  populated_account_id_.clear();
  gaia_reauth_token_fetcher_.reset();
  gaia_reauth_request_token_.clear();

  LoadGaia(context);
}

void GaiaScreenHandler::UpdateState(NetworkError::ErrorReason reason) {
  if (signin_screen_handler_ && !hidden_)
    signin_screen_handler_->UpdateState(reason);
}

bool GaiaScreenHandler::IsRestrictiveProxy() const {
  return !disable_restrictive_proxy_check_for_test_ &&
         !IsOnline(captive_portal_status_);
}

void GaiaScreenHandler::OnGaiaReauthTokenFetched(
    const login::GaiaContext& context,
    const std::string& token) {
  gaia_reauth_request_token_ = token;
  gaia_reauth_token_fetcher_.reset();
  LoadGaia(context);
}

void GaiaScreenHandler::SAMLConfirmPassword(
    ::login::StringList scraped_saml_passwords,
    std::unique_ptr<UserContext> user_context) {
  LoginDisplayHost::default_host()->GetSigninUI()->SAMLConfirmPassword(
      std::move(scraped_saml_passwords), std::move(user_context));
}

}  // namespace chromeos
