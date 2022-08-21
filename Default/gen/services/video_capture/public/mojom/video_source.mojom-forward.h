// services/video_capture/public/mojom/video_source.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIDEO_SOURCE_MOJOM_FORWARD_H_
#define SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIDEO_SOURCE_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"








namespace video_capture {
namespace mojom {
class CreatePushSubscriptionResultCodeDataView;

enum class CreatePushSubscriptionSuccessCode : int32_t;
class CreatePushSubscriptionResultCode;

using CreatePushSubscriptionResultCodePtr = mojo::InlinedStructPtr<CreatePushSubscriptionResultCode>;

class PushVideoStreamSubscription;

class VideoSource;




}  // namespace mojom
}  // namespace video_capture

#endif  // SERVICES_VIDEO_CAPTURE_PUBLIC_MOJOM_VIDEO_SOURCE_MOJOM_FORWARD_H_