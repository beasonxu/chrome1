// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/webui/signin/inline_login_handler_chromeos.h"

#include <memory>
#include <string>

#include "ash/constants/ash_pref_names.h"
#include "base/base64.h"
#include "base/callback_helpers.h"
#include "base/logging.h"
#include "base/threading/sequenced_task_runner_handle.h"
#include "base/values.h"
#include "chrome/browser/ash/account_manager/account_apps_availability.h"
#include "chrome/browser/ash/account_manager/account_apps_availability_factory.h"
#include "chrome/browser/ash/crosapi/browser_manager.h"
#include "chrome/browser/browser_process.h"
#include "chrome/browser/browser_process_platform_part.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/signin/chrome_device_id_helper.h"
#include "chrome/browser/signin/identity_manager_factory.h"
#include "chrome/browser/ui/browser_commands.h"
#include "chrome/browser/ui/webui/chromeos/edu_coexistence/edu_coexistence_state_tracker.h"
#include "chrome/browser/ui/webui/signin/inline_login_dialog_chromeos.h"
#include "chrome/browser/ui/webui/signin/inline_login_handler.h"
#include "chrome/browser/ui/webui/signin/signin_helper_chromeos.h"
#include "chrome/common/pref_names.h"
#include "chromeos/ash/components/account_manager/account_manager_factory.h"
#include "chromeos/version/version_loader.h"
#include "components/account_manager_core/account.h"
#include "components/account_manager_core/account_manager_facade.h"
#include "components/account_manager_core/chromeos/account_manager_facade_factory.h"
#include "components/account_manager_core/chromeos/account_manager_mojo_service.h"
#include "components/prefs/pref_registry_simple.h"
#include "components/prefs/pref_service.h"
#include "components/signin/public/identity_manager/account_info.h"
#include "components/signin/public/identity_manager/identity_manager.h"
#include "crypto/sha2.h"
#include "google_apis/gaia/gaia_auth_util.h"
#include "google_apis/gaia/gaia_urls.h"
#include "services/network/public/cpp/shared_url_loader_factory.h"
#include "third_party/skia/include/core/SkBitmap.h"
#include "ui/base/resource/resource_bundle.h"
#include "ui/base/webui/web_ui_util.h"
#include "ui/chromeos/devicetype_utils.h"
#include "ui/chromeos/resources/grit/ui_chromeos_resources.h"

