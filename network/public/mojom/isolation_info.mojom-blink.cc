// services/network/public/mojom/isolation_info.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "services/network/public/mojom/isolation_info.mojom-blink.h"

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

#include "services/network/public/mojom/isolation_info.mojom-params-data.h"
#include "services/network/public/mojom/isolation_info.mojom-shared-message-ids.h"

#include "services/network/public/mojom/isolation_info.mojom-blink-import-headers.h"
#include "services/network/public/mojom/isolation_info.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ISOLATION_INFO_MOJOM_BLINK_JUMBO_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ISOLATION_INFO_MOJOM_BLINK_JUMBO_H_
#endif



namespace network {
namespace mojom {
namespace blink {
IsolationInfo::IsolationInfo()
    : request_type(),
      top_frame_origin(),
      frame_origin(),
      nonce(),
      site_for_cookies(),
      party_context() {}

IsolationInfo::IsolationInfo(
    IsolationInfoRequestType request_type_in,
    const ::scoped_refptr<const ::blink::SecurityOrigin>& top_frame_origin_in,
    const ::scoped_refptr<const ::blink::SecurityOrigin>& frame_origin_in,
    const absl::optional<::base::UnguessableToken>& nonce_in,
    const ::net::SiteForCookies& site_for_cookies_in,
    absl::optional<WTF::Vector<::blink::BlinkSchemefulSite>> party_context_in)
    : request_type(std::move(request_type_in)),
      top_frame_origin(std::move(top_frame_origin_in)),
      frame_origin(std::move(frame_origin_in)),
      nonce(std::move(nonce_in)),
      site_for_cookies(std::move(site_for_cookies_in)),
      party_context(std::move(party_context_in)) {}

IsolationInfo::~IsolationInfo() = default;

void IsolationInfo::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "request_type"), this->request_type,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type IsolationInfoRequestType>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "top_frame_origin"), this->top_frame_origin,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::scoped_refptr<const ::blink::SecurityOrigin>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "frame_origin"), this->frame_origin,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::scoped_refptr<const ::blink::SecurityOrigin>&>"
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
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "site_for_cookies"), this->site_for_cookies,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::net::SiteForCookies&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "party_context"), this->party_context,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<WTF::Vector<::blink::BlinkSchemefulSite>>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool IsolationInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace blink
}  // namespace mojom
}  // namespace network


namespace mojo {


// static
bool StructTraits<::network::mojom::blink::IsolationInfo::DataView, ::network::mojom::blink::IsolationInfoPtr>::Read(
    ::network::mojom::blink::IsolationInfo::DataView input,
    ::network::mojom::blink::IsolationInfoPtr* output) {
  bool success = true;
  ::network::mojom::blink::IsolationInfoPtr result(::network::mojom::blink::IsolationInfo::New());
  
      if (success && !input.ReadRequestType(&result->request_type))
        success = false;
      if (success && !input.ReadTopFrameOrigin(&result->top_frame_origin))
        success = false;
      if (success && !input.ReadFrameOrigin(&result->frame_origin))
        success = false;
      if (success && !input.ReadNonce(&result->nonce))
        success = false;
      if (success && !input.ReadSiteForCookies(&result->site_for_cookies))
        success = false;
      if (success && !input.ReadPartyContext(&result->party_context))
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