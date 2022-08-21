// media/mojo/mojom/frame_interface_factory.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "media/mojo/mojom/frame_interface_factory.mojom.h"

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

#include "media/mojo/mojom/frame_interface_factory.mojom-params-data.h"
#include "media/mojo/mojom/frame_interface_factory.mojom-shared-message-ids.h"

#include "media/mojo/mojom/frame_interface_factory.mojom-import-headers.h"
#include "media/mojo/mojom/frame_interface_factory.mojom-test-utils.h"


#ifndef MEDIA_MOJO_MOJOM_FRAME_INTERFACE_FACTORY_MOJOM_JUMBO_H_
#define MEDIA_MOJO_MOJOM_FRAME_INTERFACE_FACTORY_MOJOM_JUMBO_H_
#endif



namespace media {
namespace mojom {
const char FrameInterfaceFactory::Name_[] = "media.mojom.FrameInterfaceFactory";

FrameInterfaceFactory::IPCStableHashFunction FrameInterfaceFactory::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kFrameInterfaceFactory_CreateProvisionFetcher_Name: {
      return &FrameInterfaceFactory::CreateProvisionFetcher_Sym::IPCStableHash;
    }
    case internal::kFrameInterfaceFactory_CreateCdmStorage_Name: {
      return &FrameInterfaceFactory::CreateCdmStorage_Sym::IPCStableHash;
    }
    case internal::kFrameInterfaceFactory_GetCdmOrigin_Name: {
      return &FrameInterfaceFactory::GetCdmOrigin_Sym::IPCStableHash;
    }
    case internal::kFrameInterfaceFactory_BindEmbedderReceiver_Name: {
      return &FrameInterfaceFactory::BindEmbedderReceiver_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* FrameInterfaceFactory::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kFrameInterfaceFactory_CreateProvisionFetcher_Name:
            return "Receive media::mojom::FrameInterfaceFactory::CreateProvisionFetcher";
      case internal::kFrameInterfaceFactory_CreateCdmStorage_Name:
            return "Receive media::mojom::FrameInterfaceFactory::CreateCdmStorage";
      case internal::kFrameInterfaceFactory_GetCdmOrigin_Name:
            return "Receive media::mojom::FrameInterfaceFactory::GetCdmOrigin";
      case internal::kFrameInterfaceFactory_BindEmbedderReceiver_Name:
            return "Receive media::mojom::FrameInterfaceFactory::BindEmbedderReceiver";
    }
  } else {
    switch (message.name()) {
      case internal::kFrameInterfaceFactory_CreateProvisionFetcher_Name:
            return "Receive reply media::mojom::FrameInterfaceFactory::CreateProvisionFetcher";
      case internal::kFrameInterfaceFactory_CreateCdmStorage_Name:
            return "Receive reply media::mojom::FrameInterfaceFactory::CreateCdmStorage";
      case internal::kFrameInterfaceFactory_GetCdmOrigin_Name:
            return "Receive reply media::mojom::FrameInterfaceFactory::GetCdmOrigin";
      case internal::kFrameInterfaceFactory_BindEmbedderReceiver_Name:
            return "Receive reply media::mojom::FrameInterfaceFactory::BindEmbedderReceiver";
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
uint32_t FrameInterfaceFactory::CreateProvisionFetcher_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)media::mojom::FrameInterfaceFactory::CreateProvisionFetcher");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t FrameInterfaceFactory::CreateCdmStorage_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)media::mojom::FrameInterfaceFactory::CreateCdmStorage");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t FrameInterfaceFactory::GetCdmOrigin_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)media::mojom::FrameInterfaceFactory::GetCdmOrigin");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t FrameInterfaceFactory::BindEmbedderReceiver_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)media::mojom::FrameInterfaceFactory::BindEmbedderReceiver");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)
bool FrameInterfaceFactory::GetCdmOrigin(::url::Origin* out_cdm_origin) {
  NOTREACHED();
  return false;
}
class FrameInterfaceFactory_GetCdmOrigin_HandleSyncResponse
    : public mojo::MessageReceiver {
 public:
  FrameInterfaceFactory_GetCdmOrigin_HandleSyncResponse(
      bool* result, ::url::Origin* out_cdm_origin)
      : result_(result), out_cdm_origin_(out_cdm_origin) {
    DCHECK(!*result_);
  }

  FrameInterfaceFactory_GetCdmOrigin_HandleSyncResponse(const FrameInterfaceFactory_GetCdmOrigin_HandleSyncResponse&) = delete;
  FrameInterfaceFactory_GetCdmOrigin_HandleSyncResponse& operator=(const FrameInterfaceFactory_GetCdmOrigin_HandleSyncResponse&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  bool* result_;
  ::url::Origin* out_cdm_origin_;};

class FrameInterfaceFactory_GetCdmOrigin_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  FrameInterfaceFactory_GetCdmOrigin_ForwardToCallback(
      FrameInterfaceFactory::GetCdmOriginCallback callback
      ) : callback_(std::move(callback)) {
  }

  FrameInterfaceFactory_GetCdmOrigin_ForwardToCallback(const FrameInterfaceFactory_GetCdmOrigin_ForwardToCallback&) = delete;
  FrameInterfaceFactory_GetCdmOrigin_ForwardToCallback& operator=(const FrameInterfaceFactory_GetCdmOrigin_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  FrameInterfaceFactory::GetCdmOriginCallback callback_;
};

FrameInterfaceFactoryProxy::FrameInterfaceFactoryProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FrameInterfaceFactoryProxy::CreateProvisionFetcher(
    ::mojo::PendingReceiver<::media::mojom::ProvisionFetcher> in_provision_fetcher) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send media::mojom::FrameInterfaceFactory::CreateProvisionFetcher", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("provision_fetcher"), in_provision_fetcher,
                        "<value of type ::mojo::PendingReceiver<::media::mojom::ProvisionFetcher>>");
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
      internal::kFrameInterfaceFactory_CreateProvisionFetcher_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::FrameInterfaceFactory_CreateProvisionFetcher_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::media::mojom::ProvisionFetcherInterfaceBase>>(
      in_provision_fetcher, &params->provision_fetcher, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->provision_fetcher),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid provision_fetcher in FrameInterfaceFactory.CreateProvisionFetcher request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FrameInterfaceFactory::Name_);
  message.set_method_name("CreateProvisionFetcher");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void FrameInterfaceFactoryProxy::CreateCdmStorage(
    ::mojo::PendingReceiver<::media::mojom::CdmStorage> in_cdm_storage) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send media::mojom::FrameInterfaceFactory::CreateCdmStorage", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("cdm_storage"), in_cdm_storage,
                        "<value of type ::mojo::PendingReceiver<::media::mojom::CdmStorage>>");
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
      internal::kFrameInterfaceFactory_CreateCdmStorage_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::FrameInterfaceFactory_CreateCdmStorage_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::media::mojom::CdmStorageInterfaceBase>>(
      in_cdm_storage, &params->cdm_storage, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->cdm_storage),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid cdm_storage in FrameInterfaceFactory.CreateCdmStorage request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FrameInterfaceFactory::Name_);
  message.set_method_name("CreateCdmStorage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}
bool FrameInterfaceFactoryProxy::GetCdmOrigin(
    ::url::Origin* out_param_cdm_origin) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT_BEGIN0("mojom", "Call media::mojom::FrameInterfaceFactory::GetCdmOrigin (sync)");
#else
  TRACE_EVENT0("mojom", "FrameInterfaceFactory::GetCdmOrigin");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = true;
  const bool kAllowInterrupt =
      true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kFrameInterfaceFactory_GetCdmOrigin_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::FrameInterfaceFactory_GetCdmOrigin_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FrameInterfaceFactory::Name_);
  message.set_method_name("GetCdmOrigin");
