// third_party/blink/public/mojom/payments/payment_app.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/payments/payment_app.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace payments {
namespace mojom {


class BLINK_COMMON_EXPORT PaymentManagerInterceptorForTesting : public PaymentManager {
  virtual PaymentManager* GetForwardingInterface() = 0;
  void Init(const ::GURL& context_url, const std::string& service_worker_scope) override;
  void DeletePaymentInstrument(const std::string& instrument_key, DeletePaymentInstrumentCallback callback) override;
  void GetPaymentInstrument(const std::string& instrument_key, GetPaymentInstrumentCallback callback) override;
  void KeysOfPaymentInstruments(KeysOfPaymentInstrumentsCallback callback) override;
  void HasPaymentInstrument(const std::string& instrument_key, HasPaymentInstrumentCallback callback) override;
  void SetPaymentInstrument(const std::string& instrument_key, PaymentInstrumentPtr instrument, SetPaymentInstrumentCallback callback) override;
  void ClearPaymentInstruments(ClearPaymentInstrumentsCallback callback) override;
  void SetUserHint(const std::string& user_hint) override;
  void EnableDelegations(const std::vector<PaymentDelegation>& delegations, EnableDelegationsCallback callback) override;
};
class BLINK_COMMON_EXPORT PaymentManagerAsyncWaiter {
 public:
  explicit PaymentManagerAsyncWaiter(PaymentManager* proxy);

  PaymentManagerAsyncWaiter(const PaymentManagerAsyncWaiter&) = delete;
  PaymentManagerAsyncWaiter& operator=(const PaymentManagerAsyncWaiter&) = delete;

  ~PaymentManagerAsyncWaiter();
  void DeletePaymentInstrument(
      const std::string& instrument_key, PaymentHandlerStatus* out_status);
  void GetPaymentInstrument(
      const std::string& instrument_key, PaymentInstrumentPtr* out_instrument, PaymentHandlerStatus* out_status);
  void KeysOfPaymentInstruments(
      std::vector<std::string>* out_keys, PaymentHandlerStatus* out_status);
  void HasPaymentInstrument(
      const std::string& instrument_key, PaymentHandlerStatus* out_status);
  void SetPaymentInstrument(
      const std::string& instrument_key, PaymentInstrumentPtr instrument, PaymentHandlerStatus* out_status);
  void ClearPaymentInstruments(
      PaymentHandlerStatus* out_status);
  void EnableDelegations(
      const std::vector<PaymentDelegation>& delegations, PaymentHandlerStatus* out_status);

 private:
  PaymentManager* const proxy_;
};


class BLINK_COMMON_EXPORT PaymentHandlerResponseCallbackInterceptorForTesting : public PaymentHandlerResponseCallback {
  virtual PaymentHandlerResponseCallback* GetForwardingInterface() = 0;
  void OnResponseForAbortPayment(bool payment_aborted) override;
  void OnResponseForCanMakePayment(CanMakePaymentResponsePtr response) override;
  void OnResponseForPaymentRequest(PaymentHandlerResponsePtr response) override;
};
class BLINK_COMMON_EXPORT PaymentHandlerResponseCallbackAsyncWaiter {
 public:
  explicit PaymentHandlerResponseCallbackAsyncWaiter(PaymentHandlerResponseCallback* proxy);

  PaymentHandlerResponseCallbackAsyncWaiter(const PaymentHandlerResponseCallbackAsyncWaiter&) = delete;
  PaymentHandlerResponseCallbackAsyncWaiter& operator=(const PaymentHandlerResponseCallbackAsyncWaiter&) = delete;

  ~PaymentHandlerResponseCallbackAsyncWaiter();

 private:
  PaymentHandlerResponseCallback* const proxy_;
};




}  // namespace mojom
}  // namespace payments

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_APP_MOJOM_TEST_UTILS_H_