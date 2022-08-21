// services/device/public/mojom/device_posture_provider.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_DEVICE_POSTURE_PROVIDER_MOJOM_TEST_UTILS_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_DEVICE_POSTURE_PROVIDER_MOJOM_TEST_UTILS_H_

#include "services/device/public/mojom/device_posture_provider.mojom.h"


namespace device {
namespace mojom {


class  DevicePostureProviderInterceptorForTesting : public DevicePostureProvider {
  virtual DevicePostureProvider* GetForwardingInterface() = 0;
  void AddListenerAndGetCurrentPosture(::mojo::PendingRemote<DevicePostureProviderClient> client, AddListenerAndGetCurrentPostureCallback callback) override;
};
class  DevicePostureProviderAsyncWaiter {
 public:
  explicit DevicePostureProviderAsyncWaiter(DevicePostureProvider* proxy);

  DevicePostureProviderAsyncWaiter(const DevicePostureProviderAsyncWaiter&) = delete;
  DevicePostureProviderAsyncWaiter& operator=(const DevicePostureProviderAsyncWaiter&) = delete;

  ~DevicePostureProviderAsyncWaiter();
  void AddListenerAndGetCurrentPosture(
      ::mojo::PendingRemote<DevicePostureProviderClient> client, DevicePostureType* out_posture);

 private:
  DevicePostureProvider* const proxy_;
};


class  DevicePostureProviderClientInterceptorForTesting : public DevicePostureProviderClient {
  virtual DevicePostureProviderClient* GetForwardingInterface() = 0;
  void OnPostureChanged(DevicePostureType posture) override;
};
class  DevicePostureProviderClientAsyncWaiter {
 public:
  explicit DevicePostureProviderClientAsyncWaiter(DevicePostureProviderClient* proxy);

  DevicePostureProviderClientAsyncWaiter(const DevicePostureProviderClientAsyncWaiter&) = delete;
  DevicePostureProviderClientAsyncWaiter& operator=(const DevicePostureProviderClientAsyncWaiter&) = delete;

  ~DevicePostureProviderClientAsyncWaiter();

 private:
  DevicePostureProviderClient* const proxy_;
};




}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_DEVICE_POSTURE_PROVIDER_MOJOM_TEST_UTILS_H_