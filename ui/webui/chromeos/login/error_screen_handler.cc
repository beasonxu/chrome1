// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/webui/chromeos/login/error_screen_handler.h"

#include "base/time/time.h"
#include "base/values.h"
#include "chrome/browser/ash/login/ui/login_display_host.h"
#include "chrome/grit/chromium_strings.h"
#include "chrome/grit/generated_resources.h"
#include "components/login/localized_values_builder.h"
#include "ui/chromeos/devicetype_utils.h"
#include "ui/chromeos/strings/network_element_localized_strings_provider.h"
#include "ui/strings/grit/ui_strings.h"

namespace chromeos {

ErrorScreenHandler::ErrorScreenHandler() : BaseScreenHandler(kScreenId) {}

ErrorScreenHandler::~ErrorScreenHandler() = default;

void ErrorScreenHandler::Show() {
  base::Value::Dict data;
  data.Set("hasUserPods", ash::LoginDisplayHost::default_host()->HasUserPods());
  ShowInWebUI(std::move(data));
}

void ErrorScreenHandler::ShowOobeScreen(OobeScreenId screen) {
  // TODO(https://crbug.com/1310191): Migrate off ShowScreenDeprecated.
  ShowScreenDeprecated(screen);
}

void ErrorScreenHandler::SetErrorStateCode(
    NetworkError::ErrorState error_state) {
  CallExternalAPI("setErrorState", static_cast<int>(error_state));
}

void ErrorScreenHandler::SetErrorStateNetwork(const std::string& network_name) {
  CallExternalAPI("setErrorStateNetwork", network_name);
}

void ErrorScreenHandler::SetGuestSigninAllowed(bool value) {
  CallExternalAPI("allowGuestSignin", value);
}

void ErrorScreenHandler::SetOfflineSigninAllowed(bool value) {
  CallExternalAPI("allowOfflineLogin", value);
}

void ErrorScreenHandler::SetShowConnectingIndicator(bool value) {
  CallExternalAPI("showConnectingIndicator", value);
}

void ErrorScreenHandler::SetIsPersistentError(bool is_persistent) {
  CallExternalAPI("setIsPersistentError", is_persistent);
}

void ErrorScreenHandler::SetUIState(NetworkError::UIState ui_state) {
  CallExternalAPI("setUIState", static_cast<int>(ui_state));
}

void ErrorScreenHandler::DeclareLocalizedValues(
    ::login::LocalizedValuesBuilder* builder) {
  builder->Add("deviceType", ui::GetChromeOSDeviceName());
  builder->Add("loginErrorTitle", IDS_LOGIN_ERROR_TITLE);
  builder->Add("rollbackErrorTitle", IDS_RESET_SCREEN_REVERT_ERROR);
  builder->Add("signinOfflineMessageBody",
               ui::SubstituteChromeOSDeviceType(IDS_LOGIN_OFFLINE_MESSAGE));
  builder->Add("kioskOfflineMessageBody", IDS_KIOSK_OFFLINE_MESSAGE);
  builder->Add("kioskOnlineTitle", IDS_LOGIN_NETWORK_RESTORED_TITLE);
  builder->Add("kioskOnlineMessageBody", IDS_KIOSK_ONLINE_MESSAGE);
  builder->Add("autoEnrollmentOfflineMessageBody",
               IDS_LOGIN_AUTO_ENROLLMENT_OFFLINE_MESSAGE);
  builder->AddF("rollbackErrorMessageBody",
               IDS_RESET_SCREEN_REVERT_ERROR_EXPLANATION,
               IDS_SHORT_PRODUCT_NAME);
  builder->Add("captivePortalTitle", IDS_LOGIN_MAYBE_CAPTIVE_PORTAL_TITLE);
  builder->Add("captivePortalMessage", IDS_LOGIN_MAYBE_CAPTIVE_PORTAL);
  builder->Add("captivePortalProxyMessage",
               IDS_LOGIN_MAYBE_CAPTIVE_PORTAL_PROXY);
  builder->Add("captivePortalNetworkSelect",
               IDS_LOGIN_MAYBE_CAPTIVE_PORTAL_NETWORK_SELECT);
  builder->Add("signinProxyMessageText", IDS_LOGIN_PROXY_ERROR_MESSAGE);
  builder->Add("updateOfflineMessageBody",
               ui::SubstituteChromeOSDeviceType(IDS_UPDATE_OFFLINE_MESSAGE));
  builder->Add("updateProxyMessageText", IDS_UPDATE_PROXY_ERROR_MESSAGE);
  builder->AddF("localStateErrorText0", IDS_LOCAL_STATE_ERROR_TEXT_0,
                IDS_SHORT_PRODUCT_NAME);
  builder->Add("localStateErrorText1", IDS_LOCAL_STATE_ERROR_TEXT_1);
  builder->Add("localStateErrorPowerwashButton",
               IDS_LOCAL_STATE_ERROR_POWERWASH_BUTTON);
  builder->Add("connectingIndicatorText", IDS_LOGIN_CONNECTING_INDICATOR_TEXT);
  builder->Add("guestSigninFixNetwork", IDS_LOGIN_GUEST_SIGNIN_FIX_NETWORK);
  builder->Add("rebootButton", IDS_RELAUNCH_BUTTON);
  builder->Add("diagnoseButton", IDS_DIAGNOSE_BUTTON);
  builder->Add("configureCertsButton", IDS_MANAGE_CERTIFICATES);
  builder->Add("continueButton", IDS_WELCOME_SELECTION_CONTINUE_BUTTON);
  builder->Add("okButton", IDS_APP_OK);
  builder->Add("proxySettingsMenuName",
               IDS_NETWORK_PROXY_SETTINGS_LIST_ITEM_NAME);
  builder->Add("addWiFiNetworkMenuName", IDS_NETWORK_ADD_WI_FI_LIST_ITEM_NAME);
  builder->Add("autoEnrollmentErrorMessageTitle", IDS_LOGIN_AUTO_ENROLLMENT_OFFLINE_TITLE);
  ui::network_element::AddLocalizedValuesToBuilder(builder);

  builder->Add("offlineLogin", IDS_OFFLINE_LOGIN_HTML);
}

}  // namespace chromeos
