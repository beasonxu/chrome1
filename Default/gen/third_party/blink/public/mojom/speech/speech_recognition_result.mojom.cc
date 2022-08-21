// third_party/blink/public/mojom/speech/speech_recognition_result.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/debug/alias.h"
#include "base/hash/md5_constexpr.h"
#include "base/run_loop.h"
#include "base/strings/string_number_conversions.h"
#include "base/trace_event/trace_event.h"
#include "base/trace_event/typed_macros.h"
#include "mojo/public/cpp/bindings/lib/generated_code_util.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/send_message_helper.h"
#include "mojo/public/cpp/bindings/lib/proxy_to_responder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-params-data.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-import-headers.h"
#include "third_party/blink/public/mojom/speech/speech_recognition_result.mojom-test-utils.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_RESULT_MOJOM_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SPEECH_SPEECH_RECOGNITION_RESULT_MOJOM_JUMBO_H_
#endif



namespace blink {
namespace mojom {
SpeechRecognitionHypothesis::SpeechRecognitionHypothesis()
    : utterance(),
      confidence() {}

SpeechRecognitionHypothesis::SpeechRecognitionHypothesis(
    const ::std::u16string& utterance_in,
    double confidence_in)
    : utterance(std::move(utterance_in)),
      confidence(std::move(confidence_in)) {}

SpeechRecognitionHypothesis::~SpeechRecognitionHypothesis() = default;

void SpeechRecognitionHypothesis::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "utterance"), this->utterance,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::std::u16string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "confidence"), this->confidence,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type double>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool SpeechRecognitionHypothesis::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
SpeechRecognitionResult::SpeechRecognitionResult()
    : hypotheses(),
      is_provisional() {}

SpeechRecognitionResult::SpeechRecognitionResult(
    std::vector<SpeechRecognitionHypothesisPtr> hypotheses_in,
    bool is_provisional_in)
    : hypotheses(std::move(hypotheses_in)),
      is_provisional(std::move(is_provisional_in)) {}

SpeechRecognitionResult::~SpeechRecognitionResult() = default;

void SpeechRecognitionResult::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "hypotheses"), this->hypotheses,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type std::vector<SpeechRecognitionHypothesisPtr>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "is_provisional"), this->is_provisional,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool SpeechRecognitionResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::SpeechRecognitionHypothesis::DataView, ::blink::mojom::SpeechRecognitionHypothesisPtr>::Read(
    ::blink::mojom::SpeechRecognitionHypothesis::DataView input,
    ::blink::mojom::SpeechRecognitionHypothesisPtr* output) {
  bool success = true;
  ::blink::mojom::SpeechRecognitionHypothesisPtr result(::blink::mojom::SpeechRecognitionHypothesis::New());
  
      if (success && !input.ReadUtterance(&result->utterance))
        success = false;
      if (success)
        result->confidence = input.confidence();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::SpeechRecognitionResult::DataView, ::blink::mojom::SpeechRecognitionResultPtr>::Read(
    ::blink::mojom::SpeechRecognitionResult::DataView input,
    ::blink::mojom::SpeechRecognitionResultPtr* output) {
  bool success = true;
  ::blink::mojom::SpeechRecognitionResultPtr result(::blink::mojom::SpeechRecognitionResult::New());
  
      if (success && !input.ReadHypotheses(&result->hypotheses))
        success = false;
      if (success)
        result->is_provisional = input.is_provisional();
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {




}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif