// services/device/public/mojom/time_zone_monitor.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_PARAMS_DATA_H_

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
class  TimeZoneMonitor_AddClient_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;

 private:
  friend class mojo::internal::MessageFragment<TimeZoneMonitor_AddClient_Params_Data>;

  TimeZoneMonitor_AddClient_Params_Data();
  ~TimeZoneMonitor_AddClient_Params_Data() = delete;
};
static_assert(sizeof(TimeZoneMonitor_AddClient_Params_Data) == 16,
              "Bad sizeof(TimeZoneMonitor_AddClient_Params_Data)");
class  TimeZoneMonitorClient_OnTimeZoneChange_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> tz_info;

 private:
  friend class mojo::internal::MessageFragment<TimeZoneMonitorClient_OnTimeZoneChange_Params_Data>;

  TimeZoneMonitorClient_OnTimeZoneChange_Params_Data();
  ~TimeZoneMonitorClient_OnTimeZoneChange_Params_Data() = delete;
};
static_assert(sizeof(TimeZoneMonitorClient_OnTimeZoneChange_Params_Data) == 16,
              "Bad sizeof(TimeZoneMonitorClient_OnTimeZoneChange_Params_Data)");

}  // namespace internal


class TimeZoneMonitor_AddClient_ParamsDataView {
 public:
  TimeZoneMonitor_AddClient_ParamsDataView() = default;

  TimeZoneMonitor_AddClient_ParamsDataView(
      internal::TimeZoneMonitor_AddClient_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::device::mojom::TimeZoneMonitorClientInterfaceBase>>(
            &data_->client, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::TimeZoneMonitor_AddClient_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class TimeZoneMonitorClient_OnTimeZoneChange_ParamsDataView {
 public:
  TimeZoneMonitorClient_OnTimeZoneChange_ParamsDataView() = default;

  TimeZoneMonitorClient_OnTimeZoneChange_ParamsDataView(
      internal::TimeZoneMonitorClient_OnTimeZoneChange_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTzInfoDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadTzInfo(UserType* output) {
    
    auto* pointer = data_->tz_info.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::TimeZoneMonitorClient_OnTimeZoneChange_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};




inline void TimeZoneMonitorClient_OnTimeZoneChange_ParamsDataView::GetTzInfoDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->tz_info.Get();
  *output = mojo::StringDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_TIME_ZONE_MONITOR_MOJOM_PARAMS_DATA_H_