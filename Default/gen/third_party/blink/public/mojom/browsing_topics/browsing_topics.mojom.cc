// third_party/blink/public/mojom/browsing_topics/browsing_topics.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/browsing_topics/browsing_topics.mojom.h"

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

#include "third_party/blink/public/mojom/browsing_topics/browsing_topics.mojom-params-data.h"
#include "third_party/blink/public/mojom/browsing_topics/browsing_topics.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/browsing_topics/browsing_topics.mojom-import-headers.h"
#include "third_party/blink/public/mojom/browsing_topics/browsing_topics.mojom-test-utils.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROWSING_TOPICS_BROWSING_TOPICS_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BROWSING_TOPICS_BROWSING_TOPICS_MOJOM_JUMBO_H_
#endif



namespace blink {
namespace mojom {
EpochTopic::EpochTopic()
    : topic(),
      version(),
      config_version(),
      model_version(),
      taxonomy_version() {}

EpochTopic::EpochTopic(
    int32_t topic_in,
    const std::string& version_in,
    const std::string& config_version_in,
    const std::string& model_version_in,
    const std::string& taxonomy_version_in)
    : topic(std::move(topic_in)),
      version(std::move(version_in)),
      config_version(std::move(config_version_in)),
      model_version(std::move(model_version_in)),
      taxonomy_version(std::move(taxonomy_version_in)) {}

EpochTopic::~EpochTopic() = default;
size_t EpochTopic::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->topic);
  seed = mojo::internal::Hash(seed, this->version);
  seed = mojo::internal::Hash(seed, this->config_version);
  seed = mojo::internal::Hash(seed, this->model_version);
  seed = mojo::internal::Hash(seed, this->taxonomy_version);
  return seed;
}

void EpochTopic::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "topic"), this->topic,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "version"), this->version,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "config_version"), this->config_version,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "model_version"), this->model_version,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "taxonomy_version"), this->taxonomy_version,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool EpochTopic::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
GetBrowsingTopicsResult::GetBrowsingTopicsResult() : tag_(Tag::kErrorMessage) {
  data_.error_message = new std::string;
}

GetBrowsingTopicsResult::~GetBrowsingTopicsResult() {
  DestroyActive();
}


void GetBrowsingTopicsResult::set_error_message(
    const std::string& error_message) {
  if (tag_ == Tag::kErrorMessage) {
    *(data_.error_message) = std::move(error_message);
  } else {
    DestroyActive();
    tag_ = Tag::kErrorMessage;
    data_.error_message = new std::string(
        std::move(error_message));
  }
}
void GetBrowsingTopicsResult::set_browsing_topics(
    std::vector<EpochTopicPtr> browsing_topics) {
  if (tag_ == Tag::kBrowsingTopics) {
    *(data_.browsing_topics) = std::move(browsing_topics);
  } else {
    DestroyActive();
    tag_ = Tag::kBrowsingTopics;
    data_.browsing_topics = new std::vector<EpochTopicPtr>(
        std::move(browsing_topics));
  }
}

void GetBrowsingTopicsResult::DestroyActive() {
  switch (tag_) {

    case Tag::kErrorMessage:

      delete data_.error_message;
      break;
    case Tag::kBrowsingTopics:

      delete data_.browsing_topics;
      break;
  }
}

bool GetBrowsingTopicsResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
const char BrowsingTopicsDocumentService::Name_[] = "blink.mojom.BrowsingTopicsDocumentService";

