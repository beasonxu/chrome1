// third_party/blink/public/mojom/speech/speech_synthesis.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_SYNTHESIS_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_SYNTHESIS_MOJOM_FORWARD_H_



#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"
#include "third_party/blink/public/common/common_export.h"






namespace blink {
namespace mojom {
class SpeechSynthesisUtteranceDataView;

class SpeechSynthesisVoiceDataView;


constexpr double kSpeechSynthesisDefaultRate = 1.0;

constexpr double kSpeechSynthesisDefaultPitch = 1.0;

constexpr double kSpeechSynthesisDefaultVolume = 1.0;

constexpr double kSpeechSynthesisDoublePrefNotSet = -1.0;
class SpeechSynthesisUtterance;
using SpeechSynthesisUtterancePtr = mojo::StructPtr<SpeechSynthesisUtterance>;

class SpeechSynthesisVoice;
using SpeechSynthesisVoicePtr = mojo::StructPtr<SpeechSynthesisVoice>;

class SpeechSynthesisVoiceListObserver;

class SpeechSynthesisClient;

class SpeechSynthesis;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_SYNTHESIS_MOJOM_FORWARD_H_