// services/network/public/mojom/trust_tokens.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_TRUST_TOKENS_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_TRUST_TOKENS_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/trust_tokens.mojom.h"


namespace network {
namespace mojom {


class  TrustTokenQueryAnswererInterceptorForTesting : public TrustTokenQueryAnswerer {
  virtual TrustTokenQueryAnswerer* GetForwardingInterface() = 0;
  void HasTrustTokens(const ::url::Origin& issuer, HasTrustTokensCallback callback) override;
};
class  TrustTokenQueryAnswererAsyncWaiter {
 public:
  explicit TrustTokenQueryAnswererAsyncWaiter(TrustTokenQueryAnswerer* proxy);

  TrustTokenQueryAnswererAsyncWaiter(const TrustTokenQueryAnswererAsyncWaiter&) = delete;
  TrustTokenQueryAnswererAsyncWaiter& operator=(const TrustTokenQueryAnswererAsyncWaiter&) = delete;

  ~TrustTokenQueryAnswererAsyncWaiter();
  void HasTrustTokens(
      const ::url::Origin& issuer, HasTrustTokensResultPtr* out_result);

 private:
  TrustTokenQueryAnswerer* const proxy_;
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_TRUST_TOKENS_MOJOM_TEST_UTILS_H_