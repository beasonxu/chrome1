// services/shape_detection/public/mojom/facedetection_provider.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/shape_detection/public/mojom/facedetection_provider.mojom.h"

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

#include "services/shape_detection/public/mojom/facedetection_provider.mojom-params-data.h"
#include "services/shape_detection/public/mojom/facedetection_provider.mojom-shared-message-ids.h"

#include "services/shape_detection/public/mojom/facedetection_provider.mojom-import-headers.h"
#include "services/shape_detection/public/mojom/facedetection_provider.mojom-test-utils.h"


#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_JUMBO_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_FACEDETECTION_PROVIDER_MOJOM_JUMBO_H_
#endif



namespace shape_detection {
namespace mojom {
const char FaceDetectionProvider::Name_[] = "shape_detection.mojom.FaceDetectionProvider";

FaceDetectionProvider::IPCStableHashFunction FaceDetectionProvider::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kFaceDetectionProvider_CreateFaceDetection_Name: {
      return &FaceDetectionProvider::CreateFaceDetection_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* FaceDetectionProvider::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kFaceDetectionProvider_CreateFaceDetection_Name:
            return "Receive shape_detection::mojom::FaceDetectionProvider::CreateFaceDetection";
    }
  } else {
    switch (message.name()) {
      case internal::kFaceDetectionProvider_CreateFaceDetection_Name:
            return "Receive reply shape_detection::mojom::FaceDetectionProvider::CreateFaceDetection";
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
uint32_t FaceDetectionProvider::CreateFaceDetection_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)shape_detection::mojom::FaceDetectionProvider::CreateFaceDetection");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

FaceDetectionProviderProxy::FaceDetectionProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void FaceDetectionProviderProxy::CreateFaceDetection(
    ::mojo::PendingReceiver<::shape_detection::mojom::FaceDetection> in_receiver, ::shape_detection::mojom::FaceDetectorOptionsPtr in_options) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send shape_detection::mojom::FaceDetectionProvider::CreateFaceDetection", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::PendingReceiver<::shape_detection::mojom::FaceDetection>>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("options"), in_options,
                        "<value of type ::shape_detection::mojom::FaceDetectorOptionsPtr>");
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
      internal::kFaceDetectionProvider_CreateFaceDetection_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::shape_detection::mojom::internal::FaceDetectionProvider_CreateFaceDetection_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::shape_detection::mojom::FaceDetectionInterfaceBase>>(
      in_receiver, &params->receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in FaceDetectionProvider.CreateFaceDetection request");
  mojo::internal::MessageFragment<
      typename decltype(params->options)::BaseType> options_fragment(
          params.message());
  mojo::internal::Serialize<::shape_detection::mojom::FaceDetectorOptionsDataView>(
      in_options, options_fragment);
  params->options.Set(
      options_fragment.is_null() ? nullptr : options_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->options.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null options in FaceDetectionProvider.CreateFaceDetection request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(FaceDetectionProvider::Name_);
  message.set_method_name("CreateFaceDetection");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool FaceDetectionProviderStubDispatch::Accept(
    FaceDetectionProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kFaceDetectionProvider_CreateFaceDetection_Name: {

      DCHECK(message->is_serialized());
      internal::FaceDetectionProvider_CreateFaceDetection_Params_Data* params =
          reinterpret_cast<internal::FaceDetectionProvider_CreateFaceDetection_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<::shape_detection::mojom::FaceDetection> p_receiver{};
      ::shape_detection::mojom::FaceDetectorOptionsPtr p_options{};
      FaceDetectionProvider_CreateFaceDetection_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_receiver =
            input_data_view.TakeReceiver<decltype(p_receiver)>();
      }
      if (success && !input_data_view.ReadOptions(&p_options))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            FaceDetectionProvider::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->CreateFaceDetection(
std::move(p_receiver), 
std::move(p_options));
      return true;
    }
  }
  return false;
}

// static
bool FaceDetectionProviderStubDispatch::AcceptWithResponder(
    FaceDetectionProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kFaceDetectionProvider_CreateFaceDetection_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kFaceDetectionProviderValidationInfo[] = {
    {&internal::FaceDetectionProvider_CreateFaceDetection_Params_Data::Validate,
     nullptr /* no response */},
};

bool FaceDetectionProviderRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::shape_detection::mojom::FaceDetectionProvider::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kFaceDetectionProviderValidationInfo);
}



}  // namespace mojom
}  // namespace shape_detection


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace shape_detection {
namespace mojom {


void FaceDetectionProviderInterceptorForTesting::CreateFaceDetection(::mojo::PendingReceiver<::shape_detection::mojom::FaceDetection> receiver, ::shape_detection::mojom::FaceDetectorOptionsPtr options) {
  GetForwardingInterface()->CreateFaceDetection(std::move(receiver), std::move(options));
}
FaceDetectionProviderAsyncWaiter::FaceDetectionProviderAsyncWaiter(
    FaceDetectionProvider* proxy) : proxy_(proxy) {}

FaceDetectionProviderAsyncWaiter::~FaceDetectionProviderAsyncWaiter() = default;






}  // namespace mojom
}  // namespace shape_detection


#if defined(__clang__)
#pragma clang diagnostic pop
#endif