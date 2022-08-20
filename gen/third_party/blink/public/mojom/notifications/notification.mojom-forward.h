// third_party/blink/public/mojom/notifications/notification.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"




#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace blink {
namespace mojom {
class NotificationActionDataView;

class NotificationDataDataView;

class NotificationResourcesDataView;


enum class NotificationDirection : int32_t;

enum class NotificationActionType : int32_t;
class NotificationAction;
using NotificationActionPtr = mojo::StructPtr<NotificationAction>;

class NotificationData;
using NotificationDataPtr = mojo::StructPtr<NotificationData>;

class NotificationResources;
using NotificationResourcesPtr = mojo::StructPtr<NotificationResources>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_NOTIFICATIONS_NOTIFICATION_MOJOM_FORWARD_H_