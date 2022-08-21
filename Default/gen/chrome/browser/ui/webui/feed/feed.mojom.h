// chrome/browser/ui/webui/feed/feed.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_FEED_FEED_MOJOM_H_
#define CHROME_BROWSER_UI_WEBUI_FEED_FEED_MOJOM_H_

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

#include "chrome/browser/ui/webui/feed/feed.mojom-shared.h"
#include "chrome/browser/ui/webui/feed/feed.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace feed {
namespace mojom {

class FeedSidePanelHandlerFactoryProxy;

template <typename ImplRefTraits>
class FeedSidePanelHandlerFactoryStub;

class FeedSidePanelHandlerFactoryRequestValidator;


class  FeedSidePanelHandlerFactory
    : public FeedSidePanelHandlerFactoryInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = FeedSidePanelHandlerFactoryInterfaceBase;
  using Proxy_ = FeedSidePanelHandlerFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = FeedSidePanelHandlerFactoryStub<ImplRefTraits>;

  using RequestValidator_ = FeedSidePanelHandlerFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreateFeedSidePanelHandlerMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct CreateFeedSidePanelHandler_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~FeedSidePanelHandlerFactory() = default;

  
  virtual void CreateFeedSidePanelHandler(::mojo::PendingReceiver<FeedSidePanelHandler> handler, ::mojo::PendingRemote<FeedSidePanel> side_panel) = 0;
};

class FeedSidePanelHandlerProxy;

template <typename ImplRefTraits>
class FeedSidePanelHandlerStub;

class FeedSidePanelHandlerRequestValidator;


class  FeedSidePanelHandler
    : public FeedSidePanelHandlerInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = FeedSidePanelHandlerInterfaceBase;
  using Proxy_ = FeedSidePanelHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = FeedSidePanelHandlerStub<ImplRefTraits>;

  using RequestValidator_ = FeedSidePanelHandlerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDoSomethingMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct DoSomething_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~FeedSidePanelHandler() = default;

  
  virtual void DoSomething() = 0;
};

class FeedSidePanelProxy;

template <typename ImplRefTraits>
class FeedSidePanelStub;

class FeedSidePanelRequestValidator;


class  FeedSidePanel
    : public FeedSidePanelInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = FeedSidePanelInterfaceBase;
  using Proxy_ = FeedSidePanelProxy;

  template <typename ImplRefTraits>
  using Stub_ = FeedSidePanelStub<ImplRefTraits>;

  using RequestValidator_ = FeedSidePanelRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnEventOccurredMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnEventOccurred_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~FeedSidePanel() = default;

  
  virtual void OnEventOccurred(const std::string& name) = 0;
};



class  FeedSidePanelHandlerFactoryProxy
    : public FeedSidePanelHandlerFactory {
 public:
  using InterfaceType = FeedSidePanelHandlerFactory;

  explicit FeedSidePanelHandlerFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void CreateFeedSidePanelHandler(::mojo::PendingReceiver<FeedSidePanelHandler> handler, ::mojo::PendingRemote<FeedSidePanel> side_panel) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  FeedSidePanelHandlerProxy
    : public FeedSidePanelHandler {
 public:
  using InterfaceType = FeedSidePanelHandler;

  explicit FeedSidePanelHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void DoSomething() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  FeedSidePanelProxy
    : public FeedSidePanel {
 public:
  using InterfaceType = FeedSidePanel;

  explicit FeedSidePanelProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnEventOccurred(const std::string& name) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  FeedSidePanelHandlerFactoryStubDispatch {
 public:
  static bool Accept(FeedSidePanelHandlerFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FeedSidePanelHandlerFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FeedSidePanelHandlerFactory>>
class FeedSidePanelHandlerFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FeedSidePanelHandlerFactoryStub() = default;
  ~FeedSidePanelHandlerFactoryStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FeedSidePanelHandlerFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FeedSidePanelHandlerFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FeedSidePanelHandlerStubDispatch {
 public:
  static bool Accept(FeedSidePanelHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FeedSidePanelHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FeedSidePanelHandler>>
class FeedSidePanelHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FeedSidePanelHandlerStub() = default;
  ~FeedSidePanelHandlerStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FeedSidePanelHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FeedSidePanelHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FeedSidePanelStubDispatch {
 public:
  static bool Accept(FeedSidePanel* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      FeedSidePanel* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<FeedSidePanel>>
class FeedSidePanelStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  FeedSidePanelStub() = default;
  ~FeedSidePanelStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FeedSidePanelStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return FeedSidePanelStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  FeedSidePanelHandlerFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FeedSidePanelHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  FeedSidePanelRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace feed

namespace mojo {

}  // namespace mojo

#endif  // CHROME_BROWSER_UI_WEBUI_FEED_FEED_MOJOM_H_