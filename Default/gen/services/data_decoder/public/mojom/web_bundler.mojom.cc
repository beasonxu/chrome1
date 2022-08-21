// services/data_decoder/public/mojom/web_bundler.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/data_decoder/public/mojom/web_bundler.mojom.h"

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

#include "services/data_decoder/public/mojom/web_bundler.mojom-params-data.h"
#include "services/data_decoder/public/mojom/web_bundler.mojom-shared-message-ids.h"

#include "services/data_decoder/public/mojom/web_bundler.mojom-import-headers.h"
#include "services/data_decoder/public/mojom/web_bundler.mojom-test-utils.h"


#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_WEB_BUNDLER_MOJOM_JUMBO_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_WEB_BUNDLER_MOJOM_JUMBO_H_
#endif



namespace data_decoder {
namespace mojom {
const char WebBundler::Name_[] = "data_decoder.mojom.WebBundler";

WebBundler::IPCStableHashFunction WebBundler::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kWebBundler_Generate_Name: {
      return &WebBundler::Generate_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* WebBundler::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kWebBundler_Generate_Name:
            return "Receive data_decoder::mojom::WebBundler::Generate";
    }
  } else {
    switch (message.name()) {
      case internal::kWebBundler_Generate_Name:
            return "Receive reply data_decoder::mojom::WebBundler::Generate";
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
uint32_t WebBundler::Generate_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)data_decoder::mojom::WebBundler::Generate");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class WebBundler_Generate_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  WebBundler_Generate_ForwardToCallback(
      WebBundler::GenerateCallback callback
      ) : callback_(std::move(callback)) {
  }

  WebBundler_Generate_ForwardToCallback(const WebBundler_Generate_ForwardToCallback&) = delete;
  WebBundler_Generate_ForwardToCallback& operator=(const WebBundler_Generate_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  WebBundler::GenerateCallback callback_;
};

WebBundlerProxy::WebBundlerProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void WebBundlerProxy::Generate(
    std::vector<::mojo::PendingRemote<::data_decoder::mojom::ResourceSnapshotForWebBundle>> in_snapshots, ::base::File in_file, GenerateCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send data_decoder::mojom::WebBundler::Generate", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("snapshots"), in_snapshots,
                        "<value of type std::vector<::mojo::PendingRemote<::data_decoder::mojom::ResourceSnapshotForWebBundle>>>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("file"), in_file,
                        "<value of type ::base::File>");
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
      internal::kWebBundler_Generate_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::data_decoder::mojom::internal::WebBundler_Generate_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->snapshots)::BaseType>
      snapshots_fragment(params.message());
  const mojo::internal::ContainerValidateParams snapshots_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<mojo::InterfacePtrDataView<::data_decoder::mojom::ResourceSnapshotForWebBundleInterfaceBase>>>(
      in_snapshots, snapshots_fragment, &snapshots_validate_params);
  params->snapshots.Set(
      snapshots_fragment.is_null() ? nullptr : snapshots_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->snapshots.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null snapshots in WebBundler.Generate request");
  mojo::internal::MessageFragment<
      typename decltype(params->file)::BaseType> file_fragment(
          params.message());
  mojo::internal::Serialize<::mojo_base::mojom::FileDataView>(
      in_file, file_fragment);
  params->file.Set(
      file_fragment.is_null() ? nullptr : file_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->file.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null file in WebBundler.Generate request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebBundler::Name_);
  message.set_method_name("Generate");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new WebBundler_Generate_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}
class WebBundler_Generate_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static WebBundler::GenerateCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<WebBundler_Generate_ProxyToResponder> proxy(
        new WebBundler_Generate_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&WebBundler_Generate_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~WebBundler_Generate_ProxyToResponder() {
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
  WebBundler_Generate_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "WebBundler::GenerateCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      uint64_t in_file_size, WebBundlerError in_error);
};

bool WebBundler_Generate_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::WebBundler_Generate_ResponseParams_Data* params =
      reinterpret_cast<
          internal::WebBundler_Generate_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  uint64_t p_file_size{};
  WebBundlerError p_error{};
  WebBundler_Generate_ResponseParamsDataView input_data_view(params, message);
  
  if (success)
    p_file_size = input_data_view.file_size();
  if (success && !input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        WebBundler::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_file_size), 
std::move(p_error));
  return true;
}

