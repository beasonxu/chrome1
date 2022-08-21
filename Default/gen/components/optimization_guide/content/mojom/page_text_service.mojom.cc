// components/optimization_guide/content/mojom/page_text_service.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "components/optimization_guide/content/mojom/page_text_service.mojom.h"

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

#include "components/optimization_guide/content/mojom/page_text_service.mojom-params-data.h"
#include "components/optimization_guide/content/mojom/page_text_service.mojom-shared-message-ids.h"

#include "components/optimization_guide/content/mojom/page_text_service.mojom-import-headers.h"
#include "components/optimization_guide/content/mojom/page_text_service.mojom-test-utils.h"


#ifndef COMPONENTS_OPTIMIZATION_GUIDE_CONTENT_MOJOM_PAGE_TEXT_SERVICE_MOJOM_JUMBO_H_
#define COMPONENTS_OPTIMIZATION_GUIDE_CONTENT_MOJOM_PAGE_TEXT_SERVICE_MOJOM_JUMBO_H_
#endif



namespace optimization_guide {
namespace mojom {
PageTextDumpRequest::PageTextDumpRequest()
    : max_size(),
      event() {}

PageTextDumpRequest::PageTextDumpRequest(
    uint32_t max_size_in,
    TextDumpEvent event_in)
    : max_size(std::move(max_size_in)),
      event(std::move(event_in)) {}

PageTextDumpRequest::~PageTextDumpRequest() = default;
size_t PageTextDumpRequest::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->max_size);
  seed = mojo::internal::Hash(seed, this->event);
  return seed;
}

void PageTextDumpRequest::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "max_size"), this->max_size,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "event"), this->event,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type TextDumpEvent>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool PageTextDumpRequest::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PageTextConsumer::Name_[] = "optimization_guide.mojom.PageTextConsumer";

PageTextConsumer::IPCStableHashFunction PageTextConsumer::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kPageTextConsumer_OnTextDumpChunk_Name: {
      return &PageTextConsumer::OnTextDumpChunk_Sym::IPCStableHash;
    }
    case internal::kPageTextConsumer_OnChunksEnd_Name: {
      return &PageTextConsumer::OnChunksEnd_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* PageTextConsumer::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kPageTextConsumer_OnTextDumpChunk_Name:
            return "Receive optimization_guide::mojom::PageTextConsumer::OnTextDumpChunk";
      case internal::kPageTextConsumer_OnChunksEnd_Name:
            return "Receive optimization_guide::mojom::PageTextConsumer::OnChunksEnd";
    }
  } else {
    switch (message.name()) {
      case internal::kPageTextConsumer_OnTextDumpChunk_Name:
            return "Receive reply optimization_guide::mojom::PageTextConsumer::OnTextDumpChunk";
      case internal::kPageTextConsumer_OnChunksEnd_Name:
            return "Receive reply optimization_guide::mojom::PageTextConsumer::OnChunksEnd";
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
uint32_t PageTextConsumer::OnTextDumpChunk_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)optimization_guide::mojom::PageTextConsumer::OnTextDumpChunk");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t PageTextConsumer::OnChunksEnd_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)optimization_guide::mojom::PageTextConsumer::OnChunksEnd");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

PageTextConsumerProxy::PageTextConsumerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PageTextConsumerProxy::OnTextDumpChunk(
    const ::std::u16string& in_chunk) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send optimization_guide::mojom::PageTextConsumer::OnTextDumpChunk", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("chunk"), in_chunk,
                        "<value of type const ::std::u16string&>");
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
      internal::kPageTextConsumer_OnTextDumpChunk_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::optimization_guide::mojom::internal::PageTextConsumer_OnTextDumpChunk_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->chunk)::BaseType> chunk_fragment(
          params.message());
  mojo::internal::Serialize<::mojo_base::mojom::String16DataView>(
      in_chunk, chunk_fragment);
  params->chunk.Set(
      chunk_fragment.is_null() ? nullptr : chunk_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->chunk.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null chunk in PageTextConsumer.OnTextDumpChunk request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PageTextConsumer::Name_);
  message.set_method_name("OnTextDumpChunk");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void PageTextConsumerProxy::OnChunksEnd(
    ) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send optimization_guide::mojom::PageTextConsumer::OnChunksEnd");
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kPageTextConsumer_OnChunksEnd_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::optimization_guide::mojom::internal::PageTextConsumer_OnChunksEnd_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PageTextConsumer::Name_);
  message.set_method_name("OnChunksEnd");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool PageTextConsumerStubDispatch::Accept(
    PageTextConsumer* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPageTextConsumer_OnTextDumpChunk_Name: {

      DCHECK(message->is_serialized());
      internal::PageTextConsumer_OnTextDumpChunk_Params_Data* params =
          reinterpret_cast<internal::PageTextConsumer_OnTextDumpChunk_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::std::u16string p_chunk{};
      PageTextConsumer_OnTextDumpChunk_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadChunk(&p_chunk))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PageTextConsumer::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnTextDumpChunk(
std::move(p_chunk));
      return true;
    }
    case internal::kPageTextConsumer_OnChunksEnd_Name: {

      DCHECK(message->is_serialized());
      internal::PageTextConsumer_OnChunksEnd_Params_Data* params =
          reinterpret_cast<internal::PageTextConsumer_OnChunksEnd_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      PageTextConsumer_OnChunksEnd_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PageTextConsumer::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->OnChunksEnd();
      return true;
    }
  }
  return false;
}

