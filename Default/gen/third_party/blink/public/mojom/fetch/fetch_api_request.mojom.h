// third_party/blink/public/mojom/fetch/fetch_api_request.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_H_

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

#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-shared.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-forward.h"
#include "mojo/public/mojom/base/file_path.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom.h"
#include "services/network/public/mojom/ip_address_space.mojom-forward.h"
#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-forward.h"
#include "services/network/public/mojom/fetch_api.mojom-forward.h"
#include "services/network/public/mojom/request_priority.mojom.h"
#include "services/network/public/mojom/trust_tokens.mojom.h"
#include "services/network/public/mojom/url_request.mojom.h"
#include "third_party/blink/public/mojom/blob/serialized_blob.mojom.h"
#include "third_party/blink/public/mojom/loader/request_context_frame_type.mojom-forward.h"
#include "third_party/blink/public/mojom/loader/referrer.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/common/fetch/fetch_api_request_body_mojom_traits.h"
#include "third_party/blink/public/common/fetch/fetch_api_request_headers_mojom_traits.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {










class BLINK_COMMON_EXPORT FetchAPIRequestHeaders {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<FetchAPIRequestHeaders, T>::value>;
  using DataView = FetchAPIRequestHeadersDataView;
  using Data_ = internal::FetchAPIRequestHeaders_Data;

