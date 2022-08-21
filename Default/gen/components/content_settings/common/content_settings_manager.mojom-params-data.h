// components/content_settings/common/content_settings_manager.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_CONTENT_SETTINGS_COMMON_CONTENT_SETTINGS_MANAGER_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_CONTENT_SETTINGS_COMMON_CONTENT_SETTINGS_MANAGER_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace content_settings {
namespace mojom {
namespace internal {

class ValidationContext;
class  ContentSettingsManager_Clone_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data clone;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<ContentSettingsManager_Clone_Params_Data>;

  ContentSettingsManager_Clone_Params_Data();
  ~ContentSettingsManager_Clone_Params_Data() = delete;
};
static_assert(sizeof(ContentSettingsManager_Clone_Params_Data) == 16,
              "Bad sizeof(ContentSettingsManager_Clone_Params_Data)");
class  ContentSettingsManager_AllowStorageAccess_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t render_frame_id;
  int32_t storage_type;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> origin;
  mojo::internal::Pointer<::network::mojom::internal::SiteForCookies_Data> site_for_cookies;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> top_frame_origin;

 private:
  friend class mojo::internal::MessageFragment<ContentSettingsManager_AllowStorageAccess_Params_Data>;

  ContentSettingsManager_AllowStorageAccess_Params_Data();
  ~ContentSettingsManager_AllowStorageAccess_Params_Data() = delete;
};
static_assert(sizeof(ContentSettingsManager_AllowStorageAccess_Params_Data) == 40,
              "Bad sizeof(ContentSettingsManager_AllowStorageAccess_Params_Data)");
class  ContentSettingsManager_AllowStorageAccess_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t allowed : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<ContentSettingsManager_AllowStorageAccess_ResponseParams_Data>;

  ContentSettingsManager_AllowStorageAccess_ResponseParams_Data();
  ~ContentSettingsManager_AllowStorageAccess_ResponseParams_Data() = delete;
};
static_assert(sizeof(ContentSettingsManager_AllowStorageAccess_ResponseParams_Data) == 16,
              "Bad sizeof(ContentSettingsManager_AllowStorageAccess_ResponseParams_Data)");
class  ContentSettingsManager_OnContentBlocked_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t render_frame_id;
  int32_t type;

 private:
  friend class mojo::internal::MessageFragment<ContentSettingsManager_OnContentBlocked_Params_Data>;

  ContentSettingsManager_OnContentBlocked_Params_Data();
  ~ContentSettingsManager_OnContentBlocked_Params_Data() = delete;
};
static_assert(sizeof(ContentSettingsManager_OnContentBlocked_Params_Data) == 16,
              "Bad sizeof(ContentSettingsManager_OnContentBlocked_Params_Data)");

}  // namespace internal


class ContentSettingsManager_Clone_ParamsDataView {
 public:
  ContentSettingsManager_Clone_ParamsDataView() = default;

  ContentSettingsManager_Clone_ParamsDataView(
      internal::ContentSettingsManager_Clone_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClone() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::content_settings::mojom::ContentSettingsManagerInterfaceBase>>(
            &data_->clone, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ContentSettingsManager_Clone_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ContentSettingsManager_AllowStorageAccess_ParamsDataView {
 public:
  ContentSettingsManager_AllowStorageAccess_ParamsDataView() = default;

  ContentSettingsManager_AllowStorageAccess_ParamsDataView(
      internal::ContentSettingsManager_AllowStorageAccess_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
  template <typename UserType>
  [[nodiscard]] bool ReadStorageType(UserType* output) const {
    auto data_value = data_->storage_type;
    return mojo::internal::Deserialize<::content_settings::mojom::ContentSettingsManager_StorageType>(
        data_value, output);
  }
  ContentSettingsManager_StorageType storage_type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::content_settings::mojom::ContentSettingsManager_StorageType>(data_->storage_type));
  }
  inline void GetOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadOrigin(UserType* output) {
    
    auto* pointer = data_->origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, message_);
  }
  inline void GetSiteForCookiesDataView(
      ::network::mojom::SiteForCookiesDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSiteForCookies(UserType* output) {
    
    auto* pointer = data_->site_for_cookies.Get();
    return mojo::internal::Deserialize<::network::mojom::SiteForCookiesDataView>(
        pointer, output, message_);
  }
  inline void GetTopFrameOriginDataView(
      ::url::mojom::OriginDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadTopFrameOrigin(UserType* output) {
    
    auto* pointer = data_->top_frame_origin.Get();
    return mojo::internal::Deserialize<::url::mojom::OriginDataView>(
        pointer, output, message_);
  }
 private:
  internal::ContentSettingsManager_AllowStorageAccess_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ContentSettingsManager_AllowStorageAccess_ResponseParamsDataView {
 public:
  ContentSettingsManager_AllowStorageAccess_ResponseParamsDataView() = default;

  ContentSettingsManager_AllowStorageAccess_ResponseParamsDataView(
      internal::ContentSettingsManager_AllowStorageAccess_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool allowed() const {
    return data_->allowed;
  }
 private:
  internal::ContentSettingsManager_AllowStorageAccess_ResponseParams_Data* data_ = nullptr;
};



class ContentSettingsManager_OnContentBlocked_ParamsDataView {
 public:
  ContentSettingsManager_OnContentBlocked_ParamsDataView() = default;

  ContentSettingsManager_OnContentBlocked_ParamsDataView(
      internal::ContentSettingsManager_OnContentBlocked_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t render_frame_id() const {
    return data_->render_frame_id;
  }
  template <typename UserType>
  [[nodiscard]] bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::content_settings::mojom::ContentSettingsType>(
        data_value, output);
  }
  ::content_settings::mojom::ContentSettingsType type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::content_settings::mojom::ContentSettingsType>(data_->type));
  }
 private:
  internal::ContentSettingsManager_OnContentBlocked_Params_Data* data_ = nullptr;
};




inline void ContentSettingsManager_AllowStorageAccess_ParamsDataView::GetOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, message_);
}
inline void ContentSettingsManager_AllowStorageAccess_ParamsDataView::GetSiteForCookiesDataView(
    ::network::mojom::SiteForCookiesDataView* output) {
  auto pointer = data_->site_for_cookies.Get();
  *output = ::network::mojom::SiteForCookiesDataView(pointer, message_);
}
inline void ContentSettingsManager_AllowStorageAccess_ParamsDataView::GetTopFrameOriginDataView(
    ::url::mojom::OriginDataView* output) {
  auto pointer = data_->top_frame_origin.Get();
  *output = ::url::mojom::OriginDataView(pointer, message_);
}





}  // namespace mojom
}  // namespace content_settings

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // COMPONENTS_CONTENT_SETTINGS_COMMON_CONTENT_SETTINGS_MANAGER_MOJOM_PARAMS_DATA_H_