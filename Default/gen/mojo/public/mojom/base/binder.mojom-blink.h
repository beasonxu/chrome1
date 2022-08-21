// mojo/public/mojom/base/binder.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_BINDER_MOJOM_BLINK_H_
#define MOJO_PUBLIC_MOJOM_BASE_BINDER_MOJOM_BLINK_H_

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

#include "mojo/public/mojom/base/binder.mojom-shared.h"
#include "mojo/public/mojom/base/binder.mojom-blink-forward.h"
#include "mojo/public/mojom/base/generic_pending_receiver.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "base/component_export.h"




namespace mojo_base {
namespace mojom {
namespace blink {

class BinderProxy;

template <typename ImplRefTraits>
class BinderStub;

class BinderRequestValidator;


class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) Binder
    : public BinderInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = BinderInterfaceBase;
  using Proxy_ = BinderProxy;

  template <typename ImplRefTraits>
  using Stub_ = BinderStub<ImplRefTraits>;

  using RequestValidator_ = BinderRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kBindMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct Bind_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~Binder() = default;

  
  virtual void Bind(::mojo::GenericPendingReceiver receiver) = 0;
};



class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) BinderProxy
    : public Binder {
 public:
  using InterfaceType = Binder;

  explicit BinderProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void Bind(::mojo::GenericPendingReceiver receiver) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) BinderStubDispatch {
 public:
  static bool Accept(Binder* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Binder* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Binder>>
class BinderStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  BinderStub() = default;
  ~BinderStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BinderStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return BinderStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) BinderRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_BINDER_MOJOM_BLINK_H_