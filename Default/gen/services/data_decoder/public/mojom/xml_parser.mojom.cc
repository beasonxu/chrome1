// services/data_decoder/public/mojom/xml_parser.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/data_decoder/public/mojom/xml_parser.mojom.h"

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

#include "services/data_decoder/public/mojom/xml_parser.mojom-params-data.h"
#include "services/data_decoder/public/mojom/xml_parser.mojom-shared-message-ids.h"

#include "services/data_decoder/public/mojom/xml_parser.mojom-import-headers.h"
#include "services/data_decoder/public/mojom/xml_parser.mojom-test-utils.h"


#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_XML_PARSER_MOJOM_JUMBO_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_XML_PARSER_MOJOM_JUMBO_H_
#endif



namespace data_decoder {
namespace mojom {
const char XmlParser::Name_[] = "data_decoder.mojom.XmlParser";
const char XmlParser::kTypeKey[] = "type";
const char XmlParser::kTagKey[] = "tag";
const char XmlParser::kTextKey[] = "text";
const char XmlParser::kAttributesKey[] = "attributes";
const char XmlParser::kChildrenKey[] = "children";
const char XmlParser::kNamespacesKey[] = "namespaces";
const char XmlParser::kElementType[] = "element";
const char XmlParser::kTextNodeType[] = "text";
const char XmlParser::kCDataNodeType[] = "cdata";

XmlParser::IPCStableHashFunction XmlParser::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kXmlParser_Parse_Name: {
      return &XmlParser::Parse_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* XmlParser::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kXmlParser_Parse_Name:
            return "Receive data_decoder::mojom::XmlParser::Parse";
    }
  } else {
    switch (message.name()) {
      case internal::kXmlParser_Parse_Name:
            return "Receive reply data_decoder::mojom::XmlParser::Parse";
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
uint32_t XmlParser::Parse_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)data_decoder::mojom::XmlParser::Parse");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class XmlParser_Parse_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  XmlParser_Parse_ForwardToCallback(
      XmlParser::ParseCallback callback
      ) : callback_(std::move(callback)) {
  }

  XmlParser_Parse_ForwardToCallback(const XmlParser_Parse_ForwardToCallback&) = delete;
  XmlParser_Parse_ForwardToCallback& operator=(const XmlParser_Parse_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  XmlParser::ParseCallback callback_;
};

XmlParserProxy::XmlParserProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void XmlParserProxy::Parse(
    const std::string& in_xml, XmlParser::WhitespaceBehavior in_whitespace_behavior, ParseCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send data_decoder::mojom::XmlParser::Parse", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("xml"), in_xml,
                        "<value of type const std::string&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("whitespace_behavior"), in_whitespace_behavior,
                        "<value of type XmlParser::WhitespaceBehavior>");
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
      internal::kXmlParser_Parse_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::data_decoder::mojom::internal::XmlParser_Parse_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->xml)::BaseType> xml_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_xml, xml_fragment);
  params->xml.Set(
      xml_fragment.is_null() ? nullptr : xml_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->xml.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null xml in XmlParser.Parse request");
  mojo::internal::Serialize<::data_decoder::mojom::XmlParser_WhitespaceBehavior>(
      in_whitespace_behavior, &params->whitespace_behavior);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XmlParser::Name_);
  message.set_method_name("Parse");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new XmlParser_Parse_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}
class XmlParser_Parse_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static XmlParser::ParseCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<XmlParser_Parse_ProxyToResponder> proxy(
        new XmlParser_Parse_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&XmlParser_Parse_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~XmlParser_Parse_ProxyToResponder() {
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
  XmlParser_Parse_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "XmlParser::ParseCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      absl::optional<::base::Value> in_result, const absl::optional<std::string>& in_error);
};

bool XmlParser_Parse_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::XmlParser_Parse_ResponseParams_Data* params =
      reinterpret_cast<
          internal::XmlParser_Parse_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  absl::optional<::base::Value> p_result{};
  absl::optional<std::string> p_error{};
  XmlParser_Parse_ResponseParamsDataView input_data_view(params, message);
  
  if (success && !input_data_view.ReadResult(&p_result))
    success = false;
  if (success && !input_data_view.ReadError(&p_error))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        XmlParser::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_result), 
