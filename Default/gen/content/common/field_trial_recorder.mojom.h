// content/common/field_trial_recorder.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_FIELD_TRIAL_RECORDER_MOJOM_H_
#define CONTENT_COMMON_FIELD_TRIAL_RECORDER_MOJOM_H_

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

#include "content/common/field_trial_recorder.mojom-shared.h"
#include "content/common/field_trial_recorder.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "content/common/content_export.h"




namespace content {
namespace mojom {

class FieldTrialRecorderProxy;

template <typename ImplRefTraits>
class FieldTrialRecorderStub;

class FieldTrialRecorderRequestValidator;


class CONTENT_EXPORT FieldTrialRecorder
    : public FieldTrialRecorderInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = FieldTrialRecorderInterfaceBase;
  using Proxy_ = FieldTrialRecorderProxy;

  template <typename ImplRefTraits>
  using Stub_ = FieldTrialRecorderStub<ImplRefTraits>;

  using RequestValidator_ = FieldTrialRecorderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kFieldTrialActivatedMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct FieldTrialActivated_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~FieldTrialRecorder() = default;

  
  virtual void FieldTrialActivated(const std::string& trial_name) = 0;
};



class CONTENT_EXPORT FieldTrialRecorderProxy
    : public FieldTrialRecorder {
 public:
  using InterfaceType = FieldTrialRecorder;

  explicit FieldTrialRecorderProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void FieldTrialActivated(const std::string& trial_name) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class CONTENT_EXPORT FieldTrialRecorderStubDispatch {
 public:
  static bool Accept(FieldTrialRecorder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FieldTrialRecorder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FieldTrialRecorder>>
class FieldTrialRecorderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FieldTrialRecorderStub() = default;
  ~FieldTrialRecorderStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FieldTrialRecorderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FieldTrialRecorderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class CONTENT_EXPORT FieldTrialRecorderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace content

namespace mojo {

}  // namespace mojo

#endif  // CONTENT_COMMON_FIELD_TRIAL_RECORDER_MOJOM_H_