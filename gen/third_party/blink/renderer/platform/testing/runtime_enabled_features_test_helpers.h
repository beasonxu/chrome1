// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/runtime_enabled_features_test_helpers.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/platform/runtime_enabled_features.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_PLATFORM_RUNTIME_ENABLED_FEATURES_TEST_HELPERS_H_
#define THIRD_PARTY_BLINK_RENDERER_PLATFORM_RUNTIME_ENABLED_FEATURES_TEST_HELPERS_H_

#include "base/check_op.h"
#include "third_party/blink/renderer/platform/runtime_enabled_features.h"

namespace blink {

// Don't use this class directly. Use Scoped*ForTest instead.
class RuntimeEnabledFeaturesTestHelpers {
 public:
  template <bool& data_member>
  class ScopedRuntimeEnabledFeature {
   public:
    ScopedRuntimeEnabledFeature(bool enabled)
        : enabled_(enabled), original_(data_member) { data_member = enabled; }
    ~ScopedRuntimeEnabledFeature() {
      CHECK_EQ(enabled_, data_member);
      data_member = original_;
    }
   private:
    bool enabled_;
    bool original_;
  };

  using ScopedAbortSignalThrowIfAborted = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_abort_signal_throw_if_aborted_enabled_>;
  using ScopedAbortSignalTimeout = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_abort_signal_timeout_enabled_>;
  using ScopedAccelerated2dCanvas = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_accelerated_2d_canvas_enabled_>;
  using ScopedAcceleratedSmallCanvases = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_accelerated_small_canvases_enabled_>;
  using ScopedAccessibilityAriaTouchPassthrough = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_accessibility_aria_touch_passthrough_enabled_>;
  using ScopedAccessibilityAriaVirtualContent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_accessibility_aria_virtual_content_enabled_>;
  using ScopedAccessibilityExposeDisplayNone = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_accessibility_expose_display_none_enabled_>;
  using ScopedAccessibilityExposeHTMLElement = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_accessibility_expose_html_element_enabled_>;
  using ScopedAccessibilityExposeIgnoredNodes = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_accessibility_expose_ignored_nodes_enabled_>;
  using ScopedAccessibilityObjectModel = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_accessibility_object_model_enabled_>;
  using ScopedAccessibilityPageZoom = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_accessibility_page_zoom_enabled_>;
  using ScopedAccessibilityUseAXPositionForDocumentMarkers = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_accessibility_use_ax_position_for_document_markers_enabled_>;
  using ScopedAddressSpace = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_address_space_enabled_>;
  using ScopedAdInterestGroupAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_ad_interest_group_api_enabled_>;
  using ScopedAdTagging = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_ad_tagging_enabled_>;
  using ScopedAllowContentInitiatedDataUrlNavigations = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_allow_content_initiated_data_url_navigations_enabled_>;
  using ScopedAndroidDownloadableFontsMatching = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_android_downloadable_fonts_matching_enabled_>;
  using ScopedAnimationWorklet = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_animation_worklet_enabled_>;
  using ScopedAnonymousIframe = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_anonymous_iframe_enabled_>;
  using ScopedAOMAriaRelationshipProperties = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_aom_aria_relationship_properties_enabled_>;
  using ScopedAriaTouchPassthrough = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_aria_touch_passthrough_enabled_>;
  using ScopedAttributionReporting = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_attribution_reporting_enabled_>;
  using ScopedAudioOutputDevices = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_audio_output_devices_enabled_>;
  using ScopedAudioVideoTracks = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_audio_video_tracks_enabled_>;
  using ScopedAutoDarkMode = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_auto_dark_mode_enabled_>;
  using ScopedAutoExpandDetailsElement = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_auto_expand_details_element_enabled_>;
  using ScopedAutofillShadowDOM = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_autofill_shadow_dom_enabled_>;
  using ScopedAutomationControlled = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_automation_controlled_enabled_>;
  using ScopedAutoPictureInPicture = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_auto_picture_in_picture_enabled_>;
  using ScopedAutoplayIgnoresWebAudio = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_autoplay_ignores_web_audio_enabled_>;
  using ScopedBackfaceVisibilityInterop = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_backface_visibility_interop_enabled_>;
  using ScopedBackForwardCache = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_back_forward_cache_enabled_>;
  using ScopedBackForwardCacheExperimentHTTPHeader = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_back_forward_cache_experiment_http_header_enabled_>;
  using ScopedBackgroundFetch = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_background_fetch_enabled_>;
  using ScopedBarcodeDetector = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_barcode_detector_enabled_>;
  using ScopedBatchFetchRequests = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_batch_fetch_requests_enabled_>;
  using ScopedBeforeMatchEvent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_before_match_event_enabled_>;
  using ScopedBidiCaretAffinity = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_bidi_caret_affinity_enabled_>;
  using ScopedBlinkExtensionChromeOS = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_blink_extension_chrome_os_enabled_>;
  using ScopedBlinkExtensionChromeOSHID = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_blink_extension_chrome_oshid_enabled_>;
  using ScopedBlinkExtensionChromeOSWindowManagement = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_blink_extension_chrome_os_window_management_enabled_>;
  using ScopedBlinkRuntimeCallStats = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_blink_runtime_call_stats_enabled_>;
  using ScopedBlockingAttribute = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_blocking_attribute_enabled_>;
  using ScopedBlockingFocusWithoutUserActivation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_blocking_focus_without_user_activation_enabled_>;
  using ScopedBrowserVerifiedUserActivationKeyboard = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_browser_verified_user_activation_keyboard_enabled_>;
  using ScopedBrowserVerifiedUserActivationMouse = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_browser_verified_user_activation_mouse_enabled_>;
  using ScopedCacheStorageCodeCacheHint = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_cache_storage_code_cache_hint_enabled_>;
  using ScopedCanvas2dImageChromium = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_canvas_2d_image_chromium_enabled_>;
  using ScopedCanvas2dLayers = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_canvas_2d_layers_enabled_>;
  using ScopedCanvas2dScrollPathIntoView = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_canvas_2d_scroll_path_into_view_enabled_>;
  using ScopedCanvasColorManagementV2 = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_canvas_color_management_v_2_enabled_>;
  using ScopedCanvasFormattedText = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_canvas_formatted_text_enabled_>;
  using ScopedCanvasHDR = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_canvas_hdr_enabled_>;
  using ScopedCanvasImageSmoothing = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_canvas_image_smoothing_enabled_>;
  using ScopedCapabilityDelegationFullscreenRequest = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_capability_delegation_fullscreen_request_enabled_>;
  using ScopedCaptureHandle = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_capture_handle_enabled_>;
  using ScopedcheckVisibility = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_check_visibility_enabled_>;
  using ScopedClickPointerEvent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_click_pointer_event_enabled_>;
  using ScopedClickRetargetting = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_click_retargetting_enabled_>;
  using ScopedClientHintsMetaEquivDelegateCH = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_client_hints_meta_equiv_delegate_ch_enabled_>;
  using ScopedClientHintsMetaHTTPEquivAcceptCH = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_client_hints_meta_http_equiv_accept_ch_enabled_>;
  using ScopedClientHintThirdPartyDelegation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_client_hint_third_party_delegation_enabled_>;
  using ScopedClipboardCustomFormats = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_clipboard_custom_formats_enabled_>;
  using ScopedClipboardSvg = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_clipboard_svg_enabled_>;
  using ScopedClipboardUnsanitizedContent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_clipboard_unsanitized_content_enabled_>;
  using ScopedCloseWatcher = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_close_watcher_enabled_>;
  using ScopedCLSScrollAnchoring = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_cls_scroll_anchoring_enabled_>;
  using ScopedCoepReflection = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_coep_reflection_enabled_>;
  using ScopedCompositeBGColorAnimation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_composite_bg_color_animation_enabled_>;
  using ScopedCompositeBoxShadowAnimation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_composite_box_shadow_animation_enabled_>;
  using ScopedCompositeClipPathAnimation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_composite_clip_path_animation_enabled_>;
  using ScopedCompositedSelectionUpdate = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_composited_selection_update_enabled_>;
  using ScopedCompositeRelativeKeyframes = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_composite_relative_keyframes_enabled_>;
  using ScopedCompositeVideoElement = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_composite_video_element_enabled_>;
  using ScopedComputedAccessibilityInfo = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_computed_accessibility_info_enabled_>;
  using ScopedComputePressure = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_compute_pressure_enabled_>;
  using ScopedConditionalFocus = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_conditional_focus_enabled_>;
  using ScopedConsolidatedMovementXY = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_consolidated_movement_xy_enabled_>;
  using ScopedContactsManager = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_contacts_manager_enabled_>;
  using ScopedContactsManagerExtraProperties = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_contacts_manager_extra_properties_enabled_>;
  using ScopedContentIndex = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_content_index_enabled_>;
  using ScopedContentVisibilityAutoStateChangedEvent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_content_visibility_auto_state_changed_event_enabled_>;
  using ScopedContextMenu = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_context_menu_enabled_>;
  using ScopedCooperativeScheduling = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_cooperative_scheduling_enabled_>;
  using ScopedCorsRFC1918 = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_cors_rfc_1918_enabled_>;
  using ScopedCrossOriginOpenerPolicyReporting = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_cross_origin_opener_policy_reporting_enabled_>;
  using ScopedCSS3Text = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_3_text_enabled_>;
  using ScopedCSSAnchorPositioning = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_anchor_positioning_enabled_>;
  using ScopedCSSAtRuleCounterStyleImageSymbols = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_at_rule_counter_style_image_symbols_enabled_>;
  using ScopedCSSAtRuleCounterStyleSpeakAsDescriptor = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_at_rule_counter_style_speak_as_descriptor_enabled_>;
  using ScopedCSSCalcSimplificationAndSerialization = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_calc_simplification_and_serialization_enabled_>;
  using ScopedCSSCaseSensitiveSelector = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_case_sensitive_selector_enabled_>;
  using ScopedCSSColorContrast = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_color_contrast_enabled_>;
  using ScopedCSSColorTypedOM = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_color_typed_om_enabled_>;
  using ScopedCSSContainerQueries = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_container_queries_enabled_>;
  using ScopedCSSContainerRelativeUnits = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_container_relative_units_enabled_>;
  using ScopedCSSContainerSkipStyleRecalc = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_container_skip_style_recalc_enabled_>;
  using ScopedCSSContainSize1D = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_contain_size_1d_enabled_>;
  using ScopedCSSDynamicRangeMediaQueries = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_dynamic_range_media_queries_enabled_>;
  using ScopedCSSEnumeratedCustomProperties = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_enumerated_custom_properties_enabled_>;
  using ScopedCSSFocusVisible = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_focus_visible_enabled_>;
  using ScopedCSSFoldables = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_foldables_enabled_>;
  using ScopedCSSFontFaceAutoVariableRange = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_font_face_auto_variable_range_enabled_>;
  using ScopedCSSFontFamilyMath = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_font_family_math_enabled_>;
  using ScopedCSSFontSizeAdjust = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_font_size_adjust_enabled_>;
  using ScopedCSSGridTemplatePropertyInterpolation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_grid_template_property_interpolation_enabled_>;
  using ScopedCSSHexAlphaColor = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_hex_alpha_color_enabled_>;
  using ScopedCSSIcUnit = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_ic_unit_enabled_>;
  using ScopedCSSIndependentTransformProperties = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_independent_transform_properties_enabled_>;
  using ScopedCSSLayoutAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_layout_api_enabled_>;
  using ScopedCSSLogical = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_logical_enabled_>;
  using ScopedCSSLogicalOverflow = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_logical_overflow_enabled_>;
  using ScopedCSSMarkerNestedPseudoElement = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_marker_nested_pseudo_element_enabled_>;
  using ScopedCSSMathDepth = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_math_depth_enabled_>;
  using ScopedCSSMathShift = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_math_shift_enabled_>;
  using ScopedCSSMathStyle = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_math_style_enabled_>;
  using ScopedCSSMathVariant = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_math_variant_enabled_>;
  using ScopedCSSMediaQueries4 = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_media_queries_4_enabled_>;
  using ScopedCSSMixBlendModePlusLighter = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_mix_blend_mode_plus_lighter_enabled_>;
  using ScopedCSSModules = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_modules_enabled_>;
  using ScopedCSSObjectViewBox = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_object_view_box_enabled_>;
  using ScopedCSSOffsetPathRay = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_offset_path_ray_enabled_>;
  using ScopedCSSOffsetPathRayContain = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_offset_path_ray_contain_enabled_>;
  using ScopedCSSOffsetPositionAnchor = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_offset_position_anchor_enabled_>;
  using ScopedCSSOverflowForReplacedElements = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_overflow_for_replaced_elements_enabled_>;
  using ScopedCSSPaintAPIArguments = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_paint_api_arguments_enabled_>;
  using ScopedCSSPictureInPicture = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_picture_in_picture_enabled_>;
  using ScopedCSSPositionStickyStaticScrollPosition = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_position_sticky_static_scroll_position_enabled_>;
  using ScopedCSSPseudoAutofill = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_pseudo_autofill_enabled_>;
  using ScopedCSSPseudoDir = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_pseudo_dir_enabled_>;
  using ScopedCSSPseudoHas = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_pseudo_has_enabled_>;
  using ScopedCSSPseudoPlayingPaused = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_pseudo_playing_paused_enabled_>;
  using ScopedCSSScope = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_scope_enabled_>;
  using ScopedCSSScrollbars = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_scrollbars_enabled_>;
  using ScopedCSSScrollTimeline = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_scroll_timeline_enabled_>;
  using ScopedCSSSelectorFragmentAnchor = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_selector_fragment_anchor_enabled_>;
  using ScopedCSSSnapSize = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_snap_size_enabled_>;
  using ScopedCSSSpellingGrammarErrors = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_spelling_grammar_errors_enabled_>;
  using ScopedCSSStyleQueries = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_style_queries_enabled_>;
  using ScopedCSSToggles = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_toggles_enabled_>;
  using ScopedCSSTrigonometricFunctions = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_trigonometric_functions_enabled_>;
  using ScopedCSSVariables2ImageValues = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_variables_2_image_values_enabled_>;
  using ScopedCSSVariables2TransformValues = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_variables_2_transform_values_enabled_>;
  using ScopedCSSVideoDynamicRangeMediaQueries = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_video_dynamic_range_media_queries_enabled_>;
  using ScopedCSSViewportUnits4 = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_css_viewport_units_4_enabled_>;
  using ScopedCustomElementDefaultStyle = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_custom_element_default_style_enabled_>;
  using ScopedDatabase = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_database_enabled_>;
  using ScopedDecodeJpeg420ImagesToYUV = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_decode_jpeg_420_images_to_yuv_enabled_>;
  using ScopedDecodeLossyWebPImagesToYUV = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_decode_lossy_web_p_images_to_yuv_enabled_>;
  using ScopedDeferredShaping = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_deferred_shaping_enabled_>;
  using ScopedDeflateRawCompressionFormat = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_deflate_raw_compression_format_enabled_>;
  using ScopedDelegatedInkTrails = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_delegated_ink_trails_enabled_>;
  using ScopedDesktopCaptureDisableLocalEchoControl = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_desktop_capture_disable_local_echo_control_enabled_>;
  using ScopedDesktopPWAsSubApps = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_desktop_pw_as_sub_apps_enabled_>;
  using ScopedDeviceAttributes = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_device_attributes_enabled_>;
  using ScopedDeviceOrientationRequestPermission = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_device_orientation_request_permission_enabled_>;
  using ScopedDevicePosture = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_device_posture_enabled_>;
  using ScopedDialogFocusNewSpecBehavior = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_dialog_focus_new_spec_behavior_enabled_>;
  using ScopedDigitalGoods = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_digital_goods_enabled_>;
  using ScopedDigitalGoodsV2_1 = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_digital_goods_v_2_1_enabled_>;
  using ScopedDirectSockets = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_direct_sockets_enabled_>;
  using ScopedDisableDifferentOriginSubframeDialogSuppression = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_disable_different_origin_subframe_dialog_suppression_enabled_>;
  using ScopedDisableHardwareNoiseSuppression = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_disable_hardware_noise_suppression_enabled_>;
  using ScopedDisplayCapturePermissionsPolicy = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_display_capture_permissions_policy_enabled_>;
  using ScopedDisplayCutoutAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_display_cutout_api_enabled_>;
  using ScopedDocumentCookie = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_document_cookie_enabled_>;
  using ScopedDocumentDomain = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_document_domain_enabled_>;
  using ScopedDocumentPictureInPictureAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_document_picture_in_picture_api_enabled_>;
  using ScopedDocumentPolicy = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_document_policy_enabled_>;
  using ScopedDocumentPolicyDocumentDomain = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_document_policy_document_domain_enabled_>;
  using ScopedDocumentPolicyNegotiation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_document_policy_negotiation_enabled_>;
  using ScopedDocumentPolicySyncXHR = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_document_policy_sync_xhr_enabled_>;
  using ScopedDocumentTransition = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_document_transition_enabled_>;
  using ScopedDocumentWrite = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_document_write_enabled_>;
  using ScopedEarlyHintsPreloadForNavigationOptIn = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_early_hints_preload_for_navigation_opt_in_enabled_>;
  using ScopedEditContext = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_edit_context_enabled_>;
  using ScopedElementSuperRareData = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_element_super_rare_data_enabled_>;
  using ScopedEventPath = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_event_path_enabled_>;
  using ScopedExperimentalContentSecurityPolicyFeatures = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_experimental_content_security_policy_features_enabled_>;
  using ScopedExperimentalJSProfilerMarkers = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_experimental_js_profiler_markers_enabled_>;
  using ScopedExperimentalPolicies = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_experimental_policies_enabled_>;
  using ScopedExperimentalWebSnapshots = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_experimental_web_snapshots_enabled_>;
  using ScopedExtendedTextMetrics = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_extended_text_metrics_enabled_>;
  using ScopedExtraWebGLVideoTextureMetadata = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_extra_webgl_video_texture_metadata_enabled_>;
  using ScopedEyeDropperAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_eye_dropper_api_enabled_>;
  using ScopedFaceDetector = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_face_detector_enabled_>;
  using ScopedFakeNoAllocDirectCallForTesting = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_fake_no_alloc_direct_call_for_testing_enabled_>;
  using ScopedFeaturePolicyReporting = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_feature_policy_reporting_enabled_>;
  using ScopedFedCm = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_fed_cm_enabled_>;
  using ScopedFedCmIdpSignout = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_fed_cm_idp_signout_enabled_>;
  using ScopedFedCmIframeSupport = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_fed_cm_iframe_support_enabled_>;
  using ScopedFedCmMultipleIdentityProviders = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_fed_cm_multiple_identity_providers_enabled_>;
  using ScopedFencedFrames = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_fenced_frames_enabled_>;
  using ScopedFetchUploadStreaming = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_fetch_upload_streaming_enabled_>;
  using ScopedFileHandling = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_file_handling_enabled_>;
  using ScopedFileHandlingIcons = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_file_handling_icons_enabled_>;
  using ScopedFileSystem = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_file_system_enabled_>;
  using ScopedFileSystemAccess = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_file_system_access_enabled_>;
  using ScopedFileSystemAccessAccessHandle = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_file_system_access_access_handle_enabled_>;
  using ScopedFileSystemAccessAPIExperimental = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_file_system_access_api_experimental_enabled_>;
  using ScopedFirstPartySets = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_first_party_sets_enabled_>;
  using ScopedFixedElementsDontOverscroll = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_fixed_elements_dont_overscroll_enabled_>;
  using ScopedFledge = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_fledge_enabled_>;
  using ScopedFocusgroup = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_focusgroup_enabled_>;
  using ScopedFocuslessSpatialNavigation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_focusless_spatial_navigation_enabled_>;
  using ScopedFontAccess = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_font_access_enabled_>;
  using ScopedFontPalette = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_font_palette_enabled_>;
  using ScopedFontSrcLocalMatching = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_font_src_local_matching_enabled_>;
  using ScopedForcedColors = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_forced_colors_enabled_>;
  using ScopedForcedColorsPreserveParentColor = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_forced_colors_preserve_parent_color_enabled_>;
  using ScopedForceEagerMeasureMemory = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_force_eager_measure_memory_enabled_>;
  using ScopedForceReduceMotion = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_force_reduce_motion_enabled_>;
  using ScopedForceTallerSelectPopup = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_force_taller_select_popup_enabled_>;
  using ScopedFormRelAttribute = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_form_rel_attribute_enabled_>;
  using ScopedFractionalScrollOffsets = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_fractional_scroll_offsets_enabled_>;
  using ScopedFreezeFramesOnVisibility = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_freeze_frames_on_visibility_enabled_>;
  using ScopedGamepadButtonAxisEvents = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_gamepad_button_axis_events_enabled_>;
  using ScopedGetDisplayMedia = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_get_display_media_enabled_>;
  using ScopedGetDisplayMediaSet = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_get_display_media_set_enabled_>;
  using ScopedGetDisplayMediaSetAutoSelectAllScreens = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_get_display_media_set_auto_select_all_screens_enabled_>;
  using ScopedGroupEffect = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_group_effect_enabled_>;
  using ScopedHandwritingRecognition = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_handwriting_recognition_enabled_>;
  using ScopedHidDeviceForget = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_hid_device_forget_enabled_>;
  using ScopedHighlightAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_highlight_api_enabled_>;
  using ScopedHighlightInheritance = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_highlight_inheritance_enabled_>;
  using ScopedHighlightOverlayPainting = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_highlight_overlay_painting_enabled_>;
  using ScopedHighlightPointerEvents = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_highlight_pointer_events_enabled_>;
  using ScopedHrefTranslate = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_href_translate_enabled_>;
  using ScopedHTMLParamElementUrlSupport = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_html_param_element_url_support_enabled_>;
  using ScopedHTMLPopupAttribute = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_html_popup_attribute_enabled_>;
  using ScopedHTMLSelectMenuElement = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_html_select_menu_element_enabled_>;
  using ScopedIDBBatchGetAll = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_idb_batch_get_all_enabled_>;
  using ScopedIdentityInCanMakePaymentEventFeature = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_identity_in_can_make_payment_event_feature_enabled_>;
  using ScopedIdleDetection = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_idle_detection_enabled_>;
  using ScopedImplicitRootScroller = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_implicit_root_scroller_enabled_>;
  using ScopedInertAttribute = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_inert_attribute_enabled_>;
  using ScopedInfiniteCullRect = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_infinite_cull_rect_enabled_>;
  using ScopedInputMultipleFieldsUI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_input_multiple_fields_ui_enabled_>;
  using ScopedInstalledApp = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_installed_app_enabled_>;
  using ScopedKeyboardAccessibleTooltip = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_keyboard_accessible_tooltip_enabled_>;
  using ScopedKeyboardFocusableScrollers = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_keyboard_focusable_scrollers_enabled_>;
  using ScopedLangAttributeAwareFormControlUI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_lang_attribute_aware_form_control_ui_enabled_>;
  using ScopedLayoutNG = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_layout_ng_enabled_>;
  using ScopedLayoutNGBlockFragmentation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_layout_ng_block_fragmentation_enabled_>;
  using ScopedLayoutNGBlockInInline = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_layout_ng_block_in_inline_enabled_>;
  using ScopedLayoutNGFlexFragmentation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_layout_ng_flex_fragmentation_enabled_>;
  using ScopedLayoutNGForeignObject = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_layout_ng_foreign_object_enabled_>;
  using ScopedLayoutNGFrameSet = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_layout_ng_frame_set_enabled_>;
  using ScopedLayoutNGGridFragmentation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_layout_ng_grid_fragmentation_enabled_>;
  using ScopedLayoutNGPrinting = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_layout_ng_printing_enabled_>;
  using ScopedLayoutNGSubgrid = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_layout_ng_subgrid_enabled_>;
  using ScopedLayoutNGTableFragmentation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_layout_ng_table_fragmentation_enabled_>;
  using ScopedLayoutNGView = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_layout_ng_view_enabled_>;
  using ScopedLayoutNGVTTCue = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_layout_ngvtt_cue_enabled_>;
  using ScopedLazyFrameLoading = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_lazy_frame_loading_enabled_>;
  using ScopedLazyFrameVisibleLoadTimeMetrics = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_lazy_frame_visible_load_time_metrics_enabled_>;
  using ScopedLazyImageLoading = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_lazy_image_loading_enabled_>;
  using ScopedLazyImageVisibleLoadTimeMetrics = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_lazy_image_visible_load_time_metrics_enabled_>;
  using ScopedLazyInitializeMediaControls = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_lazy_initialize_media_controls_enabled_>;
  using ScopedLCPAnimatedImagesWebExposed = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_lcp_animated_images_web_exposed_enabled_>;
  using ScopedLegacyWindowsDWriteFontFallback = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_legacy_windows_d_write_font_fallback_enabled_>;
  using ScopedMachineLearningCommon = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_machine_learning_common_enabled_>;
  using ScopedMachineLearningModelLoader = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_machine_learning_model_loader_enabled_>;
  using ScopedMachineLearningNeuralNetwork = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_machine_learning_neural_network_enabled_>;
  using ScopedManagedConfiguration = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_managed_configuration_enabled_>;
  using ScopedMathMLCore = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_mathml_core_enabled_>;
  using ScopedMeasureMemory = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_measure_memory_enabled_>;
  using ScopedMediaCapabilitiesDynamicRange = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_capabilities_dynamic_range_enabled_>;
  using ScopedMediaCapabilitiesEncodingInfo = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_capabilities_encoding_info_enabled_>;
  using ScopedMediaCapabilitiesSpatialAudio = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_capabilities_spatial_audio_enabled_>;
  using ScopedMediaCapture = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_capture_enabled_>;
  using ScopedMediaCastOverlayButton = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_cast_overlay_button_enabled_>;
  using ScopedMediaControlsExpandGesture = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_controls_expand_gesture_enabled_>;
  using ScopedMediaControlsOverlayPlayButton = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_controls_overlay_play_button_enabled_>;
  using ScopedMediaElementVolumeGreaterThanOne = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_element_volume_greater_than_one_enabled_>;
  using ScopedMediaEngagementBypassAutoplayPolicies = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_engagement_bypass_autoplay_policies_enabled_>;
  using ScopedMediaLatencyHint = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_latency_hint_enabled_>;
  using ScopedMediaQueryNavigationControls = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_query_navigation_controls_enabled_>;
  using ScopedMediaSession = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_session_enabled_>;
  using ScopedMediaSessionWebRTC = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_session_web_rtc_enabled_>;
  using ScopedMediaSourceExperimental = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_source_experimental_enabled_>;
  using ScopedMediaSourceExtensionsForWebCodecs = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_source_extensions_for_webcodecs_enabled_>;
  using ScopedMediaSourceInWorkers = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_source_in_workers_enabled_>;
  using ScopedMediaSourceInWorkersUsingHandle = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_source_in_workers_using_handle_enabled_>;
  using ScopedMediaSourceNewAbortAndDuration = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_source_new_abort_and_duration_enabled_>;
  using ScopedMediaSourceStable = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_source_stable_enabled_>;
  using ScopedMediaStreamTrackInWindow = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_stream_track_in_window_enabled_>;
  using ScopedMediaStreamTrackInWorker = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_stream_track_in_worker_enabled_>;
  using ScopedMediaStreamTrackTransfer = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_media_stream_track_transfer_enabled_>;
  using ScopedMiddleClickAutoscroll = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_middle_click_autoscroll_enabled_>;
  using ScopedMobileLayoutTheme = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_mobile_layout_theme_enabled_>;
  using ScopedMojoJS = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_mojo_js_enabled_>;
  using ScopedMojoJSTest = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_mojo_js_test_enabled_>;
  using ScopedMouseSubframeNoImplicitCapture = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_mouse_subframe_no_implicit_capture_enabled_>;
  using ScopedNavigationApi = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_navigation_api_enabled_>;
  using ScopedNavigationId = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_navigation_id_enabled_>;
  using ScopedNavigatorContentUtils = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_navigator_content_utils_enabled_>;
  using ScopedNetInfoDownlinkMax = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_net_info_downlink_max_enabled_>;
  using ScopedNeverSlowMode = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_never_slow_mode_enabled_>;
  using ScopedNewFlexboxSizing = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_new_flexbox_sizing_enabled_>;
  using ScopedNoIdleEncodingForWebTests = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_no_idle_encoding_for_web_tests_enabled_>;
  using ScopedNotificationConstructor = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_notification_constructor_enabled_>;
  using ScopedNotificationContentImage = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_notification_content_image_enabled_>;
  using ScopedNotifications = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_notifications_enabled_>;
  using ScopedNotificationTriggers = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_notification_triggers_enabled_>;
  using ScopedOffMainThreadCSSPaint = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_off_main_thread_css_paint_enabled_>;
  using ScopedOffscreenCanvasCommit = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_offscreen_canvas_commit_enabled_>;
  using ScopedOffsetParentNewSpecBehavior = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_offset_parent_new_spec_behavior_enabled_>;
  using ScopedOnDeviceChange = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_on_device_change_enabled_>;
  using ScopedOrientationEvent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_orientation_event_enabled_>;
  using ScopedOriginIsolationHeader = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_origin_isolation_header_enabled_>;
  using ScopedOriginPolicy = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_origin_policy_enabled_>;
  using ScopedOriginTrialsSampleAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_origin_trials_sample_api_enabled_>;
  using ScopedOriginTrialsSampleAPIDependent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_origin_trials_sample_api_dependent_enabled_>;
  using ScopedOriginTrialsSampleAPIDeprecation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_origin_trials_sample_api_deprecation_enabled_>;
  using ScopedOriginTrialsSampleAPIExpiryGracePeriod = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_origin_trials_sample_api_expiry_grace_period_enabled_>;
  using ScopedOriginTrialsSampleAPIExpiryGracePeriodThirdParty = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_origin_trials_sample_api_expiry_grace_period_third_party_enabled_>;
  using ScopedOriginTrialsSampleAPIImplied = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_origin_trials_sample_api_implied_enabled_>;
  using ScopedOriginTrialsSampleAPIInvalidOS = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_origin_trials_sample_api_invalid_os_enabled_>;
  using ScopedOriginTrialsSampleAPINavigation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_origin_trials_sample_api_navigation_enabled_>;
  using ScopedOriginTrialsSampleAPIPersistentExpiryGracePeriod = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_origin_trials_sample_api_persistent_expiry_grace_period_enabled_>;
  using ScopedOriginTrialsSampleAPIPersistentFeature = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_origin_trials_sample_api_persistent_feature_enabled_>;
  using ScopedOriginTrialsSampleAPIThirdParty = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_origin_trials_sample_api_third_party_enabled_>;
  using ScopedOverscrollCustomization = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_overscroll_customization_enabled_>;
  using ScopedPageFreezeOptIn = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_page_freeze_opt_in_enabled_>;
  using ScopedPageFreezeOptOut = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_page_freeze_opt_out_enabled_>;
  using ScopedPagePopup = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_page_popup_enabled_>;
  using ScopedPaintUnderInvalidationChecking = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_paint_under_invalidation_checking_enabled_>;
  using ScopedParakeet = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_parakeet_enabled_>;
  using ScopedParallelPrimaryFont = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_parallel_primary_font_enabled_>;
  using ScopedParallelTextShaping = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_parallel_text_shaping_enabled_>;
  using ScopedPartitionedCookies = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_partitioned_cookies_enabled_>;
  using ScopedPasswordReveal = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_password_reveal_enabled_>;
  using ScopedPaymentApp = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_payment_app_enabled_>;
  using ScopedPaymentMethodChangeEvent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_payment_method_change_event_enabled_>;
  using ScopedPaymentRequest = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_payment_request_enabled_>;
  using ScopedPaymentRequestMerchantValidationEvent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_payment_request_merchant_validation_event_enabled_>;
  using ScopedPendingBeaconAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_pending_beacon_api_enabled_>;
  using ScopedPercentBasedScrolling = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_percent_based_scrolling_enabled_>;
  using ScopedPerformanceManagerInstrumentation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_performance_manager_instrumentation_enabled_>;
  using ScopedPeriodicBackgroundSync = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_periodic_background_sync_enabled_>;
  using ScopedPerMethodCanMakePaymentQuota = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_per_method_can_make_payment_quota_enabled_>;
  using ScopedPermissions = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_permissions_enabled_>;
  using ScopedPermissionsPolicyUnload = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_permissions_policy_unload_enabled_>;
  using ScopedPermissionsRequestRevoke = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_permissions_request_revoke_enabled_>;
  using ScopedPictureInPicture = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_picture_in_picture_enabled_>;
  using ScopedPictureInPictureAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_picture_in_picture_api_enabled_>;
  using ScopedPNaCl = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_p_na_cl_enabled_>;
  using ScopedPointerLockOptions = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_pointer_lock_options_enabled_>;
  using ScopedPortals = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_portals_enabled_>;
  using ScopedPreciseMemoryInfo = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_precise_memory_info_enabled_>;
  using ScopedPreferNonCompositedScrolling = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_prefer_non_composited_scrolling_enabled_>;
  using ScopedPrefersColorSchemeClientHintHeader = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_prefers_color_scheme_client_hint_header_enabled_>;
  using ScopedPrefersContrast = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_prefers_contrast_enabled_>;
  using ScopedPrefersReducedData = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_prefers_reduced_data_enabled_>;
  using ScopedPrefixedStorageInfo = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_prefixed_storage_info_enabled_>;
  using ScopedPrefixedVideoFullscreen = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_prefixed_video_fullscreen_enabled_>;
  using ScopedPrerender2 = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_prerender_2_enabled_>;
  using ScopedPrerender2RelatedFeatures = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_prerender_2_related_features_enabled_>;
  using ScopedPresentation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_presentation_enabled_>;
  using ScopedPriorityHints = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_priority_hints_enabled_>;
  using ScopedPrivacySandboxAdsAPIs = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_privacy_sandbox_ads_api_s_enabled_>;
  using ScopedPrivateNetworkAccessNonSecureContextsAllowed = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_private_network_access_non_secure_contexts_allowed_enabled_>;
  using ScopedPrivateNetworkAccessPermissionPrompt = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_private_network_access_permission_prompt_enabled_>;
  using ScopedPushMessaging = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_push_messaging_enabled_>;
  using ScopedPushMessagingSubscriptionChange = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_push_messaging_subscription_change_enabled_>;
  using ScopedQuickIntensiveWakeUpThrottlingAfterLoading = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_quick_intensive_wake_up_throttling_after_loading_enabled_>;
  using ScopedQuotaChange = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_quota_change_enabled_>;
  using ScopedReduceUserAgentMinorVersion = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_reduce_user_agent_minor_version_enabled_>;
  using ScopedReduceUserAgentPlatformOsCpu = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_reduce_user_agent_platform_os_cpu_enabled_>;
  using ScopedRegionCapture = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_region_capture_enabled_>;
  using ScopedRemotePlayback = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_remote_playback_enabled_>;
  using ScopedRemotePlaybackBackend = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_remote_playback_backend_enabled_>;
  using ScopedRemoveMobileViewportDoubleTap = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_remove_mobile_viewport_double_tap_enabled_>;
  using ScopedRenderBlockingStatus = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_render_blocking_status_enabled_>;
  using ScopedRenderPriorityAttribute = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_render_priority_attribute_enabled_>;
  using ScopedRestrictBatteryStatusToSecureContexts = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_restrict_battery_status_to_secure_contexts_enabled_>;
  using ScopedRestrictGamepadAccess = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_restrict_gamepad_access_enabled_>;
  using ScopedRtcAudioJitterBufferMaxPackets = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_rtc_audio_jitter_buffer_max_packets_enabled_>;
  using ScopedRTCIceTransportExtension = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_rtc_ice_transport_extension_enabled_>;
  using ScopedRTCInsertableStreams = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_rtc_insertable_streams_enabled_>;
  using ScopedRTCQuicTransport = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_rtc_quic_transport_enabled_>;
  using ScopedRTCRtpHeaderExtensionControl = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_rtc_rtp_header_extension_control_enabled_>;
  using ScopedRTCStatsRelativePacketArrivalDelay = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_rtc_stats_relative_packet_arrival_delay_enabled_>;
  using ScopedRTCSvcScalabilityMode = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_rtc_svc_scalability_mode_enabled_>;
  using ScopedRTCUnifiedPlan = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_rtc_unified_plan_enabled_>;
  using ScopedRTCUnifiedPlanByDefault = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_rtc_unified_plan_by_default_enabled_>;
  using ScopedSanitizerAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_sanitizer_api_enabled_>;
  using ScopedSanitizerAPIv0 = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_sanitizer_api_v_0_enabled_>;
  using ScopedScriptedSpeechRecognition = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_scripted_speech_recognition_enabled_>;
  using ScopedScriptedSpeechSynthesis = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_scripted_speech_synthesis_enabled_>;
  using ScopedScriptElementSupports = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_script_element_supports_enabled_>;
  using ScopedScrollbarWidth = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_scrollbar_width_enabled_>;
  using ScopedScrollCustomization = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_scroll_customization_enabled_>;
  using ScopedScrollEndEvents = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_scroll_end_events_enabled_>;
  using ScopedScrollTimeline = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_scroll_timeline_enabled_>;
  using ScopedScrollTopLeftInterop = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_scroll_top_left_interop_enabled_>;
  using ScopedScrollUpdateOptimizations = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_scroll_update_optimizations_enabled_>;
  using ScopedSecureContextFixForSharedWorkers = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_secure_context_fix_for_shared_workers_enabled_>;
  using ScopedSecureContextFixForWorkers = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_secure_context_fix_for_workers_enabled_>;
  using ScopedSecurePaymentConfirmation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_secure_payment_confirmation_enabled_>;
  using ScopedSecurePaymentConfirmationDebug = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_secure_payment_confirmation_debug_enabled_>;
  using ScopedSecurePaymentConfirmationOptOut = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_secure_payment_confirmation_opt_out_enabled_>;
  using ScopedSendBeaconThrowForBlobWithNonSimpleType = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_send_beacon_throw_for_blob_with_non_simple_type_enabled_>;
  using ScopedSendFullUserAgentAfterReduction = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_send_full_user_agent_after_reduction_enabled_>;
  using ScopedSendMouseEventsDisabledFormControls = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_send_mouse_events_disabled_form_controls_enabled_>;
  using ScopedSensorExtraClasses = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_sensor_extra_classes_enabled_>;
  using ScopedSerial = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_serial_enabled_>;
  using ScopedSerialPortForget = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_serial_port_forget_enabled_>;
  using ScopedServiceWorkerClientLifecycleState = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_service_worker_client_lifecycle_state_enabled_>;
  using ScopedSharedArrayBuffer = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_shared_array_buffer_enabled_>;
  using ScopedSharedArrayBufferOnDesktop = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_shared_array_buffer_on_desktop_enabled_>;
  using ScopedSharedArrayBufferUnrestrictedAccessAllowed = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_shared_array_buffer_unrestricted_access_allowed_enabled_>;
  using ScopedSharedAutofill = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_shared_autofill_enabled_>;
  using ScopedSharedStorageAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_shared_storage_api_enabled_>;
  using ScopedSharedWorker = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_shared_worker_enabled_>;
  using ScopedSignatureBasedIntegrity = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_signature_based_integrity_enabled_>;
  using ScopedSignedExchangeSubresourcePrefetch = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_signed_exchange_subresource_prefetch_enabled_>;
  using ScopedSiteInitiatedMirroring = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_site_initiated_mirroring_enabled_>;
  using ScopedSkipAd = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_skip_ad_enabled_>;
  using ScopedSkipTouchEventFilter = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_skip_touch_event_filter_enabled_>;
  using ScopedSoftNavigationHeuristics = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_soft_navigation_heuristics_enabled_>;
  using ScopedSoftNavigationHeuristicsLogging = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_soft_navigation_heuristics_logging_enabled_>;
  using ScopedSpeculationRules = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_speculation_rules_enabled_>;
  using ScopedSpeculationRulesPrefetchProxy = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_speculation_rules_prefetch_proxy_enabled_>;
  using ScopedSpeculationRulesPrefetchWithSubresources = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_speculation_rules_prefetch_with_subresources_enabled_>;
  using ScopedSrcsetMaxDensity = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_srcset_max_density_enabled_>;
  using ScopedStableBlinkFeatures = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_stable_blink_features_enabled_>;
  using ScopedStorageAccessAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_storage_access_api_enabled_>;
  using ScopedStorageBuckets = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_storage_buckets_enabled_>;
  using ScopedStorageFoundationAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_storage_foundation_api_enabled_>;
  using ScopedStrictMimeTypesForWorkers = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_strict_mime_types_for_workers_enabled_>;
  using ScopedStylusHandwriting = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_stylus_handwriting_enabled_>;
  using ScopedSubresourceWebBundles = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_subresource_web_bundles_enabled_>;
  using ScopedSVGTextNG = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_svg_text_ng_enabled_>;
  using ScopedSynthesizedKeyboardEventsForAccessibilityActions = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_synthesized_keyboard_events_for_accessibility_actions_enabled_>;
  using ScopedSystemAudioConstraint = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_system_audio_constraint_enabled_>;
  using ScopedSystemWakeLock = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_system_wake_lock_enabled_>;
  using ScopedTestFeature = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_test_feature_enabled_>;
  using ScopedTestFeatureDependent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_test_feature_dependent_enabled_>;
  using ScopedTestFeatureImplied = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_test_feature_implied_enabled_>;
  using ScopedTextDecoratingBox = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_text_decorating_box_enabled_>;
  using ScopedTextDetector = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_text_detector_enabled_>;
  using ScopedTextFragmentAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_text_fragment_api_enabled_>;
  using ScopedTextFragmentIdentifiers = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_text_fragment_identifiers_enabled_>;
  using ScopedTextFragmentTapOpensContextMenu = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_text_fragment_tap_opens_context_menu_enabled_>;
  using ScopedThrottleDisplayNoneAndVisibilityHiddenCrossOriginIframes = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_throttle_display_none_and_visibility_hidden_cross_origin_iframes_enabled_>;
  using ScopedTimerThrottlingForBackgroundTabs = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_timer_throttling_for_background_tabs_enabled_>;
  using ScopedTimeZoneChangeEvent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_time_zone_change_event_enabled_>;
  using ScopedTopicsAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_topics_api_enabled_>;
  using ScopedTouchActionEffectiveAtPointerDown = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_touch_action_effective_at_pointer_down_enabled_>;
  using ScopedTouchDragAndContextMenu = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_touch_drag_and_context_menu_enabled_>;
  using ScopedTouchDragOnShortPress = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_touch_drag_on_short_press_enabled_>;
  using ScopedTouchEventFeatureDetection = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_touch_event_feature_detection_enabled_>;
  using ScopedTranslateService = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_translate_service_enabled_>;
  using ScopedTrustedTypeBeforePolicyCreationEvent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_trusted_type_before_policy_creation_event_enabled_>;
  using ScopedTrustedTypesUseCodeLike = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_trusted_types_use_code_like_enabled_>;
  using ScopedTrustTokens = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_trust_tokens_enabled_>;
  using ScopedTrustTokensAlwaysAllowIssuance = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_trust_tokens_always_allow_issuance_enabled_>;
  using ScopedU2FSecurityKeyAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_u_2_f_security_key_api_enabled_>;
  using ScopedUnclosedFormControlIsInvalid = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_unclosed_form_control_is_invalid_enabled_>;
  using ScopedUnexposedTaskIds = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_unexposed_task_ids_enabled_>;
  using ScopedUnrestrictedSharedArrayBuffer = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_unrestricted_shared_array_buffer_enabled_>;
  using ScopedURLPatternCompareComponent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_url_pattern_compare_component_enabled_>;
  using ScopedUserActivationSameOriginVisibility = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_user_activation_same_origin_visibility_enabled_>;
  using ScopedUserAgentClientHint = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_user_agent_client_hint_enabled_>;
  using ScopedUserAgentReduction = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_user_agent_reduction_enabled_>;
  using ScopedV8IdleTasks = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_v8_idle_tasks_enabled_>;
  using ScopedVariableCOLRV1 = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_variable_colrv_1_enabled_>;
  using ScopedVideoAutoFullscreen = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_video_auto_fullscreen_enabled_>;
  using ScopedVideoFullscreenOrientationLock = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_video_fullscreen_orientation_lock_enabled_>;
  using ScopedVideoPlaybackQuality = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_video_playback_quality_enabled_>;
  using ScopedVideoRotateToFullscreen = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_video_rotate_to_fullscreen_enabled_>;
  using ScopedVideoTrackGenerator = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_video_track_generator_enabled_>;
  using ScopedVideoTrackGeneratorInWindow = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_video_track_generator_in_window_enabled_>;
  using ScopedVideoTrackGeneratorInWorker = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_video_track_generator_in_worker_enabled_>;
  using ScopedVideoWakeLockOptimisationHiddenMuted = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_video_wake_lock_optimisation_hidden_muted_enabled_>;
  using ScopedViewportHeightClientHintHeader = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_viewport_height_client_hint_header_enabled_>;
  using ScopedViewportSegments = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_viewport_segments_enabled_>;
  using ScopedVirtualKeyboard = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_virtual_keyboard_enabled_>;
  using ScopedVisibilityCollapseColumn = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_visibility_collapse_column_enabled_>;
  using ScopedVisibilityStateEntry = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_visibility_state_entry_enabled_>;
  using ScopedWakeLock = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_wake_lock_enabled_>;
  using ScopedWebAnimationsAPI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_animations_api_enabled_>;
  using ScopedWebAnimationsSVG = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_animations_svg_enabled_>;
  using ScopedWebAppDarkMode = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_app_dark_mode_enabled_>;
  using ScopedWebAppLaunchHandler = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_app_launch_handler_enabled_>;
  using ScopedWebAppLaunchQueue = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_app_launch_queue_enabled_>;
  using ScopedWebAppManifestId = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_app_manifest_id_enabled_>;
  using ScopedWebAppsLockScreen = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_apps_lock_screen_enabled_>;
  using ScopedWebAppTabStrip = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_app_tab_strip_enabled_>;
  using ScopedWebAppTranslations = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_app_translations_enabled_>;
  using ScopedWebAppUrlHandling = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_app_url_handling_enabled_>;
  using ScopedWebAppWindowControlsOverlay = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_app_window_controls_overlay_enabled_>;
  using ScopedWebAssemblyCSP = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_assembly_csp_enabled_>;
  using ScopedWebAssemblyExceptions = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_assembly_exceptions_enabled_>;
  using ScopedWebAuth = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_auth_enabled_>;
  using ScopedWebAuthAuthenticatorAttachment = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_auth_authenticator_attachment_enabled_>;
  using ScopedWebAuthenticationConditionalUI = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_authentication_conditional_ui_enabled_>;
  using ScopedWebAuthenticationLargeBlobExtension = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_authentication_large_blob_extension_enabled_>;
  using ScopedWebAuthenticationRemoteDesktopSupport = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_authentication_remote_desktop_support_enabled_>;
  using ScopedWebBluetooth = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_bluetooth_enabled_>;
  using ScopedWebBluetoothGetDevices = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_bluetooth_get_devices_enabled_>;
  using ScopedWebBluetoothScanning = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_bluetooth_scanning_enabled_>;
  using ScopedWebBluetoothWatchAdvertisements = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_bluetooth_watch_advertisements_enabled_>;
  using ScopedWebCodecs = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_webcodecs_enabled_>;
  using ScopedWebCodecsDequeueEvent = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_webcodecs_dequeue_event_enabled_>;
  using ScopedWebGLColorManagement = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_webgl_color_management_enabled_>;
  using ScopedWebGLDeveloperExtensions = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_webgl_developer_extensions_enabled_>;
  using ScopedWebGLDraftExtensions = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_webgl_draft_extensions_enabled_>;
  using ScopedWebGLImageChromium = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_webgl_image_chromium_enabled_>;
  using ScopedWebGPU = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_webgpu_enabled_>;
  using ScopedWebGPUDeveloperFeatures = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_webgpu_developer_features_enabled_>;
  using ScopedWebGPUImportTexture = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_webgpu_import_texture_enabled_>;
  using ScopedWebHID = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_hid_enabled_>;
  using ScopedWebHIDExclusionFiltersOption = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_hid_exclusion_filters_option_enabled_>;
  using ScopedWebHIDOnServiceWorkers = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_hid_on_service_workers_enabled_>;
  using ScopedWebKitScrollbarStyling = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_kit_scrollbar_styling_enabled_>;
  using ScopedWebNFC = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_nfc_enabled_>;
  using ScopedWebNFCMakeReadOnly = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_nfc_make_read_only_enabled_>;
  using ScopedWebOTP = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_otp_enabled_>;
  using ScopedWebOTPAssertionFeaturePolicy = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_otp_assertion_feature_policy_enabled_>;
  using ScopedWebPaymentAPICSP = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_payment_api_csp_enabled_>;
  using ScopedWebShare = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_share_enabled_>;
  using ScopedWebSocketStream = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_websocket_stream_enabled_>;
  using ScopedWebTransportCustomCertificates = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_transport_custom_certificates_enabled_>;
  using ScopedWebUSB = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_usb_enabled_>;
  using ScopedWebUsbDeviceForget = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_usb_device_forget_enabled_>;
  using ScopedWebUSBOnDedicatedWorkers = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_usb_on_dedicated_workers_enabled_>;
  using ScopedWebVTTRegions = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_vtt_regions_enabled_>;
  using ScopedWebXR = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_xr_enabled_>;
  using ScopedWebXRAnchors = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_xr_anchors_enabled_>;
  using ScopedWebXRARModule = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_xr_ar_module_enabled_>;
  using ScopedWebXRCameraAccess = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_xr_camera_access_enabled_>;
  using ScopedWebXRDepth = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_xr_depth_enabled_>;
  using ScopedWebXRHandInput = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_xr_hand_input_enabled_>;
  using ScopedWebXRHitTest = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_xr_hit_test_enabled_>;
  using ScopedWebXRHitTestEntityTypes = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_xr_hit_test_entity_types_enabled_>;
  using ScopedWebXRImageTracking = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_xr_image_tracking_enabled_>;
  using ScopedWebXRLightEstimation = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_xr_light_estimation_enabled_>;
  using ScopedWebXRPlaneDetection = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_xr_plane_detection_enabled_>;
  using ScopedWebXRViewportScale = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_web_xr_viewport_scale_enabled_>;
  using ScopedWGIGamepadTriggerRumble = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_wgi_gamepad_trigger_rumble_enabled_>;
  using ScopedWindowOpenNewPopupBehavior = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_window_open_new_popup_behavior_enabled_>;
  using ScopedWindowPlacement = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_window_placement_enabled_>;
  using ScopedWindowPlacementEnhancedScreenLabels = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_window_placement_enhanced_screen_labels_enabled_>;
  using ScopedWindowPlacementFullscreenOnScreensChange = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_window_placement_fullscreen_on_screens_change_enabled_>;
  using ScopedXSLT = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_xslt_enabled_>;
  using ScopedZeroCopyTabCapture = ScopedRuntimeEnabledFeature<
      RuntimeEnabledFeaturesBase::is_zero_copy_tab_capture_enabled_>;
};

using ScopedAbortSignalThrowIfAbortedForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAbortSignalThrowIfAborted;
using ScopedAbortSignalTimeoutForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAbortSignalTimeout;
using ScopedAccelerated2dCanvasForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAccelerated2dCanvas;
using ScopedAcceleratedSmallCanvasesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAcceleratedSmallCanvases;
using ScopedAccessibilityAriaTouchPassthroughForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAccessibilityAriaTouchPassthrough;
using ScopedAccessibilityAriaVirtualContentForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAccessibilityAriaVirtualContent;
using ScopedAccessibilityExposeDisplayNoneForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAccessibilityExposeDisplayNone;
using ScopedAccessibilityExposeHTMLElementForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAccessibilityExposeHTMLElement;
using ScopedAccessibilityExposeIgnoredNodesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAccessibilityExposeIgnoredNodes;
using ScopedAccessibilityObjectModelForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAccessibilityObjectModel;
using ScopedAccessibilityPageZoomForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAccessibilityPageZoom;
using ScopedAccessibilityUseAXPositionForDocumentMarkersForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAccessibilityUseAXPositionForDocumentMarkers;
using ScopedAddressSpaceForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAddressSpace;
using ScopedAdInterestGroupAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAdInterestGroupAPI;
using ScopedAdTaggingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAdTagging;
using ScopedAllowContentInitiatedDataUrlNavigationsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAllowContentInitiatedDataUrlNavigations;
using ScopedAndroidDownloadableFontsMatchingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAndroidDownloadableFontsMatching;
using ScopedAnimationWorkletForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAnimationWorklet;
using ScopedAnonymousIframeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAnonymousIframe;
using ScopedAOMAriaRelationshipPropertiesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAOMAriaRelationshipProperties;
using ScopedAriaTouchPassthroughForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAriaTouchPassthrough;
using ScopedAttributionReportingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAttributionReporting;
using ScopedAudioOutputDevicesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAudioOutputDevices;
using ScopedAudioVideoTracksForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAudioVideoTracks;
using ScopedAutoDarkModeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAutoDarkMode;
using ScopedAutoExpandDetailsElementForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAutoExpandDetailsElement;
using ScopedAutofillShadowDOMForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAutofillShadowDOM;
using ScopedAutomationControlledForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAutomationControlled;
using ScopedAutoPictureInPictureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAutoPictureInPicture;
using ScopedAutoplayIgnoresWebAudioForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedAutoplayIgnoresWebAudio;
using ScopedBackfaceVisibilityInteropForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBackfaceVisibilityInterop;
using ScopedBackForwardCacheForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBackForwardCache;
using ScopedBackForwardCacheExperimentHTTPHeaderForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBackForwardCacheExperimentHTTPHeader;
using ScopedBackgroundFetchForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBackgroundFetch;
using ScopedBarcodeDetectorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBarcodeDetector;
using ScopedBatchFetchRequestsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBatchFetchRequests;
using ScopedBeforeMatchEventForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBeforeMatchEvent;
using ScopedBidiCaretAffinityForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBidiCaretAffinity;
using ScopedBlinkExtensionChromeOSForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBlinkExtensionChromeOS;
using ScopedBlinkExtensionChromeOSHIDForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBlinkExtensionChromeOSHID;
using ScopedBlinkExtensionChromeOSWindowManagementForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBlinkExtensionChromeOSWindowManagement;
using ScopedBlinkRuntimeCallStatsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBlinkRuntimeCallStats;
using ScopedBlockingAttributeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBlockingAttribute;
using ScopedBlockingFocusWithoutUserActivationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBlockingFocusWithoutUserActivation;
using ScopedBrowserVerifiedUserActivationKeyboardForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBrowserVerifiedUserActivationKeyboard;
using ScopedBrowserVerifiedUserActivationMouseForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedBrowserVerifiedUserActivationMouse;
using ScopedCacheStorageCodeCacheHintForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCacheStorageCodeCacheHint;
using ScopedCanvas2dImageChromiumForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCanvas2dImageChromium;
using ScopedCanvas2dLayersForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCanvas2dLayers;
using ScopedCanvas2dScrollPathIntoViewForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCanvas2dScrollPathIntoView;
using ScopedCanvasColorManagementV2ForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCanvasColorManagementV2;
using ScopedCanvasFormattedTextForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCanvasFormattedText;
using ScopedCanvasHDRForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCanvasHDR;
using ScopedCanvasImageSmoothingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCanvasImageSmoothing;
using ScopedCapabilityDelegationFullscreenRequestForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCapabilityDelegationFullscreenRequest;
using ScopedCaptureHandleForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCaptureHandle;
using ScopedcheckVisibilityForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedcheckVisibility;
using ScopedClickPointerEventForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedClickPointerEvent;
using ScopedClickRetargettingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedClickRetargetting;
using ScopedClientHintsMetaEquivDelegateCHForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedClientHintsMetaEquivDelegateCH;
using ScopedClientHintsMetaHTTPEquivAcceptCHForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedClientHintsMetaHTTPEquivAcceptCH;
using ScopedClientHintThirdPartyDelegationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedClientHintThirdPartyDelegation;
using ScopedClipboardCustomFormatsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedClipboardCustomFormats;
using ScopedClipboardSvgForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedClipboardSvg;
using ScopedClipboardUnsanitizedContentForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedClipboardUnsanitizedContent;
using ScopedCloseWatcherForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCloseWatcher;
using ScopedCLSScrollAnchoringForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCLSScrollAnchoring;
using ScopedCoepReflectionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCoepReflection;
using ScopedCompositeBGColorAnimationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCompositeBGColorAnimation;
using ScopedCompositeBoxShadowAnimationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCompositeBoxShadowAnimation;
using ScopedCompositeClipPathAnimationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCompositeClipPathAnimation;
using ScopedCompositedSelectionUpdateForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCompositedSelectionUpdate;
using ScopedCompositeRelativeKeyframesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCompositeRelativeKeyframes;
using ScopedCompositeVideoElementForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCompositeVideoElement;
using ScopedComputedAccessibilityInfoForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedComputedAccessibilityInfo;
using ScopedComputePressureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedComputePressure;
using ScopedConditionalFocusForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedConditionalFocus;
using ScopedConsolidatedMovementXYForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedConsolidatedMovementXY;
using ScopedContactsManagerForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedContactsManager;
using ScopedContactsManagerExtraPropertiesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedContactsManagerExtraProperties;
using ScopedContentIndexForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedContentIndex;
using ScopedContentVisibilityAutoStateChangedEventForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedContentVisibilityAutoStateChangedEvent;
using ScopedContextMenuForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedContextMenu;
using ScopedCooperativeSchedulingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCooperativeScheduling;
using ScopedCorsRFC1918ForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCorsRFC1918;
using ScopedCrossOriginOpenerPolicyReportingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCrossOriginOpenerPolicyReporting;
using ScopedCSS3TextForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSS3Text;
using ScopedCSSAnchorPositioningForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSAnchorPositioning;
using ScopedCSSAtRuleCounterStyleImageSymbolsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSAtRuleCounterStyleImageSymbols;
using ScopedCSSAtRuleCounterStyleSpeakAsDescriptorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSAtRuleCounterStyleSpeakAsDescriptor;
using ScopedCSSCalcSimplificationAndSerializationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSCalcSimplificationAndSerialization;
using ScopedCSSCaseSensitiveSelectorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSCaseSensitiveSelector;
using ScopedCSSColorContrastForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSColorContrast;
using ScopedCSSColorTypedOMForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSColorTypedOM;
using ScopedCSSContainerQueriesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSContainerQueries;
using ScopedCSSContainerRelativeUnitsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSContainerRelativeUnits;
using ScopedCSSContainerSkipStyleRecalcForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSContainerSkipStyleRecalc;
using ScopedCSSContainSize1DForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSContainSize1D;
using ScopedCSSDynamicRangeMediaQueriesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSDynamicRangeMediaQueries;
using ScopedCSSEnumeratedCustomPropertiesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSEnumeratedCustomProperties;
using ScopedCSSFocusVisibleForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSFocusVisible;
using ScopedCSSFoldablesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSFoldables;
using ScopedCSSFontFaceAutoVariableRangeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSFontFaceAutoVariableRange;
using ScopedCSSFontFamilyMathForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSFontFamilyMath;
using ScopedCSSFontSizeAdjustForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSFontSizeAdjust;
using ScopedCSSGridTemplatePropertyInterpolationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSGridTemplatePropertyInterpolation;
using ScopedCSSHexAlphaColorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSHexAlphaColor;
using ScopedCSSIcUnitForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSIcUnit;
using ScopedCSSIndependentTransformPropertiesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSIndependentTransformProperties;
using ScopedCSSLayoutAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSLayoutAPI;
using ScopedCSSLogicalForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSLogical;
using ScopedCSSLogicalOverflowForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSLogicalOverflow;
using ScopedCSSMarkerNestedPseudoElementForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSMarkerNestedPseudoElement;
using ScopedCSSMathDepthForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSMathDepth;
using ScopedCSSMathShiftForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSMathShift;
using ScopedCSSMathStyleForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSMathStyle;
using ScopedCSSMathVariantForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSMathVariant;
using ScopedCSSMediaQueries4ForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSMediaQueries4;
using ScopedCSSMixBlendModePlusLighterForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSMixBlendModePlusLighter;
using ScopedCSSModulesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSModules;
using ScopedCSSObjectViewBoxForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSObjectViewBox;
using ScopedCSSOffsetPathRayForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSOffsetPathRay;
using ScopedCSSOffsetPathRayContainForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSOffsetPathRayContain;
using ScopedCSSOffsetPositionAnchorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSOffsetPositionAnchor;
using ScopedCSSOverflowForReplacedElementsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSOverflowForReplacedElements;
using ScopedCSSPaintAPIArgumentsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSPaintAPIArguments;
using ScopedCSSPictureInPictureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSPictureInPicture;
using ScopedCSSPositionStickyStaticScrollPositionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSPositionStickyStaticScrollPosition;
using ScopedCSSPseudoAutofillForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSPseudoAutofill;
using ScopedCSSPseudoDirForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSPseudoDir;
using ScopedCSSPseudoHasForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSPseudoHas;
using ScopedCSSPseudoPlayingPausedForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSPseudoPlayingPaused;
using ScopedCSSScopeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSScope;
using ScopedCSSScrollbarsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSScrollbars;
using ScopedCSSScrollTimelineForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSScrollTimeline;
using ScopedCSSSelectorFragmentAnchorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSSelectorFragmentAnchor;
using ScopedCSSSnapSizeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSSnapSize;
using ScopedCSSSpellingGrammarErrorsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSSpellingGrammarErrors;
using ScopedCSSStyleQueriesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSStyleQueries;
using ScopedCSSTogglesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSToggles;
using ScopedCSSTrigonometricFunctionsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSTrigonometricFunctions;
using ScopedCSSVariables2ImageValuesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSVariables2ImageValues;
using ScopedCSSVariables2TransformValuesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSVariables2TransformValues;
using ScopedCSSVideoDynamicRangeMediaQueriesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSVideoDynamicRangeMediaQueries;
using ScopedCSSViewportUnits4ForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCSSViewportUnits4;
using ScopedCustomElementDefaultStyleForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedCustomElementDefaultStyle;
using ScopedDatabaseForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDatabase;
using ScopedDecodeJpeg420ImagesToYUVForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDecodeJpeg420ImagesToYUV;
using ScopedDecodeLossyWebPImagesToYUVForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDecodeLossyWebPImagesToYUV;
using ScopedDeferredShapingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDeferredShaping;
using ScopedDeflateRawCompressionFormatForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDeflateRawCompressionFormat;
using ScopedDelegatedInkTrailsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDelegatedInkTrails;
using ScopedDesktopCaptureDisableLocalEchoControlForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDesktopCaptureDisableLocalEchoControl;
using ScopedDesktopPWAsSubAppsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDesktopPWAsSubApps;
using ScopedDeviceAttributesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDeviceAttributes;
using ScopedDeviceOrientationRequestPermissionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDeviceOrientationRequestPermission;
using ScopedDevicePostureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDevicePosture;
using ScopedDialogFocusNewSpecBehaviorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDialogFocusNewSpecBehavior;
using ScopedDigitalGoodsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDigitalGoods;
using ScopedDigitalGoodsV2_1ForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDigitalGoodsV2_1;
using ScopedDirectSocketsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDirectSockets;
using ScopedDisableDifferentOriginSubframeDialogSuppressionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDisableDifferentOriginSubframeDialogSuppression;
using ScopedDisableHardwareNoiseSuppressionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDisableHardwareNoiseSuppression;
using ScopedDisplayCapturePermissionsPolicyForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDisplayCapturePermissionsPolicy;
using ScopedDisplayCutoutAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDisplayCutoutAPI;
using ScopedDocumentCookieForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDocumentCookie;
using ScopedDocumentDomainForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDocumentDomain;
using ScopedDocumentPictureInPictureAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDocumentPictureInPictureAPI;
using ScopedDocumentPolicyForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDocumentPolicy;
using ScopedDocumentPolicyDocumentDomainForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDocumentPolicyDocumentDomain;
using ScopedDocumentPolicyNegotiationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDocumentPolicyNegotiation;
using ScopedDocumentPolicySyncXHRForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDocumentPolicySyncXHR;
using ScopedDocumentTransitionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDocumentTransition;
using ScopedDocumentWriteForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedDocumentWrite;
using ScopedEarlyHintsPreloadForNavigationOptInForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedEarlyHintsPreloadForNavigationOptIn;
using ScopedEditContextForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedEditContext;
using ScopedElementSuperRareDataForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedElementSuperRareData;
using ScopedEventPathForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedEventPath;
using ScopedExperimentalContentSecurityPolicyFeaturesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedExperimentalContentSecurityPolicyFeatures;
using ScopedExperimentalJSProfilerMarkersForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedExperimentalJSProfilerMarkers;
using ScopedExperimentalPoliciesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedExperimentalPolicies;
using ScopedExperimentalWebSnapshotsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedExperimentalWebSnapshots;
using ScopedExtendedTextMetricsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedExtendedTextMetrics;
using ScopedExtraWebGLVideoTextureMetadataForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedExtraWebGLVideoTextureMetadata;
using ScopedEyeDropperAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedEyeDropperAPI;
using ScopedFaceDetectorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFaceDetector;
using ScopedFakeNoAllocDirectCallForTestingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFakeNoAllocDirectCallForTesting;
using ScopedFeaturePolicyReportingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFeaturePolicyReporting;
using ScopedFedCmForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFedCm;
using ScopedFedCmIdpSignoutForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFedCmIdpSignout;
using ScopedFedCmIframeSupportForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFedCmIframeSupport;
using ScopedFedCmMultipleIdentityProvidersForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFedCmMultipleIdentityProviders;
using ScopedFencedFramesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFencedFrames;
using ScopedFetchUploadStreamingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFetchUploadStreaming;
using ScopedFileHandlingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFileHandling;
using ScopedFileHandlingIconsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFileHandlingIcons;
using ScopedFileSystemForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFileSystem;
using ScopedFileSystemAccessForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFileSystemAccess;
using ScopedFileSystemAccessAccessHandleForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFileSystemAccessAccessHandle;
using ScopedFileSystemAccessAPIExperimentalForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFileSystemAccessAPIExperimental;
using ScopedFirstPartySetsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFirstPartySets;
using ScopedFixedElementsDontOverscrollForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFixedElementsDontOverscroll;
using ScopedFledgeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFledge;
using ScopedFocusgroupForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFocusgroup;
using ScopedFocuslessSpatialNavigationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFocuslessSpatialNavigation;
using ScopedFontAccessForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFontAccess;
using ScopedFontPaletteForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFontPalette;
using ScopedFontSrcLocalMatchingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFontSrcLocalMatching;
using ScopedForcedColorsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedForcedColors;
using ScopedForcedColorsPreserveParentColorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedForcedColorsPreserveParentColor;
using ScopedForceEagerMeasureMemoryForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedForceEagerMeasureMemory;
using ScopedForceReduceMotionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedForceReduceMotion;
using ScopedForceTallerSelectPopupForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedForceTallerSelectPopup;
using ScopedFormRelAttributeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFormRelAttribute;
using ScopedFractionalScrollOffsetsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFractionalScrollOffsets;
using ScopedFreezeFramesOnVisibilityForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedFreezeFramesOnVisibility;
using ScopedGamepadButtonAxisEventsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedGamepadButtonAxisEvents;
using ScopedGetDisplayMediaForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedGetDisplayMedia;
using ScopedGetDisplayMediaSetForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedGetDisplayMediaSet;
using ScopedGetDisplayMediaSetAutoSelectAllScreensForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedGetDisplayMediaSetAutoSelectAllScreens;
using ScopedGroupEffectForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedGroupEffect;
using ScopedHandwritingRecognitionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedHandwritingRecognition;
using ScopedHidDeviceForgetForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedHidDeviceForget;
using ScopedHighlightAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedHighlightAPI;
using ScopedHighlightInheritanceForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedHighlightInheritance;
using ScopedHighlightOverlayPaintingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedHighlightOverlayPainting;
using ScopedHighlightPointerEventsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedHighlightPointerEvents;
using ScopedHrefTranslateForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedHrefTranslate;
using ScopedHTMLParamElementUrlSupportForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedHTMLParamElementUrlSupport;
using ScopedHTMLPopupAttributeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedHTMLPopupAttribute;
using ScopedHTMLSelectMenuElementForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedHTMLSelectMenuElement;
using ScopedIDBBatchGetAllForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedIDBBatchGetAll;
using ScopedIdentityInCanMakePaymentEventFeatureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedIdentityInCanMakePaymentEventFeature;
using ScopedIdleDetectionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedIdleDetection;
using ScopedImplicitRootScrollerForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedImplicitRootScroller;
using ScopedInertAttributeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedInertAttribute;
using ScopedInfiniteCullRectForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedInfiniteCullRect;
using ScopedInputMultipleFieldsUIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedInputMultipleFieldsUI;
using ScopedInstalledAppForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedInstalledApp;
using ScopedKeyboardAccessibleTooltipForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedKeyboardAccessibleTooltip;
using ScopedKeyboardFocusableScrollersForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedKeyboardFocusableScrollers;
using ScopedLangAttributeAwareFormControlUIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLangAttributeAwareFormControlUI;
using ScopedLayoutNGForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLayoutNG;
using ScopedLayoutNGBlockFragmentationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLayoutNGBlockFragmentation;
using ScopedLayoutNGBlockInInlineForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLayoutNGBlockInInline;
using ScopedLayoutNGFlexFragmentationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLayoutNGFlexFragmentation;
using ScopedLayoutNGForeignObjectForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLayoutNGForeignObject;
using ScopedLayoutNGFrameSetForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLayoutNGFrameSet;
using ScopedLayoutNGGridFragmentationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLayoutNGGridFragmentation;
using ScopedLayoutNGPrintingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLayoutNGPrinting;
using ScopedLayoutNGSubgridForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLayoutNGSubgrid;
using ScopedLayoutNGTableFragmentationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLayoutNGTableFragmentation;
using ScopedLayoutNGViewForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLayoutNGView;
using ScopedLayoutNGVTTCueForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLayoutNGVTTCue;
using ScopedLazyFrameLoadingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLazyFrameLoading;
using ScopedLazyFrameVisibleLoadTimeMetricsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLazyFrameVisibleLoadTimeMetrics;
using ScopedLazyImageLoadingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLazyImageLoading;
using ScopedLazyImageVisibleLoadTimeMetricsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLazyImageVisibleLoadTimeMetrics;
using ScopedLazyInitializeMediaControlsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLazyInitializeMediaControls;
using ScopedLCPAnimatedImagesWebExposedForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLCPAnimatedImagesWebExposed;
using ScopedLegacyWindowsDWriteFontFallbackForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedLegacyWindowsDWriteFontFallback;
using ScopedMachineLearningCommonForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMachineLearningCommon;
using ScopedMachineLearningModelLoaderForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMachineLearningModelLoader;
using ScopedMachineLearningNeuralNetworkForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMachineLearningNeuralNetwork;
using ScopedManagedConfigurationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedManagedConfiguration;
using ScopedMathMLCoreForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMathMLCore;
using ScopedMeasureMemoryForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMeasureMemory;
using ScopedMediaCapabilitiesDynamicRangeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaCapabilitiesDynamicRange;
using ScopedMediaCapabilitiesEncodingInfoForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaCapabilitiesEncodingInfo;
using ScopedMediaCapabilitiesSpatialAudioForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaCapabilitiesSpatialAudio;
using ScopedMediaCaptureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaCapture;
using ScopedMediaCastOverlayButtonForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaCastOverlayButton;
using ScopedMediaControlsExpandGestureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaControlsExpandGesture;
using ScopedMediaControlsOverlayPlayButtonForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaControlsOverlayPlayButton;
using ScopedMediaElementVolumeGreaterThanOneForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaElementVolumeGreaterThanOne;
using ScopedMediaEngagementBypassAutoplayPoliciesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaEngagementBypassAutoplayPolicies;
using ScopedMediaLatencyHintForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaLatencyHint;
using ScopedMediaQueryNavigationControlsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaQueryNavigationControls;
using ScopedMediaSessionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaSession;
using ScopedMediaSessionWebRTCForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaSessionWebRTC;
using ScopedMediaSourceExperimentalForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaSourceExperimental;
using ScopedMediaSourceExtensionsForWebCodecsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaSourceExtensionsForWebCodecs;
using ScopedMediaSourceInWorkersForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaSourceInWorkers;
using ScopedMediaSourceInWorkersUsingHandleForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaSourceInWorkersUsingHandle;
using ScopedMediaSourceNewAbortAndDurationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaSourceNewAbortAndDuration;
using ScopedMediaSourceStableForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaSourceStable;
using ScopedMediaStreamTrackInWindowForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaStreamTrackInWindow;
using ScopedMediaStreamTrackInWorkerForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaStreamTrackInWorker;
using ScopedMediaStreamTrackTransferForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMediaStreamTrackTransfer;
using ScopedMiddleClickAutoscrollForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMiddleClickAutoscroll;
using ScopedMobileLayoutThemeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMobileLayoutTheme;
using ScopedMojoJSForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMojoJS;
using ScopedMojoJSTestForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMojoJSTest;
using ScopedMouseSubframeNoImplicitCaptureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedMouseSubframeNoImplicitCapture;
using ScopedNavigationApiForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedNavigationApi;
using ScopedNavigationIdForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedNavigationId;
using ScopedNavigatorContentUtilsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedNavigatorContentUtils;
using ScopedNetInfoDownlinkMaxForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedNetInfoDownlinkMax;
using ScopedNeverSlowModeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedNeverSlowMode;
using ScopedNewFlexboxSizingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedNewFlexboxSizing;
using ScopedNoIdleEncodingForWebTestsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedNoIdleEncodingForWebTests;
using ScopedNotificationConstructorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedNotificationConstructor;
using ScopedNotificationContentImageForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedNotificationContentImage;
using ScopedNotificationsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedNotifications;
using ScopedNotificationTriggersForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedNotificationTriggers;
using ScopedOffMainThreadCSSPaintForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOffMainThreadCSSPaint;
using ScopedOffscreenCanvasCommitForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOffscreenCanvasCommit;
using ScopedOffsetParentNewSpecBehaviorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOffsetParentNewSpecBehavior;
using ScopedOnDeviceChangeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOnDeviceChange;
using ScopedOrientationEventForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOrientationEvent;
using ScopedOriginIsolationHeaderForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOriginIsolationHeader;
using ScopedOriginPolicyForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOriginPolicy;
using ScopedOriginTrialsSampleAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOriginTrialsSampleAPI;
using ScopedOriginTrialsSampleAPIDependentForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOriginTrialsSampleAPIDependent;
using ScopedOriginTrialsSampleAPIDeprecationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOriginTrialsSampleAPIDeprecation;
using ScopedOriginTrialsSampleAPIExpiryGracePeriodForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOriginTrialsSampleAPIExpiryGracePeriod;
using ScopedOriginTrialsSampleAPIExpiryGracePeriodThirdPartyForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOriginTrialsSampleAPIExpiryGracePeriodThirdParty;
using ScopedOriginTrialsSampleAPIImpliedForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOriginTrialsSampleAPIImplied;
using ScopedOriginTrialsSampleAPIInvalidOSForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOriginTrialsSampleAPIInvalidOS;
using ScopedOriginTrialsSampleAPINavigationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOriginTrialsSampleAPINavigation;
using ScopedOriginTrialsSampleAPIPersistentExpiryGracePeriodForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOriginTrialsSampleAPIPersistentExpiryGracePeriod;
using ScopedOriginTrialsSampleAPIPersistentFeatureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOriginTrialsSampleAPIPersistentFeature;
using ScopedOriginTrialsSampleAPIThirdPartyForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOriginTrialsSampleAPIThirdParty;
using ScopedOverscrollCustomizationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedOverscrollCustomization;
using ScopedPageFreezeOptInForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPageFreezeOptIn;
using ScopedPageFreezeOptOutForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPageFreezeOptOut;
using ScopedPagePopupForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPagePopup;
using ScopedPaintUnderInvalidationCheckingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPaintUnderInvalidationChecking;
using ScopedParakeetForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedParakeet;
using ScopedParallelPrimaryFontForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedParallelPrimaryFont;
using ScopedParallelTextShapingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedParallelTextShaping;
using ScopedPartitionedCookiesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPartitionedCookies;
using ScopedPasswordRevealForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPasswordReveal;
using ScopedPaymentAppForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPaymentApp;
using ScopedPaymentMethodChangeEventForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPaymentMethodChangeEvent;
using ScopedPaymentRequestForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPaymentRequest;
using ScopedPaymentRequestMerchantValidationEventForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPaymentRequestMerchantValidationEvent;
using ScopedPendingBeaconAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPendingBeaconAPI;
using ScopedPercentBasedScrollingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPercentBasedScrolling;
using ScopedPerformanceManagerInstrumentationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPerformanceManagerInstrumentation;
using ScopedPeriodicBackgroundSyncForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPeriodicBackgroundSync;
using ScopedPerMethodCanMakePaymentQuotaForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPerMethodCanMakePaymentQuota;
using ScopedPermissionsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPermissions;
using ScopedPermissionsPolicyUnloadForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPermissionsPolicyUnload;
using ScopedPermissionsRequestRevokeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPermissionsRequestRevoke;
using ScopedPictureInPictureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPictureInPicture;
using ScopedPictureInPictureAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPictureInPictureAPI;
using ScopedPNaClForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPNaCl;
using ScopedPointerLockOptionsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPointerLockOptions;
using ScopedPortalsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPortals;
using ScopedPreciseMemoryInfoForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPreciseMemoryInfo;
using ScopedPreferNonCompositedScrollingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPreferNonCompositedScrolling;
using ScopedPrefersColorSchemeClientHintHeaderForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPrefersColorSchemeClientHintHeader;
using ScopedPrefersContrastForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPrefersContrast;
using ScopedPrefersReducedDataForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPrefersReducedData;
using ScopedPrefixedStorageInfoForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPrefixedStorageInfo;
using ScopedPrefixedVideoFullscreenForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPrefixedVideoFullscreen;
using ScopedPrerender2ForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPrerender2;
using ScopedPrerender2RelatedFeaturesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPrerender2RelatedFeatures;
using ScopedPresentationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPresentation;
using ScopedPriorityHintsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPriorityHints;
using ScopedPrivacySandboxAdsAPIsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPrivacySandboxAdsAPIs;
using ScopedPrivateNetworkAccessNonSecureContextsAllowedForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPrivateNetworkAccessNonSecureContextsAllowed;
using ScopedPrivateNetworkAccessPermissionPromptForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPrivateNetworkAccessPermissionPrompt;
using ScopedPushMessagingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPushMessaging;
using ScopedPushMessagingSubscriptionChangeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedPushMessagingSubscriptionChange;
using ScopedQuickIntensiveWakeUpThrottlingAfterLoadingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedQuickIntensiveWakeUpThrottlingAfterLoading;
using ScopedQuotaChangeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedQuotaChange;
using ScopedReduceUserAgentMinorVersionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedReduceUserAgentMinorVersion;
using ScopedReduceUserAgentPlatformOsCpuForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedReduceUserAgentPlatformOsCpu;
using ScopedRegionCaptureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRegionCapture;
using ScopedRemotePlaybackForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRemotePlayback;
using ScopedRemotePlaybackBackendForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRemotePlaybackBackend;
using ScopedRemoveMobileViewportDoubleTapForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRemoveMobileViewportDoubleTap;
using ScopedRenderBlockingStatusForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRenderBlockingStatus;
using ScopedRenderPriorityAttributeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRenderPriorityAttribute;
using ScopedRestrictBatteryStatusToSecureContextsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRestrictBatteryStatusToSecureContexts;
using ScopedRestrictGamepadAccessForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRestrictGamepadAccess;
using ScopedRtcAudioJitterBufferMaxPacketsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRtcAudioJitterBufferMaxPackets;
using ScopedRTCIceTransportExtensionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRTCIceTransportExtension;
using ScopedRTCInsertableStreamsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRTCInsertableStreams;
using ScopedRTCQuicTransportForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRTCQuicTransport;
using ScopedRTCRtpHeaderExtensionControlForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRTCRtpHeaderExtensionControl;
using ScopedRTCStatsRelativePacketArrivalDelayForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRTCStatsRelativePacketArrivalDelay;
using ScopedRTCSvcScalabilityModeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRTCSvcScalabilityMode;
using ScopedRTCUnifiedPlanForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRTCUnifiedPlan;
using ScopedRTCUnifiedPlanByDefaultForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedRTCUnifiedPlanByDefault;
using ScopedSanitizerAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSanitizerAPI;
using ScopedSanitizerAPIv0ForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSanitizerAPIv0;
using ScopedScriptedSpeechRecognitionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedScriptedSpeechRecognition;
using ScopedScriptedSpeechSynthesisForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedScriptedSpeechSynthesis;
using ScopedScriptElementSupportsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedScriptElementSupports;
using ScopedScrollbarWidthForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedScrollbarWidth;
using ScopedScrollCustomizationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedScrollCustomization;
using ScopedScrollEndEventsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedScrollEndEvents;
using ScopedScrollTimelineForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedScrollTimeline;
using ScopedScrollTopLeftInteropForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedScrollTopLeftInterop;
using ScopedScrollUpdateOptimizationsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedScrollUpdateOptimizations;
using ScopedSecureContextFixForSharedWorkersForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSecureContextFixForSharedWorkers;
using ScopedSecureContextFixForWorkersForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSecureContextFixForWorkers;
using ScopedSecurePaymentConfirmationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSecurePaymentConfirmation;
using ScopedSecurePaymentConfirmationDebugForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSecurePaymentConfirmationDebug;
using ScopedSecurePaymentConfirmationOptOutForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSecurePaymentConfirmationOptOut;
using ScopedSendBeaconThrowForBlobWithNonSimpleTypeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSendBeaconThrowForBlobWithNonSimpleType;
using ScopedSendFullUserAgentAfterReductionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSendFullUserAgentAfterReduction;
using ScopedSendMouseEventsDisabledFormControlsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSendMouseEventsDisabledFormControls;
using ScopedSensorExtraClassesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSensorExtraClasses;
using ScopedSerialForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSerial;
using ScopedSerialPortForgetForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSerialPortForget;
using ScopedServiceWorkerClientLifecycleStateForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedServiceWorkerClientLifecycleState;
using ScopedSharedArrayBufferForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSharedArrayBuffer;
using ScopedSharedArrayBufferOnDesktopForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSharedArrayBufferOnDesktop;
using ScopedSharedArrayBufferUnrestrictedAccessAllowedForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSharedArrayBufferUnrestrictedAccessAllowed;
using ScopedSharedAutofillForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSharedAutofill;
using ScopedSharedStorageAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSharedStorageAPI;
using ScopedSharedWorkerForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSharedWorker;
using ScopedSignatureBasedIntegrityForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSignatureBasedIntegrity;
using ScopedSignedExchangeSubresourcePrefetchForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSignedExchangeSubresourcePrefetch;
using ScopedSiteInitiatedMirroringForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSiteInitiatedMirroring;
using ScopedSkipAdForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSkipAd;
using ScopedSkipTouchEventFilterForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSkipTouchEventFilter;
using ScopedSoftNavigationHeuristicsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSoftNavigationHeuristics;
using ScopedSoftNavigationHeuristicsLoggingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSoftNavigationHeuristicsLogging;
using ScopedSpeculationRulesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSpeculationRules;
using ScopedSpeculationRulesPrefetchProxyForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSpeculationRulesPrefetchProxy;
using ScopedSpeculationRulesPrefetchWithSubresourcesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSpeculationRulesPrefetchWithSubresources;
using ScopedSrcsetMaxDensityForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSrcsetMaxDensity;
using ScopedStableBlinkFeaturesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedStableBlinkFeatures;
using ScopedStorageAccessAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedStorageAccessAPI;
using ScopedStorageBucketsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedStorageBuckets;
using ScopedStorageFoundationAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedStorageFoundationAPI;
using ScopedStrictMimeTypesForWorkersForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedStrictMimeTypesForWorkers;
using ScopedStylusHandwritingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedStylusHandwriting;
using ScopedSubresourceWebBundlesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSubresourceWebBundles;
using ScopedSVGTextNGForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSVGTextNG;
using ScopedSynthesizedKeyboardEventsForAccessibilityActionsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSynthesizedKeyboardEventsForAccessibilityActions;
using ScopedSystemAudioConstraintForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSystemAudioConstraint;
using ScopedSystemWakeLockForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedSystemWakeLock;
using ScopedTestFeatureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTestFeature;
using ScopedTestFeatureDependentForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTestFeatureDependent;
using ScopedTestFeatureImpliedForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTestFeatureImplied;
using ScopedTextDecoratingBoxForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTextDecoratingBox;
using ScopedTextDetectorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTextDetector;
using ScopedTextFragmentAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTextFragmentAPI;
using ScopedTextFragmentIdentifiersForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTextFragmentIdentifiers;
using ScopedTextFragmentTapOpensContextMenuForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTextFragmentTapOpensContextMenu;
using ScopedThrottleDisplayNoneAndVisibilityHiddenCrossOriginIframesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedThrottleDisplayNoneAndVisibilityHiddenCrossOriginIframes;
using ScopedTimerThrottlingForBackgroundTabsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTimerThrottlingForBackgroundTabs;
using ScopedTimeZoneChangeEventForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTimeZoneChangeEvent;
using ScopedTopicsAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTopicsAPI;
using ScopedTouchActionEffectiveAtPointerDownForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTouchActionEffectiveAtPointerDown;
using ScopedTouchDragAndContextMenuForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTouchDragAndContextMenu;
using ScopedTouchDragOnShortPressForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTouchDragOnShortPress;
using ScopedTouchEventFeatureDetectionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTouchEventFeatureDetection;
using ScopedTranslateServiceForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTranslateService;
using ScopedTrustedTypeBeforePolicyCreationEventForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTrustedTypeBeforePolicyCreationEvent;
using ScopedTrustedTypesUseCodeLikeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTrustedTypesUseCodeLike;
using ScopedTrustTokensForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTrustTokens;
using ScopedTrustTokensAlwaysAllowIssuanceForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedTrustTokensAlwaysAllowIssuance;
using ScopedU2FSecurityKeyAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedU2FSecurityKeyAPI;
using ScopedUnclosedFormControlIsInvalidForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedUnclosedFormControlIsInvalid;
using ScopedUnexposedTaskIdsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedUnexposedTaskIds;
using ScopedUnrestrictedSharedArrayBufferForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedUnrestrictedSharedArrayBuffer;
using ScopedURLPatternCompareComponentForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedURLPatternCompareComponent;
using ScopedUserActivationSameOriginVisibilityForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedUserActivationSameOriginVisibility;
using ScopedUserAgentClientHintForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedUserAgentClientHint;
using ScopedUserAgentReductionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedUserAgentReduction;
using ScopedV8IdleTasksForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedV8IdleTasks;
using ScopedVariableCOLRV1ForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedVariableCOLRV1;
using ScopedVideoAutoFullscreenForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedVideoAutoFullscreen;
using ScopedVideoFullscreenOrientationLockForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedVideoFullscreenOrientationLock;
using ScopedVideoPlaybackQualityForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedVideoPlaybackQuality;
using ScopedVideoRotateToFullscreenForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedVideoRotateToFullscreen;
using ScopedVideoTrackGeneratorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedVideoTrackGenerator;
using ScopedVideoTrackGeneratorInWindowForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedVideoTrackGeneratorInWindow;
using ScopedVideoTrackGeneratorInWorkerForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedVideoTrackGeneratorInWorker;
using ScopedVideoWakeLockOptimisationHiddenMutedForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedVideoWakeLockOptimisationHiddenMuted;
using ScopedViewportHeightClientHintHeaderForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedViewportHeightClientHintHeader;
using ScopedViewportSegmentsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedViewportSegments;
using ScopedVirtualKeyboardForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedVirtualKeyboard;
using ScopedVisibilityCollapseColumnForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedVisibilityCollapseColumn;
using ScopedVisibilityStateEntryForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedVisibilityStateEntry;
using ScopedWakeLockForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWakeLock;
using ScopedWebAnimationsAPIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAnimationsAPI;
using ScopedWebAnimationsSVGForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAnimationsSVG;
using ScopedWebAppDarkModeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAppDarkMode;
using ScopedWebAppLaunchHandlerForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAppLaunchHandler;
using ScopedWebAppLaunchQueueForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAppLaunchQueue;
using ScopedWebAppManifestIdForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAppManifestId;
using ScopedWebAppsLockScreenForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAppsLockScreen;
using ScopedWebAppTabStripForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAppTabStrip;
using ScopedWebAppTranslationsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAppTranslations;
using ScopedWebAppUrlHandlingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAppUrlHandling;
using ScopedWebAppWindowControlsOverlayForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAppWindowControlsOverlay;
using ScopedWebAssemblyCSPForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAssemblyCSP;
using ScopedWebAssemblyExceptionsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAssemblyExceptions;
using ScopedWebAuthForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAuth;
using ScopedWebAuthAuthenticatorAttachmentForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAuthAuthenticatorAttachment;
using ScopedWebAuthenticationConditionalUIForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAuthenticationConditionalUI;
using ScopedWebAuthenticationLargeBlobExtensionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAuthenticationLargeBlobExtension;
using ScopedWebAuthenticationRemoteDesktopSupportForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebAuthenticationRemoteDesktopSupport;
using ScopedWebBluetoothForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebBluetooth;
using ScopedWebBluetoothGetDevicesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebBluetoothGetDevices;
using ScopedWebBluetoothScanningForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebBluetoothScanning;
using ScopedWebBluetoothWatchAdvertisementsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebBluetoothWatchAdvertisements;
using ScopedWebCodecsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebCodecs;
using ScopedWebCodecsDequeueEventForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebCodecsDequeueEvent;
using ScopedWebGLColorManagementForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebGLColorManagement;
using ScopedWebGLDeveloperExtensionsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebGLDeveloperExtensions;
using ScopedWebGLDraftExtensionsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebGLDraftExtensions;
using ScopedWebGLImageChromiumForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebGLImageChromium;
using ScopedWebGPUForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebGPU;
using ScopedWebGPUDeveloperFeaturesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebGPUDeveloperFeatures;
using ScopedWebGPUImportTextureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebGPUImportTexture;
using ScopedWebHIDForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebHID;
using ScopedWebHIDExclusionFiltersOptionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebHIDExclusionFiltersOption;
using ScopedWebHIDOnServiceWorkersForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebHIDOnServiceWorkers;
using ScopedWebKitScrollbarStylingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebKitScrollbarStyling;
using ScopedWebNFCForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebNFC;
using ScopedWebNFCMakeReadOnlyForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebNFCMakeReadOnly;
using ScopedWebOTPForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebOTP;
using ScopedWebOTPAssertionFeaturePolicyForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebOTPAssertionFeaturePolicy;
using ScopedWebPaymentAPICSPForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebPaymentAPICSP;
using ScopedWebShareForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebShare;
using ScopedWebSocketStreamForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebSocketStream;
using ScopedWebTransportCustomCertificatesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebTransportCustomCertificates;
using ScopedWebUSBForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebUSB;
using ScopedWebUsbDeviceForgetForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebUsbDeviceForget;
using ScopedWebUSBOnDedicatedWorkersForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebUSBOnDedicatedWorkers;
using ScopedWebVTTRegionsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebVTTRegions;
using ScopedWebXRForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebXR;
using ScopedWebXRAnchorsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebXRAnchors;
using ScopedWebXRARModuleForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebXRARModule;
using ScopedWebXRCameraAccessForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebXRCameraAccess;
using ScopedWebXRDepthForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebXRDepth;
using ScopedWebXRHandInputForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebXRHandInput;
using ScopedWebXRHitTestForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebXRHitTest;
using ScopedWebXRHitTestEntityTypesForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebXRHitTestEntityTypes;
using ScopedWebXRImageTrackingForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebXRImageTracking;
using ScopedWebXRLightEstimationForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebXRLightEstimation;
using ScopedWebXRPlaneDetectionForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebXRPlaneDetection;
using ScopedWebXRViewportScaleForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWebXRViewportScale;
using ScopedWGIGamepadTriggerRumbleForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWGIGamepadTriggerRumble;
using ScopedWindowOpenNewPopupBehaviorForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWindowOpenNewPopupBehavior;
using ScopedWindowPlacementForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWindowPlacement;
using ScopedWindowPlacementEnhancedScreenLabelsForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWindowPlacementEnhancedScreenLabels;
using ScopedWindowPlacementFullscreenOnScreensChangeForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedWindowPlacementFullscreenOnScreensChange;
using ScopedXSLTForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedXSLT;
using ScopedZeroCopyTabCaptureForTest =
    RuntimeEnabledFeaturesTestHelpers::ScopedZeroCopyTabCapture;
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_RENDERER_PLATFORM_RUNTIME_ENABLED_FEATURES_TEST_HELPERS_H_
