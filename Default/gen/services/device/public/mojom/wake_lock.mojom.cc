// services/device/public/mojom/wake_lock.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/device/public/mojom/wake_lock.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/debug/alias.h"
#include "base/hash/md5_constexpr.h"
#include "base/run_loop.h"
#include "base/strings/string_number_conversions.h"
#include "base/trace_event/trace_event.h"
#include "base/trace_event/typed_macros.h"
#include "mojo/public/cpp/bindings/lib/generated_code_util.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/send_message_helper.h"
#include "mojo/public/cpp/bindings/lib/proxy_to_responder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/device/public/mojom/wake_lock.mojom-params-data.h"
#include "services/device/public/mojom/wake_lock.mojom-shared-message-ids.h"

#include "services/device/public/mojom/wake_lock.mojom-import-headers.h"
#include "services/device/public/mojom/wake_lock.mojom-test-utils.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_JUMBO_H_
#endif



namespace device {
namespace mojom {
const char WakeLock::Name_[] = "device.mojom.WakeLock";

WakeLock::IPCStableHashFunction WakeLock::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kWakeLock_RequestWakeLock_Name: {
      return &WakeLock::RequestWakeLock_Sym::IPCStableHash;
    }
    case internal::kWakeLock_CancelWakeLock_Name: {
      return &WakeLock::CancelWakeLock_Sym::IPCStableHash;
    }
    case internal::kWakeLock_AddClient_Name: {
      return &WakeLock::AddClient_Sym::IPCStableHash;
    }
    case internal::kWakeLock_ChangeType_Name: {
      return &WakeLock::ChangeType_Sym::IPCStableHash;
    }
    case internal::kWakeLock_HasWakeLockForTests_Name: {
      return &WakeLock::HasWakeLockForTests_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* WakeLock::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kWakeLock_RequestWakeLock_Name:
            return "Receive device::mojom::WakeLock::RequestWakeLock";
      case internal::kWakeLock_CancelWakeLock_Name:
            return "Receive device::mojom::WakeLock::CancelWakeLock";
      case internal::kWakeLock_AddClient_Name:
            return "Receive device::mojom::WakeLock::AddClient";
      case internal::kWakeLock_ChangeType_Name:
            return "Receive device::mojom::WakeLock::ChangeType";
      case internal::kWakeLock_HasWakeLockForTests_Name:
            return "Receive device::mojom::WakeLock::HasWakeLockForTests";
    }
  } else {
    switch (message.name()) {
      case internal::kWakeLock_RequestWakeLock_Name:
            return "Receive reply device::mojom::WakeLock::RequestWakeLock";
      case internal::kWakeLock_CancelWakeLock_Name:
            return "Receive reply device::mojom::WakeLock::CancelWakeLock";
      case internal::kWakeLock_AddClient_Name:
            return "Receive reply device::mojom::WakeLock::AddClient";
      case internal::kWakeLock_ChangeType_Name:
            return "Receive reply device::mojom::WakeLock::ChangeType";
      case internal::kWakeLock_HasWakeLockForTests_Name:
            return "Receive reply device::mojom::WakeLock::HasWakeLockForTests";
    }
  }
  return "Receive unknown mojo message";
#else
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (is_response) {
    return "Receive mojo reply";
  } else {
    return "Receive mojo message";
  }
#endif // BUILDFLAG(MOJO_TRACE_ENABLED)
}

#if !BUILDFLAG(IS_FUCHSIA)
uint32_t WakeLock::RequestWakeLock_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)device::mojom::WakeLock::RequestWakeLock");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t WakeLock::CancelWakeLock_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)device::mojom::WakeLock::CancelWakeLock");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t WakeLock::AddClient_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)device::mojom::WakeLock::AddClient");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t WakeLock::ChangeType_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)device::mojom::WakeLock::ChangeType");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t WakeLock::HasWakeLockForTests_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)device::mojom::WakeLock::HasWakeLockForTests");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class WakeLock_ChangeType_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WakeLock_ChangeType_ForwardToCallback(
      WakeLock::ChangeTypeCallback callback
      ) : callback_(std::move(callback)) {
  }

  WakeLock_ChangeType_ForwardToCallback(const WakeLock_ChangeType_ForwardToCallback&) = delete;
  WakeLock_ChangeType_ForwardToCallback& operator=(const WakeLock_ChangeType_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  WakeLock::ChangeTypeCallback callback_;
};

class WakeLock_HasWakeLockForTests_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WakeLock_HasWakeLockForTests_ForwardToCallback(
      WakeLock::HasWakeLockForTestsCallback callback
      ) : callback_(std::move(callback)) {
  }

  WakeLock_HasWakeLockForTests_ForwardToCallback(const WakeLock_HasWakeLockForTests_ForwardToCallback&) = delete;
  WakeLock_HasWakeLockForTests_ForwardToCallback& operator=(const WakeLock_HasWakeLockForTests_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  WakeLock::HasWakeLockForTestsCallback callback_;
};

