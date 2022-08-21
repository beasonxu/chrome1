// components/services/storage/public/mojom/buckets/bucket_id.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_BUCKETS_BUCKET_ID_MOJOM_H_
#define COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_BUCKETS_BUCKET_ID_MOJOM_H_

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

#include "components/services/storage/public/mojom/buckets/bucket_id.mojom-shared.h"
#include "components/services/storage/public/mojom/buckets/bucket_id.mojom-forward.h"
#include <string>
#include <vector>




#include "components/services/storage/public/mojom/buckets/bucket_id_mojom_traits.h"
#include "components/services/storage/public/mojom/buckets/bucket_locator_mojom_traits.h"




namespace storage {
namespace mojom {





class  BucketId {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<BucketId, T>::value>;
  using DataView = BucketIdDataView;
  using Data_ = internal::BucketId_Data;

  template <typename... Args>
  static BucketIdPtr New(Args&&... args) {
    return BucketIdPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BucketIdPtr From(const U& u) {
    return mojo::TypeConverter<BucketIdPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BucketId>::Convert(*this);
  }


  BucketId();

  explicit BucketId(
      int64_t value);


  ~BucketId();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BucketIdPtr>
  BucketIdPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, BucketId::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, BucketId::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        BucketId::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BucketId::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BucketId_UnserializedMessageContext<
            UserType, BucketId::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<BucketId::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return BucketId::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BucketId_UnserializedMessageContext<
            UserType, BucketId::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BucketId::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  int64_t value;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, BucketId::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, BucketId::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, BucketId::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, BucketId::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}




template <typename StructPtrType>
BucketIdPtr BucketId::Clone() const {
  return New(
      mojo::Clone(value)
  );
}

template <typename T, BucketId::EnableIfSame<T>*>
bool BucketId::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  return true;
}

template <typename T, BucketId::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.value < rhs.value)
    return true;
  if (rhs.value < lhs.value)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace storage

namespace mojo {


template <>
struct  StructTraits<::storage::mojom::BucketId::DataView,
                                         ::storage::mojom::BucketIdPtr> {
  static bool IsNull(const ::storage::mojom::BucketIdPtr& input) { return !input; }
  static void SetToNull(::storage::mojom::BucketIdPtr* output) { output->reset(); }

  static decltype(::storage::mojom::BucketId::value) value(
      const ::storage::mojom::BucketIdPtr& input) {
    return input->value;
  }

  static bool Read(::storage::mojom::BucketId::DataView input, ::storage::mojom::BucketIdPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_SERVICES_STORAGE_PUBLIC_MOJOM_BUCKETS_BUCKET_ID_MOJOM_H_