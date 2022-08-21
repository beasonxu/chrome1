// mojo/public/mojom/base/byte_string.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_BYTE_STRING_MOJOM_BLINK_H_
#define MOJO_PUBLIC_MOJOM_BASE_BYTE_STRING_MOJOM_BLINK_H_

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

#include "mojo/public/mojom/base/byte_string.mojom-shared.h"
#include "mojo/public/mojom/base/byte_string.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "mojo/public/cpp/base/byte_string_mojom_traits.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {
namespace blink {








class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) ByteString {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ByteString, T>::value>;
  using DataView = ByteStringDataView;
  using Data_ = internal::ByteString_Data;

  template <typename... Args>
  static ByteStringPtr New(Args&&... args) {
    return ByteStringPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ByteStringPtr From(const U& u) {
    return mojo::TypeConverter<ByteStringPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ByteString>::Convert(*this);
  }


  ByteString();

  explicit ByteString(
      WTF::Vector<uint8_t> data);


  ~ByteString();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ByteStringPtr>
  ByteStringPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ByteString::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ByteString::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ByteString::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ByteString::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ByteString_UnserializedMessageContext<
            UserType, ByteString::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ByteString::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ByteString::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ByteString_UnserializedMessageContext<
            UserType, ByteString::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ByteString::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::Vector<uint8_t> data;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ByteString::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ByteString::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ByteString::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ByteString::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
ByteStringPtr ByteString::Clone() const {
  return New(
      mojo::Clone(data)
  );
}

template <typename T, ByteString::EnableIfSame<T>*>
bool ByteString::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->data, other_struct.data))
    return false;
  return true;
}

template <typename T, ByteString::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.data < rhs.data)
    return true;
  if (rhs.data < lhs.data)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) StructTraits<::mojo_base::mojom::blink::ByteString::DataView,
                                         ::mojo_base::mojom::blink::ByteStringPtr> {
  static bool IsNull(const ::mojo_base::mojom::blink::ByteStringPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::blink::ByteStringPtr* output) { output->reset(); }

  static const decltype(::mojo_base::mojom::blink::ByteString::data)& data(
      const ::mojo_base::mojom::blink::ByteStringPtr& input) {
    return input->data;
  }

  static bool Read(::mojo_base::mojom::blink::ByteString::DataView input, ::mojo_base::mojom::blink::ByteStringPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_BYTE_STRING_MOJOM_BLINK_H_