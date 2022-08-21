// ui/gfx/mojom/color_space.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJOM_COLOR_SPACE_MOJOM_BLINK_H_
#define UI_GFX_MOJOM_COLOR_SPACE_MOJOM_BLINK_H_

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

#include "ui/gfx/mojom/color_space.mojom-shared.h"
#include "ui/gfx/mojom/color_space.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "ui/gfx/mojom/color_space_mojom_traits.h"




namespace WTF {
struct gfx_mojom_internal_ColorSpacePrimaryID_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::ColorSpacePrimaryID& value) {
    using utype = std::underlying_type<::gfx::mojom::ColorSpacePrimaryID>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::ColorSpacePrimaryID& left, const ::gfx::mojom::ColorSpacePrimaryID& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gfx::mojom::ColorSpacePrimaryID>
    : public GenericHashTraits<::gfx::mojom::ColorSpacePrimaryID> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::gfx::mojom::ColorSpacePrimaryID EmptyValue() { return static_cast<::gfx::mojom::ColorSpacePrimaryID>(-1000000); }
  static void ConstructDeletedValue(::gfx::mojom::ColorSpacePrimaryID& slot, bool) {
    slot = static_cast<::gfx::mojom::ColorSpacePrimaryID>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::ColorSpacePrimaryID& value) {
    return value == static_cast<::gfx::mojom::ColorSpacePrimaryID>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct gfx_mojom_internal_ColorSpaceTransferID_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::ColorSpaceTransferID& value) {
    using utype = std::underlying_type<::gfx::mojom::ColorSpaceTransferID>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::ColorSpaceTransferID& left, const ::gfx::mojom::ColorSpaceTransferID& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gfx::mojom::ColorSpaceTransferID>
    : public GenericHashTraits<::gfx::mojom::ColorSpaceTransferID> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::gfx::mojom::ColorSpaceTransferID EmptyValue() { return static_cast<::gfx::mojom::ColorSpaceTransferID>(-1000000); }
  static void ConstructDeletedValue(::gfx::mojom::ColorSpaceTransferID& slot, bool) {
    slot = static_cast<::gfx::mojom::ColorSpaceTransferID>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::ColorSpaceTransferID& value) {
    return value == static_cast<::gfx::mojom::ColorSpaceTransferID>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct gfx_mojom_internal_ColorSpaceMatrixID_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::ColorSpaceMatrixID& value) {
    using utype = std::underlying_type<::gfx::mojom::ColorSpaceMatrixID>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::ColorSpaceMatrixID& left, const ::gfx::mojom::ColorSpaceMatrixID& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gfx::mojom::ColorSpaceMatrixID>
    : public GenericHashTraits<::gfx::mojom::ColorSpaceMatrixID> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::gfx::mojom::ColorSpaceMatrixID EmptyValue() { return static_cast<::gfx::mojom::ColorSpaceMatrixID>(-1000000); }
  static void ConstructDeletedValue(::gfx::mojom::ColorSpaceMatrixID& slot, bool) {
    slot = static_cast<::gfx::mojom::ColorSpaceMatrixID>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::ColorSpaceMatrixID& value) {
    return value == static_cast<::gfx::mojom::ColorSpaceMatrixID>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct gfx_mojom_internal_ColorSpaceRangeID_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::ColorSpaceRangeID& value) {
    using utype = std::underlying_type<::gfx::mojom::ColorSpaceRangeID>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::ColorSpaceRangeID& left, const ::gfx::mojom::ColorSpaceRangeID& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gfx::mojom::ColorSpaceRangeID>
    : public GenericHashTraits<::gfx::mojom::ColorSpaceRangeID> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::gfx::mojom::ColorSpaceRangeID EmptyValue() { return static_cast<::gfx::mojom::ColorSpaceRangeID>(-1000000); }
  static void ConstructDeletedValue(::gfx::mojom::ColorSpaceRangeID& slot, bool) {
    slot = static_cast<::gfx::mojom::ColorSpaceRangeID>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::ColorSpaceRangeID& value) {
    return value == static_cast<::gfx::mojom::ColorSpaceRangeID>(-1000001);
  }
};
}  // namespace WTF


namespace gfx {
namespace mojom {
namespace blink {








class  ColorSpace {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ColorSpace, T>::value>;
  using DataView = ColorSpaceDataView;
  using Data_ = internal::ColorSpace_Data;

  template <typename... Args>
  static ColorSpacePtr New(Args&&... args) {
    return ColorSpacePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ColorSpacePtr From(const U& u) {
    return mojo::TypeConverter<ColorSpacePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ColorSpace>::Convert(*this);
  }


  ColorSpace();

  ColorSpace(
      ColorSpacePrimaryID primaries,
      ColorSpaceTransferID transfer,
      ColorSpaceMatrixID matrix,
      ColorSpaceRangeID range,
      WTF::Vector<float> custom_primary_matrix,
      WTF::Vector<float> transfer_params);


  ~ColorSpace();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ColorSpacePtr>
  ColorSpacePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ColorSpace::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ColorSpace::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ColorSpace::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ColorSpace::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ColorSpace_UnserializedMessageContext<
            UserType, ColorSpace::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ColorSpace::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ColorSpace::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ColorSpace_UnserializedMessageContext<
            UserType, ColorSpace::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ColorSpace::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ColorSpacePrimaryID primaries;
  
  ColorSpaceTransferID transfer;
  
  ColorSpaceMatrixID matrix;
  
  ColorSpaceRangeID range;
  
  WTF::Vector<float> custom_primary_matrix;
  
  WTF::Vector<float> transfer_params;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ColorSpace::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ColorSpace::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ColorSpace::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ColorSpace::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
ColorSpacePtr ColorSpace::Clone() const {
  return New(
      mojo::Clone(primaries),
      mojo::Clone(transfer),
      mojo::Clone(matrix),
      mojo::Clone(range),
      mojo::Clone(custom_primary_matrix),
      mojo::Clone(transfer_params)
  );
}

template <typename T, ColorSpace::EnableIfSame<T>*>
bool ColorSpace::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->primaries, other_struct.primaries))
    return false;
  if (!mojo::Equals(this->transfer, other_struct.transfer))
    return false;
  if (!mojo::Equals(this->matrix, other_struct.matrix))
    return false;
  if (!mojo::Equals(this->range, other_struct.range))
    return false;
  if (!mojo::Equals(this->custom_primary_matrix, other_struct.custom_primary_matrix))
    return false;
  if (!mojo::Equals(this->transfer_params, other_struct.transfer_params))
    return false;
  return true;
}

template <typename T, ColorSpace::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.primaries < rhs.primaries)
    return true;
  if (rhs.primaries < lhs.primaries)
    return false;
  if (lhs.transfer < rhs.transfer)
    return true;
  if (rhs.transfer < lhs.transfer)
    return false;
  if (lhs.matrix < rhs.matrix)
    return true;
  if (rhs.matrix < lhs.matrix)
    return false;
  if (lhs.range < rhs.range)
    return true;
  if (rhs.range < lhs.range)
    return false;
  if (lhs.custom_primary_matrix < rhs.custom_primary_matrix)
    return true;
  if (rhs.custom_primary_matrix < lhs.custom_primary_matrix)
    return false;
  if (lhs.transfer_params < rhs.transfer_params)
    return true;
  if (rhs.transfer_params < lhs.transfer_params)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::blink::ColorSpace::DataView,
                                         ::gfx::mojom::blink::ColorSpacePtr> {
  static bool IsNull(const ::gfx::mojom::blink::ColorSpacePtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::blink::ColorSpacePtr* output) { output->reset(); }

  static decltype(::gfx::mojom::blink::ColorSpace::primaries) primaries(
      const ::gfx::mojom::blink::ColorSpacePtr& input) {
    return input->primaries;
  }

  static decltype(::gfx::mojom::blink::ColorSpace::transfer) transfer(
      const ::gfx::mojom::blink::ColorSpacePtr& input) {
    return input->transfer;
  }

  static decltype(::gfx::mojom::blink::ColorSpace::matrix) matrix(
      const ::gfx::mojom::blink::ColorSpacePtr& input) {
    return input->matrix;
  }

  static decltype(::gfx::mojom::blink::ColorSpace::range) range(
      const ::gfx::mojom::blink::ColorSpacePtr& input) {
    return input->range;
  }

  static const decltype(::gfx::mojom::blink::ColorSpace::custom_primary_matrix)& custom_primary_matrix(
      const ::gfx::mojom::blink::ColorSpacePtr& input) {
    return input->custom_primary_matrix;
  }

  static const decltype(::gfx::mojom::blink::ColorSpace::transfer_params)& transfer_params(
      const ::gfx::mojom::blink::ColorSpacePtr& input) {
    return input->transfer_params;
  }

  static bool Read(::gfx::mojom::blink::ColorSpace::DataView input, ::gfx::mojom::blink::ColorSpacePtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_MOJOM_COLOR_SPACE_MOJOM_BLINK_H_