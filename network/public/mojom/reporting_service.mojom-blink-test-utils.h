// services/network/public/mojom/reporting_service.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_REPORTING_SERVICE_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_REPORTING_SERVICE_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/reporting_service.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT ReportingApiObserverInterceptorForTesting : public ReportingApiObserver {
  virtual ReportingApiObserver* GetForwardingInterface() = 0;
  void OnReportAdded(ReportingApiReportPtr report) override;
  void OnReportUpdated(ReportingApiReportPtr report) override;
  void OnEndpointsUpdatedForOrigin(WTF::Vector<ReportingApiEndpointPtr> endpoints) override;
};
class BLINK_PLATFORM_EXPORT ReportingApiObserverAsyncWaiter {
 public:
  explicit ReportingApiObserverAsyncWaiter(ReportingApiObserver* proxy);

  ReportingApiObserverAsyncWaiter(const ReportingApiObserverAsyncWaiter&) = delete;
  ReportingApiObserverAsyncWaiter& operator=(const ReportingApiObserverAsyncWaiter&) = delete;

  ~ReportingApiObserverAsyncWaiter();

 private:
  ReportingApiObserver* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_REPORTING_SERVICE_MOJOM_BLINK_TEST_UTILS_H_