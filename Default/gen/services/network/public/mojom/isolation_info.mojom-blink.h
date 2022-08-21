// services/network/public/mojom/isolation_info.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ISOLATION_INFO_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ISOLATION_INFO_MOJOM_BLINK_H_

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

#include "services/network/public/mojom/isolation_info.mojom-shared.h"
#include "services/network/public/mojom/isolation_info.mojom-blink-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "services/network/public/mojom/site_for_cookies.mojom-blink.h"
#include "services/network/public/mojom/schemeful_site.mojom-blink.h"
#include "url/mojom/origin.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "services/network/public/cpp/isolation_info_mojom_traits.h"
#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct network_mojom_internal_IsolationInfoRequestType_DataHashFn {
  static unsigned GetHash(const ::network::mojom::IsolationInfoRequestType& value) {
    using utype = std::underlying_type<::network::mojom::IsolationInfoRequestType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::network::mojom::IsolationInfoRequestType& left, const ::network::mojom::IsolationInfoRequestType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::network::mojom::IsolationInfoRequestType>
    : public GenericHashTraits<::network::mojom::IsolationInfoRequestType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::network::mojom::IsolationInfoRequestType EmptyValue() { return static_cast<::network::mojom::IsolationInfoRequestType>(-1000000); }
  static void ConstructDeletedValue(::network::mojom::IsolationInfoRequestType& slot, bool) {
    slot = static_cast<::network::mojom::IsolationInfoRequestType>(-1000001);
  }
  static bool IsDeletedValue(const ::network::mojom::IsolationInfoRequestType& value) {
    return value == static_cast<::network::mojom::IsolationInfoRequestType>(-1000001);
  }
};
}  // namespace WTF


namespace network {
namespace mojom {
namespace blink {








class BLINK_PLATFORM_EXPORT IsolationInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<IsolationInfo, T>::value>;
  using DataView = IsolationInfoDataView;
  using Data_ = internal::IsolationInfo_Data;

  template <typename... Args>
  static IsolationInfoPtr New(Args&&... args) {
    return IsolationInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static IsolationInfoPtr From(const U& u) {
    return mojo::TypeConverter<IsolationInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, IsolationInfo>::Convert(*this);
  }


  IsolationInfo();

  IsolationInfo(
      IsolationInfoRequestType request_type,
      const ::scoped_refptr<const ::blink::SecurityOrigin>& top_frame_origin,
      const ::scoped_refptr<const ::blink::SecurityOrigin>& frame_origin,
      const absl::optional<::base::UnguessableToken>& nonce,
      const ::net::SiteForCookies& site_for_cookies,
      absl::optional<WTF::Vector<::blink::BlinkSchemefulSite>> party_context);


  ~IsolationInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = IsolationInfoPtr>
  IsolationInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, IsolationInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, IsolationInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        IsolationInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        IsolationInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::IsolationInfo_UnserializedMessageContext<
            UserType, IsolationInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<IsolationInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return IsolationInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::IsolationInfo_UnserializedMessageContext<
            UserType, IsolationInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<IsolationInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  IsolationInfoRequestType request_type;
  
  ::scoped_refptr<const ::blink::SecurityOrigin> top_frame_origin;
  
  ::scoped_refptr<const ::blink::SecurityOrigin> frame_origin;
  
  absl::optional<::base::UnguessableToken> nonce;
  
  ::net::SiteForCookies site_for_cookies;
  
  absl::optional<WTF::Vector<::blink::BlinkSchemefulSite>> party_context;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, IsolationInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, IsolationInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, IsolationInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, IsolationInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
IsolationInfoPtr IsolationInfo::Clone() const {
  return New(
      mojo::Clone(request_type),
      mojo::Clone(top_frame_origin),
      mojo::Clone(frame_origin),
      mojo::Clone(nonce),
      mojo::Clone(site_for_cookies),
      mojo::Clone(party_context)
  );
}

template <typename T, IsolationInfo::EnableIfSame<T>*>
bool IsolationInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->request_type, other_struct.request_type))
    return false;
  if (!mojo::Equals(this->top_frame_origin, other_struct.top_frame_origin))
    return false;
  if (!mojo::Equals(this->frame_origin, other_struct.frame_origin))
    return false;
  if (!mojo::Equals(this->nonce, other_struct.nonce))
    return false;
  if (!mojo::Equals(this->site_for_cookies, other_struct.site_for_cookies))
    return false;
  if (!mojo::Equals(this->party_context, other_struct.party_context))
    return false;
  return true;
}

template <typename T, IsolationInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.request_type < rhs.request_type)
    return true;
  if (rhs.request_type < lhs.request_type)
    return false;
  if (lhs.top_frame_origin < rhs.top_frame_origin)
    return true;
  if (rhs.top_frame_origin < lhs.top_frame_origin)
    return false;
  if (lhs.frame_origin < rhs.frame_origin)
    return true;
  if (rhs.frame_origin < lhs.frame_origin)
    return false;
  if (lhs.nonce < rhs.nonce)
    return true;
  if (rhs.nonce < lhs.nonce)
    return false;
  if (lhs.site_for_cookies < rhs.site_for_cookies)
    return true;
  if (rhs.site_for_cookies < lhs.site_for_cookies)
    return false;
  if (lhs.party_context < rhs.party_context)
    return true;
  if (rhs.party_context < lhs.party_context)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::IsolationInfo::DataView,
                                         ::network::mojom::blink::IsolationInfoPtr> {
  static bool IsNull(const ::network::mojom::blink::IsolationInfoPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::IsolationInfoPtr* output) { output->reset(); }

  static decltype(::network::mojom::blink::IsolationInfo::request_type) request_type(
      const ::network::mojom::blink::IsolationInfoPtr& input) {
    return input->request_type;
  }

  static const decltype(::network::mojom::blink::IsolationInfo::top_frame_origin)& top_frame_origin(
      const ::network::mojom::blink::IsolationInfoPtr& input) {
    return input->top_frame_origin;
  }

  static const decltype(::network::mojom::blink::IsolationInfo::frame_origin)& frame_origin(
      const ::network::mojom::blink::IsolationInfoPtr& input) {
    return input->frame_origin;
  }

  static const decltype(::network::mojom::blink::IsolationInfo::nonce)& nonce(
      const ::network::mojom::blink::IsolationInfoPtr& input) {
    return input->nonce;
  }

  static const decltype(::network::mojom::blink::IsolationInfo::site_for_cookies)& site_for_cookies(
      const ::network::mojom::blink::IsolationInfoPtr& input) {
    return input->site_for_cookies;
  }

  static const decltype(::network::mojom::blink::IsolationInfo::party_context)& party_context(
      const ::network::mojom::blink::IsolationInfoPtr& input) {
    return input->party_context;
  }

  static bool Read(::network::mojom::blink::IsolationInfo::DataView input, ::network::mojom::blink::IsolationInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_ISOLATION_INFO_MOJOM_BLINK_H_