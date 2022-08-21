// third_party/blink/public/mojom/frame/back_forward_cache_controller.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_BACK_FORWARD_CACHE_CONTROLLER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_BACK_FORWARD_CACHE_CONTROLLER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/frame/back_forward_cache_controller.mojom-blink.h"
#include "third_party/blink/renderer/core/core_export.h"


namespace blink {
namespace mojom {
namespace blink {


class CORE_EXPORT BackForwardCacheControllerHostInterceptorForTesting : public BackForwardCacheControllerHost {
  virtual BackForwardCacheControllerHost* GetForwardingInterface() = 0;
  void EvictFromBackForwardCache(::blink::mojom::blink::RendererEvictionReason reason) override;
  void DidChangeBackForwardCacheDisablingFeatures(uint64_t features_mask) override;
};
class CORE_EXPORT BackForwardCacheControllerHostAsyncWaiter {
 public:
  explicit BackForwardCacheControllerHostAsyncWaiter(BackForwardCacheControllerHost* proxy);

  BackForwardCacheControllerHostAsyncWaiter(const BackForwardCacheControllerHostAsyncWaiter&) = delete;
  BackForwardCacheControllerHostAsyncWaiter& operator=(const BackForwardCacheControllerHostAsyncWaiter&) = delete;

  ~BackForwardCacheControllerHostAsyncWaiter();

 private:
  BackForwardCacheControllerHost* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_BACK_FORWARD_CACHE_CONTROLLER_MOJOM_BLINK_TEST_UTILS_H_