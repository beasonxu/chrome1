// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/origin_trial_feature.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#ifndef THIRD_PARTY_BLINK_PUBLIC_COMMON_ORIGIN_TRIALS_ORIGIN_TRIAL_FEATURE_H_
#define THIRD_PARTY_BLINK_PUBLIC_COMMON_ORIGIN_TRIALS_ORIGIN_TRIAL_FEATURE_H_

#include <cstdint>

namespace blink {

enum class OriginTrialFeature : int32_t {
  // For testing
  kNonExisting = 0,

  kAccessibilityAriaTouchPassthrough,
  kAdInterestGroupAPI,
  kAnonymousIframe,
  kAttributionReporting,
  kAutoDarkMode,
  kBackForwardCacheExperimentHTTPHeader,
  kBeforeMatchEvent,
  kCacheStorageCodeCacheHint,
  kComputePressure,
  kConditionalFocus,
  kCrossOriginOpenerPolicyReporting,
  kDeviceAttributes,
  kDigitalGoods,
  kDisableDifferentOriginSubframeDialogSuppression,
  kDisableHardwareNoiseSuppression,
  kDocumentPolicyNegotiation,
  kDocumentTransition,
  kEarlyHintsPreloadForNavigationOptIn,
  kFedCm,
  kFencedFrames,
  kFileHandling,
  kFledge,
  kFocusgroup,
  kHrefTranslate,
  kMediaSourceExtensionsForWebCodecs,
  kMediaSourceInWorkers,
  kNotificationTriggers,
  kOriginTrialsSampleAPI,
  kOriginTrialsSampleAPIDeprecation,
  kOriginTrialsSampleAPIExpiryGracePeriod,
  kOriginTrialsSampleAPIExpiryGracePeriodThirdParty,
  kOriginTrialsSampleAPIImplied,
  kOriginTrialsSampleAPIInvalidOS,
  kOriginTrialsSampleAPINavigation,
  kOriginTrialsSampleAPIPersistentExpiryGracePeriod,
  kOriginTrialsSampleAPIPersistentFeature,
  kOriginTrialsSampleAPIThirdParty,
  kPageFreezeOptIn,
  kPageFreezeOptOut,
  kParakeet,
  kPartitionedCookies,
  kPendingBeaconAPI,
  kPerMethodCanMakePaymentQuota,
  kPNaCl,
  kPointerLockOptions,
  kPortals,
  kPrerender2RelatedFeatures,
  kPrivacySandboxAdsAPIs,
  kPrivateNetworkAccessNonSecureContextsAllowed,
  kRegionCapture,
  kRtcAudioJitterBufferMaxPackets,
  kRTCIceTransportExtension,
  kRTCInsertableStreams,
  kRTCQuicTransport,
  kRTCStatsRelativePacketArrivalDelay,
  kSecurePaymentConfirmationOptOut,
  kSendFullUserAgentAfterReduction,
  kSharedStorageAPI,
  kSignatureBasedIntegrity,
  kSignedExchangeSubresourcePrefetch,
  kSkipAd,
  kSpeculationRules,
  kSpeculationRulesPrefetchProxy,
  kStorageFoundationAPI,
  kTextFragmentIdentifiers,
  kTopicsAPI,
  kTouchEventFeatureDetection,
  kTrustTokens,
  kU2FSecurityKeyAPI,
  kUnrestrictedSharedArrayBuffer,
  kUserAgentReduction,
  kWebAppDarkMode,
  kWebAppLaunchHandler,
  kWebAppLaunchQueue,
  kWebAppUrlHandling,
  kWebAppWindowControlsOverlay,
  kWebAssemblyExceptions,
  kWebCodecs,
  kWebGPU,
  kWebPaymentAPICSP,
  kWebTransportCustomCertificates,
  kWebXRDepth,
  kWebXRImageTracking,
  kWebXRPlaneDetection,
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_COMMON_ORIGIN_TRIALS_ORIGIN_TRIAL_FEATURE_H_
