// services/tracing/public/mojom/tracing_service.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/tracing/public/mojom/tracing_service.mojom.h"

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

#include "services/tracing/public/mojom/tracing_service.mojom-params-data.h"
#include "services/tracing/public/mojom/tracing_service.mojom-shared-message-ids.h"

#include "services/tracing/public/mojom/tracing_service.mojom-import-headers.h"
#include "services/tracing/public/mojom/tracing_service.mojom-test-utils.h"


#ifndef SERVICES_TRACING_PUBLIC_MOJOM_TRACING_SERVICE_MOJOM_JUMBO_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_TRACING_SERVICE_MOJOM_JUMBO_H_
#endif



namespace tracing {
namespace mojom {
ClientInfo::ClientInfo()
    : pid(),
      process() {}

ClientInfo::ClientInfo(
    int32_t pid_in,
    ::mojo::PendingRemote<::tracing::mojom::TracedProcess> process_in)
    : pid(std::move(pid_in)),
      process(std::move(process_in)) {}

ClientInfo::~ClientInfo() = default;

void ClientInfo::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "pid"), this->pid,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "process"), this->process,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::PendingRemote<::tracing::mojom::TracedProcess>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool ClientInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char TracingService::Name_[] = "tracing.mojom.TracingService";

TracingService::IPCStableHashFunction TracingService::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kTracingService_Initialize_Name: {
      return &TracingService::Initialize_Sym::IPCStableHash;
    }
    case internal::kTracingService_AddClient_Name: {
      return &TracingService::AddClient_Sym::IPCStableHash;
    }
    case internal::kTracingService_BindConsumerHost_Name: {
      return &TracingService::BindConsumerHost_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* TracingService::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kTracingService_Initialize_Name:
            return "Receive tracing::mojom::TracingService::Initialize";
      case internal::kTracingService_AddClient_Name:
            return "Receive tracing::mojom::TracingService::AddClient";
      case internal::kTracingService_BindConsumerHost_Name:
            return "Receive tracing::mojom::TracingService::BindConsumerHost";
    }
  } else {
    switch (message.name()) {
      case internal::kTracingService_Initialize_Name:
            return "Receive reply tracing::mojom::TracingService::Initialize";
      case internal::kTracingService_AddClient_Name:
            return "Receive reply tracing::mojom::TracingService::AddClient";
      case internal::kTracingService_BindConsumerHost_Name:
            return "Receive reply tracing::mojom::TracingService::BindConsumerHost";
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
uint32_t TracingService::Initialize_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)tracing::mojom::TracingService::Initialize");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t TracingService::AddClient_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)tracing::mojom::TracingService::AddClient");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t TracingService::BindConsumerHost_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)tracing::mojom::TracingService::BindConsumerHost");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

TracingServiceProxy::TracingServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void TracingServiceProxy::Initialize(
    std::vector<ClientInfoPtr> in_clients) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send tracing::mojom::TracingService::Initialize", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("clients"), in_clients,
                        "<value of type std::vector<ClientInfoPtr>>");
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
      internal::kTracingService_Initialize_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::tracing::mojom::internal::TracingService_Initialize_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->clients)::BaseType>
      clients_fragment(params.message());
  const mojo::internal::ContainerValidateParams clients_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::tracing::mojom::ClientInfoDataView>>(
      in_clients, clients_fragment, &clients_validate_params);
  params->clients.Set(
      clients_fragment.is_null() ? nullptr : clients_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->clients.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null clients in TracingService.Initialize request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracingService::Name_);
  message.set_method_name("Initialize");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void TracingServiceProxy::AddClient(
    ClientInfoPtr in_client) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send tracing::mojom::TracingService::AddClient", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("client"), in_client,
                        "<value of type ClientInfoPtr>");
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
      internal::kTracingService_AddClient_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::tracing::mojom::internal::TracingService_AddClient_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->client)::BaseType> client_fragment(
          params.message());
  mojo::internal::Serialize<::tracing::mojom::ClientInfoDataView>(
      in_client, client_fragment);
  params->client.Set(
      client_fragment.is_null() ? nullptr : client_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->client.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null client in TracingService.AddClient request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracingService::Name_);
  message.set_method_name("AddClient");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void TracingServiceProxy::BindConsumerHost(
    ::mojo::PendingReceiver<::tracing::mojom::ConsumerHost> in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send tracing::mojom::TracingService::BindConsumerHost", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::PendingReceiver<::tracing::mojom::ConsumerHost>>");
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
      internal::kTracingService_BindConsumerHost_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::tracing::mojom::internal::TracingService_BindConsumerHost_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::tracing::mojom::ConsumerHostInterfaceBase>>(
      in_receiver, &params->receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in TracingService.BindConsumerHost request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(TracingService::Name_);
  message.set_method_name("BindConsumerHost");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool TracingServiceStubDispatch::Accept(
    TracingService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kTracingService_Initialize_Name: {

      DCHECK(message->is_serialized());
      internal::TracingService_Initialize_Params_Data* params =
          reinterpret_cast<internal::TracingService_Initialize_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      std::vector<ClientInfoPtr> p_clients{};
      TracingService_Initialize_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadClients(&p_clients))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TracingService::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Initialize(
std::move(p_clients));
      return true;
    }
    case internal::kTracingService_AddClient_Name: {

      DCHECK(message->is_serialized());
      internal::TracingService_AddClient_Params_Data* params =
          reinterpret_cast<internal::TracingService_AddClient_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ClientInfoPtr p_client{};
      TracingService_AddClient_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadClient(&p_client))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TracingService::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddClient(
std::move(p_client));
      return true;
    }
    case internal::kTracingService_BindConsumerHost_Name: {

      DCHECK(message->is_serialized());
      internal::TracingService_BindConsumerHost_Params_Data* params =
          reinterpret_cast<internal::TracingService_BindConsumerHost_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<::tracing::mojom::ConsumerHost> p_receiver{};
      TracingService_BindConsumerHost_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_receiver =
            input_data_view.TakeReceiver<decltype(p_receiver)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            TracingService::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->BindConsumerHost(
std::move(p_receiver));
      return true;
    }
  }
  return false;
}

// static
bool TracingServiceStubDispatch::AcceptWithResponder(
    TracingService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kTracingService_Initialize_Name: {
      break;
    }
    case internal::kTracingService_AddClient_Name: {
      break;
    }
    case internal::kTracingService_BindConsumerHost_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kTracingServiceValidationInfo[] = {
    {&internal::TracingService_Initialize_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::TracingService_AddClient_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::TracingService_BindConsumerHost_Params_Data::Validate,
     nullptr /* no response */},
};

bool TracingServiceRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::tracing::mojom::TracingService::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kTracingServiceValidationInfo);
}



}  // namespace mojom
}  // namespace tracing


namespace mojo {


// static
bool StructTraits<::tracing::mojom::ClientInfo::DataView, ::tracing::mojom::ClientInfoPtr>::Read(
    ::tracing::mojom::ClientInfo::DataView input,
    ::tracing::mojom::ClientInfoPtr* output) {
  bool success = true;
  ::tracing::mojom::ClientInfoPtr result(::tracing::mojom::ClientInfo::New());
  
      if (success)
        result->pid = input.pid();
      if (success) {
        result->process =
            input.TakeProcess<decltype(result->process)>();
      }
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace tracing {
namespace mojom {


void TracingServiceInterceptorForTesting::Initialize(std::vector<ClientInfoPtr> clients) {
  GetForwardingInterface()->Initialize(std::move(clients));
}
void TracingServiceInterceptorForTesting::AddClient(ClientInfoPtr client) {
  GetForwardingInterface()->AddClient(std::move(client));
}
void TracingServiceInterceptorForTesting::BindConsumerHost(::mojo::PendingReceiver<::tracing::mojom::ConsumerHost> receiver) {
  GetForwardingInterface()->BindConsumerHost(std::move(receiver));
}
TracingServiceAsyncWaiter::TracingServiceAsyncWaiter(
    TracingService* proxy) : proxy_(proxy) {}

TracingServiceAsyncWaiter::~TracingServiceAsyncWaiter() = default;






}  // namespace mojom
}  // namespace tracing


#if defined(__clang__)
#pragma clang diagnostic pop
#endif