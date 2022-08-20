// third_party/blink/public/mojom/app_banner/app_banner.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppBannerController_BannerPromptRequest_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data service;
  mojo::internal::Handle_Data event_receiver;
  uint8_t pad1_[4];
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> platform;

 private:
  friend class mojo::internal::MessageFragment<AppBannerController_BannerPromptRequest_Params_Data>;

  AppBannerController_BannerPromptRequest_Params_Data();
  ~AppBannerController_BannerPromptRequest_Params_Data() = delete;
};
static_assert(sizeof(AppBannerController_BannerPromptRequest_Params_Data) == 32,
              "Bad sizeof(AppBannerController_BannerPromptRequest_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppBannerController_BannerPromptRequest_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t reply;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<AppBannerController_BannerPromptRequest_ResponseParams_Data>;

  AppBannerController_BannerPromptRequest_ResponseParams_Data();
  ~AppBannerController_BannerPromptRequest_ResponseParams_Data() = delete;
};
static_assert(sizeof(AppBannerController_BannerPromptRequest_ResponseParams_Data) == 16,
              "Bad sizeof(AppBannerController_BannerPromptRequest_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppBannerEvent_BannerAccepted_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> platform;

 private:
  friend class mojo::internal::MessageFragment<AppBannerEvent_BannerAccepted_Params_Data>;

  AppBannerEvent_BannerAccepted_Params_Data();
  ~AppBannerEvent_BannerAccepted_Params_Data() = delete;
};
static_assert(sizeof(AppBannerEvent_BannerAccepted_Params_Data) == 16,
              "Bad sizeof(AppBannerEvent_BannerAccepted_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppBannerEvent_BannerDismissed_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<AppBannerEvent_BannerDismissed_Params_Data>;

  AppBannerEvent_BannerDismissed_Params_Data();
  ~AppBannerEvent_BannerDismissed_Params_Data() = delete;
};
static_assert(sizeof(AppBannerEvent_BannerDismissed_Params_Data) == 8,
              "Bad sizeof(AppBannerEvent_BannerDismissed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AppBannerService_DisplayAppBanner_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<AppBannerService_DisplayAppBanner_Params_Data>;

  AppBannerService_DisplayAppBanner_Params_Data();
  ~AppBannerService_DisplayAppBanner_Params_Data() = delete;
};
static_assert(sizeof(AppBannerService_DisplayAppBanner_Params_Data) == 8,
              "Bad sizeof(AppBannerService_DisplayAppBanner_Params_Data)");

}  // namespace internal


class AppBannerController_BannerPromptRequest_ParamsDataView {
 public:
  AppBannerController_BannerPromptRequest_ParamsDataView() = default;

  AppBannerController_BannerPromptRequest_ParamsDataView(
      internal::AppBannerController_BannerPromptRequest_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeService() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::blink::mojom::AppBannerServiceInterfaceBase>>(
            &data_->service, &result, message_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeEventReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::blink::mojom::AppBannerEventInterfaceBase>>(
            &data_->event_receiver, &result, message_);
    DCHECK(ret);
    return result;
  }
  inline void GetPlatformDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadPlatform(UserType* output) {
    
    auto* pointer = data_->platform.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, message_);
  }
 private:
  internal::AppBannerController_BannerPromptRequest_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class AppBannerController_BannerPromptRequest_ResponseParamsDataView {
 public:
  AppBannerController_BannerPromptRequest_ResponseParamsDataView() = default;

  AppBannerController_BannerPromptRequest_ResponseParamsDataView(
      internal::AppBannerController_BannerPromptRequest_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadReply(UserType* output) const {
    auto data_value = data_->reply;
    return mojo::internal::Deserialize<::blink::mojom::AppBannerPromptReply>(
        data_value, output);
  }
  AppBannerPromptReply reply() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::blink::mojom::AppBannerPromptReply>(data_->reply));
  }
 private:
  internal::AppBannerController_BannerPromptRequest_ResponseParams_Data* data_ = nullptr;
};



class AppBannerEvent_BannerAccepted_ParamsDataView {
 public:
  AppBannerEvent_BannerAccepted_ParamsDataView() = default;

  AppBannerEvent_BannerAccepted_ParamsDataView(
      internal::AppBannerEvent_BannerAccepted_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetPlatformDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadPlatform(UserType* output) {
    
    auto* pointer = data_->platform.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::AppBannerEvent_BannerAccepted_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class AppBannerEvent_BannerDismissed_ParamsDataView {
 public:
  AppBannerEvent_BannerDismissed_ParamsDataView() = default;

  AppBannerEvent_BannerDismissed_ParamsDataView(
      internal::AppBannerEvent_BannerDismissed_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AppBannerEvent_BannerDismissed_Params_Data* data_ = nullptr;
};



class AppBannerService_DisplayAppBanner_ParamsDataView {
 public:
  AppBannerService_DisplayAppBanner_ParamsDataView() = default;

  AppBannerService_DisplayAppBanner_ParamsDataView(
      internal::AppBannerService_DisplayAppBanner_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AppBannerService_DisplayAppBanner_Params_Data* data_ = nullptr;
};


inline void AppBannerController_BannerPromptRequest_ParamsDataView::GetPlatformDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->platform.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, message_);
}




inline void AppBannerEvent_BannerAccepted_ParamsDataView::GetPlatformDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->platform.Get();
  *output = mojo::StringDataView(pointer, message_);
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_APP_BANNER_APP_BANNER_MOJOM_PARAMS_DATA_H_