// media/mojo/mojom/gpu_accelerated_video_decoder.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_GPU_ACCELERATED_VIDEO_DECODER_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_MOJOM_GPU_ACCELERATED_VIDEO_DECODER_MOJOM_TEST_UTILS_H_

#include "media/mojo/mojom/gpu_accelerated_video_decoder.mojom.h"


namespace media {
namespace mojom {


class  GpuAcceleratedVideoDecoderProviderInterceptorForTesting : public GpuAcceleratedVideoDecoderProvider {
  virtual GpuAcceleratedVideoDecoderProvider* GetForwardingInterface() = 0;
  void CreateAcceleratedVideoDecoder(const ::media::VideoDecodeAccelerator::Config& config, ::mojo::PendingAssociatedReceiver<GpuAcceleratedVideoDecoder> receiver, ::mojo::PendingAssociatedRemote<GpuAcceleratedVideoDecoderClient> client, CreateAcceleratedVideoDecoderCallback callback) override;
};
class  GpuAcceleratedVideoDecoderProviderAsyncWaiter {
 public:
  explicit GpuAcceleratedVideoDecoderProviderAsyncWaiter(GpuAcceleratedVideoDecoderProvider* proxy);

  GpuAcceleratedVideoDecoderProviderAsyncWaiter(const GpuAcceleratedVideoDecoderProviderAsyncWaiter&) = delete;
  GpuAcceleratedVideoDecoderProviderAsyncWaiter& operator=(const GpuAcceleratedVideoDecoderProviderAsyncWaiter&) = delete;

  ~GpuAcceleratedVideoDecoderProviderAsyncWaiter();
  void CreateAcceleratedVideoDecoder(
      const ::media::VideoDecodeAccelerator::Config& config, ::mojo::PendingAssociatedReceiver<GpuAcceleratedVideoDecoder> receiver, ::mojo::PendingAssociatedRemote<GpuAcceleratedVideoDecoderClient> client, bool* out_success);

 private:
  GpuAcceleratedVideoDecoderProvider* const proxy_;
};


class  GpuAcceleratedVideoDecoderInterceptorForTesting : public GpuAcceleratedVideoDecoder {
  virtual GpuAcceleratedVideoDecoder* GetForwardingInterface() = 0;
  void Decode(::media::BitstreamBuffer buffer) override;
  void AssignPictureBuffers(std::vector<PictureBufferAssignmentPtr> assignments) override;
  void ReusePictureBuffer(int32_t picture_buffer_id) override;
  void Flush(FlushCallback callback) override;
  void Reset(ResetCallback callback) override;
  void SetOverlayInfo(const ::media::OverlayInfo& overlay_info) override;
};
class  GpuAcceleratedVideoDecoderAsyncWaiter {
 public:
  explicit GpuAcceleratedVideoDecoderAsyncWaiter(GpuAcceleratedVideoDecoder* proxy);

  GpuAcceleratedVideoDecoderAsyncWaiter(const GpuAcceleratedVideoDecoderAsyncWaiter&) = delete;
  GpuAcceleratedVideoDecoderAsyncWaiter& operator=(const GpuAcceleratedVideoDecoderAsyncWaiter&) = delete;

  ~GpuAcceleratedVideoDecoderAsyncWaiter();
  void Flush(
      );
  void Reset(
      );

 private:
  GpuAcceleratedVideoDecoder* const proxy_;
};


class  GpuAcceleratedVideoDecoderClientInterceptorForTesting : public GpuAcceleratedVideoDecoderClient {
  virtual GpuAcceleratedVideoDecoderClient* GetForwardingInterface() = 0;
  void OnInitializationComplete(bool success) override;
  void OnBitstreamBufferProcessed(int32_t buffer_id) override;
  void OnProvidePictureBuffers(uint32_t num_frames, ::media::VideoPixelFormat format, uint32_t num_textures_per_frame, const ::gfx::Size& buffer_size, uint32_t texture_target) override;
  void OnPictureReady(PictureReadyParamsPtr params) override;
  void OnDismissPictureBuffer(int32_t buffer_id) override;
  void OnError(uint32_t error_id) override;
};
class  GpuAcceleratedVideoDecoderClientAsyncWaiter {
 public:
  explicit GpuAcceleratedVideoDecoderClientAsyncWaiter(GpuAcceleratedVideoDecoderClient* proxy);

  GpuAcceleratedVideoDecoderClientAsyncWaiter(const GpuAcceleratedVideoDecoderClientAsyncWaiter&) = delete;
  GpuAcceleratedVideoDecoderClientAsyncWaiter& operator=(const GpuAcceleratedVideoDecoderClientAsyncWaiter&) = delete;

  ~GpuAcceleratedVideoDecoderClientAsyncWaiter();

 private:
  GpuAcceleratedVideoDecoderClient* const proxy_;
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_MOJOM_GPU_ACCELERATED_VIDEO_DECODER_MOJOM_TEST_UTILS_H_