// ui/gfx/mojom/selection_bound.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJOM_SELECTION_BOUND_MOJOM_BLINK_H_
#define UI_GFX_MOJOM_SELECTION_BOUND_MOJOM_BLINK_H_

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

#include "ui/gfx/mojom/selection_bound.mojom-shared.h"
#include "ui/gfx/mojom/selection_bound.mojom-blink-forward.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "ui/gfx/mojom/selection_bound_mojom_traits.h"




namespace WTF {
struct gfx_mojom_internal_SelectionBoundType_DataHashFn {
  static unsigned GetHash(const ::gfx::mojom::SelectionBoundType& value) {
    using utype = std::underlying_type<::gfx::mojom::SelectionBoundType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gfx::mojom::SelectionBoundType& left, const ::gfx::mojom::SelectionBoundType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gfx::mojom::SelectionBoundType>
    : public GenericHashTraits<::gfx::mojom::SelectionBoundType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::gfx::mojom::SelectionBoundType EmptyValue() { return static_cast<::gfx::mojom::SelectionBoundType>(-1000000); }
  static void ConstructDeletedValue(::gfx::mojom::SelectionBoundType& slot, bool) {
    slot = static_cast<::gfx::mojom::SelectionBoundType>(-1000001);
  }
  static bool IsDeletedValue(const ::gfx::mojom::SelectionBoundType& value) {
    return value == static_cast<::gfx::mojom::SelectionBoundType>(-1000001);
  }
};
}  // namespace WTF


namespace gfx {
namespace mojom {
namespace blink {








class  SelectionBound {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<SelectionBound, T>::value>;
  using DataView = SelectionBoundDataView;
  using Data_ = internal::SelectionBound_Data;

  template <typename... Args>
  static SelectionBoundPtr New(Args&&... args) {
    return SelectionBoundPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SelectionBoundPtr From(const U& u) {
    return mojo::TypeConverter<SelectionBoundPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SelectionBound>::Convert(*this);
  }


  SelectionBound();

  SelectionBound(
      SelectionBoundType type,
      const ::gfx::PointF& edge_start,
      const ::gfx::PointF& edge_end,
      const ::gfx::PointF& visible_edge_start,
      const ::gfx::PointF& visible_edge_end,
      bool visible);


  ~SelectionBound();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SelectionBoundPtr>
  SelectionBoundPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, SelectionBound::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, SelectionBound::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SelectionBound::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SelectionBound::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SelectionBound_UnserializedMessageContext<
            UserType, SelectionBound::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<SelectionBound::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return SelectionBound::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SelectionBound_UnserializedMessageContext<
            UserType, SelectionBound::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SelectionBound::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  SelectionBoundType type;
  
  ::gfx::PointF edge_start;
  
  ::gfx::PointF edge_end;
  
  ::gfx::PointF visible_edge_start;
  
  ::gfx::PointF visible_edge_end;
  
  bool visible;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, SelectionBound::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, SelectionBound::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, SelectionBound::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, SelectionBound::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
SelectionBoundPtr SelectionBound::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(edge_start),
      mojo::Clone(edge_end),
      mojo::Clone(visible_edge_start),
      mojo::Clone(visible_edge_end),
      mojo::Clone(visible)
  );
}

template <typename T, SelectionBound::EnableIfSame<T>*>
bool SelectionBound::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->edge_start, other_struct.edge_start))
    return false;
  if (!mojo::Equals(this->edge_end, other_struct.edge_end))
    return false;
  if (!mojo::Equals(this->visible_edge_start, other_struct.visible_edge_start))
    return false;
  if (!mojo::Equals(this->visible_edge_end, other_struct.visible_edge_end))
    return false;
  if (!mojo::Equals(this->visible, other_struct.visible))
    return false;
  return true;
}

template <typename T, SelectionBound::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.type < rhs.type)
    return true;
  if (rhs.type < lhs.type)
    return false;
  if (lhs.edge_start < rhs.edge_start)
    return true;
  if (rhs.edge_start < lhs.edge_start)
    return false;
  if (lhs.edge_end < rhs.edge_end)
    return true;
  if (rhs.edge_end < lhs.edge_end)
    return false;
  if (lhs.visible_edge_start < rhs.visible_edge_start)
    return true;
  if (rhs.visible_edge_start < lhs.visible_edge_start)
    return false;
  if (lhs.visible_edge_end < rhs.visible_edge_end)
    return true;
  if (rhs.visible_edge_end < lhs.visible_edge_end)
    return false;
  if (lhs.visible < rhs.visible)
    return true;
  if (rhs.visible < lhs.visible)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::blink::SelectionBound::DataView,
                                         ::gfx::mojom::blink::SelectionBoundPtr> {
  static bool IsNull(const ::gfx::mojom::blink::SelectionBoundPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::blink::SelectionBoundPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::blink::SelectionBound::type) type(
      const ::gfx::mojom::blink::SelectionBoundPtr& input) {
    return input->type;
  }

  static const decltype(::gfx::mojom::blink::SelectionBound::edge_start)& edge_start(
      const ::gfx::mojom::blink::SelectionBoundPtr& input) {
    return input->edge_start;
  }

  static const decltype(::gfx::mojom::blink::SelectionBound::edge_end)& edge_end(
      const ::gfx::mojom::blink::SelectionBoundPtr& input) {
    return input->edge_end;
  }

  static const decltype(::gfx::mojom::blink::SelectionBound::visible_edge_start)& visible_edge_start(
      const ::gfx::mojom::blink::SelectionBoundPtr& input) {
    return input->visible_edge_start;
  }

  static const decltype(::gfx::mojom::blink::SelectionBound::visible_edge_end)& visible_edge_end(
      const ::gfx::mojom::blink::SelectionBoundPtr& input) {
    return input->visible_edge_end;
  }

  static decltype(::gfx::mojom::blink::SelectionBound::visible) visible(
      const ::gfx::mojom::blink::SelectionBoundPtr& input) {
    return input->visible;
  }

  static bool Read(::gfx::mojom::blink::SelectionBound::DataView input, ::gfx::mojom::blink::SelectionBoundPtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_MOJOM_SELECTION_BOUND_MOJOM_BLINK_H_