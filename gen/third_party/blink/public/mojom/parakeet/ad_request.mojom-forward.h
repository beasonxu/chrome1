// third_party/blink/public/mojom/parakeet/ad_request.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PARAKEET_AD_REQUEST_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PARAKEET_AD_REQUEST_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"




#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace blink {
namespace mojom {
class AdPropertiesDataView;

class AdGeolocationDataView;

class AdTargetingDataView;

class AdRequestConfigDataView;


enum class AdSignals : int32_t;
class AdProperties;
using AdPropertiesPtr = mojo::StructPtr<AdProperties>;

class AdGeolocation;
using AdGeolocationPtr = mojo::InlinedStructPtr<AdGeolocation>;

class AdTargeting;
using AdTargetingPtr = mojo::StructPtr<AdTargeting>;

class AdRequestConfig;
using AdRequestConfigPtr = mojo::StructPtr<AdRequestConfig>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PARAKEET_AD_REQUEST_MOJOM_FORWARD_H_