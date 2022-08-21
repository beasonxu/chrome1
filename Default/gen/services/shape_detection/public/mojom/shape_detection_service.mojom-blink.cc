// services/shape_detection/public/mojom/shape_detection_service.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/shape_detection/public/mojom/shape_detection_service.mojom-blink.h"

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

#include "services/shape_detection/public/mojom/shape_detection_service.mojom-params-data.h"
#include "services/shape_detection/public/mojom/shape_detection_service.mojom-shared-message-ids.h"

#include "services/shape_detection/public/mojom/shape_detection_service.mojom-blink-import-headers.h"
#include "services/shape_detection/public/mojom/shape_detection_service.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_SHAPE_DETECTION_SERVICE_MOJOM_BLINK_JUMBO_H_
#define SERVICES_SHAPE_DETECTION_PUBLIC_MOJOM_SHAPE_DETECTION_SERVICE_MOJOM_BLINK_JUMBO_H_
#endif



namespace shape_detection {
namespace mojom {
namespace blink {
const char ShapeDetectionService::Name_[] = "shape_detection.mojom.ShapeDetectionService";

ShapeDetectionService::IPCStableHashFunction ShapeDetectionService::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kShapeDetectionService_BindBarcodeDetectionProvider_Name: {
      return &ShapeDetectionService::BindBarcodeDetectionProvider_Sym::IPCStableHash;
    }
    case internal::kShapeDetectionService_BindFaceDetectionProvider_Name: {
      return &ShapeDetectionService::BindFaceDetectionProvider_Sym::IPCStableHash;
    }
    case internal::kShapeDetectionService_BindTextDetection_Name: {
      return &ShapeDetectionService::BindTextDetection_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* ShapeDetectionService::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kShapeDetectionService_BindBarcodeDetectionProvider_Name:
            return "Receive shape_detection::mojom::ShapeDetectionService::BindBarcodeDetectionProvider";
      case internal::kShapeDetectionService_BindFaceDetectionProvider_Name:
            return "Receive shape_detection::mojom::ShapeDetectionService::BindFaceDetectionProvider";
      case internal::kShapeDetectionService_BindTextDetection_Name:
            return "Receive shape_detection::mojom::ShapeDetectionService::BindTextDetection";
    }
  } else {
    switch (message.name()) {
      case internal::kShapeDetectionService_BindBarcodeDetectionProvider_Name:
            return "Receive reply shape_detection::mojom::ShapeDetectionService::BindBarcodeDetectionProvider";
      case internal::kShapeDetectionService_BindFaceDetectionProvider_Name:
            return "Receive reply shape_detection::mojom::ShapeDetectionService::BindFaceDetectionProvider";
      case internal::kShapeDetectionService_BindTextDetection_Name:
            return "Receive reply shape_detection::mojom::ShapeDetectionService::BindTextDetection";
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
uint32_t ShapeDetectionService::BindBarcodeDetectionProvider_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)shape_detection::mojom::ShapeDetectionService::BindBarcodeDetectionProvider");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t ShapeDetectionService::BindFaceDetectionProvider_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)shape_detection::mojom::ShapeDetectionService::BindFaceDetectionProvider");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t ShapeDetectionService::BindTextDetection_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)shape_detection::mojom::ShapeDetectionService::BindTextDetection");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

ShapeDetectionServiceProxy::ShapeDetectionServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ShapeDetectionServiceProxy::BindBarcodeDetectionProvider(
    ::mojo::PendingReceiver<::shape_detection::mojom::blink::BarcodeDetectionProvider> in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send shape_detection::mojom::ShapeDetectionService::BindBarcodeDetectionProvider", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::PendingReceiver<::shape_detection::mojom::blink::BarcodeDetectionProvider>>");
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
      internal::kShapeDetectionService_BindBarcodeDetectionProvider_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::shape_detection::mojom::internal::ShapeDetectionService_BindBarcodeDetectionProvider_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::shape_detection::mojom::BarcodeDetectionProviderInterfaceBase>>(
      in_receiver, &params->receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in ShapeDetectionService.BindBarcodeDetectionProvider request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ShapeDetectionService::Name_);
  message.set_method_name("BindBarcodeDetectionProvider");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void ShapeDetectionServiceProxy::BindFaceDetectionProvider(
    ::mojo::PendingReceiver<::shape_detection::mojom::blink::FaceDetectionProvider> in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send shape_detection::mojom::ShapeDetectionService::BindFaceDetectionProvider", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::PendingReceiver<::shape_detection::mojom::blink::FaceDetectionProvider>>");
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
      internal::kShapeDetectionService_BindFaceDetectionProvider_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::shape_detection::mojom::internal::ShapeDetectionService_BindFaceDetectionProvider_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::shape_detection::mojom::FaceDetectionProviderInterfaceBase>>(
      in_receiver, &params->receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in ShapeDetectionService.BindFaceDetectionProvider request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ShapeDetectionService::Name_);
  message.set_method_name("BindFaceDetectionProvider");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void ShapeDetectionServiceProxy::BindTextDetection(
    ::mojo::PendingReceiver<::shape_detection::mojom::blink::TextDetection> in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send shape_detection::mojom::ShapeDetectionService::BindTextDetection", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::PendingReceiver<::shape_detection::mojom::blink::TextDetection>>");
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
      internal::kShapeDetectionService_BindTextDetection_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::shape_detection::mojom::internal::ShapeDetectionService_BindTextDetection_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::shape_detection::mojom::TextDetectionInterfaceBase>>(
      in_receiver, &params->receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in ShapeDetectionService.BindTextDetection request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ShapeDetectionService::Name_);
  message.set_method_name("BindTextDetection");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool ShapeDetectionServiceStubDispatch::Accept(
    ShapeDetectionService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kShapeDetectionService_BindBarcodeDetectionProvider_Name: {

      DCHECK(message->is_serialized());
      internal::ShapeDetectionService_BindBarcodeDetectionProvider_Params_Data* params =
          reinterpret_cast<internal::ShapeDetectionService_BindBarcodeDetectionProvider_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<::shape_detection::mojom::blink::BarcodeDetectionProvider> p_receiver{};
      ShapeDetectionService_BindBarcodeDetectionProvider_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_receiver =
            input_data_view.TakeReceiver<decltype(p_receiver)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ShapeDetectionService::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->BindBarcodeDetectionProvider(
std::move(p_receiver));
      return true;
    }
    case internal::kShapeDetectionService_BindFaceDetectionProvider_Name: {

      DCHECK(message->is_serialized());
      internal::ShapeDetectionService_BindFaceDetectionProvider_Params_Data* params =
          reinterpret_cast<internal::ShapeDetectionService_BindFaceDetectionProvider_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<::shape_detection::mojom::blink::FaceDetectionProvider> p_receiver{};
      ShapeDetectionService_BindFaceDetectionProvider_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_receiver =
            input_data_view.TakeReceiver<decltype(p_receiver)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ShapeDetectionService::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->BindFaceDetectionProvider(
std::move(p_receiver));
      return true;
    }
    case internal::kShapeDetectionService_BindTextDetection_Name: {

      DCHECK(message->is_serialized());
      internal::ShapeDetectionService_BindTextDetection_Params_Data* params =
          reinterpret_cast<internal::ShapeDetectionService_BindTextDetection_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<::shape_detection::mojom::blink::TextDetection> p_receiver{};
      ShapeDetectionService_BindTextDetection_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_receiver =
            input_data_view.TakeReceiver<decltype(p_receiver)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ShapeDetectionService::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->BindTextDetection(
std::move(p_receiver));
      return true;
    }
  }
  return false;
}

