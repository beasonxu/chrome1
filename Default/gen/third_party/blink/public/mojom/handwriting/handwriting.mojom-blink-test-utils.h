// third_party/blink/public/mojom/handwriting/handwriting.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_HANDWRITING_HANDWRITING_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_HANDWRITING_HANDWRITING_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/handwriting/handwriting.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace handwriting {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT HandwritingRecognizerInterceptorForTesting : public HandwritingRecognizer {
  virtual HandwritingRecognizer* GetForwardingInterface() = 0;
  void GetPrediction(WTF::Vector<HandwritingStrokePtr> strokes, HandwritingHintsPtr hints, GetPredictionCallback callback) override;
};
class PLATFORM_EXPORT HandwritingRecognizerAsyncWaiter {
 public:
  explicit HandwritingRecognizerAsyncWaiter(HandwritingRecognizer* proxy);

  HandwritingRecognizerAsyncWaiter(const HandwritingRecognizerAsyncWaiter&) = delete;
  HandwritingRecognizerAsyncWaiter& operator=(const HandwritingRecognizerAsyncWaiter&) = delete;

  ~HandwritingRecognizerAsyncWaiter();
  void GetPrediction(
      WTF::Vector<HandwritingStrokePtr> strokes, HandwritingHintsPtr hints, absl::optional<WTF::Vector<HandwritingPredictionPtr>>* out_prediction);

 private:
  HandwritingRecognizer* const proxy_;
};


class PLATFORM_EXPORT HandwritingRecognitionServiceInterceptorForTesting : public HandwritingRecognitionService {
  virtual HandwritingRecognitionService* GetForwardingInterface() = 0;
  void CreateHandwritingRecognizer(HandwritingModelConstraintPtr constraint, CreateHandwritingRecognizerCallback callback) override;
  void QueryHandwritingRecognizer(HandwritingModelConstraintPtr constraint, QueryHandwritingRecognizerCallback callback) override;
};
class PLATFORM_EXPORT HandwritingRecognitionServiceAsyncWaiter {
 public:
  explicit HandwritingRecognitionServiceAsyncWaiter(HandwritingRecognitionService* proxy);

  HandwritingRecognitionServiceAsyncWaiter(const HandwritingRecognitionServiceAsyncWaiter&) = delete;
  HandwritingRecognitionServiceAsyncWaiter& operator=(const HandwritingRecognitionServiceAsyncWaiter&) = delete;

  ~HandwritingRecognitionServiceAsyncWaiter();
  void CreateHandwritingRecognizer(
      HandwritingModelConstraintPtr constraint, CreateHandwritingRecognizerResult* out_result, ::mojo::PendingRemote<HandwritingRecognizer>* out_handwriting_recognizer);
  void QueryHandwritingRecognizer(
      HandwritingModelConstraintPtr constraint, QueryHandwritingRecognizerResultPtr* out_result);

 private:
  HandwritingRecognitionService* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace handwriting

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_HANDWRITING_HANDWRITING_MOJOM_BLINK_TEST_UTILS_H_