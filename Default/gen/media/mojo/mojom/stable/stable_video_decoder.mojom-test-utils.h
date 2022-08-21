// media/mojo/mojom/stable/stable_video_decoder.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_STABLE_STABLE_VIDEO_DECODER_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_MOJOM_STABLE_STABLE_VIDEO_DECODER_MOJOM_TEST_UTILS_H_

#include "media/mojo/mojom/stable/stable_video_decoder.mojom.h"


namespace media {
namespace stable {
namespace mojom {


class  MediaLogInterceptorForTesting : public MediaLog {
  virtual MediaLog* GetForwardingInterface() = 0;
  void AddLogRecord(const ::media::MediaLogRecord& event) override;
};
class  MediaLogAsyncWaiter {
 public:
  explicit MediaLogAsyncWaiter(MediaLog* proxy);

  MediaLogAsyncWaiter(const MediaLogAsyncWaiter&) = delete;
  MediaLogAsyncWaiter& operator=(const MediaLogAsyncWaiter&) = delete;

  ~MediaLogAsyncWaiter();

 private:
  MediaLog* const proxy_;
};


class  VideoFrameHandleReleaserInterceptorForTesting : public VideoFrameHandleReleaser {
  virtual VideoFrameHandleReleaser* GetForwardingInterface() = 0;
  void ReleaseVideoFrame(const ::base::UnguessableToken& release_token) override;
};
class  VideoFrameHandleReleaserAsyncWaiter {
 public:
  explicit VideoFrameHandleReleaserAsyncWaiter(VideoFrameHandleReleaser* proxy);

  VideoFrameHandleReleaserAsyncWaiter(const VideoFrameHandleReleaserAsyncWaiter&) = delete;
  VideoFrameHandleReleaserAsyncWaiter& operator=(const VideoFrameHandleReleaserAsyncWaiter&) = delete;

  ~VideoFrameHandleReleaserAsyncWaiter();

 private:
  VideoFrameHandleReleaser* const proxy_;
};


class  VideoDecoderClientInterceptorForTesting : public VideoDecoderClient {
  virtual VideoDecoderClient* GetForwardingInterface() = 0;
  void OnVideoFrameDecoded(const ::scoped_refptr<::media::VideoFrame>& frame, bool can_read_without_stalling, const ::base::UnguessableToken& release_token) override;
  void OnWaiting(::media::WaitingReason reason) override;
};
class  VideoDecoderClientAsyncWaiter {
 public:
  explicit VideoDecoderClientAsyncWaiter(VideoDecoderClient* proxy);

  VideoDecoderClientAsyncWaiter(const VideoDecoderClientAsyncWaiter&) = delete;
  VideoDecoderClientAsyncWaiter& operator=(const VideoDecoderClientAsyncWaiter&) = delete;

  ~VideoDecoderClientAsyncWaiter();

 private:
  VideoDecoderClient* const proxy_;
};


class  CdmContextEventCallbackInterceptorForTesting : public CdmContextEventCallback {
  virtual CdmContextEventCallback* GetForwardingInterface() = 0;
  void EventCallback(::media::CdmContext::Event event) override;
};
class  CdmContextEventCallbackAsyncWaiter {
 public:
  explicit CdmContextEventCallbackAsyncWaiter(CdmContextEventCallback* proxy);

  CdmContextEventCallbackAsyncWaiter(const CdmContextEventCallbackAsyncWaiter&) = delete;
  CdmContextEventCallbackAsyncWaiter& operator=(const CdmContextEventCallbackAsyncWaiter&) = delete;

  ~CdmContextEventCallbackAsyncWaiter();

 private:
  CdmContextEventCallback* const proxy_;
};


class  StableCdmContextInterceptorForTesting : public StableCdmContext {
  virtual StableCdmContext* GetForwardingInterface() = 0;
  void GetHwKeyData(::std::unique_ptr<::media::DecryptConfig> decrypt_config, const std::vector<uint8_t>& hw_identifier, GetHwKeyDataCallback callback) override;
  void RegisterEventCallback(::mojo::PendingRemote<CdmContextEventCallback> callback) override;
  void GetHwConfigData(GetHwConfigDataCallback callback) override;
  void GetScreenResolutions(GetScreenResolutionsCallback callback) override;
};
class  StableCdmContextAsyncWaiter {
 public:
  explicit StableCdmContextAsyncWaiter(StableCdmContext* proxy);

