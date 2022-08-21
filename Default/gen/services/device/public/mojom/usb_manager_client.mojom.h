// services/device/public/mojom/usb_manager_client.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_USB_MANAGER_CLIENT_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_USB_MANAGER_CLIENT_MOJOM_H_

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

#include "services/device/public/mojom/usb_manager_client.mojom-shared.h"
#include "services/device/public/mojom/usb_manager_client.mojom-forward.h"
#include "services/device/public/mojom/usb_device.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace device {
namespace mojom {

class UsbDeviceManagerClientProxy;

template <typename ImplRefTraits>
class UsbDeviceManagerClientStub;

class UsbDeviceManagerClientRequestValidator;


class  UsbDeviceManagerClient
    : public UsbDeviceManagerClientInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = UsbDeviceManagerClientInterfaceBase;
  using Proxy_ = UsbDeviceManagerClientProxy;

  template <typename ImplRefTraits>
  using Stub_ = UsbDeviceManagerClientStub<ImplRefTraits>;

  using RequestValidator_ = UsbDeviceManagerClientRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnDeviceAddedMinVersion = 0,
    kOnDeviceRemovedMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnDeviceAdded_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnDeviceRemoved_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~UsbDeviceManagerClient() = default;

  
  virtual void OnDeviceAdded(::device::mojom::UsbDeviceInfoPtr device_info) = 0;

  
  virtual void OnDeviceRemoved(::device::mojom::UsbDeviceInfoPtr device_info) = 0;
};



class  UsbDeviceManagerClientProxy
    : public UsbDeviceManagerClient {
 public:
  using InterfaceType = UsbDeviceManagerClient;

  explicit UsbDeviceManagerClientProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnDeviceAdded(::device::mojom::UsbDeviceInfoPtr device_info) final;
  
  void OnDeviceRemoved(::device::mojom::UsbDeviceInfoPtr device_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  UsbDeviceManagerClientStubDispatch {
 public:
  static bool Accept(UsbDeviceManagerClient* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UsbDeviceManagerClient* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UsbDeviceManagerClient>>
class UsbDeviceManagerClientStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UsbDeviceManagerClientStub() = default;
  ~UsbDeviceManagerClientStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceManagerClientStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceManagerClientStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UsbDeviceManagerClientRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_USB_MANAGER_CLIENT_MOJOM_H_