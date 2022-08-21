// Copyright (c) 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Generated from template:
//   templates/settings_macros.h.tmpl
// and input files:
//   ../../third_party/blink/renderer/core/frame/settings.json5


#ifndef THIRD_PARTY_BLINK_RENDERER_CORE_SETTINGS_MACROS_H_
#define THIRD_PARTY_BLINK_RENDERER_CORE_SETTINGS_MACROS_H_

#define SETTINGS_GETTERS_AND_SETTERS \
    bool GetDOMPasteAllowed() const { return dom_paste_allowed_; } \
    void SetDOMPasteAllowed(bool dom_paste_allowed); \
    bool GetDontSendKeyEventsToJavascript() const { return dont_send_key_events_to_javascript_; } \
    void SetDontSendKeyEventsToJavascript(bool dont_send_key_events_to_javascript); \
    bool GetHighlightAds() const { return highlight_ads_; } \
    void SetHighlightAds(bool highlight_ads); \
    double GetNetworkQuietTimeout() const { return network_quiet_timeout_; } \
    void SetNetworkQuietTimeout(double network_quiet_timeout); \
    bool GetWebXRImmersiveArAllowed() const { return web_xr_immersive_ar_allowed_; } \
    void SetWebXRImmersiveArAllowed(bool web_xr_immersive_ar_allowed); \
    int GetAccelerated2dCanvasMSAASampleCount() const { return accelerated_2d_canvas_msaa_sample_count_; } \
    void SetAccelerated2dCanvasMSAASampleCount(int accelerated_2d_canvas_msaa_sample_count); \
    bool GetAcceleratedCompositingEnabled() const { return accelerated_compositing_enabled_; } \
    void SetAcceleratedCompositingEnabled(bool accelerated_compositing_enabled); \
    bool GetAccessibilityAlwaysShowFocus() const { return accessibility_always_show_focus_; } \
    void SetAccessibilityAlwaysShowFocus(bool accessibility_always_show_focus); \
    double GetAccessibilityFontScaleFactor() const { return accessibility_font_scale_factor_; } \
    void SetAccessibilityFontScaleFactor(double accessibility_font_scale_factor); \
    bool GetAccessibilityIncludeSvgGElement() const { return accessibility_include_svg_g_element_; } \
    void SetAccessibilityIncludeSvgGElement(bool accessibility_include_svg_g_element); \
    bool GetAccessibilityPasswordValuesEnabled() const { return accessibility_password_values_enabled_; } \
    void SetAccessibilityPasswordValuesEnabled(bool accessibility_password_values_enabled); \
    bool GetAllowCustomScrollbarInMainFrame() const { return allow_custom_scrollbar_in_main_frame_; } \
    void SetAllowCustomScrollbarInMainFrame(bool allow_custom_scrollbar_in_main_frame); \
    bool GetAllowFileAccessFromFileURLs() const { return allow_file_access_from_file_urls_; } \
    void SetAllowFileAccessFromFileURLs(bool allow_file_access_from_file_urls); \
    bool GetAllowGeolocationOnInsecureOrigins() const { return allow_geolocation_on_insecure_origins_; } \
    void SetAllowGeolocationOnInsecureOrigins(bool allow_geolocation_on_insecure_origins); \
    bool GetAllowNonEmptyNavigatorPlugins() const { return allow_non_empty_navigator_plugins_; } \
    void SetAllowNonEmptyNavigatorPlugins(bool allow_non_empty_navigator_plugins); \
    bool GetAllowRunningOfInsecureContent() const { return allow_running_of_insecure_content_; } \
    void SetAllowRunningOfInsecureContent(bool allow_running_of_insecure_content); \
    bool GetAllowScriptsToCloseWindows() const { return allow_scripts_to_close_windows_; } \
    void SetAllowScriptsToCloseWindows(bool allow_scripts_to_close_windows); \
    bool GetAllowUniversalAccessFromFileURLs() const { return allow_universal_access_from_file_urls_; } \
    void SetAllowUniversalAccessFromFileURLs(bool allow_universal_access_from_file_urls); \
    bool GetAlwaysShowContextMenuOnTouch() const { return always_show_context_menu_on_touch_; } \
    void SetAlwaysShowContextMenuOnTouch(bool always_show_context_menu_on_touch); \
    bool GetAntialiased2dCanvasEnabled() const { return antialiased_2d_canvas_enabled_; } \
    void SetAntialiased2dCanvasEnabled(bool antialiased_2d_canvas_enabled); \
    bool GetAntialiasedClips2dCanvasEnabled() const { return antialiased_clips_2d_canvas_enabled_; } \
    void SetAntialiasedClips2dCanvasEnabled(bool antialiased_clips_2d_canvas_enabled); \
    bool GetAriaModalPrunesAXTree() const { return aria_modal_prunes_ax_tree_; } \
    void SetAriaModalPrunesAXTree(bool aria_modal_prunes_ax_tree); \
    AutoplayPolicy::Type GetAutoplayPolicy() const { return autoplay_policy_; } \
    void SetAutoplayPolicy(AutoplayPolicy::Type autoplay_policy); \
    int GetAvailableHoverTypes() const { return available_hover_types_; } \
    void SetAvailableHoverTypes(int available_hover_types); \
    int GetAvailablePointerTypes() const { return available_pointer_types_; } \
    void SetAvailablePointerTypes(int available_pointer_types); \
    bool GetBarrelButtonForDragEnabled() const { return barrel_button_for_drag_enabled_; } \
    void SetBarrelButtonForDragEnabled(bool barrel_button_for_drag_enabled); \
    bool GetBypassCSP() const { return bypass_csp_; } \
    void SetBypassCSP(bool bypass_csp); \
    bool GetCaretBrowsingEnabled() const { return caret_browsing_enabled_; } \
    void SetCaretBrowsingEnabled(bool caret_browsing_enabled); \
    bool GetCookieEnabled() const { return cookie_enabled_; } \
    void SetCookieEnabled(bool cookie_enabled); \
    int GetDefaultFixedFontSize() const { return default_fixed_font_size_; } \
    void SetDefaultFixedFontSize(int default_fixed_font_size); \
    int GetDefaultFontSize() const { return default_font_size_; } \
    void SetDefaultFontSize(int default_font_size); \
    const String& GetDefaultTextEncodingName() const { return default_text_encoding_name_; } \
    void SetDefaultTextEncodingName(const String& default_text_encoding_name); \
    const String& GetDefaultVideoPosterURL() const { return default_video_poster_url_; } \
    void SetDefaultVideoPosterURL(const String& default_video_poster_url); \
    double GetDeviceScaleAdjustment() const { return device_scale_adjustment_; } \
    void SetDeviceScaleAdjustment(double device_scale_adjustment); \
    bool GetDisableReadingFromCanvas() const { return disable_reading_from_canvas_; } \
    void SetDisableReadingFromCanvas(bool disable_reading_from_canvas); \
    bool GetDisallowFetchForDocWrittenScriptsInMainFrame() const { return disallow_fetch_for_doc_written_scripts_in_main_frame_; } \
    void SetDisallowFetchForDocWrittenScriptsInMainFrame(bool disallow_fetch_for_doc_written_scripts_in_main_frame); \
    bool GetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G() const { return disallow_fetch_for_doc_written_scripts_in_main_frame_if_effectively_2_g_; } \
    void SetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(bool disallow_fetch_for_doc_written_scripts_in_main_frame_if_effectively_2_g); \
    bool GetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections() const { return disallow_fetch_for_doc_written_scripts_in_main_frame_on_slow_connections_; } \
    void SetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(bool disallow_fetch_for_doc_written_scripts_in_main_frame_on_slow_connections); \
    blink::mojom::DisplayMode GetDisplayModeOverride() const { return display_mode_override_; } \
    void SetDisplayModeOverride(blink::mojom::DisplayMode display_mode_override); \
    bool GetDNSPrefetchingEnabled() const { return dns_prefetching_enabled_; } \
    void SetDNSPrefetchingEnabled(bool dns_prefetching_enabled); \
    bool GetDoHtmlPreloadScanning() const { return do_html_preload_scanning_; } \
    void SetDoHtmlPreloadScanning(bool do_html_preload_scanning); \
    bool GetDoNotUpdateSelectionOnMutatingSelectionRange() const { return do_not_update_selection_on_mutating_selection_range_; } \
    void SetDoNotUpdateSelectionOnMutatingSelectionRange(bool do_not_update_selection_on_mutating_selection_range); \
    bool GetDownloadableBinaryFontsEnabled() const { return downloadable_binary_fonts_enabled_; } \
    void SetDownloadableBinaryFontsEnabled(bool downloadable_binary_fonts_enabled); \
    mojom::EditingBehavior GetEditingBehaviorType() const { return editing_behavior_type_; } \
    void SetEditingBehaviorType(mojom::EditingBehavior editing_behavior_type); \
    bool GetEmbeddedMediaExperienceEnabled() const { return embedded_media_experience_enabled_; } \
    void SetEmbeddedMediaExperienceEnabled(bool embedded_media_experience_enabled); \
    bool GetForceAndroidOverlayScrollbar() const { return force_android_overlay_scrollbar_; } \
    void SetForceAndroidOverlayScrollbar(bool force_android_overlay_scrollbar); \
    bool GetForceDarkModeEnabled() const { return force_dark_mode_enabled_; } \
    void SetForceDarkModeEnabled(bool force_dark_mode_enabled); \
    bool GetForceMainWorldInitialization() const { return force_main_world_initialization_; } \
    void SetForceMainWorldInitialization(bool force_main_world_initialization); \
    bool GetForceTouchEventFeatureDetectionForInspector() const { return force_touch_event_feature_detection_for_inspector_; } \
    void SetForceTouchEventFeatureDetectionForInspector(bool force_touch_event_feature_detection_for_inspector); \
    bool GetForceZeroLayoutHeight() const { return force_zero_layout_height_; } \
    void SetForceZeroLayoutHeight(bool force_zero_layout_height); \
    bool GetFullscreenSupported() const { return fullscreen_supported_; } \
    void SetFullscreenSupported(bool fullscreen_supported); \
    bool GetHideDownloadUI() const { return hide_download_ui_; } \
    void SetHideDownloadUI(bool hide_download_ui); \
    bool GetHideScrollbars() const { return hide_scrollbars_; } \
    void SetHideScrollbars(bool hide_scrollbars); \
    bool GetHyperlinkAuditingEnabled() const { return hyperlink_auditing_enabled_; } \
    void SetHyperlinkAuditingEnabled(bool hyperlink_auditing_enabled); \
    bool GetIgnoreMainFrameOverflowHiddenQuirk() const { return ignore_main_frame_overflow_hidden_quirk_; } \
    void SetIgnoreMainFrameOverflowHiddenQuirk(bool ignore_main_frame_overflow_hidden_quirk); \
    mojom::blink::ImageAnimationPolicy GetImageAnimationPolicy() const { return image_animation_policy_; } \
    void SetImageAnimationPolicy(mojom::blink::ImageAnimationPolicy image_animation_policy); \
    bool GetImagesEnabled() const { return images_enabled_; } \
    void SetImagesEnabled(bool images_enabled); \
    bool GetImmersiveModeEnabled() const { return immersive_mode_enabled_; } \
    void SetImmersiveModeEnabled(bool immersive_mode_enabled); \
    bool GetInlineTextBoxAccessibilityEnabled() const { return inline_text_box_accessibility_enabled_; } \
    void SetInlineTextBoxAccessibilityEnabled(bool inline_text_box_accessibility_enabled); \
    bool GetJavaScriptCanAccessClipboard() const { return java_script_can_access_clipboard_; } \
    void SetJavaScriptCanAccessClipboard(bool java_script_can_access_clipboard); \
    int GetLazyFrameLoadingDistanceThresholdPx2G() const { return lazy_frame_loading_distance_threshold_px_2_g_; } \
    void SetLazyFrameLoadingDistanceThresholdPx2G(int lazy_frame_loading_distance_threshold_px_2_g); \
    int GetLazyFrameLoadingDistanceThresholdPx3G() const { return lazy_frame_loading_distance_threshold_px_3_g_; } \
    void SetLazyFrameLoadingDistanceThresholdPx3G(int lazy_frame_loading_distance_threshold_px_3_g); \
    int GetLazyFrameLoadingDistanceThresholdPx4G() const { return lazy_frame_loading_distance_threshold_px_4_g_; } \
    void SetLazyFrameLoadingDistanceThresholdPx4G(int lazy_frame_loading_distance_threshold_px_4_g); \
    int GetLazyFrameLoadingDistanceThresholdPxOffline() const { return lazy_frame_loading_distance_threshold_px_offline_; } \
    void SetLazyFrameLoadingDistanceThresholdPxOffline(int lazy_frame_loading_distance_threshold_px_offline); \
    int GetLazyFrameLoadingDistanceThresholdPxSlow2G() const { return lazy_frame_loading_distance_threshold_px_slow_2_g_; } \
    void SetLazyFrameLoadingDistanceThresholdPxSlow2G(int lazy_frame_loading_distance_threshold_px_slow_2_g); \
    int GetLazyFrameLoadingDistanceThresholdPxUnknown() const { return lazy_frame_loading_distance_threshold_px_unknown_; } \
    void SetLazyFrameLoadingDistanceThresholdPxUnknown(int lazy_frame_loading_distance_threshold_px_unknown); \
    int GetLazyImageLoadingDistanceThresholdPx2G() const { return lazy_image_loading_distance_threshold_px_2_g_; } \
    void SetLazyImageLoadingDistanceThresholdPx2G(int lazy_image_loading_distance_threshold_px_2_g); \
    int GetLazyImageLoadingDistanceThresholdPx3G() const { return lazy_image_loading_distance_threshold_px_3_g_; } \
    void SetLazyImageLoadingDistanceThresholdPx3G(int lazy_image_loading_distance_threshold_px_3_g); \
    int GetLazyImageLoadingDistanceThresholdPx4G() const { return lazy_image_loading_distance_threshold_px_4_g_; } \
    void SetLazyImageLoadingDistanceThresholdPx4G(int lazy_image_loading_distance_threshold_px_4_g); \
    int GetLazyImageLoadingDistanceThresholdPxOffline() const { return lazy_image_loading_distance_threshold_px_offline_; } \
    void SetLazyImageLoadingDistanceThresholdPxOffline(int lazy_image_loading_distance_threshold_px_offline); \
    int GetLazyImageLoadingDistanceThresholdPxSlow2G() const { return lazy_image_loading_distance_threshold_px_slow_2_g_; } \
    void SetLazyImageLoadingDistanceThresholdPxSlow2G(int lazy_image_loading_distance_threshold_px_slow_2_g); \
    int GetLazyImageLoadingDistanceThresholdPxUnknown() const { return lazy_image_loading_distance_threshold_px_unknown_; } \
    void SetLazyImageLoadingDistanceThresholdPxUnknown(int lazy_image_loading_distance_threshold_px_unknown); \
    bool GetLazyLoadEnabled() const { return lazy_load_enabled_; } \
    void SetLazyLoadEnabled(bool lazy_load_enabled); \
    bool GetLoadWithOverviewMode() const { return load_with_overview_mode_; } \
    void SetLoadWithOverviewMode(bool load_with_overview_mode); \
    bool GetLoadsImagesAutomatically() const { return loads_images_automatically_; } \
    void SetLoadsImagesAutomatically(bool loads_images_automatically); \
    bool GetLocalStorageEnabled() const { return local_storage_enabled_; } \
    void SetLocalStorageEnabled(bool local_storage_enabled); \
    bool GetLogDnsPrefetchAndPreconnect() const { return log_dns_prefetch_and_preconnect_; } \
    void SetLogDnsPrefetchAndPreconnect(bool log_dns_prefetch_and_preconnect); \
    bool GetLogPreload() const { return log_preload_; } \
    void SetLogPreload(bool log_preload); \
    WebEffectiveConnectionType GetLowPriorityIframesThreshold() const { return low_priority_iframes_threshold_; } \
    void SetLowPriorityIframesThreshold(WebEffectiveConnectionType low_priority_iframes_threshold); \
    bool GetMainFrameClipsContent() const { return main_frame_clips_content_; } \
    void SetMainFrameClipsContent(bool main_frame_clips_content); \
    bool GetMainFrameResizesAreOrientationChanges() const { return main_frame_resizes_are_orientation_changes_; } \
    void SetMainFrameResizesAreOrientationChanges(bool main_frame_resizes_are_orientation_changes); \
    int GetMaxTouchPoints() const { return max_touch_points_; } \
    void SetMaxTouchPoints(int max_touch_points); \
    bool GetMediaControlsEnabled() const { return media_controls_enabled_; } \
    void SetMediaControlsEnabled(bool media_controls_enabled); \
    const String& GetMediaTypeOverride() const { return media_type_override_; } \
    void SetMediaTypeOverride(const String& media_type_override); \
    int GetMinimumFontSize() const { return minimum_font_size_; } \
    void SetMinimumFontSize(int minimum_font_size); \
    int GetMinimumLogicalFontSize() const { return minimum_logical_font_size_; } \
    void SetMinimumLogicalFontSize(int minimum_logical_font_size); \
    bool GetMockGestureTapHighlightsEnabled() const { return mock_gesture_tap_highlights_enabled_; } \
    void SetMockGestureTapHighlightsEnabled(bool mock_gesture_tap_highlights_enabled); \
    bool GetMultiTargetTapNotificationEnabled() const { return multi_target_tap_notification_enabled_; } \
    void SetMultiTargetTapNotificationEnabled(bool multi_target_tap_notification_enabled); \
    bool GetNavigateOnDragDrop() const { return navigate_on_drag_drop_; } \
    void SetNavigateOnDragDrop(bool navigate_on_drag_drop); \
    NavigationControls GetNavigationControls() const { return navigation_controls_; } \
    void SetNavigationControls(NavigationControls navigation_controls); \
    const String& GetNavigatorPlatformOverride() const { return navigator_platform_override_; } \
    void SetNavigatorPlatformOverride(const String& navigator_platform_override); \
    ParserScriptingFlagPolicy GetParserScriptingFlagPolicy() const { return parser_scripting_flag_policy_; } \
    void SetParserScriptingFlagPolicy(ParserScriptingFlagPolicy parser_scripting_flag_policy); \
    double GetPasswordEchoDurationInSeconds() const { return password_echo_duration_in_seconds_; } \
    void SetPasswordEchoDurationInSeconds(double password_echo_duration_in_seconds); \
    bool GetPasswordEchoEnabled() const { return password_echo_enabled_; } \
    void SetPasswordEchoEnabled(bool password_echo_enabled); \
    bool GetPictureInPictureEnabled() const { return picture_in_picture_enabled_; } \
    void SetPictureInPictureEnabled(bool picture_in_picture_enabled); \
    bool GetPluginsEnabled() const { return plugins_enabled_; } \
    void SetPluginsEnabled(bool plugins_enabled); \
    bool GetPreferCompositingToLCDTextEnabled() const { return prefer_compositing_to_lcd_text_enabled_; } \
    void SetPreferCompositingToLCDTextEnabled(bool prefer_compositing_to_lcd_text_enabled); \
    bool GetPreferHiddenVolumeControls() const { return prefer_hidden_volume_controls_; } \
    void SetPreferHiddenVolumeControls(bool prefer_hidden_volume_controls); \
    mojom::blink::PreferredColorScheme GetPreferredColorScheme() const { return preferred_color_scheme_; } \
    void SetPreferredColorScheme(mojom::blink::PreferredColorScheme preferred_color_scheme); \
    mojom::blink::PreferredContrast GetPreferredContrast() const { return preferred_contrast_; } \
    void SetPreferredContrast(mojom::blink::PreferredContrast preferred_contrast); \
    bool GetPrefersReducedMotion() const { return prefers_reduced_motion_; } \
    void SetPrefersReducedMotion(bool prefers_reduced_motion); \
    bool GetPresentationReceiver() const { return presentation_receiver_; } \
    void SetPresentationReceiver(bool presentation_receiver); \
    bool GetPresentationRequiresUserGesture() const { return presentation_requires_user_gesture_; } \
    void SetPresentationRequiresUserGesture(bool presentation_requires_user_gesture); \
    mojom::blink::HoverType GetPrimaryHoverType() const { return primary_hover_type_; } \
    void SetPrimaryHoverType(mojom::blink::HoverType primary_hover_type); \
    blink::mojom::PointerType GetPrimaryPointerType() const { return primary_pointer_type_; } \
    void SetPrimaryPointerType(blink::mojom::PointerType primary_pointer_type); \
    bool GetReportScreenSizeInPhysicalPixelsQuirk() const { return report_screen_size_in_physical_pixels_quirk_; } \
    void SetReportScreenSizeInPhysicalPixelsQuirk(bool report_screen_size_in_physical_pixels_quirk); \
    bool GetRubberBandingOnCompositorThread() const { return rubber_banding_on_compositor_thread_; } \
    void SetRubberBandingOnCompositorThread(bool rubber_banding_on_compositor_thread); \
    bool GetScriptEnabled() const { return script_enabled_; } \
    void SetScriptEnabled(bool script_enabled); \
    bool GetScrollAnimatorEnabled() const { return scroll_animator_enabled_; } \
    void SetScrollAnimatorEnabled(bool scroll_animator_enabled); \
    bool GetSelectTrailingWhitespaceEnabled() const { return select_trailing_whitespace_enabled_; } \
    void SetSelectTrailingWhitespaceEnabled(bool select_trailing_whitespace_enabled); \
    bool GetSelectionClipboardBufferAvailable() const { return selection_clipboard_buffer_available_; } \
    void SetSelectionClipboardBufferAvailable(bool selection_clipboard_buffer_available); \
    bool GetSelectionIncludesAltImageText() const { return selection_includes_alt_image_text_; } \
    void SetSelectionIncludesAltImageText(bool selection_includes_alt_image_text); \
    SelectionStrategy GetSelectionStrategy() const { return selection_strategy_; } \
    void SetSelectionStrategy(SelectionStrategy selection_strategy); \
    bool GetShouldClearDocumentBackground() const { return should_clear_document_background_; } \
    void SetShouldClearDocumentBackground(bool should_clear_document_background); \
    bool GetShouldPrintBackgrounds() const { return should_print_backgrounds_; } \
    void SetShouldPrintBackgrounds(bool should_print_backgrounds); \
    bool GetShouldProtectAgainstIpcFlooding() const { return should_protect_against_ipc_flooding_; } \
    void SetShouldProtectAgainstIpcFlooding(bool should_protect_against_ipc_flooding); \
    bool GetShouldReuseGlobalForUnownedMainFrame() const { return should_reuse_global_for_unowned_main_frame_; } \
    void SetShouldReuseGlobalForUnownedMainFrame(bool should_reuse_global_for_unowned_main_frame); \
    bool GetShowContextMenuOnMouseUp() const { return show_context_menu_on_mouse_up_; } \
    void SetShowContextMenuOnMouseUp(bool show_context_menu_on_mouse_up); \
    bool GetShrinksViewportContentToFit() const { return shrinks_viewport_content_to_fit_; } \
    void SetShrinksViewportContentToFit(bool shrinks_viewport_content_to_fit); \
    bool GetSmartInsertDeleteEnabled() const { return smart_insert_delete_enabled_; } \
    void SetSmartInsertDeleteEnabled(bool smart_insert_delete_enabled); \
    bool GetSmoothScrollForFindEnabled() const { return smooth_scroll_for_find_enabled_; } \
    void SetSmoothScrollForFindEnabled(bool smooth_scroll_for_find_enabled); \
    bool GetSpatialNavigationEnabled() const { return spatial_navigation_enabled_; } \
    void SetSpatialNavigationEnabled(bool spatial_navigation_enabled); \
    bool GetSpellCheckEnabledByDefault() const { return spell_check_enabled_by_default_; } \
    void SetSpellCheckEnabledByDefault(bool spell_check_enabled_by_default); \
    bool GetStrictMixedContentChecking() const { return strict_mixed_content_checking_; } \
    void SetStrictMixedContentChecking(bool strict_mixed_content_checking); \
    bool GetStrictMixedContentCheckingForPlugin() const { return strict_mixed_content_checking_for_plugin_; } \
    void SetStrictMixedContentCheckingForPlugin(bool strict_mixed_content_checking_for_plugin); \
    bool GetStrictPowerfulFeatureRestrictions() const { return strict_powerful_feature_restrictions_; } \
    void SetStrictPowerfulFeatureRestrictions(bool strict_powerful_feature_restrictions); \
    bool GetStrictlyBlockBlockableMixedContent() const { return strictly_block_blockable_mixed_content_; } \
    void SetStrictlyBlockBlockableMixedContent(bool strictly_block_blockable_mixed_content); \
    bool GetSupportsMultipleWindows() const { return supports_multiple_windows_; } \
    void SetSupportsMultipleWindows(bool supports_multiple_windows); \
    bool GetSyncXHRInDocumentsEnabled() const { return sync_xhr_in_documents_enabled_; } \
    void SetSyncXHRInDocumentsEnabled(bool sync_xhr_in_documents_enabled); \
    bool GetTargetBlankImpliesNoOpenerEnabledWillBeRemoved() const { return target_blank_implies_no_opener_enabled_will_be_removed_; } \
    void SetTargetBlankImpliesNoOpenerEnabledWillBeRemoved(bool target_blank_implies_no_opener_enabled_will_be_removed); \
    bool GetTextAreasAreResizable() const { return text_areas_are_resizable_; } \
    void SetTextAreasAreResizable(bool text_areas_are_resizable); \
    bool GetTextAutosizingEnabled() const { return text_autosizing_enabled_; } \
    void SetTextAutosizingEnabled(bool text_autosizing_enabled); \
    gfx::Size GetTextAutosizingWindowSizeOverride() const { return text_autosizing_window_size_override_; } \
    void SetTextAutosizingWindowSizeOverride(gfx::Size text_autosizing_window_size_override); \
    const String& GetTextTrackBackgroundColor() const { return text_track_background_color_; } \
    void SetTextTrackBackgroundColor(const String& text_track_background_color); \
    const String& GetTextTrackFontFamily() const { return text_track_font_family_; } \
    void SetTextTrackFontFamily(const String& text_track_font_family); \
    const String& GetTextTrackFontStyle() const { return text_track_font_style_; } \
    void SetTextTrackFontStyle(const String& text_track_font_style); \
    const String& GetTextTrackFontVariant() const { return text_track_font_variant_; } \
    void SetTextTrackFontVariant(const String& text_track_font_variant); \
    TextTrackKindUserPreference GetTextTrackKindUserPreference() const { return text_track_kind_user_preference_; } \
    void SetTextTrackKindUserPreference(TextTrackKindUserPreference text_track_kind_user_preference); \
    double GetTextTrackMarginPercentage() const { return text_track_margin_percentage_; } \
    void SetTextTrackMarginPercentage(double text_track_margin_percentage); \
    const String& GetTextTrackTextColor() const { return text_track_text_color_; } \
    void SetTextTrackTextColor(const String& text_track_text_color); \
    const String& GetTextTrackTextShadow() const { return text_track_text_shadow_; } \
    void SetTextTrackTextShadow(const String& text_track_text_shadow); \
    const String& GetTextTrackTextSize() const { return text_track_text_size_; } \
    void SetTextTrackTextSize(const String& text_track_text_size); \
    const String& GetTextTrackWindowColor() const { return text_track_window_color_; } \
    void SetTextTrackWindowColor(const String& text_track_window_color); \
    const String& GetTextTrackWindowRadius() const { return text_track_window_radius_; } \
    void SetTextTrackWindowRadius(const String& text_track_window_radius); \
    bool GetThreadedScrollingEnabled() const { return threaded_scrolling_enabled_; } \
    void SetThreadedScrollingEnabled(bool threaded_scrolling_enabled); \
    bool GetTouchDragDropEnabled() const { return touch_drag_drop_enabled_; } \
    void SetTouchDragDropEnabled(bool touch_drag_drop_enabled); \
    bool GetTouchDragEndContextMenu() const { return touch_drag_end_context_menu_; } \
    void SetTouchDragEndContextMenu(bool touch_drag_end_context_menu); \
    bool GetTouchEditingEnabled() const { return touch_editing_enabled_; } \
    void SetTouchEditingEnabled(bool touch_editing_enabled); \
    bool GetUseAXMenuList() const { return use_ax_menu_list_; } \
    void SetUseAXMenuList(bool use_ax_menu_list); \
    bool GetUseLegacyBackgroundSizeShorthandBehavior() const { return use_legacy_background_size_shorthand_behavior_; } \
    void SetUseLegacyBackgroundSizeShorthandBehavior(bool use_legacy_background_size_shorthand_behavior); \
    bool GetUseWideViewport() const { return use_wide_viewport_; } \
    void SetUseWideViewport(bool use_wide_viewport); \
    mojom::blink::V8CacheOptions GetV8CacheOptions() const { return v8_cache_options_; } \
    void SetV8CacheOptions(mojom::blink::V8CacheOptions v8_cache_options); \
    int GetValidationMessageTimerMagnification() const { return validation_message_timer_magnification_; } \
    void SetValidationMessageTimerMagnification(int validation_message_timer_magnification); \
    bool GetViewportEnabled() const { return viewport_enabled_; } \
    void SetViewportEnabled(bool viewport_enabled); \
    bool GetViewportMetaEnabled() const { return viewport_meta_enabled_; } \
    void SetViewportMetaEnabled(bool viewport_meta_enabled); \
    bool GetViewportMetaMergeContentQuirk() const { return viewport_meta_merge_content_quirk_; } \
    void SetViewportMetaMergeContentQuirk(bool viewport_meta_merge_content_quirk); \
    bool GetViewportMetaZeroValuesQuirk() const { return viewport_meta_zero_values_quirk_; } \
    void SetViewportMetaZeroValuesQuirk(bool viewport_meta_zero_values_quirk); \
    mojom::blink::ViewportStyle GetViewportStyle() const { return viewport_style_; } \
    void SetViewportStyle(mojom::blink::ViewportStyle viewport_style); \
    const String& GetWebAppScope() const { return web_app_scope_; } \
    void SetWebAppScope(const String& web_app_scope); \
    bool GetWebGL1Enabled() const { return web_gl_1_enabled_; } \
    void SetWebGL1Enabled(bool web_gl_1_enabled); \
    bool GetWebGL2Enabled() const { return webgl2_enabled_; } \
    void SetWebGL2Enabled(bool webgl2_enabled); \
    bool GetWebGLErrorsToConsoleEnabled() const { return web_gl_errors_to_console_enabled_; } \
    void SetWebGLErrorsToConsoleEnabled(bool web_gl_errors_to_console_enabled); \
    bool GetWebSecurityEnabled() const { return web_security_enabled_; } \
    void SetWebSecurityEnabled(bool web_security_enabled); \
    bool GetWideViewportQuirkEnabled() const { return wide_viewport_quirk_enabled_; } \
    void SetWideViewportQuirkEnabled(bool wide_viewport_quirk_enabled); \
    void SetFromStrings(const String& name, const String& value);
