// services/network/public/mojom/accept_ch_frame_observer.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_ACCEPT_CH_FRAME_OBSERVER_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_ACCEPT_CH_FRAME_OBSERVER_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/accept_ch_frame_observer.mojom.h"


namespace network {
namespace mojom {


class  AcceptCHFrameObserverInterceptorForTesting : public AcceptCHFrameObserver {
  virtual AcceptCHFrameObserver* GetForwardingInterface() = 0;
  void OnAcceptCHFrameReceived(const ::url::Origin& origin, const std::vector<::network::mojom::WebClientHintsType>& accept_ch_frame, OnAcceptCHFrameReceivedCallback callback) override;
  void Clone(::mojo::PendingReceiver<AcceptCHFrameObserver> listener) override;
};
class  AcceptCHFrameObserverAsyncWaiter {
 public:
  explicit AcceptCHFrameObserverAsyncWaiter(AcceptCHFrameObserver* proxy);

  AcceptCHFrameObserverAsyncWaiter(const AcceptCHFrameObserverAsyncWaiter&) = delete;
  AcceptCHFrameObserverAsyncWaiter& operator=(const AcceptCHFrameObserverAsyncWaiter&) = delete;

  ~AcceptCHFrameObserverAsyncWaiter();
  void OnAcceptCHFrameReceived(
      const ::url::Origin& origin, const std::vector<::network::mojom::WebClientHintsType>& accept_ch_frame, int32_t* out_status);

 private:
  AcceptCHFrameObserver* const proxy_;
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_ACCEPT_CH_FRAME_OBSERVER_MOJOM_TEST_UTILS_H_