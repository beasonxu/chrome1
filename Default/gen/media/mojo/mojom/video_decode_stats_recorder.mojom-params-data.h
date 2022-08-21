// media/mojo/mojom/video_decode_stats_recorder.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_VIDEO_DECODE_STATS_RECORDER_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_MOJOM_VIDEO_DECODE_STATS_RECORDER_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace media {
namespace mojom {
namespace internal {

class ValidationContext;
class  VideoDecodeStatsRecorder_StartNewRecord_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::PredictionFeatures_Data> features;

 private:
  friend class mojo::internal::MessageFragment<VideoDecodeStatsRecorder_StartNewRecord_Params_Data>;

  VideoDecodeStatsRecorder_StartNewRecord_Params_Data();
  ~VideoDecodeStatsRecorder_StartNewRecord_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeStatsRecorder_StartNewRecord_Params_Data) == 16,
              "Bad sizeof(VideoDecodeStatsRecorder_StartNewRecord_Params_Data)");
class  VideoDecodeStatsRecorder_UpdateRecord_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media::mojom::internal::PredictionTargets_Data> targets;

 private:
  friend class mojo::internal::MessageFragment<VideoDecodeStatsRecorder_UpdateRecord_Params_Data>;

  VideoDecodeStatsRecorder_UpdateRecord_Params_Data();
  ~VideoDecodeStatsRecorder_UpdateRecord_Params_Data() = delete;
};
static_assert(sizeof(VideoDecodeStatsRecorder_UpdateRecord_Params_Data) == 16,
              "Bad sizeof(VideoDecodeStatsRecorder_UpdateRecord_Params_Data)");

}  // namespace internal


class VideoDecodeStatsRecorder_StartNewRecord_ParamsDataView {
 public:
  VideoDecodeStatsRecorder_StartNewRecord_ParamsDataView() = default;

  VideoDecodeStatsRecorder_StartNewRecord_ParamsDataView(
      internal::VideoDecodeStatsRecorder_StartNewRecord_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetFeaturesDataView(
      ::media::mojom::PredictionFeaturesDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadFeatures(UserType* output) {
    
    auto* pointer = data_->features.Get();
    return mojo::internal::Deserialize<::media::mojom::PredictionFeaturesDataView>(
        pointer, output, message_);
  }
 private:
  internal::VideoDecodeStatsRecorder_StartNewRecord_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class VideoDecodeStatsRecorder_UpdateRecord_ParamsDataView {
 public:
  VideoDecodeStatsRecorder_UpdateRecord_ParamsDataView() = default;

  VideoDecodeStatsRecorder_UpdateRecord_ParamsDataView(
      internal::VideoDecodeStatsRecorder_UpdateRecord_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTargetsDataView(
      ::media::mojom::PredictionTargetsDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadTargets(UserType* output) {
    
    auto* pointer = data_->targets.Get();
    return mojo::internal::Deserialize<::media::mojom::PredictionTargetsDataView>(
        pointer, output, message_);
  }
 private:
  internal::VideoDecodeStatsRecorder_UpdateRecord_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void VideoDecodeStatsRecorder_StartNewRecord_ParamsDataView::GetFeaturesDataView(
    ::media::mojom::PredictionFeaturesDataView* output) {
  auto pointer = data_->features.Get();
  *output = ::media::mojom::PredictionFeaturesDataView(pointer, message_);
}


inline void VideoDecodeStatsRecorder_UpdateRecord_ParamsDataView::GetTargetsDataView(
    ::media::mojom::PredictionTargetsDataView* output) {
  auto pointer = data_->targets.Get();
  *output = ::media::mojom::PredictionTargetsDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // MEDIA_MOJO_MOJOM_VIDEO_DECODE_STATS_RECORDER_MOJOM_PARAMS_DATA_H_