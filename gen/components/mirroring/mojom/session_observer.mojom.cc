// components/mirroring/mojom/session_observer.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "components/mirroring/mojom/session_observer.mojom.h"

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

#include "components/mirroring/mojom/session_observer.mojom-params-data.h"
#include "components/mirroring/mojom/session_observer.mojom-shared-message-ids.h"

#include "components/mirroring/mojom/session_observer.mojom-import-headers.h"
#include "components/mirroring/mojom/session_observer.mojom-test-utils.h"


#ifndef COMPONENTS_MIRRORING_MOJOM_SESSION_OBSERVER_MOJOM_JUMBO_H_
#define COMPONENTS_MIRRORING_MOJOM_SESSION_OBSERVER_MOJOM_JUMBO_H_
#endif



namespace mirroring {
namespace mojom {
const char SessionObserver::Name_[] = "mirroring.mojom.SessionObserver";

SessionObserver::IPCStableHashFunction SessionObserver::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kSessionObserver_OnError_Name: {
      return &SessionObserver::OnError_Sym::IPCStableHash;
    }
    case internal::kSessionObserver_DidStart_Name: {
      return &SessionObserver::DidStart_Sym::IPCStableHash;
    }
    case internal::kSessionObserver_DidStop_Name: {
      return &SessionObserver::DidStop_Sym::IPCStableHash;
    }
    case internal::kSessionObserver_LogInfoMessage_Name: {
      return &SessionObserver::LogInfoMessage_Sym::IPCStableHash;
    }
    case internal::kSessionObserver_LogErrorMessage_Name: {
      return &SessionObserver::LogErrorMessage_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* SessionObserver::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kSessionObserver_OnError_Name:
            return "Receive mirroring::mojom::SessionObserver::OnError";
      case internal::kSessionObserver_DidStart_Name:
            return "Receive mirroring::mojom::SessionObserver::DidStart";
      case internal::kSessionObserver_DidStop_Name:
            return "Receive mirroring::mojom::SessionObserver::DidStop";
      case internal::kSessionObserver_LogInfoMessage_Name:
            return "Receive mirroring::mojom::SessionObserver::LogInfoMessage";
      case internal::kSessionObserver_LogErrorMessage_Name:
            return "Receive mirroring::mojom::SessionObserver::LogErrorMessage";
    }
  } else {
    switch (message.name()) {
      case internal::kSessionObserver_OnError_Name:
            return "Receive reply mirroring::mojom::SessionObserver::OnError";
      case internal::kSessionObserver_DidStart_Name:
            return "Receive reply mirroring::mojom::SessionObserver::DidStart";
      case internal::kSessionObserver_DidStop_Name:
            return "Receive reply mirroring::mojom::SessionObserver::DidStop";
      case internal::kSessionObserver_LogInfoMessage_Name:
            return "Receive reply mirroring::mojom::SessionObserver::LogInfoMessage";
      case internal::kSessionObserver_LogErrorMessage_Name:
            return "Receive reply mirroring::mojom::SessionObserver::LogErrorMessage";
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
uint32_t SessionObserver::OnError_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)mirroring::mojom::SessionObserver::OnError");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t SessionObserver::DidStart_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)mirroring::mojom::SessionObserver::DidStart");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t SessionObserver::DidStop_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)mirroring::mojom::SessionObserver::DidStop");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t SessionObserver::LogInfoMessage_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)mirroring::mojom::SessionObserver::LogInfoMessage");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t SessionObserver::LogErrorMessage_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)mirroring::mojom::SessionObserver::LogErrorMessage");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

