// ui/display/mojom/display.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "ui/display/mojom/display.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/debug/alias.h"
#include "base/hash/md5_constexpr.h"
#include "base/run_loop.h"
#include "base/strings/string_number_conversions.h"
#include "base/trace_event/trace_event.h"
#include "base/trace_event/typed_macros.h"
#include "mojo/public/cpp/bindings/lib/generated_code_util.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/send_message_helper.h"
#include "mojo/public/cpp/bindings/lib/proxy_to_responder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "ui/display/mojom/display.mojom-params-data.h"
#include "ui/display/mojom/display.mojom-shared-message-ids.h"

#include "ui/display/mojom/display.mojom-blink-import-headers.h"
#include "ui/display/mojom/display.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_DISPLAY_MOJOM_DISPLAY_MOJOM_BLINK_JUMBO_H_
#define UI_DISPLAY_MOJOM_DISPLAY_MOJOM_BLINK_JUMBO_H_
#endif



namespace display {
namespace mojom {
namespace blink {
Display::Display()
    : id(),
      bounds(),
      size_in_pixels(),
      work_area(),
      device_scale_factor(),
      rotation(),
      touch_support(),
      accelerometer_support(),
      maximum_cursor_size(),
      color_spaces(),
      color_depth(),
      depth_per_component(),
      is_monochrome(),
      display_frequency(),
      label() {}

Display::Display(
    int64_t id_in,
    const ::gfx::Rect& bounds_in,
    const ::gfx::Size& size_in_pixels_in,
    const ::gfx::Rect& work_area_in,
    float device_scale_factor_in,
    ::display::Display::Rotation rotation_in,
    TouchSupport touch_support_in,
    AccelerometerSupport accelerometer_support_in,
    const ::gfx::Size& maximum_cursor_size_in,
    const ::gfx::DisplayColorSpaces& color_spaces_in,
    int32_t color_depth_in,
    int32_t depth_per_component_in,
    bool is_monochrome_in,
    int32_t display_frequency_in,
    const WTF::String& label_in)
    : id(std::move(id_in)),
      bounds(std::move(bounds_in)),
      size_in_pixels(std::move(size_in_pixels_in)),
      work_area(std::move(work_area_in)),
      device_scale_factor(std::move(device_scale_factor_in)),
      rotation(std::move(rotation_in)),
      touch_support(std::move(touch_support_in)),
      accelerometer_support(std::move(accelerometer_support_in)),
      maximum_cursor_size(std::move(maximum_cursor_size_in)),
      color_spaces(std::move(color_spaces_in)),
      color_depth(std::move(color_depth_in)),
      depth_per_component(std::move(depth_per_component_in)),
      is_monochrome(std::move(is_monochrome_in)),
      display_frequency(std::move(display_frequency_in)),
      label(std::move(label_in)) {}

Display::~Display() = default;

void Display::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "id"), this->id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "bounds"), this->bounds,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::gfx::Rect&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "size_in_pixels"), this->size_in_pixels,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::gfx::Size&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "work_area"), this->work_area,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::gfx::Rect&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "device_scale_factor"), this->device_scale_factor,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type float>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "rotation"), this->rotation,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::display::Display::Rotation>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "touch_support"), this->touch_support,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type TouchSupport>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "accelerometer_support"), this->accelerometer_support,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type AccelerometerSupport>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "maximum_cursor_size"), this->maximum_cursor_size,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::gfx::Size&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "color_spaces"), this->color_spaces,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::gfx::DisplayColorSpaces&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "color_depth"), this->color_depth,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "depth_per_component"), this->depth_per_component,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "is_monochrome"), this->is_monochrome,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "display_frequency"), this->display_frequency,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "label"), this->label,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::String&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool Display::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace blink
}  // namespace mojom
}  // namespace display


namespace mojo {


// static
bool StructTraits<::display::mojom::blink::Display::DataView, ::display::mojom::blink::DisplayPtr>::Read(
    ::display::mojom::blink::Display::DataView input,
    ::display::mojom::blink::DisplayPtr* output) {
  bool success = true;
  ::display::mojom::blink::DisplayPtr result(::display::mojom::blink::Display::New());
  
      if (success)
        result->id = input.id();
      if (success && !input.ReadBounds(&result->bounds))
        success = false;
      if (success && !input.ReadSizeInPixels(&result->size_in_pixels))
        success = false;
      if (success && !input.ReadWorkArea(&result->work_area))
        success = false;
      if (success)
        result->device_scale_factor = input.device_scale_factor();
      if (success && !input.ReadRotation(&result->rotation))
        success = false;
      if (success && !input.ReadTouchSupport(&result->touch_support))
        success = false;
      if (success && !input.ReadAccelerometerSupport(&result->accelerometer_support))
        success = false;
      if (success && !input.ReadMaximumCursorSize(&result->maximum_cursor_size))
        success = false;
      if (success && !input.ReadColorSpaces(&result->color_spaces))
        success = false;
      if (success)
        result->color_depth = input.color_depth();
      if (success)
        result->depth_per_component = input.depth_per_component();
      if (success)
        result->is_monochrome = input.is_monochrome();
      if (success)
        result->display_frequency = input.display_frequency();
      if (success && !input.ReadLabel(&result->label))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace display {
namespace mojom {
namespace blink {




}  // namespace blink
}  // namespace mojom
}  // namespace display


#if defined(__clang__)
#pragma clang diagnostic pop
#endif