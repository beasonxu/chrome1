// chrome/browser/ui/webui/usb_internals/usb_internals.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_TEST_UTILS_H_
#define CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_TEST_UTILS_H_

#include "chrome/browser/ui/webui/usb_internals/usb_internals.mojom.h"


namespace mojom {


class  UsbInternalsPageHandlerInterceptorForTesting : public UsbInternalsPageHandler {
  virtual UsbInternalsPageHandler* GetForwardingInterface() = 0;
  void BindUsbDeviceManagerInterface(::mojo::PendingReceiver<::device::mojom::UsbDeviceManager> receiver) override;
  void BindTestInterface(::mojo::PendingReceiver<::device::mojom::UsbDeviceManagerTest> receiver) override;
};
class  UsbInternalsPageHandlerAsyncWaiter {
 public:
  explicit UsbInternalsPageHandlerAsyncWaiter(UsbInternalsPageHandler* proxy);

  UsbInternalsPageHandlerAsyncWaiter(const UsbInternalsPageHandlerAsyncWaiter&) = delete;
  UsbInternalsPageHandlerAsyncWaiter& operator=(const UsbInternalsPageHandlerAsyncWaiter&) = delete;

  ~UsbInternalsPageHandlerAsyncWaiter();

 private:
  UsbInternalsPageHandler* const proxy_;
};




}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_USB_INTERNALS_USB_INTERNALS_MOJOM_TEST_UTILS_H_