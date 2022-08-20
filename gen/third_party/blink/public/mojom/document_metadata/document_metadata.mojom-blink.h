// third_party/blink/public/mojom/document_metadata/document_metadata.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_DOCUMENT_METADATA_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_DOCUMENT_METADATA_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/document_metadata/document_metadata.mojom-shared.h"
#include "third_party/blink/public/mojom/document_metadata/document_metadata.mojom-blink-forward.h"
#include "components/schema_org/common/metadata.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/renderer/platform/platform_export.h"




namespace blink {
namespace mojom {
namespace blink {

class DocumentMetadataProxy;

template <typename ImplRefTraits>
class DocumentMetadataStub;

class DocumentMetadataRequestValidator;
class DocumentMetadataResponseValidator;


class PLATFORM_EXPORT DocumentMetadata
    : public DocumentMetadataInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = DocumentMetadataInterfaceBase;
  using Proxy_ = DocumentMetadataProxy;

  template <typename ImplRefTraits>
  using Stub_ = DocumentMetadataStub<ImplRefTraits>;

  using RequestValidator_ = DocumentMetadataRequestValidator;
  using ResponseValidator_ = DocumentMetadataResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetEntitiesMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct GetEntities_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~DocumentMetadata() = default;


  using GetEntitiesCallback = base::OnceCallback<void(WebPagePtr)>;
  
  virtual void GetEntities(GetEntitiesCallback callback) = 0;
};



class PLATFORM_EXPORT DocumentMetadataProxy
    : public DocumentMetadata {
 public:
  using InterfaceType = DocumentMetadata;

  explicit DocumentMetadataProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void GetEntities(GetEntitiesCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class PLATFORM_EXPORT DocumentMetadataStubDispatch {
 public:
  static bool Accept(DocumentMetadata* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DocumentMetadata* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DocumentMetadata>>
class DocumentMetadataStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DocumentMetadataStub() = default;
  ~DocumentMetadataStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DocumentMetadataStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DocumentMetadataStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class PLATFORM_EXPORT DocumentMetadataRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class PLATFORM_EXPORT DocumentMetadataResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class PLATFORM_EXPORT WebPage {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<WebPage, T>::value>;
  using DataView = WebPageDataView;
  using Data_ = internal::WebPage_Data;

  template <typename... Args>
  static WebPagePtr New(Args&&... args) {
    return WebPagePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static WebPagePtr From(const U& u) {
    return mojo::TypeConverter<WebPagePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, WebPage>::Convert(*this);
  }


  WebPage();

  WebPage(
      const ::blink::KURL& url,
      const WTF::String& title,
      WTF::Vector<::schema_org::mojom::blink::EntityPtr> entities);

WebPage(const WebPage&) = delete;
WebPage& operator=(const WebPage&) = delete;

  ~WebPage();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = WebPagePtr>
  WebPagePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, WebPage::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, WebPage::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        WebPage::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        WebPage::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::WebPage_UnserializedMessageContext<
            UserType, WebPage::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<WebPage::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return WebPage::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::WebPage_UnserializedMessageContext<
            UserType, WebPage::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<WebPage::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::blink::KURL url;
  
  WTF::String title;
  
  WTF::Vector<::schema_org::mojom::blink::EntityPtr> entities;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, WebPage::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, WebPage::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, WebPage::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, WebPage::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
WebPagePtr WebPage::Clone() const {
  return New(
      mojo::Clone(url),
      mojo::Clone(title),
      mojo::Clone(entities)
  );
}

template <typename T, WebPage::EnableIfSame<T>*>
bool WebPage::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->entities, other_struct.entities))
    return false;
  return true;
}

template <typename T, WebPage::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.url < rhs.url)
    return true;
  if (rhs.url < lhs.url)
    return false;
  if (lhs.title < rhs.title)
    return true;
  if (rhs.title < lhs.title)
    return false;
  if (lhs.entities < rhs.entities)
    return true;
  if (rhs.entities < lhs.entities)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::WebPage::DataView,
                                         ::blink::mojom::blink::WebPagePtr> {
  static bool IsNull(const ::blink::mojom::blink::WebPagePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::WebPagePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::WebPage::url)& url(
      const ::blink::mojom::blink::WebPagePtr& input) {
    return input->url;
  }

  static const decltype(::blink::mojom::blink::WebPage::title)& title(
      const ::blink::mojom::blink::WebPagePtr& input) {
    return input->title;
  }

  static const decltype(::blink::mojom::blink::WebPage::entities)& entities(
      const ::blink::mojom::blink::WebPagePtr& input) {
    return input->entities;
  }

  static bool Read(::blink::mojom::blink::WebPage::DataView input, ::blink::mojom::blink::WebPagePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_DOCUMENT_METADATA_DOCUMENT_METADATA_MOJOM_BLINK_H_