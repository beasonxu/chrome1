// ui/events/mojom/event_constants.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_EVENTS_MOJOM_EVENT_CONSTANTS_MOJOM_SHARED_H_
#define UI_EVENTS_MOJOM_EVENT_CONSTANTS_MOJOM_SHARED_H_

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

#include "ui/events/mojom/event_constants.mojom-shared-internal.h"



#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace ui {
namespace mojom {


}  // namespace mojom
}  // namespace ui

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace ui {
namespace mojom {


enum class AcceleratorPhase : int32_t {
  
  PRE_TARGET = 0,
  
  POST_TARGET = 1,
  kMinValue = 0,
  kMaxValue = 1,
};

 std::ostream& operator<<(std::ostream& os, AcceleratorPhase value);
inline bool IsKnownEnumValue(AcceleratorPhase value) {
  return internal::AcceleratorPhase_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class EventType : int32_t {
  
  UNKNOWN = 0,
  
  KEY_PRESSED = 1,
  
  KEY_RELEASED = 2,
  
  GESTURE_TAP = 3,
  
  GESTURE_SWIPE = 4,
  
  GESTURE_PINCH_BEGIN = 5,
  
  GESTURE_PINCH_END = 6,
  
  GESTURE_PINCH_UPDATE = 7,
  
  SCROLL = 8,
  
  SCROLL_FLING_START = 9,
  
  SCROLL_FLING_CANCEL = 10,
  
  CANCEL_MODE = 11,
  
  MOUSE_PRESSED_EVENT = 12,
  
  MOUSE_DRAGGED_EVENT = 13,
  
  MOUSE_RELEASED_EVENT = 14,
  
  MOUSE_MOVED_EVENT = 15,
  
  MOUSE_ENTERED_EVENT = 16,
  
  MOUSE_EXITED_EVENT = 17,
  
  MOUSE_WHEEL_EVENT = 18,
  
  MOUSE_CAPTURE_CHANGED_EVENT = 19,
  
  TOUCH_RELEASED = 20,
  
  TOUCH_PRESSED = 21,
  
  TOUCH_MOVED = 22,
  
  TOUCH_CANCELLED = 23,
  kMinValue = 0,
  kMaxValue = 23,
};

 std::ostream& operator<<(std::ostream& os, EventType value);
inline bool IsKnownEnumValue(EventType value) {
  return internal::EventType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}
using EventPointerType = mojo::NativeEnum;


enum class ScrollEventPhase : int32_t {
  
  kNone = 0,
  
  kBegan = 1,
  
  kUpdate = 2,
  
  kEnd = 3,
  kMinValue = 0,
  kMaxValue = 3,
};

 std::ostream& operator<<(std::ostream& os, ScrollEventPhase value);
inline bool IsKnownEnumValue(ScrollEventPhase value) {
  return internal::ScrollEventPhase_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class EventMomentumPhase : int32_t {
  
  NONE = 0,
  
  BEGAN = 1,
  
  MAY_BEGIN = 2,
  
  INERTIAL_UPDATE = 3,
  
  END = 4,
  
  BLOCKED = 5,
  kMinValue = 0,
  kMaxValue = 5,
};

 std::ostream& operator<<(std::ostream& os, EventMomentumPhase value);
inline bool IsKnownEnumValue(EventMomentumPhase value) {
  return internal::EventMomentumPhase_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


enum class GestureDeviceType : int32_t {
  
  DEVICE_UNKNOWN = 0,
  
  DEVICE_TOUCHPAD = 1,
  
  DEVICE_TOUCHSCREEN = 2,
  kMinValue = 0,
  kMaxValue = 2,
};

 std::ostream& operator<<(std::ostream& os, GestureDeviceType value);
inline bool IsKnownEnumValue(GestureDeviceType value) {
  return internal::GestureDeviceType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace ui

namespace std {

template <>
struct hash<::ui::mojom::AcceleratorPhase>
    : public mojo::internal::EnumHashImpl<::ui::mojom::AcceleratorPhase> {};

template <>
struct hash<::ui::mojom::EventType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::EventType> {};

template <>
struct hash<::ui::mojom::ScrollEventPhase>
    : public mojo::internal::EnumHashImpl<::ui::mojom::ScrollEventPhase> {};

template <>
struct hash<::ui::mojom::EventMomentumPhase>
    : public mojo::internal::EnumHashImpl<::ui::mojom::EventMomentumPhase> {};

template <>
struct hash<::ui::mojom::GestureDeviceType>
    : public mojo::internal::EnumHashImpl<::ui::mojom::GestureDeviceType> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::AcceleratorPhase, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::AcceleratorPhase, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::ui::mojom::AcceleratorPhase>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::EventType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::ui::mojom::EventType>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::ScrollEventPhase, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::ScrollEventPhase, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::ui::mojom::ScrollEventPhase>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::EventMomentumPhase, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::EventMomentumPhase, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::ui::mojom::EventMomentumPhase>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::ui::mojom::GestureDeviceType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::ui::mojom::GestureDeviceType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::ui::mojom::GestureDeviceType>(input)), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace ui {
namespace mojom {


}  // namespace mojom
}  // namespace ui

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct  TraceFormatTraits<::ui::mojom::AcceleratorPhase> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::ui::mojom::AcceleratorPhase value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct  TraceFormatTraits<::ui::mojom::EventType> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::ui::mojom::EventType value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct  TraceFormatTraits<::ui::mojom::ScrollEventPhase> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::ui::mojom::ScrollEventPhase value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct  TraceFormatTraits<::ui::mojom::EventMomentumPhase> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::ui::mojom::EventMomentumPhase value);
};

} // namespace perfetto

namespace perfetto {

template <>
struct  TraceFormatTraits<::ui::mojom::GestureDeviceType> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::ui::mojom::GestureDeviceType value);
};

} // namespace perfetto

#endif  // UI_EVENTS_MOJOM_EVENT_CONSTANTS_MOJOM_SHARED_H_