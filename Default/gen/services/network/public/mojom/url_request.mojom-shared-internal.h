// services/network/public/mojom/url_request.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_REQUEST_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_REQUEST_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/big_buffer.mojom-shared-internal.h"
#include "mojo/public/mojom/base/file_path.mojom-shared-internal.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "services/network/public/mojom/url_loader_network_service_observer.mojom-shared-internal.h"
#include "services/network/public/mojom/client_security_state.mojom-shared-internal.h"
#include "services/network/public/mojom/cors.mojom-shared-internal.h"
#include "services/network/public/mojom/cookie_access_observer.mojom-shared-internal.h"
#include "services/network/public/mojom/cookie_manager.mojom-shared-internal.h"
#include "services/network/public/mojom/chunked_data_pipe_getter.mojom-shared-internal.h"
#include "services/network/public/mojom/data_pipe_getter.mojom-shared-internal.h"
#include "services/network/public/mojom/devtools_observer.mojom-shared-internal.h"
#include "services/network/public/mojom/fetch_api.mojom-shared-internal.h"
#include "services/network/public/mojom/http_raw_headers.mojom-shared-internal.h"
#include "services/network/public/mojom/http_request_headers.mojom-shared-internal.h"
#include "services/network/public/mojom/ip_address_space.mojom-shared-internal.h"
#include "services/network/public/mojom/isolation_info.mojom-shared-internal.h"
#include "services/network/public/mojom/network_param.mojom-shared-internal.h"
#include "services/network/public/mojom/referrer_policy.mojom-shared-internal.h"
#include "services/network/public/mojom/request_priority.mojom-shared-internal.h"
#include "services/network/public/mojom/site_for_cookies.mojom-shared-internal.h"
#include "services/network/public/mojom/trust_tokens.mojom-shared-internal.h"
#include "services/network/public/mojom/url_response_head.mojom-shared-internal.h"
#include "services/network/public/mojom/web_bundle_handle.mojom-shared-internal.h"
#include "services/network/public/mojom/accept_ch_frame_observer.mojom-shared-internal.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace network {
namespace mojom {
namespace internal {
class TrustedUrlRequestParams_Data;
class WebBundleTokenParams_Data;
class NetLogSource_Data;
class URLRequest_Data;
class URLRequestBody_Data;
class DataElementBytes_Data;
class DataElementFile_Data;
class DataElementDataPipe_Data;
class DataElementChunkedDataPipe_Data;
class DataElement_Data;

struct SourceType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)


class  DataElement_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  DataElement_Data() = default;
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~DataElement_Data() = default;

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<DataElement_Tag>(0);
    data.unknown = 0U;
  }

  // TODO(crbug.com/1148486): SHOUTY_CASE values are being deprecated per C++ code style
  // guidelines (https://google.github.io/styleguide/cppguide.html#Enumerator_Names),
  // please use kCamelCase values instead.  Cleanup NULL_VALUE, BOOL_VALUE, INT_VALUE, etc.
  // generation once codebase is transitioned to kNullValue, kBoolValue, kIntValue, etc.
  enum class DataElement_Tag : uint32_t {

    
    kBytes,
    
    kFile,
    
    kDataPipe,
    
    kChunkedDataPipe,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::DataElementBytes_Data> f_bytes;
    mojo::internal::Pointer<internal::DataElementFile_Data> f_file;
    mojo::internal::Pointer<internal::DataElementDataPipe_Data> f_data_pipe;
    mojo::internal::Pointer<internal::DataElementChunkedDataPipe_Data> f_chunked_data_pipe;
    uint64_t unknown;
  };

  uint32_t size;
  DataElement_Tag tag;
  Union_ data;
};
static_assert(sizeof(DataElement_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(DataElement_Data)");
class  TrustedUrlRequestParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IsolationInfo_Data> isolation_info;
  uint8_t disable_secure_dns : 1;
  uint8_t has_user_activation : 1;
  uint8_t pad2_[3];
  mojo::internal::Interface_Data cookie_observer;
  mojo::internal::Interface_Data url_loader_network_observer;
  mojo::internal::Interface_Data devtools_observer;
  uint8_t pad5_[4];
  mojo::internal::Pointer<::network::mojom::internal::ClientSecurityState_Data> client_security_state;
  mojo::internal::Interface_Data accept_ch_frame_observer;

 private:
  friend class mojo::internal::MessageFragment<TrustedUrlRequestParams_Data>;

  TrustedUrlRequestParams_Data();
  ~TrustedUrlRequestParams_Data() = delete;
};
static_assert(sizeof(TrustedUrlRequestParams_Data) == 64,
              "Bad sizeof(TrustedUrlRequestParams_Data)");
// Used by TrustedUrlRequestParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct TrustedUrlRequestParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  TrustedUrlRequestParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~TrustedUrlRequestParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<TrustedUrlRequestParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    TrustedUrlRequestParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WebBundleTokenParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> bundle_url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> token;
  mojo::internal::Interface_Data web_bundle_handle;
  int32_t render_process_id;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<WebBundleTokenParams_Data>;

  WebBundleTokenParams_Data();
  ~WebBundleTokenParams_Data() = delete;
};
static_assert(sizeof(WebBundleTokenParams_Data) == 40,
              "Bad sizeof(WebBundleTokenParams_Data)");
// Used by WebBundleTokenParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebBundleTokenParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebBundleTokenParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebBundleTokenParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<WebBundleTokenParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebBundleTokenParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  NetLogSource_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t source_type;
  uint32_t source_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeTicks_Data> start_time;

 private:
  friend class mojo::internal::MessageFragment<NetLogSource_Data>;

  NetLogSource_Data();
  ~NetLogSource_Data() = delete;
};
static_assert(sizeof(NetLogSource_Data) == 24,
              "Bad sizeof(NetLogSource_Data)");
// Used by NetLogSource::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct NetLogSource_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  NetLogSource_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~NetLogSource_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<NetLogSource_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    NetLogSource_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  URLRequest_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> method;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::network::mojom::internal::SiteForCookies_Data> site_for_cookies;
  uint8_t update_first_party_url_on_redirect : 1;
  uint8_t originated_from_service_worker : 1;
  uint8_t skip_service_worker : 1;
  uint8_t corb_detachable : 1;
  uint8_t keepalive : 1;
  uint8_t has_user_gesture : 1;
  uint8_t enable_load_timing : 1;
  uint8_t enable_upload_progress : 1;
  uint8_t do_not_prompt_for_login : 1;
  uint8_t is_outermost_main_frame : 1;
  uint8_t upgrade_if_insecure : 1;
  uint8_t is_revalidating : 1;
  uint8_t is_signed_exchange_prefetch_cache_enabled : 1;
  uint8_t is_fetch_like_api : 1;
  uint8_t is_favicon : 1;
  uint8_t pad17_[2];
  int32_t referrer_policy;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> request_initiator;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::url::mojom::internal::Url_Data>>> navigation_redirect_chain;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> isolated_world_origin;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> referrer;
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> headers;
  mojo::internal::Pointer<::network::mojom::internal::HttpRequestHeaders_Data> cors_exempt_headers;
  int32_t load_flags;
  int32_t resource_type;
  int32_t priority;
  int32_t cors_preflight_policy;
  int32_t mode;
  int32_t credentials_mode;
  int32_t redirect_mode;
  int32_t destination;
  mojo::internal::Pointer<mojo::internal::String_Data> fetch_integrity;
  mojo::internal::Pointer<internal::URLRequestBody_Data> request_body;
  int32_t transition_type;
  int32_t previews_state;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> throttling_profile_id;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> fetch_window_id;
  mojo::internal::Pointer<mojo::internal::String_Data> devtools_request_id;
  mojo::internal::Pointer<mojo::internal::String_Data> devtools_stack_id;
  int32_t original_destination;
  int32_t target_ip_address_space;
  mojo::internal::Pointer<internal::TrustedUrlRequestParams_Data> trusted_params;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data> recursive_prefetch_token;
  mojo::internal::Pointer<::network::mojom::internal::TrustTokenParams_Data> trust_token_params;
  mojo::internal::Pointer<internal::WebBundleTokenParams_Data> web_bundle_token_params;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> devtools_accepted_stream_types;
  mojo::internal::Pointer<internal::NetLogSource_Data> net_log_create_info;
  mojo::internal::Pointer<internal::NetLogSource_Data> net_log_reference_info;

 private:
  friend class mojo::internal::MessageFragment<URLRequest_Data>;

  URLRequest_Data();
  ~URLRequest_Data() = delete;
};
static_assert(sizeof(URLRequest_Data) == 240,
              "Bad sizeof(URLRequest_Data)");
// Used by URLRequest::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct URLRequest_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  URLRequest_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~URLRequest_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<URLRequest_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    URLRequest_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  URLRequestBody_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<internal::DataElement_Data>> elements;
  uint64_t identifier;
  uint8_t contains_sensitive_info : 1;
  uint8_t allow_http1_for_streaming_upload : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<URLRequestBody_Data>;

  URLRequestBody_Data();
  ~URLRequestBody_Data() = delete;
};
static_assert(sizeof(URLRequestBody_Data) == 32,
              "Bad sizeof(URLRequestBody_Data)");
// Used by URLRequestBody::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct URLRequestBody_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  URLRequestBody_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~URLRequestBody_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<URLRequestBody_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    URLRequestBody_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DataElementBytes_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  ::mojo_base::mojom::internal::BigBuffer_Data data;

 private:
  friend class mojo::internal::MessageFragment<DataElementBytes_Data>;

  DataElementBytes_Data();
  ~DataElementBytes_Data() = delete;
};
static_assert(sizeof(DataElementBytes_Data) == 24,
              "Bad sizeof(DataElementBytes_Data)");
// Used by DataElementBytes::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DataElementBytes_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DataElementBytes_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DataElementBytes_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DataElementBytes_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DataElementBytes_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DataElementFile_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> path;
  uint64_t offset;
  uint64_t length;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expected_modification_time;

 private:
  friend class mojo::internal::MessageFragment<DataElementFile_Data>;

  DataElementFile_Data();
  ~DataElementFile_Data() = delete;
};
static_assert(sizeof(DataElementFile_Data) == 40,
              "Bad sizeof(DataElementFile_Data)");
// Used by DataElementFile::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DataElementFile_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DataElementFile_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DataElementFile_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DataElementFile_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DataElementFile_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DataElementDataPipe_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data data_pipe_getter;

 private:
  friend class mojo::internal::MessageFragment<DataElementDataPipe_Data>;

  DataElementDataPipe_Data();
  ~DataElementDataPipe_Data() = delete;
};
static_assert(sizeof(DataElementDataPipe_Data) == 16,
              "Bad sizeof(DataElementDataPipe_Data)");
// Used by DataElementDataPipe::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DataElementDataPipe_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DataElementDataPipe_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DataElementDataPipe_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DataElementDataPipe_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DataElementDataPipe_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DataElementChunkedDataPipe_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data data_pipe_getter;
  uint8_t read_only_once : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<DataElementChunkedDataPipe_Data>;

  DataElementChunkedDataPipe_Data();
  ~DataElementChunkedDataPipe_Data() = delete;
};
static_assert(sizeof(DataElementChunkedDataPipe_Data) == 24,
              "Bad sizeof(DataElementChunkedDataPipe_Data)");
// Used by DataElementChunkedDataPipe::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DataElementChunkedDataPipe_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DataElementChunkedDataPipe_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DataElementChunkedDataPipe_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DataElementChunkedDataPipe_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DataElementChunkedDataPipe_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_REQUEST_MOJOM_SHARED_INTERNAL_H_