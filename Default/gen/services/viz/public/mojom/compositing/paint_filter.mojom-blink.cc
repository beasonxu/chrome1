// services/viz/public/mojom/compositing/paint_filter.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/viz/public/mojom/compositing/paint_filter.mojom-blink.h"

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

#include "services/viz/public/mojom/compositing/paint_filter.mojom-params-data.h"
#include "services/viz/public/mojom/compositing/paint_filter.mojom-shared-message-ids.h"

#include "services/viz/public/mojom/compositing/paint_filter.mojom-blink-import-headers.h"
#include "services/viz/public/mojom/compositing/paint_filter.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_PAINT_FILTER_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_PAINT_FILTER_MOJOM_BLINK_JUMBO_H_
#endif



namespace viz {
namespace mojom {
namespace blink {
PaintFilter::PaintFilter()
    : data() {}

PaintFilter::PaintFilter(
    absl::optional<WTF::Vector<uint8_t>> data_in)
    : data(std::move(data_in)) {}

PaintFilter::~PaintFilter() = default;

void PaintFilter::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "data"), this->data,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<WTF::Vector<uint8_t>>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool PaintFilter::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz


namespace mojo {


// static
bool StructTraits<::viz::mojom::blink::PaintFilter::DataView, ::viz::mojom::blink::PaintFilterPtr>::Read(
    ::viz::mojom::blink::PaintFilter::DataView input,
    ::viz::mojom::blink::PaintFilterPtr* output) {
  bool success = true;
  ::viz::mojom::blink::PaintFilterPtr result(::viz::mojom::blink::PaintFilter::New());
  
      if (success && !input.ReadData(&result->data))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace viz {
namespace mojom {
namespace blink {




}  // namespace blink
}  // namespace mojom
}  // namespace viz


#if defined(__clang__)
#pragma clang diagnostic pop
#endif