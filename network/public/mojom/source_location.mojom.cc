// services/network/public/mojom/source_location.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/network/public/mojom/source_location.mojom.h"

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

#include "services/network/public/mojom/source_location.mojom-params-data.h"
#include "services/network/public/mojom/source_location.mojom-shared-message-ids.h"

#include "services/network/public/mojom/source_location.mojom-import-headers.h"
#include "services/network/public/mojom/source_location.mojom-test-utils.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_SOURCE_LOCATION_MOJOM_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_SOURCE_LOCATION_MOJOM_JUMBO_H_
#endif



namespace network {
namespace mojom {
SourceLocation::SourceLocation()
    : url(),
      line(0U),
      column(0U) {}

SourceLocation::SourceLocation(
    const std::string& url_in,
    uint32_t line_in,
    uint32_t column_in)
    : url(std::move(url_in)),
      line(std::move(line_in)),
      column(std::move(column_in)) {}

SourceLocation::~SourceLocation() = default;
size_t SourceLocation::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->url);
  seed = mojo::internal::Hash(seed, this->line);
  seed = mojo::internal::Hash(seed, this->column);
  return seed;
}

void SourceLocation::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "url"), this->url,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "line"), this->line,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "column"), this->column,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool SourceLocation::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace network


namespace mojo {


// static
bool StructTraits<::network::mojom::SourceLocation::DataView, ::network::mojom::SourceLocationPtr>::Read(
    ::network::mojom::SourceLocation::DataView input,
    ::network::mojom::SourceLocationPtr* output) {
  bool success = true;
  ::network::mojom::SourceLocationPtr result(::network::mojom::SourceLocation::New());
  
      if (success && !input.ReadUrl(&result->url))
        success = false;
      if (success)
        result->line = input.line();
      if (success)
        result->column = input.column();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace network {
namespace mojom {




}  // namespace mojom
}  // namespace network


#if defined(__clang__)
#pragma clang diagnostic pop
#endif