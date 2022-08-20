// third_party/blink/public/mojom/frame/pending_beacon.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/frame/pending_beacon.mojom.h"

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

#include "third_party/blink/public/mojom/frame/pending_beacon.mojom-params-data.h"
#include "third_party/blink/public/mojom/frame/pending_beacon.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/frame/pending_beacon.mojom-import-headers.h"
#include "third_party/blink/public/mojom/frame/pending_beacon.mojom-test-utils.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_PENDING_BEACON_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_PENDING_BEACON_MOJOM_JUMBO_H_
#include "services/network/public/mojom/cookie_access_observer.mojom.h"
#include "services/network/public/mojom/devtools_observer.mojom.h"
#endif



namespace blink {
namespace mojom {
const char PendingBeaconHost::Name_[] = "blink.mojom.PendingBeaconHost";

PendingBeaconHost::IPCStableHashFunction PendingBeaconHost::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kPendingBeaconHost_CreateBeacon_Name: {
      return &PendingBeaconHost::CreateBeacon_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* PendingBeaconHost::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kPendingBeaconHost_CreateBeacon_Name:
            return "Receive blink::mojom::PendingBeaconHost::CreateBeacon";
    }
  } else {
    switch (message.name()) {
      case internal::kPendingBeaconHost_CreateBeacon_Name:
            return "Receive reply blink::mojom::PendingBeaconHost::CreateBeacon";
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
uint32_t PendingBeaconHost::CreateBeacon_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::PendingBeaconHost::CreateBeacon");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

PendingBeaconHostProxy::PendingBeaconHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PendingBeaconHostProxy::CreateBeacon(
    ::mojo::PendingReceiver<PendingBeacon> in_receiver, const ::GURL& in_url, BeaconMethod in_method, ::base::TimeDelta in_timeout) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::PendingBeaconHost::CreateBeacon", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::PendingReceiver<PendingBeacon>>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("url"), in_url,
                        "<value of type const ::GURL&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("method"), in_method,
                        "<value of type BeaconMethod>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("timeout"), in_timeout,
                        "<value of type ::base::TimeDelta>");
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
      internal::kPendingBeaconHost_CreateBeacon_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::PendingBeaconHost_CreateBeacon_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::blink::mojom::PendingBeaconInterfaceBase>>(
      in_receiver, &params->receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in PendingBeaconHost.CreateBeacon request");
  mojo::internal::MessageFragment<
      typename decltype(params->url)::BaseType> url_fragment(
          params.message());
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, url_fragment);
  params->url.Set(
      url_fragment.is_null() ? nullptr : url_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PendingBeaconHost.CreateBeacon request");
  mojo::internal::Serialize<::blink::mojom::BeaconMethod>(
      in_method, &params->method);
  mojo::internal::MessageFragment<
      typename decltype(params->timeout)::BaseType> timeout_fragment(
          params.message());
  mojo::internal::Serialize<::mojo_base::mojom::TimeDeltaDataView>(
      in_timeout, timeout_fragment);
  params->timeout.Set(
      timeout_fragment.is_null() ? nullptr : timeout_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->timeout.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null timeout in PendingBeaconHost.CreateBeacon request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PendingBeaconHost::Name_);
  message.set_method_name("CreateBeacon");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool PendingBeaconHostStubDispatch::Accept(
    PendingBeaconHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPendingBeaconHost_CreateBeacon_Name: {

      DCHECK(message->is_serialized());
      internal::PendingBeaconHost_CreateBeacon_Params_Data* params =
          reinterpret_cast<internal::PendingBeaconHost_CreateBeacon_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<PendingBeacon> p_receiver{};
      ::GURL p_url{};
      BeaconMethod p_method{};
      ::base::TimeDelta p_timeout{};
      PendingBeaconHost_CreateBeacon_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_receiver =
            input_data_view.TakeReceiver<decltype(p_receiver)>();
      }
      if (success && !input_data_view.ReadUrl(&p_url))
        success = false;
      if (success && !input_data_view.ReadMethod(&p_method))
        success = false;
      if (success && !input_data_view.ReadTimeout(&p_timeout))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PendingBeaconHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateBeacon(
std::move(p_receiver), 
std::move(p_url), 
std::move(p_method), 
std::move(p_timeout));
      return true;
    }
  }
  return false;
}

// static
bool PendingBeaconHostStubDispatch::AcceptWithResponder(
    PendingBeaconHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kPendingBeaconHost_CreateBeacon_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kPendingBeaconHostValidationInfo[] = {
    {&internal::PendingBeaconHost_CreateBeacon_Params_Data::Validate,
     nullptr /* no response */},
};

bool PendingBeaconHostRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::PendingBeaconHost::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kPendingBeaconHostValidationInfo);
}

