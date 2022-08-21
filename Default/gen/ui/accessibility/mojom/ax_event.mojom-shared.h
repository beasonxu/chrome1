// ui/accessibility/mojom/ax_event.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_ACCESSIBILITY_MOJOM_AX_EVENT_MOJOM_SHARED_H_
#define UI_ACCESSIBILITY_MOJOM_AX_EVENT_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <iosfwd>
#include <type_traits>
#include <utility>
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "ui/accessibility/mojom/ax_event.mojom-shared-internal.h"
#include "ui/accessibility/ax_enums.mojom-shared.h"
#include "ui/accessibility/mojom/ax_event_intent.mojom-shared.h"







namespace ax {
namespace mojom {
class AXEventDataView;



}  // namespace mojom
}  // namespace ax

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::ax::mojom::AXEventDataView> {
  using Data = ::ax::mojom::internal::AXEvent_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace ax {
namespace mojom {


class AXEventDataView {
 public:
  AXEventDataView() = default;

  AXEventDataView(
      internal::AXEvent_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadEventType(UserType* output) const {
    auto data_value = data_->event_type;
    return mojo::internal::Deserialize<::ax::mojom::Event>(
        data_value, output);
  }
  ::ax::mojom::Event event_type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::ax::mojom::Event>(data_->event_type));
  }
  int32_t id() const {
    return data_->id;
  }
  template <typename UserType>
  [[nodiscard]] bool ReadEventFrom(UserType* output) const {
    auto data_value = data_->event_from;
    return mojo::internal::Deserialize<::ax::mojom::EventFrom>(
        data_value, output);
  }
  ::ax::mojom::EventFrom event_from() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::ax::mojom::EventFrom>(data_->event_from));
  }
  template <typename UserType>
  [[nodiscard]] bool ReadEventFromAction(UserType* output) const {
    auto data_value = data_->event_from_action;
    return mojo::internal::Deserialize<::ax::mojom::Action>(
        data_value, output);
  }
  ::ax::mojom::Action event_from_action() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::ax::mojom::Action>(data_->event_from_action));
  }
  inline void GetEventIntentsDataView(
      mojo::ArrayDataView<::ax::mojom::EventIntentDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadEventIntents(UserType* output) {
    
    auto* pointer = data_->event_intents.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::ax::mojom::EventIntentDataView>>(
        pointer, output, message_);
  }
  int32_t action_request_id() const {
    return data_->action_request_id;
  }
 private:
  internal::AXEvent_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace ax

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ax::mojom::AXEventDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::ax::mojom::AXEventDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::ax::mojom::internal::AXEvent_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    mojo::internal::Serialize<::ax::mojom::Event>(
        Traits::event_type(input), &fragment->event_type);
    fragment->id = Traits::id(input);
    mojo::internal::Serialize<::ax::mojom::EventFrom>(
        Traits::event_from(input), &fragment->event_from);
    mojo::internal::Serialize<::ax::mojom::Action>(
        Traits::event_from_action(input), &fragment->event_from_action);
    decltype(Traits::event_intents(input)) in_event_intents = Traits::event_intents(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->event_intents)::BaseType>
        event_intents_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams event_intents_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::ax::mojom::EventIntentDataView>>(
        in_event_intents, event_intents_fragment, &event_intents_validate_params);
    fragment->event_intents.Set(
        event_intents_fragment.is_null() ? nullptr : event_intents_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->event_intents.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null event_intents in AXEvent struct");
    fragment->action_request_id = Traits::action_request_id(input);
  }

  static bool Deserialize(::ax::mojom::internal::AXEvent_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::ax::mojom::AXEventDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ax {
namespace mojom {

inline void AXEventDataView::GetEventIntentsDataView(
    mojo::ArrayDataView<::ax::mojom::EventIntentDataView>* output) {
  auto pointer = data_->event_intents.Get();
  *output = mojo::ArrayDataView<::ax::mojom::EventIntentDataView>(pointer, message_);
}



}  // namespace mojom
}  // namespace ax

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // UI_ACCESSIBILITY_MOJOM_AX_EVENT_MOJOM_SHARED_H_