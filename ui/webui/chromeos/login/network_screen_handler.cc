// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/webui/chromeos/login/network_screen_handler.h"

#include <stddef.h>

#include <utility>

#include "base/values.h"
#include "chrome/browser/ash/login/demo_mode/demo_setup_controller.h"
#include "chrome/browser/ash/login/screens/network_screen.h"
#include "chrome/browser/ash/login/startup_utils.h"
#include "chrome/browser/ui/webui/chromeos/cellular_setup/cellular_setup_localized_strings_provider.h"
#include "chrome/grit/generated_resources.h"
#include "chromeos/ash/components/network/network_handler.h"
#include "chromeos/ash/components/network/network_state_handler.h"
#include "components/login/localized_values_builder.h"
#include "ui/chromeos/strings/network_element_localized_strings_provider.h"

namespace chromeos {

constexpr StaticOobeScreenId NetworkScreenView::kScreenId;

NetworkScreenHandler::NetworkScreenHandler() : BaseScreenHandler(kScreenId) {
  set_user_acted_method_path_deprecated("login.NetworkScreen.userActed");
}

NetworkScreenHandler::~NetworkScreenHandler() {
  if (screen_)
    screen_->OnViewDestroyed(this);
}

void NetworkScreenHandler::Show() {
  if (!IsJavascriptAllowed()) {
    show_on_init_ = true;
    return;
  }

  // In OOBE all physical network technologies should be enabled, so the user is
  // able to select any of the available networks on the device. Enabled
  // technologies should not be changed if network screen is shown outside of
  // OOBE.
  // If OOBE is not completed, we assume that the only instance of this object
  // could be OOBE itself.
  if (!StartupUtils::IsOobeCompleted()) {
    NetworkStateHandler* handler =
        NetworkHandler::Get()->network_state_handler();
    handler->SetTechnologyEnabled(NetworkTypePattern::Physical(), true,
                                  chromeos::network_handler::ErrorCallback());
  }

  base::Value::Dict data;
  data.Set("isDemoModeSetup",
           DemoSetupController::IsOobeDemoSetupFlowInProgress());
  ShowInWebUI(std::move(data));
}

void NetworkScreenHandler::Hide() {}

void NetworkScreenHandler::Bind(NetworkScreen* screen) {
  screen_ = screen;
  BaseScreenHandler::SetBaseScreenDeprecated(screen_);
}

void NetworkScreenHandler::Unbind() {
  screen_ = nullptr;
  BaseScreenHandler::SetBaseScreenDeprecated(nullptr);
}

void NetworkScreenHandler::ShowError(const std::u16string& message) {
  CallJS("login.NetworkScreen.setError", message);
}

void NetworkScreenHandler::ClearErrors() {
  CallJS("login.NetworkScreen.setError", std::string());
}

void NetworkScreenHandler::DeclareLocalizedValues(
    ::login::LocalizedValuesBuilder* builder) {
  builder->Add("networkSectionTitle", IDS_NETWORK_SELECTION_TITLE);
  builder->Add("networkSectionHint", IDS_NETWORK_SELECTION_HINT);
  builder->Add("proxySettingsListItemName",
               IDS_NETWORK_PROXY_SETTINGS_LIST_ITEM_NAME);
  builder->Add("addWiFiListItemName", IDS_NETWORK_ADD_WI_FI_LIST_ITEM_NAME);
  ui::network_element::AddLocalizedValuesToBuilder(builder);
  cellular_setup::AddLocalizedValuesToBuilder(builder);
}

void NetworkScreenHandler::GetAdditionalParameters(base::Value::Dict* dict) {
  cellular_setup::AddNonStringLoadTimeDataToDict(dict);
}

void NetworkScreenHandler::InitializeDeprecated() {
  if (show_on_init_) {
    show_on_init_ = false;
    Show();
  }
}

}  // namespace chromeos