  template <typename... Args>
  static FetchAPIRequestHeadersPtr New(Args&&... args) {
    return FetchAPIRequestHeadersPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FetchAPIRequestHeadersPtr From(const U& u) {
    return mojo::TypeConverter<FetchAPIRequestHeadersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FetchAPIRequestHeaders>::Convert(*this);
  }


  FetchAPIRequestHeaders();

  explicit FetchAPIRequestHeaders(
      const base::flat_map<std::string, std::string>& headers);


  ~FetchAPIRequestHeaders();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FetchAPIRequestHeadersPtr>
  FetchAPIRequestHeadersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, FetchAPIRequestHeaders::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, FetchAPIRequestHeaders::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FetchAPIRequestHeaders::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FetchAPIRequestHeaders::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FetchAPIRequestHeaders_UnserializedMessageContext<
            UserType, FetchAPIRequestHeaders::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<FetchAPIRequestHeaders::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FetchAPIRequestHeaders::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FetchAPIRequestHeaders_UnserializedMessageContext<
            UserType, FetchAPIRequestHeaders::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FetchAPIRequestHeaders::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  base::flat_map<std::string, std::string> headers;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, FetchAPIRequestHeaders::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, FetchAPIRequestHeaders::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, FetchAPIRequestHeaders::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, FetchAPIRequestHeaders::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class BLINK_COMMON_EXPORT FetchAPIRequestBody {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<FetchAPIRequestBody, T>::value>;
  using DataView = FetchAPIRequestBodyDataView;
  using Data_ = internal::FetchAPIRequestBody_Data;

  template <typename... Args>
  static FetchAPIRequestBodyPtr New(Args&&... args) {
    return FetchAPIRequestBodyPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FetchAPIRequestBodyPtr From(const U& u) {
    return mojo::TypeConverter<FetchAPIRequestBodyPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FetchAPIRequestBody>::Convert(*this);
  }


  FetchAPIRequestBody();

  FetchAPIRequestBody(
      std::vector<::network::DataElement> elements,
      uint64_t identifier,
      bool contains_sensitive_info);

FetchAPIRequestBody(const FetchAPIRequestBody&) = delete;
FetchAPIRequestBody& operator=(const FetchAPIRequestBody&) = delete;

  ~FetchAPIRequestBody();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FetchAPIRequestBodyPtr>
  FetchAPIRequestBodyPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, FetchAPIRequestBody::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, FetchAPIRequestBody::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FetchAPIRequestBody::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FetchAPIRequestBody_UnserializedMessageContext<
            UserType, FetchAPIRequestBody::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<FetchAPIRequestBody::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FetchAPIRequestBody::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FetchAPIRequestBody_UnserializedMessageContext<
            UserType, FetchAPIRequestBody::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FetchAPIRequestBody::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  std::vector<::network::DataElement> elements;
  
  uint64_t identifier;
  
  bool contains_sensitive_info;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, FetchAPIRequestBody::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, FetchAPIRequestBody::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, FetchAPIRequestBody::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, FetchAPIRequestBody::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class BLINK_COMMON_EXPORT FetchAPIRequest {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<FetchAPIRequest, T>::value>;
  using DataView = FetchAPIRequestDataView;
  using Data_ = internal::FetchAPIRequest_Data;

  template <typename... Args>
  static FetchAPIRequestPtr New(Args&&... args) {
    return FetchAPIRequestPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FetchAPIRequestPtr From(const U& u) {
    return mojo::TypeConverter<FetchAPIRequestPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FetchAPIRequest>::Convert(*this);
  }


  FetchAPIRequest();

  FetchAPIRequest(
      ::network::mojom::RequestMode mode,
      bool is_main_resource_load,
      ::network::mojom::RequestDestination destination,
      ::blink::mojom::RequestContextFrameType frame_type,
      const ::GURL& url,
      const std::string& method,
      ::blink::FetchAPIRequestHeadersMap headers,
      ::blink::mojom::SerializedBlobPtr blob,
      ::scoped_refptr<::network::ResourceRequestBody> body,
      const absl::optional<::url::Origin>& request_initiator,
      std::vector<::GURL> navigation_redirect_chain,
      ::blink::mojom::ReferrerPtr referrer,
      ::network::mojom::CredentialsMode credentials_mode,
      FetchCacheMode cache_mode,
      ::network::mojom::RedirectMode redirect_mode,
      const absl::optional<std::string>& integrity,
      ::net::RequestPriority priority,
      const absl::optional<::base::UnguessableToken>& fetch_window_id,
      bool keepalive,
      bool is_reload,
      bool is_history_navigation,
      const absl::optional<std::string>& devtools_stack_id,
      ::network::mojom::TrustTokenParamsPtr trust_token_params,
      ::network::mojom::IPAddressSpace target_address_space);

FetchAPIRequest(const FetchAPIRequest&) = delete;
FetchAPIRequest& operator=(const FetchAPIRequest&) = delete;

  ~FetchAPIRequest();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FetchAPIRequestPtr>
  FetchAPIRequestPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, FetchAPIRequest::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, FetchAPIRequest::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FetchAPIRequest::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FetchAPIRequest_UnserializedMessageContext<
            UserType, FetchAPIRequest::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<FetchAPIRequest::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FetchAPIRequest::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FetchAPIRequest_UnserializedMessageContext<
            UserType, FetchAPIRequest::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FetchAPIRequest::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::network::mojom::RequestMode mode;
  
  bool is_main_resource_load;
  
  ::network::mojom::RequestDestination destination;
  
  ::blink::mojom::RequestContextFrameType frame_type;
  
  ::GURL url;
  
  std::string method;
  
  ::blink::FetchAPIRequestHeadersMap headers;
  
  ::blink::mojom::SerializedBlobPtr blob;
  
  ::scoped_refptr<::network::ResourceRequestBody> body;
  
  absl::optional<::url::Origin> request_initiator;
  
  std::vector<::GURL> navigation_redirect_chain;
  
  ::blink::mojom::ReferrerPtr referrer;
  
  ::network::mojom::CredentialsMode credentials_mode;
  
  FetchCacheMode cache_mode;
  
  ::network::mojom::RedirectMode redirect_mode;
  
  absl::optional<std::string> integrity;
  
  ::net::RequestPriority priority;
  
  absl::optional<::base::UnguessableToken> fetch_window_id;
  
  bool keepalive;
  
  bool is_reload;
  
  bool is_history_navigation;
  
  absl::optional<std::string> devtools_stack_id;
  
  ::network::mojom::TrustTokenParamsPtr trust_token_params;
  
  ::network::mojom::IPAddressSpace target_address_space;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, FetchAPIRequest::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, FetchAPIRequest::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, FetchAPIRequest::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, FetchAPIRequest::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
FetchAPIRequestHeadersPtr FetchAPIRequestHeaders::Clone() const {
  return New(
      mojo::Clone(headers)
  );
}

template <typename T, FetchAPIRequestHeaders::EnableIfSame<T>*>
bool FetchAPIRequestHeaders::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->headers, other_struct.headers))
    return false;
  return true;
}

template <typename T, FetchAPIRequestHeaders::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.headers < rhs.headers)
    return true;
  if (rhs.headers < lhs.headers)
    return false;
  return false;
}
template <typename StructPtrType>
FetchAPIRequestBodyPtr FetchAPIRequestBody::Clone() const {
  return New(
      mojo::Clone(elements),
      mojo::Clone(identifier),
      mojo::Clone(contains_sensitive_info)
  );
}

template <typename T, FetchAPIRequestBody::EnableIfSame<T>*>
bool FetchAPIRequestBody::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->elements, other_struct.elements))
    return false;
  if (!mojo::Equals(this->identifier, other_struct.identifier))
    return false;
  if (!mojo::Equals(this->contains_sensitive_info, other_struct.contains_sensitive_info))
    return false;
  return true;
}

