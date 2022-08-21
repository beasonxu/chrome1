// third_party/blink/public/mojom/permissions_policy/permissions_policy_feature.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_POLICY_PERMISSIONS_POLICY_FEATURE_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_POLICY_PERMISSIONS_POLICY_FEATURE_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <iosfwd>
#include <type_traits>
#include <utility>

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "third_party/blink/public/mojom/permissions_policy/permissions_policy_feature.mojom-shared-internal.h"



#include "base/component_export.h"




namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


enum class PermissionsPolicyFeature : int32_t {
  
  kNotFound = 0,
  
  kAutoplay = 1,
  
  kCamera = 2,
  
  kEncryptedMedia = 3,
  
  kFullscreen = 4,
  
  kGeolocation = 5,
  
  kMicrophone = 6,
  
  kMidiFeature = 7,
  
  kPayment = 8,
  
  kDocumentDomain = 11,
  
  kSyncXHR = 13,
  
  kUsb = 14,
  
  kAccelerometer = 17,
  
  kAmbientLightSensor = 18,
  
  kGyroscope = 19,
  
  kMagnetometer = 20,
  
  kPictureInPicture = 26,
  
  kVerticalScroll = 27,
  
  kScreenWakeLock = 31,
  
  kFrobulate = 41,
  
  kSerial = 42,
  
  kHid = 43,
  
  kIdleDetection = 44,
  
  kExecutionWhileOutOfViewport = 50,
  
  kExecutionWhileNotRendered = 51,
  
  kFocusWithoutUserActivation = 52,
  
  kClientHintDPR = 53,
  
  kClientHintDeviceMemory = 54,
  
  kClientHintDownlink = 55,
  
  kClientHintECT = 56,
  
  kClientHintRTT = 58,
  
  kClientHintUA = 59,
  
  kClientHintUAArch = 60,
  
  kClientHintUAModel = 61,
  
  kClientHintUAPlatform = 62,
  
  kClientHintViewportWidth = 63,
  
  kClientHintWidth = 64,
  
  kWebXr = 66,
  
  kPublicKeyCredentialsGet = 67,
  
  kClientHintUAMobile = 69,
  
  kStorageAccessAPI = 70,
  
  kClientHintUAFullVersion = 71,
  
  kTrustTokenRedemption = 72,
  
  kAttributionReporting = 73,
  
  kClientHintUAPlatformVersion = 74,
  
  kCrossOriginIsolated = 75,
  
  kClipboardRead = 76,
  
  kClipboardWrite = 77,
  
  kWebShare = 78,
  
  kGamepad = 79,
  
  kOTPCredentials = 80,
  
  kDisplayCapture = 81,
  
  kSharedAutofill = 83,
  
  kDirectSockets = 84,
  
  kClientHintPrefersColorScheme = 85,
  
  kWindowPlacement = 86,
  
  kClientHintUABitness = 87,
  
  kClientHintUAReduced = 88,
  
  kClientHintViewportHeight = 89,
  
  kKeyboardMap = 90,
  
  kRunAdAuction = 91,
  
  kJoinAdInterestGroup = 92,
  
  kClientHintUAFullVersionList = 93,
  
  kClientHintUAFull = 94,
  
  kClientHintUAWoW64 = 95,
  
  kBrowsingTopics = 97,
  
  kBrowsingTopicsBackwardCompatible = 98,
  
  kClientHintSaveData = 99,
  
  kLocalFonts = 100,
  
  kBluetooth = 101,
  
  kFederatedCredentials = 102,
  
  kSharedStorage = 103,
  
  kUnload = 104,
  kMinValue = 0,
  kMaxValue = 104,
};

COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) std::ostream& operator<<(std::ostream& os, PermissionsPolicyFeature value);
inline bool IsKnownEnumValue(PermissionsPolicyFeature value) {
  return internal::PermissionsPolicyFeature_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


}  // namespace mojom
}  // namespace blink

namespace std {

template <>
struct hash<::blink::mojom::PermissionsPolicyFeature>
    : public mojo::internal::EnumHashImpl<::blink::mojom::PermissionsPolicyFeature> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::PermissionsPolicyFeature, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::blink::mojom::PermissionsPolicyFeature, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::blink::mojom::PermissionsPolicyFeature>(input)), output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {


}  // namespace mojom
}  // namespace blink

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) TraceFormatTraits<::blink::mojom::PermissionsPolicyFeature> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::blink::mojom::PermissionsPolicyFeature value);
};

} // namespace perfetto

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERMISSIONS_POLICY_PERMISSIONS_POLICY_FEATURE_MOJOM_SHARED_H_