// static
bool ShapeDetectionServiceStubDispatch::AcceptWithResponder(
    ShapeDetectionService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kShapeDetectionService_BindBarcodeDetectionProvider_Name: {
      break;
    }
    case internal::kShapeDetectionService_BindFaceDetectionProvider_Name: {
      break;
    }
    case internal::kShapeDetectionService_BindTextDetection_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kShapeDetectionServiceValidationInfo[] = {
    {&internal::ShapeDetectionService_BindBarcodeDetectionProvider_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::ShapeDetectionService_BindFaceDetectionProvider_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::ShapeDetectionService_BindTextDetection_Params_Data::Validate,
     nullptr /* no response */},
};

bool ShapeDetectionServiceRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::shape_detection::mojom::blink::ShapeDetectionService::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kShapeDetectionServiceValidationInfo);
}



}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace shape_detection {
namespace mojom {
namespace blink {


void ShapeDetectionServiceInterceptorForTesting::BindBarcodeDetectionProvider(::mojo::PendingReceiver<::shape_detection::mojom::blink::BarcodeDetectionProvider> receiver) {
  GetForwardingInterface()->BindBarcodeDetectionProvider(std::move(receiver));
}
void ShapeDetectionServiceInterceptorForTesting::BindFaceDetectionProvider(::mojo::PendingReceiver<::shape_detection::mojom::blink::FaceDetectionProvider> receiver) {
  GetForwardingInterface()->BindFaceDetectionProvider(std::move(receiver));
}
void ShapeDetectionServiceInterceptorForTesting::BindTextDetection(::mojo::PendingReceiver<::shape_detection::mojom::blink::TextDetection> receiver) {
  GetForwardingInterface()->BindTextDetection(std::move(receiver));
}
ShapeDetectionServiceAsyncWaiter::ShapeDetectionServiceAsyncWaiter(
    ShapeDetectionService* proxy) : proxy_(proxy) {}

ShapeDetectionServiceAsyncWaiter::~ShapeDetectionServiceAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace shape_detection


#if defined(__clang__)
#pragma clang diagnostic pop
#endif