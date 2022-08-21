// third_party/blink/public/mojom/media/fullscreen_video_element.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIA_FULLSCREEN_VIDEO_ELEMENT_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIA_FULLSCREEN_VIDEO_ELEMENT_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/media/fullscreen_video_element.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT FullscreenVideoElementHandlerInterceptorForTesting : public FullscreenVideoElementHandler {
  virtual FullscreenVideoElementHandler* GetForwardingInterface() = 0;
  void RequestFullscreenVideoElement() override;
};
class BLINK_COMMON_EXPORT FullscreenVideoElementHandlerAsyncWaiter {
 public:
  explicit FullscreenVideoElementHandlerAsyncWaiter(FullscreenVideoElementHandler* proxy);

  FullscreenVideoElementHandlerAsyncWaiter(const FullscreenVideoElementHandlerAsyncWaiter&) = delete;
  FullscreenVideoElementHandlerAsyncWaiter& operator=(const FullscreenVideoElementHandlerAsyncWaiter&) = delete;

  ~FullscreenVideoElementHandlerAsyncWaiter();

 private:
  FullscreenVideoElementHandler* const proxy_;
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MEDIA_FULLSCREEN_VIDEO_ELEMENT_MOJOM_TEST_UTILS_H_