// third_party/blink/public/mojom/frame/pending_beacon.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_PENDING_BEACON_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_PENDING_BEACON_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/frame/pending_beacon.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT PendingBeaconHostInterceptorForTesting : public PendingBeaconHost {
  virtual PendingBeaconHost* GetForwardingInterface() = 0;
  void CreateBeacon(::mojo::PendingReceiver<PendingBeacon> receiver, const ::GURL& url, BeaconMethod method, ::base::TimeDelta timeout) override;
};
class BLINK_COMMON_EXPORT PendingBeaconHostAsyncWaiter {
 public:
  explicit PendingBeaconHostAsyncWaiter(PendingBeaconHost* proxy);

  PendingBeaconHostAsyncWaiter(const PendingBeaconHostAsyncWaiter&) = delete;
  PendingBeaconHostAsyncWaiter& operator=(const PendingBeaconHostAsyncWaiter&) = delete;

  ~PendingBeaconHostAsyncWaiter();

 private:
  PendingBeaconHost* const proxy_;
};


class BLINK_COMMON_EXPORT PendingBeaconInterceptorForTesting : public PendingBeacon {
  virtual PendingBeacon* GetForwardingInterface() = 0;
  void Deactivate() override;
  void SetRequestData(::scoped_refptr<::network::ResourceRequestBody> request_body, const std::string& content_type) override;
  void SetRequestURL(const ::GURL& url) override;
  void SendNow() override;
};
class BLINK_COMMON_EXPORT PendingBeaconAsyncWaiter {
 public:
  explicit PendingBeaconAsyncWaiter(PendingBeacon* proxy);

  PendingBeaconAsyncWaiter(const PendingBeaconAsyncWaiter&) = delete;
  PendingBeaconAsyncWaiter& operator=(const PendingBeaconAsyncWaiter&) = delete;

  ~PendingBeaconAsyncWaiter();

 private:
  PendingBeacon* const proxy_;
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_PENDING_BEACON_MOJOM_TEST_UTILS_H_