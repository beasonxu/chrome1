// services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_BLINK_H_

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

#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-shared.h"
#include "services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "services/network/public/cpp/mutable_network_traffic_annotation_tag_mojom_traits.h"




namespace network {
namespace mojom {
namespace blink {





class  MutableNetworkTrafficAnnotationTag {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<MutableNetworkTrafficAnnotationTag, T>::value>;
  using DataView = MutableNetworkTrafficAnnotationTagDataView;
  using Data_ = internal::MutableNetworkTrafficAnnotationTag_Data;

  template <typename... Args>
  static MutableNetworkTrafficAnnotationTagPtr New(Args&&... args) {
    return MutableNetworkTrafficAnnotationTagPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static MutableNetworkTrafficAnnotationTagPtr From(const U& u) {
    return mojo::TypeConverter<MutableNetworkTrafficAnnotationTagPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, MutableNetworkTrafficAnnotationTag>::Convert(*this);
  }


  MutableNetworkTrafficAnnotationTag();

  explicit MutableNetworkTrafficAnnotationTag(
      uint32_t unique_id_hash_code);


  ~MutableNetworkTrafficAnnotationTag();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = MutableNetworkTrafficAnnotationTagPtr>
  MutableNetworkTrafficAnnotationTagPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, MutableNetworkTrafficAnnotationTag::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, MutableNetworkTrafficAnnotationTag::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        MutableNetworkTrafficAnnotationTag::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        MutableNetworkTrafficAnnotationTag::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::MutableNetworkTrafficAnnotationTag_UnserializedMessageContext<
            UserType, MutableNetworkTrafficAnnotationTag::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<MutableNetworkTrafficAnnotationTag::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return MutableNetworkTrafficAnnotationTag::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::MutableNetworkTrafficAnnotationTag_UnserializedMessageContext<
            UserType, MutableNetworkTrafficAnnotationTag::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<MutableNetworkTrafficAnnotationTag::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  uint32_t unique_id_hash_code;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, MutableNetworkTrafficAnnotationTag::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, MutableNetworkTrafficAnnotationTag::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, MutableNetworkTrafficAnnotationTag::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, MutableNetworkTrafficAnnotationTag::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}




template <typename StructPtrType>
MutableNetworkTrafficAnnotationTagPtr MutableNetworkTrafficAnnotationTag::Clone() const {
  return New(
      mojo::Clone(unique_id_hash_code)
  );
}

template <typename T, MutableNetworkTrafficAnnotationTag::EnableIfSame<T>*>
bool MutableNetworkTrafficAnnotationTag::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->unique_id_hash_code, other_struct.unique_id_hash_code))
    return false;
  return true;
}

template <typename T, MutableNetworkTrafficAnnotationTag::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.unique_id_hash_code < rhs.unique_id_hash_code)
    return true;
  if (rhs.unique_id_hash_code < lhs.unique_id_hash_code)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct  StructTraits<::network::mojom::blink::MutableNetworkTrafficAnnotationTag::DataView,
                                         ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr> {
  static bool IsNull(const ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr* output) { output->reset(); }

  static decltype(::network::mojom::blink::MutableNetworkTrafficAnnotationTag::unique_id_hash_code) unique_id_hash_code(
      const ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr& input) {
    return input->unique_id_hash_code;
  }

  static bool Read(::network::mojom::blink::MutableNetworkTrafficAnnotationTag::DataView input, ::network::mojom::blink::MutableNetworkTrafficAnnotationTagPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_MUTABLE_NETWORK_TRAFFIC_ANNOTATION_TAG_MOJOM_BLINK_H_