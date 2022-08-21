// third_party/blink/public/mojom/loader/resource_load_info.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_RESOURCE_LOAD_INFO_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_RESOURCE_LOAD_INFO_MOJOM_H_

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

#include "third_party/blink/public/mojom/loader/resource_load_info.mojom-shared.h"
#include "third_party/blink/public/mojom/loader/resource_load_info.mojom-forward.h"
#include "services/network/public/mojom/fetch_api.mojom-forward.h"
#include "services/network/public/mojom/ip_address.mojom-forward.h"
#include "services/network/public/mojom/ip_endpoint.mojom.h"
#include "services/network/public/mojom/load_timing_info.mojom.h"
#include "services/network/public/mojom/network_param.mojom-forward.h"
#include "services/network/public/mojom/request_priority.mojom.h"
#include "url/mojom/origin.mojom.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>




#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {










class BLINK_COMMON_EXPORT CommonNetworkInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<CommonNetworkInfo, T>::value>;
  using DataView = CommonNetworkInfoDataView;
  using Data_ = internal::CommonNetworkInfo_Data;

  template <typename... Args>
  static CommonNetworkInfoPtr New(Args&&... args) {
    return CommonNetworkInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CommonNetworkInfoPtr From(const U& u) {
    return mojo::TypeConverter<CommonNetworkInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CommonNetworkInfo>::Convert(*this);
  }


  CommonNetworkInfo();

  CommonNetworkInfo(
      bool network_accessed,
      bool always_access_network,
      const absl::optional<::net::IPEndPoint>& remote_endpoint);


  ~CommonNetworkInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CommonNetworkInfoPtr>
  CommonNetworkInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, CommonNetworkInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, CommonNetworkInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CommonNetworkInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CommonNetworkInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CommonNetworkInfo_UnserializedMessageContext<
            UserType, CommonNetworkInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<CommonNetworkInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CommonNetworkInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CommonNetworkInfo_UnserializedMessageContext<
            UserType, CommonNetworkInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CommonNetworkInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  bool network_accessed;
  
  bool always_access_network;
  
  absl::optional<::net::IPEndPoint> remote_endpoint;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, CommonNetworkInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, CommonNetworkInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, CommonNetworkInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, CommonNetworkInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class BLINK_COMMON_EXPORT RedirectInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<RedirectInfo, T>::value>;
  using DataView = RedirectInfoDataView;
  using Data_ = internal::RedirectInfo_Data;

  template <typename... Args>
  static RedirectInfoPtr New(Args&&... args) {
    return RedirectInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RedirectInfoPtr From(const U& u) {
    return mojo::TypeConverter<RedirectInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RedirectInfo>::Convert(*this);
  }


  RedirectInfo();

  RedirectInfo(
      const ::url::Origin& origin_of_new_url,
      CommonNetworkInfoPtr network_info);

RedirectInfo(const RedirectInfo&) = delete;
RedirectInfo& operator=(const RedirectInfo&) = delete;

  ~RedirectInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RedirectInfoPtr>
  RedirectInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, RedirectInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, RedirectInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RedirectInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RedirectInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RedirectInfo_UnserializedMessageContext<
            UserType, RedirectInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<RedirectInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RedirectInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RedirectInfo_UnserializedMessageContext<
            UserType, RedirectInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RedirectInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::url::Origin origin_of_new_url;
  
  CommonNetworkInfoPtr network_info;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, RedirectInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, RedirectInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, RedirectInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, RedirectInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class BLINK_COMMON_EXPORT ResourceLoadInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ResourceLoadInfo, T>::value>;
  using DataView = ResourceLoadInfoDataView;
  using Data_ = internal::ResourceLoadInfo_Data;

  template <typename... Args>
  static ResourceLoadInfoPtr New(Args&&... args) {
    return ResourceLoadInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ResourceLoadInfoPtr From(const U& u) {
    return mojo::TypeConverter<ResourceLoadInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResourceLoadInfo>::Convert(*this);
  }


  ResourceLoadInfo();

  ResourceLoadInfo(
      int64_t request_id,
      const ::GURL& final_url,
      const ::GURL& referrer,
      const ::GURL& original_url,
      const std::string& method,
      ::network::mojom::RequestDestination request_destination,
      ::net::RequestPriority request_priority,
      const std::string& mime_type,
      bool was_cached,
      bool was_in_network_service_memory_cache,
      CommonNetworkInfoPtr network_info,
      int32_t net_error,
      const ::net::LoadTimingInfo& load_timing_info,
      int64_t raw_body_bytes,
      int64_t total_received_bytes,
      std::vector<RedirectInfoPtr> redirect_info_chain);

ResourceLoadInfo(const ResourceLoadInfo&) = delete;
ResourceLoadInfo& operator=(const ResourceLoadInfo&) = delete;

  ~ResourceLoadInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ResourceLoadInfoPtr>
  ResourceLoadInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ResourceLoadInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ResourceLoadInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ResourceLoadInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ResourceLoadInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ResourceLoadInfo_UnserializedMessageContext<
            UserType, ResourceLoadInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ResourceLoadInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ResourceLoadInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ResourceLoadInfo_UnserializedMessageContext<
            UserType, ResourceLoadInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ResourceLoadInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  int64_t request_id;
  
  ::GURL final_url;
  
  ::GURL referrer;
  
  ::GURL original_url;
  
  std::string method;
  
  ::network::mojom::RequestDestination request_destination;
  
  ::net::RequestPriority request_priority;
  
  std::string mime_type;
  
  bool was_cached;
  
  bool was_in_network_service_memory_cache;
  
  CommonNetworkInfoPtr network_info;
  
  int32_t net_error;
  
  ::net::LoadTimingInfo load_timing_info;
  
  int64_t raw_body_bytes;
  
  int64_t total_received_bytes;
  
  std::vector<RedirectInfoPtr> redirect_info_chain;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ResourceLoadInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ResourceLoadInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ResourceLoadInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ResourceLoadInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
CommonNetworkInfoPtr CommonNetworkInfo::Clone() const {
  return New(
      mojo::Clone(network_accessed),
      mojo::Clone(always_access_network),
      mojo::Clone(remote_endpoint)
  );
}

template <typename T, CommonNetworkInfo::EnableIfSame<T>*>
bool CommonNetworkInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->network_accessed, other_struct.network_accessed))
    return false;
  if (!mojo::Equals(this->always_access_network, other_struct.always_access_network))
    return false;
  if (!mojo::Equals(this->remote_endpoint, other_struct.remote_endpoint))
    return false;
  return true;
}