BrowsingTopicsDocumentService::IPCStableHashFunction BrowsingTopicsDocumentService::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kBrowsingTopicsDocumentService_GetBrowsingTopics_Name: {
      return &BrowsingTopicsDocumentService::GetBrowsingTopics_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* BrowsingTopicsDocumentService::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kBrowsingTopicsDocumentService_GetBrowsingTopics_Name:
            return "Receive blink::mojom::BrowsingTopicsDocumentService::GetBrowsingTopics";
    }
  } else {
    switch (message.name()) {
      case internal::kBrowsingTopicsDocumentService_GetBrowsingTopics_Name:
            return "Receive reply blink::mojom::BrowsingTopicsDocumentService::GetBrowsingTopics";
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
uint32_t BrowsingTopicsDocumentService::GetBrowsingTopics_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::BrowsingTopicsDocumentService::GetBrowsingTopics");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class BrowsingTopicsDocumentService_GetBrowsingTopics_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  BrowsingTopicsDocumentService_GetBrowsingTopics_ForwardToCallback(
      BrowsingTopicsDocumentService::GetBrowsingTopicsCallback callback
      ) : callback_(std::move(callback)) {
  }

  BrowsingTopicsDocumentService_GetBrowsingTopics_ForwardToCallback(const BrowsingTopicsDocumentService_GetBrowsingTopics_ForwardToCallback&) = delete;
  BrowsingTopicsDocumentService_GetBrowsingTopics_ForwardToCallback& operator=(const BrowsingTopicsDocumentService_GetBrowsingTopics_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  BrowsingTopicsDocumentService::GetBrowsingTopicsCallback callback_;
};

BrowsingTopicsDocumentServiceProxy::BrowsingTopicsDocumentServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void BrowsingTopicsDocumentServiceProxy::GetBrowsingTopics(
    GetBrowsingTopicsCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send blink::mojom::BrowsingTopicsDocumentService::GetBrowsingTopics");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kBrowsingTopicsDocumentService_GetBrowsingTopics_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::BrowsingTopicsDocumentService_GetBrowsingTopics_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BrowsingTopicsDocumentService::Name_);
  message.set_method_name("GetBrowsingTopics");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new BrowsingTopicsDocumentService_GetBrowsingTopics_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}
class BrowsingTopicsDocumentService_GetBrowsingTopics_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static BrowsingTopicsDocumentService::GetBrowsingTopicsCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<BrowsingTopicsDocumentService_GetBrowsingTopics_ProxyToResponder> proxy(
        new BrowsingTopicsDocumentService_GetBrowsingTopics_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&BrowsingTopicsDocumentService_GetBrowsingTopics_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~BrowsingTopicsDocumentService_GetBrowsingTopics_ProxyToResponder() {
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
  BrowsingTopicsDocumentService_GetBrowsingTopics_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "BrowsingTopicsDocumentService::GetBrowsingTopicsCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      GetBrowsingTopicsResultPtr in_result);
};

bool BrowsingTopicsDocumentService_GetBrowsingTopics_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::BrowsingTopicsDocumentService_GetBrowsingTopics_ResponseParams_Data* params =
      reinterpret_cast<
          internal::BrowsingTopicsDocumentService_GetBrowsingTopics_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  GetBrowsingTopicsResultPtr p_result{};
  BrowsingTopicsDocumentService_GetBrowsingTopics_ResponseParamsDataView input_data_view(params, message);
  
  if (success && !input_data_view.ReadResult(&p_result))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        BrowsingTopicsDocumentService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result));
  return true;
}

void BrowsingTopicsDocumentService_GetBrowsingTopics_ProxyToResponder::Run(
    GetBrowsingTopicsResultPtr in_result) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply blink::mojom::BrowsingTopicsDocumentService::GetBrowsingTopics", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("result"), in_result,
                        "<value of type GetBrowsingTopicsResultPtr>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kBrowsingTopicsDocumentService_GetBrowsingTopics_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::BrowsingTopicsDocumentService_GetBrowsingTopics_ResponseParams_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<decltype(params->result)>
      result_fragment(params.message());
  result_fragment.Claim(&params->result);
  mojo::internal::Serialize<::blink::mojom::GetBrowsingTopicsResultDataView>(
      in_result, result_fragment, true);
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->result.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null result in ");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(BrowsingTopicsDocumentService::Name_);
  message.set_method_name("GetBrowsingTopics");
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
bool BrowsingTopicsDocumentServiceStubDispatch::Accept(
    BrowsingTopicsDocumentService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kBrowsingTopicsDocumentService_GetBrowsingTopics_Name: {
      break;
    }
  }
  return false;
}

