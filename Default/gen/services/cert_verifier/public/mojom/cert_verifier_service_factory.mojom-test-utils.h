// services/cert_verifier/public/mojom/cert_verifier_service_factory.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_CERT_VERIFIER_PUBLIC_MOJOM_CERT_VERIFIER_SERVICE_FACTORY_MOJOM_TEST_UTILS_H_
#define SERVICES_CERT_VERIFIER_PUBLIC_MOJOM_CERT_VERIFIER_SERVICE_FACTORY_MOJOM_TEST_UTILS_H_

#include "services/cert_verifier/public/mojom/cert_verifier_service_factory.mojom.h"


namespace cert_verifier {
namespace mojom {


class  CertVerifierServiceFactoryInterceptorForTesting : public CertVerifierServiceFactory {
  virtual CertVerifierServiceFactory* GetForwardingInterface() = 0;
  void GetNewCertVerifier(::mojo::PendingReceiver<::cert_verifier::mojom::CertVerifierService> receiver, CertVerifierCreationParamsPtr creation_params) override;
};
class  CertVerifierServiceFactoryAsyncWaiter {
 public:
  explicit CertVerifierServiceFactoryAsyncWaiter(CertVerifierServiceFactory* proxy);

  CertVerifierServiceFactoryAsyncWaiter(const CertVerifierServiceFactoryAsyncWaiter&) = delete;
  CertVerifierServiceFactoryAsyncWaiter& operator=(const CertVerifierServiceFactoryAsyncWaiter&) = delete;

  ~CertVerifierServiceFactoryAsyncWaiter();

 private:
  CertVerifierServiceFactory* const proxy_;
};




}  // namespace mojom
}  // namespace cert_verifier

#endif  // SERVICES_CERT_VERIFIER_PUBLIC_MOJOM_CERT_VERIFIER_SERVICE_FACTORY_MOJOM_TEST_UTILS_H_