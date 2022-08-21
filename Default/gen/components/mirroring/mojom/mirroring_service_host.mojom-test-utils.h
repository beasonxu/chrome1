// components/mirroring/mojom/mirroring_service_host.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_MIRRORING_MOJOM_MIRRORING_SERVICE_HOST_MOJOM_TEST_UTILS_H_
#define COMPONENTS_MIRRORING_MOJOM_MIRRORING_SERVICE_HOST_MOJOM_TEST_UTILS_H_

#include "components/mirroring/mojom/mirroring_service_host.mojom.h"


namespace mirroring {
namespace mojom {


class  MirroringServiceHostInterceptorForTesting : public MirroringServiceHost {
  virtual MirroringServiceHost* GetForwardingInterface() = 0;
  void Start(::mirroring::mojom::SessionParametersPtr params, ::mojo::PendingRemote<::mirroring::mojom::SessionObserver> observer, ::mojo::PendingRemote<::mirroring::mojom::CastMessageChannel> outbound_channel, ::mojo::PendingReceiver<::mirroring::mojom::CastMessageChannel> inbound_channel) override;
};
class  MirroringServiceHostAsyncWaiter {
 public:
  explicit MirroringServiceHostAsyncWaiter(MirroringServiceHost* proxy);

  MirroringServiceHostAsyncWaiter(const MirroringServiceHostAsyncWaiter&) = delete;
  MirroringServiceHostAsyncWaiter& operator=(const MirroringServiceHostAsyncWaiter&) = delete;

  ~MirroringServiceHostAsyncWaiter();

 private:
  MirroringServiceHost* const proxy_;
};




}  // namespace mojom
}  // namespace mirroring

#endif  // COMPONENTS_MIRRORING_MOJOM_MIRRORING_SERVICE_HOST_MOJOM_TEST_UTILS_H_