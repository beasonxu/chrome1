// third_party/blink/public/mojom/loader/navigation_predictor.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/loader/navigation_predictor.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT AnchorElementMetricsHostInterceptorForTesting : public AnchorElementMetricsHost {
  virtual AnchorElementMetricsHost* GetForwardingInterface() = 0;
  void ReportAnchorElementClick(AnchorElementClickPtr clicked) override;
  void ReportNewAnchorElements(WTF::Vector<AnchorElementMetricsPtr> metrics) override;
  void ReportAnchorElementsEnteredViewport(WTF::Vector<AnchorElementEnteredViewportPtr> elements) override;
};
class PLATFORM_EXPORT AnchorElementMetricsHostAsyncWaiter {
 public:
  explicit AnchorElementMetricsHostAsyncWaiter(AnchorElementMetricsHost* proxy);

  AnchorElementMetricsHostAsyncWaiter(const AnchorElementMetricsHostAsyncWaiter&) = delete;
  AnchorElementMetricsHostAsyncWaiter& operator=(const AnchorElementMetricsHostAsyncWaiter&) = delete;

  ~AnchorElementMetricsHostAsyncWaiter();

 private:
  AnchorElementMetricsHost* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_LOADER_NAVIGATION_PREDICTOR_MOJOM_BLINK_TEST_UTILS_H_