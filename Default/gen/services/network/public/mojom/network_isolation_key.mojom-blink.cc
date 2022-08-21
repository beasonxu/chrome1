// services/network/public/mojom/network_isolation_key.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/network/public/mojom/network_isolation_key.mojom-blink.h"

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

#include "services/network/public/mojom/network_isolation_key.mojom-params-data.h"
#include "services/network/public/mojom/network_isolation_key.mojom-shared-message-ids.h"

#include "services/network/public/mojom/network_isolation_key.mojom-blink-import-headers.h"
#include "services/network/public/mojom/network_isolation_key.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_ISOLATION_KEY_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_NETWORK_ISOLATION_KEY_MOJOM_BLINK_JUMBO_H_
#endif



namespace network {
namespace mojom {
namespace blink {
NetworkIsolationKey::NetworkIsolationKey()
    : top_frame_site(),
      frame_site(),
      nonce() {}

NetworkIsolationKey::NetworkIsolationKey(
    const absl::optional<::blink::BlinkSchemefulSite>& top_frame_site_in,
    const absl::optional<::blink::BlinkSchemefulSite>& frame_site_in,
    const absl::optional<::base::UnguessableToken>& nonce_in)
    : top_frame_site(std::move(top_frame_site_in)),
      frame_site(std::move(frame_site_in)),
      nonce(std::move(nonce_in)) {}

NetworkIsolationKey::~NetworkIsolationKey() = default;

void NetworkIsolationKey::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "top_frame_site"), this->top_frame_site,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<::blink::BlinkSchemefulSite>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "frame_site"), this->frame_site,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<::blink::BlinkSchemefulSite>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "nonce"), this->nonce,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<::base::UnguessableToken>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool NetworkIsolationKey::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace blink
}  // namespace mojom
}  // namespace network


namespace mojo {


// static
bool StructTraits<::network::mojom::blink::NetworkIsolationKey::DataView, ::network::mojom::blink::NetworkIsolationKeyPtr>::Read(
    ::network::mojom::blink::NetworkIsolationKey::DataView input,
    ::network::mojom::blink::NetworkIsolationKeyPtr* output) {
  bool success = true;
  ::network::mojom::blink::NetworkIsolationKeyPtr result(::network::mojom::blink::NetworkIsolationKey::New());
  
      if (success && !input.ReadTopFrameSite(&result->top_frame_site))
        success = false;
      if (success && !input.ReadFrameSite(&result->frame_site))
        success = false;
      if (success && !input.ReadNonce(&result->nonce))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace network {
namespace mojom {
namespace blink {




}  // namespace blink
}  // namespace mojom
}  // namespace network


#if defined(__clang__)
#pragma clang diagnostic pop
#endif