// third_party/blink/public/mojom/service_worker/service_worker_object.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom.h"

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

#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-params-data.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-import-headers.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_object.mojom-test-utils.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_OBJECT_MOJOM_JUMBO_H_
#include "third_party/blink/public/common/messaging/cloneable_message_mojom_traits.h"
#include "third_party/blink/public/common/messaging/transferable_message_mojom_traits.h"
#endif



namespace blink {
namespace mojom {
ServiceWorkerObjectInfo::ServiceWorkerObjectInfo()
    : version_id(::blink::mojom::kInvalidServiceWorkerVersionId),
      state(::blink::mojom::ServiceWorkerState::kParsed),
      url(),
      host_remote(),
      receiver() {}

ServiceWorkerObjectInfo::ServiceWorkerObjectInfo(
    int64_t version_id_in,
    ::blink::mojom::ServiceWorkerState state_in,
    const ::GURL& url_in,
    ::mojo::PendingAssociatedRemote<ServiceWorkerObjectHost> host_remote_in,
    ::mojo::PendingAssociatedReceiver<ServiceWorkerObject> receiver_in)
    : version_id(std::move(version_id_in)),
      state(std::move(state_in)),
      url(std::move(url_in)),
      host_remote(std::move(host_remote_in)),
      receiver(std::move(receiver_in)) {}

ServiceWorkerObjectInfo::~ServiceWorkerObjectInfo() = default;

void ServiceWorkerObjectInfo::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "version_id"), this->version_id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "state"), this->state,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::blink::mojom::ServiceWorkerState>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "url"), this->url,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::GURL&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "host_remote"), this->host_remote,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::PendingAssociatedRemote<ServiceWorkerObjectHost>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "receiver"), this->receiver,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::PendingAssociatedReceiver<ServiceWorkerObject>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool ServiceWorkerObjectInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ServiceWorkerObjectHost::Name_[] = "blink.mojom.ServiceWorkerObjectHost";

ServiceWorkerObjectHost::IPCStableHashFunction ServiceWorkerObjectHost::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kServiceWorkerObjectHost_PostMessageToServiceWorker_Name: {
      return &ServiceWorkerObjectHost::PostMessageToServiceWorker_Sym::IPCStableHash;
    }
    case internal::kServiceWorkerObjectHost_TerminateForTesting_Name: {
      return &ServiceWorkerObjectHost::TerminateForTesting_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* ServiceWorkerObjectHost::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kServiceWorkerObjectHost_PostMessageToServiceWorker_Name:
            return "Receive blink::mojom::ServiceWorkerObjectHost::PostMessageToServiceWorker";
      case internal::kServiceWorkerObjectHost_TerminateForTesting_Name:
            return "Receive blink::mojom::ServiceWorkerObjectHost::TerminateForTesting";
    }
  } else {
    switch (message.name()) {
      case internal::kServiceWorkerObjectHost_PostMessageToServiceWorker_Name:
            return "Receive reply blink::mojom::ServiceWorkerObjectHost::PostMessageToServiceWorker";
      case internal::kServiceWorkerObjectHost_TerminateForTesting_Name:
            return "Receive reply blink::mojom::ServiceWorkerObjectHost::TerminateForTesting";
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
uint32_t ServiceWorkerObjectHost::PostMessageToServiceWorker_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::ServiceWorkerObjectHost::PostMessageToServiceWorker");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t ServiceWorkerObjectHost::TerminateForTesting_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::ServiceWorkerObjectHost::TerminateForTesting");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class ServiceWorkerObjectHost_TerminateForTesting_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ServiceWorkerObjectHost_TerminateForTesting_ForwardToCallback(
      ServiceWorkerObjectHost::TerminateForTestingCallback callback
      ) : callback_(std::move(callback)) {
  }

  ServiceWorkerObjectHost_TerminateForTesting_ForwardToCallback(const ServiceWorkerObjectHost_TerminateForTesting_ForwardToCallback&) = delete;
  ServiceWorkerObjectHost_TerminateForTesting_ForwardToCallback& operator=(const ServiceWorkerObjectHost_TerminateForTesting_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  ServiceWorkerObjectHost::TerminateForTestingCallback callback_;
};

ServiceWorkerObjectHostProxy::ServiceWorkerObjectHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerObjectHostProxy::PostMessageToServiceWorker(
    ::blink::TransferableMessage in_message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::ServiceWorkerObjectHost::PostMessageToServiceWorker", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("message"), in_message,
                        "<value of type ::blink::TransferableMessage>");
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
      internal::kServiceWorkerObjectHost_PostMessageToServiceWorker_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->message)::BaseType> message_fragment(
          params.message());
  mojo::internal::Serialize<::blink::mojom::TransferableMessageDataView>(
      in_message, message_fragment);
  params->message.Set(
      message_fragment.is_null() ? nullptr : message_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->message.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null message in ServiceWorkerObjectHost.PostMessageToServiceWorker request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerObjectHost::Name_);
  message.set_method_name("PostMessageToServiceWorker");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void ServiceWorkerObjectHostProxy::TerminateForTesting(
    TerminateForTestingCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send blink::mojom::ServiceWorkerObjectHost::TerminateForTesting");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kServiceWorkerObjectHost_TerminateForTesting_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::ServiceWorkerObjectHost_TerminateForTesting_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerObjectHost::Name_);
  message.set_method_name("TerminateForTesting");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ServiceWorkerObjectHost_TerminateForTesting_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}
