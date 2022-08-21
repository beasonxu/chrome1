// services/device/public/mojom/wake_lock_context.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_PARAMS_DATA_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_PARAMS_DATA_H_

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
class  WakeLockContext_GetWakeLock_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t type;
  int32_t reason;
  mojo::internal::Pointer<mojo::internal::String_Data> description;
  mojo::internal::Handle_Data wake_lock;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<WakeLockContext_GetWakeLock_Params_Data>;

  WakeLockContext_GetWakeLock_Params_Data();
  ~WakeLockContext_GetWakeLock_Params_Data() = delete;
};
static_assert(sizeof(WakeLockContext_GetWakeLock_Params_Data) == 32,
              "Bad sizeof(WakeLockContext_GetWakeLock_Params_Data)");

}  // namespace internal


class WakeLockContext_GetWakeLock_ParamsDataView {
 public:
  WakeLockContext_GetWakeLock_ParamsDataView() = default;

  WakeLockContext_GetWakeLock_ParamsDataView(
      internal::WakeLockContext_GetWakeLock_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadType(UserType* output) const {
    auto data_value = data_->type;
    return mojo::internal::Deserialize<::device::mojom::WakeLockType>(
        data_value, output);
  }
  ::device::mojom::WakeLockType type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::device::mojom::WakeLockType>(data_->type));
  }
  template <typename UserType>
  [[nodiscard]] bool ReadReason(UserType* output) const {
    auto data_value = data_->reason;
    return mojo::internal::Deserialize<::device::mojom::WakeLockReason>(
        data_value, output);
  }
  ::device::mojom::WakeLockReason reason() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::device::mojom::WakeLockReason>(data_->reason));
  }
  inline void GetDescriptionDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadDescription(UserType* output) {
    
    auto* pointer = data_->description.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  UserType TakeWakeLock() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::device::mojom::WakeLockInterfaceBase>>(
            &data_->wake_lock, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WakeLockContext_GetWakeLock_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void WakeLockContext_GetWakeLock_ParamsDataView::GetDescriptionDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->description.Get();
  *output = mojo::StringDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace device

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_CONTEXT_MOJOM_PARAMS_DATA_H_