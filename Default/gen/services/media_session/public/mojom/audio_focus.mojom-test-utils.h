// services/media_session/public/mojom/audio_focus.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_TEST_UTILS_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_TEST_UTILS_H_

#include "services/media_session/public/mojom/audio_focus.mojom.h"


namespace media_session {
namespace mojom {


class  AudioFocusObserverInterceptorForTesting : public AudioFocusObserver {
  virtual AudioFocusObserver* GetForwardingInterface() = 0;
  void OnFocusGained(AudioFocusRequestStatePtr state) override;
  void OnFocusLost(AudioFocusRequestStatePtr state) override;
  void OnRequestIdReleased(const ::base::UnguessableToken& request_id) override;
};
class  AudioFocusObserverAsyncWaiter {
 public:
  explicit AudioFocusObserverAsyncWaiter(AudioFocusObserver* proxy);

  AudioFocusObserverAsyncWaiter(const AudioFocusObserverAsyncWaiter&) = delete;
  AudioFocusObserverAsyncWaiter& operator=(const AudioFocusObserverAsyncWaiter&) = delete;

  ~AudioFocusObserverAsyncWaiter();

 private:
  AudioFocusObserver* const proxy_;
};


class  AudioFocusRequestClientInterceptorForTesting : public AudioFocusRequestClient {
  virtual AudioFocusRequestClient* GetForwardingInterface() = 0;
  void RequestAudioFocus(::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, RequestAudioFocusCallback callback) override;
  void AbandonAudioFocus() override;
  void MediaSessionInfoChanged(::media_session::mojom::MediaSessionInfoPtr session_info) override;
};
class  AudioFocusRequestClientAsyncWaiter {
 public:
  explicit AudioFocusRequestClientAsyncWaiter(AudioFocusRequestClient* proxy);

  AudioFocusRequestClientAsyncWaiter(const AudioFocusRequestClientAsyncWaiter&) = delete;
  AudioFocusRequestClientAsyncWaiter& operator=(const AudioFocusRequestClientAsyncWaiter&) = delete;

  ~AudioFocusRequestClientAsyncWaiter();
  void RequestAudioFocus(
      ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type);

 private:
  AudioFocusRequestClient* const proxy_;
};


class  AudioFocusManagerInterceptorForTesting : public AudioFocusManager {
  virtual AudioFocusManager* GetForwardingInterface() = 0;
  void RequestAudioFocus(::mojo::PendingReceiver<AudioFocusRequestClient> client, ::mojo::PendingRemote<::media_session::mojom::MediaSession> session, ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, RequestAudioFocusCallback callback) override;
  void RequestGroupedAudioFocus(const ::base::UnguessableToken& request_id, ::mojo::PendingReceiver<AudioFocusRequestClient> client, ::mojo::PendingRemote<::media_session::mojom::MediaSession> session, ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, const ::base::UnguessableToken& group_id, RequestGroupedAudioFocusCallback callback) override;
  void GetFocusRequests(GetFocusRequestsCallback callback) override;
  void AddObserver(::mojo::PendingRemote<AudioFocusObserver> observer) override;
  void SetSource(const ::base::UnguessableToken& identity, const std::string& name) override;
  void SetEnforcementMode(EnforcementMode mode) override;
  void AddSourceObserver(const ::base::UnguessableToken& source_id, ::mojo::PendingRemote<AudioFocusObserver> observer) override;
  void GetSourceFocusRequests(const ::base::UnguessableToken& source_id, GetSourceFocusRequestsCallback callback) override;
  void RequestIdReleased(const ::base::UnguessableToken& request_id) override;
};
class  AudioFocusManagerAsyncWaiter {
 public:
  explicit AudioFocusManagerAsyncWaiter(AudioFocusManager* proxy);

  AudioFocusManagerAsyncWaiter(const AudioFocusManagerAsyncWaiter&) = delete;
  AudioFocusManagerAsyncWaiter& operator=(const AudioFocusManagerAsyncWaiter&) = delete;

  ~AudioFocusManagerAsyncWaiter();
  void RequestAudioFocus(
      ::mojo::PendingReceiver<AudioFocusRequestClient> client, ::mojo::PendingRemote<::media_session::mojom::MediaSession> session, ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, ::base::UnguessableToken* out_request_id);
  void RequestGroupedAudioFocus(
      const ::base::UnguessableToken& request_id, ::mojo::PendingReceiver<AudioFocusRequestClient> client, ::mojo::PendingRemote<::media_session::mojom::MediaSession> session, ::media_session::mojom::MediaSessionInfoPtr session_info, AudioFocusType type, const ::base::UnguessableToken& group_id, bool* out_success);
  void GetFocusRequests(
      std::vector<AudioFocusRequestStatePtr>* out_requests);
  void GetSourceFocusRequests(
      const ::base::UnguessableToken& source_id, std::vector<AudioFocusRequestStatePtr>* out_requests);

 private:
  AudioFocusManager* const proxy_;
};


class  AudioFocusManagerDebugInterceptorForTesting : public AudioFocusManagerDebug {
  virtual AudioFocusManagerDebug* GetForwardingInterface() = 0;
  void GetDebugInfoForRequest(const ::base::UnguessableToken& request_id, GetDebugInfoForRequestCallback callback) override;
};
class  AudioFocusManagerDebugAsyncWaiter {
 public:
  explicit AudioFocusManagerDebugAsyncWaiter(AudioFocusManagerDebug* proxy);

  AudioFocusManagerDebugAsyncWaiter(const AudioFocusManagerDebugAsyncWaiter&) = delete;
  AudioFocusManagerDebugAsyncWaiter& operator=(const AudioFocusManagerDebugAsyncWaiter&) = delete;

  ~AudioFocusManagerDebugAsyncWaiter();
  void GetDebugInfoForRequest(
      const ::base::UnguessableToken& request_id, ::media_session::mojom::MediaSessionDebugInfoPtr* out_debug_info);

 private:
  AudioFocusManagerDebug* const proxy_;
};




}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_TEST_UTILS_H_