class ServiceWorkerObjectHost_TerminateForTesting_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static ServiceWorkerObjectHost::TerminateForTestingCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ServiceWorkerObjectHost_TerminateForTesting_ProxyToResponder> proxy(
        new ServiceWorkerObjectHost_TerminateForTesting_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&ServiceWorkerObjectHost_TerminateForTesting_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ServiceWorkerObjectHost_TerminateForTesting_ProxyToResponder() {
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
  ServiceWorkerObjectHost_TerminateForTesting_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ServiceWorkerObjectHost::TerminateForTestingCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      );
};

bool ServiceWorkerObjectHost_TerminateForTesting_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  ServiceWorkerObjectHost_TerminateForTesting_ResponseParamsDataView input_data_view(params, message);
  
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ServiceWorkerObjectHost::Name_, 1, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run();
  return true;
}

void ServiceWorkerObjectHost_TerminateForTesting_ProxyToResponder::Run(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send reply blink::mojom::ServiceWorkerObjectHost::TerminateForTesting");
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kServiceWorkerObjectHost_TerminateForTesting_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerObjectHost::Name_);
  message.set_method_name("TerminateForTesting");
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
bool ServiceWorkerObjectHostStubDispatch::Accept(
    ServiceWorkerObjectHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerObjectHost_PostMessageToServiceWorker_Name: {

      DCHECK(message->is_serialized());
      internal::ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::blink::TransferableMessage p_message{};
      ServiceWorkerObjectHost_PostMessageToServiceWorker_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadMessage(&p_message))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerObjectHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->PostMessageToServiceWorker(
std::move(p_message));
      return true;
    }
    case internal::kServiceWorkerObjectHost_TerminateForTesting_Name: {
      break;
    }
  }
  return false;
}

// static
bool ServiceWorkerObjectHostStubDispatch::AcceptWithResponder(
    ServiceWorkerObjectHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kServiceWorkerObjectHost_PostMessageToServiceWorker_Name: {
      break;
    }
    case internal::kServiceWorkerObjectHost_TerminateForTesting_Name: {

      internal::ServiceWorkerObjectHost_TerminateForTesting_Params_Data* params =
          reinterpret_cast<
              internal::ServiceWorkerObjectHost_TerminateForTesting_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      ServiceWorkerObjectHost_TerminateForTesting_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerObjectHost::Name_, 1, false);
        return false;
      }
      ServiceWorkerObjectHost::TerminateForTestingCallback callback =
          ServiceWorkerObjectHost_TerminateForTesting_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->TerminateForTesting(std::move(callback));
      return true;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kServiceWorkerObjectHostValidationInfo[] = {
    {&internal::ServiceWorkerObjectHost_PostMessageToServiceWorker_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::ServiceWorkerObjectHost_TerminateForTesting_Params_Data::Validate,
     &internal::ServiceWorkerObjectHost_TerminateForTesting_ResponseParams_Data::Validate},
};

bool ServiceWorkerObjectHostRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::ServiceWorkerObjectHost::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kServiceWorkerObjectHostValidationInfo);
}

bool ServiceWorkerObjectHostResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::ServiceWorkerObjectHost::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kServiceWorkerObjectHostValidationInfo);
}
const char ServiceWorkerObject::Name_[] = "blink.mojom.ServiceWorkerObject";