namespace chromeos {
namespace {

using ::account_manager::AccountManager;

constexpr char kCrosAddAccountFlow[] = "crosAddAccount";
constexpr char kCrosAddAccountEduFlow[] = "crosAddAccountEdu";

// Keep the values in sync with `Account` struct in
// chrome/browser/resources/inline_login/inline_login_browser_proxy.js
constexpr char kAccountKeyId[] = "id";
constexpr char kAccountKeyEmail[] = "email";
constexpr char kAccountKeyFullName[] = "fullName";
constexpr char kAccountKeyImage[] = "image";

std::string AnonymizeAccountEmail(const std::string& email) {
  std::string result;
  base::Base64Encode(crypto::SHA256HashString(email), &result);
  return result + "@example.com";
}

// Returns a base64-encoded hash code of "signin_scoped_device_id:gaia_id".
std::string GetAccountDeviceId(const std::string& signin_scoped_device_id,
                               const std::string& gaia_id) {
  std::string account_device_id;
  base::Base64Encode(
      crypto::SHA256HashString(signin_scoped_device_id + ":" + gaia_id),
      &account_device_id);
  return account_device_id;
}

std::string GetInlineLoginFlowName(Profile* profile, const std::string* email) {
  DCHECK(profile);
  if (!profile->IsChild()) {
    return kCrosAddAccountFlow;
  }

  std::string primary_account_email =
      IdentityManagerFactory::GetForProfile(profile)
          ->GetPrimaryAccountInfo(signin::ConsentLevel::kSignin)
          .email;
  // If provided email is for primary account - it's a reauthentication, use
  // normal add account flow.
  if (email && gaia::AreEmailsSame(primary_account_email, *email)) {
    return kCrosAddAccountFlow;
  }

  // Child user is adding/reauthenticating a secondary account.
  return kCrosAddAccountEduFlow;
}

const SkBitmap& GetDefaultAccountIcon() {
  gfx::ImageSkia default_icon =
      *ui::ResourceBundle::GetSharedInstance().GetImageSkiaNamed(
          IDR_LOGIN_DEFAULT_USER);
  return default_icon.GetRepresentation(1.0f).GetBitmap();
}

base::Value GaiaAccountToValue(const ::account_manager::Account& account,
                               const AccountInfo& account_info) {
  DCHECK_EQ(account.key.account_type(), account_manager::AccountType::kGaia);
  DCHECK(!account_info.IsEmpty());

  base::Value dict(base::Value::Type::DICTIONARY);
  dict.SetKey(kAccountKeyId, base::Value(account.key.id()));
  dict.SetKey(kAccountKeyEmail, base::Value(account.raw_email));
  dict.SetKey(kAccountKeyFullName, base::Value(account_info.full_name));
  dict.SetKey(kAccountKeyImage,
              base::Value(webui::GetBitmapDataUrl(
                  account_info.account_image.IsEmpty()
                      ? GetDefaultAccountIcon()
                      : account_info.account_image.AsBitmap())));

  return dict;
}

::account_manager::Account ValueToGaiaAccount(const base::Value::Dict& dict) {
  const std::string* id = dict.FindString(kAccountKeyId);
  DCHECK(id);
  const std::string* email = dict.FindString(kAccountKeyEmail);
  DCHECK(email);
  return ::account_manager::Account{
      ::account_manager::AccountKey{*id, account_manager::AccountType::kGaia},
      *email};
}

class EduCoexistenceChildSigninHelper : public SigninHelper {
 public:
  EduCoexistenceChildSigninHelper(
      account_manager::AccountManager* account_manager,
      crosapi::AccountManagerMojoService* account_manager_mojo_service,
      scoped_refptr<network::SharedURLLoaderFactory> url_loader_factory,
      std::unique_ptr<SigninHelper::ArcHelper> arc_helper,
      const std::string& gaia_id,
      const std::string& email,
      const std::string& auth_code,
      const std::string& signin_scoped_device_id,
      PrefService* pref_service,
      const content::WebUI* web_ui)
      : SigninHelper(account_manager,
                     account_manager_mojo_service,
                     // EduCoexistenceChildSigninHelper will not be closing the
                     // dialog. Therefore, passing a void callback.
                     /*close_dialog_closure=*/base::DoNothing(),
                     // EduCoexistenceChildSigninHelper will not be blocked by
                     // policy. Therefore, passing a void callback.
                     /*show_signin_error=*/base::DoNothing(),
                     url_loader_factory,
                     std::move(arc_helper),
                     gaia_id,
                     email,
                     auth_code,
                     signin_scoped_device_id),
        pref_service_(pref_service),
        web_ui_(web_ui),
        account_email_(email) {
    // Account has been authorized i.e. family link user has entered the
    // correct user name and password for their edu accounts. Account hasn't
    // been added into account manager yet.
    EduCoexistenceStateTracker::Get()->OnWebUiStateChanged(
        web_ui_, EduCoexistenceStateTracker::FlowResult::kAccountAuthorized);
  }

  EduCoexistenceChildSigninHelper(const EduCoexistenceChildSigninHelper&) =
      delete;
  EduCoexistenceChildSigninHelper& operator=(
      const EduCoexistenceChildSigninHelper&) = delete;
  ~EduCoexistenceChildSigninHelper() override = default;

 protected:
  // GaiaAuthConsumer overrides.
  void OnClientOAuthSuccess(const ClientOAuthResult& result) override {
    EduCoexistenceStateTracker::Get()->SetEduConsentCallback(
        web_ui_, account_email_,
        base::BindOnce(&EduCoexistenceChildSigninHelper::OnConsentLogged,
                       weak_ptr_factory_.GetWeakPtr(), result.refresh_token));
  }

  void OnConsentLogged(const std::string& refresh_token, bool success) {
    if (success) {
      // The EDU account has been added/re-authenticated. Mark migration to
      // ARC++ as completed.
      pref_service_->SetBoolean(::prefs::kEduCoexistenceArcMigrationCompleted,
                                true);

      UpsertAccount(refresh_token);
    } else {
      LOG(ERROR) << "Could not log parent consent.";
    }

    // The inline login dialog will be showing an 'account created' screen after
    // this. Therefore, do not close the dialog; simply destruct self.
    Exit();
  }

