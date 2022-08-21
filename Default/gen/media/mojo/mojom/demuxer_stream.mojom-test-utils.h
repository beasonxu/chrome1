// media/mojo/mojom/demuxer_stream.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_DEMUXER_STREAM_MOJOM_TEST_UTILS_H_
#define MEDIA_MOJO_MOJOM_DEMUXER_STREAM_MOJOM_TEST_UTILS_H_

#include "media/mojo/mojom/demuxer_stream.mojom.h"


namespace media {
namespace mojom {


class  DemuxerStreamInterceptorForTesting : public DemuxerStream {
  virtual DemuxerStream* GetForwardingInterface() = 0;
  void Initialize(InitializeCallback callback) override;
  void Read(ReadCallback callback) override;
  void EnableBitstreamConverter() override;
};
class  DemuxerStreamAsyncWaiter {
 public:
  explicit DemuxerStreamAsyncWaiter(DemuxerStream* proxy);

  DemuxerStreamAsyncWaiter(const DemuxerStreamAsyncWaiter&) = delete;
  DemuxerStreamAsyncWaiter& operator=(const DemuxerStreamAsyncWaiter&) = delete;

  ~DemuxerStreamAsyncWaiter();
  void Initialize(
      ::media::DemuxerStream::Type* out_type, ::mojo::ScopedDataPipeConsumerHandle* out_pipe, absl::optional<::media::AudioDecoderConfig>* out_audio_config, absl::optional<::media::VideoDecoderConfig>* out_video_config);
  void Read(
      ::media::DemuxerStream::Status* out_status, ::media::mojom::DecoderBufferPtr* out_buffer, absl::optional<::media::AudioDecoderConfig>* out_audio_config, absl::optional<::media::VideoDecoderConfig>* out_video_config);

 private:
  DemuxerStream* const proxy_;
};




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_MOJOM_DEMUXER_STREAM_MOJOM_TEST_UTILS_H_