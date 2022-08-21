// third_party/blink/public/mojom/renderer_preferences.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../mojo/public/js/bindings.js';

import {
  TimeDelta as mojoBase_mojom_TimeDelta,
  TimeDeltaSpec as mojoBase_mojom_TimeDeltaSpec
} from '../../../../mojo/public/mojom/base/time.mojom.m.js';

import {
  Hinting as gfx_mojom_Hinting,
  HintingSpec as gfx_mojom_HintingSpec,
  SubpixelRendering as gfx_mojom_SubpixelRendering,
  SubpixelRenderingSpec as gfx_mojom_SubpixelRenderingSpec
} from '../../../../ui/gfx/mojom/font_render_params.mojom.m.js';

import {
  UserAgentOverride as blink_mojom_UserAgentOverride,
  UserAgentOverrideSpec as blink_mojom_UserAgentOverrideSpec
} from './user_agent/user_agent_metadata.mojom.m.js';


/**
 * @const { !bigint }
 */
export const DEFAULT_CARET_BLINK_INTERVAL_IN_MILLISECONDS = BigInt('500');



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RendererPreferencesSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    RendererPreferencesSpec.$,
    'RendererPreferences',
    [
      mojo.internal.StructField(
        'canAcceptLoadDrops', 0,
        0,
        mojo.internal.Bool,
        true,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'shouldAntialiasText', 0,
        1,
        mojo.internal.Bool,
        true,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'hinting', 4,
        0,
        gfx_mojom_HintingSpec.$,
        gfx_mojom_Hinting.kMedium,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'useAutohinter', 0,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'useBitmaps', 0,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'subpixelRendering', 8,
        0,
        gfx_mojom_SubpixelRenderingSpec.$,
        gfx_mojom_SubpixelRendering.kNone,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'useSubpixelPositioning', 0,
        4,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'focusRingColor', 12,
        0,
        mojo.internal.Uint32,
        0xFFE59700,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'activeSelectionBgColor', 16,
        0,
        mojo.internal.Uint32,
        0xFF1E90FF,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'activeSelectionFgColor', 20,
        0,
        mojo.internal.Uint32,
        0xFFFFFFFF,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'inactiveSelectionBgColor', 24,
        0,
        mojo.internal.Uint32,
        0xFFC8C8C8,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'inactiveSelectionFgColor', 28,
        0,
        mojo.internal.Uint32,
        0xFF323232,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'browserHandlesAllTopLevelRequests', 0,
        5,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'caretBlinkInterval', 32,
        0,
        mojoBase_mojom_TimeDeltaSpec.$,
        null,
        true /* nullable */,
        0),
      mojo.internal.StructField(
        'useCustomColors', 0,
        6,
        mojo.internal.Bool,
        true,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableReferrers', 0,
        7,
        mojo.internal.Bool,
        true,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'allowCrossOriginAuthPrompt', 1,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableDoNotTrack', 1,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableEncryptedMedia', 1,
        2,
        mojo.internal.Bool,
        true,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'webrtcIpHandlingPolicy', 40,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'webrtcUdpMinPort', 2,
        0,
        mojo.internal.Uint16,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'webrtcUdpMaxPort', 48,
        0,
        mojo.internal.Uint16,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'webrtcLocalIpsAllowedUrls', 56,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'webrtcAllowLegacyTlsProtocols', 1,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'userAgentOverride', 64,
        0,
        blink_mojom_UserAgentOverrideSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'acceptLanguages', 72,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'pluginFullscreenAllowed', 1,
        4,
        mojo.internal.Bool,
        true,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'caretBrowsingEnabled', 1,
        5,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'explicitlyAllowedNetworkPorts', 80,
        0,
        mojo.internal.Array(mojo.internal.Uint16, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 96],]);



/**
 * @record
 */
export class RendererPreferences {
  constructor() {
    /** @type { !boolean } */
    this.canAcceptLoadDrops;
    /** @type { !boolean } */
    this.shouldAntialiasText;
    /** @type { !boolean } */
    this.useAutohinter;
    /** @type { !boolean } */
    this.useBitmaps;
    /** @type { !boolean } */
    this.useSubpixelPositioning;
    /** @type { !boolean } */
    this.browserHandlesAllTopLevelRequests;
    /** @type { !boolean } */
    this.useCustomColors;
    /** @type { !boolean } */
    this.enableReferrers;
    /** @type { !boolean } */
    this.allowCrossOriginAuthPrompt;
    /** @type { !boolean } */
    this.enableDoNotTrack;
    /** @type { !boolean } */
    this.enableEncryptedMedia;
    /** @type { !boolean } */
    this.webrtcAllowLegacyTlsProtocols;
    /** @type { !boolean } */
    this.pluginFullscreenAllowed;
    /** @type { !boolean } */
    this.caretBrowsingEnabled;
    /** @type { !number } */
    this.webrtcUdpMinPort;
    /** @type { !gfx_mojom_Hinting } */
    this.hinting;
    /** @type { !gfx_mojom_SubpixelRendering } */
    this.subpixelRendering;
    /** @type { !number } */
    this.focusRingColor;
    /** @type { !number } */
    this.activeSelectionBgColor;
    /** @type { !number } */
    this.activeSelectionFgColor;
    /** @type { !number } */
    this.inactiveSelectionBgColor;
    /** @type { !number } */
    this.inactiveSelectionFgColor;
    /** @type { (mojoBase_mojom_TimeDelta|undefined) } */
    this.caretBlinkInterval;
    /** @type { !string } */
    this.webrtcIpHandlingPolicy;
    /** @type { !number } */
    this.webrtcUdpMaxPort;
    /** @type { !Array<!string> } */
    this.webrtcLocalIpsAllowedUrls;
    /** @type { !blink_mojom_UserAgentOverride } */
    this.userAgentOverride;
    /** @type { !string } */
    this.acceptLanguages;
    /** @type { !Array<!number> } */
    this.explicitlyAllowedNetworkPorts;
  }
}

