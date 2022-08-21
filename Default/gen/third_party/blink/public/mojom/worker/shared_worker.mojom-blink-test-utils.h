// third_party/blink/public/mojom/worker/shared_worker.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/shared_worker.mojom-blink.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {


class CORE_EXPORT SharedWorkerInterceptorForTesting : public SharedWorker {
  virtual SharedWorker* GetForwardingInterface() = 0;
  void Connect(int32_t connection_id, ::blink::MessagePortDescriptor message_port) override;
  void Terminate() override;
};
class CORE_EXPORT SharedWorkerAsyncWaiter {
 public:
  explicit SharedWorkerAsyncWaiter(SharedWorker* proxy);

  SharedWorkerAsyncWaiter(const SharedWorkerAsyncWaiter&) = delete;
  SharedWorkerAsyncWaiter& operator=(const SharedWorkerAsyncWaiter&) = delete;

  ~SharedWorkerAsyncWaiter();

 private:
  SharedWorker* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_MOJOM_BLINK_TEST_UTILS_H_