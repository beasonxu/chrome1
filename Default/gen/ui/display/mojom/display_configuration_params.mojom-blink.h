// ui/display/mojom/display_configuration_params.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJOM_DISPLAY_CONFIGURATION_PARAMS_MOJOM_BLINK_H_
#define UI_DISPLAY_MOJOM_DISPLAY_CONFIGURATION_PARAMS_MOJOM_BLINK_H_

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

#include "ui/display/mojom/display_configuration_params.mojom-shared.h"
#include "ui/display/mojom/display_configuration_params.mojom-blink-forward.h"
#include "ui/display/mojom/display_mode.mojom-blink.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"








namespace display {
namespace mojom {
namespace blink {








class  DisplayConfigurationParams {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<DisplayConfigurationParams, T>::value>;
  using DataView = DisplayConfigurationParamsDataView;
  using Data_ = internal::DisplayConfigurationParams_Data;

  template <typename... Args>
  static DisplayConfigurationParamsPtr New(Args&&... args) {
    return DisplayConfigurationParamsPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DisplayConfigurationParamsPtr From(const U& u) {
    return mojo::TypeConverter<DisplayConfigurationParamsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DisplayConfigurationParams>::Convert(*this);
  }


  DisplayConfigurationParams();

  DisplayConfigurationParams(
      int64_t id,
      const ::gfx::Point& origin,
      ::display::mojom::blink::DisplayModePtr mode);

DisplayConfigurationParams(const DisplayConfigurationParams&) = delete;
DisplayConfigurationParams& operator=(const DisplayConfigurationParams&) = delete;

  ~DisplayConfigurationParams();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DisplayConfigurationParamsPtr>
  DisplayConfigurationParamsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, DisplayConfigurationParams::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, DisplayConfigurationParams::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DisplayConfigurationParams::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DisplayConfigurationParams::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DisplayConfigurationParams_UnserializedMessageContext<
            UserType, DisplayConfigurationParams::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<DisplayConfigurationParams::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DisplayConfigurationParams::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DisplayConfigurationParams_UnserializedMessageContext<
            UserType, DisplayConfigurationParams::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DisplayConfigurationParams::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  int64_t id;
  
  ::gfx::Point origin;
  
  ::display::mojom::blink::DisplayModePtr mode;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, DisplayConfigurationParams::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, DisplayConfigurationParams::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, DisplayConfigurationParams::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, DisplayConfigurationParams::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
DisplayConfigurationParamsPtr DisplayConfigurationParams::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(origin),
      mojo::Clone(mode)
  );
}

template <typename T, DisplayConfigurationParams::EnableIfSame<T>*>
bool DisplayConfigurationParams::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->origin, other_struct.origin))
    return false;
  if (!mojo::Equals(this->mode, other_struct.mode))
    return false;
  return true;
}

template <typename T, DisplayConfigurationParams::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.id < rhs.id)
    return true;
  if (rhs.id < lhs.id)
    return false;
  if (lhs.origin < rhs.origin)
    return true;
  if (rhs.origin < lhs.origin)
    return false;
  if (lhs.mode < rhs.mode)
    return true;
  if (rhs.mode < lhs.mode)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace display

namespace mojo {


template <>
struct  StructTraits<::display::mojom::blink::DisplayConfigurationParams::DataView,
                                         ::display::mojom::blink::DisplayConfigurationParamsPtr> {
  static bool IsNull(const ::display::mojom::blink::DisplayConfigurationParamsPtr& input) { return !input; }
  static void SetToNull(::display::mojom::blink::DisplayConfigurationParamsPtr* output) { output->reset(); }

  static decltype(::display::mojom::blink::DisplayConfigurationParams::id) id(
      const ::display::mojom::blink::DisplayConfigurationParamsPtr& input) {
    return input->id;
  }

  static const decltype(::display::mojom::blink::DisplayConfigurationParams::origin)& origin(
      const ::display::mojom::blink::DisplayConfigurationParamsPtr& input) {
    return input->origin;
  }

  static const decltype(::display::mojom::blink::DisplayConfigurationParams::mode)& mode(
      const ::display::mojom::blink::DisplayConfigurationParamsPtr& input) {
    return input->mode;
  }

  static bool Read(::display::mojom::blink::DisplayConfigurationParams::DataView input, ::display::mojom::blink::DisplayConfigurationParamsPtr* output);
};

}  // namespace mojo

#endif  // UI_DISPLAY_MOJOM_DISPLAY_CONFIGURATION_PARAMS_MOJOM_BLINK_H_