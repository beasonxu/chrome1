// ui/gfx/mojom/presentation_feedback.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "ui/gfx/mojom/presentation_feedback.mojom.h"

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

#include "ui/gfx/mojom/presentation_feedback.mojom-params-data.h"
#include "ui/gfx/mojom/presentation_feedback.mojom-shared-message-ids.h"

#include "ui/gfx/mojom/presentation_feedback.mojom-import-headers.h"
#include "ui/gfx/mojom/presentation_feedback.mojom-test-utils.h"


#ifndef UI_GFX_MOJOM_PRESENTATION_FEEDBACK_MOJOM_JUMBO_H_
#define UI_GFX_MOJOM_PRESENTATION_FEEDBACK_MOJOM_JUMBO_H_
#endif



namespace gfx {
namespace mojom {
PresentationFeedback::PresentationFeedback()
    : timestamp(),
      interval(),
      flags(),
      available_timestamp(),
      ready_timestamp(),
      latch_timestamp(),
      writes_done_timestamp() {}

PresentationFeedback::PresentationFeedback(
    ::base::TimeTicks timestamp_in,
    ::base::TimeDelta interval_in,
    uint32_t flags_in,
    ::base::TimeTicks available_timestamp_in,
    ::base::TimeTicks ready_timestamp_in,
    ::base::TimeTicks latch_timestamp_in,
    ::base::TimeTicks writes_done_timestamp_in)
    : timestamp(std::move(timestamp_in)),
      interval(std::move(interval_in)),
      flags(std::move(flags_in)),
      available_timestamp(std::move(available_timestamp_in)),
      ready_timestamp(std::move(ready_timestamp_in)),
      latch_timestamp(std::move(latch_timestamp_in)),
      writes_done_timestamp(std::move(writes_done_timestamp_in)) {}

PresentationFeedback::~PresentationFeedback() = default;

void PresentationFeedback::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
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
      "interval"), this->interval,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::base::TimeDelta>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "flags"), this->flags,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "available_timestamp"), this->available_timestamp,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::base::TimeTicks>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "ready_timestamp"), this->ready_timestamp,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::base::TimeTicks>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "latch_timestamp"), this->latch_timestamp,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::base::TimeTicks>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "writes_done_timestamp"), this->writes_done_timestamp,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::base::TimeTicks>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool PresentationFeedback::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace gfx


namespace mojo {


// static
bool StructTraits<::gfx::mojom::PresentationFeedback::DataView, ::gfx::mojom::PresentationFeedbackPtr>::Read(
    ::gfx::mojom::PresentationFeedback::DataView input,
    ::gfx::mojom::PresentationFeedbackPtr* output) {
  bool success = true;
  ::gfx::mojom::PresentationFeedbackPtr result(::gfx::mojom::PresentationFeedback::New());
  
      if (success && !input.ReadTimestamp(&result->timestamp))
        success = false;
      if (success && !input.ReadInterval(&result->interval))
        success = false;
      if (success)
        result->flags = input.flags();
      if (success && !input.ReadAvailableTimestamp(&result->available_timestamp))
        success = false;
      if (success && !input.ReadReadyTimestamp(&result->ready_timestamp))
        success = false;
      if (success && !input.ReadLatchTimestamp(&result->latch_timestamp))
        success = false;
      if (success && !input.ReadWritesDoneTimestamp(&result->writes_done_timestamp))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace gfx {
namespace mojom {




}  // namespace mojom
}  // namespace gfx


#if defined(__clang__)
#pragma clang diagnostic pop
#endif