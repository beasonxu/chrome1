// third_party/blink/public/mojom/timing/resource_timing.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_TIMING_RESOURCE_TIMING_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_TIMING_RESOURCE_TIMING_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/timing/resource_timing.mojom-shared.h"
#include "third_party/blink/public/mojom/timing/resource_timing.mojom-blink-forward.h"
#include "mojo/public/mojom/base/time.mojom-blink.h"
#include "services/network/public/mojom/fetch_api.mojom-blink-forward.h"
#include "services/network/public/mojom/load_timing_info.mojom-blink.h"
#include "third_party/blink/public/mojom/fetch/fetch_api_request.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_CacheState_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::CacheState& value) {
    using utype = std::underlying_type<::blink::mojom::CacheState>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::CacheState& left, const ::blink::mojom::CacheState& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::CacheState>
    : public GenericHashTraits<::blink::mojom::CacheState> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::CacheState EmptyValue() { return static_cast<::blink::mojom::CacheState>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::CacheState& slot, bool) {
    slot = static_cast<::blink::mojom::CacheState>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::CacheState& value) {
    return value == static_cast<::blink::mojom::CacheState>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {





class PLATFORM_EXPORT ServerTimingInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ServerTimingInfo, T>::value>;
  using DataView = ServerTimingInfoDataView;
  using Data_ = internal::ServerTimingInfo_Data;

  template <typename... Args>
  static ServerTimingInfoPtr New(Args&&... args) {
    return ServerTimingInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServerTimingInfoPtr From(const U& u) {
    return mojo::TypeConverter<ServerTimingInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServerTimingInfo>::Convert(*this);
  }


  ServerTimingInfo();

  ServerTimingInfo(
      const WTF::String& name,
      double duration,
      const WTF::String& description);


  ~ServerTimingInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServerTimingInfoPtr>
  ServerTimingInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ServerTimingInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ServerTimingInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServerTimingInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServerTimingInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServerTimingInfo_UnserializedMessageContext<
            UserType, ServerTimingInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ServerTimingInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ServerTimingInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServerTimingInfo_UnserializedMessageContext<
            UserType, ServerTimingInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServerTimingInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::String name;
  
  double duration;
  
  WTF::String description;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ServerTimingInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ServerTimingInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ServerTimingInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ServerTimingInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}









class PLATFORM_EXPORT ResourceTimingInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ResourceTimingInfo, T>::value>;
  using DataView = ResourceTimingInfoDataView;
  using Data_ = internal::ResourceTimingInfo_Data;

  template <typename... Args>
  static ResourceTimingInfoPtr New(Args&&... args) {
    return ResourceTimingInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ResourceTimingInfoPtr From(const U& u) {
    return mojo::TypeConverter<ResourceTimingInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ResourceTimingInfo>::Convert(*this);
  }


  ResourceTimingInfo();

  ResourceTimingInfo(
      const WTF::String& name,
      ::base::TimeTicks start_time,
      const WTF::String& alpn_negotiated_protocol,
      const WTF::String& connection_info,
      ::network::mojom::blink::LoadTimingInfoPtr timing,
      ::base::TimeTicks last_redirect_end_time,
      ::base::TimeTicks response_end,
      ::blink::mojom::blink::RequestContextType context_type,
      ::network::mojom::blink::RequestDestination request_destination,
      CacheState cache_state,
      uint64_t encoded_body_size,
      uint64_t decoded_body_size,
      bool did_reuse_connection,
      bool is_secure_transport,
      bool allow_timing_details,
      bool allow_redirect_details,
      bool allow_negative_values,
      WTF::Vector<ServerTimingInfoPtr> server_timing,
      bool render_blocking_status);

ResourceTimingInfo(const ResourceTimingInfo&) = delete;
ResourceTimingInfo& operator=(const ResourceTimingInfo&) = delete;

  ~ResourceTimingInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ResourceTimingInfoPtr>
  ResourceTimingInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ResourceTimingInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ResourceTimingInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ResourceTimingInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ResourceTimingInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ResourceTimingInfo_UnserializedMessageContext<
            UserType, ResourceTimingInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ResourceTimingInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ResourceTimingInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ResourceTimingInfo_UnserializedMessageContext<
            UserType, ResourceTimingInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ResourceTimingInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::String name;
  
  ::base::TimeTicks start_time;
  
  WTF::String alpn_negotiated_protocol;
  
  WTF::String connection_info;
  
  ::network::mojom::blink::LoadTimingInfoPtr timing;
  
  ::base::TimeTicks last_redirect_end_time;
  
  ::base::TimeTicks response_end;
  
  ::blink::mojom::blink::RequestContextType context_type;
  
  ::network::mojom::blink::RequestDestination request_destination;
  
  CacheState cache_state;
  
  uint64_t encoded_body_size;
  
  uint64_t decoded_body_size;
  
  bool did_reuse_connection;
  
  bool is_secure_transport;
  
  bool allow_timing_details;
  
  bool allow_redirect_details;
  
  bool allow_negative_values;
  
  WTF::Vector<ServerTimingInfoPtr> server_timing;
  
  bool render_blocking_status;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ResourceTimingInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ResourceTimingInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ResourceTimingInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ResourceTimingInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
ServerTimingInfoPtr ServerTimingInfo::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(duration),
      mojo::Clone(description)
  );
}

template <typename T, ServerTimingInfo::EnableIfSame<T>*>
bool ServerTimingInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->duration, other_struct.duration))
    return false;
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  return true;
}

