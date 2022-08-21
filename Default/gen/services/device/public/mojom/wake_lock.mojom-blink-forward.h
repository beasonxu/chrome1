// services/device/public/mojom/wake_lock.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_BLINK_FORWARD_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_BLINK_FORWARD_H_

#include <stdint.h>



#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"






namespace device {
namespace mojom {

enum class WakeLockType : int32_t;

enum class WakeLockReason : int32_t;
class WakeLockInterfaceBase;
}  // namespace device
}  // namespace mojom


namespace device {
namespace mojom {
namespace blink {
// Aliases for definition in the parent namespace.
using WakeLockType = WakeLockType;
using WakeLockReason = WakeLockReason;
using WakeLockInterfaceBase = WakeLockInterfaceBase;
class WakeLock;




}  // namespace blink
}  // namespace mojom
}  // namespace device

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_WAKE_LOCK_MOJOM_BLINK_FORWARD_H_