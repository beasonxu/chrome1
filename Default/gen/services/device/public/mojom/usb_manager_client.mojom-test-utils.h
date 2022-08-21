// services/device/public/mojom/usb_manager_client.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_USB_MANAGER_CLIENT_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_USB_MANAGER_CLIENT_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/usb_manager_client.mojom.h"


namespace device {
namespace mojom {


class  UsbDeviceManagerClientInterceptorForTesting : public UsbDeviceManagerClient {
  virtual UsbDeviceManagerClient* GetForwardingInterface() = 0;
  void OnDeviceAdded(::device::mojom::UsbDeviceInfoPtr device_info) override;
  void OnDeviceRemoved(::device::mojom::UsbDeviceInfoPtr device_info) override;
};
class  UsbDeviceManagerClientAsyncWaiter {
 public:
  explicit UsbDeviceManagerClientAsyncWaiter(UsbDeviceManagerClient* proxy);

  UsbDeviceManagerClientAsyncWaiter(const UsbDeviceManagerClientAsyncWaiter&) = delete;
  UsbDeviceManagerClientAsyncWaiter& operator=(const UsbDeviceManagerClientAsyncWaiter&) = delete;

  ~UsbDeviceManagerClientAsyncWaiter();

 private:
  UsbDeviceManagerClient* const proxy_;
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_USB_MANAGER_CLIENT_MOJOM_TEST_UTILS_H_