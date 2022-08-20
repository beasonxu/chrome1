// third_party/blink/public/mojom/chromeos/system_extensions/hid/cros_hid.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHROMEOS_SYSTEM_EXTENSIONS_HID_CROS_HID_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHROMEOS_SYSTEM_EXTENSIONS_HID_CROS_HID_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/chromeos/system_extensions/hid/cros_hid.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT CrosHIDInterceptorForTesting : public CrosHID {
  virtual CrosHID* GetForwardingInterface() = 0;
  void AccessDevices(std::vector<::blink::mojom::HidDeviceFilterPtr> filters, AccessDevicesCallback callback) override;
  void Connect(const std::string& device_guid, ::mojo::PendingRemote<::device::mojom::HidConnectionClient> client, ConnectCallback callback) override;
};
class BLINK_COMMON_EXPORT CrosHIDAsyncWaiter {
 public:
  explicit CrosHIDAsyncWaiter(CrosHID* proxy);

  CrosHIDAsyncWaiter(const CrosHIDAsyncWaiter&) = delete;
  CrosHIDAsyncWaiter& operator=(const CrosHIDAsyncWaiter&) = delete;

  ~CrosHIDAsyncWaiter();
  void AccessDevices(
      std::vector<::blink::mojom::HidDeviceFilterPtr> filters, std::vector<::device::mojom::HidDeviceInfoPtr>* out_devices);
  void Connect(
      const std::string& device_guid, ::mojo::PendingRemote<::device::mojom::HidConnectionClient> client, ::mojo::PendingRemote<::device::mojom::HidConnection>* out_connection);

 private:
  CrosHID* const proxy_;
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CHROMEOS_SYSTEM_EXTENSIONS_HID_CROS_HID_MOJOM_TEST_UTILS_H_