WakeLockProxy::WakeLockProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WakeLockProxy::RequestWakeLock(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send device::mojom::WakeLock::RequestWakeLock");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kWakeLock_RequestWakeLock_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::device::mojom::internal::WakeLock_RequestWakeLock_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLock::Name_);
  message.set_method_name("RequestWakeLock");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void WakeLockProxy::CancelWakeLock(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send device::mojom::WakeLock::CancelWakeLock");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kWakeLock_CancelWakeLock_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::device::mojom::internal::WakeLock_CancelWakeLock_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLock::Name_);
  message.set_method_name("CancelWakeLock");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void WakeLockProxy::AddClient(
    ::mojo::PendingReceiver<WakeLock> in_wake_lock) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send device::mojom::WakeLock::AddClient", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("wake_lock"), in_wake_lock,
                        "<value of type ::mojo::PendingReceiver<WakeLock>>");
   });
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kWakeLock_AddClient_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::device::mojom::internal::WakeLock_AddClient_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::device::mojom::WakeLockInterfaceBase>>(
      in_wake_lock, &params->wake_lock, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->wake_lock),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid wake_lock in WakeLock.AddClient request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLock::Name_);
  message.set_method_name("AddClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void WakeLockProxy::ChangeType(
    WakeLockType in_type, ChangeTypeCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send device::mojom::WakeLock::ChangeType", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("type"), in_type,
                        "<value of type WakeLockType>");
   });
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kWakeLock_ChangeType_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::device::mojom::internal::WakeLock_ChangeType_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<::device::mojom::WakeLockType>(
      in_type, &params->type);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLock::Name_);
  message.set_method_name("ChangeType");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WakeLock_ChangeType_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}

void WakeLockProxy::HasWakeLockForTests(
    HasWakeLockForTestsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send device::mojom::WakeLock::HasWakeLockForTests");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kWakeLock_HasWakeLockForTests_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::device::mojom::internal::WakeLock_HasWakeLockForTests_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLock::Name_);
  message.set_method_name("HasWakeLockForTests");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WakeLock_HasWakeLockForTests_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}
class WakeLock_ChangeType_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static WakeLock::ChangeTypeCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WakeLock_ChangeType_ProxyToResponder> proxy(
        new WakeLock_ChangeType_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&WakeLock_ChangeType_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WakeLock_ChangeType_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
  }

 private:
  WakeLock_ChangeType_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "WakeLock::ChangeTypeCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);
};

bool WakeLock_ChangeType_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::WakeLock_ChangeType_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WakeLock_ChangeType_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  bool p_result{};
  WakeLock_ChangeType_ResponseParamsDataView input_data_view(params, message);
  
  if (success)
    p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WakeLock::Name_, 3, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void WakeLock_ChangeType_ProxyToResponder::Run(
    bool in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply device::mojom::WakeLock::ChangeType", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("result"), in_result,
                        "<value of type bool>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kWakeLock_ChangeType_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::device::mojom::internal::WakeLock_ChangeType_ResponseParams_Data> params(
          message);
  params.Allocate();
  params->result = in_result;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLock::Name_);
  message.set_method_name("ChangeType");
#endif

  message.set_request_id(request_id_);
  message.set_trace_nonce(trace_nonce_);
  ::mojo::internal::SendMojoMessage(*responder_, message);
  // SendMojoMessage() fails silently if the responder connection is closed,
  // or if the message is malformed.
  //
  // TODO(darin): If Accept() returns false due to a malformed message, that
  // may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}
class WakeLock_HasWakeLockForTests_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static WakeLock::HasWakeLockForTestsCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WakeLock_HasWakeLockForTests_ProxyToResponder> proxy(
        new WakeLock_HasWakeLockForTests_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&WakeLock_HasWakeLockForTests_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WakeLock_HasWakeLockForTests_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
  }

 private:
  WakeLock_HasWakeLockForTests_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "WakeLock::HasWakeLockForTestsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_result);
};

bool WakeLock_HasWakeLockForTests_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::WakeLock_HasWakeLockForTests_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WakeLock_HasWakeLockForTests_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  bool p_result{};
  WakeLock_HasWakeLockForTests_ResponseParamsDataView input_data_view(params, message);
  
  if (success)
    p_result = input_data_view.result();
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WakeLock::Name_, 4, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void WakeLock_HasWakeLockForTests_ProxyToResponder::Run(
    bool in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply device::mojom::WakeLock::HasWakeLockForTests", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("result"), in_result,
                        "<value of type bool>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kWakeLock_HasWakeLockForTests_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::device::mojom::internal::WakeLock_HasWakeLockForTests_ResponseParams_Data> params(
          message);
  params.Allocate();
  params->result = in_result;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WakeLock::Name_);
  message.set_method_name("HasWakeLockForTests");
