// third_party/blink/public/mojom/badging/badging.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_BADGING_BADGING_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_BADGING_BADGING_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/badging/badging.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT BadgeServiceInterceptorForTesting : public BadgeService {
  virtual BadgeService* GetForwardingInterface() = 0;
  void SetBadge(BadgeValuePtr value) override;
  void ClearBadge() override;
};
class PLATFORM_EXPORT BadgeServiceAsyncWaiter {
 public:
  explicit BadgeServiceAsyncWaiter(BadgeService* proxy);

  BadgeServiceAsyncWaiter(const BadgeServiceAsyncWaiter&) = delete;
  BadgeServiceAsyncWaiter& operator=(const BadgeServiceAsyncWaiter&) = delete;

  ~BadgeServiceAsyncWaiter();

 private:
  BadgeService* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_BADGING_BADGING_MOJOM_BLINK_TEST_UTILS_H_