// components/autofill_assistant/content/common/autofill_assistant_agent.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_CONTENT_COMMON_AUTOFILL_ASSISTANT_AGENT_MOJOM_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_CONTENT_COMMON_AUTOFILL_ASSISTANT_AGENT_MOJOM_H_

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

#include "components/autofill_assistant/content/common/autofill_assistant_agent.mojom-shared.h"
#include "components/autofill_assistant/content/common/autofill_assistant_agent.mojom-forward.h"
#include "components/autofill_assistant/content/common/autofill_assistant_types.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace autofill_assistant {
namespace mojom {

class AutofillAssistantAgentProxy;

template <typename ImplRefTraits>
class AutofillAssistantAgentStub;

class AutofillAssistantAgentRequestValidator;
class AutofillAssistantAgentResponseValidator;


class  AutofillAssistantAgent
    : public AutofillAssistantAgentInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = AutofillAssistantAgentInterfaceBase;
  using Proxy_ = AutofillAssistantAgentProxy;

  template <typename ImplRefTraits>
  using Stub_ = AutofillAssistantAgentStub<ImplRefTraits>;

  using RequestValidator_ = AutofillAssistantAgentRequestValidator;
  using ResponseValidator_ = AutofillAssistantAgentResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetSemanticNodesMinVersion = 0,
    kSetElementValueMinVersion = 0,
    kSetElementCheckedMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct GetSemanticNodes_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetElementValue_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetElementChecked_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~AutofillAssistantAgent() = default;


  using GetSemanticNodesCallback = base::OnceCallback<void(::autofill_assistant::mojom::NodeDataStatus, const std::vector<::autofill_assistant::NodeData>&)>;
  
  virtual void GetSemanticNodes(int32_t role, int32_t objective, bool ignore_objective, ::base::TimeDelta timeout, GetSemanticNodesCallback callback) = 0;


  using SetElementValueCallback = base::OnceCallback<void(bool)>;
  
  virtual void SetElementValue(int32_t backend_node_id, const ::std::u16string& value, bool send_events, SetElementValueCallback callback) = 0;


  using SetElementCheckedCallback = base::OnceCallback<void(bool)>;
  
  virtual void SetElementChecked(int32_t backend_node_id, bool checked, bool send_events, SetElementCheckedCallback callback) = 0;
};



class  AutofillAssistantAgentProxy
    : public AutofillAssistantAgent {
 public:
  using InterfaceType = AutofillAssistantAgent;

  explicit AutofillAssistantAgentProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void GetSemanticNodes(int32_t role, int32_t objective, bool ignore_objective, ::base::TimeDelta timeout, GetSemanticNodesCallback callback) final;
  
  void SetElementValue(int32_t backend_node_id, const ::std::u16string& value, bool send_events, SetElementValueCallback callback) final;
  
  void SetElementChecked(int32_t backend_node_id, bool checked, bool send_events, SetElementCheckedCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  AutofillAssistantAgentStubDispatch {
 public:
  static bool Accept(AutofillAssistantAgent* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AutofillAssistantAgent* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AutofillAssistantAgent>>
class AutofillAssistantAgentStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AutofillAssistantAgentStub() = default;
  ~AutofillAssistantAgentStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AutofillAssistantAgentStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AutofillAssistantAgentStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AutofillAssistantAgentRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AutofillAssistantAgentResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace autofill_assistant

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_CONTENT_COMMON_AUTOFILL_ASSISTANT_AGENT_MOJOM_H_