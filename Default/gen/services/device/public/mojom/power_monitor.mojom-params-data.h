// services/device/public/mojom/power_monitor.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace device {
namespace mojom {
namespace internal {

class ValidationContext;
class  PowerMonitor_AddClient_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  friend class mojo::internal::MessageFragment<PowerMonitor_AddClient_Params_Data>;

  PowerMonitor_AddClient_Params_Data();
  ~PowerMonitor_AddClient_Params_Data() = delete;
};
static_assert(sizeof(PowerMonitor_AddClient_Params_Data) == 16,
              "Bad sizeof(PowerMonitor_AddClient_Params_Data)");
class  PowerMonitorClient_PowerStateChange_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t on_battery_power : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<PowerMonitorClient_PowerStateChange_Params_Data>;

  PowerMonitorClient_PowerStateChange_Params_Data();
  ~PowerMonitorClient_PowerStateChange_Params_Data() = delete;
};
static_assert(sizeof(PowerMonitorClient_PowerStateChange_Params_Data) == 16,
              "Bad sizeof(PowerMonitorClient_PowerStateChange_Params_Data)");
class  PowerMonitorClient_Suspend_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<PowerMonitorClient_Suspend_Params_Data>;

  PowerMonitorClient_Suspend_Params_Data();
  ~PowerMonitorClient_Suspend_Params_Data() = delete;
};
static_assert(sizeof(PowerMonitorClient_Suspend_Params_Data) == 8,
              "Bad sizeof(PowerMonitorClient_Suspend_Params_Data)");
class  PowerMonitorClient_Resume_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<PowerMonitorClient_Resume_Params_Data>;

  PowerMonitorClient_Resume_Params_Data();
  ~PowerMonitorClient_Resume_Params_Data() = delete;
};
static_assert(sizeof(PowerMonitorClient_Resume_Params_Data) == 8,
              "Bad sizeof(PowerMonitorClient_Resume_Params_Data)");

}  // namespace internal


class PowerMonitor_AddClient_ParamsDataView {
 public:
  PowerMonitor_AddClient_ParamsDataView() = default;

  PowerMonitor_AddClient_ParamsDataView(
      internal::PowerMonitor_AddClient_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::device::mojom::PowerMonitorClientInterfaceBase>>(
            &data_->client, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::PowerMonitor_AddClient_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class PowerMonitorClient_PowerStateChange_ParamsDataView {
 public:
  PowerMonitorClient_PowerStateChange_ParamsDataView() = default;

  PowerMonitorClient_PowerStateChange_ParamsDataView(
      internal::PowerMonitorClient_PowerStateChange_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool on_battery_power() const {
    return data_->on_battery_power;
  }
 private:
  internal::PowerMonitorClient_PowerStateChange_Params_Data* data_ = nullptr;
};



class PowerMonitorClient_Suspend_ParamsDataView {
 public:
  PowerMonitorClient_Suspend_ParamsDataView() = default;

  PowerMonitorClient_Suspend_ParamsDataView(
      internal::PowerMonitorClient_Suspend_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PowerMonitorClient_Suspend_Params_Data* data_ = nullptr;
};



class PowerMonitorClient_Resume_ParamsDataView {
 public:
  PowerMonitorClient_Resume_ParamsDataView() = default;

  PowerMonitorClient_Resume_ParamsDataView(
      internal::PowerMonitorClient_Resume_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PowerMonitorClient_Resume_Params_Data* data_ = nullptr;
};









}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_POWER_MONITOR_MOJOM_PARAMS_DATA_H_