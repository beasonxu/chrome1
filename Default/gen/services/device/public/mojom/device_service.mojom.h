// services/device/public/mojom/device_service.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_DEVICE_SERVICE_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_DEVICE_SERVICE_MOJOM_H_

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

#include "services/device/public/mojom/device_service.mojom-shared.h"
#include "services/device/public/mojom/device_service.mojom-forward.h"
#include "services/device/public/mojom/battery_monitor.mojom-forward.h"
#include "services/device/public/mojom/fingerprint.mojom-forward.h"
#include "services/device/public/mojom/geolocation_config.mojom-forward.h"
#include "services/device/public/mojom/geolocation_context.mojom-forward.h"
#include "services/device/public/mojom/geolocation_control.mojom-forward.h"
#include "services/device/public/mojom/power_monitor.mojom-forward.h"
#include "services/device/public/mojom/pressure_manager.mojom-forward.h"
#include "services/device/public/mojom/public_ip_address_geolocation_provider.mojom-forward.h"
#include "services/device/public/mojom/screen_orientation.mojom-forward.h"
#include "services/device/public/mojom/sensor_provider.mojom-forward.h"
#include "services/device/public/mojom/serial.mojom-forward.h"
#include "services/device/public/mojom/time_zone_monitor.mojom-forward.h"
#include "services/device/public/mojom/usb_manager.mojom-forward.h"
#include "services/device/public/mojom/usb_manager_test.mojom-forward.h"
#include "services/device/public/mojom/vibration_manager.mojom-forward.h"
#include "services/device/public/mojom/wake_lock_provider.mojom-forward.h"
#include "services/device/public/mojom/nfc_provider.mojom-forward.h"
#include "services/device/public/mojom/device_posture_provider.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace device {
namespace mojom {

class DeviceServiceProxy;

template <typename ImplRefTraits>
class DeviceServiceStub;

class DeviceServiceRequestValidator;


class  DeviceService
    : public DeviceServiceInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = DeviceServiceInterfaceBase;
  using Proxy_ = DeviceServiceProxy;

  template <typename ImplRefTraits>
  using Stub_ = DeviceServiceStub<ImplRefTraits>;

  using RequestValidator_ = DeviceServiceRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kBindDevicePostureProviderMinVersion = 0,
    kBindFingerprintMinVersion = 0,
    kBindGeolocationConfigMinVersion = 0,
    kBindGeolocationContextMinVersion = 0,
    kBindGeolocationControlMinVersion = 0,
    kBindBatteryMonitorMinVersion = 0,
    kBindPressureManagerMinVersion = 0,
    kBindNFCProviderMinVersion = 0,
    kBindVibrationManagerMinVersion = 0,
    kBindPowerMonitorMinVersion = 0,
    kBindPublicIpAddressGeolocationProviderMinVersion = 0,
    kBindScreenOrientationListenerMinVersion = 0,
    kBindSensorProviderMinVersion = 0,
    kBindSerialPortManagerMinVersion = 0,
    kBindTimeZoneMonitorMinVersion = 0,
    kBindWakeLockProviderMinVersion = 0,
    kBindUsbDeviceManagerMinVersion = 0,
    kBindUsbDeviceManagerTestMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct BindDevicePostureProvider_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindFingerprint_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindGeolocationConfig_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindGeolocationContext_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindGeolocationControl_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindBatteryMonitor_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindPressureManager_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindNFCProvider_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindVibrationManager_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindPowerMonitor_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindPublicIpAddressGeolocationProvider_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindScreenOrientationListener_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindSensorProvider_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindSerialPortManager_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindTimeZoneMonitor_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindWakeLockProvider_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindUsbDeviceManager_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct BindUsbDeviceManagerTest_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~DeviceService() = default;

  
  virtual void BindDevicePostureProvider(::mojo::PendingReceiver<::device::mojom::DevicePostureProvider> receiver) = 0;

  
  virtual void BindFingerprint(::mojo::PendingReceiver<::device::mojom::Fingerprint> receiver) = 0;

  
  virtual void BindGeolocationConfig(::mojo::PendingReceiver<::device::mojom::GeolocationConfig> receiver) = 0;

  
  virtual void BindGeolocationContext(::mojo::PendingReceiver<::device::mojom::GeolocationContext> receiver) = 0;

  
  virtual void BindGeolocationControl(::mojo::PendingReceiver<::device::mojom::GeolocationControl> receiver) = 0;

  
  virtual void BindBatteryMonitor(::mojo::PendingReceiver<::device::mojom::BatteryMonitor> receiver) = 0;

  
  virtual void BindPressureManager(::mojo::PendingReceiver<::device::mojom::PressureManager> receiver) = 0;

  
  virtual void BindNFCProvider(::mojo::PendingReceiver<::device::mojom::NFCProvider> receiver) = 0;

  
  virtual void BindVibrationManager(::mojo::PendingReceiver<::device::mojom::VibrationManager> receiver) = 0;

  
  virtual void BindPowerMonitor(::mojo::PendingReceiver<::device::mojom::PowerMonitor> receiver) = 0;

  
  virtual void BindPublicIpAddressGeolocationProvider(::mojo::PendingReceiver<::device::mojom::PublicIpAddressGeolocationProvider> receiver) = 0;

  
  virtual void BindScreenOrientationListener(::mojo::PendingReceiver<::device::mojom::ScreenOrientationListener> receiver) = 0;

  
  virtual void BindSensorProvider(::mojo::PendingReceiver<::device::mojom::SensorProvider> receiver) = 0;

  
  virtual void BindSerialPortManager(::mojo::PendingReceiver<::device::mojom::SerialPortManager> receiver) = 0;

  
  virtual void BindTimeZoneMonitor(::mojo::PendingReceiver<::device::mojom::TimeZoneMonitor> receiver) = 0;

  
  virtual void BindWakeLockProvider(::mojo::PendingReceiver<::device::mojom::WakeLockProvider> receiver) = 0;

  
  virtual void BindUsbDeviceManager(::mojo::PendingReceiver<::device::mojom::UsbDeviceManager> receiver) = 0;

  
  virtual void BindUsbDeviceManagerTest(::mojo::PendingReceiver<::device::mojom::UsbDeviceManagerTest> receiver) = 0;
};