// End of SETTINGS_GETTERS_AND_SETTERS.

#define SETTINGS_MEMBER_VARIABLES \
    double network_quiet_timeout_; \
    int accelerated_2d_canvas_msaa_sample_count_; \
    double accessibility_font_scale_factor_; \
    AutoplayPolicy::Type autoplay_policy_; \
    int available_hover_types_; \
    int available_pointer_types_; \
    int default_fixed_font_size_; \
    int default_font_size_; \
    String default_text_encoding_name_; \
    String default_video_poster_url_; \
    double device_scale_adjustment_; \
    blink::mojom::DisplayMode display_mode_override_; \
    mojom::EditingBehavior editing_behavior_type_; \
    mojom::blink::ImageAnimationPolicy image_animation_policy_; \
    int lazy_frame_loading_distance_threshold_px_2_g_; \
    int lazy_frame_loading_distance_threshold_px_3_g_; \
    int lazy_frame_loading_distance_threshold_px_4_g_; \
    int lazy_frame_loading_distance_threshold_px_offline_; \
    int lazy_frame_loading_distance_threshold_px_slow_2_g_; \
    int lazy_frame_loading_distance_threshold_px_unknown_; \
    int lazy_image_loading_distance_threshold_px_2_g_; \
    int lazy_image_loading_distance_threshold_px_3_g_; \
    int lazy_image_loading_distance_threshold_px_4_g_; \
    int lazy_image_loading_distance_threshold_px_offline_; \
    int lazy_image_loading_distance_threshold_px_slow_2_g_; \
    int lazy_image_loading_distance_threshold_px_unknown_; \
    WebEffectiveConnectionType low_priority_iframes_threshold_; \
    int max_touch_points_; \
    String media_type_override_; \
    int minimum_font_size_; \
    int minimum_logical_font_size_; \
    NavigationControls navigation_controls_; \
    String navigator_platform_override_; \
    ParserScriptingFlagPolicy parser_scripting_flag_policy_; \
    double password_echo_duration_in_seconds_; \
    mojom::blink::PreferredColorScheme preferred_color_scheme_; \
    mojom::blink::PreferredContrast preferred_contrast_; \
    mojom::blink::HoverType primary_hover_type_; \
    blink::mojom::PointerType primary_pointer_type_; \
    SelectionStrategy selection_strategy_; \
    gfx::Size text_autosizing_window_size_override_; \
    String text_track_background_color_; \
    String text_track_font_family_; \
    String text_track_font_style_; \
    String text_track_font_variant_; \
    TextTrackKindUserPreference text_track_kind_user_preference_; \
    double text_track_margin_percentage_; \
    String text_track_text_color_; \
    String text_track_text_shadow_; \
    String text_track_text_size_; \
    String text_track_window_color_; \
    String text_track_window_radius_; \
    mojom::blink::V8CacheOptions v8_cache_options_; \
    int validation_message_timer_magnification_; \
    mojom::blink::ViewportStyle viewport_style_; \
    String web_app_scope_; \
    bool dom_paste_allowed_ : 1; \
    bool dont_send_key_events_to_javascript_ : 1; \
    bool highlight_ads_ : 1; \
    bool web_xr_immersive_ar_allowed_ : 1; \
    bool accelerated_compositing_enabled_ : 1; \
    bool accessibility_always_show_focus_ : 1; \
    bool accessibility_include_svg_g_element_ : 1; \
    bool accessibility_password_values_enabled_ : 1; \
    bool allow_custom_scrollbar_in_main_frame_ : 1; \
    bool allow_file_access_from_file_urls_ : 1; \
    bool allow_geolocation_on_insecure_origins_ : 1; \
    bool allow_non_empty_navigator_plugins_ : 1; \
    bool allow_running_of_insecure_content_ : 1; \
    bool allow_scripts_to_close_windows_ : 1; \
    bool allow_universal_access_from_file_urls_ : 1; \
    bool always_show_context_menu_on_touch_ : 1; \
    bool antialiased_2d_canvas_enabled_ : 1; \
    bool antialiased_clips_2d_canvas_enabled_ : 1; \
    bool aria_modal_prunes_ax_tree_ : 1; \
    bool barrel_button_for_drag_enabled_ : 1; \
    bool bypass_csp_ : 1; \
    bool caret_browsing_enabled_ : 1; \
    bool cookie_enabled_ : 1; \
    bool disable_reading_from_canvas_ : 1; \
    bool disallow_fetch_for_doc_written_scripts_in_main_frame_ : 1; \
    bool disallow_fetch_for_doc_written_scripts_in_main_frame_if_effectively_2_g_ : 1; \
    bool disallow_fetch_for_doc_written_scripts_in_main_frame_on_slow_connections_ : 1; \
    bool dns_prefetching_enabled_ : 1; \
    bool do_html_preload_scanning_ : 1; \
    bool do_not_update_selection_on_mutating_selection_range_ : 1; \
    bool downloadable_binary_fonts_enabled_ : 1; \
    bool embedded_media_experience_enabled_ : 1; \
    bool force_android_overlay_scrollbar_ : 1; \
    bool force_dark_mode_enabled_ : 1; \
    bool force_main_world_initialization_ : 1; \
    bool force_touch_event_feature_detection_for_inspector_ : 1; \
    bool force_zero_layout_height_ : 1; \
    bool fullscreen_supported_ : 1; \
    bool hide_download_ui_ : 1; \
    bool hide_scrollbars_ : 1; \
    bool hyperlink_auditing_enabled_ : 1; \
    bool ignore_main_frame_overflow_hidden_quirk_ : 1; \
    bool images_enabled_ : 1; \
    bool immersive_mode_enabled_ : 1; \
    bool inline_text_box_accessibility_enabled_ : 1; \
    bool java_script_can_access_clipboard_ : 1; \
    bool lazy_load_enabled_ : 1; \
    bool load_with_overview_mode_ : 1; \
    bool loads_images_automatically_ : 1; \
    bool local_storage_enabled_ : 1; \
    bool log_dns_prefetch_and_preconnect_ : 1; \
    bool log_preload_ : 1; \
    bool main_frame_clips_content_ : 1; \
    bool main_frame_resizes_are_orientation_changes_ : 1; \
    bool media_controls_enabled_ : 1; \
    bool mock_gesture_tap_highlights_enabled_ : 1; \
    bool multi_target_tap_notification_enabled_ : 1; \
    bool navigate_on_drag_drop_ : 1; \
    bool password_echo_enabled_ : 1; \
    bool picture_in_picture_enabled_ : 1; \
    bool plugins_enabled_ : 1; \
    bool prefer_compositing_to_lcd_text_enabled_ : 1; \
    bool prefer_hidden_volume_controls_ : 1; \
    bool prefers_reduced_motion_ : 1; \
    bool presentation_receiver_ : 1; \
    bool presentation_requires_user_gesture_ : 1; \
    bool report_screen_size_in_physical_pixels_quirk_ : 1; \
    bool rubber_banding_on_compositor_thread_ : 1; \
    bool script_enabled_ : 1; \
    bool scroll_animator_enabled_ : 1; \
    bool select_trailing_whitespace_enabled_ : 1; \
    bool selection_clipboard_buffer_available_ : 1; \
    bool selection_includes_alt_image_text_ : 1; \
    bool should_clear_document_background_ : 1; \
    bool should_print_backgrounds_ : 1; \
    bool should_protect_against_ipc_flooding_ : 1; \
    bool should_reuse_global_for_unowned_main_frame_ : 1; \
    bool show_context_menu_on_mouse_up_ : 1; \
    bool shrinks_viewport_content_to_fit_ : 1; \
    bool smart_insert_delete_enabled_ : 1; \
    bool smooth_scroll_for_find_enabled_ : 1; \
    bool spatial_navigation_enabled_ : 1; \
    bool spell_check_enabled_by_default_ : 1; \
    bool strict_mixed_content_checking_ : 1; \
    bool strict_mixed_content_checking_for_plugin_ : 1; \
    bool strict_powerful_feature_restrictions_ : 1; \
    bool strictly_block_blockable_mixed_content_ : 1; \
    bool supports_multiple_windows_ : 1; \
    bool sync_xhr_in_documents_enabled_ : 1; \
    bool target_blank_implies_no_opener_enabled_will_be_removed_ : 1; \
    bool text_areas_are_resizable_ : 1; \
    bool text_autosizing_enabled_ : 1; \
    bool threaded_scrolling_enabled_ : 1; \
    bool touch_drag_drop_enabled_ : 1; \
    bool touch_drag_end_context_menu_ : 1; \
    bool touch_editing_enabled_ : 1; \
    bool use_ax_menu_list_ : 1; \
    bool use_legacy_background_size_shorthand_behavior_ : 1; \
    bool use_wide_viewport_ : 1; \
    bool viewport_enabled_ : 1; \
    bool viewport_meta_enabled_ : 1; \
    bool viewport_meta_merge_content_quirk_ : 1; \
    bool viewport_meta_zero_values_quirk_ : 1; \
    bool web_gl_1_enabled_ : 1; \
    bool webgl2_enabled_ : 1; \
    bool web_gl_errors_to_console_enabled_ : 1; \
    bool web_security_enabled_ : 1; \
    bool wide_viewport_quirk_enabled_ : 1; \