ServiceWorkerObject::IPCStableHashFunction ServiceWorkerObject::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kServiceWorkerObject_StateChanged_Name: {
      return &ServiceWorkerObject::StateChanged_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* ServiceWorkerObject::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kServiceWorkerObject_StateChanged_Name:
            return "Receive blink::mojom::ServiceWorkerObject::StateChanged";
    }
  } else {
    switch (message.name()) {
      case internal::kServiceWorkerObject_StateChanged_Name:
            return "Receive reply blink::mojom::ServiceWorkerObject::StateChanged";
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
uint32_t ServiceWorkerObject::StateChanged_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::ServiceWorkerObject::StateChanged");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

ServiceWorkerObjectProxy::ServiceWorkerObjectProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ServiceWorkerObjectProxy::StateChanged(
    ::blink::mojom::ServiceWorkerState in_state) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::ServiceWorkerObject::StateChanged", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("state"), in_state,
                        "<value of type ::blink::mojom::ServiceWorkerState>");
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
      internal::kServiceWorkerObject_StateChanged_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::ServiceWorkerObject_StateChanged_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<::blink::mojom::ServiceWorkerState>(
      in_state, &params->state);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ServiceWorkerObject::Name_);
  message.set_method_name("StateChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool ServiceWorkerObjectStubDispatch::Accept(
    ServiceWorkerObject* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kServiceWorkerObject_StateChanged_Name: {

      DCHECK(message->is_serialized());
      internal::ServiceWorkerObject_StateChanged_Params_Data* params =
          reinterpret_cast<internal::ServiceWorkerObject_StateChanged_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::blink::mojom::ServiceWorkerState p_state{};
      ServiceWorkerObject_StateChanged_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadState(&p_state))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ServiceWorkerObject::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->StateChanged(
std::move(p_state));
      return true;
    }
  }
  return false;
}

// static
bool ServiceWorkerObjectStubDispatch::AcceptWithResponder(
    ServiceWorkerObject* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kServiceWorkerObject_StateChanged_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kServiceWorkerObjectValidationInfo[] = {
    {&internal::ServiceWorkerObject_StateChanged_Params_Data::Validate,
     nullptr /* no response */},
};

bool ServiceWorkerObjectRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::ServiceWorkerObject::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kServiceWorkerObjectValidationInfo);
}



}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::ServiceWorkerObjectInfo::DataView, ::blink::mojom::ServiceWorkerObjectInfoPtr>::Read(
    ::blink::mojom::ServiceWorkerObjectInfo::DataView input,
    ::blink::mojom::ServiceWorkerObjectInfoPtr* output) {
  bool success = true;
  ::blink::mojom::ServiceWorkerObjectInfoPtr result(::blink::mojom::ServiceWorkerObjectInfo::New());
  
      if (success)
        result->version_id = input.version_id();
      if (success && !input.ReadState(&result->state))
        success = false;
      if (success && !input.ReadUrl(&result->url))
        success = false;
      if (success) {
        result->host_remote =
            input.TakeHostRemote<decltype(result->host_remote)>();
      }
      if (success) {
        result->receiver =
            input.TakeReceiver<decltype(result->receiver)>();
      }
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {


void ServiceWorkerObjectHostInterceptorForTesting::PostMessageToServiceWorker(::blink::TransferableMessage message) {
  GetForwardingInterface()->PostMessageToServiceWorker(std::move(message));
}
void ServiceWorkerObjectHostInterceptorForTesting::TerminateForTesting(TerminateForTestingCallback callback) {
  GetForwardingInterface()->TerminateForTesting(std::move(callback));
}
ServiceWorkerObjectHostAsyncWaiter::ServiceWorkerObjectHostAsyncWaiter(
    ServiceWorkerObjectHost* proxy) : proxy_(proxy) {}

ServiceWorkerObjectHostAsyncWaiter::~ServiceWorkerObjectHostAsyncWaiter() = default;

void ServiceWorkerObjectHostAsyncWaiter::TerminateForTesting(
    ) {
  base::RunLoop loop;
  proxy_->TerminateForTesting(
      base::BindOnce(
          [](base::RunLoop* loop) {
            loop->Quit();
          },
          &loop));
  loop.Run();
}



void ServiceWorkerObjectInterceptorForTesting::StateChanged(::blink::mojom::ServiceWorkerState state) {
  GetForwardingInterface()->StateChanged(std::move(state));
}
ServiceWorkerObjectAsyncWaiter::ServiceWorkerObjectAsyncWaiter(
    ServiceWorkerObject* proxy) : proxy_(proxy) {}

ServiceWorkerObjectAsyncWaiter::~ServiceWorkerObjectAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif