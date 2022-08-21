// third_party/blink/public/mojom/loader/code_cache.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace blink {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CodeCacheHost_DidGenerateCacheableMetadata_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t cache_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expected_response_time;
  ::mojo_base::mojom::internal::BigBuffer_Data data;

 private:
  friend class mojo::internal::MessageFragment<CodeCacheHost_DidGenerateCacheableMetadata_Params_Data>;

  CodeCacheHost_DidGenerateCacheableMetadata_Params_Data();
  ~CodeCacheHost_DidGenerateCacheableMetadata_Params_Data() = delete;
};
static_assert(sizeof(CodeCacheHost_DidGenerateCacheableMetadata_Params_Data) == 48,
              "Bad sizeof(CodeCacheHost_DidGenerateCacheableMetadata_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CodeCacheHost_FetchCachedCode_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t cache_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  friend class mojo::internal::MessageFragment<CodeCacheHost_FetchCachedCode_Params_Data>;

  CodeCacheHost_FetchCachedCode_Params_Data();
  ~CodeCacheHost_FetchCachedCode_Params_Data() = delete;
};
static_assert(sizeof(CodeCacheHost_FetchCachedCode_Params_Data) == 24,
              "Bad sizeof(CodeCacheHost_FetchCachedCode_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CodeCacheHost_FetchCachedCode_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> response_time;
  ::mojo_base::mojom::internal::BigBuffer_Data data;

 private:
  friend class mojo::internal::MessageFragment<CodeCacheHost_FetchCachedCode_ResponseParams_Data>;

  CodeCacheHost_FetchCachedCode_ResponseParams_Data();
  ~CodeCacheHost_FetchCachedCode_ResponseParams_Data() = delete;
};
static_assert(sizeof(CodeCacheHost_FetchCachedCode_ResponseParams_Data) == 32,
              "Bad sizeof(CodeCacheHost_FetchCachedCode_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CodeCacheHost_ClearCodeCacheEntry_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t cache_type;
  uint8_t pad0_[4];
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;

 private:
  friend class mojo::internal::MessageFragment<CodeCacheHost_ClearCodeCacheEntry_Params_Data>;

  CodeCacheHost_ClearCodeCacheEntry_Params_Data();
  ~CodeCacheHost_ClearCodeCacheEntry_Params_Data() = delete;
};
static_assert(sizeof(CodeCacheHost_ClearCodeCacheEntry_Params_Data) == 24,
              "Bad sizeof(CodeCacheHost_ClearCodeCacheEntry_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::Time_Data> expected_response_time;
  ::mojo_base::mojom::internal::BigBuffer_Data data;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> cache_storage_origin;
  mojo::internal::Pointer<mojo::internal::String_Data> cache_storage_cache_name;

 private:
  friend class mojo::internal::MessageFragment<CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data>;

  CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data();
  ~CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data() = delete;
};
static_assert(sizeof(CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data) == 56,
              "Bad sizeof(CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data)");

}  // namespace internal


class CodeCacheHost_DidGenerateCacheableMetadata_ParamsDataView {
 public:
  CodeCacheHost_DidGenerateCacheableMetadata_ParamsDataView() = default;

  CodeCacheHost_DidGenerateCacheableMetadata_ParamsDataView(
      internal::CodeCacheHost_DidGenerateCacheableMetadata_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadCacheType(UserType* output) const {
    auto data_value = data_->cache_type;
    return mojo::internal::Deserialize<::blink::mojom::CodeCacheType>(
        data_value, output);
  }
  CodeCacheType cache_type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::blink::mojom::CodeCacheType>(data_->cache_type));
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadUrl(UserType* output) {
    
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, message_);
  }
  inline void GetExpectedResponseTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadExpectedResponseTime(UserType* output) {
    
    auto* pointer = data_->expected_response_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, message_);
  }
  inline void GetDataDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadData(UserType* output) {
    
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, message_);
  }
 private:
  internal::CodeCacheHost_DidGenerateCacheableMetadata_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class CodeCacheHost_FetchCachedCode_ParamsDataView {
 public:
  CodeCacheHost_FetchCachedCode_ParamsDataView() = default;

  CodeCacheHost_FetchCachedCode_ParamsDataView(
      internal::CodeCacheHost_FetchCachedCode_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadCacheType(UserType* output) const {
    auto data_value = data_->cache_type;
    return mojo::internal::Deserialize<::blink::mojom::CodeCacheType>(
        data_value, output);
  }
  CodeCacheType cache_type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::blink::mojom::CodeCacheType>(data_->cache_type));
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadUrl(UserType* output) {
    
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, message_);
  }
 private:
  internal::CodeCacheHost_FetchCachedCode_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class CodeCacheHost_FetchCachedCode_ResponseParamsDataView {
 public:
  CodeCacheHost_FetchCachedCode_ResponseParamsDataView() = default;

  CodeCacheHost_FetchCachedCode_ResponseParamsDataView(
      internal::CodeCacheHost_FetchCachedCode_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResponseTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResponseTime(UserType* output) {
    
    auto* pointer = data_->response_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, message_);
  }
  inline void GetDataDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadData(UserType* output) {
    
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, message_);
  }
 private:
  internal::CodeCacheHost_FetchCachedCode_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class CodeCacheHost_ClearCodeCacheEntry_ParamsDataView {
 public:
  CodeCacheHost_ClearCodeCacheEntry_ParamsDataView() = default;

  CodeCacheHost_ClearCodeCacheEntry_ParamsDataView(
      internal::CodeCacheHost_ClearCodeCacheEntry_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadCacheType(UserType* output) const {
    auto data_value = data_->cache_type;
    return mojo::internal::Deserialize<::blink::mojom::CodeCacheType>(
        data_value, output);
  }
  CodeCacheType cache_type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::blink::mojom::CodeCacheType>(data_->cache_type));
  }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadUrl(UserType* output) {
    
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, message_);
  }
 private:
  internal::CodeCacheHost_ClearCodeCacheEntry_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView {
 public:
  CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView() = default;

  CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView(
      internal::CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadUrl(UserType* output) {
    
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, message_);
  }
  inline void GetExpectedResponseTimeDataView(
      ::mojo_base::mojom::TimeDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadExpectedResponseTime(UserType* output) {
    
    auto* pointer = data_->expected_response_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDataView>(
        pointer, output, message_);
  }
  inline void GetDataDataView(
      ::mojo_base::mojom::BigBufferDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadData(UserType* output) {
    
    auto* pointer = !data_->data.is_null() ? &data_->data : nullptr;
    return mojo::internal::Deserialize<::mojo_base::mojom::BigBufferDataView>(
        pointer, output, message_);
  }
  inline void GetCacheStorageOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadCacheStorageOrigin(UserType* output) {
    
    auto* pointer = data_->cache_storage_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, message_);
  }
  inline void GetCacheStorageCacheNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadCacheStorageCacheName(UserType* output) {
    
    auto* pointer = data_->cache_storage_cache_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void CodeCacheHost_DidGenerateCacheableMetadata_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, message_);
}
inline void CodeCacheHost_DidGenerateCacheableMetadata_ParamsDataView::GetExpectedResponseTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expected_response_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, message_);
}
inline void CodeCacheHost_DidGenerateCacheableMetadata_ParamsDataView::GetDataDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->data;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, message_);
}


inline void CodeCacheHost_FetchCachedCode_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, message_);
}


inline void CodeCacheHost_FetchCachedCode_ResponseParamsDataView::GetResponseTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->response_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, message_);
}
inline void CodeCacheHost_FetchCachedCode_ResponseParamsDataView::GetDataDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->data;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, message_);
}


inline void CodeCacheHost_ClearCodeCacheEntry_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, message_);
}


inline void CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, message_);
}
inline void CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView::GetExpectedResponseTimeDataView(
    ::mojo_base::mojom::TimeDataView* output) {
  auto pointer = data_->expected_response_time.Get();
  *output = ::mojo_base::mojom::TimeDataView(pointer, message_);
}
inline void CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView::GetDataDataView(
    ::mojo_base::mojom::BigBufferDataView* output) {
  auto pointer = &data_->data;
  *output = ::mojo_base::mojom::BigBufferDataView(pointer, message_);
}
inline void CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView::GetCacheStorageOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->cache_storage_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, message_);
}
inline void CodeCacheHost_DidGenerateCacheableMetadataInCacheStorage_ParamsDataView::GetCacheStorageCacheNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->cache_storage_cache_name.Get();
  *output = mojo::StringDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_CODE_CACHE_MOJOM_PARAMS_DATA_H_