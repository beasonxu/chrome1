// third_party/blink/public/mojom/service_worker/service_worker_worker_client.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_WORKER_CLIENT_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_WORKER_CLIENT_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/service_worker_worker_client.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ServiceWorkerWorkerClientInterceptorForTesting : public ServiceWorkerWorkerClient {
  virtual ServiceWorkerWorkerClient* GetForwardingInterface() = 0;
  void OnControllerChanged(::blink::mojom::ControllerServiceWorkerMode mode) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerWorkerClientAsyncWaiter {
 public:
  explicit ServiceWorkerWorkerClientAsyncWaiter(ServiceWorkerWorkerClient* proxy);

  ServiceWorkerWorkerClientAsyncWaiter(const ServiceWorkerWorkerClientAsyncWaiter&) = delete;
  ServiceWorkerWorkerClientAsyncWaiter& operator=(const ServiceWorkerWorkerClientAsyncWaiter&) = delete;

  ~ServiceWorkerWorkerClientAsyncWaiter();

 private:
  ServiceWorkerWorkerClient* const proxy_;
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_WORKER_CLIENT_MOJOM_TEST_UTILS_H_