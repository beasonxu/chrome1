// media/mojo/mojom/video_decode_perf_history.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_VIDEO_DECODE_PERF_HISTORY_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_MOJOM_VIDEO_DECODE_PERF_HISTORY_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/mojom/video_decode_perf_history.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT VideoDecodePerfHistoryInterceptorForTesting : public VideoDecodePerfHistory {
  virtual VideoDecodePerfHistory* GetForwardingInterface() = 0;
  void GetPerfInfo(::media::mojom::blink::PredictionFeaturesPtr features, GetPerfInfoCallback callback) override;
};
class BLINK_PLATFORM_EXPORT VideoDecodePerfHistoryAsyncWaiter {
 public:
  explicit VideoDecodePerfHistoryAsyncWaiter(VideoDecodePerfHistory* proxy);

  VideoDecodePerfHistoryAsyncWaiter(const VideoDecodePerfHistoryAsyncWaiter&) = delete;
  VideoDecodePerfHistoryAsyncWaiter& operator=(const VideoDecodePerfHistoryAsyncWaiter&) = delete;

  ~VideoDecodePerfHistoryAsyncWaiter();
  void GetPerfInfo(
      ::media::mojom::blink::PredictionFeaturesPtr features, bool* out_is_smooth, bool* out_is_power_efficient);

 private:
  VideoDecodePerfHistory* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_MOJOM_VIDEO_DECODE_PERF_HISTORY_MOJOM_BLINK_TEST_UTILS_H_