// static
bool PageTextConsumerStubDispatch::AcceptWithResponder(
    PageTextConsumer* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kPageTextConsumer_OnTextDumpChunk_Name: {
      break;
    }
    case internal::kPageTextConsumer_OnChunksEnd_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kPageTextConsumerValidationInfo[] = {
    {&internal::PageTextConsumer_OnTextDumpChunk_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::PageTextConsumer_OnChunksEnd_Params_Data::Validate,
     nullptr /* no response */},
};

bool PageTextConsumerRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::optimization_guide::mojom::PageTextConsumer::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kPageTextConsumerValidationInfo);
}

const char PageTextService::Name_[] = "optimization_guide.mojom.PageTextService";

PageTextService::IPCStableHashFunction PageTextService::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kPageTextService_RequestPageTextDump_Name: {
      return &PageTextService::RequestPageTextDump_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* PageTextService::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kPageTextService_RequestPageTextDump_Name:
            return "Receive optimization_guide::mojom::PageTextService::RequestPageTextDump";
    }
  } else {
    switch (message.name()) {
      case internal::kPageTextService_RequestPageTextDump_Name:
            return "Receive reply optimization_guide::mojom::PageTextService::RequestPageTextDump";
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
uint32_t PageTextService::RequestPageTextDump_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)optimization_guide::mojom::PageTextService::RequestPageTextDump");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

PageTextServiceProxy::PageTextServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PageTextServiceProxy::RequestPageTextDump(
    PageTextDumpRequestPtr in_request, ::mojo::PendingRemote<PageTextConsumer> in_consumer) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send optimization_guide::mojom::PageTextService::RequestPageTextDump", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("request"), in_request,
                        "<value of type PageTextDumpRequestPtr>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("consumer"), in_consumer,
                        "<value of type ::mojo::PendingRemote<PageTextConsumer>>");
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
      internal::kPageTextService_RequestPageTextDump_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::optimization_guide::mojom::internal::PageTextService_RequestPageTextDump_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->request)::BaseType> request_fragment(
          params.message());
  mojo::internal::Serialize<::optimization_guide::mojom::PageTextDumpRequestDataView>(
      in_request, request_fragment);
  params->request.Set(
      request_fragment.is_null() ? nullptr : request_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->request.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null request in PageTextService.RequestPageTextDump request");
  mojo::internal::Serialize<mojo::InterfacePtrDataView<::optimization_guide::mojom::PageTextConsumerInterfaceBase>>(
      in_consumer, &params->consumer, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->consumer),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid consumer in PageTextService.RequestPageTextDump request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PageTextService::Name_);
  message.set_method_name("RequestPageTextDump");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool PageTextServiceStubDispatch::Accept(
    PageTextService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPageTextService_RequestPageTextDump_Name: {

      DCHECK(message->is_serialized());
      internal::PageTextService_RequestPageTextDump_Params_Data* params =
          reinterpret_cast<internal::PageTextService_RequestPageTextDump_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      PageTextDumpRequestPtr p_request{};
      ::mojo::PendingRemote<PageTextConsumer> p_consumer{};
      PageTextService_RequestPageTextDump_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadRequest(&p_request))
        success = false;
      if (success) {
        p_consumer =
            input_data_view.TakeConsumer<decltype(p_consumer)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PageTextService::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->RequestPageTextDump(
std::move(p_request), 
std::move(p_consumer));
      return true;
    }
  }
  return false;
}

// static
bool PageTextServiceStubDispatch::AcceptWithResponder(
    PageTextService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kPageTextService_RequestPageTextDump_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kPageTextServiceValidationInfo[] = {
    {&internal::PageTextService_RequestPageTextDump_Params_Data::Validate,
     nullptr /* no response */},
};

bool PageTextServiceRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::optimization_guide::mojom::PageTextService::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kPageTextServiceValidationInfo);
}



}  // namespace mojom
}  // namespace optimization_guide


namespace mojo {


// static
bool StructTraits<::optimization_guide::mojom::PageTextDumpRequest::DataView, ::optimization_guide::mojom::PageTextDumpRequestPtr>::Read(
    ::optimization_guide::mojom::PageTextDumpRequest::DataView input,
    ::optimization_guide::mojom::PageTextDumpRequestPtr* output) {
  bool success = true;
  ::optimization_guide::mojom::PageTextDumpRequestPtr result(::optimization_guide::mojom::PageTextDumpRequest::New());
  
      if (success)
        result->max_size = input.max_size();
      if (success && !input.ReadEvent(&result->event))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace optimization_guide {
namespace mojom {


void PageTextConsumerInterceptorForTesting::OnTextDumpChunk(const ::std::u16string& chunk) {
  GetForwardingInterface()->OnTextDumpChunk(std::move(chunk));
}
void PageTextConsumerInterceptorForTesting::OnChunksEnd() {
  GetForwardingInterface()->OnChunksEnd();
}
PageTextConsumerAsyncWaiter::PageTextConsumerAsyncWaiter(
    PageTextConsumer* proxy) : proxy_(proxy) {}

PageTextConsumerAsyncWaiter::~PageTextConsumerAsyncWaiter() = default;




void PageTextServiceInterceptorForTesting::RequestPageTextDump(PageTextDumpRequestPtr request, ::mojo::PendingRemote<PageTextConsumer> consumer) {
  GetForwardingInterface()->RequestPageTextDump(std::move(request), std::move(consumer));
}
PageTextServiceAsyncWaiter::PageTextServiceAsyncWaiter(
    PageTextService* proxy) : proxy_(proxy) {}

PageTextServiceAsyncWaiter::~PageTextServiceAsyncWaiter() = default;






}  // namespace mojom
}  // namespace optimization_guide


#if defined(__clang__)
#pragma clang diagnostic pop
#endif