std::move(p_error));
  return true;
}

void XmlParser_Parse_ProxyToResponder::Run(
    absl::optional<::base::Value> in_result, const absl::optional<std::string>& in_error) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply data_decoder::mojom::XmlParser::Parse", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("result"), in_result,
                        "<value of type absl::optional<::base::Value>>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("error"), in_error,
                        "<value of type const absl::optional<std::string>&>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kXmlParser_Parse_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::data_decoder::mojom::internal::XmlParser_Parse_ResponseParams_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<decltype(params->result)>
      result_fragment(params.message());
  result_fragment.Claim(&params->result);
  mojo::internal::Serialize<::mojo_base::mojom::ValueDataView>(
      in_result, result_fragment, true);
  mojo::internal::MessageFragment<
      typename decltype(params->error)::BaseType> error_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_error, error_fragment);
  params->error.Set(
      error_fragment.is_null() ? nullptr : error_fragment.data());

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(XmlParser::Name_);
  message.set_method_name("Parse");
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
bool XmlParserStubDispatch::Accept(
    XmlParser* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kXmlParser_Parse_Name: {
      break;
    }
  }
  return false;
}

// static
bool XmlParserStubDispatch::AcceptWithResponder(
    XmlParser* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kXmlParser_Parse_Name: {

      internal::XmlParser_Parse_Params_Data* params =
          reinterpret_cast<
              internal::XmlParser_Parse_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      std::string p_xml{};
      XmlParser::WhitespaceBehavior p_whitespace_behavior{};
      XmlParser_Parse_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadXml(&p_xml))
        success = false;
      if (success && !input_data_view.ReadWhitespaceBehavior(&p_whitespace_behavior))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            XmlParser::Name_, 0, false);
        return false;
      }
      XmlParser::ParseCallback callback =
          XmlParser_Parse_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->Parse(
std::move(p_xml), 
std::move(p_whitespace_behavior), std::move(callback));
      return true;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kXmlParserValidationInfo[] = {
    {&internal::XmlParser_Parse_Params_Data::Validate,
     &internal::XmlParser_Parse_ResponseParams_Data::Validate},
};

bool XmlParserRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::data_decoder::mojom::XmlParser::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kXmlParserValidationInfo);
}

bool XmlParserResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::data_decoder::mojom::XmlParser::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kXmlParserValidationInfo);
}


}  // namespace mojom
}  // namespace data_decoder


namespace mojo {

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace data_decoder {
namespace mojom {


void XmlParserInterceptorForTesting::Parse(const std::string& xml, XmlParser::WhitespaceBehavior whitespace_behavior, ParseCallback callback) {
  GetForwardingInterface()->Parse(std::move(xml), std::move(whitespace_behavior), std::move(callback));
}
XmlParserAsyncWaiter::XmlParserAsyncWaiter(
    XmlParser* proxy) : proxy_(proxy) {}

XmlParserAsyncWaiter::~XmlParserAsyncWaiter() = default;

void XmlParserAsyncWaiter::Parse(
    const std::string& xml, XmlParser::WhitespaceBehavior whitespace_behavior, absl::optional<::base::Value>* out_result, absl::optional<std::string>* out_error) {
  base::RunLoop loop;
  proxy_->Parse(std::move(xml),std::move(whitespace_behavior),
      base::BindOnce(
          [](base::RunLoop* loop,
             absl::optional<::base::Value>* out_result
,
             absl::optional<std::string>* out_error
,
             absl::optional<::base::Value> result,
             const absl::optional<std::string>& error) {*out_result = std::move(result);*out_error = std::move(error);
            loop->Quit();
          },
          &loop,
          out_result,
          out_error));
  loop.Run();
}





}  // namespace mojom
}  // namespace data_decoder


#if defined(__clang__)
#pragma clang diagnostic pop
#endif