  StableCdmContextAsyncWaiter(const StableCdmContextAsyncWaiter&) = delete;
  StableCdmContextAsyncWaiter& operator=(const StableCdmContextAsyncWaiter&) = delete;

  ~StableCdmContextAsyncWaiter();
  void GetHwKeyData(
      ::std::unique_ptr<::media::DecryptConfig> decrypt_config, const std::vector<uint8_t>& hw_identifier, ::media::Decryptor::Status* out_status, std::vector<uint8_t>* out_key_data);
  void GetHwConfigData(
      bool* out_success, std::vector<uint8_t>* out_config_data);
  void GetScreenResolutions(
      std::vector<::gfx::Size>* out_resolutions);

 private:
  StableCdmContext* const proxy_;
};


class  StableVideoDecoderInterceptorForTesting : public StableVideoDecoder {
  virtual StableVideoDecoder* GetForwardingInterface() = 0;
  void GetSupportedConfigs(GetSupportedConfigsCallback callback) override;
  void Construct(::mojo::PendingAssociatedRemote<VideoDecoderClient> client, ::mojo::PendingRemote<MediaLog> media_log, ::mojo::PendingReceiver<VideoFrameHandleReleaser> video_frame_handle_releaser, ::mojo::ScopedDataPipeConsumerHandle decoder_buffer_pipe, const ::gfx::ColorSpace& target_color_space) override;
  void Initialize(const ::media::VideoDecoderConfig& config, bool low_delay, ::mojo::PendingRemote<StableCdmContext> cdm_context, InitializeCallback callback) override;
  void Decode(const ::scoped_refptr<::media::DecoderBuffer>& buffer, DecodeCallback callback) override;
  void Reset(ResetCallback callback) override;
};
class  StableVideoDecoderAsyncWaiter {
 public:
  explicit StableVideoDecoderAsyncWaiter(StableVideoDecoder* proxy);

  StableVideoDecoderAsyncWaiter(const StableVideoDecoderAsyncWaiter&) = delete;
  StableVideoDecoderAsyncWaiter& operator=(const StableVideoDecoderAsyncWaiter&) = delete;

  ~StableVideoDecoderAsyncWaiter();
  void GetSupportedConfigs(
      std::vector<::media::SupportedVideoDecoderConfig>* out_supported_configs, ::media::VideoDecoderType* out_decoder_type);
  void Initialize(
      const ::media::VideoDecoderConfig& config, bool low_delay, ::mojo::PendingRemote<StableCdmContext> cdm_context, ::media::DecoderStatus* out_status, bool* out_needs_bitstream_conversion, int32_t* out_max_decode_requests, ::media::VideoDecoderType* out_decoder_type);
  void Decode(
      const ::scoped_refptr<::media::DecoderBuffer>& buffer, ::media::DecoderStatus* out_status);
  void Reset(
      );

 private:
  StableVideoDecoder* const proxy_;
};


class  StableVideoDecoderFactoryInterceptorForTesting : public StableVideoDecoderFactory {
  virtual StableVideoDecoderFactory* GetForwardingInterface() = 0;
  void CreateStableVideoDecoder(::mojo::PendingReceiver<StableVideoDecoder> receiver) override;
};
class  StableVideoDecoderFactoryAsyncWaiter {
 public:
  explicit StableVideoDecoderFactoryAsyncWaiter(StableVideoDecoderFactory* proxy);

  StableVideoDecoderFactoryAsyncWaiter(const StableVideoDecoderFactoryAsyncWaiter&) = delete;
  StableVideoDecoderFactoryAsyncWaiter& operator=(const StableVideoDecoderFactoryAsyncWaiter&) = delete;

  ~StableVideoDecoderFactoryAsyncWaiter();

 private:
  StableVideoDecoderFactory* const proxy_;
};




}  // namespace mojom
}  // namespace stable
}  // namespace media

#endif  // MEDIA_MOJO_MOJOM_STABLE_STABLE_VIDEO_DECODER_MOJOM_TEST_UTILS_H_