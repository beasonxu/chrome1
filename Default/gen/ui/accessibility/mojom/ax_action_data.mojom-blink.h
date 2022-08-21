// ui/accessibility/mojom/ax_action_data.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_ACCESSIBILITY_MOJOM_AX_ACTION_DATA_MOJOM_BLINK_H_
#define UI_ACCESSIBILITY_MOJOM_AX_ACTION_DATA_MOJOM_BLINK_H_

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

#include "ui/accessibility/mojom/ax_action_data.mojom-shared.h"
#include "ui/accessibility/mojom/ax_action_data.mojom-blink-forward.h"
#include "ui/accessibility/ax_enums.mojom-blink-forward.h"
#include "ui/accessibility/mojom/ax_tree_id.mojom-blink.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"








namespace ax {
namespace mojom {
namespace blink {








class  AXActionData {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<AXActionData, T>::value>;
  using DataView = AXActionDataDataView;
  using Data_ = internal::AXActionData_Data;

  template <typename... Args>
  static AXActionDataPtr New(Args&&... args) {
    return AXActionDataPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AXActionDataPtr From(const U& u) {
    return mojo::TypeConverter<AXActionDataPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AXActionData>::Convert(*this);
  }


  AXActionData();

  AXActionData(
      ::ax::mojom::blink::Action action,
      ::ax::mojom::blink::AXTreeIDPtr target_tree_id,
      const WTF::String& source_extension_id,
      int32_t target_node_id,
      int32_t request_id,
      int32_t flags,
      int32_t anchor_node_id,
      int32_t anchor_offset,
      int32_t focus_node_id,
      int32_t focus_offset,
      int32_t custom_action_id,
      const ::gfx::Rect& target_rect,
      const ::gfx::Point& target_point,
      const WTF::String& value,
      ::ax::mojom::blink::Event hit_test_event_to_fire,
      ::ax::mojom::blink::ScrollAlignment horizontal_scroll_alignment,
      ::ax::mojom::blink::ScrollAlignment vertical_scroll_alignment,
      ::ax::mojom::blink::ScrollBehavior scroll_behavior);

AXActionData(const AXActionData&) = delete;
AXActionData& operator=(const AXActionData&) = delete;

  ~AXActionData();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AXActionDataPtr>
  AXActionDataPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, AXActionData::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, AXActionData::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AXActionData::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AXActionData::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AXActionData_UnserializedMessageContext<
            UserType, AXActionData::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<AXActionData::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return AXActionData::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AXActionData_UnserializedMessageContext<
            UserType, AXActionData::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AXActionData::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::ax::mojom::blink::Action action;
  
  ::ax::mojom::blink::AXTreeIDPtr target_tree_id;
  
  WTF::String source_extension_id;
  
  int32_t target_node_id;
  
  int32_t request_id;
  
  int32_t flags;
  
  int32_t anchor_node_id;
  
  int32_t anchor_offset;
  
  int32_t focus_node_id;
  
  int32_t focus_offset;
  
  int32_t custom_action_id;
  
  ::gfx::Rect target_rect;
  
  ::gfx::Point target_point;
  
  WTF::String value;
  
  ::ax::mojom::blink::Event hit_test_event_to_fire;
  
  ::ax::mojom::blink::ScrollAlignment horizontal_scroll_alignment;
  
  ::ax::mojom::blink::ScrollAlignment vertical_scroll_alignment;
  
  ::ax::mojom::blink::ScrollBehavior scroll_behavior;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, AXActionData::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, AXActionData::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, AXActionData::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, AXActionData::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
AXActionDataPtr AXActionData::Clone() const {
  return New(
      mojo::Clone(action),
      mojo::Clone(target_tree_id),
      mojo::Clone(source_extension_id),
      mojo::Clone(target_node_id),
      mojo::Clone(request_id),
      mojo::Clone(flags),
      mojo::Clone(anchor_node_id),
      mojo::Clone(anchor_offset),
      mojo::Clone(focus_node_id),
      mojo::Clone(focus_offset),
      mojo::Clone(custom_action_id),
      mojo::Clone(target_rect),
      mojo::Clone(target_point),
      mojo::Clone(value),
      mojo::Clone(hit_test_event_to_fire),
      mojo::Clone(horizontal_scroll_alignment),
      mojo::Clone(vertical_scroll_alignment),
      mojo::Clone(scroll_behavior)
  );
}

template <typename T, AXActionData::EnableIfSame<T>*>
bool AXActionData::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->action, other_struct.action))
    return false;
  if (!mojo::Equals(this->target_tree_id, other_struct.target_tree_id))
    return false;
  if (!mojo::Equals(this->source_extension_id, other_struct.source_extension_id))
    return false;
  if (!mojo::Equals(this->target_node_id, other_struct.target_node_id))
    return false;
  if (!mojo::Equals(this->request_id, other_struct.request_id))
    return false;
  if (!mojo::Equals(this->flags, other_struct.flags))
    return false;
  if (!mojo::Equals(this->anchor_node_id, other_struct.anchor_node_id))
    return false;
  if (!mojo::Equals(this->anchor_offset, other_struct.anchor_offset))
    return false;
  if (!mojo::Equals(this->focus_node_id, other_struct.focus_node_id))
    return false;
  if (!mojo::Equals(this->focus_offset, other_struct.focus_offset))
    return false;
  if (!mojo::Equals(this->custom_action_id, other_struct.custom_action_id))
    return false;
  if (!mojo::Equals(this->target_rect, other_struct.target_rect))
    return false;
  if (!mojo::Equals(this->target_point, other_struct.target_point))
    return false;
  if (!mojo::Equals(this->value, other_struct.value))
    return false;
  if (!mojo::Equals(this->hit_test_event_to_fire, other_struct.hit_test_event_to_fire))
    return false;
  if (!mojo::Equals(this->horizontal_scroll_alignment, other_struct.horizontal_scroll_alignment))
    return false;
  if (!mojo::Equals(this->vertical_scroll_alignment, other_struct.vertical_scroll_alignment))
    return false;
  if (!mojo::Equals(this->scroll_behavior, other_struct.scroll_behavior))
    return false;
  return true;
}

template <typename T, AXActionData::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.action < rhs.action)
    return true;
  if (rhs.action < lhs.action)
    return false;
  if (lhs.target_tree_id < rhs.target_tree_id)
    return true;
  if (rhs.target_tree_id < lhs.target_tree_id)
    return false;
  if (lhs.source_extension_id < rhs.source_extension_id)
    return true;
  if (rhs.source_extension_id < lhs.source_extension_id)
    return false;
  if (lhs.target_node_id < rhs.target_node_id)
    return true;
  if (rhs.target_node_id < lhs.target_node_id)
    return false;
  if (lhs.request_id < rhs.request_id)
    return true;
  if (rhs.request_id < lhs.request_id)
    return false;
  if (lhs.flags < rhs.flags)
    return true;
  if (rhs.flags < lhs.flags)
    return false;
  if (lhs.anchor_node_id < rhs.anchor_node_id)
    return true;
  if (rhs.anchor_node_id < lhs.anchor_node_id)
    return false;
  if (lhs.anchor_offset < rhs.anchor_offset)
    return true;
  if (rhs.anchor_offset < lhs.anchor_offset)
    return false;
  if (lhs.focus_node_id < rhs.focus_node_id)
    return true;
  if (rhs.focus_node_id < lhs.focus_node_id)
    return false;
  if (lhs.focus_offset < rhs.focus_offset)
    return true;
  if (rhs.focus_offset < lhs.focus_offset)
    return false;
  if (lhs.custom_action_id < rhs.custom_action_id)
    return true;
  if (rhs.custom_action_id < lhs.custom_action_id)
    return false;
  if (lhs.target_rect < rhs.target_rect)
    return true;
  if (rhs.target_rect < lhs.target_rect)
    return false;
  if (lhs.target_point < rhs.target_point)
    return true;
  if (rhs.target_point < lhs.target_point)
    return false;
  if (lhs.value < rhs.value)
    return true;
  if (rhs.value < lhs.value)
    return false;
  if (lhs.hit_test_event_to_fire < rhs.hit_test_event_to_fire)
    return true;
  if (rhs.hit_test_event_to_fire < lhs.hit_test_event_to_fire)
    return false;
  if (lhs.horizontal_scroll_alignment < rhs.horizontal_scroll_alignment)
    return true;
  if (rhs.horizontal_scroll_alignment < lhs.horizontal_scroll_alignment)
    return false;
  if (lhs.vertical_scroll_alignment < rhs.vertical_scroll_alignment)
    return true;
  if (rhs.vertical_scroll_alignment < lhs.vertical_scroll_alignment)
    return false;
  if (lhs.scroll_behavior < rhs.scroll_behavior)
    return true;
  if (rhs.scroll_behavior < lhs.scroll_behavior)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace ax

namespace mojo {


template <>
struct  StructTraits<::ax::mojom::blink::AXActionData::DataView,
                                         ::ax::mojom::blink::AXActionDataPtr> {
  static bool IsNull(const ::ax::mojom::blink::AXActionDataPtr& input) { return !input; }
  static void SetToNull(::ax::mojom::blink::AXActionDataPtr* output) { output->reset(); }

  static decltype(::ax::mojom::blink::AXActionData::action) action(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->action;
  }

  static const decltype(::ax::mojom::blink::AXActionData::target_tree_id)& target_tree_id(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->target_tree_id;
  }

  static const decltype(::ax::mojom::blink::AXActionData::source_extension_id)& source_extension_id(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->source_extension_id;
  }

  static decltype(::ax::mojom::blink::AXActionData::target_node_id) target_node_id(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->target_node_id;
  }

  static decltype(::ax::mojom::blink::AXActionData::request_id) request_id(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->request_id;
  }

  static decltype(::ax::mojom::blink::AXActionData::flags) flags(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->flags;
  }

  static decltype(::ax::mojom::blink::AXActionData::anchor_node_id) anchor_node_id(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->anchor_node_id;
  }

  static decltype(::ax::mojom::blink::AXActionData::anchor_offset) anchor_offset(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->anchor_offset;
  }

  static decltype(::ax::mojom::blink::AXActionData::focus_node_id) focus_node_id(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->focus_node_id;
  }

  static decltype(::ax::mojom::blink::AXActionData::focus_offset) focus_offset(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->focus_offset;
  }

  static decltype(::ax::mojom::blink::AXActionData::custom_action_id) custom_action_id(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->custom_action_id;
  }

  static const decltype(::ax::mojom::blink::AXActionData::target_rect)& target_rect(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->target_rect;
  }

  static const decltype(::ax::mojom::blink::AXActionData::target_point)& target_point(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->target_point;
  }

  static const decltype(::ax::mojom::blink::AXActionData::value)& value(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->value;
  }

  static decltype(::ax::mojom::blink::AXActionData::hit_test_event_to_fire) hit_test_event_to_fire(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->hit_test_event_to_fire;
  }

  static decltype(::ax::mojom::blink::AXActionData::horizontal_scroll_alignment) horizontal_scroll_alignment(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->horizontal_scroll_alignment;
  }

  static decltype(::ax::mojom::blink::AXActionData::vertical_scroll_alignment) vertical_scroll_alignment(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->vertical_scroll_alignment;
  }

  static decltype(::ax::mojom::blink::AXActionData::scroll_behavior) scroll_behavior(
      const ::ax::mojom::blink::AXActionDataPtr& input) {
    return input->scroll_behavior;
  }

  static bool Read(::ax::mojom::blink::AXActionData::DataView input, ::ax::mojom::blink::AXActionDataPtr* output);
};

}  // namespace mojo

#endif  // UI_ACCESSIBILITY_MOJOM_AX_ACTION_DATA_MOJOM_BLINK_H_