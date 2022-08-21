// media/mojo/mojom/media_service.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "media/mojo/mojom/media_service.mojom.h"

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

#include "media/mojo/mojom/media_service.mojom-params-data.h"
#include "media/mojo/mojom/media_service.mojom-shared-message-ids.h"

#include "media/mojo/mojom/media_service.mojom-import-headers.h"
#include "media/mojo/mojom/media_service.mojom-test-utils.h"


#ifndef MEDIA_MOJO_MOJOM_MEDIA_SERVICE_MOJOM_JUMBO_H_
#define MEDIA_MOJO_MOJOM_MEDIA_SERVICE_MOJOM_JUMBO_H_
#endif



namespace media {
namespace mojom {
const char MediaService::Name_[] = "media.mojom.MediaService";

MediaService::IPCStableHashFunction MediaService::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kMediaService_CreateInterfaceFactory_Name: {
      return &MediaService::CreateInterfaceFactory_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* MediaService::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kMediaService_CreateInterfaceFactory_Name:
            return "Receive media::mojom::MediaService::CreateInterfaceFactory";
    }
  } else {
    switch (message.name()) {
      case internal::kMediaService_CreateInterfaceFactory_Name:
            return "Receive reply media::mojom::MediaService::CreateInterfaceFactory";
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
uint32_t MediaService::CreateInterfaceFactory_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)media::mojom::MediaService::CreateInterfaceFactory");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

MediaServiceProxy::MediaServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void MediaServiceProxy::CreateInterfaceFactory(
    ::mojo::PendingReceiver<::media::mojom::InterfaceFactory> in_factory, ::mojo::PendingRemote<::media::mojom::FrameInterfaceFactory> in_frame_interfaces) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send media::mojom::MediaService::CreateInterfaceFactory", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("factory"), in_factory,
                        "<value of type ::mojo::PendingReceiver<::media::mojom::InterfaceFactory>>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("frame_interfaces"), in_frame_interfaces,
                        "<value of type ::mojo::PendingRemote<::media::mojom::FrameInterfaceFactory>>");
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
      internal::kMediaService_CreateInterfaceFactory_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::media::mojom::internal::MediaService_CreateInterfaceFactory_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::media::mojom::InterfaceFactoryInterfaceBase>>(
      in_factory, &params->factory, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->factory),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid factory in MediaService.CreateInterfaceFactory request");
  mojo::internal::Serialize<mojo::InterfacePtrDataView<::media::mojom::FrameInterfaceFactoryInterfaceBase>>(
      in_frame_interfaces, &params->frame_interfaces, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->frame_interfaces),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid frame_interfaces in MediaService.CreateInterfaceFactory request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(MediaService::Name_);
  message.set_method_name("CreateInterfaceFactory");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool MediaServiceStubDispatch::Accept(
    MediaService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kMediaService_CreateInterfaceFactory_Name: {

      DCHECK(message->is_serialized());
      internal::MediaService_CreateInterfaceFactory_Params_Data* params =
          reinterpret_cast<internal::MediaService_CreateInterfaceFactory_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<::media::mojom::InterfaceFactory> p_factory{};
      ::mojo::PendingRemote<::media::mojom::FrameInterfaceFactory> p_frame_interfaces{};
      MediaService_CreateInterfaceFactory_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_factory =
            input_data_view.TakeFactory<decltype(p_factory)>();
      }
      if (success) {
        p_frame_interfaces =
            input_data_view.TakeFrameInterfaces<decltype(p_frame_interfaces)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            MediaService::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateInterfaceFactory(
std::move(p_factory), 
std::move(p_frame_interfaces));
      return true;
    }
  }
  return false;
}

// static
bool MediaServiceStubDispatch::AcceptWithResponder(
    MediaService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kMediaService_CreateInterfaceFactory_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kMediaServiceValidationInfo[] = {
    {&internal::MediaService_CreateInterfaceFactory_Params_Data::Validate,
     nullptr /* no response */},
};

bool MediaServiceRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::media::mojom::MediaService::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kMediaServiceValidationInfo);
}



}  // namespace mojom
}  // namespace media


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace media {
namespace mojom {


void MediaServiceInterceptorForTesting::CreateInterfaceFactory(::mojo::PendingReceiver<::media::mojom::InterfaceFactory> factory, ::mojo::PendingRemote<::media::mojom::FrameInterfaceFactory> frame_interfaces) {
  GetForwardingInterface()->CreateInterfaceFactory(std::move(factory), std::move(frame_interfaces));
}
MediaServiceAsyncWaiter::MediaServiceAsyncWaiter(
    MediaService* proxy) : proxy_(proxy) {}

MediaServiceAsyncWaiter::~MediaServiceAsyncWaiter() = default;






}  // namespace mojom
}  // namespace media


#if defined(__clang__)
#pragma clang diagnostic pop
#endif