template <typename T, FetchAPIRequestBody::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.elements < rhs.elements)
    return true;
  if (rhs.elements < lhs.elements)
    return false;
  if (lhs.identifier < rhs.identifier)
    return true;
  if (rhs.identifier < lhs.identifier)
    return false;
  if (lhs.contains_sensitive_info < rhs.contains_sensitive_info)
    return true;
  if (rhs.contains_sensitive_info < lhs.contains_sensitive_info)
    return false;
  return false;
}
template <typename StructPtrType>
FetchAPIRequestPtr FetchAPIRequest::Clone() const {
  return New(
      mojo::Clone(mode),
      mojo::Clone(is_main_resource_load),
      mojo::Clone(destination),
      mojo::Clone(frame_type),
      mojo::Clone(url),
      mojo::Clone(method),
      mojo::Clone(headers),
      mojo::Clone(blob),
      mojo::Clone(body),
      mojo::Clone(request_initiator),
      mojo::Clone(navigation_redirect_chain),
      mojo::Clone(referrer),
      mojo::Clone(credentials_mode),
      mojo::Clone(cache_mode),
      mojo::Clone(redirect_mode),
      mojo::Clone(integrity),
      mojo::Clone(priority),
      mojo::Clone(fetch_window_id),
      mojo::Clone(keepalive),
      mojo::Clone(is_reload),
      mojo::Clone(is_history_navigation),
      mojo::Clone(devtools_stack_id),
      mojo::Clone(trust_token_params),
      mojo::Clone(target_address_space)
  );
}

template <typename T, FetchAPIRequest::EnableIfSame<T>*>
bool FetchAPIRequest::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->mode, other_struct.mode))
    return false;
  if (!mojo::Equals(this->is_main_resource_load, other_struct.is_main_resource_load))
    return false;
  if (!mojo::Equals(this->destination, other_struct.destination))
    return false;
  if (!mojo::Equals(this->frame_type, other_struct.frame_type))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->method, other_struct.method))
    return false;
  if (!mojo::Equals(this->headers, other_struct.headers))
    return false;
  if (!mojo::Equals(this->blob, other_struct.blob))
    return false;
  if (!mojo::Equals(this->body, other_struct.body))
    return false;
  if (!mojo::Equals(this->request_initiator, other_struct.request_initiator))
    return false;
  if (!mojo::Equals(this->navigation_redirect_chain, other_struct.navigation_redirect_chain))
    return false;
  if (!mojo::Equals(this->referrer, other_struct.referrer))
    return false;
  if (!mojo::Equals(this->credentials_mode, other_struct.credentials_mode))
    return false;
  if (!mojo::Equals(this->cache_mode, other_struct.cache_mode))
    return false;
  if (!mojo::Equals(this->redirect_mode, other_struct.redirect_mode))
    return false;
  if (!mojo::Equals(this->integrity, other_struct.integrity))
    return false;
  if (!mojo::Equals(this->priority, other_struct.priority))
    return false;
  if (!mojo::Equals(this->fetch_window_id, other_struct.fetch_window_id))
    return false;
  if (!mojo::Equals(this->keepalive, other_struct.keepalive))
    return false;
  if (!mojo::Equals(this->is_reload, other_struct.is_reload))
    return false;
  if (!mojo::Equals(this->is_history_navigation, other_struct.is_history_navigation))
    return false;
  if (!mojo::Equals(this->devtools_stack_id, other_struct.devtools_stack_id))
    return false;
  if (!mojo::Equals(this->trust_token_params, other_struct.trust_token_params))
    return false;
  if (!mojo::Equals(this->target_address_space, other_struct.target_address_space))
    return false;
  return true;
}