template <typename T, CommonNetworkInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.network_accessed < rhs.network_accessed)
    return true;
  if (rhs.network_accessed < lhs.network_accessed)
    return false;
  if (lhs.always_access_network < rhs.always_access_network)
    return true;
  if (rhs.always_access_network < lhs.always_access_network)
    return false;
  if (lhs.remote_endpoint < rhs.remote_endpoint)
    return true;
  if (rhs.remote_endpoint < lhs.remote_endpoint)
    return false;
  return false;
}
template <typename StructPtrType>
RedirectInfoPtr RedirectInfo::Clone() const {
  return New(
      mojo::Clone(origin_of_new_url),
      mojo::Clone(network_info)
  );
}

template <typename T, RedirectInfo::EnableIfSame<T>*>
bool RedirectInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->origin_of_new_url, other_struct.origin_of_new_url))
    return false;
  if (!mojo::Equals(this->network_info, other_struct.network_info))
    return false;
  return true;
}

template <typename T, RedirectInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.origin_of_new_url < rhs.origin_of_new_url)
    return true;
  if (rhs.origin_of_new_url < lhs.origin_of_new_url)
    return false;
  if (lhs.network_info < rhs.network_info)
    return true;
  if (rhs.network_info < lhs.network_info)
    return false;
  return false;
}
template <typename StructPtrType>
ResourceLoadInfoPtr ResourceLoadInfo::Clone() const {
  return New(
      mojo::Clone(request_id),
      mojo::Clone(final_url),
      mojo::Clone(referrer),
      mojo::Clone(original_url),
      mojo::Clone(method),
      mojo::Clone(request_destination),
      mojo::Clone(request_priority),
      mojo::Clone(mime_type),
      mojo::Clone(was_cached),
      mojo::Clone(was_in_network_service_memory_cache),
      mojo::Clone(network_info),
      mojo::Clone(net_error),
      mojo::Clone(load_timing_info),
      mojo::Clone(raw_body_bytes),
      mojo::Clone(total_received_bytes),
      mojo::Clone(redirect_info_chain)
  );
}

template <typename T, ResourceLoadInfo::EnableIfSame<T>*>
bool ResourceLoadInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->request_id, other_struct.request_id))
    return false;
  if (!mojo::Equals(this->final_url, other_struct.final_url))
    return false;
  if (!mojo::Equals(this->referrer, other_struct.referrer))
    return false;
  if (!mojo::Equals(this->original_url, other_struct.original_url))
    return false;
  if (!mojo::Equals(this->method, other_struct.method))
    return false;
  if (!mojo::Equals(this->request_destination, other_struct.request_destination))
    return false;
  if (!mojo::Equals(this->request_priority, other_struct.request_priority))
    return false;
  if (!mojo::Equals(this->mime_type, other_struct.mime_type))
    return false;
  if (!mojo::Equals(this->was_cached, other_struct.was_cached))
    return false;
  if (!mojo::Equals(this->was_in_network_service_memory_cache, other_struct.was_in_network_service_memory_cache))
    return false;
  if (!mojo::Equals(this->network_info, other_struct.network_info))
    return false;
  if (!mojo::Equals(this->net_error, other_struct.net_error))
    return false;
  if (!mojo::Equals(this->load_timing_info, other_struct.load_timing_info))
    return false;
  if (!mojo::Equals(this->raw_body_bytes, other_struct.raw_body_bytes))
    return false;
  if (!mojo::Equals(this->total_received_bytes, other_struct.total_received_bytes))
    return false;
  if (!mojo::Equals(this->redirect_info_chain, other_struct.redirect_info_chain))
    return false;
  return true;
}

template <typename T, ResourceLoadInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.request_id < rhs.request_id)
    return true;
  if (rhs.request_id < lhs.request_id)
    return false;
  if (lhs.final_url < rhs.final_url)
    return true;
  if (rhs.final_url < lhs.final_url)
    return false;
  if (lhs.referrer < rhs.referrer)
    return true;
  if (rhs.referrer < lhs.referrer)
    return false;
  if (lhs.original_url < rhs.original_url)
    return true;
  if (rhs.original_url < lhs.original_url)
    return false;
  if (lhs.method < rhs.method)
    return true;
  if (rhs.method < lhs.method)
    return false;
  if (lhs.request_destination < rhs.request_destination)
    return true;
  if (rhs.request_destination < lhs.request_destination)
    return false;
  if (lhs.request_priority < rhs.request_priority)
    return true;
  if (rhs.request_priority < lhs.request_priority)
    return false;
  if (lhs.mime_type < rhs.mime_type)
    return true;
  if (rhs.mime_type < lhs.mime_type)
    return false;
  if (lhs.was_cached < rhs.was_cached)
    return true;
  if (rhs.was_cached < lhs.was_cached)
    return false;
  if (lhs.was_in_network_service_memory_cache < rhs.was_in_network_service_memory_cache)
    return true;
  if (rhs.was_in_network_service_memory_cache < lhs.was_in_network_service_memory_cache)
    return false;
  if (lhs.network_info < rhs.network_info)
    return true;
  if (rhs.network_info < lhs.network_info)
    return false;
  if (lhs.net_error < rhs.net_error)
    return true;
  if (rhs.net_error < lhs.net_error)
    return false;
  if (lhs.load_timing_info < rhs.load_timing_info)
    return true;
  if (rhs.load_timing_info < lhs.load_timing_info)
    return false;
  if (lhs.raw_body_bytes < rhs.raw_body_bytes)
    return true;
  if (rhs.raw_body_bytes < lhs.raw_body_bytes)
    return false;
  if (lhs.total_received_bytes < rhs.total_received_bytes)
    return true;
  if (rhs.total_received_bytes < lhs.total_received_bytes)
    return false;
  if (lhs.redirect_info_chain < rhs.redirect_info_chain)
    return true;
  if (rhs.redirect_info_chain < lhs.redirect_info_chain)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::CommonNetworkInfo::DataView,
                                         ::blink::mojom::CommonNetworkInfoPtr> {
  static bool IsNull(const ::blink::mojom::CommonNetworkInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::CommonNetworkInfoPtr* output) { output->reset(); }

  static decltype(::blink::mojom::CommonNetworkInfo::network_accessed) network_accessed(
      const ::blink::mojom::CommonNetworkInfoPtr& input) {
    return input->network_accessed;
  }

  static decltype(::blink::mojom::CommonNetworkInfo::always_access_network) always_access_network(
      const ::blink::mojom::CommonNetworkInfoPtr& input) {
    return input->always_access_network;
  }

  static const decltype(::blink::mojom::CommonNetworkInfo::remote_endpoint)& remote_endpoint(
      const ::blink::mojom::CommonNetworkInfoPtr& input) {
    return input->remote_endpoint;
  }

  static bool Read(::blink::mojom::CommonNetworkInfo::DataView input, ::blink::mojom::CommonNetworkInfoPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::RedirectInfo::DataView,
                                         ::blink::mojom::RedirectInfoPtr> {
  static bool IsNull(const ::blink::mojom::RedirectInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::RedirectInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::RedirectInfo::origin_of_new_url)& origin_of_new_url(
      const ::blink::mojom::RedirectInfoPtr& input) {
    return input->origin_of_new_url;
  }

  static const decltype(::blink::mojom::RedirectInfo::network_info)& network_info(
      const ::blink::mojom::RedirectInfoPtr& input) {
    return input->network_info;
  }

  static bool Read(::blink::mojom::RedirectInfo::DataView input, ::blink::mojom::RedirectInfoPtr* output);
};


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ResourceLoadInfo::DataView,
                                         ::blink::mojom::ResourceLoadInfoPtr> {
  static bool IsNull(const ::blink::mojom::ResourceLoadInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ResourceLoadInfoPtr* output) { output->reset(); }

  static decltype(::blink::mojom::ResourceLoadInfo::request_id) request_id(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->request_id;
  }

  static const decltype(::blink::mojom::ResourceLoadInfo::final_url)& final_url(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->final_url;
  }

  static const decltype(::blink::mojom::ResourceLoadInfo::referrer)& referrer(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->referrer;
  }

  static const decltype(::blink::mojom::ResourceLoadInfo::original_url)& original_url(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->original_url;
  }

  static const decltype(::blink::mojom::ResourceLoadInfo::method)& method(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->method;
  }

  static decltype(::blink::mojom::ResourceLoadInfo::request_destination) request_destination(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->request_destination;
  }

  static decltype(::blink::mojom::ResourceLoadInfo::request_priority) request_priority(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->request_priority;
  }

  static const decltype(::blink::mojom::ResourceLoadInfo::mime_type)& mime_type(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->mime_type;
  }

  static decltype(::blink::mojom::ResourceLoadInfo::was_cached) was_cached(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->was_cached;
  }

  static decltype(::blink::mojom::ResourceLoadInfo::was_in_network_service_memory_cache) was_in_network_service_memory_cache(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->was_in_network_service_memory_cache;
  }

  static const decltype(::blink::mojom::ResourceLoadInfo::network_info)& network_info(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->network_info;
  }

  static decltype(::blink::mojom::ResourceLoadInfo::net_error) net_error(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->net_error;
  }

  static const decltype(::blink::mojom::ResourceLoadInfo::load_timing_info)& load_timing_info(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->load_timing_info;
  }

  static decltype(::blink::mojom::ResourceLoadInfo::raw_body_bytes) raw_body_bytes(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->raw_body_bytes;
  }

  static decltype(::blink::mojom::ResourceLoadInfo::total_received_bytes) total_received_bytes(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->total_received_bytes;
  }

  static const decltype(::blink::mojom::ResourceLoadInfo::redirect_info_chain)& redirect_info_chain(
      const ::blink::mojom::ResourceLoadInfoPtr& input) {
    return input->redirect_info_chain;
  }

  static bool Read(::blink::mojom::ResourceLoadInfo::DataView input, ::blink::mojom::ResourceLoadInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_RESOURCE_LOAD_INFO_MOJOM_H_