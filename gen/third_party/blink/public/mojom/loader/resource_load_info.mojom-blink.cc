// third_party/blink/public/mojom/loader/resource_load_info.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/loader/resource_load_info.mojom-blink.h"

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

#include "third_party/blink/public/mojom/loader/resource_load_info.mojom-params-data.h"
#include "third_party/blink/public/mojom/loader/resource_load_info.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/loader/resource_load_info.mojom-blink-import-headers.h"
#include "third_party/blink/public/mojom/loader/resource_load_info.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_RESOURCE_LOAD_INFO_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_RESOURCE_LOAD_INFO_MOJOM_BLINK_JUMBO_H_
#endif



namespace blink {
namespace mojom {
namespace blink {
CommonNetworkInfo::CommonNetworkInfo()
    : network_accessed(),
      always_access_network(),
      remote_endpoint() {}

CommonNetworkInfo::CommonNetworkInfo(
    bool network_accessed_in,
    bool always_access_network_in,
    const absl::optional<::net::IPEndPoint>& remote_endpoint_in)
    : network_accessed(std::move(network_accessed_in)),
      always_access_network(std::move(always_access_network_in)),
      remote_endpoint(std::move(remote_endpoint_in)) {}

CommonNetworkInfo::~CommonNetworkInfo() = default;

void CommonNetworkInfo::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "network_accessed"), this->network_accessed,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "always_access_network"), this->always_access_network,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "remote_endpoint"), this->remote_endpoint,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const absl::optional<::net::IPEndPoint>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool CommonNetworkInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RedirectInfo::RedirectInfo()
    : origin_of_new_url(),
      network_info() {}

RedirectInfo::RedirectInfo(
    const ::scoped_refptr<const ::blink::SecurityOrigin>& origin_of_new_url_in,
    CommonNetworkInfoPtr network_info_in)
    : origin_of_new_url(std::move(origin_of_new_url_in)),
      network_info(std::move(network_info_in)) {}

RedirectInfo::~RedirectInfo() = default;

void RedirectInfo::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "origin_of_new_url"), this->origin_of_new_url,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::scoped_refptr<const ::blink::SecurityOrigin>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "network_info"), this->network_info,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type CommonNetworkInfoPtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool RedirectInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
ResourceLoadInfo::ResourceLoadInfo()
    : request_id(),
      final_url(),
      referrer(),
      original_url(),
      method(),
      request_destination(),
      request_priority(),
      mime_type(),
      was_cached(),
      was_in_network_service_memory_cache(false),
      network_info(),
      net_error(),
      load_timing_info(),
      raw_body_bytes(),
      total_received_bytes(),
      redirect_info_chain() {}

ResourceLoadInfo::ResourceLoadInfo(
    int64_t request_id_in,
    const ::blink::KURL& final_url_in,
    const ::blink::KURL& referrer_in,
    const ::blink::KURL& original_url_in,
    const WTF::String& method_in,
    ::network::mojom::blink::RequestDestination request_destination_in,
    ::net::RequestPriority request_priority_in,
    const WTF::String& mime_type_in,
    bool was_cached_in,
    bool was_in_network_service_memory_cache_in,
    CommonNetworkInfoPtr network_info_in,
    int32_t net_error_in,
    ::network::mojom::blink::LoadTimingInfoPtr load_timing_info_in,
    int64_t raw_body_bytes_in,
    int64_t total_received_bytes_in,
    WTF::Vector<RedirectInfoPtr> redirect_info_chain_in)
    : request_id(std::move(request_id_in)),
      final_url(std::move(final_url_in)),
      referrer(std::move(referrer_in)),
      original_url(std::move(original_url_in)),
      method(std::move(method_in)),
      request_destination(std::move(request_destination_in)),
      request_priority(std::move(request_priority_in)),
      mime_type(std::move(mime_type_in)),
      was_cached(std::move(was_cached_in)),
      was_in_network_service_memory_cache(std::move(was_in_network_service_memory_cache_in)),
      network_info(std::move(network_info_in)),
      net_error(std::move(net_error_in)),
      load_timing_info(std::move(load_timing_info_in)),
      raw_body_bytes(std::move(raw_body_bytes_in)),
      total_received_bytes(std::move(total_received_bytes_in)),
      redirect_info_chain(std::move(redirect_info_chain_in)) {}

ResourceLoadInfo::~ResourceLoadInfo() = default;

void ResourceLoadInfo::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "request_id"), this->request_id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "final_url"), this->final_url,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::blink::KURL&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "referrer"), this->referrer,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::blink::KURL&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "original_url"), this->original_url,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::blink::KURL&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "method"), this->method,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::String&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "request_destination"), this->request_destination,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::network::mojom::blink::RequestDestination>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "request_priority"), this->request_priority,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::net::RequestPriority>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "mime_type"), this->mime_type,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const WTF::String&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "was_cached"), this->was_cached,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "was_in_network_service_memory_cache"), this->was_in_network_service_memory_cache,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "network_info"), this->network_info,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type CommonNetworkInfoPtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "net_error"), this->net_error,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "load_timing_info"), this->load_timing_info,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::network::mojom::blink::LoadTimingInfoPtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "raw_body_bytes"), this->raw_body_bytes,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "total_received_bytes"), this->total_received_bytes,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "redirect_info_chain"), this->redirect_info_chain,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type WTF::Vector<RedirectInfoPtr>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool ResourceLoadInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::CommonNetworkInfo::DataView, ::blink::mojom::blink::CommonNetworkInfoPtr>::Read(
    ::blink::mojom::blink::CommonNetworkInfo::DataView input,
    ::blink::mojom::blink::CommonNetworkInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::CommonNetworkInfoPtr result(::blink::mojom::blink::CommonNetworkInfo::New());
  
      if (success)
        result->network_accessed = input.network_accessed();
      if (success)
        result->always_access_network = input.always_access_network();
      if (success && !input.ReadRemoteEndpoint(&result->remote_endpoint))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::RedirectInfo::DataView, ::blink::mojom::blink::RedirectInfoPtr>::Read(
    ::blink::mojom::blink::RedirectInfo::DataView input,
    ::blink::mojom::blink::RedirectInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::RedirectInfoPtr result(::blink::mojom::blink::RedirectInfo::New());
  
      if (success && !input.ReadOriginOfNewUrl(&result->origin_of_new_url))
        success = false;
      if (success && !input.ReadNetworkInfo(&result->network_info))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::ResourceLoadInfo::DataView, ::blink::mojom::blink::ResourceLoadInfoPtr>::Read(
    ::blink::mojom::blink::ResourceLoadInfo::DataView input,
    ::blink::mojom::blink::ResourceLoadInfoPtr* output) {
  bool success = true;
  ::blink::mojom::blink::ResourceLoadInfoPtr result(::blink::mojom::blink::ResourceLoadInfo::New());
  
      if (success)
        result->request_id = input.request_id();
      if (success && !input.ReadFinalUrl(&result->final_url))
        success = false;
      if (success && !input.ReadReferrer(&result->referrer))
        success = false;
      if (success && !input.ReadOriginalUrl(&result->original_url))
        success = false;
      if (success && !input.ReadMethod(&result->method))
        success = false;
      if (success && !input.ReadRequestDestination(&result->request_destination))
        success = false;
      if (success && !input.ReadRequestPriority(&result->request_priority))
        success = false;
      if (success && !input.ReadMimeType(&result->mime_type))
        success = false;
      if (success)
        result->was_cached = input.was_cached();
      if (success)
        result->was_in_network_service_memory_cache = input.was_in_network_service_memory_cache();
      if (success && !input.ReadNetworkInfo(&result->network_info))
        success = false;
      if (success)
        result->net_error = input.net_error();
      if (success && !input.ReadLoadTimingInfo(&result->load_timing_info))
        success = false;
      if (success)
        result->raw_body_bytes = input.raw_body_bytes();
      if (success)
        result->total_received_bytes = input.total_received_bytes();
      if (success && !input.ReadRedirectInfoChain(&result->redirect_info_chain))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {
namespace blink {




}  // namespace blink
}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif