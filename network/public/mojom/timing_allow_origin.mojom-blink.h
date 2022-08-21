// services/network/public/mojom/timing_allow_origin.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TIMING_ALLOW_ORIGIN_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TIMING_ALLOW_ORIGIN_MOJOM_BLINK_H_

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

#include "services/network/public/mojom/timing_allow_origin.mojom-shared.h"
#include "services/network/public/mojom/timing_allow_origin.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "third_party/blink/public/platform/web_common.h"




namespace network {
namespace mojom {
namespace blink {





class BLINK_PLATFORM_EXPORT TimingAllowOrigin {
 public:
  using DataView = TimingAllowOriginDataView;
  using Data_ = internal::TimingAllowOrigin_Data;
  using Tag = Data_::TimingAllowOrigin_Tag;

  template <typename... Args>
  static TimingAllowOriginPtr New(Args&&... args) {
    static_assert(
        sizeof...(args) < 0,
        "Do not use Union::New(); to create a union of a given subtype, use "
        "New<SubType>(), not New() followed by set_<sub_type>(). To represent "
        "an empty union, mark the field or parameter as nullable in the mojom "
        "definition.");
  }
  // Construct an instance holding |serialized_origins|.
  static TimingAllowOriginPtr
  NewSerializedOrigins(
      WTF::Vector<WTF::String> serialized_origins) {
    auto result = TimingAllowOriginPtr(absl::in_place);
    result->set_serialized_origins(std::move(serialized_origins));
    return result;
  }
  // Construct an instance holding |all|.
  static TimingAllowOriginPtr
  NewAll(
      uint8_t all) {
    auto result = TimingAllowOriginPtr(absl::in_place);
    result->set_all(std::move(all));
    return result;
  }

  template <typename U>
  static TimingAllowOriginPtr From(const U& u) {
    return mojo::TypeConverter<TimingAllowOriginPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TimingAllowOrigin>::Convert(*this);
  }

  TimingAllowOrigin();
  ~TimingAllowOrigin();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename UnionPtrType = TimingAllowOriginPtr>
  TimingAllowOriginPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T,
            typename std::enable_if<std::is_same<
                T, TimingAllowOrigin>::value>::type* = nullptr>
  bool Equals(const T& other) const;

  template <typename T,
            typename std::enable_if<std::is_same<
                T, TimingAllowOrigin>::value>::type* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }

  Tag which() const {
    return tag_;
  }


  
  bool is_serialized_origins() const { return tag_ == Tag::kSerializedOrigins; }

  
  WTF::Vector<WTF::String>& get_serialized_origins() const {
    CHECK(tag_ == Tag::kSerializedOrigins);
    return *(data_.serialized_origins);
  }

  
  void set_serialized_origins(
      WTF::Vector<WTF::String> serialized_origins);
  
  bool is_all() const { return tag_ == Tag::kAll; }

  
  uint8_t get_all() const {
    CHECK(tag_ == Tag::kAll);
    return data_.all;
  }

  
  void set_all(
      uint8_t all);

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TimingAllowOrigin::DataView>(input);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    return mojo::internal::DeserializeImpl<TimingAllowOrigin::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

 private:
  union Union_ {
    Union_() = default;
    ~Union_() = default;
    WTF::Vector<WTF::String>* serialized_origins;
    uint8_t all;
  };

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  void DestroyActive();
  Tag tag_;
  Union_ data_;
};

template <typename UnionPtrType>
TimingAllowOriginPtr TimingAllowOrigin::Clone() const {
  switch (tag_) {
    case Tag::kSerializedOrigins:
      return NewSerializedOrigins(
          mojo::Clone(*data_.serialized_origins));
    case Tag::kAll:
      return NewAll(
          mojo::Clone(data_.all));
  }
  return nullptr;
}

template <typename T,
          typename std::enable_if<std::is_same<
              T, TimingAllowOrigin>::value>::type*>
bool TimingAllowOrigin::Equals(const T& other) const {
  if (tag_ != other.which())
    return false;

  switch (tag_) {
    case Tag::kSerializedOrigins:
      return mojo::Equals(*(data_.serialized_origins), *(other.data_.serialized_origins));
    case Tag::kAll:
      return mojo::Equals(data_.all, other.data_.all);
  }

  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT UnionTraits<::network::mojom::blink::TimingAllowOrigin::DataView,
                                        ::network::mojom::blink::TimingAllowOriginPtr> {
  static bool IsNull(const ::network::mojom::blink::TimingAllowOriginPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::TimingAllowOriginPtr* output) { output->reset(); }

  static ::network::mojom::blink::TimingAllowOrigin::Tag GetTag(const ::network::mojom::blink::TimingAllowOriginPtr& input) {
    return input->which();
  }

  static const WTF::Vector<WTF::String>& serialized_origins(const ::network::mojom::blink::TimingAllowOriginPtr& input) {
    return input->get_serialized_origins();
  }

  static  uint8_t all(const ::network::mojom::blink::TimingAllowOriginPtr& input) {
    return input->get_all();
  }

  static bool Read(::network::mojom::blink::TimingAllowOrigin::DataView input, ::network::mojom::blink::TimingAllowOriginPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TIMING_ALLOW_ORIGIN_MOJOM_BLINK_H_