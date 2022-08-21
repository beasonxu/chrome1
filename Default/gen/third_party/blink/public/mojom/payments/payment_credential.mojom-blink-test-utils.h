// third_party/blink/public/mojom/payments/payment_credential.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_CREDENTIAL_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_CREDENTIAL_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/payments/payment_credential.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace payments {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT PaymentCredentialInterceptorForTesting : public PaymentCredential {
  virtual PaymentCredential* GetForwardingInterface() = 0;
  void StorePaymentCredential(const WTF::Vector<uint8_t>& credential_id, const WTF::String& rp_id, const WTF::Vector<uint8_t>& user_id, StorePaymentCredentialCallback callback) override;
};
class PLATFORM_EXPORT PaymentCredentialAsyncWaiter {
 public:
  explicit PaymentCredentialAsyncWaiter(PaymentCredential* proxy);

  PaymentCredentialAsyncWaiter(const PaymentCredentialAsyncWaiter&) = delete;
  PaymentCredentialAsyncWaiter& operator=(const PaymentCredentialAsyncWaiter&) = delete;

  ~PaymentCredentialAsyncWaiter();
  void StorePaymentCredential(
      const WTF::Vector<uint8_t>& credential_id, const WTF::String& rp_id, const WTF::Vector<uint8_t>& user_id, PaymentCredentialStorageStatus* out_status);

 private:
  PaymentCredential* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_CREDENTIAL_MOJOM_BLINK_TEST_UTILS_H_