const char PendingBeacon::Name_[] = "blink.mojom.PendingBeacon";

PendingBeacon::IPCStableHashFunction PendingBeacon::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kPendingBeacon_Deactivate_Name: {
      return &PendingBeacon::Deactivate_Sym::IPCStableHash;
    }
    case internal::kPendingBeacon_SetRequestData_Name: {
      return &PendingBeacon::SetRequestData_Sym::IPCStableHash;
    }
    case internal::kPendingBeacon_SetRequestURL_Name: {
      return &PendingBeacon::SetRequestURL_Sym::IPCStableHash;
    }
    case internal::kPendingBeacon_SendNow_Name: {
      return &PendingBeacon::SendNow_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* PendingBeacon::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kPendingBeacon_Deactivate_Name:
            return "Receive blink::mojom::PendingBeacon::Deactivate";
      case internal::kPendingBeacon_SetRequestData_Name:
            return "Receive blink::mojom::PendingBeacon::SetRequestData";
      case internal::kPendingBeacon_SetRequestURL_Name:
            return "Receive blink::mojom::PendingBeacon::SetRequestURL";
      case internal::kPendingBeacon_SendNow_Name:
            return "Receive blink::mojom::PendingBeacon::SendNow";
    }
  } else {
    switch (message.name()) {
      case internal::kPendingBeacon_Deactivate_Name:
            return "Receive reply blink::mojom::PendingBeacon::Deactivate";
      case internal::kPendingBeacon_SetRequestData_Name:
            return "Receive reply blink::mojom::PendingBeacon::SetRequestData";
      case internal::kPendingBeacon_SetRequestURL_Name:
            return "Receive reply blink::mojom::PendingBeacon::SetRequestURL";
      case internal::kPendingBeacon_SendNow_Name:
            return "Receive reply blink::mojom::PendingBeacon::SendNow";
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
uint32_t PendingBeacon::Deactivate_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::PendingBeacon::Deactivate");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t PendingBeacon::SetRequestData_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::PendingBeacon::SetRequestData");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t PendingBeacon::SetRequestURL_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::PendingBeacon::SetRequestURL");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t PendingBeacon::SendNow_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::PendingBeacon::SendNow");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

