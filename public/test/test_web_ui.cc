// Copyright 2015 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/public/test/test_web_ui.h"

#include <utility>

#include "base/callback.h"
#include "base/memory/ptr_util.h"
#include "base/notreached.h"
#include "base/strings/string_piece.h"
#include "content/public/browser/web_ui_controller.h"
#include "content/public/browser/web_ui_message_handler.h"

namespace content {

TestWebUI::TestWebUI() = default;

TestWebUI::~TestWebUI() {
  ClearTrackedCalls();
}

void TestWebUI::ClearTrackedCalls() {
  call_data_.clear();
}

void TestWebUI::HandleReceivedMessage(const std::string& handler_name,
                                      const base::Value::List& args) {
  const auto callbacks_map_it = message_callbacks_.find(handler_name);
  if (callbacks_map_it != message_callbacks_.end()) {
    // Create a copy of the callbacks before running them. Without this, it
    // could be possible for the callback's handler to register a new message
    // handler during iteration of the vector, resulting in undefined behavior.
    std::vector<MessageCallback> callbacks_to_run = callbacks_map_it->second;
    for (auto& callback : callbacks_to_run)
      callback.Run(args);
    return;
  }
}

WebContents* TestWebUI::GetWebContents() {
  return web_contents_;
}

WebUIController* TestWebUI::GetController() {
  return controller_.get();
}

void TestWebUI::SetController(std::unique_ptr<WebUIController> controller) {
  controller_ = std::move(controller);
}

float TestWebUI::GetDeviceScaleFactor() {
  return 1.0f;
}

const std::u16string& TestWebUI::GetOverriddenTitle() {
  return temp_string_;
}

int TestWebUI::GetBindings() {
  return bindings_;
}

void TestWebUI::SetBindings(int bindings) {
  bindings_ = bindings;
}

const std::vector<std::string>& TestWebUI::GetRequestableSchemes() {
  NOTIMPLEMENTED();
  return std::move(std::vector<std::string>());
}

void TestWebUI::AddRequestableScheme(const char* scheme) {
  NOTIMPLEMENTED();
  return;
}

void TestWebUI::AddMessageHandler(
    std::unique_ptr<WebUIMessageHandler> handler) {
  handler->set_web_ui(this);
  handler->RegisterMessages();
  handlers_.push_back(std::move(handler));
}

void TestWebUI::RegisterMessageCallback(base::StringPiece message,
                                        MessageCallback callback) {
  message_callbacks_[static_cast<std::string>(message)].push_back(
      std::move(callback));
}

bool TestWebUI::CanCallJavascript() {
  return true;
}

void TestWebUI::CallJavascriptFunctionUnsafe(base::StringPiece function_name) {
  call_data_.push_back(base::WrapUnique(new CallData(function_name)));
  OnJavascriptCall(*call_data_.back());
}

void TestWebUI::CallJavascriptFunctionUnsafe(
    base::StringPiece function_name,
    base::span<const base::ValueView> args) {
  call_data_.push_back(base::WrapUnique(new CallData(function_name)));
  for (const auto& arg : args) {
    call_data_.back()->AppendArgument(arg.ToValue());
  }
  OnJavascriptCall(*call_data_.back());
}

void TestWebUI::OnJavascriptCall(const CallData& call_data) {
  for (JavascriptCallObserver& observer : javascript_call_observers_)
    observer.OnJavascriptFunctionCalled(call_data);
}

std::vector<std::unique_ptr<WebUIMessageHandler>>*
TestWebUI::GetHandlersForTesting() {
  return &handlers_;
}

TestWebUI::CallData::CallData(base::StringPiece function_name)
    : function_name_(function_name.data(), function_name.size()) {}

TestWebUI::CallData::~CallData() {
}

void TestWebUI::CallData::AppendArgument(base::Value arg) {
  args_.push_back(std::move(arg));
}

}  // namespace content
