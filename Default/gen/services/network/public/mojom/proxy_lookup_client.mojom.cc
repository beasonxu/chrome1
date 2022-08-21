// services/network/public/mojom/proxy_lookup_client.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/network/public/mojom/proxy_lookup_client.mojom.h"

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

#include "services/network/public/mojom/proxy_lookup_client.mojom-params-data.h"
#include "services/network/public/mojom/proxy_lookup_client.mojom-shared-message-ids.h"

#include "services/network/public/mojom/proxy_lookup_client.mojom-import-headers.h"
#include "services/network/public/mojom/proxy_lookup_client.mojom-test-utils.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_PROXY_LOOKUP_CLIENT_MOJOM_JUMBO_H_
#endif



namespace network {
namespace mojom {
const char ProxyLookupClient::Name_[] = "network.mojom.ProxyLookupClient";

ProxyLookupClient::IPCStableHashFunction ProxyLookupClient::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kProxyLookupClient_OnProxyLookupComplete_Name: {
      return &ProxyLookupClient::OnProxyLookupComplete_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* ProxyLookupClient::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kProxyLookupClient_OnProxyLookupComplete_Name:
            return "Receive network::mojom::ProxyLookupClient::OnProxyLookupComplete";
    }
  } else {
    switch (message.name()) {
      case internal::kProxyLookupClient_OnProxyLookupComplete_Name:
            return "Receive reply network::mojom::ProxyLookupClient::OnProxyLookupComplete";
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
uint32_t ProxyLookupClient::OnProxyLookupComplete_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)network::mojom::ProxyLookupClient::OnProxyLookupComplete");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

ProxyLookupClientProxy::ProxyLookupClientProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ProxyLookupClientProxy::OnProxyLookupComplete(
    int32_t in_net_error, const absl::optional<::net::ProxyInfo>& in_proxy_info) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send network::mojom::ProxyLookupClient::OnProxyLookupComplete", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("net_error"), in_net_error,
                        "<value of type int32_t>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("proxy_info"), in_proxy_info,
                        "<value of type const absl::optional<::net::ProxyInfo>&>");
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
      internal::kProxyLookupClient_OnProxyLookupComplete_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::network::mojom::internal::ProxyLookupClient_OnProxyLookupComplete_Params_Data> params(
          message);
  params.Allocate();
  params->net_error = in_net_error;
  mojo::internal::MessageFragment<
      typename decltype(params->proxy_info)::BaseType> proxy_info_fragment(
          params.message());
  mojo::internal::Serialize<::proxy_resolver::mojom::ProxyInfoDataView>(
      in_proxy_info, proxy_info_fragment);
  params->proxy_info.Set(
      proxy_info_fragment.is_null() ? nullptr : proxy_info_fragment.data());

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ProxyLookupClient::Name_);
  message.set_method_name("OnProxyLookupComplete");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool ProxyLookupClientStubDispatch::Accept(
    ProxyLookupClient* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kProxyLookupClient_OnProxyLookupComplete_Name: {

      DCHECK(message->is_serialized());
      internal::ProxyLookupClient_OnProxyLookupComplete_Params_Data* params =
          reinterpret_cast<internal::ProxyLookupClient_OnProxyLookupComplete_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      int32_t p_net_error{};
      absl::optional<::net::ProxyInfo> p_proxy_info{};
      ProxyLookupClient_OnProxyLookupComplete_ParamsDataView input_data_view(params, message);
      
      if (success)
        p_net_error = input_data_view.net_error();
      if (success && !input_data_view.ReadProxyInfo(&p_proxy_info))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ProxyLookupClient::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnProxyLookupComplete(
std::move(p_net_error), 
std::move(p_proxy_info));
      return true;
    }
  }
  return false;
}

// static
bool ProxyLookupClientStubDispatch::AcceptWithResponder(
    ProxyLookupClient* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kProxyLookupClient_OnProxyLookupComplete_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kProxyLookupClientValidationInfo[] = {
    {&internal::ProxyLookupClient_OnProxyLookupComplete_Params_Data::Validate,
     nullptr /* no response */},
};

bool ProxyLookupClientRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::network::mojom::ProxyLookupClient::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kProxyLookupClientValidationInfo);
}



}  // namespace mojom
}  // namespace network


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace network {
namespace mojom {


void ProxyLookupClientInterceptorForTesting::OnProxyLookupComplete(int32_t net_error, const absl::optional<::net::ProxyInfo>& proxy_info) {
  GetForwardingInterface()->OnProxyLookupComplete(std::move(net_error), std::move(proxy_info));
}
ProxyLookupClientAsyncWaiter::ProxyLookupClientAsyncWaiter(
    ProxyLookupClient* proxy) : proxy_(proxy) {}

ProxyLookupClientAsyncWaiter::~ProxyLookupClientAsyncWaiter() = default;






}  // namespace mojom
}  // namespace network


#if defined(__clang__)
#pragma clang diagnostic pop
#endif