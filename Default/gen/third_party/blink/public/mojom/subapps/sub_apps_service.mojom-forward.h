// third_party/blink/public/mojom/subapps/sub_apps_service.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SUBAPPS_SUB_APPS_SERVICE_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SUBAPPS_SUB_APPS_SERVICE_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace blink {
namespace mojom {
class SubAppsServiceAddInfoDataView;

class SubAppsServiceAddResultDataView;

class SubAppsServiceListResultDataView;


enum class SubAppsServiceResult : int32_t;

enum class SubAppsServiceAddResultCode : int32_t;
class SubAppsServiceAddInfo;
using SubAppsServiceAddInfoPtr = mojo::StructPtr<SubAppsServiceAddInfo>;

class SubAppsServiceAddResult;
using SubAppsServiceAddResultPtr = mojo::InlinedStructPtr<SubAppsServiceAddResult>;

class SubAppsServiceListResult;
using SubAppsServiceListResultPtr = mojo::StructPtr<SubAppsServiceListResult>;

class SubAppsService;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SUBAPPS_SUB_APPS_SERVICE_MOJOM_FORWARD_H_