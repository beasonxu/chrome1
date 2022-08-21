// third_party/blink/public/mojom/frame/reporting_observer.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_REPORTING_OBSERVER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_REPORTING_OBSERVER_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/frame/reporting_observer.mojom-shared.h"
#include "third_party/blink/public/mojom/frame/reporting_observer.mojom-blink-forward.h"
#include "url/mojom/url.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/renderer/core/core_export.h"




namespace blink {
namespace mojom {
namespace blink {

class ReportingObserverProxy;

template <typename ImplRefTraits>
class ReportingObserverStub;

class ReportingObserverRequestValidator;


class CORE_EXPORT ReportingObserver
    : public ReportingObserverInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = ReportingObserverInterfaceBase;
  using Proxy_ = ReportingObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = ReportingObserverStub<ImplRefTraits>;

  using RequestValidator_ = ReportingObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kNotifyMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Notify_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~ReportingObserver() = default;

  
  virtual void Notify(ReportPtr report) = 0;
};



class CORE_EXPORT ReportingObserverProxy
    : public ReportingObserver {
 public:
  using InterfaceType = ReportingObserver;

  explicit ReportingObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Notify(ReportPtr report) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CORE_EXPORT ReportingObserverStubDispatch {
 public:
  static bool Accept(ReportingObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ReportingObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ReportingObserver>>
class ReportingObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ReportingObserverStub() = default;
  ~ReportingObserverStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ReportingObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ReportingObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CORE_EXPORT ReportingObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class CORE_EXPORT ReportBodyElement {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ReportBodyElement, T>::value>;
  using DataView = ReportBodyElementDataView;
  using Data_ = internal::ReportBodyElement_Data;

  template <typename... Args>
  static ReportBodyElementPtr New(Args&&... args) {
    return ReportBodyElementPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReportBodyElementPtr From(const U& u) {
    return mojo::TypeConverter<ReportBodyElementPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ReportBodyElement>::Convert(*this);
  }


  ReportBodyElement();

  ReportBodyElement(
      const WTF::String& name,
      const WTF::String& value);


  ~ReportBodyElement();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReportBodyElementPtr>
  ReportBodyElementPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ReportBodyElement::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ReportBodyElement::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ReportBodyElement::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ReportBodyElement::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ReportBodyElement_UnserializedMessageContext<
            UserType, ReportBodyElement::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ReportBodyElement::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ReportBodyElement::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ReportBodyElement_UnserializedMessageContext<
            UserType, ReportBodyElement::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ReportBodyElement::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::String name;
  
  WTF::String value;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ReportBodyElement::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ReportBodyElement::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ReportBodyElement::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ReportBodyElement::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}










class CORE_EXPORT ReportBody {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ReportBody, T>::value>;
  using DataView = ReportBodyDataView;
  using Data_ = internal::ReportBody_Data;

  template <typename... Args>
  static ReportBodyPtr New(Args&&... args) {
    return ReportBodyPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReportBodyPtr From(const U& u) {
    return mojo::TypeConverter<ReportBodyPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ReportBody>::Convert(*this);
  }


  ReportBody();

  explicit ReportBody(
      WTF::Vector<ReportBodyElementPtr> body);

ReportBody(const ReportBody&) = delete;
ReportBody& operator=(const ReportBody&) = delete;

  ~ReportBody();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReportBodyPtr>
  ReportBodyPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ReportBody::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ReportBody::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ReportBody::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ReportBody::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ReportBody_UnserializedMessageContext<
            UserType, ReportBody::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ReportBody::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ReportBody::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ReportBody_UnserializedMessageContext<
            UserType, ReportBody::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ReportBody::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::Vector<ReportBodyElementPtr> body;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ReportBody::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ReportBody::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ReportBody::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ReportBody::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class CORE_EXPORT Report {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<Report, T>::value>;
  using DataView = ReportDataView;
  using Data_ = internal::Report_Data;

  template <typename... Args>
  static ReportPtr New(Args&&... args) {
    return ReportPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReportPtr From(const U& u) {
    return mojo::TypeConverter<ReportPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Report>::Convert(*this);
  }


  Report();

  Report(
      const WTF::String& type,
      const ::blink::KURL& url,
      ReportBodyPtr body);

Report(const Report&) = delete;
Report& operator=(const Report&) = delete;

  ~Report();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReportPtr>
  ReportPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, Report::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, Report::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Report::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Report::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Report_UnserializedMessageContext<
            UserType, Report::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<Report::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return Report::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Report_UnserializedMessageContext<
            UserType, Report::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Report::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::String type;
  
  ::blink::KURL url;
  
  ReportBodyPtr body;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, Report::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, Report::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, Report::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, Report::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
ReportBodyElementPtr ReportBodyElement::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(value)
  );
}

template <typename T, ReportBodyElement::EnableIfSame<T>*>
bool ReportBodyElement::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}

template <typename T, ReportBodyElement::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.name < rhs.name)
    return true;
  if (rhs.name < lhs.name)
    return false;
  if (lhs.value < rhs.value)
    return true;
  if (rhs.value < lhs.value)
    return false;
  return false;
}
template <typename StructPtrType>
ReportBodyPtr ReportBody::Clone() const {
  return New(
      mojo::Clone(body)
  );
}

template <typename T, ReportBody::EnableIfSame<T>*>
bool ReportBody::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->body, other_struct.body))
    return false;
  return true;
}

template <typename T, ReportBody::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.body < rhs.body)
    return true;
  if (rhs.body < lhs.body)
    return false;
  return false;
}
template <typename StructPtrType>
ReportPtr Report::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(url),
      mojo::Clone(body)
  );
}

