// third_party/blink/public/mojom/renderer_preference_watcher.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCE_WATCHER_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCE_WATCHER_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/renderer_preference_watcher.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT RendererPreferenceWatcherInterceptorForTesting : public RendererPreferenceWatcher {
  virtual RendererPreferenceWatcher* GetForwardingInterface() = 0;
  void NotifyUpdate(const ::blink::RendererPreferences& new_prefs) override;
};
class PLATFORM_EXPORT RendererPreferenceWatcherAsyncWaiter {
 public:
  explicit RendererPreferenceWatcherAsyncWaiter(RendererPreferenceWatcher* proxy);

  RendererPreferenceWatcherAsyncWaiter(const RendererPreferenceWatcherAsyncWaiter&) = delete;
  RendererPreferenceWatcherAsyncWaiter& operator=(const RendererPreferenceWatcherAsyncWaiter&) = delete;

  ~RendererPreferenceWatcherAsyncWaiter();

 private:
  RendererPreferenceWatcher* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_RENDERER_PREFERENCE_WATCHER_MOJOM_BLINK_TEST_UTILS_H_