// services/data_decoder/public/mojom/xml_parser.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DATA_DECODER_PUBLIC_MOJOM_XML_PARSER_MOJOM_H_
#define SERVICES_DATA_DECODER_PUBLIC_MOJOM_XML_PARSER_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "services/data_decoder/public/mojom/xml_parser.mojom-shared.h"
#include "services/data_decoder/public/mojom/xml_parser.mojom-forward.h"
#include "mojo/public/mojom/base/values.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace data_decoder {
namespace mojom {

class XmlParserProxy;

template <typename ImplRefTraits>
class XmlParserStub;

class XmlParserRequestValidator;
class XmlParserResponseValidator;


class  XmlParser
    : public XmlParserInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = XmlParserInterfaceBase;
  using Proxy_ = XmlParserProxy;

  template <typename ImplRefTraits>
  using Stub_ = XmlParserStub<ImplRefTraits>;

  using RequestValidator_ = XmlParserRequestValidator;
  using ResponseValidator_ = XmlParserResponseValidator;
  enum MethodMinVersions : uint32_t {
    kParseMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Parse_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  
  using WhitespaceBehavior = XmlParser_WhitespaceBehavior;
  
  static const char kTypeKey[];
  
  static const char kTagKey[];
  
  static const char kTextKey[];
  
  static const char kAttributesKey[];
  
  static const char kChildrenKey[];
  
  static const char kNamespacesKey[];
  
  static const char kElementType[];
  
  static const char kTextNodeType[];
  
  static const char kCDataNodeType[];
  virtual ~XmlParser() = default;


  using ParseCallback = base::OnceCallback<void(absl::optional<::base::Value>, const absl::optional<std::string>&)>;
  
  virtual void Parse(const std::string& xml, XmlParser::WhitespaceBehavior whitespace_behavior, ParseCallback callback) = 0;
};



class  XmlParserProxy
    : public XmlParser {
 public:
  using InterfaceType = XmlParser;

  explicit XmlParserProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Parse(const std::string& xml, XmlParser::WhitespaceBehavior whitespace_behavior, ParseCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  XmlParserStubDispatch {
 public:
  static bool Accept(XmlParser* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      XmlParser* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<XmlParser>>
class XmlParserStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  XmlParserStub() = default;
  ~XmlParserStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XmlParserStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return XmlParserStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  XmlParserRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  XmlParserResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace data_decoder

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DATA_DECODER_PUBLIC_MOJOM_XML_PARSER_MOJOM_H_