void WebBundler_Generate_ProxyToResponder::Run(
    uint64_t in_file_size, WebBundlerError in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply data_decoder::mojom::WebBundler::Generate", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("file_size"), in_file_size,
                        "<value of type uint64_t>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("error"), in_error,
                        "<value of type WebBundlerError>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kWebBundler_Generate_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::data_decoder::mojom::internal::WebBundler_Generate_ResponseParams_Data> params(
          message);
  params.Allocate();
  params->file_size = in_file_size;
  mojo::internal::Serialize<::data_decoder::mojom::WebBundlerError>(
      in_error, &params->error);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(WebBundler::Name_);
  message.set_method_name("Generate");
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
bool WebBundlerStubDispatch::Accept(
    WebBundler* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kWebBundler_Generate_Name: {
      break;
    }
  }
  return false;
}

// static
bool WebBundlerStubDispatch::AcceptWithResponder(
    WebBundler* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kWebBundler_Generate_Name: {

      internal::WebBundler_Generate_Params_Data* params =
          reinterpret_cast<
              internal::WebBundler_Generate_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      std::vector<::mojo::PendingRemote<::data_decoder::mojom::ResourceSnapshotForWebBundle>> p_snapshots{};
      ::base::File p_file{};
      WebBundler_Generate_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadSnapshots(&p_snapshots))
        success = false;
      if (success && !input_data_view.ReadFile(&p_file))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            WebBundler::Name_, 0, false);
        return false;
      }
      WebBundler::GenerateCallback callback =
          WebBundler_Generate_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Generate(
std::move(p_snapshots), 
std::move(p_file), std::move(callback));
      return true;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kWebBundlerValidationInfo[] = {
    {&internal::WebBundler_Generate_Params_Data::Validate,
     &internal::WebBundler_Generate_ResponseParams_Data::Validate},
};

bool WebBundlerRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::data_decoder::mojom::WebBundler::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kWebBundlerValidationInfo);
}

bool WebBundlerResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::data_decoder::mojom::WebBundler::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kWebBundlerValidationInfo);
}


}  // namespace mojom
}  // namespace data_decoder


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace data_decoder {
namespace mojom {


void WebBundlerInterceptorForTesting::Generate(std::vector<::mojo::PendingRemote<::data_decoder::mojom::ResourceSnapshotForWebBundle>> snapshots, ::base::File file, GenerateCallback callback) {
  GetForwardingInterface()->Generate(std::move(snapshots), std::move(file), std::move(callback));
}
WebBundlerAsyncWaiter::WebBundlerAsyncWaiter(
    WebBundler* proxy) : proxy_(proxy) {}

WebBundlerAsyncWaiter::~WebBundlerAsyncWaiter() = default;

void WebBundlerAsyncWaiter::Generate(
    std::vector<::mojo::PendingRemote<::data_decoder::mojom::ResourceSnapshotForWebBundle>> snapshots, ::base::File file, uint64_t* out_file_size, WebBundlerError* out_error) {
  base::RunLoop loop;
  proxy_->Generate(std::move(snapshots),std::move(file),
      base::BindOnce(
          [](base::RunLoop* loop,
             uint64_t* out_file_size
,
             WebBundlerError* out_error
,
             uint64_t file_size,
             WebBundlerError error) {*out_file_size = std::move(file_size);*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_file_size,
          out_error));
  loop.Run();
}





}  // namespace mojom
}  // namespace data_decoder


#if defined(__clang__)
#pragma clang diagnostic pop
#endif