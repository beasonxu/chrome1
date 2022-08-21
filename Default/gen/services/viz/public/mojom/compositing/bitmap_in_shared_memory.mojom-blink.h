// services/viz/public/mojom/compositing/bitmap_in_shared_memory.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_BITMAP_IN_SHARED_MEMORY_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_BITMAP_IN_SHARED_MEMORY_MOJOM_BLINK_H_

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

#include "services/viz/public/mojom/compositing/bitmap_in_shared_memory.mojom-shared.h"
#include "services/viz/public/mojom/compositing/bitmap_in_shared_memory.mojom-blink-forward.h"
#include "mojo/public/mojom/base/shared_memory.mojom-blink.h"
#include "skia/public/mojom/image_info.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/platform/web_common.h"




namespace viz {
namespace mojom {
namespace blink {








class BLINK_PLATFORM_EXPORT BitmapInSharedMemory {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<BitmapInSharedMemory, T>::value>;
  using DataView = BitmapInSharedMemoryDataView;
  using Data_ = internal::BitmapInSharedMemory_Data;

  template <typename... Args>
  static BitmapInSharedMemoryPtr New(Args&&... args) {
    return BitmapInSharedMemoryPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static BitmapInSharedMemoryPtr From(const U& u) {
    return mojo::TypeConverter<BitmapInSharedMemoryPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, BitmapInSharedMemory>::Convert(*this);
  }


  BitmapInSharedMemory();

  BitmapInSharedMemory(
      const ::SkImageInfo& image_info,
      uint64_t row_bytes,
      ::base::WritableSharedMemoryRegion pixels);

BitmapInSharedMemory(const BitmapInSharedMemory&) = delete;
BitmapInSharedMemory& operator=(const BitmapInSharedMemory&) = delete;

  ~BitmapInSharedMemory();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = BitmapInSharedMemoryPtr>
  BitmapInSharedMemoryPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, BitmapInSharedMemory::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, BitmapInSharedMemory::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        BitmapInSharedMemory::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::BitmapInSharedMemory_UnserializedMessageContext<
            UserType, BitmapInSharedMemory::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<BitmapInSharedMemory::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return BitmapInSharedMemory::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::BitmapInSharedMemory_UnserializedMessageContext<
            UserType, BitmapInSharedMemory::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<BitmapInSharedMemory::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::SkImageInfo image_info;
  
  uint64_t row_bytes;
  
  ::base::WritableSharedMemoryRegion pixels;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, BitmapInSharedMemory::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, BitmapInSharedMemory::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, BitmapInSharedMemory::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, BitmapInSharedMemory::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
BitmapInSharedMemoryPtr BitmapInSharedMemory::Clone() const {
  return New(
      mojo::Clone(image_info),
      mojo::Clone(row_bytes),
      mojo::Clone(pixels)
  );
}

template <typename T, BitmapInSharedMemory::EnableIfSame<T>*>
bool BitmapInSharedMemory::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->image_info, other_struct.image_info))
    return false;
  if (!mojo::Equals(this->row_bytes, other_struct.row_bytes))
    return false;
  if (!mojo::Equals(this->pixels, other_struct.pixels))
    return false;
  return true;
}

template <typename T, BitmapInSharedMemory::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.image_info < rhs.image_info)
    return true;
  if (rhs.image_info < lhs.image_info)
    return false;
  if (lhs.row_bytes < rhs.row_bytes)
    return true;
  if (rhs.row_bytes < lhs.row_bytes)
    return false;
  if (lhs.pixels < rhs.pixels)
    return true;
  if (rhs.pixels < lhs.pixels)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::viz::mojom::blink::BitmapInSharedMemory::DataView,
                                         ::viz::mojom::blink::BitmapInSharedMemoryPtr> {
  static bool IsNull(const ::viz::mojom::blink::BitmapInSharedMemoryPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::BitmapInSharedMemoryPtr* output) { output->reset(); }

  static const decltype(::viz::mojom::blink::BitmapInSharedMemory::image_info)& image_info(
      const ::viz::mojom::blink::BitmapInSharedMemoryPtr& input) {
    return input->image_info;
  }

  static decltype(::viz::mojom::blink::BitmapInSharedMemory::row_bytes) row_bytes(
      const ::viz::mojom::blink::BitmapInSharedMemoryPtr& input) {
    return input->row_bytes;
  }

  static  decltype(::viz::mojom::blink::BitmapInSharedMemory::pixels)& pixels(
       ::viz::mojom::blink::BitmapInSharedMemoryPtr& input) {
    return input->pixels;
  }

  static bool Read(::viz::mojom::blink::BitmapInSharedMemory::DataView input, ::viz::mojom::blink::BitmapInSharedMemoryPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_BITMAP_IN_SHARED_MEMORY_MOJOM_BLINK_H_