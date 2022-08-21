// services/network/public/mojom/cross_origin_embedder_policy.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CROSS_ORIGIN_EMBEDDER_POLICY_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CROSS_ORIGIN_EMBEDDER_POLICY_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/cross_origin_embedder_policy.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT CrossOriginEmbedderPolicyReporterInterceptorForTesting : public CrossOriginEmbedderPolicyReporter {
  virtual CrossOriginEmbedderPolicyReporter* GetForwardingInterface() = 0;
  void QueueCorpViolationReport(const ::blink::KURL& blocked_url, ::network::mojom::blink::RequestDestination destination, bool report_only) override;
  void Clone(::mojo::PendingReceiver<CrossOriginEmbedderPolicyReporter> receiver) override;
};
class BLINK_PLATFORM_EXPORT CrossOriginEmbedderPolicyReporterAsyncWaiter {
 public:
  explicit CrossOriginEmbedderPolicyReporterAsyncWaiter(CrossOriginEmbedderPolicyReporter* proxy);

  CrossOriginEmbedderPolicyReporterAsyncWaiter(const CrossOriginEmbedderPolicyReporterAsyncWaiter&) = delete;
  CrossOriginEmbedderPolicyReporterAsyncWaiter& operator=(const CrossOriginEmbedderPolicyReporterAsyncWaiter&) = delete;

  ~CrossOriginEmbedderPolicyReporterAsyncWaiter();

 private:
  CrossOriginEmbedderPolicyReporter* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CROSS_ORIGIN_EMBEDDER_POLICY_MOJOM_BLINK_TEST_UTILS_H_