// End of SETTINGS_MEMBER_VARIABLES.

#define SETTINGS_INITIALIZER_LIST \
    , network_quiet_timeout_(0.5) \
    , accelerated_2d_canvas_msaa_sample_count_(0) \
    , accessibility_font_scale_factor_(1.0) \
    , autoplay_policy_(AutoplayPolicy::Type::kNoUserGestureRequired) \
    , available_hover_types_(ui::HOVER_TYPE_NONE) \
    , available_pointer_types_(ui::POINTER_TYPE_NONE) \
    , default_fixed_font_size_(0) \
    , default_font_size_(0) \
    , device_scale_adjustment_(1.0) \
    , display_mode_override_(blink::mojom::DisplayMode::kUndefined) \
    , editing_behavior_type_(EditingBehaviorTypeForPlatform()) \
    , image_animation_policy_(mojom::blink::ImageAnimationPolicy::kImageAnimationPolicyAllowed) \
    , lazy_frame_loading_distance_threshold_px_2_g_(6000) \
    , lazy_frame_loading_distance_threshold_px_3_g_(3500) \
    , lazy_frame_loading_distance_threshold_px_4_g_(2500) \
    , lazy_frame_loading_distance_threshold_px_offline_(8000) \
    , lazy_frame_loading_distance_threshold_px_slow_2_g_(8000) \
    , lazy_frame_loading_distance_threshold_px_unknown_(4000) \
    , lazy_image_loading_distance_threshold_px_2_g_(6000) \
    , lazy_image_loading_distance_threshold_px_3_g_(2500) \
    , lazy_image_loading_distance_threshold_px_4_g_(1250) \
    , lazy_image_loading_distance_threshold_px_offline_(8000) \
    , lazy_image_loading_distance_threshold_px_slow_2_g_(8000) \
    , lazy_image_loading_distance_threshold_px_unknown_(3000) \
    , low_priority_iframes_threshold_(WebEffectiveConnectionType::kTypeUnknown) \
    , max_touch_points_(0) \
    , media_type_override_("") \
    , minimum_font_size_(0) \
    , minimum_logical_font_size_(0) \
    , navigation_controls_(NavigationControls::kNone) \
    , parser_scripting_flag_policy_(ParserScriptingFlagPolicy::kOnlyIfScriptIsEnabled) \
    , password_echo_duration_in_seconds_(1) \
    , preferred_color_scheme_(mojom::blink::PreferredColorScheme::kLight) \
    , preferred_contrast_(mojom::blink::PreferredContrast::kNoPreference) \
    , primary_hover_type_(mojom::blink::HoverType::kHoverNone) \
    , primary_pointer_type_(mojom::blink::PointerType::kPointerNone) \
    , selection_strategy_(SelectionStrategy::kCharacter) \
    , text_track_kind_user_preference_(TextTrackKindUserPreference::kDefault) \
    , text_track_margin_percentage_(0) \
    , v8_cache_options_(mojom::blink::V8CacheOptions::kDefault) \
    , validation_message_timer_magnification_(50) \
    , viewport_style_(mojom::blink::ViewportStyle::kDefault) \
    , dom_paste_allowed_(false) \
    , dont_send_key_events_to_javascript_(false) \
    , highlight_ads_(false) \
    , web_xr_immersive_ar_allowed_(true) \
    , accelerated_compositing_enabled_(false) \
    , accessibility_always_show_focus_(false) \
    , accessibility_include_svg_g_element_(false) \
    , accessibility_password_values_enabled_(false) \
    , allow_custom_scrollbar_in_main_frame_(true) \
    , allow_file_access_from_file_urls_(true) \
    , allow_geolocation_on_insecure_origins_(false) \
    , allow_non_empty_navigator_plugins_(false) \
    , allow_running_of_insecure_content_(true) \
    , allow_scripts_to_close_windows_(false) \
    , allow_universal_access_from_file_urls_(true) \
    , always_show_context_menu_on_touch_(true) \
    , antialiased_2d_canvas_enabled_(true) \
    , antialiased_clips_2d_canvas_enabled_(true) \
    , aria_modal_prunes_ax_tree_(false) \
    , barrel_button_for_drag_enabled_(false) \
    , bypass_csp_(false) \
    , caret_browsing_enabled_(false) \
    , cookie_enabled_(true) \
    , disable_reading_from_canvas_(false) \
    , disallow_fetch_for_doc_written_scripts_in_main_frame_(false) \
    , disallow_fetch_for_doc_written_scripts_in_main_frame_if_effectively_2_g_(false) \
    , disallow_fetch_for_doc_written_scripts_in_main_frame_on_slow_connections_(true) \
    , dns_prefetching_enabled_(false) \
    , do_html_preload_scanning_(true) \
    , do_not_update_selection_on_mutating_selection_range_(false) \
    , downloadable_binary_fonts_enabled_(true) \
    , embedded_media_experience_enabled_(false) \
    , force_android_overlay_scrollbar_(false) \
    , force_dark_mode_enabled_(false) \
    , force_main_world_initialization_(false) \
    , force_touch_event_feature_detection_for_inspector_(false) \
    , force_zero_layout_height_(false) \
    , fullscreen_supported_(true) \
    , hide_download_ui_(false) \
    , hide_scrollbars_(false) \
    , hyperlink_auditing_enabled_(false) \
    , ignore_main_frame_overflow_hidden_quirk_(false) \
    , images_enabled_(true) \
    , immersive_mode_enabled_(false) \
    , inline_text_box_accessibility_enabled_(false) \
    , java_script_can_access_clipboard_(false) \
    , lazy_load_enabled_(true) \
    , load_with_overview_mode_(true) \
    , loads_images_automatically_(false) \
    , local_storage_enabled_(false) \
    , log_dns_prefetch_and_preconnect_(false) \
    , log_preload_(false) \
    , main_frame_clips_content_(true) \
    , main_frame_resizes_are_orientation_changes_(false) \
    , media_controls_enabled_(true) \
    , mock_gesture_tap_highlights_enabled_(false) \
    , multi_target_tap_notification_enabled_(true) \
    , navigate_on_drag_drop_(true) \
    , password_echo_enabled_(false) \
    , picture_in_picture_enabled_(true) \
    , plugins_enabled_(false) \
    , prefer_compositing_to_lcd_text_enabled_(false) \
    , prefer_hidden_volume_controls_(false) \
    , prefers_reduced_motion_(false) \
    , presentation_receiver_(false) \
    , presentation_requires_user_gesture_(true) \
    , report_screen_size_in_physical_pixels_quirk_(false) \
    , rubber_banding_on_compositor_thread_(false) \
    , script_enabled_(false) \
    , scroll_animator_enabled_(true) \
    , select_trailing_whitespace_enabled_(kDefaultSelectTrailingWhitespaceEnabled) \
    , selection_clipboard_buffer_available_(false) \
    , selection_includes_alt_image_text_(false) \
    , should_clear_document_background_(true) \
    , should_print_backgrounds_(false) \
    , should_protect_against_ipc_flooding_(true) \
    , should_reuse_global_for_unowned_main_frame_(false) \
    , show_context_menu_on_mouse_up_(false) \
    , shrinks_viewport_content_to_fit_(false) \
    , smart_insert_delete_enabled_(false) \
    , smooth_scroll_for_find_enabled_(false) \
    , spatial_navigation_enabled_(false) \
    , spell_check_enabled_by_default_(true) \
    , strict_mixed_content_checking_(false) \
    , strict_mixed_content_checking_for_plugin_(false) \
    , strict_powerful_feature_restrictions_(false) \
    , strictly_block_blockable_mixed_content_(false) \
    , supports_multiple_windows_(true) \
    , sync_xhr_in_documents_enabled_(true) \
    , target_blank_implies_no_opener_enabled_will_be_removed_(true) \
    , text_areas_are_resizable_(false) \
    , text_autosizing_enabled_(false) \
    , threaded_scrolling_enabled_(true) \
    , touch_drag_drop_enabled_(false) \
    , touch_drag_end_context_menu_(false) \
    , touch_editing_enabled_(false) \
    , use_ax_menu_list_(true) \
    , use_legacy_background_size_shorthand_behavior_(false) \
    , use_wide_viewport_(true) \
    , viewport_enabled_(false) \
    , viewport_meta_enabled_(false) \
    , viewport_meta_merge_content_quirk_(false) \
    , viewport_meta_zero_values_quirk_(false) \
    , web_gl_1_enabled_(true) \
    , webgl2_enabled_(true) \
    , web_gl_errors_to_console_enabled_(true) \
    , web_security_enabled_(true) \
    , wide_viewport_quirk_enabled_(false) \
// End of SETTINGS_INITIALIZER_LIST.

#define SETTINGS_SETTER_BODIES \
void Settings::SetDOMPasteAllowed(bool dom_paste_allowed) { \
  if (dom_paste_allowed_ == dom_paste_allowed) \
    return; \
  dom_paste_allowed_ = dom_paste_allowed; \
} \
void Settings::SetDontSendKeyEventsToJavascript(bool dont_send_key_events_to_javascript) { \
  if (dont_send_key_events_to_javascript_ == dont_send_key_events_to_javascript) \
    return; \
  dont_send_key_events_to_javascript_ = dont_send_key_events_to_javascript; \
} \
void Settings::SetHighlightAds(bool highlight_ads) { \
  if (highlight_ads_ == highlight_ads) \
    return; \
  highlight_ads_ = highlight_ads; \
  Invalidate(SettingsDelegate::ChangeType::kHighlightAds); \
} \
void Settings::SetNetworkQuietTimeout(double network_quiet_timeout) { \
  if (network_quiet_timeout_ == network_quiet_timeout) \
    return; \
  network_quiet_timeout_ = network_quiet_timeout; \
} \
void Settings::SetWebXRImmersiveArAllowed(bool web_xr_immersive_ar_allowed) { \
  if (web_xr_immersive_ar_allowed_ == web_xr_immersive_ar_allowed) \
    return; \
  web_xr_immersive_ar_allowed_ = web_xr_immersive_ar_allowed; \
} \
void Settings::SetAccelerated2dCanvasMSAASampleCount(int accelerated_2d_canvas_msaa_sample_count) { \
  if (accelerated_2d_canvas_msaa_sample_count_ == accelerated_2d_canvas_msaa_sample_count) \
    return; \
  accelerated_2d_canvas_msaa_sample_count_ = accelerated_2d_canvas_msaa_sample_count; \
} \
void Settings::SetAcceleratedCompositingEnabled(bool accelerated_compositing_enabled) { \
  if (accelerated_compositing_enabled_ == accelerated_compositing_enabled) \
    return; \
  accelerated_compositing_enabled_ = accelerated_compositing_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kAcceleratedCompositing); \
} \
void Settings::SetAccessibilityAlwaysShowFocus(bool accessibility_always_show_focus) { \
  if (accessibility_always_show_focus_ == accessibility_always_show_focus) \
    return; \
  accessibility_always_show_focus_ = accessibility_always_show_focus; \
  Invalidate(SettingsDelegate::ChangeType::kStyle); \
} \
void Settings::SetAccessibilityFontScaleFactor(double accessibility_font_scale_factor) { \
  if (accessibility_font_scale_factor_ == accessibility_font_scale_factor) \
    return; \
  accessibility_font_scale_factor_ = accessibility_font_scale_factor; \
  Invalidate(SettingsDelegate::ChangeType::kTextAutosizing); \
} \
void Settings::SetAccessibilityIncludeSvgGElement(bool accessibility_include_svg_g_element) { \
  if (accessibility_include_svg_g_element_ == accessibility_include_svg_g_element) \
    return; \
  accessibility_include_svg_g_element_ = accessibility_include_svg_g_element; \
} \
void Settings::SetAccessibilityPasswordValuesEnabled(bool accessibility_password_values_enabled) { \
  if (accessibility_password_values_enabled_ == accessibility_password_values_enabled) \
    return; \
  accessibility_password_values_enabled_ = accessibility_password_values_enabled; \
} \
void Settings::SetAllowCustomScrollbarInMainFrame(bool allow_custom_scrollbar_in_main_frame) { \
  if (allow_custom_scrollbar_in_main_frame_ == allow_custom_scrollbar_in_main_frame) \
    return; \
  allow_custom_scrollbar_in_main_frame_ = allow_custom_scrollbar_in_main_frame; \
} \
void Settings::SetAllowFileAccessFromFileURLs(bool allow_file_access_from_file_urls) { \
  if (allow_file_access_from_file_urls_ == allow_file_access_from_file_urls) \
    return; \
  allow_file_access_from_file_urls_ = allow_file_access_from_file_urls; \
} \
void Settings::SetAllowGeolocationOnInsecureOrigins(bool allow_geolocation_on_insecure_origins) { \
  if (allow_geolocation_on_insecure_origins_ == allow_geolocation_on_insecure_origins) \
    return; \
  allow_geolocation_on_insecure_origins_ = allow_geolocation_on_insecure_origins; \
} \
void Settings::SetAllowNonEmptyNavigatorPlugins(bool allow_non_empty_navigator_plugins) { \
  if (allow_non_empty_navigator_plugins_ == allow_non_empty_navigator_plugins) \
    return; \
  allow_non_empty_navigator_plugins_ = allow_non_empty_navigator_plugins; \
} \
void Settings::SetAllowRunningOfInsecureContent(bool allow_running_of_insecure_content) { \
  if (allow_running_of_insecure_content_ == allow_running_of_insecure_content) \
    return; \
  allow_running_of_insecure_content_ = allow_running_of_insecure_content; \
} \
void Settings::SetAllowScriptsToCloseWindows(bool allow_scripts_to_close_windows) { \
  if (allow_scripts_to_close_windows_ == allow_scripts_to_close_windows) \
    return; \
  allow_scripts_to_close_windows_ = allow_scripts_to_close_windows; \
} \
void Settings::SetAllowUniversalAccessFromFileURLs(bool allow_universal_access_from_file_urls) { \
  if (allow_universal_access_from_file_urls_ == allow_universal_access_from_file_urls) \
    return; \
  allow_universal_access_from_file_urls_ = allow_universal_access_from_file_urls; \
  Invalidate(SettingsDelegate::ChangeType::kUniversalAccess); \
} \
void Settings::SetAlwaysShowContextMenuOnTouch(bool always_show_context_menu_on_touch) { \
  if (always_show_context_menu_on_touch_ == always_show_context_menu_on_touch) \
    return; \
  always_show_context_menu_on_touch_ = always_show_context_menu_on_touch; \
} \
void Settings::SetAntialiased2dCanvasEnabled(bool antialiased_2d_canvas_enabled) { \
  if (antialiased_2d_canvas_enabled_ == antialiased_2d_canvas_enabled) \
    return; \
  antialiased_2d_canvas_enabled_ = antialiased_2d_canvas_enabled; \
} \
void Settings::SetAntialiasedClips2dCanvasEnabled(bool antialiased_clips_2d_canvas_enabled) { \
  if (antialiased_clips_2d_canvas_enabled_ == antialiased_clips_2d_canvas_enabled) \
    return; \
  antialiased_clips_2d_canvas_enabled_ = antialiased_clips_2d_canvas_enabled; \
} \
void Settings::SetAriaModalPrunesAXTree(bool aria_modal_prunes_ax_tree) { \
  if (aria_modal_prunes_ax_tree_ == aria_modal_prunes_ax_tree) \
    return; \
  aria_modal_prunes_ax_tree_ = aria_modal_prunes_ax_tree; \
} \
void Settings::SetAutoplayPolicy(AutoplayPolicy::Type autoplay_policy) { \
  if (autoplay_policy_ == autoplay_policy) \
    return; \
  autoplay_policy_ = autoplay_policy; \
} \
void Settings::SetAvailableHoverTypes(int available_hover_types) { \
  if (available_hover_types_ == available_hover_types) \
    return; \
  available_hover_types_ = available_hover_types; \
  Invalidate(SettingsDelegate::ChangeType::kMediaQuery); \
} \
void Settings::SetAvailablePointerTypes(int available_pointer_types) { \
  if (available_pointer_types_ == available_pointer_types) \
    return; \
  available_pointer_types_ = available_pointer_types; \
  Invalidate(SettingsDelegate::ChangeType::kMediaQuery); \
} \
void Settings::SetBarrelButtonForDragEnabled(bool barrel_button_for_drag_enabled) { \
  if (barrel_button_for_drag_enabled_ == barrel_button_for_drag_enabled) \
    return; \
  barrel_button_for_drag_enabled_ = barrel_button_for_drag_enabled; \
} \
void Settings::SetBypassCSP(bool bypass_csp) { \
  if (bypass_csp_ == bypass_csp) \
    return; \
  bypass_csp_ = bypass_csp; \
} \
void Settings::SetCaretBrowsingEnabled(bool caret_browsing_enabled) { \
  if (caret_browsing_enabled_ == caret_browsing_enabled) \
    return; \
  caret_browsing_enabled_ = caret_browsing_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kStyle); \
} \
void Settings::SetCookieEnabled(bool cookie_enabled) { \
  if (cookie_enabled_ == cookie_enabled) \
    return; \
  cookie_enabled_ = cookie_enabled; \
} \
void Settings::SetDefaultFixedFontSize(int default_fixed_font_size) { \
  if (default_fixed_font_size_ == default_fixed_font_size) \
    return; \
  default_fixed_font_size_ = default_fixed_font_size; \
  Invalidate(SettingsDelegate::ChangeType::kStyle); \
} \
void Settings::SetDefaultFontSize(int default_font_size) { \
  if (default_font_size_ == default_font_size) \
    return; \
  default_font_size_ = default_font_size; \
  Invalidate(SettingsDelegate::ChangeType::kStyle); \
} \
void Settings::SetDefaultTextEncodingName(const String& default_text_encoding_name) { \
  if (default_text_encoding_name_ == default_text_encoding_name) \
    return; \
  default_text_encoding_name_ = default_text_encoding_name; \
} \
void Settings::SetDefaultVideoPosterURL(const String& default_video_poster_url) { \
  if (default_video_poster_url_ == default_video_poster_url) \
    return; \
  default_video_poster_url_ = default_video_poster_url; \
} \
void Settings::SetDeviceScaleAdjustment(double device_scale_adjustment) { \
  if (device_scale_adjustment_ == device_scale_adjustment) \
    return; \
  device_scale_adjustment_ = device_scale_adjustment; \
  Invalidate(SettingsDelegate::ChangeType::kTextAutosizing); \
} \
void Settings::SetDisableReadingFromCanvas(bool disable_reading_from_canvas) { \
  if (disable_reading_from_canvas_ == disable_reading_from_canvas) \
    return; \
  disable_reading_from_canvas_ = disable_reading_from_canvas; \
} \
void Settings::SetDisallowFetchForDocWrittenScriptsInMainFrame(bool disallow_fetch_for_doc_written_scripts_in_main_frame) { \
  if (disallow_fetch_for_doc_written_scripts_in_main_frame_ == disallow_fetch_for_doc_written_scripts_in_main_frame) \
    return; \
  disallow_fetch_for_doc_written_scripts_in_main_frame_ = disallow_fetch_for_doc_written_scripts_in_main_frame; \
} \
void Settings::SetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(bool disallow_fetch_for_doc_written_scripts_in_main_frame_if_effectively_2_g) { \
  if (disallow_fetch_for_doc_written_scripts_in_main_frame_if_effectively_2_g_ == disallow_fetch_for_doc_written_scripts_in_main_frame_if_effectively_2_g) \
    return; \
  disallow_fetch_for_doc_written_scripts_in_main_frame_if_effectively_2_g_ = disallow_fetch_for_doc_written_scripts_in_main_frame_if_effectively_2_g; \
} \
void Settings::SetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(bool disallow_fetch_for_doc_written_scripts_in_main_frame_on_slow_connections) { \
  if (disallow_fetch_for_doc_written_scripts_in_main_frame_on_slow_connections_ == disallow_fetch_for_doc_written_scripts_in_main_frame_on_slow_connections) \
    return; \
  disallow_fetch_for_doc_written_scripts_in_main_frame_on_slow_connections_ = disallow_fetch_for_doc_written_scripts_in_main_frame_on_slow_connections; \
} \
void Settings::SetDisplayModeOverride(blink::mojom::DisplayMode display_mode_override) { \
  if (display_mode_override_ == display_mode_override) \
    return; \
  display_mode_override_ = display_mode_override; \
  Invalidate(SettingsDelegate::ChangeType::kMediaQuery); \
} \
void Settings::SetDNSPrefetchingEnabled(bool dns_prefetching_enabled) { \
  if (dns_prefetching_enabled_ == dns_prefetching_enabled) \
    return; \
  dns_prefetching_enabled_ = dns_prefetching_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kDNSPrefetching); \
} \
void Settings::SetDoHtmlPreloadScanning(bool do_html_preload_scanning) { \
  if (do_html_preload_scanning_ == do_html_preload_scanning) \
    return; \
  do_html_preload_scanning_ = do_html_preload_scanning; \
} \
void Settings::SetDoNotUpdateSelectionOnMutatingSelectionRange(bool do_not_update_selection_on_mutating_selection_range) { \
  if (do_not_update_selection_on_mutating_selection_range_ == do_not_update_selection_on_mutating_selection_range) \
    return; \
  do_not_update_selection_on_mutating_selection_range_ = do_not_update_selection_on_mutating_selection_range; \
} \
void Settings::SetDownloadableBinaryFontsEnabled(bool downloadable_binary_fonts_enabled) { \
  if (downloadable_binary_fonts_enabled_ == downloadable_binary_fonts_enabled) \
    return; \
  downloadable_binary_fonts_enabled_ = downloadable_binary_fonts_enabled; \
} \
void Settings::SetEditingBehaviorType(mojom::EditingBehavior editing_behavior_type) { \
  if (editing_behavior_type_ == editing_behavior_type) \
    return; \
  editing_behavior_type_ = editing_behavior_type; \
} \
void Settings::SetEmbeddedMediaExperienceEnabled(bool embedded_media_experience_enabled) { \
  if (embedded_media_experience_enabled_ == embedded_media_experience_enabled) \
    return; \
  embedded_media_experience_enabled_ = embedded_media_experience_enabled; \
} \
void Settings::SetForceAndroidOverlayScrollbar(bool force_android_overlay_scrollbar) { \
  if (force_android_overlay_scrollbar_ == force_android_overlay_scrollbar) \
    return; \
  force_android_overlay_scrollbar_ = force_android_overlay_scrollbar; \
  Invalidate(SettingsDelegate::ChangeType::kScrollbarLayout); \
} \
void Settings::SetForceDarkModeEnabled(bool force_dark_mode_enabled) { \
  if (force_dark_mode_enabled_ == force_dark_mode_enabled) \
    return; \
  force_dark_mode_enabled_ = force_dark_mode_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kColorScheme); \
  Invalidate(SettingsDelegate::ChangeType::kStyle); \
  Invalidate(SettingsDelegate::ChangeType::kPaint); \
} \
void Settings::SetForceMainWorldInitialization(bool force_main_world_initialization) { \
  if (force_main_world_initialization_ == force_main_world_initialization) \
    return; \
  force_main_world_initialization_ = force_main_world_initialization; \
  Invalidate(SettingsDelegate::ChangeType::kDOMWorlds); \
} \
void Settings::SetForceTouchEventFeatureDetectionForInspector(bool force_touch_event_feature_detection_for_inspector) { \
  if (force_touch_event_feature_detection_for_inspector_ == force_touch_event_feature_detection_for_inspector) \
    return; \
  force_touch_event_feature_detection_for_inspector_ = force_touch_event_feature_detection_for_inspector; \
} \
void Settings::SetForceZeroLayoutHeight(bool force_zero_layout_height) { \
  if (force_zero_layout_height_ == force_zero_layout_height) \
    return; \
  force_zero_layout_height_ = force_zero_layout_height; \
  Invalidate(SettingsDelegate::ChangeType::kViewportDescription); \
} \
void Settings::SetFullscreenSupported(bool fullscreen_supported) { \
  if (fullscreen_supported_ == fullscreen_supported) \
    return; \
  fullscreen_supported_ = fullscreen_supported; \
} \
void Settings::SetHideDownloadUI(bool hide_download_ui) { \
  if (hide_download_ui_ == hide_download_ui) \
    return; \
  hide_download_ui_ = hide_download_ui; \
} \
void Settings::SetHideScrollbars(bool hide_scrollbars) { \
  if (hide_scrollbars_ == hide_scrollbars) \
    return; \
  hide_scrollbars_ = hide_scrollbars; \
  Invalidate(SettingsDelegate::ChangeType::kViewportPaintProperties); \
} \
void Settings::SetHyperlinkAuditingEnabled(bool hyperlink_auditing_enabled) { \
  if (hyperlink_auditing_enabled_ == hyperlink_auditing_enabled) \
    return; \
  hyperlink_auditing_enabled_ = hyperlink_auditing_enabled; \
} \
void Settings::SetIgnoreMainFrameOverflowHiddenQuirk(bool ignore_main_frame_overflow_hidden_quirk) { \
  if (ignore_main_frame_overflow_hidden_quirk_ == ignore_main_frame_overflow_hidden_quirk) \
    return; \
  ignore_main_frame_overflow_hidden_quirk_ = ignore_main_frame_overflow_hidden_quirk; \
} \
void Settings::SetImageAnimationPolicy(mojom::blink::ImageAnimationPolicy image_animation_policy) { \
  if (image_animation_policy_ == image_animation_policy) \
    return; \
  image_animation_policy_ = image_animation_policy; \
} \
void Settings::SetImagesEnabled(bool images_enabled) { \
  if (images_enabled_ == images_enabled) \
    return; \
  images_enabled_ = images_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kImageLoading); \
} \
void Settings::SetImmersiveModeEnabled(bool immersive_mode_enabled) { \
  if (immersive_mode_enabled_ == immersive_mode_enabled) \
    return; \
  immersive_mode_enabled_ = immersive_mode_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kMediaControls); \
} \
void Settings::SetInlineTextBoxAccessibilityEnabled(bool inline_text_box_accessibility_enabled) { \
  if (inline_text_box_accessibility_enabled_ == inline_text_box_accessibility_enabled) \
    return; \
  inline_text_box_accessibility_enabled_ = inline_text_box_accessibility_enabled; \
} \
void Settings::SetJavaScriptCanAccessClipboard(bool java_script_can_access_clipboard) { \
  if (java_script_can_access_clipboard_ == java_script_can_access_clipboard) \
    return; \
  java_script_can_access_clipboard_ = java_script_can_access_clipboard; \
} \
void Settings::SetLazyFrameLoadingDistanceThresholdPx2G(int lazy_frame_loading_distance_threshold_px_2_g) { \
  if (lazy_frame_loading_distance_threshold_px_2_g_ == lazy_frame_loading_distance_threshold_px_2_g) \
    return; \
  lazy_frame_loading_distance_threshold_px_2_g_ = lazy_frame_loading_distance_threshold_px_2_g; \
} \
void Settings::SetLazyFrameLoadingDistanceThresholdPx3G(int lazy_frame_loading_distance_threshold_px_3_g) { \
  if (lazy_frame_loading_distance_threshold_px_3_g_ == lazy_frame_loading_distance_threshold_px_3_g) \
    return; \
  lazy_frame_loading_distance_threshold_px_3_g_ = lazy_frame_loading_distance_threshold_px_3_g; \
} \
void Settings::SetLazyFrameLoadingDistanceThresholdPx4G(int lazy_frame_loading_distance_threshold_px_4_g) { \
  if (lazy_frame_loading_distance_threshold_px_4_g_ == lazy_frame_loading_distance_threshold_px_4_g) \
    return; \
  lazy_frame_loading_distance_threshold_px_4_g_ = lazy_frame_loading_distance_threshold_px_4_g; \
} \
void Settings::SetLazyFrameLoadingDistanceThresholdPxOffline(int lazy_frame_loading_distance_threshold_px_offline) { \
  if (lazy_frame_loading_distance_threshold_px_offline_ == lazy_frame_loading_distance_threshold_px_offline) \
    return; \
  lazy_frame_loading_distance_threshold_px_offline_ = lazy_frame_loading_distance_threshold_px_offline; \
} \
void Settings::SetLazyFrameLoadingDistanceThresholdPxSlow2G(int lazy_frame_loading_distance_threshold_px_slow_2_g) { \
  if (lazy_frame_loading_distance_threshold_px_slow_2_g_ == lazy_frame_loading_distance_threshold_px_slow_2_g) \
    return; \
  lazy_frame_loading_distance_threshold_px_slow_2_g_ = lazy_frame_loading_distance_threshold_px_slow_2_g; \
} \
void Settings::SetLazyFrameLoadingDistanceThresholdPxUnknown(int lazy_frame_loading_distance_threshold_px_unknown) { \
  if (lazy_frame_loading_distance_threshold_px_unknown_ == lazy_frame_loading_distance_threshold_px_unknown) \
    return; \
  lazy_frame_loading_distance_threshold_px_unknown_ = lazy_frame_loading_distance_threshold_px_unknown; \
} \
void Settings::SetLazyImageLoadingDistanceThresholdPx2G(int lazy_image_loading_distance_threshold_px_2_g) { \
  if (lazy_image_loading_distance_threshold_px_2_g_ == lazy_image_loading_distance_threshold_px_2_g) \
    return; \
  lazy_image_loading_distance_threshold_px_2_g_ = lazy_image_loading_distance_threshold_px_2_g; \
} \
void Settings::SetLazyImageLoadingDistanceThresholdPx3G(int lazy_image_loading_distance_threshold_px_3_g) { \
  if (lazy_image_loading_distance_threshold_px_3_g_ == lazy_image_loading_distance_threshold_px_3_g) \
    return; \
  lazy_image_loading_distance_threshold_px_3_g_ = lazy_image_loading_distance_threshold_px_3_g; \
} \
void Settings::SetLazyImageLoadingDistanceThresholdPx4G(int lazy_image_loading_distance_threshold_px_4_g) { \
  if (lazy_image_loading_distance_threshold_px_4_g_ == lazy_image_loading_distance_threshold_px_4_g) \
    return; \
  lazy_image_loading_distance_threshold_px_4_g_ = lazy_image_loading_distance_threshold_px_4_g; \
} \
void Settings::SetLazyImageLoadingDistanceThresholdPxOffline(int lazy_image_loading_distance_threshold_px_offline) { \
  if (lazy_image_loading_distance_threshold_px_offline_ == lazy_image_loading_distance_threshold_px_offline) \
    return; \
  lazy_image_loading_distance_threshold_px_offline_ = lazy_image_loading_distance_threshold_px_offline; \
} \
void Settings::SetLazyImageLoadingDistanceThresholdPxSlow2G(int lazy_image_loading_distance_threshold_px_slow_2_g) { \
  if (lazy_image_loading_distance_threshold_px_slow_2_g_ == lazy_image_loading_distance_threshold_px_slow_2_g) \
    return; \
  lazy_image_loading_distance_threshold_px_slow_2_g_ = lazy_image_loading_distance_threshold_px_slow_2_g; \
} \
void Settings::SetLazyImageLoadingDistanceThresholdPxUnknown(int lazy_image_loading_distance_threshold_px_unknown) { \
  if (lazy_image_loading_distance_threshold_px_unknown_ == lazy_image_loading_distance_threshold_px_unknown) \
    return; \
  lazy_image_loading_distance_threshold_px_unknown_ = lazy_image_loading_distance_threshold_px_unknown; \
} \
void Settings::SetLazyLoadEnabled(bool lazy_load_enabled) { \
  if (lazy_load_enabled_ == lazy_load_enabled) \
    return; \
  lazy_load_enabled_ = lazy_load_enabled; \
} \
void Settings::SetLoadWithOverviewMode(bool load_with_overview_mode) { \
  if (load_with_overview_mode_ == load_with_overview_mode) \
    return; \
  load_with_overview_mode_ = load_with_overview_mode; \
  Invalidate(SettingsDelegate::ChangeType::kViewportDescription); \
} \
void Settings::SetLoadsImagesAutomatically(bool loads_images_automatically) { \
  if (loads_images_automatically_ == loads_images_automatically) \
    return; \
  loads_images_automatically_ = loads_images_automatically; \
  Invalidate(SettingsDelegate::ChangeType::kImageLoading); \
} \
void Settings::SetLocalStorageEnabled(bool local_storage_enabled) { \
  if (local_storage_enabled_ == local_storage_enabled) \
    return; \
  local_storage_enabled_ = local_storage_enabled; \
} \
void Settings::SetLogDnsPrefetchAndPreconnect(bool log_dns_prefetch_and_preconnect) { \
  if (log_dns_prefetch_and_preconnect_ == log_dns_prefetch_and_preconnect) \
    return; \
  log_dns_prefetch_and_preconnect_ = log_dns_prefetch_and_preconnect; \
} \
void Settings::SetLogPreload(bool log_preload) { \
  if (log_preload_ == log_preload) \
    return; \
  log_preload_ = log_preload; \
} \
void Settings::SetLowPriorityIframesThreshold(WebEffectiveConnectionType low_priority_iframes_threshold) { \
  if (low_priority_iframes_threshold_ == low_priority_iframes_threshold) \
    return; \
  low_priority_iframes_threshold_ = low_priority_iframes_threshold; \
} \
void Settings::SetMainFrameClipsContent(bool main_frame_clips_content) { \
  if (main_frame_clips_content_ == main_frame_clips_content) \
    return; \
  main_frame_clips_content_ = main_frame_clips_content; \
  Invalidate(SettingsDelegate::ChangeType::kViewportPaintProperties); \
} \
void Settings::SetMainFrameResizesAreOrientationChanges(bool main_frame_resizes_are_orientation_changes) { \
  if (main_frame_resizes_are_orientation_changes_ == main_frame_resizes_are_orientation_changes) \
    return; \
  main_frame_resizes_are_orientation_changes_ = main_frame_resizes_are_orientation_changes; \
} \
void Settings::SetMaxTouchPoints(int max_touch_points) { \
  if (max_touch_points_ == max_touch_points) \
    return; \
  max_touch_points_ = max_touch_points; \
} \
void Settings::SetMediaControlsEnabled(bool media_controls_enabled) { \
  if (media_controls_enabled_ == media_controls_enabled) \
    return; \
  media_controls_enabled_ = media_controls_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kMediaControls); \
} \
void Settings::SetMediaTypeOverride(const String& media_type_override) { \
  if (media_type_override_ == media_type_override) \
    return; \
  media_type_override_ = media_type_override; \
  Invalidate(SettingsDelegate::ChangeType::kMediaQuery); \
} \
void Settings::SetMinimumFontSize(int minimum_font_size) { \
  if (minimum_font_size_ == minimum_font_size) \
    return; \
  minimum_font_size_ = minimum_font_size; \
  Invalidate(SettingsDelegate::ChangeType::kStyle); \
} \
void Settings::SetMinimumLogicalFontSize(int minimum_logical_font_size) { \
  if (minimum_logical_font_size_ == minimum_logical_font_size) \
    return; \
  minimum_logical_font_size_ = minimum_logical_font_size; \
  Invalidate(SettingsDelegate::ChangeType::kStyle); \
} \
void Settings::SetMockGestureTapHighlightsEnabled(bool mock_gesture_tap_highlights_enabled) { \
  if (mock_gesture_tap_highlights_enabled_ == mock_gesture_tap_highlights_enabled) \
    return; \
  mock_gesture_tap_highlights_enabled_ = mock_gesture_tap_highlights_enabled; \
} \
void Settings::SetMultiTargetTapNotificationEnabled(bool multi_target_tap_notification_enabled) { \
  if (multi_target_tap_notification_enabled_ == multi_target_tap_notification_enabled) \
    return; \
  multi_target_tap_notification_enabled_ = multi_target_tap_notification_enabled; \
} \
void Settings::SetNavigateOnDragDrop(bool navigate_on_drag_drop) { \
  if (navigate_on_drag_drop_ == navigate_on_drag_drop) \
    return; \
  navigate_on_drag_drop_ = navigate_on_drag_drop; \
} \
void Settings::SetNavigationControls(NavigationControls navigation_controls) { \
  if (navigation_controls_ == navigation_controls) \
    return; \
  navigation_controls_ = navigation_controls; \
  Invalidate(SettingsDelegate::ChangeType::kMediaQuery); \
} \
void Settings::SetNavigatorPlatformOverride(const String& navigator_platform_override) { \
  if (navigator_platform_override_ == navigator_platform_override) \
    return; \
  navigator_platform_override_ = navigator_platform_override; \
} \
void Settings::SetParserScriptingFlagPolicy(ParserScriptingFlagPolicy parser_scripting_flag_policy) { \
  if (parser_scripting_flag_policy_ == parser_scripting_flag_policy) \
    return; \
  parser_scripting_flag_policy_ = parser_scripting_flag_policy; \
} \
void Settings::SetPasswordEchoDurationInSeconds(double password_echo_duration_in_seconds) { \
  if (password_echo_duration_in_seconds_ == password_echo_duration_in_seconds) \
    return; \
  password_echo_duration_in_seconds_ = password_echo_duration_in_seconds; \
} \
void Settings::SetPasswordEchoEnabled(bool password_echo_enabled) { \
  if (password_echo_enabled_ == password_echo_enabled) \
    return; \
  password_echo_enabled_ = password_echo_enabled; \
} \
void Settings::SetPictureInPictureEnabled(bool picture_in_picture_enabled) { \
  if (picture_in_picture_enabled_ == picture_in_picture_enabled) \
    return; \
  picture_in_picture_enabled_ = picture_in_picture_enabled; \
} \
void Settings::SetPluginsEnabled(bool plugins_enabled) { \
  if (plugins_enabled_ == plugins_enabled) \
    return; \
  plugins_enabled_ = plugins_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kPlugins); \
} \
void Settings::SetPreferCompositingToLCDTextEnabled(bool prefer_compositing_to_lcd_text_enabled) { \
  if (prefer_compositing_to_lcd_text_enabled_ == prefer_compositing_to_lcd_text_enabled) \
    return; \
  prefer_compositing_to_lcd_text_enabled_ = prefer_compositing_to_lcd_text_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kAcceleratedCompositing); \
} \
void Settings::SetPreferHiddenVolumeControls(bool prefer_hidden_volume_controls) { \
  if (prefer_hidden_volume_controls_ == prefer_hidden_volume_controls) \
    return; \
  prefer_hidden_volume_controls_ = prefer_hidden_volume_controls; \
} \
void Settings::SetPreferredColorScheme(mojom::blink::PreferredColorScheme preferred_color_scheme) { \
  if (preferred_color_scheme_ == preferred_color_scheme) \
    return; \
  preferred_color_scheme_ = preferred_color_scheme; \
  Invalidate(SettingsDelegate::ChangeType::kColorScheme); \
} \
void Settings::SetPreferredContrast(mojom::blink::PreferredContrast preferred_contrast) { \
  if (preferred_contrast_ == preferred_contrast) \
    return; \
  preferred_contrast_ = preferred_contrast; \
  Invalidate(SettingsDelegate::ChangeType::kMediaQuery); \
} \
void Settings::SetPrefersReducedMotion(bool prefers_reduced_motion) { \
  if (prefers_reduced_motion_ == prefers_reduced_motion) \
    return; \
  prefers_reduced_motion_ = prefers_reduced_motion; \
  Invalidate(SettingsDelegate::ChangeType::kMediaQuery); \
} \
void Settings::SetPresentationReceiver(bool presentation_receiver) { \
  if (presentation_receiver_ == presentation_receiver) \
    return; \
  presentation_receiver_ = presentation_receiver; \
} \
void Settings::SetPresentationRequiresUserGesture(bool presentation_requires_user_gesture) { \
  if (presentation_requires_user_gesture_ == presentation_requires_user_gesture) \
    return; \
  presentation_requires_user_gesture_ = presentation_requires_user_gesture; \
} \
void Settings::SetPrimaryHoverType(mojom::blink::HoverType primary_hover_type) { \
  if (primary_hover_type_ == primary_hover_type) \
    return; \
  primary_hover_type_ = primary_hover_type; \
  Invalidate(SettingsDelegate::ChangeType::kMediaQuery); \
} \
void Settings::SetPrimaryPointerType(blink::mojom::PointerType primary_pointer_type) { \
  if (primary_pointer_type_ == primary_pointer_type) \
    return; \
  primary_pointer_type_ = primary_pointer_type; \
  Invalidate(SettingsDelegate::ChangeType::kMediaQuery); \
} \
void Settings::SetReportScreenSizeInPhysicalPixelsQuirk(bool report_screen_size_in_physical_pixels_quirk) { \
  if (report_screen_size_in_physical_pixels_quirk_ == report_screen_size_in_physical_pixels_quirk) \
    return; \
  report_screen_size_in_physical_pixels_quirk_ = report_screen_size_in_physical_pixels_quirk; \
} \
void Settings::SetRubberBandingOnCompositorThread(bool rubber_banding_on_compositor_thread) { \
  if (rubber_banding_on_compositor_thread_ == rubber_banding_on_compositor_thread) \
    return; \
  rubber_banding_on_compositor_thread_ = rubber_banding_on_compositor_thread; \
} \
void Settings::SetScriptEnabled(bool script_enabled) { \
  if (script_enabled_ == script_enabled) \
    return; \
  script_enabled_ = script_enabled; \
} \
void Settings::SetScrollAnimatorEnabled(bool scroll_animator_enabled) { \
  if (scroll_animator_enabled_ == scroll_animator_enabled) \
    return; \
  scroll_animator_enabled_ = scroll_animator_enabled; \
} \
void Settings::SetSelectTrailingWhitespaceEnabled(bool select_trailing_whitespace_enabled) { \
  if (select_trailing_whitespace_enabled_ == select_trailing_whitespace_enabled) \
    return; \
  select_trailing_whitespace_enabled_ = select_trailing_whitespace_enabled; \
} \
void Settings::SetSelectionClipboardBufferAvailable(bool selection_clipboard_buffer_available) { \
  if (selection_clipboard_buffer_available_ == selection_clipboard_buffer_available) \
    return; \
  selection_clipboard_buffer_available_ = selection_clipboard_buffer_available; \
} \
void Settings::SetSelectionIncludesAltImageText(bool selection_includes_alt_image_text) { \
  if (selection_includes_alt_image_text_ == selection_includes_alt_image_text) \
    return; \
  selection_includes_alt_image_text_ = selection_includes_alt_image_text; \
} \
void Settings::SetSelectionStrategy(SelectionStrategy selection_strategy) { \
  if (selection_strategy_ == selection_strategy) \
    return; \
  selection_strategy_ = selection_strategy; \
} \
void Settings::SetShouldClearDocumentBackground(bool should_clear_document_background) { \
  if (should_clear_document_background_ == should_clear_document_background) \
    return; \
  should_clear_document_background_ = should_clear_document_background; \
} \
void Settings::SetShouldPrintBackgrounds(bool should_print_backgrounds) { \
  if (should_print_backgrounds_ == should_print_backgrounds) \
    return; \
  should_print_backgrounds_ = should_print_backgrounds; \
} \
void Settings::SetShouldProtectAgainstIpcFlooding(bool should_protect_against_ipc_flooding) { \
  if (should_protect_against_ipc_flooding_ == should_protect_against_ipc_flooding) \
    return; \
  should_protect_against_ipc_flooding_ = should_protect_against_ipc_flooding; \
} \
void Settings::SetShouldReuseGlobalForUnownedMainFrame(bool should_reuse_global_for_unowned_main_frame) { \
  if (should_reuse_global_for_unowned_main_frame_ == should_reuse_global_for_unowned_main_frame) \
    return; \
  should_reuse_global_for_unowned_main_frame_ = should_reuse_global_for_unowned_main_frame; \
} \
void Settings::SetShowContextMenuOnMouseUp(bool show_context_menu_on_mouse_up) { \
  if (show_context_menu_on_mouse_up_ == show_context_menu_on_mouse_up) \
    return; \
  show_context_menu_on_mouse_up_ = show_context_menu_on_mouse_up; \
} \
void Settings::SetShrinksViewportContentToFit(bool shrinks_viewport_content_to_fit) { \
  if (shrinks_viewport_content_to_fit_ == shrinks_viewport_content_to_fit) \
    return; \
  shrinks_viewport_content_to_fit_ = shrinks_viewport_content_to_fit; \
} \
void Settings::SetSmartInsertDeleteEnabled(bool smart_insert_delete_enabled) { \
  if (smart_insert_delete_enabled_ == smart_insert_delete_enabled) \
    return; \
  smart_insert_delete_enabled_ = smart_insert_delete_enabled; \
} \
void Settings::SetSmoothScrollForFindEnabled(bool smooth_scroll_for_find_enabled) { \
  if (smooth_scroll_for_find_enabled_ == smooth_scroll_for_find_enabled) \
    return; \
  smooth_scroll_for_find_enabled_ = smooth_scroll_for_find_enabled; \
} \
void Settings::SetSpatialNavigationEnabled(bool spatial_navigation_enabled) { \
  if (spatial_navigation_enabled_ == spatial_navigation_enabled) \
    return; \
  spatial_navigation_enabled_ = spatial_navigation_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kSpatialNavigation); \
} \
void Settings::SetSpellCheckEnabledByDefault(bool spell_check_enabled_by_default) { \
  if (spell_check_enabled_by_default_ == spell_check_enabled_by_default) \
    return; \
  spell_check_enabled_by_default_ = spell_check_enabled_by_default; \
} \
void Settings::SetStrictMixedContentChecking(bool strict_mixed_content_checking) { \
  if (strict_mixed_content_checking_ == strict_mixed_content_checking) \
    return; \
  strict_mixed_content_checking_ = strict_mixed_content_checking; \
} \
void Settings::SetStrictMixedContentCheckingForPlugin(bool strict_mixed_content_checking_for_plugin) { \
  if (strict_mixed_content_checking_for_plugin_ == strict_mixed_content_checking_for_plugin) \
    return; \
  strict_mixed_content_checking_for_plugin_ = strict_mixed_content_checking_for_plugin; \
} \
void Settings::SetStrictPowerfulFeatureRestrictions(bool strict_powerful_feature_restrictions) { \
  if (strict_powerful_feature_restrictions_ == strict_powerful_feature_restrictions) \
    return; \
  strict_powerful_feature_restrictions_ = strict_powerful_feature_restrictions; \
} \
void Settings::SetStrictlyBlockBlockableMixedContent(bool strictly_block_blockable_mixed_content) { \
  if (strictly_block_blockable_mixed_content_ == strictly_block_blockable_mixed_content) \
    return; \
  strictly_block_blockable_mixed_content_ = strictly_block_blockable_mixed_content; \
} \
void Settings::SetSupportsMultipleWindows(bool supports_multiple_windows) { \
  if (supports_multiple_windows_ == supports_multiple_windows) \
    return; \
  supports_multiple_windows_ = supports_multiple_windows; \
} \
void Settings::SetSyncXHRInDocumentsEnabled(bool sync_xhr_in_documents_enabled) { \
  if (sync_xhr_in_documents_enabled_ == sync_xhr_in_documents_enabled) \
    return; \
  sync_xhr_in_documents_enabled_ = sync_xhr_in_documents_enabled; \
} \
void Settings::SetTargetBlankImpliesNoOpenerEnabledWillBeRemoved(bool target_blank_implies_no_opener_enabled_will_be_removed) { \
  if (target_blank_implies_no_opener_enabled_will_be_removed_ == target_blank_implies_no_opener_enabled_will_be_removed) \
    return; \
  target_blank_implies_no_opener_enabled_will_be_removed_ = target_blank_implies_no_opener_enabled_will_be_removed; \
} \
void Settings::SetTextAreasAreResizable(bool text_areas_are_resizable) { \
  if (text_areas_are_resizable_ == text_areas_are_resizable) \
    return; \
  text_areas_are_resizable_ = text_areas_are_resizable; \
  Invalidate(SettingsDelegate::ChangeType::kStyle); \
} \
void Settings::SetTextAutosizingEnabled(bool text_autosizing_enabled) { \
  if (text_autosizing_enabled_ == text_autosizing_enabled) \
    return; \
  text_autosizing_enabled_ = text_autosizing_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kTextAutosizing); \
} \
void Settings::SetTextAutosizingWindowSizeOverride(gfx::Size text_autosizing_window_size_override) { \
  if (text_autosizing_window_size_override_ == text_autosizing_window_size_override) \
    return; \
  text_autosizing_window_size_override_ = text_autosizing_window_size_override; \
  Invalidate(SettingsDelegate::ChangeType::kTextAutosizing); \
} \
void Settings::SetTextTrackBackgroundColor(const String& text_track_background_color) { \
  if (text_track_background_color_ == text_track_background_color) \
    return; \
  text_track_background_color_ = text_track_background_color; \
} \
void Settings::SetTextTrackFontFamily(const String& text_track_font_family) { \
  if (text_track_font_family_ == text_track_font_family) \
    return; \
  text_track_font_family_ = text_track_font_family; \
} \
void Settings::SetTextTrackFontStyle(const String& text_track_font_style) { \
  if (text_track_font_style_ == text_track_font_style) \
    return; \
  text_track_font_style_ = text_track_font_style; \
} \
void Settings::SetTextTrackFontVariant(const String& text_track_font_variant) { \
  if (text_track_font_variant_ == text_track_font_variant) \
    return; \
  text_track_font_variant_ = text_track_font_variant; \
} \
void Settings::SetTextTrackKindUserPreference(TextTrackKindUserPreference text_track_kind_user_preference) { \
  if (text_track_kind_user_preference_ == text_track_kind_user_preference) \
    return; \
  text_track_kind_user_preference_ = text_track_kind_user_preference; \
  Invalidate(SettingsDelegate::ChangeType::kTextTrackKindUserPreference); \
} \
void Settings::SetTextTrackMarginPercentage(double text_track_margin_percentage) { \
  if (text_track_margin_percentage_ == text_track_margin_percentage) \
    return; \
  text_track_margin_percentage_ = text_track_margin_percentage; \
} \
void Settings::SetTextTrackTextColor(const String& text_track_text_color) { \
  if (text_track_text_color_ == text_track_text_color) \
    return; \
  text_track_text_color_ = text_track_text_color; \
} \
void Settings::SetTextTrackTextShadow(const String& text_track_text_shadow) { \
  if (text_track_text_shadow_ == text_track_text_shadow) \
    return; \
  text_track_text_shadow_ = text_track_text_shadow; \
} \
void Settings::SetTextTrackTextSize(const String& text_track_text_size) { \
  if (text_track_text_size_ == text_track_text_size) \
    return; \
  text_track_text_size_ = text_track_text_size; \
} \
void Settings::SetTextTrackWindowColor(const String& text_track_window_color) { \
  if (text_track_window_color_ == text_track_window_color) \
    return; \
  text_track_window_color_ = text_track_window_color; \
} \
void Settings::SetTextTrackWindowRadius(const String& text_track_window_radius) { \
  if (text_track_window_radius_ == text_track_window_radius) \
    return; \
  text_track_window_radius_ = text_track_window_radius; \
} \
void Settings::SetThreadedScrollingEnabled(bool threaded_scrolling_enabled) { \
  if (threaded_scrolling_enabled_ == threaded_scrolling_enabled) \
    return; \
  threaded_scrolling_enabled_ = threaded_scrolling_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kStyle); \
  Invalidate(SettingsDelegate::ChangeType::kViewportPaintProperties); \
} \
void Settings::SetTouchDragDropEnabled(bool touch_drag_drop_enabled) { \
  if (touch_drag_drop_enabled_ == touch_drag_drop_enabled) \
    return; \
  touch_drag_drop_enabled_ = touch_drag_drop_enabled; \
} \
void Settings::SetTouchDragEndContextMenu(bool touch_drag_end_context_menu) { \
  if (touch_drag_end_context_menu_ == touch_drag_end_context_menu) \
    return; \
  touch_drag_end_context_menu_ = touch_drag_end_context_menu; \
} \
void Settings::SetTouchEditingEnabled(bool touch_editing_enabled) { \
  if (touch_editing_enabled_ == touch_editing_enabled) \
    return; \
  touch_editing_enabled_ = touch_editing_enabled; \
} \
void Settings::SetUseAXMenuList(bool use_ax_menu_list) { \
  if (use_ax_menu_list_ == use_ax_menu_list) \
    return; \
  use_ax_menu_list_ = use_ax_menu_list; \
} \
void Settings::SetUseLegacyBackgroundSizeShorthandBehavior(bool use_legacy_background_size_shorthand_behavior) { \
  if (use_legacy_background_size_shorthand_behavior_ == use_legacy_background_size_shorthand_behavior) \
    return; \
  use_legacy_background_size_shorthand_behavior_ = use_legacy_background_size_shorthand_behavior; \
} \
void Settings::SetUseWideViewport(bool use_wide_viewport) { \
  if (use_wide_viewport_ == use_wide_viewport) \
    return; \
  use_wide_viewport_ = use_wide_viewport; \
  Invalidate(SettingsDelegate::ChangeType::kViewportDescription); \
} \
void Settings::SetV8CacheOptions(mojom::blink::V8CacheOptions v8_cache_options) { \
  if (v8_cache_options_ == v8_cache_options) \
    return; \
  v8_cache_options_ = v8_cache_options; \
} \
void Settings::SetValidationMessageTimerMagnification(int validation_message_timer_magnification) { \
  if (validation_message_timer_magnification_ == validation_message_timer_magnification) \
    return; \
  validation_message_timer_magnification_ = validation_message_timer_magnification; \
} \
void Settings::SetViewportEnabled(bool viewport_enabled) { \
  if (viewport_enabled_ == viewport_enabled) \
    return; \
  viewport_enabled_ = viewport_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kViewportDescription); \
} \
void Settings::SetViewportMetaEnabled(bool viewport_meta_enabled) { \
  if (viewport_meta_enabled_ == viewport_meta_enabled) \
    return; \
  viewport_meta_enabled_ = viewport_meta_enabled; \
  Invalidate(SettingsDelegate::ChangeType::kViewportDescription); \
} \
void Settings::SetViewportMetaMergeContentQuirk(bool viewport_meta_merge_content_quirk) { \
  if (viewport_meta_merge_content_quirk_ == viewport_meta_merge_content_quirk) \
    return; \
  viewport_meta_merge_content_quirk_ = viewport_meta_merge_content_quirk; \
} \
void Settings::SetViewportMetaZeroValuesQuirk(bool viewport_meta_zero_values_quirk) { \
  if (viewport_meta_zero_values_quirk_ == viewport_meta_zero_values_quirk) \
    return; \
  viewport_meta_zero_values_quirk_ = viewport_meta_zero_values_quirk; \
} \
void Settings::SetViewportStyle(mojom::blink::ViewportStyle viewport_style) { \
  if (viewport_style_ == viewport_style) \
    return; \
  viewport_style_ = viewport_style; \
  Invalidate(SettingsDelegate::ChangeType::kViewportRule); \
} \
void Settings::SetWebAppScope(const String& web_app_scope) { \
  if (web_app_scope_ == web_app_scope) \
    return; \
  web_app_scope_ = web_app_scope; \
} \
void Settings::SetWebGL1Enabled(bool web_gl_1_enabled) { \
  if (web_gl_1_enabled_ == web_gl_1_enabled) \
    return; \
  web_gl_1_enabled_ = web_gl_1_enabled; \
} \
void Settings::SetWebGL2Enabled(bool webgl2_enabled) { \
  if (webgl2_enabled_ == webgl2_enabled) \
    return; \
  webgl2_enabled_ = webgl2_enabled; \
} \
void Settings::SetWebGLErrorsToConsoleEnabled(bool web_gl_errors_to_console_enabled) { \
  if (web_gl_errors_to_console_enabled_ == web_gl_errors_to_console_enabled) \
    return; \
  web_gl_errors_to_console_enabled_ = web_gl_errors_to_console_enabled; \
} \
void Settings::SetWebSecurityEnabled(bool web_security_enabled) { \
  if (web_security_enabled_ == web_security_enabled) \
    return; \
  web_security_enabled_ = web_security_enabled; \
} \
void Settings::SetWideViewportQuirkEnabled(bool wide_viewport_quirk_enabled) { \
  if (wide_viewport_quirk_enabled_ == wide_viewport_quirk_enabled) \
    return; \
  wide_viewport_quirk_enabled_ = wide_viewport_quirk_enabled; \
} \
void Settings::SetFromStrings(const String& name, const String& value) { \
  if (name == "DOMPasteAllowed") { \
    SetDOMPasteAllowed(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "DontSendKeyEventsToJavascript") { \
    SetDontSendKeyEventsToJavascript(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "HighlightAds") { \
    SetHighlightAds(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "NetworkQuietTimeout") { \
    SetNetworkQuietTimeout(FromString<double>()(value)); \
    return; \
  } \
  if (name == "WebXRImmersiveArAllowed") { \
    SetWebXRImmersiveArAllowed(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "accelerated2dCanvasMSAASampleCount") { \
    SetAccelerated2dCanvasMSAASampleCount(FromString<int>()(value)); \
    return; \
  } \
  if (name == "acceleratedCompositingEnabled") { \
    SetAcceleratedCompositingEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "accessibilityAlwaysShowFocus") { \
    SetAccessibilityAlwaysShowFocus(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "accessibilityFontScaleFactor") { \
    SetAccessibilityFontScaleFactor(FromString<double>()(value)); \
    return; \
  } \
  if (name == "accessibilityIncludeSvgGElement") { \
    SetAccessibilityIncludeSvgGElement(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "accessibilityPasswordValuesEnabled") { \
    SetAccessibilityPasswordValuesEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "allowCustomScrollbarInMainFrame") { \
    SetAllowCustomScrollbarInMainFrame(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "allowFileAccessFromFileURLs") { \
    SetAllowFileAccessFromFileURLs(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "allowGeolocationOnInsecureOrigins") { \
    SetAllowGeolocationOnInsecureOrigins(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "allowNonEmptyNavigatorPlugins") { \
    SetAllowNonEmptyNavigatorPlugins(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "allowRunningOfInsecureContent") { \
    SetAllowRunningOfInsecureContent(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "allowScriptsToCloseWindows") { \
    SetAllowScriptsToCloseWindows(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "allowUniversalAccessFromFileURLs") { \
    SetAllowUniversalAccessFromFileURLs(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "alwaysShowContextMenuOnTouch") { \
    SetAlwaysShowContextMenuOnTouch(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "antialiased2dCanvasEnabled") { \
    SetAntialiased2dCanvasEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "antialiasedClips2dCanvasEnabled") { \
    SetAntialiasedClips2dCanvasEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "ariaModalPrunesAXTree") { \
    SetAriaModalPrunesAXTree(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "autoplayPolicy") { \
    SetAutoplayPolicy(FromString<AutoplayPolicy::Type>()(value)); \
    return; \
  } \
  if (name == "availableHoverTypes") { \
    SetAvailableHoverTypes(FromString<int>()(value)); \
    return; \
  } \
  if (name == "availablePointerTypes") { \
    SetAvailablePointerTypes(FromString<int>()(value)); \
    return; \
  } \
  if (name == "barrelButtonForDragEnabled") { \
    SetBarrelButtonForDragEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "bypassCSP") { \
    SetBypassCSP(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "caretBrowsingEnabled") { \
    SetCaretBrowsingEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "cookieEnabled") { \
    SetCookieEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "defaultFixedFontSize") { \
    SetDefaultFixedFontSize(FromString<int>()(value)); \
    return; \
  } \
  if (name == "defaultFontSize") { \
    SetDefaultFontSize(FromString<int>()(value)); \
    return; \
  } \
  if (name == "defaultTextEncodingName") { \
    SetDefaultTextEncodingName(FromString<String>()(value)); \
    return; \
  } \
  if (name == "defaultVideoPosterURL") { \
    SetDefaultVideoPosterURL(FromString<String>()(value)); \
    return; \
  } \
  if (name == "deviceScaleAdjustment") { \
    SetDeviceScaleAdjustment(FromString<double>()(value)); \
    return; \
  } \
  if (name == "disableReadingFromCanvas") { \
    SetDisableReadingFromCanvas(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "disallowFetchForDocWrittenScriptsInMainFrame") { \
    SetDisallowFetchForDocWrittenScriptsInMainFrame(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "disallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G") { \
    SetDisallowFetchForDocWrittenScriptsInMainFrameIfEffectively2G(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "disallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections") { \
    SetDisallowFetchForDocWrittenScriptsInMainFrameOnSlowConnections(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "displayModeOverride") { \
    SetDisplayModeOverride(FromString<blink::mojom::DisplayMode>()(value)); \
    return; \
  } \
  if (name == "dnsPrefetchingEnabled") { \
    SetDNSPrefetchingEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "doHtmlPreloadScanning") { \
    SetDoHtmlPreloadScanning(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "doNotUpdateSelectionOnMutatingSelectionRange") { \
    SetDoNotUpdateSelectionOnMutatingSelectionRange(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "downloadableBinaryFontsEnabled") { \
    SetDownloadableBinaryFontsEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "editingBehaviorType") { \
    SetEditingBehaviorType(FromString<mojom::EditingBehavior>()(value)); \
    return; \
  } \
  if (name == "embeddedMediaExperienceEnabled") { \
    SetEmbeddedMediaExperienceEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "forceAndroidOverlayScrollbar") { \
    SetForceAndroidOverlayScrollbar(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "forceDarkModeEnabled") { \
    SetForceDarkModeEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "forceMainWorldInitialization") { \
    SetForceMainWorldInitialization(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "forceTouchEventFeatureDetectionForInspector") { \
    SetForceTouchEventFeatureDetectionForInspector(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "forceZeroLayoutHeight") { \
    SetForceZeroLayoutHeight(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "fullscreenSupported") { \
    SetFullscreenSupported(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "hideDownloadUI") { \
    SetHideDownloadUI(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "hideScrollbars") { \
    SetHideScrollbars(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "hyperlinkAuditingEnabled") { \
    SetHyperlinkAuditingEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "ignoreMainFrameOverflowHiddenQuirk") { \
    SetIgnoreMainFrameOverflowHiddenQuirk(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "imageAnimationPolicy") { \
    SetImageAnimationPolicy(FromString<mojom::blink::ImageAnimationPolicy>()(value)); \
    return; \
  } \
  if (name == "imagesEnabled") { \
    SetImagesEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "immersiveModeEnabled") { \
    SetImmersiveModeEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "inlineTextBoxAccessibilityEnabled") { \
    SetInlineTextBoxAccessibilityEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "javaScriptCanAccessClipboard") { \
    SetJavaScriptCanAccessClipboard(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "lazyFrameLoadingDistanceThresholdPx2G") { \
    SetLazyFrameLoadingDistanceThresholdPx2G(FromString<int>()(value)); \
    return; \
  } \
  if (name == "lazyFrameLoadingDistanceThresholdPx3G") { \
    SetLazyFrameLoadingDistanceThresholdPx3G(FromString<int>()(value)); \
    return; \
  } \
  if (name == "lazyFrameLoadingDistanceThresholdPx4G") { \
    SetLazyFrameLoadingDistanceThresholdPx4G(FromString<int>()(value)); \
    return; \
  } \
  if (name == "lazyFrameLoadingDistanceThresholdPxOffline") { \
    SetLazyFrameLoadingDistanceThresholdPxOffline(FromString<int>()(value)); \
    return; \
  } \
  if (name == "lazyFrameLoadingDistanceThresholdPxSlow2G") { \
    SetLazyFrameLoadingDistanceThresholdPxSlow2G(FromString<int>()(value)); \
    return; \
  } \
  if (name == "lazyFrameLoadingDistanceThresholdPxUnknown") { \
    SetLazyFrameLoadingDistanceThresholdPxUnknown(FromString<int>()(value)); \
    return; \
  } \
  if (name == "lazyImageLoadingDistanceThresholdPx2G") { \
    SetLazyImageLoadingDistanceThresholdPx2G(FromString<int>()(value)); \
    return; \
  } \
  if (name == "lazyImageLoadingDistanceThresholdPx3G") { \
    SetLazyImageLoadingDistanceThresholdPx3G(FromString<int>()(value)); \
    return; \
  } \
  if (name == "lazyImageLoadingDistanceThresholdPx4G") { \
    SetLazyImageLoadingDistanceThresholdPx4G(FromString<int>()(value)); \
    return; \
  } \
  if (name == "lazyImageLoadingDistanceThresholdPxOffline") { \
    SetLazyImageLoadingDistanceThresholdPxOffline(FromString<int>()(value)); \
    return; \
  } \
  if (name == "lazyImageLoadingDistanceThresholdPxSlow2G") { \
    SetLazyImageLoadingDistanceThresholdPxSlow2G(FromString<int>()(value)); \
    return; \
  } \
  if (name == "lazyImageLoadingDistanceThresholdPxUnknown") { \
    SetLazyImageLoadingDistanceThresholdPxUnknown(FromString<int>()(value)); \
    return; \
  } \
  if (name == "lazyLoadEnabled") { \
    SetLazyLoadEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "loadWithOverviewMode") { \
    SetLoadWithOverviewMode(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "loadsImagesAutomatically") { \
    SetLoadsImagesAutomatically(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "localStorageEnabled") { \
    SetLocalStorageEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "logDnsPrefetchAndPreconnect") { \
    SetLogDnsPrefetchAndPreconnect(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "logPreload") { \
    SetLogPreload(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "lowPriorityIframesThreshold") { \
    SetLowPriorityIframesThreshold(FromString<WebEffectiveConnectionType>()(value)); \
    return; \
  } \
  if (name == "mainFrameClipsContent") { \
    SetMainFrameClipsContent(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "mainFrameResizesAreOrientationChanges") { \
    SetMainFrameResizesAreOrientationChanges(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "maxTouchPoints") { \
    SetMaxTouchPoints(FromString<int>()(value)); \
    return; \
  } \
  if (name == "mediaControlsEnabled") { \
    SetMediaControlsEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "mediaTypeOverride") { \
    SetMediaTypeOverride(FromString<String>()(value)); \
    return; \
  } \
  if (name == "minimumFontSize") { \
    SetMinimumFontSize(FromString<int>()(value)); \
    return; \
  } \
  if (name == "minimumLogicalFontSize") { \
    SetMinimumLogicalFontSize(FromString<int>()(value)); \
    return; \
  } \
  if (name == "mockGestureTapHighlightsEnabled") { \
    SetMockGestureTapHighlightsEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "multiTargetTapNotificationEnabled") { \
    SetMultiTargetTapNotificationEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "navigateOnDragDrop") { \
    SetNavigateOnDragDrop(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "navigationControls") { \
    SetNavigationControls(FromString<NavigationControls>()(value)); \
    return; \
  } \
  if (name == "navigatorPlatformOverride") { \
    SetNavigatorPlatformOverride(FromString<String>()(value)); \
    return; \
  } \
  if (name == "parserScriptingFlagPolicy") { \
    SetParserScriptingFlagPolicy(FromString<ParserScriptingFlagPolicy>()(value)); \
    return; \
  } \
  if (name == "passwordEchoDurationInSeconds") { \
    SetPasswordEchoDurationInSeconds(FromString<double>()(value)); \
    return; \
  } \
  if (name == "passwordEchoEnabled") { \
    SetPasswordEchoEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "pictureInPictureEnabled") { \
    SetPictureInPictureEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "pluginsEnabled") { \
    SetPluginsEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "preferCompositingToLCDTextEnabled") { \
    SetPreferCompositingToLCDTextEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "preferHiddenVolumeControls") { \
    SetPreferHiddenVolumeControls(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "preferredColorScheme") { \
    SetPreferredColorScheme(FromString<mojom::blink::PreferredColorScheme>()(value)); \
    return; \
  } \
  if (name == "preferredContrast") { \
    SetPreferredContrast(FromString<mojom::blink::PreferredContrast>()(value)); \
    return; \
  } \
  if (name == "prefersReducedMotion") { \
    SetPrefersReducedMotion(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "presentationReceiver") { \
    SetPresentationReceiver(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "presentationRequiresUserGesture") { \
    SetPresentationRequiresUserGesture(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "primaryHoverType") { \
    SetPrimaryHoverType(FromString<mojom::blink::HoverType>()(value)); \
    return; \
  } \
  if (name == "primaryPointerType") { \
    SetPrimaryPointerType(FromString<blink::mojom::PointerType>()(value)); \
    return; \
  } \
  if (name == "reportScreenSizeInPhysicalPixelsQuirk") { \
    SetReportScreenSizeInPhysicalPixelsQuirk(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "rubberBandingOnCompositorThread") { \
    SetRubberBandingOnCompositorThread(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "scriptEnabled") { \
    SetScriptEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "scrollAnimatorEnabled") { \
    SetScrollAnimatorEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "selectTrailingWhitespaceEnabled") { \
    SetSelectTrailingWhitespaceEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "selectionClipboardBufferAvailable") { \
    SetSelectionClipboardBufferAvailable(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "selectionIncludesAltImageText") { \
    SetSelectionIncludesAltImageText(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "selectionStrategy") { \
    SetSelectionStrategy(FromString<SelectionStrategy>()(value)); \
    return; \
  } \
  if (name == "shouldClearDocumentBackground") { \
    SetShouldClearDocumentBackground(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "shouldPrintBackgrounds") { \
    SetShouldPrintBackgrounds(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "shouldProtectAgainstIpcFlooding") { \
    SetShouldProtectAgainstIpcFlooding(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "shouldReuseGlobalForUnownedMainFrame") { \
    SetShouldReuseGlobalForUnownedMainFrame(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "showContextMenuOnMouseUp") { \
    SetShowContextMenuOnMouseUp(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "shrinksViewportContentToFit") { \
    SetShrinksViewportContentToFit(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "smartInsertDeleteEnabled") { \
    SetSmartInsertDeleteEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "smoothScrollForFindEnabled") { \
    SetSmoothScrollForFindEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "spatialNavigationEnabled") { \
    SetSpatialNavigationEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "spellCheckEnabledByDefault") { \
    SetSpellCheckEnabledByDefault(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "strictMixedContentChecking") { \
    SetStrictMixedContentChecking(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "strictMixedContentCheckingForPlugin") { \
    SetStrictMixedContentCheckingForPlugin(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "strictPowerfulFeatureRestrictions") { \
    SetStrictPowerfulFeatureRestrictions(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "strictlyBlockBlockableMixedContent") { \
    SetStrictlyBlockBlockableMixedContent(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "supportsMultipleWindows") { \
    SetSupportsMultipleWindows(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "syncXHRInDocumentsEnabled") { \
    SetSyncXHRInDocumentsEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "targetBlankImpliesNoOpenerEnabledWillBeRemoved") { \
    SetTargetBlankImpliesNoOpenerEnabledWillBeRemoved(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "textAreasAreResizable") { \
    SetTextAreasAreResizable(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "textAutosizingEnabled") { \
    SetTextAutosizingEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "textAutosizingWindowSizeOverride") { \
    SetTextAutosizingWindowSizeOverride(FromString<gfx::Size>()(value)); \
    return; \
  } \
  if (name == "textTrackBackgroundColor") { \
    SetTextTrackBackgroundColor(FromString<String>()(value)); \
    return; \
  } \
  if (name == "textTrackFontFamily") { \
    SetTextTrackFontFamily(FromString<String>()(value)); \
    return; \
  } \
  if (name == "textTrackFontStyle") { \
    SetTextTrackFontStyle(FromString<String>()(value)); \
    return; \
  } \
  if (name == "textTrackFontVariant") { \
    SetTextTrackFontVariant(FromString<String>()(value)); \
    return; \
  } \
  if (name == "textTrackKindUserPreference") { \
    SetTextTrackKindUserPreference(FromString<TextTrackKindUserPreference>()(value)); \
    return; \
  } \
  if (name == "textTrackMarginPercentage") { \
    SetTextTrackMarginPercentage(FromString<double>()(value)); \
    return; \
  } \
  if (name == "textTrackTextColor") { \
    SetTextTrackTextColor(FromString<String>()(value)); \
    return; \
  } \
  if (name == "textTrackTextShadow") { \
    SetTextTrackTextShadow(FromString<String>()(value)); \
    return; \
  } \
  if (name == "textTrackTextSize") { \
    SetTextTrackTextSize(FromString<String>()(value)); \
    return; \
  } \
  if (name == "textTrackWindowColor") { \
    SetTextTrackWindowColor(FromString<String>()(value)); \
    return; \
  } \
  if (name == "textTrackWindowRadius") { \
    SetTextTrackWindowRadius(FromString<String>()(value)); \
    return; \
  } \
  if (name == "threadedScrollingEnabled") { \
    SetThreadedScrollingEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "touchDragDropEnabled") { \
    SetTouchDragDropEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "touchDragEndContextMenu") { \
    SetTouchDragEndContextMenu(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "touchEditingEnabled") { \
    SetTouchEditingEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "useAXMenuList") { \
    SetUseAXMenuList(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "useLegacyBackgroundSizeShorthandBehavior") { \
    SetUseLegacyBackgroundSizeShorthandBehavior(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "useWideViewport") { \
    SetUseWideViewport(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "v8CacheOptions") { \
    SetV8CacheOptions(FromString<mojom::blink::V8CacheOptions>()(value)); \
    return; \
  } \
  if (name == "validationMessageTimerMagnification") { \
    SetValidationMessageTimerMagnification(FromString<int>()(value)); \
    return; \
  } \
  if (name == "viewportEnabled") { \
    SetViewportEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "viewportMetaEnabled") { \
    SetViewportMetaEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "viewportMetaMergeContentQuirk") { \
    SetViewportMetaMergeContentQuirk(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "viewportMetaZeroValuesQuirk") { \
    SetViewportMetaZeroValuesQuirk(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "viewportStyle") { \
    SetViewportStyle(FromString<mojom::blink::ViewportStyle>()(value)); \
    return; \
  } \
  if (name == "webAppScope") { \
    SetWebAppScope(FromString<String>()(value)); \
    return; \
  } \
  if (name == "webGL1Enabled") { \
    SetWebGL1Enabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "webGL2Enabled") { \
    SetWebGL2Enabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "webGLErrorsToConsoleEnabled") { \
    SetWebGLErrorsToConsoleEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "webSecurityEnabled") { \
    SetWebSecurityEnabled(FromString<bool>()(value)); \
    return; \
  } \
  if (name == "wideViewportQuirkEnabled") { \
    SetWideViewportQuirkEnabled(FromString<bool>()(value)); \
    return; \
  } \
}
// End of SETTINGS_SETTER_BODIES.

#endif  // THIRD_PARTY_BLINK_RENDERER_CORE_SETTINGS_MACROS_H_
