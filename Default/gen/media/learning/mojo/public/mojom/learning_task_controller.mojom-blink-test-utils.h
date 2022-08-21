// media/learning/mojo/public/mojom/learning_task_controller.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_LEARNING_MOJO_PUBLIC_MOJOM_LEARNING_TASK_CONTROLLER_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_LEARNING_MOJO_PUBLIC_MOJOM_LEARNING_TASK_CONTROLLER_MOJOM_BLINK_TEST_UTILS_H_

#include "media/learning/mojo/public/mojom/learning_task_controller.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace learning {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT LearningTaskControllerInterceptorForTesting : public LearningTaskController {
  virtual LearningTaskController* GetForwardingInterface() = 0;
  void BeginObservation(const ::base::UnguessableToken& id, const WTF::Vector<::media::learning::FeatureValue>& features, const absl::optional<::media::learning::TargetValue>& default_target) override;
  void CompleteObservation(const ::base::UnguessableToken& id, const ::media::learning::ObservationCompletion& completion) override;
  void CancelObservation(const ::base::UnguessableToken& id) override;
  void UpdateDefaultTarget(const ::base::UnguessableToken& id, const absl::optional<::media::learning::TargetValue>& default_target) override;
  void PredictDistribution(const WTF::Vector<::media::learning::FeatureValue>& features, PredictDistributionCallback callback) override;
};
class BLINK_PLATFORM_EXPORT LearningTaskControllerAsyncWaiter {
 public:
  explicit LearningTaskControllerAsyncWaiter(LearningTaskController* proxy);

  LearningTaskControllerAsyncWaiter(const LearningTaskControllerAsyncWaiter&) = delete;
  LearningTaskControllerAsyncWaiter& operator=(const LearningTaskControllerAsyncWaiter&) = delete;

  ~LearningTaskControllerAsyncWaiter();
  void PredictDistribution(
      const WTF::Vector<::media::learning::FeatureValue>& features, absl::optional<::media::learning::TargetHistogram>* out_predicted);

 private:
  LearningTaskController* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace learning
}  // namespace media

#endif  // MEDIA_LEARNING_MOJO_PUBLIC_MOJOM_LEARNING_TASK_CONTROLLER_MOJOM_BLINK_TEST_UTILS_H_