// services/media_session/public/mojom/audio_focus.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_FORWARD_H_
#define SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace media_session {
namespace mojom {
class AudioFocusRequestStateDataView;


enum class EnforcementMode : int32_t;

enum class AudioFocusType : int32_t;
class AudioFocusRequestState;
using AudioFocusRequestStatePtr = mojo::StructPtr<AudioFocusRequestState>;

class AudioFocusObserver;

class AudioFocusRequestClient;

class AudioFocusManager;

class AudioFocusManagerDebug;




}  // namespace mojom
}  // namespace media_session

#endif  // SERVICES_MEDIA_SESSION_PUBLIC_MOJOM_AUDIO_FOCUS_MOJOM_FORWARD_H_