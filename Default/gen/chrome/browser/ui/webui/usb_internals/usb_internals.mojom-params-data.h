// chrome/browser/ui/webui/usb_internals/usb_internals.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_PARAMS_DATA_H_
#define CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace mojom {
namespace internal {

class ValidationContext;
class  UsbInternalsPageHandler_BindUsbDeviceManagerInterface_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data receiver;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<UsbInternalsPageHandler_BindUsbDeviceManagerInterface_Params_Data>;

  UsbInternalsPageHandler_BindUsbDeviceManagerInterface_Params_Data();
  ~UsbInternalsPageHandler_BindUsbDeviceManagerInterface_Params_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_BindUsbDeviceManagerInterface_Params_Data) == 16,
              "Bad sizeof(UsbInternalsPageHandler_BindUsbDeviceManagerInterface_Params_Data)");
class  UsbInternalsPageHandler_BindTestInterface_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data receiver;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<UsbInternalsPageHandler_BindTestInterface_Params_Data>;

  UsbInternalsPageHandler_BindTestInterface_Params_Data();
  ~UsbInternalsPageHandler_BindTestInterface_Params_Data() = delete;
};
static_assert(sizeof(UsbInternalsPageHandler_BindTestInterface_Params_Data) == 16,
              "Bad sizeof(UsbInternalsPageHandler_BindTestInterface_Params_Data)");

}  // namespace internal


class UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsDataView {
 public:
  UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsDataView() = default;

  UsbInternalsPageHandler_BindUsbDeviceManagerInterface_ParamsDataView(
      internal::UsbInternalsPageHandler_BindUsbDeviceManagerInterface_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::device::mojom::UsbDeviceManagerInterfaceBase>>(
            &data_->receiver, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::UsbInternalsPageHandler_BindUsbDeviceManagerInterface_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class UsbInternalsPageHandler_BindTestInterface_ParamsDataView {
 public:
  UsbInternalsPageHandler_BindTestInterface_ParamsDataView() = default;

  UsbInternalsPageHandler_BindTestInterface_ParamsDataView(
      internal::UsbInternalsPageHandler_BindTestInterface_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::device::mojom::UsbDeviceManagerTestInterfaceBase>>(
            &data_->receiver, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::UsbInternalsPageHandler_BindTestInterface_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};





}  // namespace mojom

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_PARAMS_DATA_H_