#endif

  message.set_request_id(request_id_);
  message.set_trace_nonce(trace_nonce_);
  ::mojo::internal::SendMojoMessage(*responder_, message);
  // SendMojoMessage() fails silently if the responder connection is closed,
  // or if the message is malformed.
  //
  // TODO(darin): If Accept() returns false due to a malformed message, that
  // may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool WakeLockStubDispatch::Accept(
    WakeLock* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWakeLock_RequestWakeLock_Name: {

      DCHECK(message->is_serialized());
      internal::WakeLock_RequestWakeLock_Params_Data* params =
          reinterpret_cast<internal::WakeLock_RequestWakeLock_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      WakeLock_RequestWakeLock_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WakeLock::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestWakeLock();
      return true;
    }
    case internal::kWakeLock_CancelWakeLock_Name: {

      DCHECK(message->is_serialized());
      internal::WakeLock_CancelWakeLock_Params_Data* params =
          reinterpret_cast<internal::WakeLock_CancelWakeLock_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      WakeLock_CancelWakeLock_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WakeLock::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CancelWakeLock();
      return true;
    }
    case internal::kWakeLock_AddClient_Name: {

      DCHECK(message->is_serialized());
      internal::WakeLock_AddClient_Params_Data* params =
          reinterpret_cast<internal::WakeLock_AddClient_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<WakeLock> p_wake_lock{};
      WakeLock_AddClient_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_wake_lock =
            input_data_view.TakeWakeLock<decltype(p_wake_lock)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WakeLock::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddClient(
std::move(p_wake_lock));
      return true;
    }
    case internal::kWakeLock_ChangeType_Name: {
      break;
    }
    case internal::kWakeLock_HasWakeLockForTests_Name: {
      break;
    }
  }
  return false;
}

// static
bool WakeLockStubDispatch::AcceptWithResponder(
    WakeLock* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kWakeLock_RequestWakeLock_Name: {
      break;
    }
    case internal::kWakeLock_CancelWakeLock_Name: {
      break;
    }
    case internal::kWakeLock_AddClient_Name: {
      break;
    }
    case internal::kWakeLock_ChangeType_Name: {

      internal::WakeLock_ChangeType_Params_Data* params =
          reinterpret_cast<
              internal::WakeLock_ChangeType_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      WakeLockType p_type{};
      WakeLock_ChangeType_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadType(&p_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WakeLock::Name_, 3, false);
        return false;
      }
      WakeLock::ChangeTypeCallback callback =
          WakeLock_ChangeType_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ChangeType(
std::move(p_type), std::move(callback));
      return true;
    }
    case internal::kWakeLock_HasWakeLockForTests_Name: {

      internal::WakeLock_HasWakeLockForTests_Params_Data* params =
          reinterpret_cast<
              internal::WakeLock_HasWakeLockForTests_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      WakeLock_HasWakeLockForTests_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WakeLock::Name_, 4, false);
        return false;
      }
      WakeLock::HasWakeLockForTestsCallback callback =
          WakeLock_HasWakeLockForTests_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->HasWakeLockForTests(std::move(callback));
      return true;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kWakeLockValidationInfo[] = {
    {&internal::WakeLock_RequestWakeLock_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::WakeLock_CancelWakeLock_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::WakeLock_AddClient_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::WakeLock_ChangeType_Params_Data::Validate,
     &internal::WakeLock_ChangeType_ResponseParams_Data::Validate},
    {&internal::WakeLock_HasWakeLockForTests_Params_Data::Validate,
     &internal::WakeLock_HasWakeLockForTests_ResponseParams_Data::Validate},
};

bool WakeLockRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::device::mojom::WakeLock::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kWakeLockValidationInfo);
}

bool WakeLockResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::device::mojom::WakeLock::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kWakeLockValidationInfo);
}


}  // namespace mojom
}  // namespace device


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace device {
namespace mojom {


void WakeLockInterceptorForTesting::RequestWakeLock() {
  GetForwardingInterface()->RequestWakeLock();
}
void WakeLockInterceptorForTesting::CancelWakeLock() {
  GetForwardingInterface()->CancelWakeLock();
}
void WakeLockInterceptorForTesting::AddClient(::mojo::PendingReceiver<WakeLock> wake_lock) {
  GetForwardingInterface()->AddClient(std::move(wake_lock));
}
void WakeLockInterceptorForTesting::ChangeType(WakeLockType type, ChangeTypeCallback callback) {
  GetForwardingInterface()->ChangeType(std::move(type), std::move(callback));
}
void WakeLockInterceptorForTesting::HasWakeLockForTests(HasWakeLockForTestsCallback callback) {
  GetForwardingInterface()->HasWakeLockForTests(std::move(callback));
}
WakeLockAsyncWaiter::WakeLockAsyncWaiter(
    WakeLock* proxy) : proxy_(proxy) {}

WakeLockAsyncWaiter::~WakeLockAsyncWaiter() = default;

void WakeLockAsyncWaiter::ChangeType(
    WakeLockType type, bool* out_result) {
  base::RunLoop loop;
  proxy_->ChangeType(std::move(type),
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}
void WakeLockAsyncWaiter::HasWakeLockForTests(
    bool* out_result) {
  base::RunLoop loop;
  proxy_->HasWakeLockForTests(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_result
,
             bool result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace mojom
}  // namespace device


#if defined(__clang__)
#pragma clang diagnostic pop
#endif