template <typename T, Report::EnableIfSame<T>*>
bool Report::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->body, other_struct.body))
    return false;
  return true;
}

template <typename T, Report::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.type < rhs.type)
    return true;
  if (rhs.type < lhs.type)
    return false;
  if (lhs.url < rhs.url)
    return true;
  if (rhs.url < lhs.url)
    return false;
  if (lhs.body < rhs.body)
    return true;
  if (rhs.body < lhs.body)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::ReportBodyElement::DataView,
                                         ::blink::mojom::blink::ReportBodyElementPtr> {
  static bool IsNull(const ::blink::mojom::blink::ReportBodyElementPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ReportBodyElementPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ReportBodyElement::name)& name(
      const ::blink::mojom::blink::ReportBodyElementPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::blink::ReportBodyElement::value)& value(
      const ::blink::mojom::blink::ReportBodyElementPtr& input) {
    return input->value;
  }

  static bool Read(::blink::mojom::blink::ReportBodyElement::DataView input, ::blink::mojom::blink::ReportBodyElementPtr* output);
};


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::ReportBody::DataView,
                                         ::blink::mojom::blink::ReportBodyPtr> {
  static bool IsNull(const ::blink::mojom::blink::ReportBodyPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ReportBodyPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ReportBody::body)& body(
      const ::blink::mojom::blink::ReportBodyPtr& input) {
    return input->body;
  }

  static bool Read(::blink::mojom::blink::ReportBody::DataView input, ::blink::mojom::blink::ReportBodyPtr* output);
};


template <>
struct CORE_EXPORT StructTraits<::blink::mojom::blink::Report::DataView,
                                         ::blink::mojom::blink::ReportPtr> {
  static bool IsNull(const ::blink::mojom::blink::ReportPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ReportPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::Report::type)& type(
      const ::blink::mojom::blink::ReportPtr& input) {
    return input->type;
  }

  static const decltype(::blink::mojom::blink::Report::url)& url(
      const ::blink::mojom::blink::ReportPtr& input) {
    return input->url;
  }

  static const decltype(::blink::mojom::blink::Report::body)& body(
      const ::blink::mojom::blink::ReportPtr& input) {
    return input->body;
  }

  static bool Read(::blink::mojom::blink::Report::DataView input, ::blink::mojom::blink::ReportPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_REPORTING_OBSERVER_MOJOM_BLINK_H_