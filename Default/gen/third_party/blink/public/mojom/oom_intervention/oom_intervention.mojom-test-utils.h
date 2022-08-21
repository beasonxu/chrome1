// third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/oom_intervention/oom_intervention.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT OomInterventionHostInterceptorForTesting : public OomInterventionHost {
  virtual OomInterventionHost* GetForwardingInterface() = 0;
  void OnHighMemoryUsage() override;
};
class BLINK_COMMON_EXPORT OomInterventionHostAsyncWaiter {
 public:
  explicit OomInterventionHostAsyncWaiter(OomInterventionHost* proxy);

  OomInterventionHostAsyncWaiter(const OomInterventionHostAsyncWaiter&) = delete;
  OomInterventionHostAsyncWaiter& operator=(const OomInterventionHostAsyncWaiter&) = delete;

  ~OomInterventionHostAsyncWaiter();

 private:
  OomInterventionHost* const proxy_;
};


class BLINK_COMMON_EXPORT OomInterventionInterceptorForTesting : public OomIntervention {
  virtual OomIntervention* GetForwardingInterface() = 0;
  void StartDetection(::mojo::PendingRemote<OomInterventionHost> host, DetectionArgsPtr detection_args, bool renderer_pause_enabled, bool navigate_ads_enabled, bool purge_v8_memory_enabled) override;
};
class BLINK_COMMON_EXPORT OomInterventionAsyncWaiter {
 public:
  explicit OomInterventionAsyncWaiter(OomIntervention* proxy);

  OomInterventionAsyncWaiter(const OomInterventionAsyncWaiter&) = delete;
  OomInterventionAsyncWaiter& operator=(const OomInterventionAsyncWaiter&) = delete;

  ~OomInterventionAsyncWaiter();

 private:
  OomIntervention* const proxy_;
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_OOM_INTERVENTION_OOM_INTERVENTION_MOJOM_TEST_UTILS_H_