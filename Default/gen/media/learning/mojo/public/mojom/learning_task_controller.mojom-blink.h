// media/learning/mojo/public/mojom/learning_task_controller.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_LEARNING_MOJO_PUBLIC_MOJOM_LEARNING_TASK_CONTROLLER_MOJOM_BLINK_H_
#define MEDIA_LEARNING_MOJO_PUBLIC_MOJOM_LEARNING_TASK_CONTROLLER_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "media/learning/mojo/public/mojom/learning_task_controller.mojom-shared.h"
#include "media/learning/mojo/public/mojom/learning_task_controller.mojom-blink-forward.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-blink.h"
#include "media/learning/mojo/public/mojom/learning_types.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/platform/web_common.h"




namespace media {
namespace learning {
namespace mojom {
namespace blink {

class LearningTaskControllerProxy;

template <typename ImplRefTraits>
class LearningTaskControllerStub;

class LearningTaskControllerRequestValidator;
class LearningTaskControllerResponseValidator;


class BLINK_PLATFORM_EXPORT LearningTaskController
    : public LearningTaskControllerInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = LearningTaskControllerInterfaceBase;
  using Proxy_ = LearningTaskControllerProxy;

  template <typename ImplRefTraits>
  using Stub_ = LearningTaskControllerStub<ImplRefTraits>;

  using RequestValidator_ = LearningTaskControllerRequestValidator;
  using ResponseValidator_ = LearningTaskControllerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kBeginObservationMinVersion = 0,
    kCompleteObservationMinVersion = 0,
    kCancelObservationMinVersion = 0,
    kUpdateDefaultTargetMinVersion = 0,
    kPredictDistributionMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct BeginObservation_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct CompleteObservation_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct CancelObservation_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct UpdateDefaultTarget_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct PredictDistribution_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~LearningTaskController() = default;

  
  virtual void BeginObservation(const ::base::UnguessableToken& id, const WTF::Vector<::media::learning::FeatureValue>& features, const absl::optional<::media::learning::TargetValue>& default_target) = 0;

  
  virtual void CompleteObservation(const ::base::UnguessableToken& id, const ::media::learning::ObservationCompletion& completion) = 0;

  
  virtual void CancelObservation(const ::base::UnguessableToken& id) = 0;

  
  virtual void UpdateDefaultTarget(const ::base::UnguessableToken& id, const absl::optional<::media::learning::TargetValue>& default_target) = 0;


  using PredictDistributionCallback = base::OnceCallback<void(const absl::optional<::media::learning::TargetHistogram>&)>;
  
  virtual void PredictDistribution(const WTF::Vector<::media::learning::FeatureValue>& features, PredictDistributionCallback callback) = 0;
};



class BLINK_PLATFORM_EXPORT LearningTaskControllerProxy
    : public LearningTaskController {
 public:
  using InterfaceType = LearningTaskController;

  explicit LearningTaskControllerProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void BeginObservation(const ::base::UnguessableToken& id, const WTF::Vector<::media::learning::FeatureValue>& features, const absl::optional<::media::learning::TargetValue>& default_target) final;
  
  void CompleteObservation(const ::base::UnguessableToken& id, const ::media::learning::ObservationCompletion& completion) final;
  
  void CancelObservation(const ::base::UnguessableToken& id) final;
  
  void UpdateDefaultTarget(const ::base::UnguessableToken& id, const absl::optional<::media::learning::TargetValue>& default_target) final;
  
  void PredictDistribution(const WTF::Vector<::media::learning::FeatureValue>& features, PredictDistributionCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_PLATFORM_EXPORT LearningTaskControllerStubDispatch {
 public:
  static bool Accept(LearningTaskController* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      LearningTaskController* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<LearningTaskController>>
class LearningTaskControllerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  LearningTaskControllerStub() = default;
  ~LearningTaskControllerStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LearningTaskControllerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return LearningTaskControllerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_PLATFORM_EXPORT LearningTaskControllerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_PLATFORM_EXPORT LearningTaskControllerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace learning
}  // namespace media

namespace mojo {

}  // namespace mojo

#endif  // MEDIA_LEARNING_MOJO_PUBLIC_MOJOM_LEARNING_TASK_CONTROLLER_MOJOM_BLINK_H_