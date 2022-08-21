// ui/gfx/mojom/delegated_ink_point.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "ui/gfx/mojom/delegated_ink_point.mojom-blink.h"

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

#include "ui/gfx/mojom/delegated_ink_point.mojom-params-data.h"
#include "ui/gfx/mojom/delegated_ink_point.mojom-shared-message-ids.h"

#include "ui/gfx/mojom/delegated_ink_point.mojom-blink-import-headers.h"
#include "ui/gfx/mojom/delegated_ink_point.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef UI_GFX_MOJOM_DELEGATED_INK_POINT_MOJOM_BLINK_JUMBO_H_
#define UI_GFX_MOJOM_DELEGATED_INK_POINT_MOJOM_BLINK_JUMBO_H_
#endif



namespace gfx {
namespace mojom {
namespace blink {
DelegatedInkPoint::DelegatedInkPoint()
    : point(),
      timestamp(),
      pointer_id() {}

DelegatedInkPoint::DelegatedInkPoint(
    const ::gfx::PointF& point_in,
    ::base::TimeTicks timestamp_in,
    int32_t pointer_id_in)
    : point(std::move(point_in)),
      timestamp(std::move(timestamp_in)),
      pointer_id(std::move(pointer_id_in)) {}

DelegatedInkPoint::~DelegatedInkPoint() = default;

void DelegatedInkPoint::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "point"), this->point,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::gfx::PointF&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "timestamp"), this->timestamp,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::base::TimeTicks>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "pointer_id"), this->pointer_id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool DelegatedInkPoint::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace blink
}  // namespace mojom
}  // namespace gfx


namespace mojo {


// static
bool StructTraits<::gfx::mojom::blink::DelegatedInkPoint::DataView, ::gfx::mojom::blink::DelegatedInkPointPtr>::Read(
    ::gfx::mojom::blink::DelegatedInkPoint::DataView input,
    ::gfx::mojom::blink::DelegatedInkPointPtr* output) {
  bool success = true;
  ::gfx::mojom::blink::DelegatedInkPointPtr result(::gfx::mojom::blink::DelegatedInkPoint::New());
  
      if (success && !input.ReadPoint(&result->point))
        success = false;
      if (success && !input.ReadTimestamp(&result->timestamp))
        success = false;
      if (success)
        result->pointer_id = input.pointer_id();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace gfx {
namespace mojom {
namespace blink {




}  // namespace blink
}  // namespace mojom
}  // namespace gfx


#if defined(__clang__)
#pragma clang diagnostic pop
#endif