 private:
  // Unowned pointer to pref service.
  PrefService* const pref_service_;

  // Unowned pointer to the WebUI through which the account was added.
  const content::WebUI* const web_ui_;

  // Added account email.
  const std::string account_email_;

  base::WeakPtrFactory<EduCoexistenceChildSigninHelper> weak_ptr_factory_{this};
};

}  // namespace

InlineLoginHandlerChromeOS::InlineLoginHandlerChromeOS(
    const base::RepeatingClosure& close_dialog_closure)
    : close_dialog_closure_(close_dialog_closure) {
  show_signin_error_ =
      base::BindRepeating(&InlineLoginHandlerChromeOS::ShowSigninErrorPage,
                          weak_factory_.GetWeakPtr());
}

InlineLoginHandlerChromeOS::~InlineLoginHandlerChromeOS() = default;

// static
void InlineLoginHandlerChromeOS::RegisterProfilePrefs(
    PrefRegistrySimple* registry) {
  registry->RegisterBooleanPref(
      chromeos::prefs::kShouldSkipInlineLoginWelcomePage,
      false /*default_value*/);
}

void InlineLoginHandlerChromeOS::RegisterMessages() {
  InlineLoginHandler::RegisterMessages();

  web_ui()->RegisterMessageCallback(
      "showIncognito",
      base::BindRepeating(
          &InlineLoginHandlerChromeOS::ShowIncognitoAndCloseDialog,
          base::Unretained(this)));
  web_ui()->RegisterMessageCallback(
      "getAccounts",
      base::BindRepeating(&InlineLoginHandlerChromeOS::GetAccountsInSession,
                          base::Unretained(this)));
  web_ui()->RegisterMessageCallback(
      "getAccountsNotAvailableInArc",
      base::BindRepeating(
          &InlineLoginHandlerChromeOS::GetAccountsNotAvailableInArc,
          base::Unretained(this)));
  web_ui()->RegisterMessageCallback(
      "makeAvailableInArc",
      base::BindRepeating(
          &InlineLoginHandlerChromeOS::MakeAvailableInArcAndCloseDialog,
          base::Unretained(this)));
  web_ui()->RegisterMessageCallback(
      "skipWelcomePage",
      base::BindRepeating(&InlineLoginHandlerChromeOS::HandleSkipWelcomePage,
                          base::Unretained(this)));
  web_ui()->RegisterMessageCallback(
      "openGuestWindow",
      base::BindRepeating(
          &InlineLoginHandlerChromeOS::OpenGuestWindowAndCloseDialog,
          base::Unretained(this)));
}

void InlineLoginHandlerChromeOS::SetExtraInitParams(base::Value::Dict& params) {
  const GaiaUrls* const gaia_urls = GaiaUrls::GetInstance();
  params.Set("clientId", base::Value(gaia_urls->oauth2_chrome_client_id()));

  const GURL& url = gaia_urls->embedded_setup_chromeos_url(2U);
  params.Set("gaiaPath", base::Value(url.path().substr(1)));

  params.Set(
      "platformVersion",
      base::Value(version_loader::GetVersion(version_loader::VERSION_SHORT)));
  params.Set("constrained", base::Value("1"));
  params.Set("flow",
             base::Value(GetInlineLoginFlowName(Profile::FromWebUI(web_ui()),
                                                params.FindString("email"))));
  params.Set("dontResizeNonEmbeddedPages", true);
  params.Set("enableGaiaActionButtons", true);

  // For in-session login flows, request Gaia to ignore third party SAML IdP SSO
  // redirection policies (and redirect to SAML IdPs by default), otherwise some
  // managed users will not be able to login to Chrome OS at all. Please check
  // https://crbug.com/984525 and https://crbug.com/984525#c20 for more context.
  params.Set("ignoreCrOSIdpSetting", true);
}

void InlineLoginHandlerChromeOS::CompleteLogin(
    const CompleteLoginParams& params) {
  CHECK(!params.auth_code.empty());
  CHECK(!params.gaia_id.empty());
  CHECK(!params.email.empty());

  if (ash::AccountAppsAvailability::IsArcAccountRestrictionsEnabled()) {
    ::GetAccountManagerFacade(Profile::FromWebUI(web_ui())->GetPath().value())
        ->GetAccounts(base::BindOnce(
            &InlineLoginHandlerChromeOS::OnGetAccountsToCompleteLogin,
            weak_factory_.GetWeakPtr(), params));
    return;
  }

  CreateSigninHelper(params, /*arc_helper=*/nullptr);
}

void InlineLoginHandlerChromeOS::HandleDialogClose(
    const base::Value::List& args) {
  close_dialog_closure_.Run();
}

void InlineLoginHandlerChromeOS::OnGetAccountsToCompleteLogin(
    const CompleteLoginParams& params,
    const std::vector<::account_manager::Account>& accounts) {
  bool is_new_account = !base::Contains(
      accounts, params.gaia_id,
      [](const account_manager::Account& account) { return account.key.id(); });
  bool is_available_in_arc = params.is_available_in_arc;
  Profile* profile = Profile::FromWebUI(web_ui());
  if (profile->IsChild())
    is_available_in_arc = true;

  std::unique_ptr<SigninHelper::ArcHelper> arc_helper =
      std::make_unique<SigninHelper::ArcHelper>(
          is_available_in_arc, /*is_account_addition=*/is_new_account,
          ash::AccountAppsAvailabilityFactory::GetForProfile(
              Profile::FromWebUI(web_ui())));
  CreateSigninHelper(params, std::move(arc_helper));
}

void InlineLoginHandlerChromeOS::CreateSigninHelper(
    const CompleteLoginParams& params,
    std::unique_ptr<SigninHelper::ArcHelper> arc_helper) {
  Profile* profile = Profile::FromWebUI(web_ui());

  auto* account_manager = g_browser_process->platform_part()
                              ->GetAccountManagerFactory()
                              ->GetAccountManager(profile->GetPath().value());

  crosapi::AccountManagerMojoService* account_manager_mojo_service =
      g_browser_process->platform_part()
          ->GetAccountManagerFactory()
          ->GetAccountManagerMojoService(profile->GetPath().value());

  signin::IdentityManager* identity_manager =
      IdentityManagerFactory::GetForProfile(profile);
  std::string primary_account_email =
      identity_manager->GetPrimaryAccountInfo(signin::ConsentLevel::kSignin)
          .email;

  // Child user added a secondary account.
  if (profile->IsChild() &&
      !gaia::AreEmailsSame(primary_account_email, params.email)) {
    new EduCoexistenceChildSigninHelper(
        account_manager, account_manager_mojo_service,
        profile->GetURLLoaderFactory(), std::move(arc_helper), params.gaia_id,
        params.email, params.auth_code,
        GetAccountDeviceId(GetSigninScopedDeviceIdForProfile(profile),
                           params.gaia_id),
        profile->GetPrefs(), web_ui());

    return;
  }

  // SigninHelper deletes itself after its work is done.
  new SigninHelper(
      account_manager, account_manager_mojo_service, close_dialog_closure_,
      show_signin_error_, profile->GetURLLoaderFactory(), std::move(arc_helper),
      params.gaia_id, params.email, params.auth_code,
      GetAccountDeviceId(GetSigninScopedDeviceIdForProfile(profile),
                         params.gaia_id));
}

void InlineLoginHandlerChromeOS::ShowSigninErrorPage(
    const std::string& email,
    const std::string& hosted_domain) {
  base::Value::Dict params;
  params.Set("email", email);
  params.Set("hostedDomain", hosted_domain);
  params.Set("deviceType", ui::GetChromeOSDeviceName());
  params.Set("signinBlockedByPolicy", !hosted_domain.empty() ? true : false);

  FireWebUIListener("show-signin-error-page", base::Value(std::move(params)));
}

void InlineLoginHandlerChromeOS::ShowIncognitoAndCloseDialog(
    const base::Value::List& args) {
  chrome::NewIncognitoWindow(Profile::FromWebUI(web_ui()));
  close_dialog_closure_.Run();
}

void InlineLoginHandlerChromeOS::GetAccountsInSession(
    const base::Value::List& args) {
  const std::string& callback_id = args[0].GetString();
  const Profile* profile = Profile::FromWebUI(web_ui());
  ::GetAccountManagerFacade(profile->GetPath().value())
      ->GetAccounts(base::BindOnce(&InlineLoginHandlerChromeOS::OnGetAccounts,
                                   weak_factory_.GetWeakPtr(), callback_id));
}

void InlineLoginHandlerChromeOS::OnGetAccounts(
    const std::string& callback_id,
    const std::vector<::account_manager::Account>& accounts) {
  base::ListValue account_emails;
  for (const auto& account : accounts) {
    if (account.key.account_type() ==
        ::account_manager::AccountType::kActiveDirectory) {
      // Don't send Active Directory account email to Gaia.
      account_emails.Append(AnonymizeAccountEmail(account.raw_email));
    } else {
      account_emails.Append(account.raw_email);
    }
  }

  ResolveJavascriptCallback(base::Value(callback_id),
                            std::move(account_emails));
}

void InlineLoginHandlerChromeOS::GetAccountsNotAvailableInArc(
    const base::Value::List& args) {
  AllowJavascript();
  CHECK_EQ(1u, args.size());
  const std::string& callback_id = args[0].GetString();
  ::GetAccountManagerFacade(Profile::FromWebUI(web_ui())->GetPath().value())
      ->GetAccounts(base::BindOnce(
          &InlineLoginHandlerChromeOS::ContinueGetAccountsNotAvailableInArc,
          weak_factory_.GetWeakPtr(), callback_id));
}

void InlineLoginHandlerChromeOS::ContinueGetAccountsNotAvailableInArc(
    const std::string& callback_id,
    const std::vector<::account_manager::Account>& accounts) {
  ash::AccountAppsAvailabilityFactory::GetForProfile(
      Profile::FromWebUI(web_ui()))
      ->GetAccountsAvailableInArc(base::BindOnce(
          &InlineLoginHandlerChromeOS::FinishGetAccountsNotAvailableInArc,
          weak_factory_.GetWeakPtr(), callback_id, accounts));
}

void InlineLoginHandlerChromeOS::FinishGetAccountsNotAvailableInArc(
    const std::string& callback_id,
    const std::vector<::account_manager::Account>& accounts,
    const base::flat_set<account_manager::Account>& arc_accounts) {
  base::Value result(base::Value::Type::LIST);
  auto* identity_manager =
      IdentityManagerFactory::GetForProfile(Profile::FromWebUI(web_ui()));
  for (const auto& account : accounts) {
    if (account.key.account_type() != account_manager::AccountType::kGaia)
      continue;

    if (!arc_accounts.contains(account)) {
      AccountInfo maybe_account_info =
          identity_manager->FindExtendedAccountInfoByGaiaId(account.key.id());
      if (maybe_account_info.IsEmpty())
        continue;

      result.Append(GaiaAccountToValue(account, maybe_account_info));
    }
  }
  ResolveJavascriptCallback(base::Value(callback_id), std::move(result));
}

void InlineLoginHandlerChromeOS::MakeAvailableInArcAndCloseDialog(
    const base::Value::List& args) {
  CHECK_EQ(1u, args.size());
  const base::Value::Dict& dictionary = args.front().GetDict();
  ash::AccountAppsAvailabilityFactory::GetForProfile(
      Profile::FromWebUI(web_ui()))
      ->SetIsAccountAvailableInArc(ValueToGaiaAccount(dictionary),
                                   /*is_available=*/true);
  close_dialog_closure_.Run();
}

void InlineLoginHandlerChromeOS::HandleSkipWelcomePage(
    const base::Value::List& args) {
  CHECK(!args.empty());
  const bool skip = args.front().GetBool();
  Profile::FromWebUI(web_ui())->GetPrefs()->SetBoolean(
      chromeos::prefs::kShouldSkipInlineLoginWelcomePage, skip);
}

void InlineLoginHandlerChromeOS::OpenGuestWindowAndCloseDialog(
    const base::Value::List& args) {
  crosapi::BrowserManager::Get()->NewGuestWindow();
  close_dialog_closure_.Run();
}

}  // namespace chromeos
