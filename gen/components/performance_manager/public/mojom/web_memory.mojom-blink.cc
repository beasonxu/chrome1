// components/performance_manager/public/mojom/web_memory.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "components/performance_manager/public/mojom/web_memory.mojom-blink.h"

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

#include "components/performance_manager/public/mojom/web_memory.mojom-params-data.h"
#include "components/performance_manager/public/mojom/web_memory.mojom-shared-message-ids.h"

#include "components/performance_manager/public/mojom/web_memory.mojom-blink-import-headers.h"
#include "components/performance_manager/public/mojom/web_memory.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef COMPONENTS_PERFORMANCE_MANAGER_PUBLIC_MOJOM_WEB_MEMORY_MOJOM_BLINK_JUMBO_H_
#define COMPONENTS_PERFORMANCE_MANAGER_PUBLIC_MOJOM_WEB_MEMORY_MOJOM_BLINK_JUMBO_H_
#endif



namespace performance_manager {
namespace mojom {
namespace blink {
WebMemoryAttribution::WebMemoryAttribution()
    : scope(),
      url(),
      src(),
      id() {}

WebMemoryAttribution::WebMemoryAttribution(
    WebMemoryAttribution::Scope scope_in,
    const WTF::String& url_in,
    const WTF::String& src_in,
    const WTF::String& id_in)
    : scope(std::move(scope_in)),
      url(std::move(url_in)),
      src(std::move(src_in)),
      id(std::move(id_in)) {}

WebMemoryAttribution::~WebMemoryAttribution() = default;

void WebMemoryAttribution::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "scope"), this->scope,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type WebMemoryAttribution::Scope>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "url"), this->url,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::String&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "src"), this->src,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::String&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "id"), this->id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::String&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool WebMemoryAttribution::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WebMemoryUsage::WebMemoryUsage()
    : bytes() {}

WebMemoryUsage::WebMemoryUsage(
    uint64_t bytes_in)
    : bytes(std::move(bytes_in)) {}

WebMemoryUsage::~WebMemoryUsage() = default;
size_t WebMemoryUsage::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->bytes);
  return seed;
}

void WebMemoryUsage::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "bytes"), this->bytes,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool WebMemoryUsage::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WebMemoryBreakdownEntry::WebMemoryBreakdownEntry()
    : memory(),
      canvas_memory(),
      attribution() {}

WebMemoryBreakdownEntry::WebMemoryBreakdownEntry(
    WebMemoryUsagePtr memory_in,
    WebMemoryUsagePtr canvas_memory_in,
    WTF::Vector<WebMemoryAttributionPtr> attribution_in)
    : memory(std::move(memory_in)),
      canvas_memory(std::move(canvas_memory_in)),
      attribution(std::move(attribution_in)) {}

WebMemoryBreakdownEntry::~WebMemoryBreakdownEntry() = default;

void WebMemoryBreakdownEntry::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "memory"), this->memory,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type WebMemoryUsagePtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "canvas_memory"), this->canvas_memory,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type WebMemoryUsagePtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "attribution"), this->attribution,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type WTF::Vector<WebMemoryAttributionPtr>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool WebMemoryBreakdownEntry::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
WebMemoryMeasurement::WebMemoryMeasurement()
    : breakdown(),
      detached_memory(),
      shared_memory(),
      blink_memory() {}

WebMemoryMeasurement::WebMemoryMeasurement(
    WTF::Vector<WebMemoryBreakdownEntryPtr> breakdown_in,
    WebMemoryUsagePtr detached_memory_in,
    WebMemoryUsagePtr shared_memory_in,
    WebMemoryUsagePtr blink_memory_in)
    : breakdown(std::move(breakdown_in)),
      detached_memory(std::move(detached_memory_in)),
      shared_memory(std::move(shared_memory_in)),
      blink_memory(std::move(blink_memory_in)) {}

WebMemoryMeasurement::~WebMemoryMeasurement() = default;

void WebMemoryMeasurement::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "breakdown"), this->breakdown,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type WTF::Vector<WebMemoryBreakdownEntryPtr>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "detached_memory"), this->detached_memory,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type WebMemoryUsagePtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "shared_memory"), this->shared_memory,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type WebMemoryUsagePtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "blink_memory"), this->blink_memory,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type WebMemoryUsagePtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool WebMemoryMeasurement::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace blink
}  // namespace mojom
}  // namespace performance_manager


namespace mojo {


// static
bool StructTraits<::performance_manager::mojom::blink::WebMemoryAttribution::DataView, ::performance_manager::mojom::blink::WebMemoryAttributionPtr>::Read(
    ::performance_manager::mojom::blink::WebMemoryAttribution::DataView input,
    ::performance_manager::mojom::blink::WebMemoryAttributionPtr* output) {
  bool success = true;
  ::performance_manager::mojom::blink::WebMemoryAttributionPtr result(::performance_manager::mojom::blink::WebMemoryAttribution::New());
  
      if (success && !input.ReadScope(&result->scope))
        success = false;
      if (success && !input.ReadUrl(&result->url))
        success = false;
      if (success && !input.ReadSrc(&result->src))
        success = false;
      if (success && !input.ReadId(&result->id))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::performance_manager::mojom::blink::WebMemoryUsage::DataView, ::performance_manager::mojom::blink::WebMemoryUsagePtr>::Read(
    ::performance_manager::mojom::blink::WebMemoryUsage::DataView input,
    ::performance_manager::mojom::blink::WebMemoryUsagePtr* output) {
  bool success = true;
  ::performance_manager::mojom::blink::WebMemoryUsagePtr result(::performance_manager::mojom::blink::WebMemoryUsage::New());
  
      if (success)
        result->bytes = input.bytes();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::performance_manager::mojom::blink::WebMemoryBreakdownEntry::DataView, ::performance_manager::mojom::blink::WebMemoryBreakdownEntryPtr>::Read(
    ::performance_manager::mojom::blink::WebMemoryBreakdownEntry::DataView input,
    ::performance_manager::mojom::blink::WebMemoryBreakdownEntryPtr* output) {
  bool success = true;
  ::performance_manager::mojom::blink::WebMemoryBreakdownEntryPtr result(::performance_manager::mojom::blink::WebMemoryBreakdownEntry::New());
  
      if (success && !input.ReadMemory(&result->memory))
        success = false;
      if (success && !input.ReadCanvasMemory(&result->canvas_memory))
        success = false;
      if (success && !input.ReadAttribution(&result->attribution))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::performance_manager::mojom::blink::WebMemoryMeasurement::DataView, ::performance_manager::mojom::blink::WebMemoryMeasurementPtr>::Read(
    ::performance_manager::mojom::blink::WebMemoryMeasurement::DataView input,
    ::performance_manager::mojom::blink::WebMemoryMeasurementPtr* output) {
  bool success = true;
  ::performance_manager::mojom::blink::WebMemoryMeasurementPtr result(::performance_manager::mojom::blink::WebMemoryMeasurement::New());
  
      if (success && !input.ReadBreakdown(&result->breakdown))
        success = false;
      if (success && !input.ReadDetachedMemory(&result->detached_memory))
        success = false;
      if (success && !input.ReadSharedMemory(&result->shared_memory))
        success = false;
      if (success && !input.ReadBlinkMemory(&result->blink_memory))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace performance_manager {
namespace mojom {
namespace blink {




}  // namespace blink
}  // namespace mojom
}  // namespace performance_manager


#if defined(__clang__)
#pragma clang diagnostic pop
#endif