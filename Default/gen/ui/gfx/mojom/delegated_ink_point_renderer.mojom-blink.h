// ui/gfx/mojom/delegated_ink_point_renderer.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJOM_DELEGATED_INK_POINT_RENDERER_MOJOM_BLINK_H_
#define UI_GFX_MOJOM_DELEGATED_INK_POINT_RENDERER_MOJOM_BLINK_H_

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

#include "ui/gfx/mojom/delegated_ink_point_renderer.mojom-shared.h"
#include "ui/gfx/mojom/delegated_ink_point_renderer.mojom-blink-forward.h"
#include "ui/gfx/mojom/delegated_ink_point.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace gfx {
namespace mojom {
namespace blink {

class DelegatedInkPointRendererProxy;

template <typename ImplRefTraits>
class DelegatedInkPointRendererStub;

class DelegatedInkPointRendererRequestValidator;


class  DelegatedInkPointRenderer
    : public DelegatedInkPointRendererInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = DelegatedInkPointRendererInterfaceBase;
  using Proxy_ = DelegatedInkPointRendererProxy;

  template <typename ImplRefTraits>
  using Stub_ = DelegatedInkPointRendererStub<ImplRefTraits>;

  using RequestValidator_ = DelegatedInkPointRendererRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStoreDelegatedInkPointMinVersion = 0,
    kResetPredictionMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct StoreDelegatedInkPoint_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ResetPrediction_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~DelegatedInkPointRenderer() = default;

  
  virtual void StoreDelegatedInkPoint(::gfx::mojom::blink::DelegatedInkPointPtr point) = 0;

  
  virtual void ResetPrediction() = 0;
};



class  DelegatedInkPointRendererProxy
    : public DelegatedInkPointRenderer {
 public:
  using InterfaceType = DelegatedInkPointRenderer;

  explicit DelegatedInkPointRendererProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void StoreDelegatedInkPoint(::gfx::mojom::blink::DelegatedInkPointPtr point) final;
  
  void ResetPrediction() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DelegatedInkPointRendererStubDispatch {
 public:
  static bool Accept(DelegatedInkPointRenderer* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DelegatedInkPointRenderer* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DelegatedInkPointRenderer>>
class DelegatedInkPointRendererStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DelegatedInkPointRendererStub() = default;
  ~DelegatedInkPointRendererStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DelegatedInkPointRendererStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DelegatedInkPointRendererStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DelegatedInkPointRendererRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace gfx

namespace mojo {

}  // namespace mojo

#endif  // UI_GFX_MOJOM_DELEGATED_INK_POINT_RENDERER_MOJOM_BLINK_H_