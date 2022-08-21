// third_party/blink/public/mojom/idle/idle_manager.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/idle/idle_manager.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT IdleMonitorInterceptorForTesting : public IdleMonitor {
  virtual IdleMonitor* GetForwardingInterface() = 0;
  void Update(IdleStatePtr state, bool is_overridden_by_devtools) override;
};
class PLATFORM_EXPORT IdleMonitorAsyncWaiter {
 public:
  explicit IdleMonitorAsyncWaiter(IdleMonitor* proxy);

  IdleMonitorAsyncWaiter(const IdleMonitorAsyncWaiter&) = delete;
  IdleMonitorAsyncWaiter& operator=(const IdleMonitorAsyncWaiter&) = delete;

  ~IdleMonitorAsyncWaiter();

 private:
  IdleMonitor* const proxy_;
};


class PLATFORM_EXPORT IdleManagerInterceptorForTesting : public IdleManager {
  virtual IdleManager* GetForwardingInterface() = 0;
  void AddMonitor(::mojo::PendingRemote<IdleMonitor> monitor, AddMonitorCallback callback) override;
};
class PLATFORM_EXPORT IdleManagerAsyncWaiter {
 public:
  explicit IdleManagerAsyncWaiter(IdleManager* proxy);

  IdleManagerAsyncWaiter(const IdleManagerAsyncWaiter&) = delete;
  IdleManagerAsyncWaiter& operator=(const IdleManagerAsyncWaiter&) = delete;

  ~IdleManagerAsyncWaiter();
  void AddMonitor(
      ::mojo::PendingRemote<IdleMonitor> monitor, IdleManagerError* out_error, IdleStatePtr* out_state);

 private:
  IdleManager* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_IDLE_IDLE_MANAGER_MOJOM_BLINK_TEST_UTILS_H_