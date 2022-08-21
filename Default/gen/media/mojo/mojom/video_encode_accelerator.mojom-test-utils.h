// media/mojo/mojom/video_encode_accelerator.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_VIDEO_ENCODE_ACCELERATOR_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_MOJOM_VIDEO_ENCODE_ACCELERATOR_MOJOM_TEST_UTILS_H_

#include "media/mojo/mojom/video_encode_accelerator.mojom.h"


namespace media {
namespace mojom {


class  VideoEncodeAcceleratorProviderInterceptorForTesting : public VideoEncodeAcceleratorProvider {
  virtual VideoEncodeAcceleratorProvider* GetForwardingInterface() = 0;
  void CreateVideoEncodeAccelerator(::mojo::PendingReceiver<VideoEncodeAccelerator> receiver) override;
  void GetVideoEncodeAcceleratorSupportedProfiles(GetVideoEncodeAcceleratorSupportedProfilesCallback callback) override;
};
class  VideoEncodeAcceleratorProviderAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorProviderAsyncWaiter(VideoEncodeAcceleratorProvider* proxy);

  VideoEncodeAcceleratorProviderAsyncWaiter(const VideoEncodeAcceleratorProviderAsyncWaiter&) = delete;
  VideoEncodeAcceleratorProviderAsyncWaiter& operator=(const VideoEncodeAcceleratorProviderAsyncWaiter&) = delete;

  ~VideoEncodeAcceleratorProviderAsyncWaiter();
  void GetVideoEncodeAcceleratorSupportedProfiles(
      std::vector<::media::VideoEncodeAccelerator::SupportedProfile>* out_profiles);

 private:
  VideoEncodeAcceleratorProvider* const proxy_;
};


class  VideoEncodeAcceleratorInterceptorForTesting : public VideoEncodeAccelerator {
  virtual VideoEncodeAccelerator* GetForwardingInterface() = 0;
  void Initialize(const ::media::VideoEncodeAccelerator::Config& config, ::mojo::PendingAssociatedRemote<VideoEncodeAcceleratorClient> client, ::mojo::PendingRemote<::media::mojom::MediaLog> media_log, InitializeCallback callback) override;
  void Encode(const ::scoped_refptr<::media::VideoFrame>& frame, bool force_keyframe, EncodeCallback callback) override;
  void UseOutputBitstreamBuffer(int32_t bitstream_buffer_id, ::base::UnsafeSharedMemoryRegion region) override;
  void RequestEncodingParametersChangeWithLayers(const ::media::VideoBitrateAllocation& bitrate_allocation, uint32_t framerate) override;
  void RequestEncodingParametersChangeWithBitrate(const ::media::Bitrate& bitrate, uint32_t framerate) override;
  void IsFlushSupported(IsFlushSupportedCallback callback) override;
  void Flush(FlushCallback callback) override;
};
class  VideoEncodeAcceleratorAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorAsyncWaiter(VideoEncodeAccelerator* proxy);

  VideoEncodeAcceleratorAsyncWaiter(const VideoEncodeAcceleratorAsyncWaiter&) = delete;
  VideoEncodeAcceleratorAsyncWaiter& operator=(const VideoEncodeAcceleratorAsyncWaiter&) = delete;

  ~VideoEncodeAcceleratorAsyncWaiter();
  void Initialize(
      const ::media::VideoEncodeAccelerator::Config& config, ::mojo::PendingAssociatedRemote<VideoEncodeAcceleratorClient> client, ::mojo::PendingRemote<::media::mojom::MediaLog> media_log, bool* out_result);
  void Encode(
      const ::scoped_refptr<::media::VideoFrame>& frame, bool force_keyframe);
  void IsFlushSupported(
      bool* out_result);
  void Flush(
      bool* out_result);

 private:
  VideoEncodeAccelerator* const proxy_;
};


class  VideoEncodeAcceleratorClientInterceptorForTesting : public VideoEncodeAcceleratorClient {
  virtual VideoEncodeAcceleratorClient* GetForwardingInterface() = 0;
  void RequireBitstreamBuffers(uint32_t input_count, const ::gfx::Size& input_coded_size, uint32_t output_buffer_size) override;
  void BitstreamBufferReady(int32_t bitstream_buffer_id, const ::media::BitstreamBufferMetadata& metadata) override;
  void NotifyError(::media::VideoEncodeAccelerator::Error error) override;
  void NotifyEncoderInfoChange(const ::media::VideoEncoderInfo& info) override;
};
class  VideoEncodeAcceleratorClientAsyncWaiter {
 public:
  explicit VideoEncodeAcceleratorClientAsyncWaiter(VideoEncodeAcceleratorClient* proxy);

  VideoEncodeAcceleratorClientAsyncWaiter(const VideoEncodeAcceleratorClientAsyncWaiter&) = delete;
  VideoEncodeAcceleratorClientAsyncWaiter& operator=(const VideoEncodeAcceleratorClientAsyncWaiter&) = delete;

  ~VideoEncodeAcceleratorClientAsyncWaiter();

 private:
  VideoEncodeAcceleratorClient* const proxy_;
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_MOJOM_VIDEO_ENCODE_ACCELERATOR_MOJOM_TEST_UTILS_H_