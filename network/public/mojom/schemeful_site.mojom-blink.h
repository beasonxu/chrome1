// services/network/public/mojom/schemeful_site.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SCHEMEFUL_SITE_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SCHEMEFUL_SITE_MOJOM_BLINK_H_

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

#include "services/network/public/mojom/schemeful_site.mojom-shared.h"
#include "services/network/public/mojom/schemeful_site.mojom-blink-forward.h"
#include "url/mojom/origin.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "third_party/blink/renderer/platform/network/blink_schemeful_site_mojom_traits.h"
#include "third_party/blink/public/platform/web_common.h"




namespace network {
namespace mojom {
namespace blink {








class BLINK_PLATFORM_EXPORT SchemefulSite {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<SchemefulSite, T>::value>;
  using DataView = SchemefulSiteDataView;
  using Data_ = internal::SchemefulSite_Data;

  template <typename... Args>
  static SchemefulSitePtr New(Args&&... args) {
    return SchemefulSitePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SchemefulSitePtr From(const U& u) {
    return mojo::TypeConverter<SchemefulSitePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SchemefulSite>::Convert(*this);
  }


  SchemefulSite();

  explicit SchemefulSite(
      const ::scoped_refptr<const ::blink::SecurityOrigin>& site_as_origin);


  ~SchemefulSite();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SchemefulSitePtr>
  SchemefulSitePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, SchemefulSite::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, SchemefulSite::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SchemefulSite::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SchemefulSite::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SchemefulSite_UnserializedMessageContext<
            UserType, SchemefulSite::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<SchemefulSite::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SchemefulSite::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SchemefulSite_UnserializedMessageContext<
            UserType, SchemefulSite::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SchemefulSite::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::scoped_refptr<const ::blink::SecurityOrigin> site_as_origin;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, SchemefulSite::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, SchemefulSite::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, SchemefulSite::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, SchemefulSite::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
SchemefulSitePtr SchemefulSite::Clone() const {
  return New(
      mojo::Clone(site_as_origin)
  );
}

template <typename T, SchemefulSite::EnableIfSame<T>*>
bool SchemefulSite::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->site_as_origin, other_struct.site_as_origin))
    return false;
  return true;
}

template <typename T, SchemefulSite::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.site_as_origin < rhs.site_as_origin)
    return true;
  if (rhs.site_as_origin < lhs.site_as_origin)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::SchemefulSite::DataView,
                                         ::network::mojom::blink::SchemefulSitePtr> {
  static bool IsNull(const ::network::mojom::blink::SchemefulSitePtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::SchemefulSitePtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::SchemefulSite::site_as_origin)& site_as_origin(
      const ::network::mojom::blink::SchemefulSitePtr& input) {
    return input->site_as_origin;
  }

  static bool Read(::network::mojom::blink::SchemefulSite::DataView input, ::network::mojom::blink::SchemefulSitePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_SCHEMEFUL_SITE_MOJOM_BLINK_H_