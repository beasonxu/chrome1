// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/webui/settings/protocol_handlers_handler.h"

#include <memory>
#include <utility>
#include <vector>

#include "base/bind.h"
#include "base/callback_helpers.h"
#include "base/strings/utf_string_conversions.h"
#include "base/values.h"
#include "chrome/browser/custom_handlers/protocol_handler_registry_factory.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/web_applications/os_integration/os_integration_manager.h"
#include "chrome/browser/web_applications/web_app_sync_bridge.h"
#include "chrome/common/url_constants.h"
#include "components/custom_handlers/protocol_handler.h"
#include "components/google/core/common/google_util.h"
#include "components/prefs/pref_service.h"
#include "content/public/browser/web_ui.h"

namespace settings {

namespace {

// TODO(https://crbug.com/1251039): Remove usages of base::ListValue
base::Value::List GetHandlersAsListValue(
    const custom_handlers::ProtocolHandlerRegistry* registry,
    const custom_handlers::ProtocolHandlerRegistry::ProtocolHandlerList&
        handlers) {
  base::Value::List handler_list;
  for (const auto& handler : handlers) {
    base::Value::Dict handler_value;
    handler_value.Set("protocol_display_name",
                      handler.GetProtocolDisplayName());
    handler_value.Set("protocol", handler.protocol());
    handler_value.Set("spec", handler.url().spec());
    handler_value.Set("host", handler.url().host());
    if (registry)
      handler_value.Set("is_default", registry->IsDefault(handler));
    if (handler.web_app_id().has_value())
      handler_value.Set("app_id", handler.web_app_id().value());
    handler_list.Append(std::move(handler_value));
  }
  return handler_list;
}

}  // namespace

ProtocolHandlersHandler::ProtocolHandlersHandler(Profile* profile)
    : profile_(profile),
      web_app_provider_(web_app::WebAppProvider::GetForWebApps(profile)) {}

ProtocolHandlersHandler::~ProtocolHandlersHandler() = default;

void ProtocolHandlersHandler::OnJavascriptAllowed() {
  registry_observation_.Observe(GetProtocolHandlerRegistry());
  if (web_app_provider_) {
    app_observation_.Observe(&web_app_provider_->registrar());
    install_manager_observation_.Observe(&web_app_provider_->install_manager());
  }
}

void ProtocolHandlersHandler::OnJavascriptDisallowed() {
  registry_observation_.Reset();
  install_manager_observation_.Reset();
  app_observation_.Reset();
}

void ProtocolHandlersHandler::RegisterMessages() {
  web_ui()->RegisterMessageCallback(
      "observeProtocolHandlers",
      base::BindRepeating(
          &ProtocolHandlersHandler::HandleObserveProtocolHandlers,
          base::Unretained(this)));
  web_ui()->RegisterMessageCallback(
      "observeProtocolHandlersEnabledState",
      base::BindRepeating(
          &ProtocolHandlersHandler::HandleObserveProtocolHandlersEnabledState,
          base::Unretained(this)));
  web_ui()->RegisterMessageCallback(
      "removeHandler",
      base::BindRepeating(&ProtocolHandlersHandler::HandleRemoveHandler,
                          base::Unretained(this)));
  web_ui()->RegisterMessageCallback(
      "setHandlersEnabled",
      base::BindRepeating(&ProtocolHandlersHandler::HandleSetHandlersEnabled,
                          base::Unretained(this)));
  web_ui()->RegisterMessageCallback(
      "setDefault",
      base::BindRepeating(&ProtocolHandlersHandler::HandleSetDefault,
                          base::Unretained(this)));

  // Web App Protocol Handlers register message callbacks:
  web_ui()->RegisterMessageCallback(
      "observeAppProtocolHandlers",
      base::BindRepeating(
          &ProtocolHandlersHandler::HandleObserveAppProtocolHandlers,
          base::Unretained(this)));
  web_ui()->RegisterMessageCallback(
      "removeAppAllowedHandler",
      base::BindRepeating(
          &ProtocolHandlersHandler::HandleRemoveAllowedAppHandler,
          base::Unretained(this)));
  web_ui()->RegisterMessageCallback(
      "removeAppDisallowedHandler",
      base::BindRepeating(
          &ProtocolHandlersHandler::HandleRemoveDisallowedAppHandler,
          base::Unretained(this)));
}

void ProtocolHandlersHandler::OnProtocolHandlerRegistryChanged() {
  SendHandlersEnabledValue();
  UpdateHandlerList();
}

void ProtocolHandlersHandler::OnWebAppProtocolSettingsChanged() {
  UpdateAllAllowedLaunchProtocols();
  UpdateAllDisallowedLaunchProtocols();
}

void ProtocolHandlersHandler::OnWebAppUninstalled(
    const web_app::AppId& app_id) {
  OnWebAppProtocolSettingsChanged();
}

void ProtocolHandlersHandler::OnWebAppInstallManagerDestroyed() {
  install_manager_observation_.Reset();
}

base::Value::Dict ProtocolHandlersHandler::GetHandlersForProtocol(
    const std::string& protocol) {
  base::Value::Dict handlers_value;
  custom_handlers::ProtocolHandlerRegistry* registry =
      GetProtocolHandlerRegistry();
  handlers_value.Set(
      "protocol_display_name",
      custom_handlers::ProtocolHandler::GetProtocolDisplayName(protocol));
  handlers_value.Set("protocol", protocol);

  base::Value::List handlers_list =
      GetHandlersAsListValue(registry, registry->GetHandlersFor(protocol));
  handlers_value.Set("handlers", std::move(handlers_list));
  return handlers_value;
}

base::Value::List ProtocolHandlersHandler::GetIgnoredHandlers() {
  custom_handlers::ProtocolHandlerRegistry* registry =
      GetProtocolHandlerRegistry();
  custom_handlers::ProtocolHandlerRegistry::ProtocolHandlerList
      ignored_handlers = registry->GetIgnoredHandlers();
  return GetHandlersAsListValue(registry, ignored_handlers);
}

void ProtocolHandlersHandler::UpdateHandlerList() {
  custom_handlers::ProtocolHandlerRegistry* registry =
      GetProtocolHandlerRegistry();
  std::vector<std::string> protocols;
  registry->GetRegisteredProtocols(&protocols);

  base::Value::List handlers;
  for (auto protocol = protocols.begin(); protocol != protocols.end();
       protocol++) {
    handlers.Append(GetHandlersForProtocol(*protocol));
  }

  FireWebUIListener("setProtocolHandlers", handlers);
  FireWebUIListener("setIgnoredProtocolHandlers", GetIgnoredHandlers());
}

void ProtocolHandlersHandler::HandleObserveProtocolHandlers(
    const base::Value::List& args) {
  AllowJavascript();
  SendHandlersEnabledValue();
  UpdateHandlerList();
}

void ProtocolHandlersHandler::HandleObserveProtocolHandlersEnabledState(
    const base::Value::List& args) {
  AllowJavascript();
  SendHandlersEnabledValue();
}

void ProtocolHandlersHandler::SendHandlersEnabledValue() {
  FireWebUIListener("setHandlersEnabled",
                    base::Value(GetProtocolHandlerRegistry()->enabled()));
}

void ProtocolHandlersHandler::HandleRemoveHandler(
    const base::Value::List& args) {
  custom_handlers::ProtocolHandler handler(ParseHandlerFromArgs(args));
  CHECK(!handler.IsEmpty());
  GetProtocolHandlerRegistry()->RemoveHandler(handler);

  // No need to call UpdateHandlerList() - we should receive a notification
  // that the ProtocolHandlerRegistry has changed and we will update the view
  // then.
}

void ProtocolHandlersHandler::HandleSetHandlersEnabled(
    const base::Value::List& args) {
  bool enabled = true;
  CHECK(args[0].is_bool());
  enabled = args[0].GetBool();
  if (enabled)
    GetProtocolHandlerRegistry()->Enable();
  else
    GetProtocolHandlerRegistry()->Disable();
}

void ProtocolHandlersHandler::HandleSetDefault(const base::Value::List& args) {
  const custom_handlers::ProtocolHandler& handler(ParseHandlerFromArgs(args));
  CHECK(!handler.IsEmpty());
  GetProtocolHandlerRegistry()->OnAcceptRegisterProtocolHandler(handler);
}

custom_handlers::ProtocolHandler ProtocolHandlersHandler::ParseHandlerFromArgs(
    const base::Value::List& args) const {
  bool ok = args.size() >= 2u && args[0].is_string() && args[1].is_string();
  if (!ok)
    return custom_handlers::ProtocolHandler::EmptyProtocolHandler();
  std::string protocol = args[0].GetString();
  std::string url = args[1].GetString();
  return custom_handlers::ProtocolHandler::CreateProtocolHandler(protocol,
                                                                 GURL(url));
}

custom_handlers::ProtocolHandlerRegistry*
ProtocolHandlersHandler::GetProtocolHandlerRegistry() {
  return ProtocolHandlerRegistryFactory::GetForBrowserContext(profile_);
}

// App Protocol Handler specific functions

base::Value::Dict ProtocolHandlersHandler::GetAppHandlersForProtocol(
    const std::string& protocol,
    custom_handlers::ProtocolHandlerRegistry::ProtocolHandlerList handlers) {
  base::Value::Dict handlers_value;

  if (!handlers.empty()) {
    handlers_value.Set(
        "protocol_display_name",
        custom_handlers::ProtocolHandler::GetProtocolDisplayName(protocol));
    handlers_value.Set("protocol", protocol);
    handlers_value.Set("handlers", GetHandlersAsListValue(nullptr, handlers));
  }
  return handlers_value;
}

void ProtocolHandlersHandler::UpdateAllAllowedLaunchProtocols() {
  if (!web_app_provider_)
    return;

  base::flat_set<std::string> protocols(
      web_app_provider_->registrar().GetAllAllowedLaunchProtocols());
  web_app::OsIntegrationManager& os_integration_manager =
      web_app_provider_->os_integration_manager();

  base::Value::List handlers;
  for (auto& protocol : protocols) {
    custom_handlers::ProtocolHandlerRegistry::ProtocolHandlerList
        protocol_handlers =
            os_integration_manager.GetAllowedHandlersForProtocol(protocol);

    handlers.Append(GetAppHandlersForProtocol(protocol, protocol_handlers));
  }

  FireWebUIListener("setAppAllowedProtocolHandlers", handlers);
}

void ProtocolHandlersHandler::UpdateAllDisallowedLaunchProtocols() {
  if (!web_app_provider_)
    return;

  base::flat_set<std::string> protocols(
      web_app_provider_->registrar().GetAllDisallowedLaunchProtocols());
  web_app::OsIntegrationManager& os_integration_manager =
      web_app_provider_->os_integration_manager();

  base::Value::List handlers;
  for (auto& protocol : protocols) {
    custom_handlers::ProtocolHandlerRegistry::ProtocolHandlerList
        protocol_handlers =
            os_integration_manager.GetDisallowedHandlersForProtocol(protocol);
    handlers.Append(GetAppHandlersForProtocol(protocol, protocol_handlers));
  }

  FireWebUIListener("setAppDisallowedProtocolHandlers", handlers);
}

void ProtocolHandlersHandler::HandleObserveAppProtocolHandlers(
    const base::Value::List& args) {
  AllowJavascript();
  UpdateAllAllowedLaunchProtocols();
  UpdateAllDisallowedLaunchProtocols();
}

void ProtocolHandlersHandler::HandleRemoveAllowedAppHandler(
    const base::Value::List& args) {
  custom_handlers::ProtocolHandler handler(ParseAppHandlerFromArgs(args));
  CHECK(!handler.IsEmpty());
  DCHECK(web_app_provider_);

  web_app_provider_->sync_bridge().RemoveAllowedLaunchProtocol(
      handler.web_app_id().value(), handler.protocol());

  // No need to call UpdateAllAllowedLaunchProtocols() - we should receive a
  // notification that the Web App Protocol Settings has changed and we will
  // update the view then.
}

void ProtocolHandlersHandler::HandleRemoveDisallowedAppHandler(
    const base::Value::List& args) {
  custom_handlers::ProtocolHandler handler(ParseAppHandlerFromArgs(args));
  CHECK(!handler.IsEmpty());
  DCHECK(web_app_provider_);

  web_app_provider_->sync_bridge().RemoveDisallowedLaunchProtocol(
      handler.web_app_id().value(), handler.protocol());

  // Update registration with the OS.
  web_app_provider_->os_integration_manager().UpdateProtocolHandlers(
      handler.web_app_id().value(), /*force_shortcut_updates_if_needed=*/true,
      base::DoNothing());

  // No need to call UpdateAllDisallowedLaunchProtocols() - we should receive a
  // notification that the Web App Protocol Settings has changed and we will
  // update the view then.
}

custom_handlers::ProtocolHandler
ProtocolHandlersHandler::ParseAppHandlerFromArgs(
    const base::Value::List& args) const {
  const std::string* protocol = args[0].GetIfString();
  const std::string* url = args[1].GetIfString();
  const std::string* app_id = args[2].GetIfString();
  if (!protocol || !url || !app_id)
    return custom_handlers::ProtocolHandler::EmptyProtocolHandler();
  return custom_handlers::ProtocolHandler::CreateWebAppProtocolHandler(
      *protocol, GURL(*url), *app_id);
}

}  // namespace settings
