// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/internal_runtime_flags.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_RUNTIME_FLAGS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_RUNTIME_FLAGS_H_

#include "third_party/blink/renderer/platform/bindings/script_wrappable.h"
#include "third_party/blink/renderer/platform/heap/garbage_collected.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"
#include "base/memory/scoped_refptr.h"
#include "third_party/blink/renderer/platform/wtf/ref_counted.h"

namespace blink {

class InternalRuntimeFlags : public ScriptWrappable {
  DEFINE_WRAPPERTYPEINFO();
 public:
  static InternalRuntimeFlags* create() {
    return MakeGarbageCollected<InternalRuntimeFlags>();
  }

  InternalRuntimeFlags() {}

  // These are reset between web tests from Internals::resetToConsistentState
  // using RuntimeEnabledFeatures::Backup.
  void setAccelerated2dCanvasEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetAccelerated2dCanvasEnabled(isEnabled);
  }
  void setAutomationControlledEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetAutomationControlledEnabled(isEnabled);
  }
  void setAutoplayIgnoresWebAudioEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetAutoplayIgnoresWebAudioEnabled(isEnabled);
  }
  void setDisplayCutoutAPIEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetDisplayCutoutAPIEnabled(isEnabled);
  }
  void setDocumentPictureInPictureAPIEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetDocumentPictureInPictureAPIEnabled(isEnabled);
  }
  void setFocuslessSpatialNavigationEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetFocuslessSpatialNavigationEnabled(isEnabled);
  }
  void setImplicitRootScrollerEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetImplicitRootScrollerEnabled(isEnabled);
  }
  void setLangAttributeAwareFormControlUIEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetLangAttributeAwareFormControlUIEnabled(isEnabled);
  }
  void setMediaControlsOverlayPlayButtonEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetMediaControlsOverlayPlayButtonEnabled(isEnabled);
  }
  void setOverscrollCustomizationEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetOverscrollCustomizationEnabled(isEnabled);
  }
  void setPaintUnderInvalidationCheckingEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetPaintUnderInvalidationCheckingEnabled(isEnabled);
  }
  void setPercentBasedScrollingEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetPercentBasedScrollingEnabled(isEnabled);
  }
  void setPictureInPictureEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetPictureInPictureEnabled(isEnabled);
  }
  void setPreferNonCompositedScrollingEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetPreferNonCompositedScrollingEnabled(isEnabled);
  }
  void setRemotePlaybackBackendEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetRemotePlaybackBackendEnabled(isEnabled);
  }
  void setScrollEndEventsEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetScrollEndEventsEnabled(isEnabled);
  }
  void setSkipTouchEventFilterEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetSkipTouchEventFilterEnabled(isEnabled);
  }
  void setVideoAutoFullscreenEnabled(bool isEnabled) {
    RuntimeEnabledFeatures::SetVideoAutoFullscreenEnabled(isEnabled);
  }

  bool abortSignalThrowIfAbortedEnabled() {
    return RuntimeEnabledFeatures::AbortSignalThrowIfAbortedEnabled();
  }
  bool abortSignalTimeoutEnabled() {
    return RuntimeEnabledFeatures::AbortSignalTimeoutEnabled();
  }
  bool accelerated2dCanvasEnabled() {
    return RuntimeEnabledFeatures::Accelerated2dCanvasEnabled();
  }
  bool acceleratedSmallCanvasesEnabled() {
    return RuntimeEnabledFeatures::AcceleratedSmallCanvasesEnabled();
  }
  bool accessibilityAriaTouchPassthroughEnabled() {
    return RuntimeEnabledFeatures::AccessibilityAriaTouchPassthroughEnabledByRuntimeFlag();
  }
  bool accessibilityAriaVirtualContentEnabled() {
    return RuntimeEnabledFeatures::AccessibilityAriaVirtualContentEnabled();
  }
  bool accessibilityExposeDisplayNoneEnabled() {
    return RuntimeEnabledFeatures::AccessibilityExposeDisplayNoneEnabled();
  }
  bool accessibilityExposeHTMLElementEnabled() {
    return RuntimeEnabledFeatures::AccessibilityExposeHTMLElementEnabled();
  }
  bool accessibilityExposeIgnoredNodesEnabled() {
    return RuntimeEnabledFeatures::AccessibilityExposeIgnoredNodesEnabled();
  }
  bool accessibilityObjectModelEnabled() {
    return RuntimeEnabledFeatures::AccessibilityObjectModelEnabled();
  }
  bool accessibilityPageZoomEnabled() {
    return RuntimeEnabledFeatures::AccessibilityPageZoomEnabled();
  }
  bool accessibilityUseAXPositionForDocumentMarkersEnabled() {
    return RuntimeEnabledFeatures::AccessibilityUseAXPositionForDocumentMarkersEnabled();
  }
  bool addressSpaceEnabled() {
    return RuntimeEnabledFeatures::AddressSpaceEnabled();
  }
  bool adInterestGroupAPIEnabled() {
    return RuntimeEnabledFeatures::AdInterestGroupAPIEnabledByRuntimeFlag();
  }
  bool adTaggingEnabled() {
    return RuntimeEnabledFeatures::AdTaggingEnabled();
  }
  bool allowContentInitiatedDataUrlNavigationsEnabled() {
    return RuntimeEnabledFeatures::AllowContentInitiatedDataUrlNavigationsEnabled();
  }
  bool androidDownloadableFontsMatchingEnabled() {
    return RuntimeEnabledFeatures::AndroidDownloadableFontsMatchingEnabled();
  }
  bool animationWorkletEnabled() {
    return RuntimeEnabledFeatures::AnimationWorkletEnabled();
  }
  bool anonymousIframeEnabled() {
    return RuntimeEnabledFeatures::AnonymousIframeEnabledByRuntimeFlag();
  }
  bool aomAriaRelationshipPropertiesEnabled() {
    return RuntimeEnabledFeatures::AOMAriaRelationshipPropertiesEnabled();
  }
  bool ariaTouchPassthroughEnabled() {
    return RuntimeEnabledFeatures::AriaTouchPassthroughEnabled();
  }
  bool attributionReportingEnabled() {
    return RuntimeEnabledFeatures::AttributionReportingEnabledByRuntimeFlag();
  }
  bool audioOutputDevicesEnabled() {
    return RuntimeEnabledFeatures::AudioOutputDevicesEnabled();
  }
  bool audioVideoTracksEnabled() {
    return RuntimeEnabledFeatures::AudioVideoTracksEnabled();
  }
  bool autoDarkModeEnabled() {
    return RuntimeEnabledFeatures::AutoDarkModeEnabledByRuntimeFlag();
  }
  bool autoExpandDetailsElementEnabled() {
    return RuntimeEnabledFeatures::AutoExpandDetailsElementEnabled();
  }
  bool autofillShadowDOMEnabled() {
    return RuntimeEnabledFeatures::AutofillShadowDOMEnabled();
  }
  bool automationControlledEnabled() {
    return RuntimeEnabledFeatures::AutomationControlledEnabled();
  }
  bool autoPictureInPictureEnabled() {
    return RuntimeEnabledFeatures::AutoPictureInPictureEnabled();
  }
  bool autoplayIgnoresWebAudioEnabled() {
    return RuntimeEnabledFeatures::AutoplayIgnoresWebAudioEnabled();
  }
  bool backfaceVisibilityInteropEnabled() {
    return RuntimeEnabledFeatures::BackfaceVisibilityInteropEnabled();
  }
  bool backForwardCacheEnabled() {
    return RuntimeEnabledFeatures::BackForwardCacheEnabled();
  }
  bool backForwardCacheExperimentHTTPHeaderEnabled() {
    return RuntimeEnabledFeatures::BackForwardCacheExperimentHTTPHeaderEnabledByRuntimeFlag();
  }
  bool backgroundFetchEnabled() {
    return RuntimeEnabledFeatures::BackgroundFetchEnabled();
  }
  bool barcodeDetectorEnabled() {
    return RuntimeEnabledFeatures::BarcodeDetectorEnabled();
  }
  bool batchFetchRequestsEnabled() {
    return RuntimeEnabledFeatures::BatchFetchRequestsEnabled();
  }
  bool beforeMatchEventEnabled() {
    return RuntimeEnabledFeatures::BeforeMatchEventEnabledByRuntimeFlag();
  }
  bool bidiCaretAffinityEnabled() {
    return RuntimeEnabledFeatures::BidiCaretAffinityEnabled();
  }
  bool blinkExtensionChromeOSEnabled() {
    return RuntimeEnabledFeatures::BlinkExtensionChromeOSEnabled();
  }
  bool blinkExtensionChromeOSHIDEnabled() {
    return RuntimeEnabledFeatures::BlinkExtensionChromeOSHIDEnabled();
  }
  bool blinkExtensionChromeOSWindowManagementEnabled() {
    return RuntimeEnabledFeatures::BlinkExtensionChromeOSWindowManagementEnabled();
  }
  bool blinkRuntimeCallStatsEnabled() {
    return RuntimeEnabledFeatures::BlinkRuntimeCallStatsEnabled();
  }
  bool blockingAttributeEnabled() {
    return RuntimeEnabledFeatures::BlockingAttributeEnabled();
  }
  bool blockingFocusWithoutUserActivationEnabled() {
    return RuntimeEnabledFeatures::BlockingFocusWithoutUserActivationEnabled();
  }
  bool browserVerifiedUserActivationKeyboardEnabled() {
    return RuntimeEnabledFeatures::BrowserVerifiedUserActivationKeyboardEnabled();
  }
  bool browserVerifiedUserActivationMouseEnabled() {
    return RuntimeEnabledFeatures::BrowserVerifiedUserActivationMouseEnabled();
  }
  bool cacheStorageCodeCacheHintEnabled() {
    return RuntimeEnabledFeatures::CacheStorageCodeCacheHintEnabledByRuntimeFlag();
  }
  bool canvas2dImageChromiumEnabled() {
    return RuntimeEnabledFeatures::Canvas2dImageChromiumEnabled();
  }
  bool canvas2dLayersEnabled() {
    return RuntimeEnabledFeatures::Canvas2dLayersEnabled();
  }
  bool canvas2dScrollPathIntoViewEnabled() {
    return RuntimeEnabledFeatures::Canvas2dScrollPathIntoViewEnabled();
  }
  bool canvasColorManagementV2Enabled() {
    return RuntimeEnabledFeatures::CanvasColorManagementV2Enabled();
  }
  bool canvasFormattedTextEnabled() {
    return RuntimeEnabledFeatures::CanvasFormattedTextEnabled();
  }
  bool canvasHDREnabled() {
    return RuntimeEnabledFeatures::CanvasHDREnabled();
  }
  bool canvasImageSmoothingEnabled() {
    return RuntimeEnabledFeatures::CanvasImageSmoothingEnabled();
  }
  bool capabilityDelegationFullscreenRequestEnabled() {
    return RuntimeEnabledFeatures::CapabilityDelegationFullscreenRequestEnabled();
  }
  bool captureHandleEnabled() {
    return RuntimeEnabledFeatures::CaptureHandleEnabled();
  }
  bool checkVisibilityEnabled() {
    return RuntimeEnabledFeatures::checkVisibilityEnabled();
  }
  bool clickPointerEventEnabled() {
    return RuntimeEnabledFeatures::ClickPointerEventEnabled();
  }
  bool clickRetargettingEnabled() {
    return RuntimeEnabledFeatures::ClickRetargettingEnabled();
  }
  bool clientHintsMetaEquivDelegateCHEnabled() {
    return RuntimeEnabledFeatures::ClientHintsMetaEquivDelegateCHEnabled();
  }
  bool clientHintsMetaHTTPEquivAcceptCHEnabled() {
    return RuntimeEnabledFeatures::ClientHintsMetaHTTPEquivAcceptCHEnabled();
  }
  bool clientHintThirdPartyDelegationEnabled() {
    return RuntimeEnabledFeatures::ClientHintThirdPartyDelegationEnabled();
  }
  bool clipboardCustomFormatsEnabled() {
    return RuntimeEnabledFeatures::ClipboardCustomFormatsEnabled();
  }
  bool clipboardSvgEnabled() {
    return RuntimeEnabledFeatures::ClipboardSvgEnabled();
  }
  bool clipboardUnsanitizedContentEnabled() {
    return RuntimeEnabledFeatures::ClipboardUnsanitizedContentEnabled();
  }
  bool closeWatcherEnabled() {
    return RuntimeEnabledFeatures::CloseWatcherEnabled();
  }
  bool clsScrollAnchoringEnabled() {
    return RuntimeEnabledFeatures::CLSScrollAnchoringEnabled();
  }
  bool coepReflectionEnabled() {
    return RuntimeEnabledFeatures::CoepReflectionEnabled();
  }
  bool compositeBGColorAnimationEnabled() {
    return RuntimeEnabledFeatures::CompositeBGColorAnimationEnabled();
  }
  bool compositeBoxShadowAnimationEnabled() {
    return RuntimeEnabledFeatures::CompositeBoxShadowAnimationEnabled();
  }
  bool compositeClipPathAnimationEnabled() {
    return RuntimeEnabledFeatures::CompositeClipPathAnimationEnabled();
  }
  bool compositedSelectionUpdateEnabled() {
    return RuntimeEnabledFeatures::CompositedSelectionUpdateEnabled();
  }
  bool compositeRelativeKeyframesEnabled() {
    return RuntimeEnabledFeatures::CompositeRelativeKeyframesEnabled();
  }
  bool compositeVideoElementEnabled() {
    return RuntimeEnabledFeatures::CompositeVideoElementEnabled();
  }
  bool computedAccessibilityInfoEnabled() {
    return RuntimeEnabledFeatures::ComputedAccessibilityInfoEnabled();
  }
  bool computePressureEnabled() {
    return RuntimeEnabledFeatures::ComputePressureEnabledByRuntimeFlag();
  }
  bool conditionalFocusEnabled() {
    return RuntimeEnabledFeatures::ConditionalFocusEnabledByRuntimeFlag();
  }
  bool consolidatedMovementXYEnabled() {
    return RuntimeEnabledFeatures::ConsolidatedMovementXYEnabled();
  }
  bool contactsManagerEnabled() {
    return RuntimeEnabledFeatures::ContactsManagerEnabled();
  }
  bool contactsManagerExtraPropertiesEnabled() {
    return RuntimeEnabledFeatures::ContactsManagerExtraPropertiesEnabled();
  }
  bool contentIndexEnabled() {
    return RuntimeEnabledFeatures::ContentIndexEnabled();
  }
  bool contentVisibilityAutoStateChangedEventEnabled() {
    return RuntimeEnabledFeatures::ContentVisibilityAutoStateChangedEventEnabled();
  }
  bool contextMenuEnabled() {
    return RuntimeEnabledFeatures::ContextMenuEnabled();
  }
  bool cooperativeSchedulingEnabled() {
    return RuntimeEnabledFeatures::CooperativeSchedulingEnabled();
  }
  bool corsRFC1918Enabled() {
    return RuntimeEnabledFeatures::CorsRFC1918Enabled();
  }
  bool crossOriginOpenerPolicyReportingEnabled() {
    return RuntimeEnabledFeatures::CrossOriginOpenerPolicyReportingEnabledByRuntimeFlag();
  }
  bool css3TextEnabled() {
    return RuntimeEnabledFeatures::CSS3TextEnabled();
  }
  bool cssAnchorPositioningEnabled() {
    return RuntimeEnabledFeatures::CSSAnchorPositioningEnabled();
  }
  bool cssAtRuleCounterStyleImageSymbolsEnabled() {
    return RuntimeEnabledFeatures::CSSAtRuleCounterStyleImageSymbolsEnabled();
  }
  bool cssAtRuleCounterStyleSpeakAsDescriptorEnabled() {
    return RuntimeEnabledFeatures::CSSAtRuleCounterStyleSpeakAsDescriptorEnabled();
  }
  bool cssCalcSimplificationAndSerializationEnabled() {
    return RuntimeEnabledFeatures::CSSCalcSimplificationAndSerializationEnabled();
  }
  bool cssCaseSensitiveSelectorEnabled() {
    return RuntimeEnabledFeatures::CSSCaseSensitiveSelectorEnabled();
  }
  bool cssColorContrastEnabled() {
    return RuntimeEnabledFeatures::CSSColorContrastEnabled();
  }
  bool cssColorTypedOMEnabled() {
    return RuntimeEnabledFeatures::CSSColorTypedOMEnabled();
  }
  bool cssContainerQueriesEnabled() {
    return RuntimeEnabledFeatures::CSSContainerQueriesEnabled();
  }
  bool cssContainerRelativeUnitsEnabled() {
    return RuntimeEnabledFeatures::CSSContainerRelativeUnitsEnabled();
  }
  bool cssContainerSkipStyleRecalcEnabled() {
    return RuntimeEnabledFeatures::CSSContainerSkipStyleRecalcEnabled();
  }
  bool cssContainSize1DEnabled() {
    return RuntimeEnabledFeatures::CSSContainSize1DEnabled();
  }
  bool cssDynamicRangeMediaQueriesEnabled() {
    return RuntimeEnabledFeatures::CSSDynamicRangeMediaQueriesEnabled();
  }
  bool cssEnumeratedCustomPropertiesEnabled() {
    return RuntimeEnabledFeatures::CSSEnumeratedCustomPropertiesEnabled();
  }
  bool cssFocusVisibleEnabled() {
    return RuntimeEnabledFeatures::CSSFocusVisibleEnabled();
  }
  bool cssFoldablesEnabled() {
    return RuntimeEnabledFeatures::CSSFoldablesEnabled();
  }
  bool cssFontFaceAutoVariableRangeEnabled() {
    return RuntimeEnabledFeatures::CSSFontFaceAutoVariableRangeEnabled();
  }
  bool cssFontFamilyMathEnabled() {
    return RuntimeEnabledFeatures::CSSFontFamilyMathEnabled();
  }
  bool cssFontSizeAdjustEnabled() {
    return RuntimeEnabledFeatures::CSSFontSizeAdjustEnabled();
  }
  bool cssGridTemplatePropertyInterpolationEnabled() {
    return RuntimeEnabledFeatures::CSSGridTemplatePropertyInterpolationEnabled();
  }
  bool cssHexAlphaColorEnabled() {
    return RuntimeEnabledFeatures::CSSHexAlphaColorEnabled();
  }
  bool cssIcUnitEnabled() {
    return RuntimeEnabledFeatures::CSSIcUnitEnabled();
  }
  bool cssIndependentTransformPropertiesEnabled() {
    return RuntimeEnabledFeatures::CSSIndependentTransformPropertiesEnabled();
  }
  bool cssLayoutAPIEnabled() {
    return RuntimeEnabledFeatures::CSSLayoutAPIEnabled();
  }
  bool cssLogicalEnabled() {
    return RuntimeEnabledFeatures::CSSLogicalEnabled();
  }
  bool cssLogicalOverflowEnabled() {
    return RuntimeEnabledFeatures::CSSLogicalOverflowEnabled();
  }
  bool cssMarkerNestedPseudoElementEnabled() {
    return RuntimeEnabledFeatures::CSSMarkerNestedPseudoElementEnabled();
  }
  bool cssMathDepthEnabled() {
    return RuntimeEnabledFeatures::CSSMathDepthEnabled();
  }
  bool cssMathShiftEnabled() {
    return RuntimeEnabledFeatures::CSSMathShiftEnabled();
  }
  bool cssMathStyleEnabled() {
    return RuntimeEnabledFeatures::CSSMathStyleEnabled();
  }
  bool cssMathVariantEnabled() {
    return RuntimeEnabledFeatures::CSSMathVariantEnabled();
  }
  bool cssMediaQueries4Enabled() {
    return RuntimeEnabledFeatures::CSSMediaQueries4Enabled();
  }
  bool cssMixBlendModePlusLighterEnabled() {
    return RuntimeEnabledFeatures::CSSMixBlendModePlusLighterEnabled();
  }
  bool cssModulesEnabled() {
    return RuntimeEnabledFeatures::CSSModulesEnabled();
  }
  bool cssObjectViewBoxEnabled() {
    return RuntimeEnabledFeatures::CSSObjectViewBoxEnabled();
  }
  bool cssOffsetPathRayEnabled() {
    return RuntimeEnabledFeatures::CSSOffsetPathRayEnabled();
  }
  bool cssOffsetPathRayContainEnabled() {
    return RuntimeEnabledFeatures::CSSOffsetPathRayContainEnabled();
  }
  bool cssOffsetPositionAnchorEnabled() {
    return RuntimeEnabledFeatures::CSSOffsetPositionAnchorEnabled();
  }
  bool cssOverflowForReplacedElementsEnabled() {
    return RuntimeEnabledFeatures::CSSOverflowForReplacedElementsEnabled();
  }
  bool cssPaintAPIArgumentsEnabled() {
    return RuntimeEnabledFeatures::CSSPaintAPIArgumentsEnabled();
  }
  bool cssPictureInPictureEnabled() {
    return RuntimeEnabledFeatures::CSSPictureInPictureEnabled();
  }
  bool cssPositionStickyStaticScrollPositionEnabled() {
    return RuntimeEnabledFeatures::CSSPositionStickyStaticScrollPositionEnabled();
  }
  bool cssPseudoAutofillEnabled() {
    return RuntimeEnabledFeatures::CSSPseudoAutofillEnabled();
  }
  bool cssPseudoDirEnabled() {
    return RuntimeEnabledFeatures::CSSPseudoDirEnabled();
  }
  bool cssPseudoHasEnabled() {
    return RuntimeEnabledFeatures::CSSPseudoHasEnabled();
  }
  bool cssPseudoPlayingPausedEnabled() {
    return RuntimeEnabledFeatures::CSSPseudoPlayingPausedEnabled();
  }
  bool cssScopeEnabled() {
    return RuntimeEnabledFeatures::CSSScopeEnabled();
  }
  bool cssScrollbarsEnabled() {
    return RuntimeEnabledFeatures::CSSScrollbarsEnabled();
  }
  bool cssScrollTimelineEnabled() {
    return RuntimeEnabledFeatures::CSSScrollTimelineEnabled();
  }
  bool cssSelectorFragmentAnchorEnabled() {
    return RuntimeEnabledFeatures::CSSSelectorFragmentAnchorEnabled();
  }
  bool cssSnapSizeEnabled() {
    return RuntimeEnabledFeatures::CSSSnapSizeEnabled();
  }
  bool cssSpellingGrammarErrorsEnabled() {
    return RuntimeEnabledFeatures::CSSSpellingGrammarErrorsEnabled();
  }
  bool cssStyleQueriesEnabled() {
    return RuntimeEnabledFeatures::CSSStyleQueriesEnabled();
  }
  bool cssTogglesEnabled() {
    return RuntimeEnabledFeatures::CSSTogglesEnabled();
  }
  bool cssTrigonometricFunctionsEnabled() {
    return RuntimeEnabledFeatures::CSSTrigonometricFunctionsEnabled();
  }
  bool cssVariables2ImageValuesEnabled() {
    return RuntimeEnabledFeatures::CSSVariables2ImageValuesEnabled();
  }
  bool cssVariables2TransformValuesEnabled() {
    return RuntimeEnabledFeatures::CSSVariables2TransformValuesEnabled();
  }
  bool cssVideoDynamicRangeMediaQueriesEnabled() {
    return RuntimeEnabledFeatures::CSSVideoDynamicRangeMediaQueriesEnabled();
  }
  bool cssViewportUnits4Enabled() {
    return RuntimeEnabledFeatures::CSSViewportUnits4Enabled();
  }
  bool customElementDefaultStyleEnabled() {
    return RuntimeEnabledFeatures::CustomElementDefaultStyleEnabled();
  }
  bool databaseEnabled() {
    return RuntimeEnabledFeatures::DatabaseEnabled();
  }
  bool decodeJpeg420ImagesToYUVEnabled() {
    return RuntimeEnabledFeatures::DecodeJpeg420ImagesToYUVEnabled();
  }
  bool decodeLossyWebPImagesToYUVEnabled() {
    return RuntimeEnabledFeatures::DecodeLossyWebPImagesToYUVEnabled();
  }
  bool deferredShapingEnabled() {
    return RuntimeEnabledFeatures::DeferredShapingEnabled();
  }
  bool deflateRawCompressionFormatEnabled() {
    return RuntimeEnabledFeatures::DeflateRawCompressionFormatEnabled();
  }
  bool delegatedInkTrailsEnabled() {
    return RuntimeEnabledFeatures::DelegatedInkTrailsEnabled();
  }
  bool desktopCaptureDisableLocalEchoControlEnabled() {
    return RuntimeEnabledFeatures::DesktopCaptureDisableLocalEchoControlEnabled();
  }
  bool desktopPWAsSubAppsEnabled() {
    return RuntimeEnabledFeatures::DesktopPWAsSubAppsEnabled();
  }
  bool deviceAttributesEnabled() {
    return RuntimeEnabledFeatures::DeviceAttributesEnabledByRuntimeFlag();
  }
  bool deviceOrientationRequestPermissionEnabled() {
    return RuntimeEnabledFeatures::DeviceOrientationRequestPermissionEnabled();
  }
  bool devicePostureEnabled() {
    return RuntimeEnabledFeatures::DevicePostureEnabled();
  }
  bool dialogFocusNewSpecBehaviorEnabled() {
    return RuntimeEnabledFeatures::DialogFocusNewSpecBehaviorEnabled();
  }
  bool digitalGoodsEnabled() {
    return RuntimeEnabledFeatures::DigitalGoodsEnabledByRuntimeFlag();
  }
  bool digitalGoodsV21Enabled() {
    return RuntimeEnabledFeatures::DigitalGoodsV2_1Enabled();
  }
  bool directSocketsEnabled() {
    return RuntimeEnabledFeatures::DirectSocketsEnabled();
  }
  bool disableDifferentOriginSubframeDialogSuppressionEnabled() {
    return RuntimeEnabledFeatures::DisableDifferentOriginSubframeDialogSuppressionEnabledByRuntimeFlag();
  }
  bool disableHardwareNoiseSuppressionEnabled() {
    return RuntimeEnabledFeatures::DisableHardwareNoiseSuppressionEnabledByRuntimeFlag();
  }
  bool displayCapturePermissionsPolicyEnabled() {
    return RuntimeEnabledFeatures::DisplayCapturePermissionsPolicyEnabled();
  }
  bool displayCutoutAPIEnabled() {
    return RuntimeEnabledFeatures::DisplayCutoutAPIEnabled();
  }
  bool documentCookieEnabled() {
    return RuntimeEnabledFeatures::DocumentCookieEnabled();
  }
  bool documentDomainEnabled() {
    return RuntimeEnabledFeatures::DocumentDomainEnabled();
  }
  bool documentPictureInPictureAPIEnabled() {
    return RuntimeEnabledFeatures::DocumentPictureInPictureAPIEnabled();
  }
  bool documentPolicyEnabled() {
    return RuntimeEnabledFeatures::DocumentPolicyEnabled();
  }
  bool documentPolicyDocumentDomainEnabled() {
    return RuntimeEnabledFeatures::DocumentPolicyDocumentDomainEnabled();
  }
  bool documentPolicyNegotiationEnabled() {
    return RuntimeEnabledFeatures::DocumentPolicyNegotiationEnabledByRuntimeFlag();
  }
  bool documentPolicySyncXHREnabled() {
    return RuntimeEnabledFeatures::DocumentPolicySyncXHREnabled();
  }
  bool documentTransitionEnabled() {
    return RuntimeEnabledFeatures::DocumentTransitionEnabledByRuntimeFlag();
  }
  bool documentWriteEnabled() {
    return RuntimeEnabledFeatures::DocumentWriteEnabled();
  }
  bool earlyHintsPreloadForNavigationOptInEnabled() {
    return RuntimeEnabledFeatures::EarlyHintsPreloadForNavigationOptInEnabledByRuntimeFlag();
  }
  bool editContextEnabled() {
    return RuntimeEnabledFeatures::EditContextEnabled();
  }
  bool elementSuperRareDataEnabled() {
    return RuntimeEnabledFeatures::ElementSuperRareDataEnabled();
  }
  bool eventPathEnabled() {
    return RuntimeEnabledFeatures::EventPathEnabled();
  }
  bool experimentalContentSecurityPolicyFeaturesEnabled() {
    return RuntimeEnabledFeatures::ExperimentalContentSecurityPolicyFeaturesEnabled();
  }
  bool experimentalJSProfilerMarkersEnabled() {
    return RuntimeEnabledFeatures::ExperimentalJSProfilerMarkersEnabled();
  }
  bool experimentalPoliciesEnabled() {
    return RuntimeEnabledFeatures::ExperimentalPoliciesEnabled();
  }
  bool experimentalWebSnapshotsEnabled() {
    return RuntimeEnabledFeatures::ExperimentalWebSnapshotsEnabled();
  }
  bool extendedTextMetricsEnabled() {
    return RuntimeEnabledFeatures::ExtendedTextMetricsEnabled();
  }
  bool extraWebGLVideoTextureMetadataEnabled() {
    return RuntimeEnabledFeatures::ExtraWebGLVideoTextureMetadataEnabled();
  }
  bool eyeDropperAPIEnabled() {
    return RuntimeEnabledFeatures::EyeDropperAPIEnabled();
  }
  bool faceDetectorEnabled() {
    return RuntimeEnabledFeatures::FaceDetectorEnabled();
  }
  bool fakeNoAllocDirectCallForTestingEnabled() {
    return RuntimeEnabledFeatures::FakeNoAllocDirectCallForTestingEnabled();
  }
  bool featurePolicyReportingEnabled() {
    return RuntimeEnabledFeatures::FeaturePolicyReportingEnabled();
  }
  bool fedCmEnabled() {
    return RuntimeEnabledFeatures::FedCmEnabledByRuntimeFlag();
  }
  bool fedCmIdpSignoutEnabled() {
    return RuntimeEnabledFeatures::FedCmIdpSignoutEnabled();
  }
  bool fedCmIframeSupportEnabled() {
    return RuntimeEnabledFeatures::FedCmIframeSupportEnabled();
  }
  bool fedCmMultipleIdentityProvidersEnabled() {
    return RuntimeEnabledFeatures::FedCmMultipleIdentityProvidersEnabled();
  }
  bool fencedFramesEnabled() {
    return RuntimeEnabledFeatures::FencedFramesEnabledByRuntimeFlag();
  }
  bool fetchUploadStreamingEnabled() {
    return RuntimeEnabledFeatures::FetchUploadStreamingEnabled();
  }
  bool fileHandlingEnabled() {
    return RuntimeEnabledFeatures::FileHandlingEnabledByRuntimeFlag();
  }
  bool fileHandlingIconsEnabled() {
    return RuntimeEnabledFeatures::FileHandlingIconsEnabledByRuntimeFlag();
  }
  bool fileSystemEnabled() {
    return RuntimeEnabledFeatures::FileSystemEnabled();
  }
  bool fileSystemAccessEnabled() {
    return RuntimeEnabledFeatures::FileSystemAccessEnabled();
  }
  bool fileSystemAccessAccessHandleEnabled() {
    return RuntimeEnabledFeatures::FileSystemAccessAccessHandleEnabled();
  }
  bool fileSystemAccessAPIExperimentalEnabled() {
    return RuntimeEnabledFeatures::FileSystemAccessAPIExperimentalEnabled();
  }
  bool firstPartySetsEnabled() {
    return RuntimeEnabledFeatures::FirstPartySetsEnabled();
  }
  bool fixedElementsDontOverscrollEnabled() {
    return RuntimeEnabledFeatures::FixedElementsDontOverscrollEnabled();
  }
  bool fledgeEnabled() {
    return RuntimeEnabledFeatures::FledgeEnabledByRuntimeFlag();
  }
  bool focusgroupEnabled() {
    return RuntimeEnabledFeatures::FocusgroupEnabledByRuntimeFlag();
  }
  bool focuslessSpatialNavigationEnabled() {
    return RuntimeEnabledFeatures::FocuslessSpatialNavigationEnabled();
  }
  bool fontAccessEnabled() {
    return RuntimeEnabledFeatures::FontAccessEnabled();
  }
  bool fontPaletteEnabled() {
    return RuntimeEnabledFeatures::FontPaletteEnabled();
  }
  bool fontSrcLocalMatchingEnabled() {
    return RuntimeEnabledFeatures::FontSrcLocalMatchingEnabled();
  }
  bool forcedColorsEnabled() {
    return RuntimeEnabledFeatures::ForcedColorsEnabled();
  }
  bool forcedColorsPreserveParentColorEnabled() {
    return RuntimeEnabledFeatures::ForcedColorsPreserveParentColorEnabled();
  }
  bool forceEagerMeasureMemoryEnabled() {
    return RuntimeEnabledFeatures::ForceEagerMeasureMemoryEnabled();
  }
  bool forceReduceMotionEnabled() {
    return RuntimeEnabledFeatures::ForceReduceMotionEnabled();
  }
  bool forceTallerSelectPopupEnabled() {
    return RuntimeEnabledFeatures::ForceTallerSelectPopupEnabled();
  }
  bool formRelAttributeEnabled() {
    return RuntimeEnabledFeatures::FormRelAttributeEnabled();
  }
  bool fractionalScrollOffsetsEnabled() {
    return RuntimeEnabledFeatures::FractionalScrollOffsetsEnabled();
  }
  bool freezeFramesOnVisibilityEnabled() {
    return RuntimeEnabledFeatures::FreezeFramesOnVisibilityEnabled();
  }
  bool gamepadButtonAxisEventsEnabled() {
    return RuntimeEnabledFeatures::GamepadButtonAxisEventsEnabled();
  }
  bool getDisplayMediaEnabled() {
    return RuntimeEnabledFeatures::GetDisplayMediaEnabled();
  }
  bool getDisplayMediaSetEnabled() {
    return RuntimeEnabledFeatures::GetDisplayMediaSetEnabled();
  }
  bool getDisplayMediaSetAutoSelectAllScreensEnabled() {
    return RuntimeEnabledFeatures::GetDisplayMediaSetAutoSelectAllScreensEnabled();
  }
  bool groupEffectEnabled() {
    return RuntimeEnabledFeatures::GroupEffectEnabled();
  }
  bool handwritingRecognitionEnabled() {
    return RuntimeEnabledFeatures::HandwritingRecognitionEnabled();
  }
  bool hidDeviceForgetEnabled() {
    return RuntimeEnabledFeatures::HidDeviceForgetEnabled();
  }
  bool highlightAPIEnabled() {
    return RuntimeEnabledFeatures::HighlightAPIEnabled();
  }
  bool highlightInheritanceEnabled() {
    return RuntimeEnabledFeatures::HighlightInheritanceEnabled();
  }
  bool highlightOverlayPaintingEnabled() {
    return RuntimeEnabledFeatures::HighlightOverlayPaintingEnabled();
  }
  bool highlightPointerEventsEnabled() {
    return RuntimeEnabledFeatures::HighlightPointerEventsEnabled();
  }
  bool hrefTranslateEnabled() {
    return RuntimeEnabledFeatures::HrefTranslateEnabledByRuntimeFlag();
  }
  bool htmlParamElementUrlSupportEnabled() {
    return RuntimeEnabledFeatures::HTMLParamElementUrlSupportEnabled();
  }
  bool htmlPopupAttributeEnabled() {
    return RuntimeEnabledFeatures::HTMLPopupAttributeEnabled();
  }
  bool htmlSelectMenuElementEnabled() {
    return RuntimeEnabledFeatures::HTMLSelectMenuElementEnabled();
  }
  bool idbBatchGetAllEnabled() {
    return RuntimeEnabledFeatures::IDBBatchGetAllEnabled();
  }
  bool identityInCanMakePaymentEventFeatureEnabled() {
    return RuntimeEnabledFeatures::IdentityInCanMakePaymentEventFeatureEnabled();
  }
  bool idleDetectionEnabled() {
    return RuntimeEnabledFeatures::IdleDetectionEnabled();
  }
  bool implicitRootScrollerEnabled() {
    return RuntimeEnabledFeatures::ImplicitRootScrollerEnabled();
  }
  bool inertAttributeEnabled() {
    return RuntimeEnabledFeatures::InertAttributeEnabled();
  }
  bool infiniteCullRectEnabled() {
    return RuntimeEnabledFeatures::InfiniteCullRectEnabled();
  }
  bool inputMultipleFieldsUIEnabled() {
    return RuntimeEnabledFeatures::InputMultipleFieldsUIEnabled();
  }
  bool installedAppEnabled() {
    return RuntimeEnabledFeatures::InstalledAppEnabled();
  }
  bool keyboardAccessibleTooltipEnabled() {
    return RuntimeEnabledFeatures::KeyboardAccessibleTooltipEnabled();
  }
  bool keyboardFocusableScrollersEnabled() {
    return RuntimeEnabledFeatures::KeyboardFocusableScrollersEnabled();
  }
  bool langAttributeAwareFormControlUIEnabled() {
    return RuntimeEnabledFeatures::LangAttributeAwareFormControlUIEnabled();
  }
  bool layoutNGEnabled() {
    return RuntimeEnabledFeatures::LayoutNGEnabled();
  }
  bool layoutNGBlockFragmentationEnabled() {
    return RuntimeEnabledFeatures::LayoutNGBlockFragmentationEnabled();
  }
  bool layoutNGBlockInInlineEnabled() {
    return RuntimeEnabledFeatures::LayoutNGBlockInInlineEnabled();
  }
  bool layoutNGFlexFragmentationEnabled() {
    return RuntimeEnabledFeatures::LayoutNGFlexFragmentationEnabled();
  }
  bool layoutNGForeignObjectEnabled() {
    return RuntimeEnabledFeatures::LayoutNGForeignObjectEnabled();
  }
  bool layoutNGFrameSetEnabled() {
    return RuntimeEnabledFeatures::LayoutNGFrameSetEnabled();
  }
  bool layoutNGGridFragmentationEnabled() {
    return RuntimeEnabledFeatures::LayoutNGGridFragmentationEnabled();
  }
  bool layoutNGPrintingEnabled() {
    return RuntimeEnabledFeatures::LayoutNGPrintingEnabled();
  }
  bool layoutNGSubgridEnabled() {
    return RuntimeEnabledFeatures::LayoutNGSubgridEnabled();
  }
  bool layoutNGTableFragmentationEnabled() {
    return RuntimeEnabledFeatures::LayoutNGTableFragmentationEnabled();
  }
  bool layoutNGViewEnabled() {
    return RuntimeEnabledFeatures::LayoutNGViewEnabled();
  }
  bool layoutNGVTTCueEnabled() {
    return RuntimeEnabledFeatures::LayoutNGVTTCueEnabled();
  }
  bool lazyFrameLoadingEnabled() {
    return RuntimeEnabledFeatures::LazyFrameLoadingEnabled();
  }
  bool lazyFrameVisibleLoadTimeMetricsEnabled() {
    return RuntimeEnabledFeatures::LazyFrameVisibleLoadTimeMetricsEnabled();
  }
  bool lazyImageLoadingEnabled() {
    return RuntimeEnabledFeatures::LazyImageLoadingEnabled();
  }
  bool lazyImageVisibleLoadTimeMetricsEnabled() {
    return RuntimeEnabledFeatures::LazyImageVisibleLoadTimeMetricsEnabled();
  }
  bool lazyInitializeMediaControlsEnabled() {
    return RuntimeEnabledFeatures::LazyInitializeMediaControlsEnabled();
  }
  bool lcpAnimatedImagesWebExposedEnabled() {
    return RuntimeEnabledFeatures::LCPAnimatedImagesWebExposedEnabled();
  }
  bool legacyWindowsDWriteFontFallbackEnabled() {
    return RuntimeEnabledFeatures::LegacyWindowsDWriteFontFallbackEnabled();
  }
  bool machineLearningCommonEnabled() {
    return RuntimeEnabledFeatures::MachineLearningCommonEnabled();
  }
  bool machineLearningModelLoaderEnabled() {
    return RuntimeEnabledFeatures::MachineLearningModelLoaderEnabled();
  }
  bool machineLearningNeuralNetworkEnabled() {
    return RuntimeEnabledFeatures::MachineLearningNeuralNetworkEnabled();
  }
  bool managedConfigurationEnabled() {
    return RuntimeEnabledFeatures::ManagedConfigurationEnabled();
  }
  bool mathmlCoreEnabled() {
    return RuntimeEnabledFeatures::MathMLCoreEnabled();
  }
  bool measureMemoryEnabled() {
    return RuntimeEnabledFeatures::MeasureMemoryEnabled();
  }
  bool mediaCapabilitiesDynamicRangeEnabled() {
    return RuntimeEnabledFeatures::MediaCapabilitiesDynamicRangeEnabled();
  }
  bool mediaCapabilitiesEncodingInfoEnabled() {
    return RuntimeEnabledFeatures::MediaCapabilitiesEncodingInfoEnabled();
  }
  bool mediaCapabilitiesSpatialAudioEnabled() {
    return RuntimeEnabledFeatures::MediaCapabilitiesSpatialAudioEnabled();
  }
  bool mediaCaptureEnabled() {
    return RuntimeEnabledFeatures::MediaCaptureEnabled();
  }
  bool mediaCastOverlayButtonEnabled() {
    return RuntimeEnabledFeatures::MediaCastOverlayButtonEnabled();
  }
  bool mediaControlsExpandGestureEnabled() {
    return RuntimeEnabledFeatures::MediaControlsExpandGestureEnabled();
  }
  bool mediaControlsOverlayPlayButtonEnabled() {
    return RuntimeEnabledFeatures::MediaControlsOverlayPlayButtonEnabled();
  }
  bool mediaElementVolumeGreaterThanOneEnabled() {
    return RuntimeEnabledFeatures::MediaElementVolumeGreaterThanOneEnabled();
  }
  bool mediaEngagementBypassAutoplayPoliciesEnabled() {
    return RuntimeEnabledFeatures::MediaEngagementBypassAutoplayPoliciesEnabled();
  }
  bool mediaLatencyHintEnabled() {
    return RuntimeEnabledFeatures::MediaLatencyHintEnabled();
  }
  bool mediaQueryNavigationControlsEnabled() {
    return RuntimeEnabledFeatures::MediaQueryNavigationControlsEnabled();
  }
  bool mediaSessionEnabled() {
    return RuntimeEnabledFeatures::MediaSessionEnabled();
  }
  bool mediaSessionWebRTCEnabled() {
    return RuntimeEnabledFeatures::MediaSessionWebRTCEnabled();
  }
  bool mediaSourceExperimentalEnabled() {
    return RuntimeEnabledFeatures::MediaSourceExperimentalEnabled();
  }
  bool mediaSourceExtensionsForWebCodecsEnabled() {
    return RuntimeEnabledFeatures::MediaSourceExtensionsForWebCodecsEnabledByRuntimeFlag();
  }
  bool mediaSourceInWorkersEnabled() {
    return RuntimeEnabledFeatures::MediaSourceInWorkersEnabledByRuntimeFlag();
  }
  bool mediaSourceInWorkersUsingHandleEnabled() {
    return RuntimeEnabledFeatures::MediaSourceInWorkersUsingHandleEnabled();
  }
  bool mediaSourceNewAbortAndDurationEnabled() {
    return RuntimeEnabledFeatures::MediaSourceNewAbortAndDurationEnabled();
  }
  bool mediaSourceStableEnabled() {
    return RuntimeEnabledFeatures::MediaSourceStableEnabled();
  }
  bool mediaStreamTrackInWindowEnabled() {
    return RuntimeEnabledFeatures::MediaStreamTrackInWindowEnabled();
  }
  bool mediaStreamTrackInWorkerEnabled() {
    return RuntimeEnabledFeatures::MediaStreamTrackInWorkerEnabled();
  }
  bool mediaStreamTrackTransferEnabled() {
    return RuntimeEnabledFeatures::MediaStreamTrackTransferEnabled();
  }
  bool middleClickAutoscrollEnabled() {
    return RuntimeEnabledFeatures::MiddleClickAutoscrollEnabled();
  }
  bool mobileLayoutThemeEnabled() {
    return RuntimeEnabledFeatures::MobileLayoutThemeEnabled();
  }
  bool mojoJSEnabled() {
    return RuntimeEnabledFeatures::MojoJSEnabled();
  }
  bool mojoJSTestEnabled() {
    return RuntimeEnabledFeatures::MojoJSTestEnabled();
  }
  bool mouseSubframeNoImplicitCaptureEnabled() {
    return RuntimeEnabledFeatures::MouseSubframeNoImplicitCaptureEnabled();
  }
  bool navigationApiEnabled() {
    return RuntimeEnabledFeatures::NavigationApiEnabled();
  }
  bool navigationIdEnabled() {
    return RuntimeEnabledFeatures::NavigationIdEnabled();
  }
  bool navigatorContentUtilsEnabled() {
    return RuntimeEnabledFeatures::NavigatorContentUtilsEnabled();
  }
  bool netInfoDownlinkMaxEnabled() {
    return RuntimeEnabledFeatures::NetInfoDownlinkMaxEnabled();
  }
  bool neverSlowModeEnabled() {
    return RuntimeEnabledFeatures::NeverSlowModeEnabled();
  }
  bool newFlexboxSizingEnabled() {
    return RuntimeEnabledFeatures::NewFlexboxSizingEnabled();
  }
  bool noIdleEncodingForWebTestsEnabled() {
    return RuntimeEnabledFeatures::NoIdleEncodingForWebTestsEnabled();
  }
  bool notificationConstructorEnabled() {
    return RuntimeEnabledFeatures::NotificationConstructorEnabled();
  }
  bool notificationContentImageEnabled() {
    return RuntimeEnabledFeatures::NotificationContentImageEnabled();
  }
  bool notificationsEnabled() {
    return RuntimeEnabledFeatures::NotificationsEnabled();
  }
  bool notificationTriggersEnabled() {
    return RuntimeEnabledFeatures::NotificationTriggersEnabledByRuntimeFlag();
  }
  bool offMainThreadCSSPaintEnabled() {
    return RuntimeEnabledFeatures::OffMainThreadCSSPaintEnabled();
  }
  bool offscreenCanvasCommitEnabled() {
    return RuntimeEnabledFeatures::OffscreenCanvasCommitEnabled();
  }
  bool offsetParentNewSpecBehaviorEnabled() {
    return RuntimeEnabledFeatures::OffsetParentNewSpecBehaviorEnabled();
  }
  bool onDeviceChangeEnabled() {
    return RuntimeEnabledFeatures::OnDeviceChangeEnabled();
  }
  bool orientationEventEnabled() {
    return RuntimeEnabledFeatures::OrientationEventEnabled();
  }
  bool originIsolationHeaderEnabled() {
    return RuntimeEnabledFeatures::OriginIsolationHeaderEnabled();
  }
  bool originPolicyEnabled() {
    return RuntimeEnabledFeatures::OriginPolicyEnabled();
  }
  bool originTrialsSampleAPIEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPIDependentEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIDependentEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPIDeprecationEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIDeprecationEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPIExpiryGracePeriodEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIExpiryGracePeriodEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPIExpiryGracePeriodThirdPartyEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIExpiryGracePeriodThirdPartyEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPIImpliedEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIImpliedEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPIInvalidOSEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIInvalidOSEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPINavigationEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPINavigationEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPIPersistentExpiryGracePeriodEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIPersistentExpiryGracePeriodEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPIPersistentFeatureEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIPersistentFeatureEnabledByRuntimeFlag();
  }
  bool originTrialsSampleAPIThirdPartyEnabled() {
    return RuntimeEnabledFeatures::OriginTrialsSampleAPIThirdPartyEnabledByRuntimeFlag();
  }
  bool overscrollCustomizationEnabled() {
    return RuntimeEnabledFeatures::OverscrollCustomizationEnabled();
  }
  bool pageFreezeOptInEnabled() {
    return RuntimeEnabledFeatures::PageFreezeOptInEnabledByRuntimeFlag();
  }
  bool pageFreezeOptOutEnabled() {
    return RuntimeEnabledFeatures::PageFreezeOptOutEnabledByRuntimeFlag();
  }
  bool pagePopupEnabled() {
    return RuntimeEnabledFeatures::PagePopupEnabled();
  }
  bool paintUnderInvalidationCheckingEnabled() {
    return RuntimeEnabledFeatures::PaintUnderInvalidationCheckingEnabled();
  }
  bool parakeetEnabled() {
    return RuntimeEnabledFeatures::ParakeetEnabledByRuntimeFlag();
  }
  bool parallelPrimaryFontEnabled() {
    return RuntimeEnabledFeatures::ParallelPrimaryFontEnabled();
  }
  bool parallelTextShapingEnabled() {
    return RuntimeEnabledFeatures::ParallelTextShapingEnabled();
  }
  bool partitionedCookiesEnabled() {
    return RuntimeEnabledFeatures::PartitionedCookiesEnabledByRuntimeFlag();
  }
  bool passwordRevealEnabled() {
    return RuntimeEnabledFeatures::PasswordRevealEnabled();
  }
  bool paymentAppEnabled() {
    return RuntimeEnabledFeatures::PaymentAppEnabled();
  }
  bool paymentMethodChangeEventEnabled() {
    return RuntimeEnabledFeatures::PaymentMethodChangeEventEnabled();
  }
  bool paymentRequestEnabled() {
    return RuntimeEnabledFeatures::PaymentRequestEnabled();
  }
  bool paymentRequestMerchantValidationEventEnabled() {
    return RuntimeEnabledFeatures::PaymentRequestMerchantValidationEventEnabled();
  }
  bool pendingBeaconAPIEnabled() {
    return RuntimeEnabledFeatures::PendingBeaconAPIEnabledByRuntimeFlag();
  }
  bool percentBasedScrollingEnabled() {
    return RuntimeEnabledFeatures::PercentBasedScrollingEnabled();
  }
  bool performanceManagerInstrumentationEnabled() {
    return RuntimeEnabledFeatures::PerformanceManagerInstrumentationEnabled();
  }
  bool periodicBackgroundSyncEnabled() {
    return RuntimeEnabledFeatures::PeriodicBackgroundSyncEnabled();
  }
  bool perMethodCanMakePaymentQuotaEnabled() {
    return RuntimeEnabledFeatures::PerMethodCanMakePaymentQuotaEnabledByRuntimeFlag();
  }
  bool permissionsEnabled() {
    return RuntimeEnabledFeatures::PermissionsEnabled();
  }
  bool permissionsPolicyUnloadEnabled() {
    return RuntimeEnabledFeatures::PermissionsPolicyUnloadEnabled();
  }
  bool permissionsRequestRevokeEnabled() {
    return RuntimeEnabledFeatures::PermissionsRequestRevokeEnabled();
  }
  bool pictureInPictureEnabled() {
    return RuntimeEnabledFeatures::PictureInPictureEnabled();
  }
  bool pictureInPictureAPIEnabled() {
    return RuntimeEnabledFeatures::PictureInPictureAPIEnabled();
  }
  bool pNaClEnabled() {
    return RuntimeEnabledFeatures::PNaClEnabledByRuntimeFlag();
  }
  bool pointerLockOptionsEnabled() {
    return RuntimeEnabledFeatures::PointerLockOptionsEnabledByRuntimeFlag();
  }
  bool portalsEnabled() {
    return RuntimeEnabledFeatures::PortalsEnabledByRuntimeFlag();
  }
  bool preciseMemoryInfoEnabled() {
    return RuntimeEnabledFeatures::PreciseMemoryInfoEnabled();
  }
  bool preferNonCompositedScrollingEnabled() {
    return RuntimeEnabledFeatures::PreferNonCompositedScrollingEnabled();
  }
  bool prefersColorSchemeClientHintHeaderEnabled() {
    return RuntimeEnabledFeatures::PrefersColorSchemeClientHintHeaderEnabled();
  }
  bool prefersContrastEnabled() {
    return RuntimeEnabledFeatures::PrefersContrastEnabled();
  }
  bool prefersReducedDataEnabled() {
    return RuntimeEnabledFeatures::PrefersReducedDataEnabled();
  }
  bool prefixedStorageInfoEnabled() {
    return RuntimeEnabledFeatures::PrefixedStorageInfoEnabled();
  }
  bool prefixedVideoFullscreenEnabled() {
    return RuntimeEnabledFeatures::PrefixedVideoFullscreenEnabled();
  }
  bool prerender2Enabled() {
    return RuntimeEnabledFeatures::Prerender2Enabled();
  }
  bool prerender2RelatedFeaturesEnabled() {
    return RuntimeEnabledFeatures::Prerender2RelatedFeaturesEnabledByRuntimeFlag();
  }
  bool presentationEnabled() {
    return RuntimeEnabledFeatures::PresentationEnabled();
  }
  bool priorityHintsEnabled() {
    return RuntimeEnabledFeatures::PriorityHintsEnabled();
  }
  bool privacySandboxAdsAPISEnabled() {
    return RuntimeEnabledFeatures::PrivacySandboxAdsAPIsEnabledByRuntimeFlag();
  }
  bool privateNetworkAccessNonSecureContextsAllowedEnabled() {
    return RuntimeEnabledFeatures::PrivateNetworkAccessNonSecureContextsAllowedEnabledByRuntimeFlag();
  }
  bool privateNetworkAccessPermissionPromptEnabled() {
    return RuntimeEnabledFeatures::PrivateNetworkAccessPermissionPromptEnabled();
  }
  bool pushMessagingEnabled() {
    return RuntimeEnabledFeatures::PushMessagingEnabled();
  }
  bool pushMessagingSubscriptionChangeEnabled() {
    return RuntimeEnabledFeatures::PushMessagingSubscriptionChangeEnabled();
  }
  bool quickIntensiveWakeUpThrottlingAfterLoadingEnabled() {
    return RuntimeEnabledFeatures::QuickIntensiveWakeUpThrottlingAfterLoadingEnabled();
  }
  bool quotaChangeEnabled() {
    return RuntimeEnabledFeatures::QuotaChangeEnabled();
  }
  bool reduceUserAgentMinorVersionEnabled() {
    return RuntimeEnabledFeatures::ReduceUserAgentMinorVersionEnabled();
  }
  bool reduceUserAgentPlatformOsCpuEnabled() {
    return RuntimeEnabledFeatures::ReduceUserAgentPlatformOsCpuEnabled();
  }
  bool regionCaptureEnabled() {
    return RuntimeEnabledFeatures::RegionCaptureEnabledByRuntimeFlag();
  }
  bool remotePlaybackEnabled() {
    return RuntimeEnabledFeatures::RemotePlaybackEnabled();
  }
  bool remotePlaybackBackendEnabled() {
    return RuntimeEnabledFeatures::RemotePlaybackBackendEnabled();
  }
  bool removeMobileViewportDoubleTapEnabled() {
    return RuntimeEnabledFeatures::RemoveMobileViewportDoubleTapEnabled();
  }
  bool renderBlockingStatusEnabled() {
    return RuntimeEnabledFeatures::RenderBlockingStatusEnabled();
  }
  bool renderPriorityAttributeEnabled() {
    return RuntimeEnabledFeatures::RenderPriorityAttributeEnabled();
  }
  bool restrictBatteryStatusToSecureContextsEnabled() {
    return RuntimeEnabledFeatures::RestrictBatteryStatusToSecureContextsEnabled();
  }
  bool restrictGamepadAccessEnabled() {
    return RuntimeEnabledFeatures::RestrictGamepadAccessEnabled();
  }
  bool rtcAudioJitterBufferMaxPacketsEnabled() {
    return RuntimeEnabledFeatures::RtcAudioJitterBufferMaxPacketsEnabledByRuntimeFlag();
  }
  bool rtcIceTransportExtensionEnabled() {
    return RuntimeEnabledFeatures::RTCIceTransportExtensionEnabledByRuntimeFlag();
  }
  bool rtcInsertableStreamsEnabled() {
    return RuntimeEnabledFeatures::RTCInsertableStreamsEnabledByRuntimeFlag();
  }
  bool rtcQuicTransportEnabled() {
    return RuntimeEnabledFeatures::RTCQuicTransportEnabledByRuntimeFlag();
  }
  bool rtcRtpHeaderExtensionControlEnabled() {
    return RuntimeEnabledFeatures::RTCRtpHeaderExtensionControlEnabled();
  }
  bool rtcStatsRelativePacketArrivalDelayEnabled() {
    return RuntimeEnabledFeatures::RTCStatsRelativePacketArrivalDelayEnabledByRuntimeFlag();
  }
  bool rtcSvcScalabilityModeEnabled() {
    return RuntimeEnabledFeatures::RTCSvcScalabilityModeEnabled();
  }
  bool rtcUnifiedPlanEnabled() {
    return RuntimeEnabledFeatures::RTCUnifiedPlanEnabled();
  }
  bool rtcUnifiedPlanByDefaultEnabled() {
    return RuntimeEnabledFeatures::RTCUnifiedPlanByDefaultEnabled();
  }
  bool sanitizerAPIEnabled() {
    return RuntimeEnabledFeatures::SanitizerAPIEnabled();
  }
  bool sanitizerAPIV0Enabled() {
    return RuntimeEnabledFeatures::SanitizerAPIv0Enabled();
  }
  bool scriptedSpeechRecognitionEnabled() {
    return RuntimeEnabledFeatures::ScriptedSpeechRecognitionEnabled();
  }
  bool scriptedSpeechSynthesisEnabled() {
    return RuntimeEnabledFeatures::ScriptedSpeechSynthesisEnabled();
  }
  bool scriptElementSupportsEnabled() {
    return RuntimeEnabledFeatures::ScriptElementSupportsEnabled();
  }
  bool scrollbarWidthEnabled() {
    return RuntimeEnabledFeatures::ScrollbarWidthEnabled();
  }
  bool scrollCustomizationEnabled() {
    return RuntimeEnabledFeatures::ScrollCustomizationEnabled();
  }
  bool scrollEndEventsEnabled() {
    return RuntimeEnabledFeatures::ScrollEndEventsEnabled();
  }
  bool scrollTimelineEnabled() {
    return RuntimeEnabledFeatures::ScrollTimelineEnabled();
  }
  bool scrollTopLeftInteropEnabled() {
    return RuntimeEnabledFeatures::ScrollTopLeftInteropEnabled();
  }
  bool scrollUpdateOptimizationsEnabled() {
    return RuntimeEnabledFeatures::ScrollUpdateOptimizationsEnabled();
  }
  bool secureContextFixForSharedWorkersEnabled() {
    return RuntimeEnabledFeatures::SecureContextFixForSharedWorkersEnabled();
  }
  bool secureContextFixForWorkersEnabled() {
    return RuntimeEnabledFeatures::SecureContextFixForWorkersEnabled();
  }
  bool securePaymentConfirmationEnabled() {
    return RuntimeEnabledFeatures::SecurePaymentConfirmationEnabled();
  }
  bool securePaymentConfirmationDebugEnabled() {
    return RuntimeEnabledFeatures::SecurePaymentConfirmationDebugEnabled();
  }
  bool securePaymentConfirmationOptOutEnabled() {
    return RuntimeEnabledFeatures::SecurePaymentConfirmationOptOutEnabledByRuntimeFlag();
  }
  bool sendBeaconThrowForBlobWithNonSimpleTypeEnabled() {
    return RuntimeEnabledFeatures::SendBeaconThrowForBlobWithNonSimpleTypeEnabled();
  }
  bool sendFullUserAgentAfterReductionEnabled() {
    return RuntimeEnabledFeatures::SendFullUserAgentAfterReductionEnabledByRuntimeFlag();
  }
  bool sendMouseEventsDisabledFormControlsEnabled() {
    return RuntimeEnabledFeatures::SendMouseEventsDisabledFormControlsEnabled();
  }
  bool sensorExtraClassesEnabled() {
    return RuntimeEnabledFeatures::SensorExtraClassesEnabled();
  }
  bool serialEnabled() {
    return RuntimeEnabledFeatures::SerialEnabled();
  }
  bool serialPortForgetEnabled() {
    return RuntimeEnabledFeatures::SerialPortForgetEnabled();
  }
  bool serviceWorkerClientLifecycleStateEnabled() {
    return RuntimeEnabledFeatures::ServiceWorkerClientLifecycleStateEnabled();
  }
  bool sharedArrayBufferEnabled() {
    return RuntimeEnabledFeatures::SharedArrayBufferEnabled();
  }
  bool sharedArrayBufferOnDesktopEnabled() {
    return RuntimeEnabledFeatures::SharedArrayBufferOnDesktopEnabled();
  }
  bool sharedArrayBufferUnrestrictedAccessAllowedEnabled() {
    return RuntimeEnabledFeatures::SharedArrayBufferUnrestrictedAccessAllowedEnabled();
  }
  bool sharedAutofillEnabled() {
    return RuntimeEnabledFeatures::SharedAutofillEnabled();
  }
  bool sharedStorageAPIEnabled() {
    return RuntimeEnabledFeatures::SharedStorageAPIEnabledByRuntimeFlag();
  }
  bool sharedWorkerEnabled() {
    return RuntimeEnabledFeatures::SharedWorkerEnabled();
  }
  bool signatureBasedIntegrityEnabled() {
    return RuntimeEnabledFeatures::SignatureBasedIntegrityEnabledByRuntimeFlag();
  }
  bool signedExchangeSubresourcePrefetchEnabled() {
    return RuntimeEnabledFeatures::SignedExchangeSubresourcePrefetchEnabledByRuntimeFlag();
  }
  bool siteInitiatedMirroringEnabled() {
    return RuntimeEnabledFeatures::SiteInitiatedMirroringEnabled();
  }
  bool skipAdEnabled() {
    return RuntimeEnabledFeatures::SkipAdEnabledByRuntimeFlag();
  }
  bool skipTouchEventFilterEnabled() {
    return RuntimeEnabledFeatures::SkipTouchEventFilterEnabled();
  }
  bool softNavigationHeuristicsEnabled() {
    return RuntimeEnabledFeatures::SoftNavigationHeuristicsEnabled();
  }
  bool softNavigationHeuristicsLoggingEnabled() {
    return RuntimeEnabledFeatures::SoftNavigationHeuristicsLoggingEnabled();
  }
  bool speculationRulesEnabled() {
    return RuntimeEnabledFeatures::SpeculationRulesEnabledByRuntimeFlag();
  }
  bool speculationRulesPrefetchProxyEnabled() {
    return RuntimeEnabledFeatures::SpeculationRulesPrefetchProxyEnabledByRuntimeFlag();
  }
  bool speculationRulesPrefetchWithSubresourcesEnabled() {
    return RuntimeEnabledFeatures::SpeculationRulesPrefetchWithSubresourcesEnabled();
  }
  bool srcsetMaxDensityEnabled() {
    return RuntimeEnabledFeatures::SrcsetMaxDensityEnabled();
  }
  bool stableBlinkFeaturesEnabled() {
    return RuntimeEnabledFeatures::StableBlinkFeaturesEnabled();
  }
  bool storageAccessAPIEnabled() {
    return RuntimeEnabledFeatures::StorageAccessAPIEnabled();
  }
  bool storageBucketsEnabled() {
    return RuntimeEnabledFeatures::StorageBucketsEnabled();
  }
  bool storageFoundationAPIEnabled() {
    return RuntimeEnabledFeatures::StorageFoundationAPIEnabledByRuntimeFlag();
  }
  bool strictMimeTypesForWorkersEnabled() {
    return RuntimeEnabledFeatures::StrictMimeTypesForWorkersEnabled();
  }
  bool stylusHandwritingEnabled() {
    return RuntimeEnabledFeatures::StylusHandwritingEnabled();
  }
  bool subresourceWebBundlesEnabled() {
    return RuntimeEnabledFeatures::SubresourceWebBundlesEnabled();
  }
  bool svgTextNGEnabled() {
    return RuntimeEnabledFeatures::SVGTextNGEnabled();
  }
  bool synthesizedKeyboardEventsForAccessibilityActionsEnabled() {
    return RuntimeEnabledFeatures::SynthesizedKeyboardEventsForAccessibilityActionsEnabled();
  }
  bool systemAudioConstraintEnabled() {
    return RuntimeEnabledFeatures::SystemAudioConstraintEnabled();
  }
  bool systemWakeLockEnabled() {
    return RuntimeEnabledFeatures::SystemWakeLockEnabled();
  }
  bool testFeatureEnabled() {
    return RuntimeEnabledFeatures::TestFeatureEnabled();
  }
  bool testFeatureDependentEnabled() {
    return RuntimeEnabledFeatures::TestFeatureDependentEnabled();
  }
  bool testFeatureImpliedEnabled() {
    return RuntimeEnabledFeatures::TestFeatureImpliedEnabled();
  }
  bool textDecoratingBoxEnabled() {
    return RuntimeEnabledFeatures::TextDecoratingBoxEnabled();
  }
  bool textDetectorEnabled() {
    return RuntimeEnabledFeatures::TextDetectorEnabled();
  }
  bool textFragmentAPIEnabled() {
    return RuntimeEnabledFeatures::TextFragmentAPIEnabled();
  }
  bool textFragmentIdentifiersEnabled() {
    return RuntimeEnabledFeatures::TextFragmentIdentifiersEnabledByRuntimeFlag();
  }
  bool textFragmentTapOpensContextMenuEnabled() {
    return RuntimeEnabledFeatures::TextFragmentTapOpensContextMenuEnabled();
  }
  bool throttleDisplayNoneAndVisibilityHiddenCrossOriginIframesEnabled() {
    return RuntimeEnabledFeatures::ThrottleDisplayNoneAndVisibilityHiddenCrossOriginIframesEnabled();
  }
  bool timerThrottlingForBackgroundTabsEnabled() {
    return RuntimeEnabledFeatures::TimerThrottlingForBackgroundTabsEnabled();
  }
  bool timeZoneChangeEventEnabled() {
    return RuntimeEnabledFeatures::TimeZoneChangeEventEnabled();
  }
  bool topicsAPIEnabled() {
    return RuntimeEnabledFeatures::TopicsAPIEnabledByRuntimeFlag();
  }
  bool touchActionEffectiveAtPointerDownEnabled() {
    return RuntimeEnabledFeatures::TouchActionEffectiveAtPointerDownEnabled();
  }
  bool touchDragAndContextMenuEnabled() {
    return RuntimeEnabledFeatures::TouchDragAndContextMenuEnabled();
  }
  bool touchDragOnShortPressEnabled() {
    return RuntimeEnabledFeatures::TouchDragOnShortPressEnabled();
  }
  bool touchEventFeatureDetectionEnabled() {
    return RuntimeEnabledFeatures::TouchEventFeatureDetectionEnabledByRuntimeFlag();
  }
  bool translateServiceEnabled() {
    return RuntimeEnabledFeatures::TranslateServiceEnabled();
  }
  bool trustedTypeBeforePolicyCreationEventEnabled() {
    return RuntimeEnabledFeatures::TrustedTypeBeforePolicyCreationEventEnabled();
  }
  bool trustedTypesUseCodeLikeEnabled() {
    return RuntimeEnabledFeatures::TrustedTypesUseCodeLikeEnabled();
  }
  bool trustTokensEnabled() {
    return RuntimeEnabledFeatures::TrustTokensEnabledByRuntimeFlag();
  }
  bool trustTokensAlwaysAllowIssuanceEnabled() {
    return RuntimeEnabledFeatures::TrustTokensAlwaysAllowIssuanceEnabled();
  }
  bool u2FSecurityKeyAPIEnabled() {
    return RuntimeEnabledFeatures::U2FSecurityKeyAPIEnabledByRuntimeFlag();
  }
  bool unclosedFormControlIsInvalidEnabled() {
    return RuntimeEnabledFeatures::UnclosedFormControlIsInvalidEnabled();
  }
  bool unexposedTaskIdsEnabled() {
    return RuntimeEnabledFeatures::UnexposedTaskIdsEnabled();
  }
  bool unrestrictedSharedArrayBufferEnabled() {
    return RuntimeEnabledFeatures::UnrestrictedSharedArrayBufferEnabledByRuntimeFlag();
  }
  bool urlPatternCompareComponentEnabled() {
    return RuntimeEnabledFeatures::URLPatternCompareComponentEnabled();
  }
  bool userActivationSameOriginVisibilityEnabled() {
    return RuntimeEnabledFeatures::UserActivationSameOriginVisibilityEnabled();
  }
  bool userAgentClientHintEnabled() {
    return RuntimeEnabledFeatures::UserAgentClientHintEnabled();
  }
  bool userAgentReductionEnabled() {
    return RuntimeEnabledFeatures::UserAgentReductionEnabledByRuntimeFlag();
  }
  bool v8IdleTasksEnabled() {
    return RuntimeEnabledFeatures::V8IdleTasksEnabled();
  }
  bool variableCOLRV1Enabled() {
    return RuntimeEnabledFeatures::VariableCOLRV1Enabled();
  }
  bool videoAutoFullscreenEnabled() {
    return RuntimeEnabledFeatures::VideoAutoFullscreenEnabled();
  }
  bool videoFullscreenOrientationLockEnabled() {
    return RuntimeEnabledFeatures::VideoFullscreenOrientationLockEnabled();
  }
  bool videoPlaybackQualityEnabled() {
    return RuntimeEnabledFeatures::VideoPlaybackQualityEnabled();
  }
  bool videoRotateToFullscreenEnabled() {
    return RuntimeEnabledFeatures::VideoRotateToFullscreenEnabled();
  }
  bool videoTrackGeneratorEnabled() {
    return RuntimeEnabledFeatures::VideoTrackGeneratorEnabled();
  }
  bool videoTrackGeneratorInWindowEnabled() {
    return RuntimeEnabledFeatures::VideoTrackGeneratorInWindowEnabled();
  }
  bool videoTrackGeneratorInWorkerEnabled() {
    return RuntimeEnabledFeatures::VideoTrackGeneratorInWorkerEnabled();
  }
  bool videoWakeLockOptimisationHiddenMutedEnabled() {
    return RuntimeEnabledFeatures::VideoWakeLockOptimisationHiddenMutedEnabled();
  }
  bool viewportHeightClientHintHeaderEnabled() {
    return RuntimeEnabledFeatures::ViewportHeightClientHintHeaderEnabled();
  }
  bool viewportSegmentsEnabled() {
    return RuntimeEnabledFeatures::ViewportSegmentsEnabled();
  }
  bool virtualKeyboardEnabled() {
    return RuntimeEnabledFeatures::VirtualKeyboardEnabled();
  }
  bool visibilityCollapseColumnEnabled() {
    return RuntimeEnabledFeatures::VisibilityCollapseColumnEnabled();
  }
  bool visibilityStateEntryEnabled() {
    return RuntimeEnabledFeatures::VisibilityStateEntryEnabled();
  }
  bool wakeLockEnabled() {
    return RuntimeEnabledFeatures::WakeLockEnabled();
  }
  bool webAnimationsAPIEnabled() {
    return RuntimeEnabledFeatures::WebAnimationsAPIEnabled();
  }
  bool webAnimationsSVGEnabled() {
    return RuntimeEnabledFeatures::WebAnimationsSVGEnabled();
  }
  bool webAppDarkModeEnabled() {
    return RuntimeEnabledFeatures::WebAppDarkModeEnabledByRuntimeFlag();
  }
  bool webAppLaunchHandlerEnabled() {
    return RuntimeEnabledFeatures::WebAppLaunchHandlerEnabledByRuntimeFlag();
  }
  bool webAppLaunchQueueEnabled() {
    return RuntimeEnabledFeatures::WebAppLaunchQueueEnabledByRuntimeFlag();
  }
  bool webAppManifestIdEnabled() {
    return RuntimeEnabledFeatures::WebAppManifestIdEnabled();
  }
  bool webAppsLockScreenEnabled() {
    return RuntimeEnabledFeatures::WebAppsLockScreenEnabled();
  }
  bool webAppTabStripEnabled() {
    return RuntimeEnabledFeatures::WebAppTabStripEnabled();
  }
  bool webAppTranslationsEnabled() {
    return RuntimeEnabledFeatures::WebAppTranslationsEnabled();
  }
  bool webAppUrlHandlingEnabled() {
    return RuntimeEnabledFeatures::WebAppUrlHandlingEnabledByRuntimeFlag();
  }
  bool webAppWindowControlsOverlayEnabled() {
    return RuntimeEnabledFeatures::WebAppWindowControlsOverlayEnabledByRuntimeFlag();
  }
  bool webAssemblyCSPEnabled() {
    return RuntimeEnabledFeatures::WebAssemblyCSPEnabled();
  }
  bool webAssemblyExceptionsEnabled() {
    return RuntimeEnabledFeatures::WebAssemblyExceptionsEnabledByRuntimeFlag();
  }
  bool webAuthEnabled() {
    return RuntimeEnabledFeatures::WebAuthEnabled();
  }
  bool webAuthAuthenticatorAttachmentEnabled() {
    return RuntimeEnabledFeatures::WebAuthAuthenticatorAttachmentEnabled();
  }
  bool webAuthenticationConditionalUIEnabled() {
    return RuntimeEnabledFeatures::WebAuthenticationConditionalUIEnabled();
  }
  bool webAuthenticationLargeBlobExtensionEnabled() {
    return RuntimeEnabledFeatures::WebAuthenticationLargeBlobExtensionEnabled();
  }
  bool webAuthenticationRemoteDesktopSupportEnabled() {
    return RuntimeEnabledFeatures::WebAuthenticationRemoteDesktopSupportEnabled();
  }
  bool webBluetoothEnabled() {
    return RuntimeEnabledFeatures::WebBluetoothEnabled();
  }
  bool webBluetoothGetDevicesEnabled() {
    return RuntimeEnabledFeatures::WebBluetoothGetDevicesEnabled();
  }
  bool webBluetoothScanningEnabled() {
    return RuntimeEnabledFeatures::WebBluetoothScanningEnabled();
  }
  bool webBluetoothWatchAdvertisementsEnabled() {
    return RuntimeEnabledFeatures::WebBluetoothWatchAdvertisementsEnabled();
  }
  bool webcodecsEnabled() {
    return RuntimeEnabledFeatures::WebCodecsEnabledByRuntimeFlag();
  }
  bool webcodecsDequeueEventEnabled() {
    return RuntimeEnabledFeatures::WebCodecsDequeueEventEnabled();
  }
  bool webglColorManagementEnabled() {
    return RuntimeEnabledFeatures::WebGLColorManagementEnabled();
  }
  bool webglDeveloperExtensionsEnabled() {
    return RuntimeEnabledFeatures::WebGLDeveloperExtensionsEnabled();
  }
  bool webglDraftExtensionsEnabled() {
    return RuntimeEnabledFeatures::WebGLDraftExtensionsEnabled();
  }
  bool webglImageChromiumEnabled() {
    return RuntimeEnabledFeatures::WebGLImageChromiumEnabled();
  }
  bool webgpuEnabled() {
    return RuntimeEnabledFeatures::WebGPUEnabledByRuntimeFlag();
  }
  bool webgpuDeveloperFeaturesEnabled() {
    return RuntimeEnabledFeatures::WebGPUDeveloperFeaturesEnabled();
  }
  bool webgpuImportTextureEnabled() {
    return RuntimeEnabledFeatures::WebGPUImportTextureEnabled();
  }
  bool webHIDEnabled() {
    return RuntimeEnabledFeatures::WebHIDEnabled();
  }
  bool webHIDExclusionFiltersOptionEnabled() {
    return RuntimeEnabledFeatures::WebHIDExclusionFiltersOptionEnabled();
  }
  bool webHIDOnServiceWorkersEnabled() {
    return RuntimeEnabledFeatures::WebHIDOnServiceWorkersEnabled();
  }
  bool webKitScrollbarStylingEnabled() {
    return RuntimeEnabledFeatures::WebKitScrollbarStylingEnabled();
  }
  bool webNFCEnabled() {
    return RuntimeEnabledFeatures::WebNFCEnabled();
  }
  bool webNFCMakeReadOnlyEnabled() {
    return RuntimeEnabledFeatures::WebNFCMakeReadOnlyEnabled();
  }
  bool webOTPEnabled() {
    return RuntimeEnabledFeatures::WebOTPEnabled();
  }
  bool webOTPAssertionFeaturePolicyEnabled() {
    return RuntimeEnabledFeatures::WebOTPAssertionFeaturePolicyEnabled();
  }
  bool webPaymentAPICSPEnabled() {
    return RuntimeEnabledFeatures::WebPaymentAPICSPEnabledByRuntimeFlag();
  }
  bool webShareEnabled() {
    return RuntimeEnabledFeatures::WebShareEnabled();
  }
  bool websocketStreamEnabled() {
    return RuntimeEnabledFeatures::WebSocketStreamEnabled();
  }
  bool webTransportCustomCertificatesEnabled() {
    return RuntimeEnabledFeatures::WebTransportCustomCertificatesEnabledByRuntimeFlag();
  }
  bool webUSBEnabled() {
    return RuntimeEnabledFeatures::WebUSBEnabled();
  }
  bool webUsbDeviceForgetEnabled() {
    return RuntimeEnabledFeatures::WebUsbDeviceForgetEnabled();
  }
  bool webUSBOnDedicatedWorkersEnabled() {
    return RuntimeEnabledFeatures::WebUSBOnDedicatedWorkersEnabled();
  }
  bool webVTTRegionsEnabled() {
    return RuntimeEnabledFeatures::WebVTTRegionsEnabled();
  }
  bool webXREnabled() {
    return RuntimeEnabledFeatures::WebXREnabled();
  }
  bool webXRAnchorsEnabled() {
    return RuntimeEnabledFeatures::WebXRAnchorsEnabled();
  }
  bool webXRARModuleEnabled() {
    return RuntimeEnabledFeatures::WebXRARModuleEnabled();
  }
  bool webXRCameraAccessEnabled() {
    return RuntimeEnabledFeatures::WebXRCameraAccessEnabled();
  }
  bool webXRDepthEnabled() {
    return RuntimeEnabledFeatures::WebXRDepthEnabledByRuntimeFlag();
  }
  bool webXRHandInputEnabled() {
    return RuntimeEnabledFeatures::WebXRHandInputEnabled();
  }
  bool webXRHitTestEnabled() {
    return RuntimeEnabledFeatures::WebXRHitTestEnabled();
  }
  bool webXRHitTestEntityTypesEnabled() {
    return RuntimeEnabledFeatures::WebXRHitTestEntityTypesEnabled();
  }
  bool webXRImageTrackingEnabled() {
    return RuntimeEnabledFeatures::WebXRImageTrackingEnabledByRuntimeFlag();
  }
  bool webXRLightEstimationEnabled() {
    return RuntimeEnabledFeatures::WebXRLightEstimationEnabled();
  }
  bool webXRPlaneDetectionEnabled() {
    return RuntimeEnabledFeatures::WebXRPlaneDetectionEnabledByRuntimeFlag();
  }
  bool webXRViewportScaleEnabled() {
    return RuntimeEnabledFeatures::WebXRViewportScaleEnabled();
  }
  bool wgiGamepadTriggerRumbleEnabled() {
    return RuntimeEnabledFeatures::WGIGamepadTriggerRumbleEnabled();
  }
  bool windowOpenNewPopupBehaviorEnabled() {
    return RuntimeEnabledFeatures::WindowOpenNewPopupBehaviorEnabled();
  }
  bool windowPlacementEnabled() {
    return RuntimeEnabledFeatures::WindowPlacementEnabled();
  }
  bool windowPlacementEnhancedScreenLabelsEnabled() {
    return RuntimeEnabledFeatures::WindowPlacementEnhancedScreenLabelsEnabled();
  }
  bool windowPlacementFullscreenOnScreensChangeEnabled() {
    return RuntimeEnabledFeatures::WindowPlacementFullscreenOnScreensChangeEnabled();
  }
  bool xsltEnabled() {
    return RuntimeEnabledFeatures::XSLTEnabled();
  }
  bool zeroCopyTabCaptureEnabled() {
    return RuntimeEnabledFeatures::ZeroCopyTabCaptureEnabled();
  }
};

}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_TESTING_INTERNAL_RUNTIME_FLAGS_H_