#endif

  bool result = false;
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FrameInterfaceFactory_GetCdmOrigin_HandleSyncResponse(
          &result, out_param_cdm_origin));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT_END1(
    "mojom", "FrameInterfaceFactory::GetCdmOrigin", "sync_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("cdm_origin"), out_param_cdm_origin,
                        "<value of type const ::url::Origin&>");
   });
#endif
  return result;
}

void FrameInterfaceFactoryProxy::GetCdmOrigin(
    GetCdmOriginCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send media::mojom::FrameInterfaceFactory::GetCdmOrigin");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kFrameInterfaceFactory_GetCdmOrigin_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::FrameInterfaceFactory_GetCdmOrigin_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FrameInterfaceFactory::Name_);
  message.set_method_name("GetCdmOrigin");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new FrameInterfaceFactory_GetCdmOrigin_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}

void FrameInterfaceFactoryProxy::BindEmbedderReceiver(
    ::mojo::GenericPendingReceiver in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send media::mojom::FrameInterfaceFactory::BindEmbedderReceiver", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::GenericPendingReceiver>");
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
      internal::kFrameInterfaceFactory_BindEmbedderReceiver_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::FrameInterfaceFactory_BindEmbedderReceiver_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->receiver)::BaseType> receiver_fragment(
          params.message());
  mojo::internal::Serialize<::mojo_base::mojom::GenericPendingReceiverDataView>(
      in_receiver, receiver_fragment);
  params->receiver.Set(
      receiver_fragment.is_null() ? nullptr : receiver_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->receiver.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null receiver in FrameInterfaceFactory.BindEmbedderReceiver request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FrameInterfaceFactory::Name_);
  message.set_method_name("BindEmbedderReceiver");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}
class FrameInterfaceFactory_GetCdmOrigin_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static FrameInterfaceFactory::GetCdmOriginCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<FrameInterfaceFactory_GetCdmOrigin_ProxyToResponder> proxy(
        new FrameInterfaceFactory_GetCdmOrigin_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&FrameInterfaceFactory_GetCdmOrigin_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~FrameInterfaceFactory_GetCdmOrigin_ProxyToResponder() {
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
  FrameInterfaceFactory_GetCdmOrigin_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "FrameInterfaceFactory::GetCdmOriginCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      const ::url::Origin& in_cdm_origin);
};

bool FrameInterfaceFactory_GetCdmOrigin_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FrameInterfaceFactory_GetCdmOrigin_ResponseParams_Data* params =
      reinterpret_cast<
          internal::FrameInterfaceFactory_GetCdmOrigin_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  ::url::Origin p_cdm_origin{};
  FrameInterfaceFactory_GetCdmOrigin_ResponseParamsDataView input_data_view(params, message);
  
  if (success && !input_data_view.ReadCdmOrigin(&p_cdm_origin))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FrameInterfaceFactory::Name_, 2, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_cdm_origin));
  return true;
}

void FrameInterfaceFactory_GetCdmOrigin_ProxyToResponder::Run(
    const ::url::Origin& in_cdm_origin) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply media::mojom::FrameInterfaceFactory::GetCdmOrigin", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("cdm_origin"), in_cdm_origin,
                        "<value of type const ::url::Origin&>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kFrameInterfaceFactory_GetCdmOrigin_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::FrameInterfaceFactory_GetCdmOrigin_ResponseParams_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->cdm_origin)::BaseType> cdm_origin_fragment(
          params.message());
  mojo::internal::Serialize<::url::mojom::OriginDataView>(
      in_cdm_origin, cdm_origin_fragment);
  params->cdm_origin.Set(
      cdm_origin_fragment.is_null() ? nullptr : cdm_origin_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->cdm_origin.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null cdm_origin in ");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FrameInterfaceFactory::Name_);
  message.set_method_name("GetCdmOrigin");
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
bool FrameInterfaceFactory_GetCdmOrigin_HandleSyncResponse::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::FrameInterfaceFactory_GetCdmOrigin_ResponseParams_Data* params =
      reinterpret_cast<internal::FrameInterfaceFactory_GetCdmOrigin_ResponseParams_Data*>(
          message->mutable_payload());
  
  bool success = true;
  ::url::Origin p_cdm_origin{};
  FrameInterfaceFactory_GetCdmOrigin_ResponseParamsDataView input_data_view(params, message);
  
  if (success && !input_data_view.ReadCdmOrigin(&p_cdm_origin))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        FrameInterfaceFactory::Name_, 2, true);
    return false;
  }
  *out_cdm_origin_ = std::move(p_cdm_origin);
  *result_ = true;
  return true;
}

// static
bool FrameInterfaceFactoryStubDispatch::Accept(
    FrameInterfaceFactory* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFrameInterfaceFactory_CreateProvisionFetcher_Name: {

      DCHECK(message->is_serialized());
      internal::FrameInterfaceFactory_CreateProvisionFetcher_Params_Data* params =
          reinterpret_cast<internal::FrameInterfaceFactory_CreateProvisionFetcher_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<::media::mojom::ProvisionFetcher> p_provision_fetcher{};
      FrameInterfaceFactory_CreateProvisionFetcher_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_provision_fetcher =
            input_data_view.TakeProvisionFetcher<decltype(p_provision_fetcher)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FrameInterfaceFactory::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateProvisionFetcher(
std::move(p_provision_fetcher));
      return true;
    }
    case internal::kFrameInterfaceFactory_CreateCdmStorage_Name: {

      DCHECK(message->is_serialized());
      internal::FrameInterfaceFactory_CreateCdmStorage_Params_Data* params =
          reinterpret_cast<internal::FrameInterfaceFactory_CreateCdmStorage_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<::media::mojom::CdmStorage> p_cdm_storage{};
      FrameInterfaceFactory_CreateCdmStorage_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_cdm_storage =
            input_data_view.TakeCdmStorage<decltype(p_cdm_storage)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FrameInterfaceFactory::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateCdmStorage(
std::move(p_cdm_storage));
      return true;
    }
    case internal::kFrameInterfaceFactory_GetCdmOrigin_Name: {
      break;
    }
    case internal::kFrameInterfaceFactory_BindEmbedderReceiver_Name: {

      DCHECK(message->is_serialized());
      internal::FrameInterfaceFactory_BindEmbedderReceiver_Params_Data* params =
          reinterpret_cast<internal::FrameInterfaceFactory_BindEmbedderReceiver_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::GenericPendingReceiver p_receiver{};
      FrameInterfaceFactory_BindEmbedderReceiver_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadReceiver(&p_receiver))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FrameInterfaceFactory::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->BindEmbedderReceiver(
std::move(p_receiver));
      return true;
    }
  }
  return false;
}

// static
bool FrameInterfaceFactoryStubDispatch::AcceptWithResponder(
    FrameInterfaceFactory* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kFrameInterfaceFactory_CreateProvisionFetcher_Name: {
      break;
    }
    case internal::kFrameInterfaceFactory_CreateCdmStorage_Name: {
      break;
    }
    case internal::kFrameInterfaceFactory_GetCdmOrigin_Name: {

      internal::FrameInterfaceFactory_GetCdmOrigin_Params_Data* params =
          reinterpret_cast<
              internal::FrameInterfaceFactory_GetCdmOrigin_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      FrameInterfaceFactory_GetCdmOrigin_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FrameInterfaceFactory::Name_, 2, false);
        return false;
      }
      FrameInterfaceFactory::GetCdmOriginCallback callback =
          FrameInterfaceFactory_GetCdmOrigin_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetCdmOrigin(std::move(callback));
      return true;
    }
    case internal::kFrameInterfaceFactory_BindEmbedderReceiver_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kFrameInterfaceFactoryValidationInfo[] = {
    {&internal::FrameInterfaceFactory_CreateProvisionFetcher_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::FrameInterfaceFactory_CreateCdmStorage_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::FrameInterfaceFactory_GetCdmOrigin_Params_Data::Validate,
     &internal::FrameInterfaceFactory_GetCdmOrigin_ResponseParams_Data::Validate},
    {&internal::FrameInterfaceFactory_BindEmbedderReceiver_Params_Data::Validate,
     nullptr /* no response */},
};

bool FrameInterfaceFactoryRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::media::mojom::FrameInterfaceFactory::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kFrameInterfaceFactoryValidationInfo);
}

bool FrameInterfaceFactoryResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::media::mojom::FrameInterfaceFactory::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kFrameInterfaceFactoryValidationInfo);
}


}  // namespace mojom
}  // namespace media


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace media {
namespace mojom {


void FrameInterfaceFactoryInterceptorForTesting::CreateProvisionFetcher(::mojo::PendingReceiver<::media::mojom::ProvisionFetcher> provision_fetcher) {
  GetForwardingInterface()->CreateProvisionFetcher(std::move(provision_fetcher));
}
void FrameInterfaceFactoryInterceptorForTesting::CreateCdmStorage(::mojo::PendingReceiver<::media::mojom::CdmStorage> cdm_storage) {
  GetForwardingInterface()->CreateCdmStorage(std::move(cdm_storage));
}
void FrameInterfaceFactoryInterceptorForTesting::GetCdmOrigin(GetCdmOriginCallback callback) {
  GetForwardingInterface()->GetCdmOrigin(std::move(callback));
}
void FrameInterfaceFactoryInterceptorForTesting::BindEmbedderReceiver(::mojo::GenericPendingReceiver receiver) {
  GetForwardingInterface()->BindEmbedderReceiver(std::move(receiver));
}
FrameInterfaceFactoryAsyncWaiter::FrameInterfaceFactoryAsyncWaiter(
    FrameInterfaceFactory* proxy) : proxy_(proxy) {}

FrameInterfaceFactoryAsyncWaiter::~FrameInterfaceFactoryAsyncWaiter() = default;

void FrameInterfaceFactoryAsyncWaiter::GetCdmOrigin(
    ::url::Origin* out_cdm_origin) {
  base::RunLoop loop;
  proxy_->GetCdmOrigin(
      base::BindOnce(
          [](base::RunLoop* loop,
             ::url::Origin* out_cdm_origin
,
             const ::url::Origin& cdm_origin) {*out_cdm_origin = std::move(cdm_origin);
            loop->Quit();
          },
          &loop,
          out_cdm_origin));
  loop.Run();
}





}  // namespace mojom
}  // namespace media


#if defined(__clang__)
#pragma clang diagnostic pop
#endif