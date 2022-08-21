// services/network/public/mojom/url_response_head.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_RESPONSE_HEAD_MOJOM_BLINK_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_RESPONSE_HEAD_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "services/network/public/mojom/url_response_head.mojom-shared.h"
#include "services/network/public/mojom/url_response_head.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "services/network/public/mojom/fetch_api.mojom-blink-forward.h"
#include "services/network/public/mojom/ip_address_space.mojom-blink-forward.h"
#include "services/network/public/mojom/ip_endpoint.mojom-blink.h"
#include "services/network/public/mojom/load_timing_info.mojom-blink.h"
#include "services/network/public/mojom/network_param.mojom-blink.h"
#include "services/network/public/mojom/network_types.mojom-blink.h"
#include "services/network/public/mojom/parsed_headers.mojom-blink.h"
#include "services/proxy_resolver/public/mojom/proxy_resolver.mojom-blink.h"
#include "url/mojom/url.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/public/platform/web_common.h"




namespace network {
namespace mojom {
namespace blink {








class BLINK_PLATFORM_EXPORT URLResponseHead {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<URLResponseHead, T>::value>;
  using DataView = URLResponseHeadDataView;
  using Data_ = internal::URLResponseHead_Data;

  template <typename... Args>
  static URLResponseHeadPtr New(Args&&... args) {
    return URLResponseHeadPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static URLResponseHeadPtr From(const U& u) {
    return mojo::TypeConverter<URLResponseHeadPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, URLResponseHead>::Convert(*this);
  }


  URLResponseHead();

  URLResponseHead(
      ::base::Time request_time,
      ::base::Time response_time,
      ::network::mojom::blink::HttpResponseHeadersPtr headers,
      const WTF::String& mime_type,
      const WTF::String& charset,
      ::network::mojom::blink::CTPolicyCompliance ct_policy_compliance,
      int64_t content_length,
      int64_t encoded_data_length,
      int64_t encoded_body_length,
      bool network_accessed,
      ::network::mojom::blink::LoadTimingInfoPtr load_timing,
      bool emitted_extra_info,
      bool was_fetched_via_spdy,
      bool was_alpn_negotiated,
      bool was_alternate_protocol_available,
      ::net::HttpResponseInfo::ConnectionInfo connection_info,
      const WTF::String& alpn_negotiated_protocol,
      const ::net::IPEndPoint& remote_endpoint,
      ::network::mojom::blink::IPAddressSpace client_address_space,
      ::network::mojom::blink::IPAddressSpace response_address_space,
      bool is_validated,
      bool was_fetched_via_cache,
      ::proxy_resolver::mojom::blink::ProxyServerPtr proxy_server,
      bool was_fetched_via_service_worker,
      ::network::mojom::blink::FetchResponseSource service_worker_response_source,
      WTF::Vector<::blink::KURL> url_list_via_service_worker,
      ::network::mojom::blink::FetchResponseType response_type,
      int64_t padding,
      const WTF::String& cache_storage_cache_name,
      uint32_t cert_status,
      ::network::mojom::blink::SSLInfoPtr ssl_info,
      WTF::Vector<WTF::String> cors_exposed_header_names,
      bool did_service_worker_navigation_preload,
      bool should_report_corb_blocking,
      bool async_revalidation_requested,
      bool did_mime_sniff,
      bool is_signed_exchange_inner_response,
      bool was_in_prefetch_cache,
      bool was_cookie_in_request,
      bool intercepted_by_plugin,
      bool is_legacy_tls_version,
      bool has_range_requested,
      bool timing_allow_passed,
      const absl::optional<::net::AuthChallengeInfo>& auth_challenge_info,
      ::base::TimeTicks request_start,
      ::base::TimeTicks response_start,
      ::network::mojom::blink::ParsedHeadersPtr parsed_headers,
      const absl::optional<::base::UnguessableToken>& recursive_prefetch_token,
      WTF::Vector<WTF::String> dns_aliases,
      const ::blink::KURL& web_bundle_url,
      bool has_authorization_covered_by_wildcard_on_preflight,
      bool request_include_credentials,
      bool has_partitioned_cookie);

URLResponseHead(const URLResponseHead&) = delete;
URLResponseHead& operator=(const URLResponseHead&) = delete;

  ~URLResponseHead();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = URLResponseHeadPtr>
  URLResponseHeadPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, URLResponseHead::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, URLResponseHead::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        URLResponseHead::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        URLResponseHead::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::URLResponseHead_UnserializedMessageContext<
            UserType, URLResponseHead::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<URLResponseHead::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return URLResponseHead::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::URLResponseHead_UnserializedMessageContext<
            UserType, URLResponseHead::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<URLResponseHead::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::base::Time request_time;
  
  ::base::Time response_time;
  
  ::network::mojom::blink::HttpResponseHeadersPtr headers;
  
  WTF::String mime_type;
  
  WTF::String charset;
  
  ::network::mojom::blink::CTPolicyCompliance ct_policy_compliance;
  
  int64_t content_length;
  
  int64_t encoded_data_length;
  
  int64_t encoded_body_length;
  
  bool network_accessed;
  
  ::network::mojom::blink::LoadTimingInfoPtr load_timing;
  
  bool emitted_extra_info;
  
  bool was_fetched_via_spdy;
  
  bool was_alpn_negotiated;
  
  bool was_alternate_protocol_available;
  
  ::net::HttpResponseInfo::ConnectionInfo connection_info;
  
  WTF::String alpn_negotiated_protocol;
  
  ::net::IPEndPoint remote_endpoint;
  
  ::network::mojom::blink::IPAddressSpace client_address_space;
  
  ::network::mojom::blink::IPAddressSpace response_address_space;
  
  bool is_validated;
  
  bool was_fetched_via_cache;
  
  ::proxy_resolver::mojom::blink::ProxyServerPtr proxy_server;
  
  bool was_fetched_via_service_worker;
  
  ::network::mojom::blink::FetchResponseSource service_worker_response_source;
  
  WTF::Vector<::blink::KURL> url_list_via_service_worker;
  
  ::network::mojom::blink::FetchResponseType response_type;
  
  int64_t padding;
  
  WTF::String cache_storage_cache_name;
  
  uint32_t cert_status;
  
  ::network::mojom::blink::SSLInfoPtr ssl_info;
  
  WTF::Vector<WTF::String> cors_exposed_header_names;
  
  bool did_service_worker_navigation_preload;
  
  bool should_report_corb_blocking;
  
  bool async_revalidation_requested;
  
  bool did_mime_sniff;
  
  bool is_signed_exchange_inner_response;
  
  bool was_in_prefetch_cache;
  
  bool was_cookie_in_request;
  
  bool intercepted_by_plugin;
  
  bool is_legacy_tls_version;
  
  bool has_range_requested;
  
  bool timing_allow_passed;
  
  absl::optional<::net::AuthChallengeInfo> auth_challenge_info;
  
  ::base::TimeTicks request_start;
  
  ::base::TimeTicks response_start;
  
  ::network::mojom::blink::ParsedHeadersPtr parsed_headers;
  
  absl::optional<::base::UnguessableToken> recursive_prefetch_token;
  
  WTF::Vector<WTF::String> dns_aliases;
  
  ::blink::KURL web_bundle_url;
  
  bool has_authorization_covered_by_wildcard_on_preflight;
  
  bool request_include_credentials;
  
  bool has_partitioned_cookie;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, URLResponseHead::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, URLResponseHead::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, URLResponseHead::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, URLResponseHead::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
URLResponseHeadPtr URLResponseHead::Clone() const {
  return New(
      mojo::Clone(request_time),
      mojo::Clone(response_time),
      mojo::Clone(headers),
      mojo::Clone(mime_type),
      mojo::Clone(charset),
      mojo::Clone(ct_policy_compliance),
      mojo::Clone(content_length),
      mojo::Clone(encoded_data_length),
      mojo::Clone(encoded_body_length),
      mojo::Clone(network_accessed),
      mojo::Clone(load_timing),
      mojo::Clone(emitted_extra_info),
      mojo::Clone(was_fetched_via_spdy),
      mojo::Clone(was_alpn_negotiated),
      mojo::Clone(was_alternate_protocol_available),
      mojo::Clone(connection_info),
      mojo::Clone(alpn_negotiated_protocol),
      mojo::Clone(remote_endpoint),
      mojo::Clone(client_address_space),
      mojo::Clone(response_address_space),
      mojo::Clone(is_validated),
      mojo::Clone(was_fetched_via_cache),
      mojo::Clone(proxy_server),
      mojo::Clone(was_fetched_via_service_worker),
      mojo::Clone(service_worker_response_source),
      mojo::Clone(url_list_via_service_worker),
      mojo::Clone(response_type),
      mojo::Clone(padding),
      mojo::Clone(cache_storage_cache_name),
      mojo::Clone(cert_status),
      mojo::Clone(ssl_info),
      mojo::Clone(cors_exposed_header_names),
      mojo::Clone(did_service_worker_navigation_preload),
      mojo::Clone(should_report_corb_blocking),
      mojo::Clone(async_revalidation_requested),
      mojo::Clone(did_mime_sniff),
      mojo::Clone(is_signed_exchange_inner_response),
      mojo::Clone(was_in_prefetch_cache),
      mojo::Clone(was_cookie_in_request),
      mojo::Clone(intercepted_by_plugin),
      mojo::Clone(is_legacy_tls_version),
      mojo::Clone(has_range_requested),
      mojo::Clone(timing_allow_passed),
      mojo::Clone(auth_challenge_info),
      mojo::Clone(request_start),
      mojo::Clone(response_start),
      mojo::Clone(parsed_headers),
      mojo::Clone(recursive_prefetch_token),
      mojo::Clone(dns_aliases),
      mojo::Clone(web_bundle_url),
      mojo::Clone(has_authorization_covered_by_wildcard_on_preflight),
      mojo::Clone(request_include_credentials),
      mojo::Clone(has_partitioned_cookie)
  );
}

template <typename T, URLResponseHead::EnableIfSame<T>*>
bool URLResponseHead::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->request_time, other_struct.request_time))
    return false;
  if (!mojo::Equals(this->response_time, other_struct.response_time))
    return false;
  if (!mojo::Equals(this->headers, other_struct.headers))
    return false;
  if (!mojo::Equals(this->mime_type, other_struct.mime_type))
    return false;
  if (!mojo::Equals(this->charset, other_struct.charset))
    return false;
  if (!mojo::Equals(this->ct_policy_compliance, other_struct.ct_policy_compliance))
    return false;
  if (!mojo::Equals(this->content_length, other_struct.content_length))
    return false;
  if (!mojo::Equals(this->encoded_data_length, other_struct.encoded_data_length))
    return false;
  if (!mojo::Equals(this->encoded_body_length, other_struct.encoded_body_length))
    return false;
  if (!mojo::Equals(this->network_accessed, other_struct.network_accessed))
    return false;
  if (!mojo::Equals(this->load_timing, other_struct.load_timing))
    return false;
  if (!mojo::Equals(this->emitted_extra_info, other_struct.emitted_extra_info))
    return false;
  if (!mojo::Equals(this->was_fetched_via_spdy, other_struct.was_fetched_via_spdy))
    return false;
  if (!mojo::Equals(this->was_alpn_negotiated, other_struct.was_alpn_negotiated))
    return false;
  if (!mojo::Equals(this->was_alternate_protocol_available, other_struct.was_alternate_protocol_available))
    return false;
  if (!mojo::Equals(this->connection_info, other_struct.connection_info))
    return false;
  if (!mojo::Equals(this->alpn_negotiated_protocol, other_struct.alpn_negotiated_protocol))
    return false;
  if (!mojo::Equals(this->remote_endpoint, other_struct.remote_endpoint))
    return false;
  if (!mojo::Equals(this->client_address_space, other_struct.client_address_space))
    return false;
  if (!mojo::Equals(this->response_address_space, other_struct.response_address_space))
    return false;
  if (!mojo::Equals(this->is_validated, other_struct.is_validated))
    return false;
  if (!mojo::Equals(this->was_fetched_via_cache, other_struct.was_fetched_via_cache))
    return false;
  if (!mojo::Equals(this->proxy_server, other_struct.proxy_server))
    return false;
  if (!mojo::Equals(this->was_fetched_via_service_worker, other_struct.was_fetched_via_service_worker))
    return false;
  if (!mojo::Equals(this->service_worker_response_source, other_struct.service_worker_response_source))
    return false;
  if (!mojo::Equals(this->url_list_via_service_worker, other_struct.url_list_via_service_worker))
    return false;
  if (!mojo::Equals(this->response_type, other_struct.response_type))
    return false;
  if (!mojo::Equals(this->padding, other_struct.padding))
    return false;
  if (!mojo::Equals(this->cache_storage_cache_name, other_struct.cache_storage_cache_name))
    return false;
  if (!mojo::Equals(this->cert_status, other_struct.cert_status))
    return false;
  if (!mojo::Equals(this->ssl_info, other_struct.ssl_info))
    return false;
  if (!mojo::Equals(this->cors_exposed_header_names, other_struct.cors_exposed_header_names))
    return false;
  if (!mojo::Equals(this->did_service_worker_navigation_preload, other_struct.did_service_worker_navigation_preload))
    return false;
  if (!mojo::Equals(this->should_report_corb_blocking, other_struct.should_report_corb_blocking))
    return false;
  if (!mojo::Equals(this->async_revalidation_requested, other_struct.async_revalidation_requested))
    return false;
  if (!mojo::Equals(this->did_mime_sniff, other_struct.did_mime_sniff))
    return false;
  if (!mojo::Equals(this->is_signed_exchange_inner_response, other_struct.is_signed_exchange_inner_response))
    return false;
  if (!mojo::Equals(this->was_in_prefetch_cache, other_struct.was_in_prefetch_cache))
    return false;
  if (!mojo::Equals(this->was_cookie_in_request, other_struct.was_cookie_in_request))
    return false;
  if (!mojo::Equals(this->intercepted_by_plugin, other_struct.intercepted_by_plugin))
    return false;
  if (!mojo::Equals(this->is_legacy_tls_version, other_struct.is_legacy_tls_version))
    return false;
  if (!mojo::Equals(this->has_range_requested, other_struct.has_range_requested))
    return false;
  if (!mojo::Equals(this->timing_allow_passed, other_struct.timing_allow_passed))
    return false;
  if (!mojo::Equals(this->auth_challenge_info, other_struct.auth_challenge_info))
    return false;
  if (!mojo::Equals(this->request_start, other_struct.request_start))
    return false;
  if (!mojo::Equals(this->response_start, other_struct.response_start))
    return false;
  if (!mojo::Equals(this->parsed_headers, other_struct.parsed_headers))
    return false;
  if (!mojo::Equals(this->recursive_prefetch_token, other_struct.recursive_prefetch_token))
    return false;
  if (!mojo::Equals(this->dns_aliases, other_struct.dns_aliases))
    return false;
  if (!mojo::Equals(this->web_bundle_url, other_struct.web_bundle_url))
    return false;
  if (!mojo::Equals(this->has_authorization_covered_by_wildcard_on_preflight, other_struct.has_authorization_covered_by_wildcard_on_preflight))
    return false;
  if (!mojo::Equals(this->request_include_credentials, other_struct.request_include_credentials))
    return false;
  if (!mojo::Equals(this->has_partitioned_cookie, other_struct.has_partitioned_cookie))
    return false;
  return true;
}

template <typename T, URLResponseHead::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.request_time < rhs.request_time)
    return true;
  if (rhs.request_time < lhs.request_time)
    return false;
  if (lhs.response_time < rhs.response_time)
    return true;
  if (rhs.response_time < lhs.response_time)
    return false;
  if (lhs.headers < rhs.headers)
    return true;
  if (rhs.headers < lhs.headers)
    return false;
  if (lhs.mime_type < rhs.mime_type)
    return true;
  if (rhs.mime_type < lhs.mime_type)
    return false;
  if (lhs.charset < rhs.charset)
    return true;
  if (rhs.charset < lhs.charset)
    return false;
  if (lhs.ct_policy_compliance < rhs.ct_policy_compliance)
    return true;
  if (rhs.ct_policy_compliance < lhs.ct_policy_compliance)
    return false;
  if (lhs.content_length < rhs.content_length)
    return true;
  if (rhs.content_length < lhs.content_length)
    return false;
  if (lhs.encoded_data_length < rhs.encoded_data_length)
    return true;
  if (rhs.encoded_data_length < lhs.encoded_data_length)
    return false;
  if (lhs.encoded_body_length < rhs.encoded_body_length)
    return true;
  if (rhs.encoded_body_length < lhs.encoded_body_length)
    return false;
  if (lhs.network_accessed < rhs.network_accessed)
    return true;
  if (rhs.network_accessed < lhs.network_accessed)
    return false;
  if (lhs.load_timing < rhs.load_timing)
    return true;
  if (rhs.load_timing < lhs.load_timing)
    return false;
  if (lhs.emitted_extra_info < rhs.emitted_extra_info)
    return true;
  if (rhs.emitted_extra_info < lhs.emitted_extra_info)
    return false;
  if (lhs.was_fetched_via_spdy < rhs.was_fetched_via_spdy)
    return true;
  if (rhs.was_fetched_via_spdy < lhs.was_fetched_via_spdy)
    return false;
  if (lhs.was_alpn_negotiated < rhs.was_alpn_negotiated)
    return true;
  if (rhs.was_alpn_negotiated < lhs.was_alpn_negotiated)
    return false;
  if (lhs.was_alternate_protocol_available < rhs.was_alternate_protocol_available)
    return true;
  if (rhs.was_alternate_protocol_available < lhs.was_alternate_protocol_available)
    return false;
  if (lhs.connection_info < rhs.connection_info)
    return true;
  if (rhs.connection_info < lhs.connection_info)
    return false;
  if (lhs.alpn_negotiated_protocol < rhs.alpn_negotiated_protocol)
    return true;
  if (rhs.alpn_negotiated_protocol < lhs.alpn_negotiated_protocol)
    return false;
  if (lhs.remote_endpoint < rhs.remote_endpoint)
    return true;
  if (rhs.remote_endpoint < lhs.remote_endpoint)
    return false;
  if (lhs.client_address_space < rhs.client_address_space)
    return true;
  if (rhs.client_address_space < lhs.client_address_space)
    return false;
  if (lhs.response_address_space < rhs.response_address_space)
    return true;
  if (rhs.response_address_space < lhs.response_address_space)
    return false;
  if (lhs.is_validated < rhs.is_validated)
    return true;
  if (rhs.is_validated < lhs.is_validated)
    return false;
  if (lhs.was_fetched_via_cache < rhs.was_fetched_via_cache)
    return true;
  if (rhs.was_fetched_via_cache < lhs.was_fetched_via_cache)
    return false;
  if (lhs.proxy_server < rhs.proxy_server)
    return true;
  if (rhs.proxy_server < lhs.proxy_server)
    return false;
  if (lhs.was_fetched_via_service_worker < rhs.was_fetched_via_service_worker)
    return true;
  if (rhs.was_fetched_via_service_worker < lhs.was_fetched_via_service_worker)
    return false;
  if (lhs.service_worker_response_source < rhs.service_worker_response_source)
    return true;
  if (rhs.service_worker_response_source < lhs.service_worker_response_source)
    return false;
  if (lhs.url_list_via_service_worker < rhs.url_list_via_service_worker)
    return true;
  if (rhs.url_list_via_service_worker < lhs.url_list_via_service_worker)
    return false;
  if (lhs.response_type < rhs.response_type)
    return true;
  if (rhs.response_type < lhs.response_type)
    return false;
  if (lhs.padding < rhs.padding)
    return true;
  if (rhs.padding < lhs.padding)
    return false;
  if (lhs.cache_storage_cache_name < rhs.cache_storage_cache_name)
    return true;
  if (rhs.cache_storage_cache_name < lhs.cache_storage_cache_name)
    return false;
  if (lhs.cert_status < rhs.cert_status)
    return true;
  if (rhs.cert_status < lhs.cert_status)
    return false;
  if (lhs.ssl_info < rhs.ssl_info)
    return true;
  if (rhs.ssl_info < lhs.ssl_info)
    return false;
  if (lhs.cors_exposed_header_names < rhs.cors_exposed_header_names)
    return true;
  if (rhs.cors_exposed_header_names < lhs.cors_exposed_header_names)
    return false;
  if (lhs.did_service_worker_navigation_preload < rhs.did_service_worker_navigation_preload)
    return true;
  if (rhs.did_service_worker_navigation_preload < lhs.did_service_worker_navigation_preload)
    return false;
  if (lhs.should_report_corb_blocking < rhs.should_report_corb_blocking)
    return true;
  if (rhs.should_report_corb_blocking < lhs.should_report_corb_blocking)
    return false;
  if (lhs.async_revalidation_requested < rhs.async_revalidation_requested)
    return true;
  if (rhs.async_revalidation_requested < lhs.async_revalidation_requested)
    return false;
  if (lhs.did_mime_sniff < rhs.did_mime_sniff)
    return true;
  if (rhs.did_mime_sniff < lhs.did_mime_sniff)
    return false;
  if (lhs.is_signed_exchange_inner_response < rhs.is_signed_exchange_inner_response)
    return true;
  if (rhs.is_signed_exchange_inner_response < lhs.is_signed_exchange_inner_response)
    return false;
  if (lhs.was_in_prefetch_cache < rhs.was_in_prefetch_cache)
    return true;
  if (rhs.was_in_prefetch_cache < lhs.was_in_prefetch_cache)
    return false;
  if (lhs.was_cookie_in_request < rhs.was_cookie_in_request)
    return true;
  if (rhs.was_cookie_in_request < lhs.was_cookie_in_request)
    return false;
  if (lhs.intercepted_by_plugin < rhs.intercepted_by_plugin)
    return true;
  if (rhs.intercepted_by_plugin < lhs.intercepted_by_plugin)
    return false;
  if (lhs.is_legacy_tls_version < rhs.is_legacy_tls_version)
    return true;
  if (rhs.is_legacy_tls_version < lhs.is_legacy_tls_version)
    return false;
  if (lhs.has_range_requested < rhs.has_range_requested)
    return true;
  if (rhs.has_range_requested < lhs.has_range_requested)
    return false;
  if (lhs.timing_allow_passed < rhs.timing_allow_passed)
    return true;
  if (rhs.timing_allow_passed < lhs.timing_allow_passed)
    return false;
  if (lhs.auth_challenge_info < rhs.auth_challenge_info)
    return true;
  if (rhs.auth_challenge_info < lhs.auth_challenge_info)
    return false;
  if (lhs.request_start < rhs.request_start)
    return true;
  if (rhs.request_start < lhs.request_start)
    return false;
  if (lhs.response_start < rhs.response_start)
    return true;
  if (rhs.response_start < lhs.response_start)
    return false;
  if (lhs.parsed_headers < rhs.parsed_headers)
    return true;
  if (rhs.parsed_headers < lhs.parsed_headers)
    return false;
  if (lhs.recursive_prefetch_token < rhs.recursive_prefetch_token)
    return true;
  if (rhs.recursive_prefetch_token < lhs.recursive_prefetch_token)
    return false;
  if (lhs.dns_aliases < rhs.dns_aliases)
    return true;
  if (rhs.dns_aliases < lhs.dns_aliases)
    return false;
  if (lhs.web_bundle_url < rhs.web_bundle_url)
    return true;
  if (rhs.web_bundle_url < lhs.web_bundle_url)
    return false;
  if (lhs.has_authorization_covered_by_wildcard_on_preflight < rhs.has_authorization_covered_by_wildcard_on_preflight)
    return true;
  if (rhs.has_authorization_covered_by_wildcard_on_preflight < lhs.has_authorization_covered_by_wildcard_on_preflight)
    return false;
  if (lhs.request_include_credentials < rhs.request_include_credentials)
    return true;
  if (rhs.request_include_credentials < lhs.request_include_credentials)
    return false;
  if (lhs.has_partitioned_cookie < rhs.has_partitioned_cookie)
    return true;
  if (rhs.has_partitioned_cookie < lhs.has_partitioned_cookie)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace network

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::network::mojom::blink::URLResponseHead::DataView,
                                         ::network::mojom::blink::URLResponseHeadPtr> {
  static bool IsNull(const ::network::mojom::blink::URLResponseHeadPtr& input) { return !input; }
  static void SetToNull(::network::mojom::blink::URLResponseHeadPtr* output) { output->reset(); }

  static const decltype(::network::mojom::blink::URLResponseHead::request_time)& request_time(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->request_time;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::response_time)& response_time(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->response_time;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::headers)& headers(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->headers;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::mime_type)& mime_type(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->mime_type;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::charset)& charset(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->charset;
  }

  static decltype(::network::mojom::blink::URLResponseHead::ct_policy_compliance) ct_policy_compliance(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->ct_policy_compliance;
  }

  static decltype(::network::mojom::blink::URLResponseHead::content_length) content_length(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->content_length;
  }

  static decltype(::network::mojom::blink::URLResponseHead::encoded_data_length) encoded_data_length(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->encoded_data_length;
  }

  static decltype(::network::mojom::blink::URLResponseHead::encoded_body_length) encoded_body_length(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->encoded_body_length;
  }

  static decltype(::network::mojom::blink::URLResponseHead::network_accessed) network_accessed(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->network_accessed;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::load_timing)& load_timing(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->load_timing;
  }

  static decltype(::network::mojom::blink::URLResponseHead::emitted_extra_info) emitted_extra_info(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->emitted_extra_info;
  }

  static decltype(::network::mojom::blink::URLResponseHead::was_fetched_via_spdy) was_fetched_via_spdy(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->was_fetched_via_spdy;
  }

  static decltype(::network::mojom::blink::URLResponseHead::was_alpn_negotiated) was_alpn_negotiated(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->was_alpn_negotiated;
  }

  static decltype(::network::mojom::blink::URLResponseHead::was_alternate_protocol_available) was_alternate_protocol_available(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->was_alternate_protocol_available;
  }

  static decltype(::network::mojom::blink::URLResponseHead::connection_info) connection_info(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->connection_info;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::alpn_negotiated_protocol)& alpn_negotiated_protocol(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->alpn_negotiated_protocol;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::remote_endpoint)& remote_endpoint(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->remote_endpoint;
  }

  static decltype(::network::mojom::blink::URLResponseHead::client_address_space) client_address_space(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->client_address_space;
  }

  static decltype(::network::mojom::blink::URLResponseHead::response_address_space) response_address_space(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->response_address_space;
  }

  static decltype(::network::mojom::blink::URLResponseHead::is_validated) is_validated(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->is_validated;
  }

  static decltype(::network::mojom::blink::URLResponseHead::was_fetched_via_cache) was_fetched_via_cache(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->was_fetched_via_cache;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::proxy_server)& proxy_server(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->proxy_server;
  }

  static decltype(::network::mojom::blink::URLResponseHead::was_fetched_via_service_worker) was_fetched_via_service_worker(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->was_fetched_via_service_worker;
  }

  static decltype(::network::mojom::blink::URLResponseHead::service_worker_response_source) service_worker_response_source(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->service_worker_response_source;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::url_list_via_service_worker)& url_list_via_service_worker(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->url_list_via_service_worker;
  }

  static decltype(::network::mojom::blink::URLResponseHead::response_type) response_type(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->response_type;
  }

  static decltype(::network::mojom::blink::URLResponseHead::padding) padding(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->padding;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::cache_storage_cache_name)& cache_storage_cache_name(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->cache_storage_cache_name;
  }

  static decltype(::network::mojom::blink::URLResponseHead::cert_status) cert_status(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->cert_status;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::ssl_info)& ssl_info(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->ssl_info;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::cors_exposed_header_names)& cors_exposed_header_names(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->cors_exposed_header_names;
  }

  static decltype(::network::mojom::blink::URLResponseHead::did_service_worker_navigation_preload) did_service_worker_navigation_preload(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->did_service_worker_navigation_preload;
  }

  static decltype(::network::mojom::blink::URLResponseHead::should_report_corb_blocking) should_report_corb_blocking(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->should_report_corb_blocking;
  }

  static decltype(::network::mojom::blink::URLResponseHead::async_revalidation_requested) async_revalidation_requested(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->async_revalidation_requested;
  }

  static decltype(::network::mojom::blink::URLResponseHead::did_mime_sniff) did_mime_sniff(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->did_mime_sniff;
  }

  static decltype(::network::mojom::blink::URLResponseHead::is_signed_exchange_inner_response) is_signed_exchange_inner_response(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->is_signed_exchange_inner_response;
  }

  static decltype(::network::mojom::blink::URLResponseHead::was_in_prefetch_cache) was_in_prefetch_cache(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->was_in_prefetch_cache;
  }

  static decltype(::network::mojom::blink::URLResponseHead::was_cookie_in_request) was_cookie_in_request(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->was_cookie_in_request;
  }

  static decltype(::network::mojom::blink::URLResponseHead::intercepted_by_plugin) intercepted_by_plugin(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->intercepted_by_plugin;
  }

  static decltype(::network::mojom::blink::URLResponseHead::is_legacy_tls_version) is_legacy_tls_version(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->is_legacy_tls_version;
  }

  static decltype(::network::mojom::blink::URLResponseHead::has_range_requested) has_range_requested(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->has_range_requested;
  }

  static decltype(::network::mojom::blink::URLResponseHead::timing_allow_passed) timing_allow_passed(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->timing_allow_passed;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::auth_challenge_info)& auth_challenge_info(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->auth_challenge_info;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::request_start)& request_start(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->request_start;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::response_start)& response_start(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->response_start;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::parsed_headers)& parsed_headers(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->parsed_headers;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::recursive_prefetch_token)& recursive_prefetch_token(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->recursive_prefetch_token;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::dns_aliases)& dns_aliases(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->dns_aliases;
  }

  static const decltype(::network::mojom::blink::URLResponseHead::web_bundle_url)& web_bundle_url(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->web_bundle_url;
  }

  static decltype(::network::mojom::blink::URLResponseHead::has_authorization_covered_by_wildcard_on_preflight) has_authorization_covered_by_wildcard_on_preflight(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->has_authorization_covered_by_wildcard_on_preflight;
  }

  static decltype(::network::mojom::blink::URLResponseHead::request_include_credentials) request_include_credentials(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->request_include_credentials;
  }

  static decltype(::network::mojom::blink::URLResponseHead::has_partitioned_cookie) has_partitioned_cookie(
      const ::network::mojom::blink::URLResponseHeadPtr& input) {
    return input->has_partitioned_cookie;
  }

  static bool Read(::network::mojom::blink::URLResponseHead::DataView input, ::network::mojom::blink::URLResponseHeadPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_RESPONSE_HEAD_MOJOM_BLINK_H_