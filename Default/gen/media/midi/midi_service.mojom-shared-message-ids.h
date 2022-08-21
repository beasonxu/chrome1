// media/midi/midi_service.mojom-shared-message-ids.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MIDI_MIDI_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_
#define MEDIA_MIDI_MIDI_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_

#include <stdint.h>
namespace midi {
namespace mojom {

namespace internal {


constexpr uint32_t kMidiSessionClient_AddInputPort_Name = 0;
constexpr uint32_t kMidiSessionClient_AddOutputPort_Name = 1;
constexpr uint32_t kMidiSessionClient_SetInputPortState_Name = 2;
constexpr uint32_t kMidiSessionClient_SetOutputPortState_Name = 3;
constexpr uint32_t kMidiSessionClient_SessionStarted_Name = 4;
constexpr uint32_t kMidiSessionClient_AcknowledgeSentData_Name = 5;
constexpr uint32_t kMidiSessionClient_DataReceived_Name = 6;
constexpr uint32_t kMidiSessionProvider_StartSession_Name = 0;
constexpr uint32_t kMidiSession_SendData_Name = 0;

}  // namespace internal
}  // namespace mojom
}  // namespace midi

#endif  // MEDIA_MIDI_MIDI_SERVICE_MOJOM_SHARED_MESSAGE_IDS_H_