// static
bool BrowsingTopicsDocumentServiceStubDispatch::AcceptWithResponder(
    BrowsingTopicsDocumentService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kBrowsingTopicsDocumentService_GetBrowsingTopics_Name: {

      internal::BrowsingTopicsDocumentService_GetBrowsingTopics_Params_Data* params =
          reinterpret_cast<
              internal::BrowsingTopicsDocumentService_GetBrowsingTopics_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      BrowsingTopicsDocumentService_GetBrowsingTopics_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            BrowsingTopicsDocumentService::Name_, 0, false);
        return false;
      }
      BrowsingTopicsDocumentService::GetBrowsingTopicsCallback callback =
          BrowsingTopicsDocumentService_GetBrowsingTopics_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->GetBrowsingTopics(std::move(callback));
      return true;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kBrowsingTopicsDocumentServiceValidationInfo[] = {
    {&internal::BrowsingTopicsDocumentService_GetBrowsingTopics_Params_Data::Validate,
     &internal::BrowsingTopicsDocumentService_GetBrowsingTopics_ResponseParams_Data::Validate},
};

bool BrowsingTopicsDocumentServiceRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::BrowsingTopicsDocumentService::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kBrowsingTopicsDocumentServiceValidationInfo);
}

bool BrowsingTopicsDocumentServiceResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::BrowsingTopicsDocumentService::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kBrowsingTopicsDocumentServiceValidationInfo);
}


}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::EpochTopic::DataView, ::blink::mojom::EpochTopicPtr>::Read(
    ::blink::mojom::EpochTopic::DataView input,
    ::blink::mojom::EpochTopicPtr* output) {
  bool success = true;
  ::blink::mojom::EpochTopicPtr result(::blink::mojom::EpochTopic::New());
  
      if (success)
        result->topic = input.topic();
      if (success && !input.ReadVersion(&result->version))
        success = false;
      if (success && !input.ReadConfigVersion(&result->config_version))
        success = false;
      if (success && !input.ReadModelVersion(&result->model_version))
        success = false;
      if (success && !input.ReadTaxonomyVersion(&result->taxonomy_version))
        success = false;
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::blink::mojom::GetBrowsingTopicsResult::DataView, ::blink::mojom::GetBrowsingTopicsResultPtr>::Read(
    ::blink::mojom::GetBrowsingTopicsResult::DataView input,
    ::blink::mojom::GetBrowsingTopicsResultPtr* output) {
  using UnionType = ::blink::mojom::GetBrowsingTopicsResult;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::kErrorMessage: {
      std::string result_error_message;
      if (!input.ReadErrorMessage(&result_error_message))
        return false;

      *output = UnionType::NewErrorMessage(
          std::move(result_error_message));
      break;
    }
    case Tag::kBrowsingTopics: {
      std::vector<::blink::mojom::EpochTopicPtr> result_browsing_topics;
      if (!input.ReadBrowsingTopics(&result_browsing_topics))
        return false;

      *output = UnionType::NewBrowsingTopics(
          std::move(result_browsing_topics));
      break;
    }
    default:

      return false;
  }
  return true;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {


void BrowsingTopicsDocumentServiceInterceptorForTesting::GetBrowsingTopics(GetBrowsingTopicsCallback callback) {
  GetForwardingInterface()->GetBrowsingTopics(std::move(callback));
}
BrowsingTopicsDocumentServiceAsyncWaiter::BrowsingTopicsDocumentServiceAsyncWaiter(
    BrowsingTopicsDocumentService* proxy) : proxy_(proxy) {}

BrowsingTopicsDocumentServiceAsyncWaiter::~BrowsingTopicsDocumentServiceAsyncWaiter() = default;

void BrowsingTopicsDocumentServiceAsyncWaiter::GetBrowsingTopics(
    GetBrowsingTopicsResultPtr* out_result) {
  base::RunLoop loop;
  proxy_->GetBrowsingTopics(
      base::BindOnce(
          [](base::RunLoop* loop,
             GetBrowsingTopicsResultPtr* out_result
,
             GetBrowsingTopicsResultPtr result) {*out_result = std::move(result);
            loop->Quit();
          },
          &loop,
          out_result));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif