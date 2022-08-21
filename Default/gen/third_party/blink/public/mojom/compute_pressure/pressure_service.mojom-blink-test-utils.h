// third_party/blink/public/mojom/compute_pressure/pressure_service.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COMPUTE_PRESSURE_PRESSURE_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COMPUTE_PRESSURE_PRESSURE_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/compute_pressure/pressure_service.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT PressureObserverInterceptorForTesting : public PressureObserver {
  virtual PressureObserver* GetForwardingInterface() = 0;
  void OnUpdate(::device::mojom::blink::PressureStatePtr state) override;
};
class PLATFORM_EXPORT PressureObserverAsyncWaiter {
 public:
  explicit PressureObserverAsyncWaiter(PressureObserver* proxy);

  PressureObserverAsyncWaiter(const PressureObserverAsyncWaiter&) = delete;
  PressureObserverAsyncWaiter& operator=(const PressureObserverAsyncWaiter&) = delete;

  ~PressureObserverAsyncWaiter();

 private:
  PressureObserver* const proxy_;
};


class PLATFORM_EXPORT PressureServiceInterceptorForTesting : public PressureService {
  virtual PressureService* GetForwardingInterface() = 0;
  void AddObserver(::mojo::PendingRemote<PressureObserver> observer, PressureQuantizationPtr quantization, AddObserverCallback callback) override;
};
class PLATFORM_EXPORT PressureServiceAsyncWaiter {
 public:
  explicit PressureServiceAsyncWaiter(PressureService* proxy);

  PressureServiceAsyncWaiter(const PressureServiceAsyncWaiter&) = delete;
  PressureServiceAsyncWaiter& operator=(const PressureServiceAsyncWaiter&) = delete;

  ~PressureServiceAsyncWaiter();
  void AddObserver(
      ::mojo::PendingRemote<PressureObserver> observer, PressureQuantizationPtr quantization, PressureStatus* out_status);

 private:
  PressureService* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_COMPUTE_PRESSURE_PRESSURE_SERVICE_MOJOM_BLINK_TEST_UTILS_H_