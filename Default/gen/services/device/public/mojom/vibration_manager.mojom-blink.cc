// services/device/public/mojom/vibration_manager.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/device/public/mojom/vibration_manager.mojom-blink.h"

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

#include "services/device/public/mojom/vibration_manager.mojom-params-data.h"
#include "services/device/public/mojom/vibration_manager.mojom-shared-message-ids.h"

#include "services/device/public/mojom/vibration_manager.mojom-blink-import-headers.h"
#include "services/device/public/mojom/vibration_manager.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_VIBRATION_MANAGER_MOJOM_BLINK_JUMBO_H_
#endif



namespace device {
namespace mojom {
namespace blink {
const char VibrationManager::Name_[] = "device.mojom.VibrationManager";

VibrationManager::IPCStableHashFunction VibrationManager::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kVibrationManager_Vibrate_Name: {
      return &VibrationManager::Vibrate_Sym::IPCStableHash;
    }
    case internal::kVibrationManager_Cancel_Name: {
      return &VibrationManager::Cancel_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* VibrationManager::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kVibrationManager_Vibrate_Name:
            return "Receive device::mojom::VibrationManager::Vibrate";
      case internal::kVibrationManager_Cancel_Name:
            return "Receive device::mojom::VibrationManager::Cancel";
    }
  } else {
    switch (message.name()) {
      case internal::kVibrationManager_Vibrate_Name:
            return "Receive reply device::mojom::VibrationManager::Vibrate";
      case internal::kVibrationManager_Cancel_Name:
            return "Receive reply device::mojom::VibrationManager::Cancel";
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
uint32_t VibrationManager::Vibrate_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)device::mojom::VibrationManager::Vibrate");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t VibrationManager::Cancel_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)device::mojom::VibrationManager::Cancel");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class VibrationManager_Vibrate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VibrationManager_Vibrate_ForwardToCallback(
      VibrationManager::VibrateCallback callback
      ) : callback_(std::move(callback)) {
  }

  VibrationManager_Vibrate_ForwardToCallback(const VibrationManager_Vibrate_ForwardToCallback&) = delete;
  VibrationManager_Vibrate_ForwardToCallback& operator=(const VibrationManager_Vibrate_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  VibrationManager::VibrateCallback callback_;
};

class VibrationManager_Cancel_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  VibrationManager_Cancel_ForwardToCallback(
      VibrationManager::CancelCallback callback
      ) : callback_(std::move(callback)) {
  }

  VibrationManager_Cancel_ForwardToCallback(const VibrationManager_Cancel_ForwardToCallback&) = delete;
  VibrationManager_Cancel_ForwardToCallback& operator=(const VibrationManager_Cancel_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  VibrationManager::CancelCallback callback_;
};

VibrationManagerProxy::VibrationManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void VibrationManagerProxy::Vibrate(
    int64_t in_milliseconds, VibrateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send device::mojom::VibrationManager::Vibrate", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("milliseconds"), in_milliseconds,
                        "<value of type int64_t>");
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
      internal::kVibrationManager_Vibrate_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::device::mojom::internal::VibrationManager_Vibrate_Params_Data> params(
          message);
  params.Allocate();
  params->milliseconds = in_milliseconds;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VibrationManager::Name_);
  message.set_method_name("Vibrate");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VibrationManager_Vibrate_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}

void VibrationManagerProxy::Cancel(
    CancelCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send device::mojom::VibrationManager::Cancel");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kVibrationManager_Cancel_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::device::mojom::internal::VibrationManager_Cancel_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VibrationManager::Name_);
  message.set_method_name("Cancel");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new VibrationManager_Cancel_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}
