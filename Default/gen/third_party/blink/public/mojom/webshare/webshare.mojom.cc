// third_party/blink/public/mojom/webshare/webshare.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/webshare/webshare.mojom.h"

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

#include "third_party/blink/public/mojom/webshare/webshare.mojom-params-data.h"
#include "third_party/blink/public/mojom/webshare/webshare.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/webshare/webshare.mojom-import-headers.h"
#include "third_party/blink/public/mojom/webshare/webshare.mojom-test-utils.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBSHARE_WEBSHARE_MOJOM_JUMBO_H_
#endif



namespace blink {
namespace mojom {
SharedFile::SharedFile()
    : name(),
      blob() {}

SharedFile::SharedFile(
    const ::base::SafeBaseName& name_in,
    ::blink::mojom::SerializedBlobPtr blob_in)
    : name(std::move(name_in)),
      blob(std::move(blob_in)) {}

SharedFile::~SharedFile() = default;

void SharedFile::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "name"), this->name,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::base::SafeBaseName&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "blob"), this->blob,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::blink::mojom::SerializedBlobPtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool SharedFile::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char ShareService::Name_[] = "blink.mojom.ShareService";

ShareService::IPCStableHashFunction ShareService::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kShareService_Share_Name: {
      return &ShareService::Share_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* ShareService::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kShareService_Share_Name:
            return "Receive blink::mojom::ShareService::Share";
    }
  } else {
    switch (message.name()) {
      case internal::kShareService_Share_Name:
            return "Receive reply blink::mojom::ShareService::Share";
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
uint32_t ShareService::Share_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::ShareService::Share");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class ShareService_Share_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  ShareService_Share_ForwardToCallback(
      ShareService::ShareCallback callback
      ) : callback_(std::move(callback)) {
  }

  ShareService_Share_ForwardToCallback(const ShareService_Share_ForwardToCallback&) = delete;
  ShareService_Share_ForwardToCallback& operator=(const ShareService_Share_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  ShareService::ShareCallback callback_;
};

ShareServiceProxy::ShareServiceProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void ShareServiceProxy::Share(
    const std::string& in_title, const std::string& in_text, const ::GURL& in_url, std::vector<SharedFilePtr> in_files, ShareCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::ShareService::Share", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("title"), in_title,
                        "<value of type const std::string&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("text"), in_text,
                        "<value of type const std::string&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("url"), in_url,
                        "<value of type const ::GURL&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("files"), in_files,
                        "<value of type std::vector<SharedFilePtr>>");
   });
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kShareService_Share_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::ShareService_Share_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->title)::BaseType> title_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_title, title_fragment);
  params->title.Set(
      title_fragment.is_null() ? nullptr : title_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->title.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null title in ShareService.Share request");
  mojo::internal::MessageFragment<
      typename decltype(params->text)::BaseType> text_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_text, text_fragment);
  params->text.Set(
      text_fragment.is_null() ? nullptr : text_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->text.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null text in ShareService.Share request");
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
      "null url in ShareService.Share request");
  mojo::internal::MessageFragment<
      typename decltype(params->files)::BaseType>
      files_fragment(params.message());
  const mojo::internal::ContainerValidateParams files_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::SharedFileDataView>>(
      in_files, files_fragment, &files_validate_params);
  params->files.Set(
      files_fragment.is_null() ? nullptr : files_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->files.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null files in ShareService.Share request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ShareService::Name_);
  message.set_method_name("Share");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new ShareService_Share_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}
class ShareService_Share_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static ShareService::ShareCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<ShareService_Share_ProxyToResponder> proxy(
        new ShareService_Share_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&ShareService_Share_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~ShareService_Share_ProxyToResponder() {
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
  ShareService_Share_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "ShareService::ShareCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      ::blink::mojom::ShareError in_error);
};

bool ShareService_Share_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::ShareService_Share_ResponseParams_Data* params =
      reinterpret_cast<
          internal::ShareService_Share_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  ::blink::mojom::ShareError p_error{};
  ShareService_Share_ResponseParamsDataView input_data_view(params, message);
  
  if (success && !input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        ShareService::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_error));
  return true;
}

void ShareService_Share_ProxyToResponder::Run(
    ::blink::mojom::ShareError in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply blink::mojom::ShareService::Share", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("error"), in_error,
                        "<value of type ::blink::mojom::ShareError>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kShareService_Share_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::ShareService_Share_ResponseParams_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<::blink::mojom::ShareError>(
      in_error, &params->error);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(ShareService::Name_);
  message.set_method_name("Share");
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
bool ShareServiceStubDispatch::Accept(
    ShareService* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kShareService_Share_Name: {
      break;
    }
  }
  return false;
}

// static
bool ShareServiceStubDispatch::AcceptWithResponder(
    ShareService* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kShareService_Share_Name: {

      internal::ShareService_Share_Params_Data* params =
          reinterpret_cast<
              internal::ShareService_Share_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      std::string p_title{};
      std::string p_text{};
      ::GURL p_url{};
      std::vector<SharedFilePtr> p_files{};
      ShareService_Share_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadTitle(&p_title))
        success = false;
      if (success && !input_data_view.ReadText(&p_text))
        success = false;
      if (success && !input_data_view.ReadUrl(&p_url))
        success = false;
      if (success && !input_data_view.ReadFiles(&p_files))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            ShareService::Name_, 0, false);
        return false;
      }
      ShareService::ShareCallback callback =
          ShareService_Share_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Share(
std::move(p_title), 
std::move(p_text), 
std::move(p_url), 
std::move(p_files), std::move(callback));
      return true;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kShareServiceValidationInfo[] = {
    {&internal::ShareService_Share_Params_Data::Validate,
     &internal::ShareService_Share_ResponseParams_Data::Validate},
};

bool ShareServiceRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::ShareService::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kShareServiceValidationInfo);
}

bool ShareServiceResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::ShareService::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kShareServiceValidationInfo);
}


}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::SharedFile::DataView, ::blink::mojom::SharedFilePtr>::Read(
    ::blink::mojom::SharedFile::DataView input,
    ::blink::mojom::SharedFilePtr* output) {
  bool success = true;
  ::blink::mojom::SharedFilePtr result(::blink::mojom::SharedFile::New());
  
      if (success && !input.ReadName(&result->name))
        success = false;
      if (success && !input.ReadBlob(&result->blob))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {


void ShareServiceInterceptorForTesting::Share(const std::string& title, const std::string& text, const ::GURL& url, std::vector<SharedFilePtr> files, ShareCallback callback) {
  GetForwardingInterface()->Share(std::move(title), std::move(text), std::move(url), std::move(files), std::move(callback));
}
ShareServiceAsyncWaiter::ShareServiceAsyncWaiter(
    ShareService* proxy) : proxy_(proxy) {}

ShareServiceAsyncWaiter::~ShareServiceAsyncWaiter() = default;

void ShareServiceAsyncWaiter::Share(
    const std::string& title, const std::string& text, const ::GURL& url, std::vector<SharedFilePtr> files, ::blink::mojom::ShareError* out_error) {
  base::RunLoop loop;
  proxy_->Share(std::move(title),std::move(text),std::move(url),std::move(files),
      base::BindOnce(
          [](base::RunLoop* loop,
             ::blink::mojom::ShareError* out_error
,
             ::blink::mojom::ShareError error) {*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_error));
  loop.Run();
}





}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif