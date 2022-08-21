// services/media_session/public/mojom/audio_focus.mojom-shared-message-ids.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_SHARED_MESSAGE_IDS_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace media_session {
namespace mojom {

namespace internal {


constexpr uint32_t kAudioFocusObserver_OnFocusGained_Name = 0;
constexpr uint32_t kAudioFocusObserver_OnFocusLost_Name = 1;
constexpr uint32_t kAudioFocusObserver_OnRequestIdReleased_Name = 2;
constexpr uint32_t kAudioFocusRequestClient_RequestAudioFocus_Name = 0;
constexpr uint32_t kAudioFocusRequestClient_AbandonAudioFocus_Name = 1;
constexpr uint32_t kAudioFocusRequestClient_MediaSessionInfoChanged_Name = 2;
constexpr uint32_t kAudioFocusManager_RequestAudioFocus_Name = 0;
constexpr uint32_t kAudioFocusManager_RequestGroupedAudioFocus_Name = 4;
constexpr uint32_t kAudioFocusManager_GetFocusRequests_Name = 1;
constexpr uint32_t kAudioFocusManager_AddObserver_Name = 2;
constexpr uint32_t kAudioFocusManager_SetSource_Name = 6;
constexpr uint32_t kAudioFocusManager_SetEnforcementMode_Name = 5;
constexpr uint32_t kAudioFocusManager_AddSourceObserver_Name = 7;
constexpr uint32_t kAudioFocusManager_GetSourceFocusRequests_Name = 8;
constexpr uint32_t kAudioFocusManager_RequestIdReleased_Name = 9;
constexpr uint32_t kAudioFocusManagerDebug_GetDebugInfoForRequest_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_SHARED_MESSAGE_IDS_H_