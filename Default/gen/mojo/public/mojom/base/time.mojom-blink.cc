// mojo/public/mojom/base/time.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/public/mojom/base/time.mojom-blink.h"

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

#include "mojo/public/mojom/base/time.mojom-params-data.h"
#include "mojo/public/mojom/base/time.mojom-shared-message-ids.h"

#include "mojo/public/mojom/base/time.mojom-blink-import-headers.h"
#include "mojo/public/mojom/base/time.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_BLINK_JUMBO_H_
#define MOJO_PUBLIC_MOJOM_BASE_TIME_MOJOM_BLINK_JUMBO_H_
#endif



namespace mojo_base {
namespace mojom {
namespace blink {
Time::Time()
    : internal_value() {}

Time::Time(
    int64_t internal_value_in)
    : internal_value(std::move(internal_value_in)) {}

Time::~Time() = default;

void Time::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "internal_value"), this->internal_value,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool Time::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TimeDelta::TimeDelta()
    : microseconds() {}

TimeDelta::TimeDelta(
    int64_t microseconds_in)
    : microseconds(std::move(microseconds_in)) {}

TimeDelta::~TimeDelta() = default;

void TimeDelta::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "microseconds"), this->microseconds,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool TimeDelta::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
TimeTicks::TimeTicks()
    : internal_value() {}

TimeTicks::TimeTicks(
    int64_t internal_value_in)
    : internal_value(std::move(internal_value_in)) {}

TimeTicks::~TimeTicks() = default;

void TimeTicks::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "internal_value"), this->internal_value,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool TimeTicks::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base


namespace mojo {


// static
bool StructTraits<::mojo_base::mojom::blink::Time::DataView, ::mojo_base::mojom::blink::TimePtr>::Read(
    ::mojo_base::mojom::blink::Time::DataView input,
    ::mojo_base::mojom::blink::TimePtr* output) {
  bool success = true;
  ::mojo_base::mojom::blink::TimePtr result(::mojo_base::mojom::blink::Time::New());
  
      if (success)
        result->internal_value = input.internal_value();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo_base::mojom::blink::TimeDelta::DataView, ::mojo_base::mojom::blink::TimeDeltaPtr>::Read(
    ::mojo_base::mojom::blink::TimeDelta::DataView input,
    ::mojo_base::mojom::blink::TimeDeltaPtr* output) {
  bool success = true;
  ::mojo_base::mojom::blink::TimeDeltaPtr result(::mojo_base::mojom::blink::TimeDelta::New());
  
      if (success)
        result->microseconds = input.microseconds();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo_base::mojom::blink::TimeTicks::DataView, ::mojo_base::mojom::blink::TimeTicksPtr>::Read(
    ::mojo_base::mojom::blink::TimeTicks::DataView input,
    ::mojo_base::mojom::blink::TimeTicksPtr* output) {
  bool success = true;
  ::mojo_base::mojom::blink::TimeTicksPtr result(::mojo_base::mojom::blink::TimeTicks::New());
  
      if (success)
        result->internal_value = input.internal_value();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace mojo_base {
namespace mojom {
namespace blink {




}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base


#if defined(__clang__)
#pragma clang diagnostic pop
#endif