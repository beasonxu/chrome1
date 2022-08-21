// services/network/public/mojom/p2p_trusted.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_H_

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

#include "services/network/public/mojom/p2p_trusted.mojom-shared.h"
#include "services/network/public/mojom/p2p_trusted.mojom-forward.h"
#include "services/network/public/mojom/p2p.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace network {
namespace mojom {

class P2PTrustedSocketManagerClientProxy;

template <typename ImplRefTraits>
class P2PTrustedSocketManagerClientStub;

class P2PTrustedSocketManagerClientRequestValidator;


class  P2PTrustedSocketManagerClient
    : public P2PTrustedSocketManagerClientInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = P2PTrustedSocketManagerClientInterfaceBase;
  using Proxy_ = P2PTrustedSocketManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = P2PTrustedSocketManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = P2PTrustedSocketManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kInvalidSocketPortRangeRequestedMinVersion = 0,
    kDumpPacketMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct InvalidSocketPortRangeRequested_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DumpPacket_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~P2PTrustedSocketManagerClient() = default;

  
  virtual void InvalidSocketPortRangeRequested() = 0;

  
  virtual void DumpPacket(const std::vector<uint8_t>& packet_header, uint64_t packet_length, bool incoming) = 0;
};

class P2PTrustedSocketManagerProxy;

template <typename ImplRefTraits>
class P2PTrustedSocketManagerStub;

class P2PTrustedSocketManagerRequestValidator;


class  P2PTrustedSocketManager
    : public P2PTrustedSocketManagerInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = P2PTrustedSocketManagerInterfaceBase;
  using Proxy_ = P2PTrustedSocketManagerProxy;

  template <typename ImplRefTraits>
  using Stub_ = P2PTrustedSocketManagerStub<ImplRefTraits>;

  using RequestValidator_ = P2PTrustedSocketManagerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kStartRtpDumpMinVersion = 0,
    kStopRtpDumpMinVersion = 0,
    kPauseNetworkChangeNotificationsMinVersion = 0,
    kResumeNetworkChangeNotificationsMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct StartRtpDump_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct StopRtpDump_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct PauseNetworkChangeNotifications_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ResumeNetworkChangeNotifications_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~P2PTrustedSocketManager() = default;

  
  virtual void StartRtpDump(bool incoming, bool outgoing) = 0;

  
  virtual void StopRtpDump(bool incoming, bool outgoing) = 0;

  
  virtual void PauseNetworkChangeNotifications() = 0;

  
  virtual void ResumeNetworkChangeNotifications() = 0;
};



class  P2PTrustedSocketManagerClientProxy
    : public P2PTrustedSocketManagerClient {
 public:
  using InterfaceType = P2PTrustedSocketManagerClient;

  explicit P2PTrustedSocketManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void InvalidSocketPortRangeRequested() final;
  
  void DumpPacket(const std::vector<uint8_t>& packet_header, uint64_t packet_length, bool incoming) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  P2PTrustedSocketManagerProxy
    : public P2PTrustedSocketManager {
 public:
  using InterfaceType = P2PTrustedSocketManager;

  explicit P2PTrustedSocketManagerProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void StartRtpDump(bool incoming, bool outgoing) final;
  
  void StopRtpDump(bool incoming, bool outgoing) final;
  
  void PauseNetworkChangeNotifications() final;
  
  void ResumeNetworkChangeNotifications() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  P2PTrustedSocketManagerClientStubDispatch {
 public:
  static bool Accept(P2PTrustedSocketManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      P2PTrustedSocketManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<P2PTrustedSocketManagerClient>>
class P2PTrustedSocketManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  P2PTrustedSocketManagerClientStub() = default;
  ~P2PTrustedSocketManagerClientStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return P2PTrustedSocketManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return P2PTrustedSocketManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  P2PTrustedSocketManagerStubDispatch {
 public:
  static bool Accept(P2PTrustedSocketManager* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      P2PTrustedSocketManager* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<P2PTrustedSocketManager>>
class P2PTrustedSocketManagerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  P2PTrustedSocketManagerStub() = default;
  ~P2PTrustedSocketManagerStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return P2PTrustedSocketManagerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return P2PTrustedSocketManagerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  P2PTrustedSocketManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  P2PTrustedSocketManagerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace network

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_P2P_TRUSTED_MOJOM_H_