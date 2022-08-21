// third_party/blink/public/mojom/input/input_messages.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_H_

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

#include "third_party/blink/public/mojom/input/input_messages.mojom-shared.h"
#include "third_party/blink/public/mojom/input/input_messages.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class TextSuggestionBackendProxy;

template <typename ImplRefTraits>
class TextSuggestionBackendStub;

class TextSuggestionBackendRequestValidator;


class BLINK_COMMON_EXPORT TextSuggestionBackend
    : public TextSuggestionBackendInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = TextSuggestionBackendInterfaceBase;
  using Proxy_ = TextSuggestionBackendProxy;

  template <typename ImplRefTraits>
  using Stub_ = TextSuggestionBackendStub<ImplRefTraits>;

  using RequestValidator_ = TextSuggestionBackendRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kApplySpellCheckSuggestionMinVersion = 0,
    kApplyTextSuggestionMinVersion = 0,
    kDeleteActiveSuggestionRangeMinVersion = 0,
    kOnNewWordAddedToDictionaryMinVersion = 0,
    kOnSuggestionMenuClosedMinVersion = 0,
    kSuggestionMenuTimeoutCallbackMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct ApplySpellCheckSuggestion_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ApplyTextSuggestion_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DeleteActiveSuggestionRange_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnNewWordAddedToDictionary_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnSuggestionMenuClosed_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SuggestionMenuTimeoutCallback_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~TextSuggestionBackend() = default;

  
  virtual void ApplySpellCheckSuggestion(const std::string& suggestion) = 0;

  
  virtual void ApplyTextSuggestion(int32_t marker_tag, int32_t suggestion_index) = 0;

  
  virtual void DeleteActiveSuggestionRange() = 0;

  
  virtual void OnNewWordAddedToDictionary(const std::string& suggestion) = 0;

  
  virtual void OnSuggestionMenuClosed() = 0;

  
  virtual void SuggestionMenuTimeoutCallback(int32_t max_number_of_suggestions) = 0;
};



class BLINK_COMMON_EXPORT TextSuggestionBackendProxy
    : public TextSuggestionBackend {
 public:
  using InterfaceType = TextSuggestionBackend;

  explicit TextSuggestionBackendProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void ApplySpellCheckSuggestion(const std::string& suggestion) final;
  
  void ApplyTextSuggestion(int32_t marker_tag, int32_t suggestion_index) final;
  
  void DeleteActiveSuggestionRange() final;
  
  void OnNewWordAddedToDictionary(const std::string& suggestion) final;
  
  void OnSuggestionMenuClosed() final;
  
  void SuggestionMenuTimeoutCallback(int32_t max_number_of_suggestions) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT TextSuggestionBackendStubDispatch {
 public:
  static bool Accept(TextSuggestionBackend* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TextSuggestionBackend* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TextSuggestionBackend>>
class TextSuggestionBackendStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TextSuggestionBackendStub() = default;
  ~TextSuggestionBackendStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextSuggestionBackendStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TextSuggestionBackendStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT TextSuggestionBackendRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace blink

namespace mojo {

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INPUT_INPUT_MESSAGES_MOJOM_H_