PendingBeaconProxy::PendingBeaconProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PendingBeaconProxy::Deactivate(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send blink::mojom::PendingBeacon::Deactivate");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kPendingBeacon_Deactivate_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::PendingBeacon_Deactivate_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PendingBeacon::Name_);
  message.set_method_name("Deactivate");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void PendingBeaconProxy::SetRequestData(
    ::scoped_refptr<::network::ResourceRequestBody> in_request_body, const std::string& in_content_type) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::PendingBeacon::SetRequestData", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("request_body"), in_request_body,
                        "<value of type ::scoped_refptr<::network::ResourceRequestBody>>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("content_type"), in_content_type,
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
      internal::kPendingBeacon_SetRequestData_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::PendingBeacon_SetRequestData_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->request_body)::BaseType> request_body_fragment(
          params.message());
  mojo::internal::Serialize<::network::mojom::URLRequestBodyDataView>(
      in_request_body, request_body_fragment);
  params->request_body.Set(
      request_body_fragment.is_null() ? nullptr : request_body_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request_body.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request_body in PendingBeacon.SetRequestData request");
  mojo::internal::MessageFragment<
      typename decltype(params->content_type)::BaseType> content_type_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_content_type, content_type_fragment);
  params->content_type.Set(
      content_type_fragment.is_null() ? nullptr : content_type_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->content_type.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null content_type in PendingBeacon.SetRequestData request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PendingBeacon::Name_);
  message.set_method_name("SetRequestData");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void PendingBeaconProxy::SetRequestURL(
    const ::GURL& in_url) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::PendingBeacon::SetRequestURL", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("url"), in_url,
                        "<value of type const ::GURL&>");
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
      internal::kPendingBeacon_SetRequestURL_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::PendingBeacon_SetRequestURL_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->url)::BaseType> url_fragment(
          params.message());
  mojo::internal::Serialize<::url::mojom::UrlDataView>(
      in_url, url_fragment);
  params->url.Set(
      url_fragment.is_null() ? nullptr : url_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->url.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null url in PendingBeacon.SetRequestURL request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PendingBeacon::Name_);
  message.set_method_name("SetRequestURL");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void PendingBeaconProxy::SendNow(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send blink::mojom::PendingBeacon::SendNow");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kPendingBeacon_SendNow_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::PendingBeacon_SendNow_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PendingBeacon::Name_);
  message.set_method_name("SendNow");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool PendingBeaconStubDispatch::Accept(
    PendingBeacon* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPendingBeacon_Deactivate_Name: {

      DCHECK(message->is_serialized());
      internal::PendingBeacon_Deactivate_Params_Data* params =
          reinterpret_cast<internal::PendingBeacon_Deactivate_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      PendingBeacon_Deactivate_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PendingBeacon::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Deactivate();
      return true;
    }
    case internal::kPendingBeacon_SetRequestData_Name: {

      DCHECK(message->is_serialized());
      internal::PendingBeacon_SetRequestData_Params_Data* params =
          reinterpret_cast<internal::PendingBeacon_SetRequestData_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::scoped_refptr<::network::ResourceRequestBody> p_request_body{};
      std::string p_content_type{};
      PendingBeacon_SetRequestData_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadRequestBody(&p_request_body))
        success = false;
      if (success && !input_data_view.ReadContentType(&p_content_type))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PendingBeacon::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetRequestData(
std::move(p_request_body), 
std::move(p_content_type));
      return true;
    }
    case internal::kPendingBeacon_SetRequestURL_Name: {

      DCHECK(message->is_serialized());
      internal::PendingBeacon_SetRequestURL_Params_Data* params =
          reinterpret_cast<internal::PendingBeacon_SetRequestURL_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::GURL p_url{};
      PendingBeacon_SetRequestURL_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadUrl(&p_url))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PendingBeacon::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetRequestURL(
std::move(p_url));
      return true;
    }
    case internal::kPendingBeacon_SendNow_Name: {

      DCHECK(message->is_serialized());
      internal::PendingBeacon_SendNow_Params_Data* params =
          reinterpret_cast<internal::PendingBeacon_SendNow_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      PendingBeacon_SendNow_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PendingBeacon::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SendNow();
      return true;
    }
  }
  return false;
}

// static
bool PendingBeaconStubDispatch::AcceptWithResponder(
    PendingBeacon* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kPendingBeacon_Deactivate_Name: {
      break;
    }
    case internal::kPendingBeacon_SetRequestData_Name: {
      break;
    }
    case internal::kPendingBeacon_SetRequestURL_Name: {
      break;
    }
    case internal::kPendingBeacon_SendNow_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kPendingBeaconValidationInfo[] = {
    {&internal::PendingBeacon_Deactivate_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::PendingBeacon_SetRequestData_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::PendingBeacon_SetRequestURL_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::PendingBeacon_SendNow_Params_Data::Validate,
     nullptr /* no response */},
};

bool PendingBeaconRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::PendingBeacon::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kPendingBeaconValidationInfo);
}



}  // namespace mojom
}  // namespace blink


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {


void PendingBeaconHostInterceptorForTesting::CreateBeacon(::mojo::PendingReceiver<PendingBeacon> receiver, const ::GURL& url, BeaconMethod method, ::base::TimeDelta timeout) {
  GetForwardingInterface()->CreateBeacon(std::move(receiver), std::move(url), std::move(method), std::move(timeout));
}
PendingBeaconHostAsyncWaiter::PendingBeaconHostAsyncWaiter(
    PendingBeaconHost* proxy) : proxy_(proxy) {}

PendingBeaconHostAsyncWaiter::~PendingBeaconHostAsyncWaiter() = default;




void PendingBeaconInterceptorForTesting::Deactivate() {
  GetForwardingInterface()->Deactivate();
}
void PendingBeaconInterceptorForTesting::SetRequestData(::scoped_refptr<::network::ResourceRequestBody> request_body, const std::string& content_type) {
  GetForwardingInterface()->SetRequestData(std::move(request_body), std::move(content_type));
}
void PendingBeaconInterceptorForTesting::SetRequestURL(const ::GURL& url) {
  GetForwardingInterface()->SetRequestURL(std::move(url));
}
void PendingBeaconInterceptorForTesting::SendNow() {
  GetForwardingInterface()->SendNow();
}
PendingBeaconAsyncWaiter::PendingBeaconAsyncWaiter(
    PendingBeacon* proxy) : proxy_(proxy) {}

PendingBeaconAsyncWaiter::~PendingBeaconAsyncWaiter() = default;






}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif