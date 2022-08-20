// third_party/blink/public/mojom/fetch/fetch_api_response.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-shared.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_response.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "services/network/public/mojom/fetch_api.mojom-blink-forward.h"
#include "services/network/public/mojom/parsed_headers.mojom-blink.h"
#include "services/network/public/mojom/network_param.mojom-blink.h"
#include "services/network/public/mojom/network_types.mojom-blink.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom-blink.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_error_type.mojom-blink-forward.h"
#include "url/mojom/url.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "mojo/public/cpp/bindings/lib/native_enum_serialization.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"
#include "third_party/blink/renderer/platform/platform_export.h"




namespace blink {
namespace mojom {
namespace blink {








class PLATFORM_EXPORT FetchAPIResponse {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<FetchAPIResponse, T>::value>;
  using DataView = FetchAPIResponseDataView;
  using Data_ = internal::FetchAPIResponse_Data;

  template <typename... Args>
  static FetchAPIResponsePtr New(Args&&... args) {
    return FetchAPIResponsePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FetchAPIResponsePtr From(const U& u) {
    return mojo::TypeConverter<FetchAPIResponsePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FetchAPIResponse>::Convert(*this);
  }


  FetchAPIResponse();

  FetchAPIResponse(
      WTF::Vector<::blink::KURL> url_list,
      uint16_t status_code,
      const WTF::String& status_text,
      ::network::mojom::blink::FetchResponseType response_type,
      int64_t padding,
      ::network::mojom::blink::FetchResponseSource response_source,
      const WTF::HashMap<WTF::String, WTF::String>& headers,
      const WTF::String& mime_type,
      const WTF::String& request_method,
      const ::scoped_refptr<::blink::BlobDataHandle>& blob,
      ::blink::mojom::blink::ServiceWorkerResponseError error,
      ::base::Time response_time,
      const WTF::String& cache_storage_cache_name,
      WTF::Vector<WTF::String> cors_exposed_header_names,
      const ::scoped_refptr<::blink::BlobDataHandle>& side_data_blob,
      const ::scoped_refptr<::blink::BlobDataHandle>& side_data_blob_for_cache_put,
      ::network::mojom::blink::ParsedHeadersPtr parsed_headers,
      ::net::HttpResponseInfo::ConnectionInfo connection_info,
      const WTF::String& alpn_negotiated_protocol,
      bool was_fetched_via_spdy,
      bool has_range_requested,
      const absl::optional<::net::AuthChallengeInfo>& auth_challenge_info,
      bool request_include_credentials);

FetchAPIResponse(const FetchAPIResponse&) = delete;
FetchAPIResponse& operator=(const FetchAPIResponse&) = delete;

  ~FetchAPIResponse();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FetchAPIResponsePtr>
  FetchAPIResponsePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, FetchAPIResponse::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, FetchAPIResponse::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FetchAPIResponse::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FetchAPIResponse_UnserializedMessageContext<
            UserType, FetchAPIResponse::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<FetchAPIResponse::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FetchAPIResponse::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FetchAPIResponse_UnserializedMessageContext<
            UserType, FetchAPIResponse::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FetchAPIResponse::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::Vector<::blink::KURL> url_list;
  
  uint16_t status_code;
  
  WTF::String status_text;
  
  ::network::mojom::blink::FetchResponseType response_type;
  
  int64_t padding;
  
  ::network::mojom::blink::FetchResponseSource response_source;
  
  WTF::HashMap<WTF::String, WTF::String> headers;
  
  WTF::String mime_type;
  
  WTF::String request_method;
  
  ::scoped_refptr<::blink::BlobDataHandle> blob;
  
  ::blink::mojom::blink::ServiceWorkerResponseError error;
  
  ::base::Time response_time;
  
  WTF::String cache_storage_cache_name;
  
  WTF::Vector<WTF::String> cors_exposed_header_names;
  
  ::scoped_refptr<::blink::BlobDataHandle> side_data_blob;
  
  ::scoped_refptr<::blink::BlobDataHandle> side_data_blob_for_cache_put;
  
  ::network::mojom::blink::ParsedHeadersPtr parsed_headers;
  
  ::net::HttpResponseInfo::ConnectionInfo connection_info;
  
  WTF::String alpn_negotiated_protocol;
  
  bool was_fetched_via_spdy;
  
  bool has_range_requested;
  
  absl::optional<::net::AuthChallengeInfo> auth_challenge_info;
  
  bool request_include_credentials;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, FetchAPIResponse::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, FetchAPIResponse::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, FetchAPIResponse::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, FetchAPIResponse::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
FetchAPIResponsePtr FetchAPIResponse::Clone() const {
  return New(
      mojo::Clone(url_list),
      mojo::Clone(status_code),
      mojo::Clone(status_text),
      mojo::Clone(response_type),
      mojo::Clone(padding),
      mojo::Clone(response_source),
      mojo::Clone(headers),
      mojo::Clone(mime_type),
      mojo::Clone(request_method),
      mojo::Clone(blob),
      mojo::Clone(error),
      mojo::Clone(response_time),
      mojo::Clone(cache_storage_cache_name),
      mojo::Clone(cors_exposed_header_names),
      mojo::Clone(side_data_blob),
      mojo::Clone(side_data_blob_for_cache_put),
      mojo::Clone(parsed_headers),
      mojo::Clone(connection_info),
      mojo::Clone(alpn_negotiated_protocol),
      mojo::Clone(was_fetched_via_spdy),
      mojo::Clone(has_range_requested),
      mojo::Clone(auth_challenge_info),
      mojo::Clone(request_include_credentials)
  );
}

template <typename T, FetchAPIResponse::EnableIfSame<T>*>
bool FetchAPIResponse::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->url_list, other_struct.url_list))
    return false;
  if (!mojo::Equals(this->status_code, other_struct.status_code))
    return false;
  if (!mojo::Equals(this->status_text, other_struct.status_text))
    return false;
  if (!mojo::Equals(this->response_type, other_struct.response_type))
    return false;
  if (!mojo::Equals(this->padding, other_struct.padding))
    return false;
  if (!mojo::Equals(this->response_source, other_struct.response_source))
    return false;
  if (!mojo::Equals(this->headers, other_struct.headers))
    return false;
  if (!mojo::Equals(this->mime_type, other_struct.mime_type))
    return false;
  if (!mojo::Equals(this->request_method, other_struct.request_method))
    return false;
  if (!mojo::Equals(this->blob, other_struct.blob))
    return false;
  if (!mojo::Equals(this->error, other_struct.error))
    return false;
  if (!mojo::Equals(this->response_time, other_struct.response_time))
    return false;
  if (!mojo::Equals(this->cache_storage_cache_name, other_struct.cache_storage_cache_name))
    return false;
  if (!mojo::Equals(this->cors_exposed_header_names, other_struct.cors_exposed_header_names))
    return false;
  if (!mojo::Equals(this->side_data_blob, other_struct.side_data_blob))
    return false;
  if (!mojo::Equals(this->side_data_blob_for_cache_put, other_struct.side_data_blob_for_cache_put))
    return false;
  if (!mojo::Equals(this->parsed_headers, other_struct.parsed_headers))
    return false;
  if (!mojo::Equals(this->connection_info, other_struct.connection_info))
    return false;
  if (!mojo::Equals(this->alpn_negotiated_protocol, other_struct.alpn_negotiated_protocol))
    return false;
  if (!mojo::Equals(this->was_fetched_via_spdy, other_struct.was_fetched_via_spdy))
    return false;
  if (!mojo::Equals(this->has_range_requested, other_struct.has_range_requested))
    return false;
  if (!mojo::Equals(this->auth_challenge_info, other_struct.auth_challenge_info))
    return false;
  if (!mojo::Equals(this->request_include_credentials, other_struct.request_include_credentials))
    return false;
  return true;
}

template <typename T, FetchAPIResponse::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.url_list < rhs.url_list)
    return true;
  if (rhs.url_list < lhs.url_list)
    return false;
  if (lhs.status_code < rhs.status_code)
    return true;
  if (rhs.status_code < lhs.status_code)
    return false;
  if (lhs.status_text < rhs.status_text)
    return true;
  if (rhs.status_text < lhs.status_text)
    return false;
  if (lhs.response_type < rhs.response_type)
    return true;
  if (rhs.response_type < lhs.response_type)
    return false;
  if (lhs.padding < rhs.padding)
    return true;
  if (rhs.padding < lhs.padding)
    return false;
  if (lhs.response_source < rhs.response_source)
    return true;
  if (rhs.response_source < lhs.response_source)
    return false;
  if (lhs.headers < rhs.headers)
    return true;
  if (rhs.headers < lhs.headers)
    return false;
  if (lhs.mime_type < rhs.mime_type)
    return true;
  if (rhs.mime_type < lhs.mime_type)
    return false;
  if (lhs.request_method < rhs.request_method)
    return true;
  if (rhs.request_method < lhs.request_method)
    return false;
  if (lhs.blob < rhs.blob)
    return true;
  if (rhs.blob < lhs.blob)
    return false;
  if (lhs.error < rhs.error)
    return true;
  if (rhs.error < lhs.error)
    return false;
  if (lhs.response_time < rhs.response_time)
    return true;
  if (rhs.response_time < lhs.response_time)
    return false;
  if (lhs.cache_storage_cache_name < rhs.cache_storage_cache_name)
    return true;
  if (rhs.cache_storage_cache_name < lhs.cache_storage_cache_name)
    return false;
  if (lhs.cors_exposed_header_names < rhs.cors_exposed_header_names)
    return true;
  if (rhs.cors_exposed_header_names < lhs.cors_exposed_header_names)
    return false;
  if (lhs.side_data_blob < rhs.side_data_blob)
    return true;
  if (rhs.side_data_blob < lhs.side_data_blob)
    return false;
  if (lhs.side_data_blob_for_cache_put < rhs.side_data_blob_for_cache_put)
    return true;
  if (rhs.side_data_blob_for_cache_put < lhs.side_data_blob_for_cache_put)
    return false;
  if (lhs.parsed_headers < rhs.parsed_headers)
    return true;
  if (rhs.parsed_headers < lhs.parsed_headers)
    return false;
  if (lhs.connection_info < rhs.connection_info)
    return true;
  if (rhs.connection_info < lhs.connection_info)
    return false;
  if (lhs.alpn_negotiated_protocol < rhs.alpn_negotiated_protocol)
    return true;
  if (rhs.alpn_negotiated_protocol < lhs.alpn_negotiated_protocol)
    return false;
  if (lhs.was_fetched_via_spdy < rhs.was_fetched_via_spdy)
    return true;
  if (rhs.was_fetched_via_spdy < lhs.was_fetched_via_spdy)
    return false;
  if (lhs.has_range_requested < rhs.has_range_requested)
    return true;
  if (rhs.has_range_requested < lhs.has_range_requested)
    return false;
  if (lhs.auth_challenge_info < rhs.auth_challenge_info)
    return true;
  if (rhs.auth_challenge_info < lhs.auth_challenge_info)
    return false;
  if (lhs.request_include_credentials < rhs.request_include_credentials)
    return true;
  if (rhs.request_include_credentials < lhs.request_include_credentials)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::FetchAPIResponse::DataView,
                                         ::blink::mojom::blink::FetchAPIResponsePtr> {
  static bool IsNull(const ::blink::mojom::blink::FetchAPIResponsePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::FetchAPIResponsePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::url_list)& url_list(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->url_list;
  }

  static decltype(::blink::mojom::blink::FetchAPIResponse::status_code) status_code(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->status_code;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::status_text)& status_text(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->status_text;
  }

  static decltype(::blink::mojom::blink::FetchAPIResponse::response_type) response_type(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->response_type;
  }

  static decltype(::blink::mojom::blink::FetchAPIResponse::padding) padding(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->padding;
  }

  static decltype(::blink::mojom::blink::FetchAPIResponse::response_source) response_source(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->response_source;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::headers)& headers(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->headers;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::mime_type)& mime_type(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->mime_type;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::request_method)& request_method(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->request_method;
  }

  static  decltype(::blink::mojom::blink::FetchAPIResponse::blob)& blob(
       ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->blob;
  }

  static decltype(::blink::mojom::blink::FetchAPIResponse::error) error(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->error;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::response_time)& response_time(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->response_time;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::cache_storage_cache_name)& cache_storage_cache_name(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->cache_storage_cache_name;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::cors_exposed_header_names)& cors_exposed_header_names(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->cors_exposed_header_names;
  }

  static  decltype(::blink::mojom::blink::FetchAPIResponse::side_data_blob)& side_data_blob(
       ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->side_data_blob;
  }

  static  decltype(::blink::mojom::blink::FetchAPIResponse::side_data_blob_for_cache_put)& side_data_blob_for_cache_put(
       ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->side_data_blob_for_cache_put;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::parsed_headers)& parsed_headers(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->parsed_headers;
  }

  static decltype(::blink::mojom::blink::FetchAPIResponse::connection_info) connection_info(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->connection_info;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::alpn_negotiated_protocol)& alpn_negotiated_protocol(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->alpn_negotiated_protocol;
  }

  static decltype(::blink::mojom::blink::FetchAPIResponse::was_fetched_via_spdy) was_fetched_via_spdy(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->was_fetched_via_spdy;
  }

  static decltype(::blink::mojom::blink::FetchAPIResponse::has_range_requested) has_range_requested(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->has_range_requested;
  }

  static const decltype(::blink::mojom::blink::FetchAPIResponse::auth_challenge_info)& auth_challenge_info(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->auth_challenge_info;
  }

  static decltype(::blink::mojom::blink::FetchAPIResponse::request_include_credentials) request_include_credentials(
      const ::blink::mojom::blink::FetchAPIResponsePtr& input) {
    return input->request_include_credentials;
  }

  static bool Read(::blink::mojom::blink::FetchAPIResponse::DataView input, ::blink::mojom::blink::FetchAPIResponsePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_RESPONSE_MOJOM_BLINK_H_