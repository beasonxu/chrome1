// services/network/public/mojom/cookie_access_observer.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_ACCESS_OBSERVER_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_ACCESS_OBSERVER_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/cookie_access_observer.mojom.h"


namespace network {
namespace mojom {


class  CookieAccessObserverInterceptorForTesting : public CookieAccessObserver {
  virtual CookieAccessObserver* GetForwardingInterface() = 0;
  void OnCookiesAccessed(CookieAccessDetailsPtr details) override;
  void Clone(::mojo::PendingReceiver<CookieAccessObserver> listener) override;
};
class  CookieAccessObserverAsyncWaiter {
 public:
  explicit CookieAccessObserverAsyncWaiter(CookieAccessObserver* proxy);

  CookieAccessObserverAsyncWaiter(const CookieAccessObserverAsyncWaiter&) = delete;
  CookieAccessObserverAsyncWaiter& operator=(const CookieAccessObserverAsyncWaiter&) = delete;

  ~CookieAccessObserverAsyncWaiter();

 private:
  CookieAccessObserver* const proxy_;
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_COOKIE_ACCESS_OBSERVER_MOJOM_TEST_UTILS_H_