template <typename T, ServerTimingInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.name < rhs.name)
    return true;
  if (rhs.name < lhs.name)
    return false;
  if (lhs.duration < rhs.duration)
    return true;
  if (rhs.duration < lhs.duration)
    return false;
  if (lhs.description < rhs.description)
    return true;
  if (rhs.description < lhs.description)
    return false;
  return false;
}
template <typename StructPtrType>
ResourceTimingInfoPtr ResourceTimingInfo::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(start_time),
      mojo::Clone(alpn_negotiated_protocol),
      mojo::Clone(connection_info),
      mojo::Clone(timing),
      mojo::Clone(last_redirect_end_time),
      mojo::Clone(response_end),
      mojo::Clone(context_type),
      mojo::Clone(request_destination),
      mojo::Clone(cache_state),
      mojo::Clone(encoded_body_size),
      mojo::Clone(decoded_body_size),
      mojo::Clone(did_reuse_connection),
      mojo::Clone(is_secure_transport),
      mojo::Clone(allow_timing_details),
      mojo::Clone(allow_redirect_details),
      mojo::Clone(allow_negative_values),
      mojo::Clone(server_timing),
      mojo::Clone(render_blocking_status)
  );
}

template <typename T, ResourceTimingInfo::EnableIfSame<T>*>
bool ResourceTimingInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->start_time, other_struct.start_time))
    return false;
  if (!mojo::Equals(this->alpn_negotiated_protocol, other_struct.alpn_negotiated_protocol))
    return false;
  if (!mojo::Equals(this->connection_info, other_struct.connection_info))
    return false;
  if (!mojo::Equals(this->timing, other_struct.timing))
    return false;
  if (!mojo::Equals(this->last_redirect_end_time, other_struct.last_redirect_end_time))
    return false;
  if (!mojo::Equals(this->response_end, other_struct.response_end))
    return false;
  if (!mojo::Equals(this->context_type, other_struct.context_type))
    return false;
  if (!mojo::Equals(this->request_destination, other_struct.request_destination))
    return false;
  if (!mojo::Equals(this->cache_state, other_struct.cache_state))
    return false;
  if (!mojo::Equals(this->encoded_body_size, other_struct.encoded_body_size))
    return false;
  if (!mojo::Equals(this->decoded_body_size, other_struct.decoded_body_size))
    return false;
  if (!mojo::Equals(this->did_reuse_connection, other_struct.did_reuse_connection))
    return false;
  if (!mojo::Equals(this->is_secure_transport, other_struct.is_secure_transport))
    return false;
  if (!mojo::Equals(this->allow_timing_details, other_struct.allow_timing_details))
    return false;
  if (!mojo::Equals(this->allow_redirect_details, other_struct.allow_redirect_details))
    return false;
  if (!mojo::Equals(this->allow_negative_values, other_struct.allow_negative_values))
    return false;
  if (!mojo::Equals(this->server_timing, other_struct.server_timing))
    return false;
  if (!mojo::Equals(this->render_blocking_status, other_struct.render_blocking_status))
    return false;
  return true;
}

template <typename T, ResourceTimingInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.name < rhs.name)
    return true;
  if (rhs.name < lhs.name)
    return false;
  if (lhs.start_time < rhs.start_time)
    return true;
  if (rhs.start_time < lhs.start_time)
    return false;
  if (lhs.alpn_negotiated_protocol < rhs.alpn_negotiated_protocol)
    return true;
  if (rhs.alpn_negotiated_protocol < lhs.alpn_negotiated_protocol)
    return false;
  if (lhs.connection_info < rhs.connection_info)
    return true;
  if (rhs.connection_info < lhs.connection_info)
    return false;
  if (lhs.timing < rhs.timing)
    return true;
  if (rhs.timing < lhs.timing)
    return false;
  if (lhs.last_redirect_end_time < rhs.last_redirect_end_time)
    return true;
  if (rhs.last_redirect_end_time < lhs.last_redirect_end_time)
    return false;
  if (lhs.response_end < rhs.response_end)
    return true;
  if (rhs.response_end < lhs.response_end)
    return false;
  if (lhs.context_type < rhs.context_type)
    return true;
  if (rhs.context_type < lhs.context_type)
    return false;
  if (lhs.request_destination < rhs.request_destination)
    return true;
  if (rhs.request_destination < lhs.request_destination)
    return false;
  if (lhs.cache_state < rhs.cache_state)
    return true;
  if (rhs.cache_state < lhs.cache_state)
    return false;
  if (lhs.encoded_body_size < rhs.encoded_body_size)
    return true;
  if (rhs.encoded_body_size < lhs.encoded_body_size)
    return false;
  if (lhs.decoded_body_size < rhs.decoded_body_size)
    return true;
  if (rhs.decoded_body_size < lhs.decoded_body_size)
    return false;
  if (lhs.did_reuse_connection < rhs.did_reuse_connection)
    return true;
  if (rhs.did_reuse_connection < lhs.did_reuse_connection)
    return false;
  if (lhs.is_secure_transport < rhs.is_secure_transport)
    return true;
  if (rhs.is_secure_transport < lhs.is_secure_transport)
    return false;
  if (lhs.allow_timing_details < rhs.allow_timing_details)
    return true;
  if (rhs.allow_timing_details < lhs.allow_timing_details)
    return false;
  if (lhs.allow_redirect_details < rhs.allow_redirect_details)
    return true;
  if (rhs.allow_redirect_details < lhs.allow_redirect_details)
    return false;
  if (lhs.allow_negative_values < rhs.allow_negative_values)
    return true;
  if (rhs.allow_negative_values < lhs.allow_negative_values)
    return false;
  if (lhs.server_timing < rhs.server_timing)
    return true;
  if (rhs.server_timing < lhs.server_timing)
    return false;
  if (lhs.render_blocking_status < rhs.render_blocking_status)
    return true;
  if (rhs.render_blocking_status < lhs.render_blocking_status)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ServerTimingInfo::DataView,
                                         ::blink::mojom::blink::ServerTimingInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::ServerTimingInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ServerTimingInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ServerTimingInfo::name)& name(
      const ::blink::mojom::blink::ServerTimingInfoPtr& input) {
    return input->name;
  }

  static decltype(::blink::mojom::blink::ServerTimingInfo::duration) duration(
      const ::blink::mojom::blink::ServerTimingInfoPtr& input) {
    return input->duration;
  }

  static const decltype(::blink::mojom::blink::ServerTimingInfo::description)& description(
      const ::blink::mojom::blink::ServerTimingInfoPtr& input) {
    return input->description;
  }

  static bool Read(::blink::mojom::blink::ServerTimingInfo::DataView input, ::blink::mojom::blink::ServerTimingInfoPtr* output);
};


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ResourceTimingInfo::DataView,
                                         ::blink::mojom::blink::ResourceTimingInfoPtr> {
  static bool IsNull(const ::blink::mojom::blink::ResourceTimingInfoPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ResourceTimingInfoPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ResourceTimingInfo::name)& name(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->name;
  }

  static const decltype(::blink::mojom::blink::ResourceTimingInfo::start_time)& start_time(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->start_time;
  }

  static const decltype(::blink::mojom::blink::ResourceTimingInfo::alpn_negotiated_protocol)& alpn_negotiated_protocol(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->alpn_negotiated_protocol;
  }

  static const decltype(::blink::mojom::blink::ResourceTimingInfo::connection_info)& connection_info(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->connection_info;
  }

  static const decltype(::blink::mojom::blink::ResourceTimingInfo::timing)& timing(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->timing;
  }

  static const decltype(::blink::mojom::blink::ResourceTimingInfo::last_redirect_end_time)& last_redirect_end_time(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->last_redirect_end_time;
  }

  static const decltype(::blink::mojom::blink::ResourceTimingInfo::response_end)& response_end(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->response_end;
  }

  static decltype(::blink::mojom::blink::ResourceTimingInfo::context_type) context_type(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->context_type;
  }

  static decltype(::blink::mojom::blink::ResourceTimingInfo::request_destination) request_destination(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->request_destination;
  }

  static decltype(::blink::mojom::blink::ResourceTimingInfo::cache_state) cache_state(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->cache_state;
  }

  static decltype(::blink::mojom::blink::ResourceTimingInfo::encoded_body_size) encoded_body_size(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->encoded_body_size;
  }

  static decltype(::blink::mojom::blink::ResourceTimingInfo::decoded_body_size) decoded_body_size(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->decoded_body_size;
  }

  static decltype(::blink::mojom::blink::ResourceTimingInfo::did_reuse_connection) did_reuse_connection(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->did_reuse_connection;
  }

  static decltype(::blink::mojom::blink::ResourceTimingInfo::is_secure_transport) is_secure_transport(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->is_secure_transport;
  }

  static decltype(::blink::mojom::blink::ResourceTimingInfo::allow_timing_details) allow_timing_details(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->allow_timing_details;
  }

  static decltype(::blink::mojom::blink::ResourceTimingInfo::allow_redirect_details) allow_redirect_details(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->allow_redirect_details;
  }

  static decltype(::blink::mojom::blink::ResourceTimingInfo::allow_negative_values) allow_negative_values(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->allow_negative_values;
  }

  static const decltype(::blink::mojom::blink::ResourceTimingInfo::server_timing)& server_timing(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->server_timing;
  }

  static decltype(::blink::mojom::blink::ResourceTimingInfo::render_blocking_status) render_blocking_status(
      const ::blink::mojom::blink::ResourceTimingInfoPtr& input) {
    return input->render_blocking_status;
  }

  static bool Read(::blink::mojom::blink::ResourceTimingInfo::DataView input, ::blink::mojom::blink::ResourceTimingInfoPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_TIMING_RESOURCE_TIMING_MOJOM_BLINK_H_