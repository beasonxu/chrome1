// media/mojo/mojom/media_player.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_MEDIA_PLAYER_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_MOJOM_MEDIA_PLAYER_MOJOM_PARAMS_DATA_H_

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
class  MediaPlayer_RequestPlay_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayer_RequestPlay_Params_Data>;

  MediaPlayer_RequestPlay_Params_Data();
  ~MediaPlayer_RequestPlay_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayer_RequestPlay_Params_Data) == 8,
              "Bad sizeof(MediaPlayer_RequestPlay_Params_Data)");
class  MediaPlayer_RequestPause_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t triggered_by_user : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<MediaPlayer_RequestPause_Params_Data>;

  MediaPlayer_RequestPause_Params_Data();
  ~MediaPlayer_RequestPause_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayer_RequestPause_Params_Data) == 16,
              "Bad sizeof(MediaPlayer_RequestPause_Params_Data)");
class  MediaPlayer_RequestSeekForward_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> seek_time;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayer_RequestSeekForward_Params_Data>;

  MediaPlayer_RequestSeekForward_Params_Data();
  ~MediaPlayer_RequestSeekForward_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayer_RequestSeekForward_Params_Data) == 16,
              "Bad sizeof(MediaPlayer_RequestSeekForward_Params_Data)");
class  MediaPlayer_RequestSeekBackward_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> seek_time;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayer_RequestSeekBackward_Params_Data>;

  MediaPlayer_RequestSeekBackward_Params_Data();
  ~MediaPlayer_RequestSeekBackward_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayer_RequestSeekBackward_Params_Data) == 16,
              "Bad sizeof(MediaPlayer_RequestSeekBackward_Params_Data)");
class  MediaPlayer_RequestSeekTo_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> seek_time;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayer_RequestSeekTo_Params_Data>;

  MediaPlayer_RequestSeekTo_Params_Data();
  ~MediaPlayer_RequestSeekTo_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayer_RequestSeekTo_Params_Data) == 16,
              "Bad sizeof(MediaPlayer_RequestSeekTo_Params_Data)");
class  MediaPlayer_RequestEnterPictureInPicture_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayer_RequestEnterPictureInPicture_Params_Data>;

  MediaPlayer_RequestEnterPictureInPicture_Params_Data();
  ~MediaPlayer_RequestEnterPictureInPicture_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayer_RequestEnterPictureInPicture_Params_Data) == 8,
              "Bad sizeof(MediaPlayer_RequestEnterPictureInPicture_Params_Data)");
class  MediaPlayer_RequestExitPictureInPicture_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayer_RequestExitPictureInPicture_Params_Data>;

  MediaPlayer_RequestExitPictureInPicture_Params_Data();
  ~MediaPlayer_RequestExitPictureInPicture_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayer_RequestExitPictureInPicture_Params_Data) == 8,
              "Bad sizeof(MediaPlayer_RequestExitPictureInPicture_Params_Data)");
class  MediaPlayer_RequestMute_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t mute : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<MediaPlayer_RequestMute_Params_Data>;

  MediaPlayer_RequestMute_Params_Data();
  ~MediaPlayer_RequestMute_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayer_RequestMute_Params_Data) == 16,
              "Bad sizeof(MediaPlayer_RequestMute_Params_Data)");
class  MediaPlayer_SetVolumeMultiplier_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double multiplier;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayer_SetVolumeMultiplier_Params_Data>;

  MediaPlayer_SetVolumeMultiplier_Params_Data();
  ~MediaPlayer_SetVolumeMultiplier_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayer_SetVolumeMultiplier_Params_Data) == 16,
              "Bad sizeof(MediaPlayer_SetVolumeMultiplier_Params_Data)");
class  MediaPlayer_SetPersistentState_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t persistent : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<MediaPlayer_SetPersistentState_Params_Data>;

  MediaPlayer_SetPersistentState_Params_Data();
  ~MediaPlayer_SetPersistentState_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayer_SetPersistentState_Params_Data) == 16,
              "Bad sizeof(MediaPlayer_SetPersistentState_Params_Data)");
class  MediaPlayer_SetPowerExperimentState_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t enabled : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<MediaPlayer_SetPowerExperimentState_Params_Data>;

  MediaPlayer_SetPowerExperimentState_Params_Data();
  ~MediaPlayer_SetPowerExperimentState_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayer_SetPowerExperimentState_Params_Data) == 16,
              "Bad sizeof(MediaPlayer_SetPowerExperimentState_Params_Data)");
class  MediaPlayer_SetAudioSinkId_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> sink_id;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayer_SetAudioSinkId_Params_Data>;

  MediaPlayer_SetAudioSinkId_Params_Data();
  ~MediaPlayer_SetAudioSinkId_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayer_SetAudioSinkId_Params_Data) == 16,
              "Bad sizeof(MediaPlayer_SetAudioSinkId_Params_Data)");
class  MediaPlayer_SuspendForFrameClosed_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayer_SuspendForFrameClosed_Params_Data>;

  MediaPlayer_SuspendForFrameClosed_Params_Data();
  ~MediaPlayer_SuspendForFrameClosed_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayer_SuspendForFrameClosed_Params_Data) == 8,
              "Bad sizeof(MediaPlayer_SuspendForFrameClosed_Params_Data)");
class  MediaPlayerObserverClient_GetHasPlayedBefore_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerObserverClient_GetHasPlayedBefore_Params_Data>;

  MediaPlayerObserverClient_GetHasPlayedBefore_Params_Data();
  ~MediaPlayerObserverClient_GetHasPlayedBefore_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerObserverClient_GetHasPlayedBefore_Params_Data) == 8,
              "Bad sizeof(MediaPlayerObserverClient_GetHasPlayedBefore_Params_Data)");
class  MediaPlayerObserverClient_GetHasPlayedBefore_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t has_played_before : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerObserverClient_GetHasPlayedBefore_ResponseParams_Data>;

  MediaPlayerObserverClient_GetHasPlayedBefore_ResponseParams_Data();
  ~MediaPlayerObserverClient_GetHasPlayedBefore_ResponseParams_Data() = delete;
};
static_assert(sizeof(MediaPlayerObserverClient_GetHasPlayedBefore_ResponseParams_Data) == 16,
              "Bad sizeof(MediaPlayerObserverClient_GetHasPlayedBefore_ResponseParams_Data)");
class  MediaPlayerObserver_OnMediaPlaying_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerObserver_OnMediaPlaying_Params_Data>;

  MediaPlayerObserver_OnMediaPlaying_Params_Data();
  ~MediaPlayerObserver_OnMediaPlaying_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerObserver_OnMediaPlaying_Params_Data) == 8,
              "Bad sizeof(MediaPlayerObserver_OnMediaPlaying_Params_Data)");
class  MediaPlayerObserver_OnMediaPaused_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t stream_ended : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerObserver_OnMediaPaused_Params_Data>;

  MediaPlayerObserver_OnMediaPaused_Params_Data();
  ~MediaPlayerObserver_OnMediaPaused_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerObserver_OnMediaPaused_Params_Data) == 16,
              "Bad sizeof(MediaPlayerObserver_OnMediaPaused_Params_Data)");
class  MediaPlayerObserver_OnMutedStatusChanged_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t muted : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerObserver_OnMutedStatusChanged_Params_Data>;

  MediaPlayerObserver_OnMutedStatusChanged_Params_Data();
  ~MediaPlayerObserver_OnMutedStatusChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerObserver_OnMutedStatusChanged_Params_Data) == 16,
              "Bad sizeof(MediaPlayerObserver_OnMutedStatusChanged_Params_Data)");
class  MediaPlayerObserver_OnMediaMetadataChanged_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t has_audio : 1;
  uint8_t has_video : 1;
  uint8_t pad1_[3];
  int32_t content_type;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerObserver_OnMediaMetadataChanged_Params_Data>;

  MediaPlayerObserver_OnMediaMetadataChanged_Params_Data();
  ~MediaPlayerObserver_OnMediaMetadataChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerObserver_OnMediaMetadataChanged_Params_Data) == 16,
              "Bad sizeof(MediaPlayerObserver_OnMediaMetadataChanged_Params_Data)");
class  MediaPlayerObserver_OnMediaPositionStateChanged_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::media_session::mojom::internal::MediaPosition_Data> media_position;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerObserver_OnMediaPositionStateChanged_Params_Data>;

  MediaPlayerObserver_OnMediaPositionStateChanged_Params_Data();
  ~MediaPlayerObserver_OnMediaPositionStateChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerObserver_OnMediaPositionStateChanged_Params_Data) == 16,
              "Bad sizeof(MediaPlayerObserver_OnMediaPositionStateChanged_Params_Data)");
class  MediaPlayerObserver_OnMediaEffectivelyFullscreenChanged_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerObserver_OnMediaEffectivelyFullscreenChanged_Params_Data>;

  MediaPlayerObserver_OnMediaEffectivelyFullscreenChanged_Params_Data();
  ~MediaPlayerObserver_OnMediaEffectivelyFullscreenChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerObserver_OnMediaEffectivelyFullscreenChanged_Params_Data) == 16,
              "Bad sizeof(MediaPlayerObserver_OnMediaEffectivelyFullscreenChanged_Params_Data)");
class  MediaPlayerObserver_OnMediaSizeChanged_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> size;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerObserver_OnMediaSizeChanged_Params_Data>;

  MediaPlayerObserver_OnMediaSizeChanged_Params_Data();
  ~MediaPlayerObserver_OnMediaSizeChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerObserver_OnMediaSizeChanged_Params_Data) == 16,
              "Bad sizeof(MediaPlayerObserver_OnMediaSizeChanged_Params_Data)");
class  MediaPlayerObserver_OnPictureInPictureAvailabilityChanged_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t available : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerObserver_OnPictureInPictureAvailabilityChanged_Params_Data>;

  MediaPlayerObserver_OnPictureInPictureAvailabilityChanged_Params_Data();
  ~MediaPlayerObserver_OnPictureInPictureAvailabilityChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerObserver_OnPictureInPictureAvailabilityChanged_Params_Data) == 16,
              "Bad sizeof(MediaPlayerObserver_OnPictureInPictureAvailabilityChanged_Params_Data)");
class  MediaPlayerObserver_OnAudioOutputSinkChanged_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> hashed_device_id;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerObserver_OnAudioOutputSinkChanged_Params_Data>;

  MediaPlayerObserver_OnAudioOutputSinkChanged_Params_Data();
  ~MediaPlayerObserver_OnAudioOutputSinkChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerObserver_OnAudioOutputSinkChanged_Params_Data) == 16,
              "Bad sizeof(MediaPlayerObserver_OnAudioOutputSinkChanged_Params_Data)");
class  MediaPlayerObserver_OnUseAudioServiceChanged_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t uses_audio_service : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerObserver_OnUseAudioServiceChanged_Params_Data>;

  MediaPlayerObserver_OnUseAudioServiceChanged_Params_Data();
  ~MediaPlayerObserver_OnUseAudioServiceChanged_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerObserver_OnUseAudioServiceChanged_Params_Data) == 16,
              "Bad sizeof(MediaPlayerObserver_OnUseAudioServiceChanged_Params_Data)");
class  MediaPlayerObserver_OnAudioOutputSinkChangingDisabled_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerObserver_OnAudioOutputSinkChangingDisabled_Params_Data>;

  MediaPlayerObserver_OnAudioOutputSinkChangingDisabled_Params_Data();
  ~MediaPlayerObserver_OnAudioOutputSinkChangingDisabled_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerObserver_OnAudioOutputSinkChangingDisabled_Params_Data) == 8,
              "Bad sizeof(MediaPlayerObserver_OnAudioOutputSinkChangingDisabled_Params_Data)");
class  MediaPlayerHost_OnMediaPlayerAdded_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::AssociatedInterface_Data player_remote;
  mojo::internal::AssociatedEndpointHandle_Data observer;
  int32_t player_id;

 private:
  friend class mojo::internal::MessageFragment<MediaPlayerHost_OnMediaPlayerAdded_Params_Data>;

  MediaPlayerHost_OnMediaPlayerAdded_Params_Data();
  ~MediaPlayerHost_OnMediaPlayerAdded_Params_Data() = delete;
};
static_assert(sizeof(MediaPlayerHost_OnMediaPlayerAdded_Params_Data) == 24,
              "Bad sizeof(MediaPlayerHost_OnMediaPlayerAdded_Params_Data)");

}  // namespace internal


class MediaPlayer_RequestPlay_ParamsDataView {
 public:
  MediaPlayer_RequestPlay_ParamsDataView() = default;

  MediaPlayer_RequestPlay_ParamsDataView(
      internal::MediaPlayer_RequestPlay_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaPlayer_RequestPlay_Params_Data* data_ = nullptr;
};



class MediaPlayer_RequestPause_ParamsDataView {
 public:
  MediaPlayer_RequestPause_ParamsDataView() = default;

  MediaPlayer_RequestPause_ParamsDataView(
      internal::MediaPlayer_RequestPause_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool triggered_by_user() const {
    return data_->triggered_by_user;
  }
 private:
  internal::MediaPlayer_RequestPause_Params_Data* data_ = nullptr;
};



class MediaPlayer_RequestSeekForward_ParamsDataView {
 public:
  MediaPlayer_RequestSeekForward_ParamsDataView() = default;

  MediaPlayer_RequestSeekForward_ParamsDataView(
      internal::MediaPlayer_RequestSeekForward_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetSeekTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSeekTime(UserType* output) {
    
    auto* pointer = data_->seek_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, message_);
  }
 private:
  internal::MediaPlayer_RequestSeekForward_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class MediaPlayer_RequestSeekBackward_ParamsDataView {
 public:
  MediaPlayer_RequestSeekBackward_ParamsDataView() = default;

  MediaPlayer_RequestSeekBackward_ParamsDataView(
      internal::MediaPlayer_RequestSeekBackward_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetSeekTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSeekTime(UserType* output) {
    
    auto* pointer = data_->seek_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, message_);
  }
 private:
  internal::MediaPlayer_RequestSeekBackward_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class MediaPlayer_RequestSeekTo_ParamsDataView {
 public:
  MediaPlayer_RequestSeekTo_ParamsDataView() = default;

  MediaPlayer_RequestSeekTo_ParamsDataView(
      internal::MediaPlayer_RequestSeekTo_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetSeekTimeDataView(
      ::mojo_base::mojom::TimeDeltaDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSeekTime(UserType* output) {
    
    auto* pointer = data_->seek_time.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::TimeDeltaDataView>(
        pointer, output, message_);
  }
 private:
  internal::MediaPlayer_RequestSeekTo_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class MediaPlayer_RequestEnterPictureInPicture_ParamsDataView {
 public:
  MediaPlayer_RequestEnterPictureInPicture_ParamsDataView() = default;

  MediaPlayer_RequestEnterPictureInPicture_ParamsDataView(
      internal::MediaPlayer_RequestEnterPictureInPicture_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaPlayer_RequestEnterPictureInPicture_Params_Data* data_ = nullptr;
};



class MediaPlayer_RequestExitPictureInPicture_ParamsDataView {
 public:
  MediaPlayer_RequestExitPictureInPicture_ParamsDataView() = default;

  MediaPlayer_RequestExitPictureInPicture_ParamsDataView(
      internal::MediaPlayer_RequestExitPictureInPicture_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaPlayer_RequestExitPictureInPicture_Params_Data* data_ = nullptr;
};



class MediaPlayer_RequestMute_ParamsDataView {
 public:
  MediaPlayer_RequestMute_ParamsDataView() = default;

  MediaPlayer_RequestMute_ParamsDataView(
      internal::MediaPlayer_RequestMute_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool mute() const {
    return data_->mute;
  }
 private:
  internal::MediaPlayer_RequestMute_Params_Data* data_ = nullptr;
};



class MediaPlayer_SetVolumeMultiplier_ParamsDataView {
 public:
  MediaPlayer_SetVolumeMultiplier_ParamsDataView() = default;

  MediaPlayer_SetVolumeMultiplier_ParamsDataView(
      internal::MediaPlayer_SetVolumeMultiplier_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  double multiplier() const {
    return data_->multiplier;
  }
 private:
  internal::MediaPlayer_SetVolumeMultiplier_Params_Data* data_ = nullptr;
};



class MediaPlayer_SetPersistentState_ParamsDataView {
 public:
  MediaPlayer_SetPersistentState_ParamsDataView() = default;

  MediaPlayer_SetPersistentState_ParamsDataView(
      internal::MediaPlayer_SetPersistentState_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool persistent() const {
    return data_->persistent;
  }
 private:
  internal::MediaPlayer_SetPersistentState_Params_Data* data_ = nullptr;
};



class MediaPlayer_SetPowerExperimentState_ParamsDataView {
 public:
  MediaPlayer_SetPowerExperimentState_ParamsDataView() = default;

  MediaPlayer_SetPowerExperimentState_ParamsDataView(
      internal::MediaPlayer_SetPowerExperimentState_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool enabled() const {
    return data_->enabled;
  }
 private:
  internal::MediaPlayer_SetPowerExperimentState_Params_Data* data_ = nullptr;
};



class MediaPlayer_SetAudioSinkId_ParamsDataView {
 public:
  MediaPlayer_SetAudioSinkId_ParamsDataView() = default;

  MediaPlayer_SetAudioSinkId_ParamsDataView(
      internal::MediaPlayer_SetAudioSinkId_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetSinkIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSinkId(UserType* output) {
    
    auto* pointer = data_->sink_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::MediaPlayer_SetAudioSinkId_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class MediaPlayer_SuspendForFrameClosed_ParamsDataView {
 public:
  MediaPlayer_SuspendForFrameClosed_ParamsDataView() = default;

  MediaPlayer_SuspendForFrameClosed_ParamsDataView(
      internal::MediaPlayer_SuspendForFrameClosed_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaPlayer_SuspendForFrameClosed_Params_Data* data_ = nullptr;
};



class MediaPlayerObserverClient_GetHasPlayedBefore_ParamsDataView {
 public:
  MediaPlayerObserverClient_GetHasPlayedBefore_ParamsDataView() = default;

  MediaPlayerObserverClient_GetHasPlayedBefore_ParamsDataView(
      internal::MediaPlayerObserverClient_GetHasPlayedBefore_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaPlayerObserverClient_GetHasPlayedBefore_Params_Data* data_ = nullptr;
};



class MediaPlayerObserverClient_GetHasPlayedBefore_ResponseParamsDataView {
 public:
  MediaPlayerObserverClient_GetHasPlayedBefore_ResponseParamsDataView() = default;

  MediaPlayerObserverClient_GetHasPlayedBefore_ResponseParamsDataView(
      internal::MediaPlayerObserverClient_GetHasPlayedBefore_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool has_played_before() const {
    return data_->has_played_before;
  }
 private:
  internal::MediaPlayerObserverClient_GetHasPlayedBefore_ResponseParams_Data* data_ = nullptr;
};



class MediaPlayerObserver_OnMediaPlaying_ParamsDataView {
 public:
  MediaPlayerObserver_OnMediaPlaying_ParamsDataView() = default;

  MediaPlayerObserver_OnMediaPlaying_ParamsDataView(
      internal::MediaPlayerObserver_OnMediaPlaying_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaPlayerObserver_OnMediaPlaying_Params_Data* data_ = nullptr;
};



class MediaPlayerObserver_OnMediaPaused_ParamsDataView {
 public:
  MediaPlayerObserver_OnMediaPaused_ParamsDataView() = default;

  MediaPlayerObserver_OnMediaPaused_ParamsDataView(
      internal::MediaPlayerObserver_OnMediaPaused_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool stream_ended() const {
    return data_->stream_ended;
  }
 private:
  internal::MediaPlayerObserver_OnMediaPaused_Params_Data* data_ = nullptr;
};



class MediaPlayerObserver_OnMutedStatusChanged_ParamsDataView {
 public:
  MediaPlayerObserver_OnMutedStatusChanged_ParamsDataView() = default;

  MediaPlayerObserver_OnMutedStatusChanged_ParamsDataView(
      internal::MediaPlayerObserver_OnMutedStatusChanged_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool muted() const {
    return data_->muted;
  }
 private:
  internal::MediaPlayerObserver_OnMutedStatusChanged_Params_Data* data_ = nullptr;
};



class MediaPlayerObserver_OnMediaMetadataChanged_ParamsDataView {
 public:
  MediaPlayerObserver_OnMediaMetadataChanged_ParamsDataView() = default;

  MediaPlayerObserver_OnMediaMetadataChanged_ParamsDataView(
      internal::MediaPlayerObserver_OnMediaMetadataChanged_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool has_audio() const {
    return data_->has_audio;
  }
  bool has_video() const {
    return data_->has_video;
  }
  template <typename UserType>
  [[nodiscard]] bool ReadContentType(UserType* output) const {
    auto data_value = data_->content_type;
    return mojo::internal::Deserialize<::media::mojom::MediaContentType>(
        data_value, output);
  }
  ::media::mojom::MediaContentType content_type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::media::mojom::MediaContentType>(data_->content_type));
  }
 private:
  internal::MediaPlayerObserver_OnMediaMetadataChanged_Params_Data* data_ = nullptr;
};



class MediaPlayerObserver_OnMediaPositionStateChanged_ParamsDataView {
 public:
  MediaPlayerObserver_OnMediaPositionStateChanged_ParamsDataView() = default;

  MediaPlayerObserver_OnMediaPositionStateChanged_ParamsDataView(
      internal::MediaPlayerObserver_OnMediaPositionStateChanged_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetMediaPositionDataView(
      ::media_session::mojom::MediaPositionDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMediaPosition(UserType* output) {
    
    auto* pointer = data_->media_position.Get();
    return mojo::internal::Deserialize<::media_session::mojom::MediaPositionDataView>(
        pointer, output, message_);
  }
 private:
  internal::MediaPlayerObserver_OnMediaPositionStateChanged_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class MediaPlayerObserver_OnMediaEffectivelyFullscreenChanged_ParamsDataView {
 public:
  MediaPlayerObserver_OnMediaEffectivelyFullscreenChanged_ParamsDataView() = default;

  MediaPlayerObserver_OnMediaEffectivelyFullscreenChanged_ParamsDataView(
      internal::MediaPlayerObserver_OnMediaEffectivelyFullscreenChanged_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadStatus(UserType* output) const {
    auto data_value = data_->status;
    return mojo::internal::Deserialize<::media::mojom::FullscreenVideoStatus>(
        data_value, output);
  }
  ::media::mojom::FullscreenVideoStatus status() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::media::mojom::FullscreenVideoStatus>(data_->status));
  }
 private:
  internal::MediaPlayerObserver_OnMediaEffectivelyFullscreenChanged_Params_Data* data_ = nullptr;
};



class MediaPlayerObserver_OnMediaSizeChanged_ParamsDataView {
 public:
  MediaPlayerObserver_OnMediaSizeChanged_ParamsDataView() = default;

  MediaPlayerObserver_OnMediaSizeChanged_ParamsDataView(
      internal::MediaPlayerObserver_OnMediaSizeChanged_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSize(UserType* output) {
    
    auto* pointer = data_->size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, message_);
  }
 private:
  internal::MediaPlayerObserver_OnMediaSizeChanged_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class MediaPlayerObserver_OnPictureInPictureAvailabilityChanged_ParamsDataView {
 public:
  MediaPlayerObserver_OnPictureInPictureAvailabilityChanged_ParamsDataView() = default;

  MediaPlayerObserver_OnPictureInPictureAvailabilityChanged_ParamsDataView(
      internal::MediaPlayerObserver_OnPictureInPictureAvailabilityChanged_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool available() const {
    return data_->available;
  }
 private:
  internal::MediaPlayerObserver_OnPictureInPictureAvailabilityChanged_Params_Data* data_ = nullptr;
};



class MediaPlayerObserver_OnAudioOutputSinkChanged_ParamsDataView {
 public:
  MediaPlayerObserver_OnAudioOutputSinkChanged_ParamsDataView() = default;

  MediaPlayerObserver_OnAudioOutputSinkChanged_ParamsDataView(
      internal::MediaPlayerObserver_OnAudioOutputSinkChanged_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetHashedDeviceIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadHashedDeviceId(UserType* output) {
    
    auto* pointer = data_->hashed_device_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::MediaPlayerObserver_OnAudioOutputSinkChanged_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class MediaPlayerObserver_OnUseAudioServiceChanged_ParamsDataView {
 public:
  MediaPlayerObserver_OnUseAudioServiceChanged_ParamsDataView() = default;

  MediaPlayerObserver_OnUseAudioServiceChanged_ParamsDataView(
      internal::MediaPlayerObserver_OnUseAudioServiceChanged_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool uses_audio_service() const {
    return data_->uses_audio_service;
  }
 private:
  internal::MediaPlayerObserver_OnUseAudioServiceChanged_Params_Data* data_ = nullptr;
};



class MediaPlayerObserver_OnAudioOutputSinkChangingDisabled_ParamsDataView {
 public:
  MediaPlayerObserver_OnAudioOutputSinkChangingDisabled_ParamsDataView() = default;

  MediaPlayerObserver_OnAudioOutputSinkChangingDisabled_ParamsDataView(
      internal::MediaPlayerObserver_OnAudioOutputSinkChangingDisabled_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MediaPlayerObserver_OnAudioOutputSinkChangingDisabled_Params_Data* data_ = nullptr;
};



class MediaPlayerHost_OnMediaPlayerAdded_ParamsDataView {
 public:
  MediaPlayerHost_OnMediaPlayerAdded_ParamsDataView() = default;

  MediaPlayerHost_OnMediaPlayerAdded_ParamsDataView(
      internal::MediaPlayerHost_OnMediaPlayerAdded_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakePlayerRemote() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::MediaPlayerAssociatedPtrInfoDataView>(
            &data_->player_remote, &result, message_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeObserver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<::media::mojom::MediaPlayerObserverAssociatedRequestDataView>(
            &data_->observer, &result, message_);
    DCHECK(ret);
    return result;
  }
  int32_t player_id() const {
    return data_->player_id;
  }
 private:
  internal::MediaPlayerHost_OnMediaPlayerAdded_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};






inline void MediaPlayer_RequestSeekForward_ParamsDataView::GetSeekTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->seek_time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, message_);
}


inline void MediaPlayer_RequestSeekBackward_ParamsDataView::GetSeekTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->seek_time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, message_);
}


inline void MediaPlayer_RequestSeekTo_ParamsDataView::GetSeekTimeDataView(
    ::mojo_base::mojom::TimeDeltaDataView* output) {
  auto pointer = data_->seek_time.Get();
  *output = ::mojo_base::mojom::TimeDeltaDataView(pointer, message_);
}














inline void MediaPlayer_SetAudioSinkId_ParamsDataView::GetSinkIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->sink_id.Get();
  *output = mojo::StringDataView(pointer, message_);
}
















inline void MediaPlayerObserver_OnMediaPositionStateChanged_ParamsDataView::GetMediaPositionDataView(
    ::media_session::mojom::MediaPositionDataView* output) {
  auto pointer = data_->media_position.Get();
  *output = ::media_session::mojom::MediaPositionDataView(pointer, message_);
}




inline void MediaPlayerObserver_OnMediaSizeChanged_ParamsDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, message_);
}




inline void MediaPlayerObserver_OnAudioOutputSinkChanged_ParamsDataView::GetHashedDeviceIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->hashed_device_id.Get();
  *output = mojo::StringDataView(pointer, message_);
}







}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // MEDIA_MOJO_MOJOM_MEDIA_PLAYER_MOJOM_PARAMS_DATA_H_