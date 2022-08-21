// third_party/blink/public/mojom/usb/web_usb_service.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_GetDevices_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<WebUsbService_GetDevices_Params_Data>;

  WebUsbService_GetDevices_Params_Data();
  ~WebUsbService_GetDevices_Params_Data() = delete;
};
static_assert(sizeof(WebUsbService_GetDevices_Params_Data) == 8,
              "Bad sizeof(WebUsbService_GetDevices_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_GetDevices_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::device::mojom::internal::UsbDeviceInfo_Data>>> results;

 private:
  friend class mojo::internal::MessageFragment<WebUsbService_GetDevices_ResponseParams_Data>;

  WebUsbService_GetDevices_ResponseParams_Data();
  ~WebUsbService_GetDevices_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebUsbService_GetDevices_ResponseParams_Data) == 16,
              "Bad sizeof(WebUsbService_GetDevices_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_GetDevice_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> guid;
  mojo::internal::Handle_Data device_receiver;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<WebUsbService_GetDevice_Params_Data>;

  WebUsbService_GetDevice_Params_Data();
  ~WebUsbService_GetDevice_Params_Data() = delete;
};
static_assert(sizeof(WebUsbService_GetDevice_Params_Data) == 24,
              "Bad sizeof(WebUsbService_GetDevice_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_GetPermission_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::device::mojom::internal::UsbDeviceFilter_Data>>> device_filters;

 private:
  friend class mojo::internal::MessageFragment<WebUsbService_GetPermission_Params_Data>;

  WebUsbService_GetPermission_Params_Data();
  ~WebUsbService_GetPermission_Params_Data() = delete;
};
static_assert(sizeof(WebUsbService_GetPermission_Params_Data) == 16,
              "Bad sizeof(WebUsbService_GetPermission_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_GetPermission_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::device::mojom::internal::UsbDeviceInfo_Data> result;

 private:
  friend class mojo::internal::MessageFragment<WebUsbService_GetPermission_ResponseParams_Data>;

  WebUsbService_GetPermission_ResponseParams_Data();
  ~WebUsbService_GetPermission_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebUsbService_GetPermission_ResponseParams_Data) == 16,
              "Bad sizeof(WebUsbService_GetPermission_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_ForgetDevice_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> guid;

 private:
  friend class mojo::internal::MessageFragment<WebUsbService_ForgetDevice_Params_Data>;

  WebUsbService_ForgetDevice_Params_Data();
  ~WebUsbService_ForgetDevice_Params_Data() = delete;
};
static_assert(sizeof(WebUsbService_ForgetDevice_Params_Data) == 16,
              "Bad sizeof(WebUsbService_ForgetDevice_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_ForgetDevice_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<WebUsbService_ForgetDevice_ResponseParams_Data>;

  WebUsbService_ForgetDevice_ResponseParams_Data();
  ~WebUsbService_ForgetDevice_ResponseParams_Data() = delete;
};
static_assert(sizeof(WebUsbService_ForgetDevice_ResponseParams_Data) == 8,
              "Bad sizeof(WebUsbService_ForgetDevice_ResponseParams_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebUsbService_SetClient_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data client;

 private:
  friend class mojo::internal::MessageFragment<WebUsbService_SetClient_Params_Data>;

  WebUsbService_SetClient_Params_Data();
  ~WebUsbService_SetClient_Params_Data() = delete;
};
static_assert(sizeof(WebUsbService_SetClient_Params_Data) == 16,
              "Bad sizeof(WebUsbService_SetClient_Params_Data)");

}  // namespace internal


class WebUsbService_GetDevices_ParamsDataView {
 public:
  WebUsbService_GetDevices_ParamsDataView() = default;

  WebUsbService_GetDevices_ParamsDataView(
      internal::WebUsbService_GetDevices_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WebUsbService_GetDevices_Params_Data* data_ = nullptr;
};



class WebUsbService_GetDevices_ResponseParamsDataView {
 public:
  WebUsbService_GetDevices_ResponseParamsDataView() = default;

