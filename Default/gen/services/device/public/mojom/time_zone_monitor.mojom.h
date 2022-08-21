// services/device/public/mojom/time_zone_monitor.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_H_

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

#include "services/device/public/mojom/time_zone_monitor.mojom-shared.h"
#include "services/device/public/mojom/time_zone_monitor.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace device {
namespace mojom {

class TimeZoneMonitorProxy;

template <typename ImplRefTraits>
class TimeZoneMonitorStub;

class TimeZoneMonitorRequestValidator;


class  TimeZoneMonitor
    : public TimeZoneMonitorInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = TimeZoneMonitorInterfaceBase;
  using Proxy_ = TimeZoneMonitorProxy;

  template <typename ImplRefTraits>
  using Stub_ = TimeZoneMonitorStub<ImplRefTraits>;

  using RequestValidator_ = TimeZoneMonitorRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kAddClientMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct AddClient_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~TimeZoneMonitor() = default;

  
  virtual void AddClient(::mojo::PendingRemote<TimeZoneMonitorClient> client) = 0;
};

class TimeZoneMonitorClientProxy;

template <typename ImplRefTraits>
class TimeZoneMonitorClientStub;

class TimeZoneMonitorClientRequestValidator;


class  TimeZoneMonitorClient
    : public TimeZoneMonitorClientInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = TimeZoneMonitorClientInterfaceBase;
  using Proxy_ = TimeZoneMonitorClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = TimeZoneMonitorClientStub<ImplRefTraits>;

  using RequestValidator_ = TimeZoneMonitorClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnTimeZoneChangeMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnTimeZoneChange_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~TimeZoneMonitorClient() = default;

  
  virtual void OnTimeZoneChange(const std::string& tz_info) = 0;
};



class  TimeZoneMonitorProxy
    : public TimeZoneMonitor {
 public:
  using InterfaceType = TimeZoneMonitor;

  explicit TimeZoneMonitorProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void AddClient(::mojo::PendingRemote<TimeZoneMonitorClient> client) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  TimeZoneMonitorClientProxy
    : public TimeZoneMonitorClient {
 public:
  using InterfaceType = TimeZoneMonitorClient;

  explicit TimeZoneMonitorClientProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnTimeZoneChange(const std::string& tz_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  TimeZoneMonitorStubDispatch {
 public:
  static bool Accept(TimeZoneMonitor* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TimeZoneMonitor* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TimeZoneMonitor>>
class TimeZoneMonitorStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TimeZoneMonitorStub() = default;
  ~TimeZoneMonitorStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TimeZoneMonitorStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TimeZoneMonitorStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TimeZoneMonitorClientStubDispatch {
 public:
  static bool Accept(TimeZoneMonitorClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      TimeZoneMonitorClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<TimeZoneMonitorClient>>
class TimeZoneMonitorClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  TimeZoneMonitorClientStub() = default;
  ~TimeZoneMonitorClientStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TimeZoneMonitorClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return TimeZoneMonitorClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  TimeZoneMonitorRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  TimeZoneMonitorClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_H_