class VibrationManager_Vibrate_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static VibrationManager::VibrateCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VibrationManager_Vibrate_ProxyToResponder> proxy(
        new VibrationManager_Vibrate_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&VibrationManager_Vibrate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VibrationManager_Vibrate_ProxyToResponder() {
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
  VibrationManager_Vibrate_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "VibrationManager::VibrateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );
};

bool VibrationManager_Vibrate_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::VibrationManager_Vibrate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VibrationManager_Vibrate_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  VibrationManager_Vibrate_ResponseParamsDataView input_data_view(params, message);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VibrationManager::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void VibrationManager_Vibrate_ProxyToResponder::Run(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send reply device::mojom::VibrationManager::Vibrate");
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kVibrationManager_Vibrate_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::device::mojom::internal::VibrationManager_Vibrate_ResponseParams_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VibrationManager::Name_);
  message.set_method_name("Vibrate");
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
class VibrationManager_Cancel_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static VibrationManager::CancelCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<VibrationManager_Cancel_ProxyToResponder> proxy(
        new VibrationManager_Cancel_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&VibrationManager_Cancel_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~VibrationManager_Cancel_ProxyToResponder() {
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
  VibrationManager_Cancel_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "VibrationManager::CancelCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );
};

bool VibrationManager_Cancel_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::VibrationManager_Cancel_ResponseParams_Data* params =
      reinterpret_cast<
          internal::VibrationManager_Cancel_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  VibrationManager_Cancel_ResponseParamsDataView input_data_view(params, message);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        VibrationManager::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void VibrationManager_Cancel_ProxyToResponder::Run(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send reply device::mojom::VibrationManager::Cancel");
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kVibrationManager_Cancel_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::device::mojom::internal::VibrationManager_Cancel_ResponseParams_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(VibrationManager::Name_);
  message.set_method_name("Cancel");
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
bool VibrationManagerStubDispatch::Accept(
    VibrationManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kVibrationManager_Vibrate_Name: {
      break;
    }
    case internal::kVibrationManager_Cancel_Name: {
      break;
    }
  }
  return false;
}

// static
bool VibrationManagerStubDispatch::AcceptWithResponder(
    VibrationManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kVibrationManager_Vibrate_Name: {

      internal::VibrationManager_Vibrate_Params_Data* params =
          reinterpret_cast<
              internal::VibrationManager_Vibrate_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      int64_t p_milliseconds{};
      VibrationManager_Vibrate_ParamsDataView input_data_view(params, message);
      
      if (success)
        p_milliseconds = input_data_view.milliseconds();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VibrationManager::Name_, 0, false);
        return false;
      }
      VibrationManager::VibrateCallback callback =
          VibrationManager_Vibrate_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Vibrate(
std::move(p_milliseconds), std::move(callback));
      return true;
    }
    case internal::kVibrationManager_Cancel_Name: {

      internal::VibrationManager_Cancel_Params_Data* params =
          reinterpret_cast<
              internal::VibrationManager_Cancel_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      VibrationManager_Cancel_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            VibrationManager::Name_, 1, false);
        return false;
      }
      VibrationManager::CancelCallback callback =
          VibrationManager_Cancel_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Cancel(std::move(callback));
      return true;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kVibrationManagerValidationInfo[] = {
    {&internal::VibrationManager_Vibrate_Params_Data::Validate,
     &internal::VibrationManager_Vibrate_ResponseParams_Data::Validate},
    {&internal::VibrationManager_Cancel_Params_Data::Validate,
     &internal::VibrationManager_Cancel_ResponseParams_Data::Validate},
};

bool VibrationManagerRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::device::mojom::blink::VibrationManager::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kVibrationManagerValidationInfo);
}

bool VibrationManagerResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::device::mojom::blink::VibrationManager::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kVibrationManagerValidationInfo);
}


}  // namespace blink
}  // namespace mojom
}  // namespace device


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace device {
namespace mojom {
namespace blink {


void VibrationManagerInterceptorForTesting::Vibrate(int64_t milliseconds, VibrateCallback callback) {
  GetForwardingInterface()->Vibrate(std::move(milliseconds), std::move(callback));
}
void VibrationManagerInterceptorForTesting::Cancel(CancelCallback callback) {
  GetForwardingInterface()->Cancel(std::move(callback));
}
VibrationManagerAsyncWaiter::VibrationManagerAsyncWaiter(
    VibrationManager* proxy) : proxy_(proxy) {}

VibrationManagerAsyncWaiter::~VibrationManagerAsyncWaiter() = default;

void VibrationManagerAsyncWaiter::Vibrate(
    int64_t milliseconds) {
  base::RunLoop loop;
  proxy_->Vibrate(std::move(milliseconds),
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}
void VibrationManagerAsyncWaiter::Cancel(
    ) {
  base::RunLoop loop;
  proxy_->Cancel(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}





}  // namespace blink
}  // namespace mojom
}  // namespace device


#if defined(__clang__)
#pragma clang diagnostic pop
#endif