  WebUsbService_GetDevices_ResponseParamsDataView(
      internal::WebUsbService_GetDevices_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResultsDataView(
      mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResults(UserType* output) {
    
    auto* pointer = data_->results.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>>(
        pointer, output, message_);
  }
 private:
  internal::WebUsbService_GetDevices_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class WebUsbService_GetDevice_ParamsDataView {
 public:
  WebUsbService_GetDevice_ParamsDataView() = default;

  WebUsbService_GetDevice_ParamsDataView(
      internal::WebUsbService_GetDevice_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadGuid(UserType* output) {
    
    auto* pointer = data_->guid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  UserType TakeDeviceReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::device::mojom::UsbDeviceInterfaceBase>>(
            &data_->device_receiver, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WebUsbService_GetDevice_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class WebUsbService_GetPermission_ParamsDataView {
 public:
  WebUsbService_GetPermission_ParamsDataView() = default;

  WebUsbService_GetPermission_ParamsDataView(
      internal::WebUsbService_GetPermission_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetDeviceFiltersDataView(
      mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadDeviceFilters(UserType* output) {
    
    auto* pointer = data_->device_filters.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>>(
        pointer, output, message_);
  }
 private:
  internal::WebUsbService_GetPermission_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class WebUsbService_GetPermission_ResponseParamsDataView {
 public:
  WebUsbService_GetPermission_ResponseParamsDataView() = default;

  WebUsbService_GetPermission_ResponseParamsDataView(
      internal::WebUsbService_GetPermission_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResultDataView(
      ::device::mojom::UsbDeviceInfoDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::device::mojom::UsbDeviceInfoDataView, UserType>(),
    "Attempting to read the optional `result` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadResult` instead "
    "of `ReadResult if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->result.Get();
    return mojo::internal::Deserialize<::device::mojom::UsbDeviceInfoDataView>(
        pointer, output, message_);
  }
 private:
  internal::WebUsbService_GetPermission_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class WebUsbService_ForgetDevice_ParamsDataView {
 public:
  WebUsbService_ForgetDevice_ParamsDataView() = default;

  WebUsbService_ForgetDevice_ParamsDataView(
      internal::WebUsbService_ForgetDevice_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetGuidDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadGuid(UserType* output) {
    
    auto* pointer = data_->guid.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::WebUsbService_ForgetDevice_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class WebUsbService_ForgetDevice_ResponseParamsDataView {
 public:
  WebUsbService_ForgetDevice_ResponseParamsDataView() = default;

  WebUsbService_ForgetDevice_ResponseParamsDataView(
      internal::WebUsbService_ForgetDevice_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::WebUsbService_ForgetDevice_ResponseParams_Data* data_ = nullptr;
};



class WebUsbService_SetClient_ParamsDataView {
 public:
  WebUsbService_SetClient_ParamsDataView() = default;

  WebUsbService_SetClient_ParamsDataView(
      internal::WebUsbService_SetClient_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::device::mojom::UsbDeviceManagerClientAssociatedPtrInfoDataView>(
            &data_->client, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WebUsbService_SetClient_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};




inline void WebUsbService_GetDevices_ResponseParamsDataView::GetResultsDataView(
    mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>* output) {
  auto pointer = data_->results.Get();
  *output = mojo::ArrayDataView<::device::mojom::UsbDeviceInfoDataView>(pointer, message_);
}


inline void WebUsbService_GetDevice_ParamsDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void WebUsbService_GetPermission_ParamsDataView::GetDeviceFiltersDataView(
    mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>* output) {
  auto pointer = data_->device_filters.Get();
  *output = mojo::ArrayDataView<::device::mojom::UsbDeviceFilterDataView>(pointer, message_);
}


inline void WebUsbService_GetPermission_ResponseParamsDataView::GetResultDataView(
    ::device::mojom::UsbDeviceInfoDataView* output) {
  auto pointer = data_->result.Get();
  *output = ::device::mojom::UsbDeviceInfoDataView(pointer, message_);
}


inline void WebUsbService_ForgetDevice_ParamsDataView::GetGuidDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->guid.Get();
  *output = mojo::StringDataView(pointer, message_);
}





}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_USB_WEB_USB_SERVICE_MOJOM_PARAMS_DATA_H_