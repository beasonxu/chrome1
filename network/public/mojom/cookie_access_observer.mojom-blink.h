// services/network/public/mojom/cookie_access_observer.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_ACCESS_OBSERVER_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_ACCESS_OBSERVER_MOJOM_BLINK_H_

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

#include "services/network/public/mojom/cookie_access_observer.mojom-shared.h"
#include "services/network/public/mojom/cookie_access_observer.mojom-blink-forward.h"
#include "url/mojom/url.mojom-blink.h"
#include "services/network/public/mojom/site_for_cookies.mojom-blink.h"
#include "services/network/public/mojom/cookie_manager.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct network_mojom_internal_CookieAccessDetails_Type_DataHashFn {
  static unsigned GetHash(const ::network::mojom::CookieAccessDetails_Type& value) {
    using utype = std::underlying_type<::network::mojom::CookieAccessDetails_Type>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::CookieAccessDetails_Type& left, const ::network::mojom::CookieAccessDetails_Type& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::CookieAccessDetails_Type>
    : public GenericHashTraits<::network::mojom::CookieAccessDetails_Type> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::network::mojom::CookieAccessDetails_Type EmptyValue() { return static_cast<::network::mojom::CookieAccessDetails_Type>(-1000000); }
  static void ConstructDeletedValue(::network::mojom::CookieAccessDetails_Type& slot, bool) {
    slot = static_cast<::network::mojom::CookieAccessDetails_Type>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::CookieAccessDetails_Type& value) {
    return value == static_cast<::network::mojom::CookieAccessDetails_Type>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {

class CookieAccessObserverProxy;

template <typename ImplRefTraits>
class CookieAccessObserverStub;

class CookieAccessObserverRequestValidator;


class BLINK_PLATFORM_EXPORT CookieAccessObserver
    : public CookieAccessObserverInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = CookieAccessObserverInterfaceBase;
  using Proxy_ = CookieAccessObserverProxy;

  template <typename ImplRefTraits>
  using Stub_ = CookieAccessObserverStub<ImplRefTraits>;

  using RequestValidator_ = CookieAccessObserverRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnCookiesAccessedMinVersion = 0,
    kCloneMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnCookiesAccessed_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Clone_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~CookieAccessObserver() = default;

  
  virtual void OnCookiesAccessed(CookieAccessDetailsPtr details) = 0;

  
  virtual void Clone(::mojo::PendingReceiver<CookieAccessObserver> listener) = 0;
};



class BLINK_PLATFORM_EXPORT CookieAccessObserverProxy
    : public CookieAccessObserver {
 public:
  using InterfaceType = CookieAccessObserver;

  explicit CookieAccessObserverProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnCookiesAccessed(CookieAccessDetailsPtr details) final;
  
  void Clone(::mojo::PendingReceiver<CookieAccessObserver> listener) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT CookieAccessObserverStubDispatch {
 public:
  static bool Accept(CookieAccessObserver* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CookieAccessObserver* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CookieAccessObserver>>
class CookieAccessObserverStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CookieAccessObserverStub() = default;
  ~CookieAccessObserverStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CookieAccessObserverStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CookieAccessObserverStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT CookieAccessObserverRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_PLATFORM_EXPORT CookieAccessDetails {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<CookieAccessDetails, T>::value>;
  using DataView = CookieAccessDetailsDataView;
  using Data_ = internal::CookieAccessDetails_Data;
  using Type = CookieAccessDetails_Type;

  template <typename... Args>
  static CookieAccessDetailsPtr New(Args&&... args) {
    return CookieAccessDetailsPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CookieAccessDetailsPtr From(const U& u) {
    return mojo::TypeConverter<CookieAccessDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CookieAccessDetails>::Convert(*this);
  }


  CookieAccessDetails();

  CookieAccessDetails(
      CookieAccessDetails::Type type,
      const ::blink::KURL& url,
      const ::net::SiteForCookies& site_for_cookies,
      WTF::Vector<::network::mojom::blink::CookieOrLineWithAccessResultPtr> cookie_list,
      const WTF::String& devtools_request_id);

CookieAccessDetails(const CookieAccessDetails&) = delete;
CookieAccessDetails& operator=(const CookieAccessDetails&) = delete;

  ~CookieAccessDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CookieAccessDetailsPtr>
  CookieAccessDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, CookieAccessDetails::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, CookieAccessDetails::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CookieAccessDetails::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CookieAccessDetails::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CookieAccessDetails_UnserializedMessageContext<
            UserType, CookieAccessDetails::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<CookieAccessDetails::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CookieAccessDetails::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CookieAccessDetails_UnserializedMessageContext<
            UserType, CookieAccessDetails::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CookieAccessDetails::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  CookieAccessDetails::Type type;
  
  ::blink::KURL url;
  
  ::net::SiteForCookies site_for_cookies;
  
  WTF::Vector<::network::mojom::blink::CookieOrLineWithAccessResultPtr> cookie_list;
  
  WTF::String devtools_request_id;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, CookieAccessDetails::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, CookieAccessDetails::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, CookieAccessDetails::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, CookieAccessDetails::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
CookieAccessDetailsPtr CookieAccessDetails::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(url),
      mojo::Clone(site_for_cookies),
      mojo::Clone(cookie_list),
      mojo::Clone(devtools_request_id)
  );
}

template <typename T, CookieAccessDetails::EnableIfSame<T>*>
bool CookieAccessDetails::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->site_for_cookies, other_struct.site_for_cookies))
    return false;
  if (!mojo::Equals(this->cookie_list, other_struct.cookie_list))
    return false;
  if (!mojo::Equals(this->devtools_request_id, other_struct.devtools_request_id))
    return false;
  return true;
}

template <typename T, CookieAccessDetails::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.type < rhs.type)
    return true;
  if (rhs.type < lhs.type)
    return false;
  if (lhs.url < rhs.url)
    return true;
  if (rhs.url < lhs.url)
    return false;
  if (lhs.site_for_cookies < rhs.site_for_cookies)
    return true;
  if (rhs.site_for_cookies < lhs.site_for_cookies)
    return false;
  if (lhs.cookie_list < rhs.cookie_list)
    return true;
  if (rhs.cookie_list < lhs.cookie_list)
    return false;
  if (lhs.devtools_request_id < rhs.devtools_request_id)
    return true;
  if (rhs.devtools_request_id < lhs.devtools_request_id)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::CookieAccessDetails::DataView,
                                         ::network::mojom::blink::CookieAccessDetailsPtr> {
  static bool IsNull(const ::network::mojom::blink::CookieAccessDetailsPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::CookieAccessDetailsPtr* output) { output->reset(); }

  static decltype(::network::mojom::blink::CookieAccessDetails::type) type(
      const ::network::mojom::blink::CookieAccessDetailsPtr& input) {
    return input->type;
  }

  static const decltype(::network::mojom::blink::CookieAccessDetails::url)& url(
      const ::network::mojom::blink::CookieAccessDetailsPtr& input) {
    return input->url;
  }

  static const decltype(::network::mojom::blink::CookieAccessDetails::site_for_cookies)& site_for_cookies(
      const ::network::mojom::blink::CookieAccessDetailsPtr& input) {
    return input->site_for_cookies;
  }

  static const decltype(::network::mojom::blink::CookieAccessDetails::cookie_list)& cookie_list(
      const ::network::mojom::blink::CookieAccessDetailsPtr& input) {
    return input->cookie_list;
  }

  static const decltype(::network::mojom::blink::CookieAccessDetails::devtools_request_id)& devtools_request_id(
      const ::network::mojom::blink::CookieAccessDetailsPtr& input) {
    return input->devtools_request_id;
  }

  static bool Read(::network::mojom::blink::CookieAccessDetails::DataView input, ::network::mojom::blink::CookieAccessDetailsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_ACCESS_OBSERVER_MOJOM_BLINK_H_