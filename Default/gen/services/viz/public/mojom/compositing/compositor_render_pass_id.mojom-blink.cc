// services/viz/public/mojom/compositing/compositor_render_pass_id.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/viz/public/mojom/compositing/compositor_render_pass_id.mojom-blink.h"

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

#include "services/viz/public/mojom/compositing/compositor_render_pass_id.mojom-params-data.h"
#include "services/viz/public/mojom/compositing/compositor_render_pass_id.mojom-shared-message-ids.h"

#include "services/viz/public/mojom/compositing/compositor_render_pass_id.mojom-blink-import-headers.h"
#include "services/viz/public/mojom/compositing/compositor_render_pass_id.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITOR_RENDER_PASS_ID_MOJOM_BLINK_JUMBO_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITOR_RENDER_PASS_ID_MOJOM_BLINK_JUMBO_H_
#endif



namespace viz {
namespace mojom {
namespace blink {
CompositorRenderPassId::CompositorRenderPassId()
    : value() {}

CompositorRenderPassId::CompositorRenderPassId(
    uint64_t value_in)
    : value(std::move(value_in)) {}

CompositorRenderPassId::~CompositorRenderPassId() = default;
size_t CompositorRenderPassId::Hash(size_t seed) const {
  seed = mojo::internal::WTFHash(seed, this->value);
  return seed;
}

void CompositorRenderPassId::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "value"), this->value,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool CompositorRenderPassId::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz


namespace mojo {


// static
bool StructTraits<::viz::mojom::blink::CompositorRenderPassId::DataView, ::viz::mojom::blink::CompositorRenderPassIdPtr>::Read(
    ::viz::mojom::blink::CompositorRenderPassId::DataView input,
    ::viz::mojom::blink::CompositorRenderPassIdPtr* output) {
  bool success = true;
  ::viz::mojom::blink::CompositorRenderPassIdPtr result(::viz::mojom::blink::CompositorRenderPassId::New());
  
      if (success)
        result->value = input.value();
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