SessionObserverProxy::SessionObserverProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void SessionObserverProxy::OnError(
    SessionError in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send mirroring::mojom::SessionObserver::OnError", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("error"), in_error,
                        "<value of type SessionError>");
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
      internal::kSessionObserver_OnError_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::mirroring::mojom::internal::SessionObserver_OnError_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<::mirroring::mojom::SessionError>(
      in_error, &params->error);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SessionObserver::Name_);
  message.set_method_name("OnError");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void SessionObserverProxy::DidStart(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send mirroring::mojom::SessionObserver::DidStart");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kSessionObserver_DidStart_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::mirroring::mojom::internal::SessionObserver_DidStart_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SessionObserver::Name_);
  message.set_method_name("DidStart");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void SessionObserverProxy::DidStop(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send mirroring::mojom::SessionObserver::DidStop");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kSessionObserver_DidStop_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::mirroring::mojom::internal::SessionObserver_DidStop_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SessionObserver::Name_);
  message.set_method_name("DidStop");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void SessionObserverProxy::LogInfoMessage(
    const std::string& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send mirroring::mojom::SessionObserver::LogInfoMessage", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("message"), in_message,
                        "<value of type const std::string&>");
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
      internal::kSessionObserver_LogInfoMessage_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::mirroring::mojom::internal::SessionObserver_LogInfoMessage_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->message)::BaseType> message_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, message_fragment);
  params->message.Set(
      message_fragment.is_null() ? nullptr : message_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in SessionObserver.LogInfoMessage request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SessionObserver::Name_);
  message.set_method_name("LogInfoMessage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void SessionObserverProxy::LogErrorMessage(
    const std::string& in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send mirroring::mojom::SessionObserver::LogErrorMessage", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("message"), in_message,
                        "<value of type const std::string&>");
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
      internal::kSessionObserver_LogErrorMessage_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::mirroring::mojom::internal::SessionObserver_LogErrorMessage_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->message)::BaseType> message_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_message, message_fragment);
  params->message.Set(
      message_fragment.is_null() ? nullptr : message_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in SessionObserver.LogErrorMessage request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(SessionObserver::Name_);
  message.set_method_name("LogErrorMessage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool SessionObserverStubDispatch::Accept(
    SessionObserver* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kSessionObserver_OnError_Name: {

      DCHECK(message->is_serialized());
      internal::SessionObserver_OnError_Params_Data* params =
          reinterpret_cast<internal::SessionObserver_OnError_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      SessionError p_error{};
      SessionObserver_OnError_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadError(&p_error))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SessionObserver::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnError(
std::move(p_error));
      return true;
    }
    case internal::kSessionObserver_DidStart_Name: {

      DCHECK(message->is_serialized());
      internal::SessionObserver_DidStart_Params_Data* params =
          reinterpret_cast<internal::SessionObserver_DidStart_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      SessionObserver_DidStart_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SessionObserver::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidStart();
      return true;
    }
    case internal::kSessionObserver_DidStop_Name: {

      DCHECK(message->is_serialized());
      internal::SessionObserver_DidStop_Params_Data* params =
          reinterpret_cast<internal::SessionObserver_DidStop_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      SessionObserver_DidStop_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SessionObserver::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->DidStop();
      return true;
    }
    case internal::kSessionObserver_LogInfoMessage_Name: {

      DCHECK(message->is_serialized());
      internal::SessionObserver_LogInfoMessage_Params_Data* params =
          reinterpret_cast<internal::SessionObserver_LogInfoMessage_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      std::string p_message{};
      SessionObserver_LogInfoMessage_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SessionObserver::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->LogInfoMessage(
std::move(p_message));
      return true;
    }
    case internal::kSessionObserver_LogErrorMessage_Name: {

      DCHECK(message->is_serialized());
      internal::SessionObserver_LogErrorMessage_Params_Data* params =
          reinterpret_cast<internal::SessionObserver_LogErrorMessage_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      std::string p_message{};
      SessionObserver_LogErrorMessage_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            SessionObserver::Name_, 4, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->LogErrorMessage(
std::move(p_message));
      return true;
    }
  }
  return false;
}

// static
bool SessionObserverStubDispatch::AcceptWithResponder(
    SessionObserver* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kSessionObserver_OnError_Name: {
      break;
    }
    case internal::kSessionObserver_DidStart_Name: {
      break;
    }
    case internal::kSessionObserver_DidStop_Name: {
      break;
    }
    case internal::kSessionObserver_LogInfoMessage_Name: {
      break;
    }
    case internal::kSessionObserver_LogErrorMessage_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kSessionObserverValidationInfo[] = {
    {&internal::SessionObserver_OnError_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::SessionObserver_DidStart_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::SessionObserver_DidStop_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::SessionObserver_LogInfoMessage_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::SessionObserver_LogErrorMessage_Params_Data::Validate,
     nullptr /* no response */},
};

bool SessionObserverRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::mirroring::mojom::SessionObserver::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kSessionObserverValidationInfo);
}



}  // namespace mojom
}  // namespace mirroring


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace mirroring {
namespace mojom {


void SessionObserverInterceptorForTesting::OnError(SessionError error) {
  GetForwardingInterface()->OnError(std::move(error));
}
void SessionObserverInterceptorForTesting::DidStart() {
  GetForwardingInterface()->DidStart();
}
void SessionObserverInterceptorForTesting::DidStop() {
  GetForwardingInterface()->DidStop();
}
void SessionObserverInterceptorForTesting::LogInfoMessage(const std::string& message) {
  GetForwardingInterface()->LogInfoMessage(std::move(message));
}
void SessionObserverInterceptorForTesting::LogErrorMessage(const std::string& message) {
  GetForwardingInterface()->LogErrorMessage(std::move(message));
}
SessionObserverAsyncWaiter::SessionObserverAsyncWaiter(
    SessionObserver* proxy) : proxy_(proxy) {}

SessionObserverAsyncWaiter::~SessionObserverAsyncWaiter() = default;






}  // namespace mojom
}  // namespace mirroring


#if defined(__clang__)
#pragma clang diagnostic pop
#endif