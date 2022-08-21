// services/audio/public/mojom/log_factory_manager.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/audio/public/mojom/log_factory_manager.mojom.h"

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

#include "services/audio/public/mojom/log_factory_manager.mojom-params-data.h"
#include "services/audio/public/mojom/log_factory_manager.mojom-shared-message-ids.h"

#include "services/audio/public/mojom/log_factory_manager.mojom-import-headers.h"
#include "services/audio/public/mojom/log_factory_manager.mojom-test-utils.h"


#ifndef SERVICES_AUDIO_PUBLIC_MOJOM_LOG_FACTORY_MANAGER_MOJOM_JUMBO_H_
#define SERVICES_AUDIO_PUBLIC_MOJOM_LOG_FACTORY_MANAGER_MOJOM_JUMBO_H_
#endif



namespace audio {
namespace mojom {
const char LogFactoryManager::Name_[] = "audio.mojom.LogFactoryManager";

LogFactoryManager::IPCStableHashFunction LogFactoryManager::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kLogFactoryManager_SetLogFactory_Name: {
      return &LogFactoryManager::SetLogFactory_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* LogFactoryManager::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kLogFactoryManager_SetLogFactory_Name:
            return "Receive audio::mojom::LogFactoryManager::SetLogFactory";
    }
  } else {
    switch (message.name()) {
      case internal::kLogFactoryManager_SetLogFactory_Name:
            return "Receive reply audio::mojom::LogFactoryManager::SetLogFactory";
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
uint32_t LogFactoryManager::SetLogFactory_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)audio::mojom::LogFactoryManager::SetLogFactory");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

LogFactoryManagerProxy::LogFactoryManagerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void LogFactoryManagerProxy::SetLogFactory(
    ::mojo::PendingRemote<::media::mojom::AudioLogFactory> in_factory) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send audio::mojom::LogFactoryManager::SetLogFactory", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("factory"), in_factory,
                        "<value of type ::mojo::PendingRemote<::media::mojom::AudioLogFactory>>");
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
      internal::kLogFactoryManager_SetLogFactory_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::audio::mojom::internal::LogFactoryManager_SetLogFactory_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfacePtrDataView<::media::mojom::AudioLogFactoryInterfaceBase>>(
      in_factory, &params->factory, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid factory in LogFactoryManager.SetLogFactory request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(LogFactoryManager::Name_);
  message.set_method_name("SetLogFactory");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool LogFactoryManagerStubDispatch::Accept(
    LogFactoryManager* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kLogFactoryManager_SetLogFactory_Name: {

      DCHECK(message->is_serialized());
      internal::LogFactoryManager_SetLogFactory_Params_Data* params =
          reinterpret_cast<internal::LogFactoryManager_SetLogFactory_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingRemote<::media::mojom::AudioLogFactory> p_factory{};
      LogFactoryManager_SetLogFactory_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_factory =
            input_data_view.TakeFactory<decltype(p_factory)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            LogFactoryManager::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetLogFactory(
std::move(p_factory));
      return true;
    }
  }
  return false;
}

// static
bool LogFactoryManagerStubDispatch::AcceptWithResponder(
    LogFactoryManager* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kLogFactoryManager_SetLogFactory_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kLogFactoryManagerValidationInfo[] = {
    {&internal::LogFactoryManager_SetLogFactory_Params_Data::Validate,
     nullptr /* no response */},
};

bool LogFactoryManagerRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::audio::mojom::LogFactoryManager::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kLogFactoryManagerValidationInfo);
}



}  // namespace mojom
}  // namespace audio


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace audio {
namespace mojom {


void LogFactoryManagerInterceptorForTesting::SetLogFactory(::mojo::PendingRemote<::media::mojom::AudioLogFactory> factory) {
  GetForwardingInterface()->SetLogFactory(std::move(factory));
}
LogFactoryManagerAsyncWaiter::LogFactoryManagerAsyncWaiter(
    LogFactoryManager* proxy) : proxy_(proxy) {}

LogFactoryManagerAsyncWaiter::~LogFactoryManagerAsyncWaiter() = default;






}  // namespace mojom
}  // namespace audio


#if defined(__clang__)
#pragma clang diagnostic pop
#endif