class  DeviceServiceProxy
    : public DeviceService {
 public:
  using InterfaceType = DeviceService;

  explicit DeviceServiceProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void BindDevicePostureProvider(::mojo::PendingReceiver<::device::mojom::DevicePostureProvider> receiver) final;
  
  void BindFingerprint(::mojo::PendingReceiver<::device::mojom::Fingerprint> receiver) final;
  
  void BindGeolocationConfig(::mojo::PendingReceiver<::device::mojom::GeolocationConfig> receiver) final;
  
  void BindGeolocationContext(::mojo::PendingReceiver<::device::mojom::GeolocationContext> receiver) final;
  
  void BindGeolocationControl(::mojo::PendingReceiver<::device::mojom::GeolocationControl> receiver) final;
  
  void BindBatteryMonitor(::mojo::PendingReceiver<::device::mojom::BatteryMonitor> receiver) final;
  
  void BindPressureManager(::mojo::PendingReceiver<::device::mojom::PressureManager> receiver) final;
  
  void BindNFCProvider(::mojo::PendingReceiver<::device::mojom::NFCProvider> receiver) final;
  
  void BindVibrationManager(::mojo::PendingReceiver<::device::mojom::VibrationManager> receiver) final;
  
  void BindPowerMonitor(::mojo::PendingReceiver<::device::mojom::PowerMonitor> receiver) final;
  
  void BindPublicIpAddressGeolocationProvider(::mojo::PendingReceiver<::device::mojom::PublicIpAddressGeolocationProvider> receiver) final;
  
  void BindScreenOrientationListener(::mojo::PendingReceiver<::device::mojom::ScreenOrientationListener> receiver) final;
  
  void BindSensorProvider(::mojo::PendingReceiver<::device::mojom::SensorProvider> receiver) final;
  
  void BindSerialPortManager(::mojo::PendingReceiver<::device::mojom::SerialPortManager> receiver) final;
  
  void BindTimeZoneMonitor(::mojo::PendingReceiver<::device::mojom::TimeZoneMonitor> receiver) final;
  
  void BindWakeLockProvider(::mojo::PendingReceiver<::device::mojom::WakeLockProvider> receiver) final;
  
  void BindUsbDeviceManager(::mojo::PendingReceiver<::device::mojom::UsbDeviceManager> receiver) final;
  
  void BindUsbDeviceManagerTest(::mojo::PendingReceiver<::device::mojom::UsbDeviceManagerTest> receiver) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  DeviceServiceStubDispatch {
 public:
  static bool Accept(DeviceService* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      DeviceService* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<DeviceService>>
class DeviceServiceStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  DeviceServiceStub() = default;
  ~DeviceServiceStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceServiceStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return DeviceServiceStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  DeviceServiceRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace device

namespace mojo {

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_DEVICE_SERVICE_MOJOM_H_