template <typename T, FetchAPIRequest::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.mode < rhs.mode)
    return true;
  if (rhs.mode < lhs.mode)
    return false;
  if (lhs.is_main_resource_load < rhs.is_main_resource_load)
    return true;
  if (rhs.is_main_resource_load < lhs.is_main_resource_load)
    return false;
  if (lhs.destination < rhs.destination)
    return true;
  if (rhs.destination < lhs.destination)
    return false;
  if (lhs.frame_type < rhs.frame_type)
    return true;
  if (rhs.frame_type < lhs.frame_type)
    return false;
  if (lhs.url < rhs.url)
    return true;
  if (rhs.url < lhs.url)
    return false;
  if (lhs.method < rhs.method)
    return true;
  if (rhs.method < lhs.method)
    return false;
  if (lhs.headers < rhs.headers)
    return true;
  if (rhs.headers < lhs.headers)
    return false;
  if (lhs.blob < rhs.blob)
    return true;
  if (rhs.blob < lhs.blob)
    return false;
  if (lhs.body < rhs.body)
    return true;
  if (rhs.body < lhs.body)
    return false;
  if (lhs.request_initiator < rhs.request_initiator)
    return true;
  if (rhs.request_initiator < lhs.request_initiator)
    return false;
  if (lhs.navigation_redirect_chain < rhs.navigation_redirect_chain)
    return true;
  if (rhs.navigation_redirect_chain < lhs.navigation_redirect_chain)
    return false;
  if (lhs.referrer < rhs.referrer)
    return true;
  if (rhs.referrer < lhs.referrer)
    return false;
  if (lhs.credentials_mode < rhs.credentials_mode)
    return true;
  if (rhs.credentials_mode < lhs.credentials_mode)
    return false;
  if (lhs.cache_mode < rhs.cache_mode)
    return true;
  if (rhs.cache_mode < lhs.cache_mode)
    return false;
  if (lhs.redirect_mode < rhs.redirect_mode)
    return true;
  if (rhs.redirect_mode < lhs.redirect_mode)
    return false;
  if (lhs.integrity < rhs.integrity)
    return true;
  if (rhs.integrity < lhs.integrity)
    return false;
  if (lhs.priority < rhs.priority)
    return true;
  if (rhs.priority < lhs.priority)
    return false;
  if (lhs.fetch_window_id < rhs.fetch_window_id)
    return true;
  if (rhs.fetch_window_id < lhs.fetch_window_id)
    return false;
  if (lhs.keepalive < rhs.keepalive)
    return true;
  if (rhs.keepalive < lhs.keepalive)
    return false;
  if (lhs.is_reload < rhs.is_reload)
    return true;
  if (rhs.is_reload < lhs.is_reload)
    return false;
  if (lhs.is_history_navigation < rhs.is_history_navigation)
    return true;
  if (rhs.is_history_navigation < lhs.is_history_navigation)
    return false;
  if (lhs.devtools_stack_id < rhs.devtools_stack_id)
    return true;
  if (rhs.devtools_stack_id < lhs.devtools_stack_id)
    return false;
  if (lhs.trust_token_params < rhs.trust_token_params)
    return true;
  if (rhs.trust_token_params < lhs.trust_token_params)
    return false;
  if (lhs.target_address_space < rhs.target_address_space)
    return true;
  if (rhs.target_address_space < lhs.target_address_space)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::FetchAPIRequestHeaders::DataView,
                                         ::blink::mojom::FetchAPIRequestHeadersPtr> {
  static bool IsNull(const ::blink::mojom::FetchAPIRequestHeadersPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::FetchAPIRequestHeadersPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::FetchAPIRequestHeaders::headers)& headers(
      const ::blink::mojom::FetchAPIRequestHeadersPtr& input) {
    return input->headers;
  }

  static bool Read(::blink::mojom::FetchAPIRequestHeaders::DataView input, ::blink::mojom::FetchAPIRequestHeadersPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::FetchAPIRequestBody::DataView,
                                         ::blink::mojom::FetchAPIRequestBodyPtr> {
  static bool IsNull(const ::blink::mojom::FetchAPIRequestBodyPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::FetchAPIRequestBodyPtr* output) { output->reset(); }

  static  decltype(::blink::mojom::FetchAPIRequestBody::elements)& elements(
       ::blink::mojom::FetchAPIRequestBodyPtr& input) {
    return input->elements;
  }

  static decltype(::blink::mojom::FetchAPIRequestBody::identifier) identifier(
      const ::blink::mojom::FetchAPIRequestBodyPtr& input) {
    return input->identifier;
  }

  static decltype(::blink::mojom::FetchAPIRequestBody::contains_sensitive_info) contains_sensitive_info(
      const ::blink::mojom::FetchAPIRequestBodyPtr& input) {
    return input->contains_sensitive_info;
  }

  static bool Read(::blink::mojom::FetchAPIRequestBody::DataView input, ::blink::mojom::FetchAPIRequestBodyPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::FetchAPIRequest::DataView,
                                         ::blink::mojom::FetchAPIRequestPtr> {
  static bool IsNull(const ::blink::mojom::FetchAPIRequestPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::FetchAPIRequestPtr* output) { output->reset(); }

  static decltype(::blink::mojom::FetchAPIRequest::mode) mode(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->mode;
  }

  static decltype(::blink::mojom::FetchAPIRequest::is_main_resource_load) is_main_resource_load(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->is_main_resource_load;
  }

  static decltype(::blink::mojom::FetchAPIRequest::destination) destination(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->destination;
  }

  static decltype(::blink::mojom::FetchAPIRequest::frame_type) frame_type(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->frame_type;
  }

  static const decltype(::blink::mojom::FetchAPIRequest::url)& url(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->url;
  }

  static const decltype(::blink::mojom::FetchAPIRequest::method)& method(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->method;
  }

  static const decltype(::blink::mojom::FetchAPIRequest::headers)& headers(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->headers;
  }

  static  decltype(::blink::mojom::FetchAPIRequest::blob)& blob(
       ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->blob;
  }

  static  decltype(::blink::mojom::FetchAPIRequest::body)& body(
       ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->body;
  }

  static const decltype(::blink::mojom::FetchAPIRequest::request_initiator)& request_initiator(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->request_initiator;
  }

  static const decltype(::blink::mojom::FetchAPIRequest::navigation_redirect_chain)& navigation_redirect_chain(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->navigation_redirect_chain;
  }

  static const decltype(::blink::mojom::FetchAPIRequest::referrer)& referrer(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->referrer;
  }

  static decltype(::blink::mojom::FetchAPIRequest::credentials_mode) credentials_mode(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->credentials_mode;
  }

  static decltype(::blink::mojom::FetchAPIRequest::cache_mode) cache_mode(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->cache_mode;
  }

  static decltype(::blink::mojom::FetchAPIRequest::redirect_mode) redirect_mode(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->redirect_mode;
  }

  static const decltype(::blink::mojom::FetchAPIRequest::integrity)& integrity(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->integrity;
  }

  static decltype(::blink::mojom::FetchAPIRequest::priority) priority(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->priority;
  }

  static const decltype(::blink::mojom::FetchAPIRequest::fetch_window_id)& fetch_window_id(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->fetch_window_id;
  }

  static decltype(::blink::mojom::FetchAPIRequest::keepalive) keepalive(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->keepalive;
  }

  static decltype(::blink::mojom::FetchAPIRequest::is_reload) is_reload(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->is_reload;
  }

  static decltype(::blink::mojom::FetchAPIRequest::is_history_navigation) is_history_navigation(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->is_history_navigation;
  }

  static const decltype(::blink::mojom::FetchAPIRequest::devtools_stack_id)& devtools_stack_id(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->devtools_stack_id;
  }

  static const decltype(::blink::mojom::FetchAPIRequest::trust_token_params)& trust_token_params(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->trust_token_params;
  }

  static decltype(::blink::mojom::FetchAPIRequest::target_address_space) target_address_space(
      const ::blink::mojom::FetchAPIRequestPtr& input) {
    return input->target_address_space;
  }

  static bool Read(::blink::mojom::FetchAPIRequest::DataView input, ::blink::mojom::FetchAPIRequestPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FETCH_FETCH_API_REQUEST_MOJOM_H_