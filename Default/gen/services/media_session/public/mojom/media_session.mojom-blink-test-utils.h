// services/media_session/public/mojom/media_session.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_TEST_UTILS_H_

#include "services/media_session/public/mojom/media_session.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media_session {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT MediaSessionObserverInterceptorForTesting : public MediaSessionObserver {
  virtual MediaSessionObserver* GetForwardingInterface() = 0;
  void MediaSessionInfoChanged(MediaSessionInfoPtr info) override;
  void MediaSessionMetadataChanged(MediaMetadataPtr metadata) override;
  void MediaSessionActionsChanged(const WTF::Vector<MediaSessionAction>& action) override;
  void MediaSessionImagesChanged(WTF::HashMap<MediaSessionImageType, WTF::Vector<MediaImagePtr>> images) override;
  void MediaSessionPositionChanged(MediaPositionPtr position) override;
};
class BLINK_PLATFORM_EXPORT MediaSessionObserverAsyncWaiter {
 public:
  explicit MediaSessionObserverAsyncWaiter(MediaSessionObserver* proxy);

  MediaSessionObserverAsyncWaiter(const MediaSessionObserverAsyncWaiter&) = delete;
  MediaSessionObserverAsyncWaiter& operator=(const MediaSessionObserverAsyncWaiter&) = delete;

  ~MediaSessionObserverAsyncWaiter();

 private:
  MediaSessionObserver* const proxy_;
};


class BLINK_PLATFORM_EXPORT MediaSessionInterceptorForTesting : public MediaSession {
  virtual MediaSession* GetForwardingInterface() = 0;
  void GetMediaSessionInfo(GetMediaSessionInfoCallback callback) override;
  void GetDebugInfo(GetDebugInfoCallback callback) override;
  void StartDucking() override;
  void StopDucking() override;
  void Suspend(MediaSession::SuspendType suspend_type) override;
  void Resume(MediaSession::SuspendType suspend_type) override;
  void AddObserver(::mojo::PendingRemote<MediaSessionObserver> observer) override;
  void PreviousTrack() override;
  void NextTrack() override;
  void Seek(::base::TimeDelta seek_time) override;
  void Stop(MediaSession::SuspendType suspend_type) override;
  void SkipAd() override;
  void GetMediaImageBitmap(MediaImagePtr image, int32_t minimum_size_px, int32_t desired_size_px, GetMediaImageBitmapCallback callback) override;
  void SeekTo(::base::TimeDelta seek_time) override;
  void ScrubTo(::base::TimeDelta seek_time) override;
  void EnterPictureInPicture() override;
  void ExitPictureInPicture() override;
  void SetAudioSinkId(const WTF::String& id) override;
  void ToggleMicrophone() override;
  void ToggleCamera() override;
  void HangUp() override;
  void Raise() override;
  void SetMute(bool mute) override;
};
class BLINK_PLATFORM_EXPORT MediaSessionAsyncWaiter {
 public:
  explicit MediaSessionAsyncWaiter(MediaSession* proxy);

  MediaSessionAsyncWaiter(const MediaSessionAsyncWaiter&) = delete;
  MediaSessionAsyncWaiter& operator=(const MediaSessionAsyncWaiter&) = delete;

  ~MediaSessionAsyncWaiter();
  void GetMediaSessionInfo(
      MediaSessionInfoPtr* out_info);
  void GetDebugInfo(
      MediaSessionDebugInfoPtr* out_info);
  void GetMediaImageBitmap(
      MediaImagePtr image, int32_t minimum_size_px, int32_t desired_size_px, MediaImageBitmapPtr* out_image);

 private:
  MediaSession* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_MEDIA_SESSION_MOJOM_BLINK_TEST_UTILS_H_