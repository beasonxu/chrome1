// third_party/blink/public/mojom/manifest/manifest.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('blink.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.TabStripMemberVisibilitySpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.TabStripMemberVisibility = {
  
  kAuto: 0,
  kAbsent: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};




/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestShortcutItemSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestImageResourceSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestScreenshotSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestFileFilterSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestProtocolHandlerSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestUrlHandlerSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestLockScreenSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestNoteTakingSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestRelatedApplicationSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestShareTargetParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestShareTargetSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestFileHandlerSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestTranslationItemSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestUserPreferencesSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestUserPreferenceOverridesSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestTabStripSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.HomeTabParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.NewTabButtonParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestDebugInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ManifestErrorSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType} }
 * @export
 */
blink.mojom.HomeTabUnionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType} }
 * @export
 */
blink.mojom.NewTabButtonUnionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.ManifestSpec.$,
    'Manifest',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'shortName', 8,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'description', 16,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'id', 24,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'startUrl', 32,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'display', 40,
        0,
        blink.mojom.DisplayModeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'displayOverride', 48,
        0,
        mojo.internal.Array(blink.mojom.DisplayModeSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'orientation', 44,
        0,
        device.mojom.ScreenOrientationLockTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'icons', 56,
        0,
        mojo.internal.Array(blink.mojom.ManifestImageResourceSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'screenshots', 64,
        0,
        mojo.internal.Array(blink.mojom.ManifestScreenshotSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'shortcuts', 72,
        0,
        mojo.internal.Array(blink.mojom.ManifestShortcutItemSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'shareTarget', 80,
        0,
        blink.mojom.ManifestShareTargetSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'fileHandlers', 88,
        0,
        mojo.internal.Array(blink.mojom.ManifestFileHandlerSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'protocolHandlers', 96,
        0,
        mojo.internal.Array(blink.mojom.ManifestProtocolHandlerSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'urlHandlers', 104,
        0,
        mojo.internal.Array(blink.mojom.ManifestUrlHandlerSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'lockScreen', 112,
        0,
        blink.mojom.ManifestLockScreenSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'noteTaking', 120,
        0,
        blink.mojom.ManifestNoteTakingSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'relatedApplications', 128,
        0,
        mojo.internal.Array(blink.mojom.ManifestRelatedApplicationSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'preferRelatedApplications', 136,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'hasThemeColor', 136,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'themeColor', 140,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'hasBackgroundColor', 136,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'backgroundColor', 144,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'gcmSenderId', 152,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'scope', 160,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'captureLinks', 148,
        0,
        blink.mojom.CaptureLinksSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'isolatedStorage', 136,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'permissionsPolicy', 168,
        0,
        mojo.internal.Array(blink.mojom.ParsedPermissionsPolicyDeclarationSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'launchHandler', 176,
        0,
        blink.mojom.ManifestLaunchHandlerSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'translations', 184,
        0,
        mojo.internal.Map(mojoBase.mojom.String16Spec.$, blink.mojom.ManifestTranslationItemSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'userPreferences', 192,
        0,
        blink.mojom.ManifestUserPreferencesSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'tabStrip', 200,
        0,
        blink.mojom.ManifestTabStripSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 216],]);





/** @record */
blink.mojom.Manifest = class {
  constructor() {
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.name;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.shortName;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.description;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.id;
    /** @export { !url.mojom.Url } */
    this.startUrl;
    /** @export { !blink.mojom.DisplayMode } */
    this.display;
    /** @export { !device.mojom.ScreenOrientationLockType } */
    this.orientation;
    /** @export { !Array<!blink.mojom.DisplayMode> } */
    this.displayOverride;
    /** @export { !Array<!blink.mojom.ManifestImageResource> } */
    this.icons;
    /** @export { !Array<!blink.mojom.ManifestScreenshot> } */
    this.screenshots;
    /** @export { !Array<!blink.mojom.ManifestShortcutItem> } */
    this.shortcuts;
    /** @export { (blink.mojom.ManifestShareTarget|undefined) } */
    this.shareTarget;
    /** @export { !Array<!blink.mojom.ManifestFileHandler> } */
    this.fileHandlers;
    /** @export { !Array<!blink.mojom.ManifestProtocolHandler> } */
    this.protocolHandlers;
    /** @export { !Array<!blink.mojom.ManifestUrlHandler> } */
    this.urlHandlers;
    /** @export { (blink.mojom.ManifestLockScreen|undefined) } */
    this.lockScreen;
    /** @export { (blink.mojom.ManifestNoteTaking|undefined) } */
    this.noteTaking;
    /** @export { !Array<!blink.mojom.ManifestRelatedApplication> } */
    this.relatedApplications;
    /** @export { !boolean } */
    this.preferRelatedApplications;
    /** @export { !boolean } */
    this.hasThemeColor;
    /** @export { !boolean } */
    this.hasBackgroundColor;
    /** @export { !boolean } */
    this.isolatedStorage;
    /** @export { !number } */
    this.themeColor;
    /** @export { !number } */
    this.backgroundColor;
    /** @export { !blink.mojom.CaptureLinks } */
    this.captureLinks;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.gcmSenderId;
    /** @export { !url.mojom.Url } */
    this.scope;
    /** @export { !Array<!blink.mojom.ParsedPermissionsPolicyDeclaration> } */
    this.permissionsPolicy;
    /** @export { (blink.mojom.ManifestLaunchHandler|undefined) } */
    this.launchHandler;
    /** @export { !Map<!mojoBase.mojom.String16, !blink.mojom.ManifestTranslationItem> } */
    this.translations;
    /** @export { (blink.mojom.ManifestUserPreferences|undefined) } */
    this.userPreferences;
    /** @export { (blink.mojom.ManifestTabStrip|undefined) } */
    this.tabStrip;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestShortcutItemSpec.$,
    'ManifestShortcutItem',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'shortName', 8,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'description', 16,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'url', 24,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'icons', 32,
        0,
        mojo.internal.Array(blink.mojom.ManifestImageResourceSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 48],]);





/** @record */
blink.mojom.ManifestShortcutItem = class {
  constructor() {
    /** @export { !mojoBase.mojom.String16 } */
    this.name;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.shortName;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.description;
    /** @export { !url.mojom.Url } */
    this.url;
    /** @export { !Array<!blink.mojom.ManifestImageResource> } */
    this.icons;
  }
};




/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.ManifestImageResourceSpec.PurposeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.ManifestImageResource_Purpose = {
  
  ANY: 0,
  MONOCHROME: 1,
  MASKABLE: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};


mojo.internal.Struct(
    blink.mojom.ManifestImageResourceSpec.$,
    'ManifestImageResource',
    [
      mojo.internal.StructField(
        'src', 0,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'type', 8,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'sizes', 16,
        0,
        mojo.internal.Array(gfx.mojom.SizeSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'purpose', 24,
        0,
        mojo.internal.Array(blink.mojom.ManifestImageResourceSpec.PurposeSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 40],]);





/** @record */
blink.mojom.ManifestImageResource = class {
  constructor() {
    /** @export { !url.mojom.Url } */
    this.src;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.type;
    /** @export { !Array<!gfx.mojom.Size> } */
    this.sizes;
    /** @export { !Array<!blink.mojom.ManifestImageResource_Purpose> } */
    this.purpose;
  }
};




/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.ManifestScreenshotSpec.PlatformSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.ManifestScreenshot_Platform = {
  
  kUnknown: 0,
  kWide: 1,
  kNarrow: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};


mojo.internal.Struct(
    blink.mojom.ManifestScreenshotSpec.$,
    'ManifestScreenshot',
    [
      mojo.internal.StructField(
        'image', 0,
        0,
        blink.mojom.ManifestImageResourceSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'platform', 8,
        0,
        blink.mojom.ManifestScreenshotSpec.PlatformSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.ManifestScreenshot = class {
  constructor() {
    /** @export { !blink.mojom.ManifestImageResource } */
    this.image;
    /** @export { !blink.mojom.ManifestScreenshot_Platform } */
    this.platform;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestFileFilterSpec.$,
    'ManifestFileFilter',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'accept', 8,
        0,
        mojo.internal.Array(mojoBase.mojom.String16Spec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.ManifestFileFilter = class {
  constructor() {
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.name;
    /** @export { !Array<!mojoBase.mojom.String16> } */
    this.accept;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestProtocolHandlerSpec.$,
    'ManifestProtocolHandler',
    [
      mojo.internal.StructField(
        'protocol', 0,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'url', 8,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.ManifestProtocolHandler = class {
  constructor() {
    /** @export { !mojoBase.mojom.String16 } */
    this.protocol;
    /** @export { !url.mojom.Url } */
    this.url;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestUrlHandlerSpec.$,
    'ManifestUrlHandler',
    [
      mojo.internal.StructField(
        'origin', 0,
        0,
        url.mojom.OriginSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'hasOriginWildcard', 8,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.ManifestUrlHandler = class {
  constructor() {
    /** @export { !url.mojom.Origin } */
    this.origin;
    /** @export { !boolean } */
    this.hasOriginWildcard;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestLockScreenSpec.$,
    'ManifestLockScreen',
    [
      mojo.internal.StructField(
        'startUrl', 0,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.ManifestLockScreen = class {
  constructor() {
    /** @export { !url.mojom.Url } */
    this.startUrl;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestNoteTakingSpec.$,
    'ManifestNoteTaking',
    [
      mojo.internal.StructField(
        'newNoteUrl', 0,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.ManifestNoteTaking = class {
  constructor() {
    /** @export { !url.mojom.Url } */
    this.newNoteUrl;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestRelatedApplicationSpec.$,
    'ManifestRelatedApplication',
    [
      mojo.internal.StructField(
        'platform', 0,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'url', 8,
        0,
        url.mojom.UrlSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'id', 16,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
    ],
    [[0, 32],]);





/** @record */
blink.mojom.ManifestRelatedApplication = class {
  constructor() {
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.platform;
    /** @export { (url.mojom.Url|undefined) } */
    this.url;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.id;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestShareTargetParamsSpec.$,
    'ManifestShareTargetParams',
    [
      mojo.internal.StructField(
        'title', 0,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'text', 8,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'url', 16,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'files', 24,
        0,
        mojo.internal.Array(blink.mojom.ManifestFileFilterSpec.$, false),
        null,
        true /* nullable */),
    ],
    [[0, 40],]);





/** @record */
blink.mojom.ManifestShareTargetParams = class {
  constructor() {
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.title;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.text;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.url;
    /** @export { (Array<!blink.mojom.ManifestFileFilter>|undefined) } */
    this.files;
  }
};




/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.ManifestShareTargetSpec.MethodSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.ManifestShareTarget_Method = {
  
  kGet: 0,
  kPost: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};


/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.ManifestShareTargetSpec.EnctypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.ManifestShareTarget_Enctype = {
  
  kFormUrlEncoded: 0,
  kMultipartFormData: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};


mojo.internal.Struct(
    blink.mojom.ManifestShareTargetSpec.$,
    'ManifestShareTarget',
    [
      mojo.internal.StructField(
        'action', 0,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'method', 8,
        0,
        blink.mojom.ManifestShareTargetSpec.MethodSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'enctype', 12,
        0,
        blink.mojom.ManifestShareTargetSpec.EnctypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'params', 16,
        0,
        blink.mojom.ManifestShareTargetParamsSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 32],]);





/** @record */
blink.mojom.ManifestShareTarget = class {
  constructor() {
    /** @export { !url.mojom.Url } */
    this.action;
    /** @export { !blink.mojom.ManifestShareTarget_Method } */
    this.method;
    /** @export { !blink.mojom.ManifestShareTarget_Enctype } */
    this.enctype;
    /** @export { !blink.mojom.ManifestShareTargetParams } */
    this.params;
  }
};




/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.ManifestFileHandlerSpec.LaunchTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.ManifestFileHandler_LaunchType = {
  
  kSingleClient: 0,
  kMultipleClients: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};


mojo.internal.Struct(
    blink.mojom.ManifestFileHandlerSpec.$,
    'ManifestFileHandler',
    [
      mojo.internal.StructField(
        'action', 0,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'name', 8,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'icons', 16,
        0,
        mojo.internal.Array(blink.mojom.ManifestImageResourceSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'accept', 24,
        0,
        mojo.internal.Map(mojoBase.mojom.String16Spec.$, mojo.internal.Array(mojoBase.mojom.String16Spec.$, false), false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'launchType', 32,
        0,
        blink.mojom.ManifestFileHandlerSpec.LaunchTypeSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 48],]);





/** @record */
blink.mojom.ManifestFileHandler = class {
  constructor() {
    /** @export { !url.mojom.Url } */
    this.action;
    /** @export { !mojoBase.mojom.String16 } */
    this.name;
    /** @export { !Array<!blink.mojom.ManifestImageResource> } */
    this.icons;
    /** @export { !Map<!mojoBase.mojom.String16, !Array<!mojoBase.mojom.String16>> } */
    this.accept;
    /** @export { !blink.mojom.ManifestFileHandler_LaunchType } */
    this.launchType;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestTranslationItemSpec.$,
    'ManifestTranslationItem',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'shortName', 8,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'description', 16,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
    ],
    [[0, 32],]);





/** @record */
blink.mojom.ManifestTranslationItem = class {
  constructor() {
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.name;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.shortName;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.description;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestUserPreferencesSpec.$,
    'ManifestUserPreferences',
    [
      mojo.internal.StructField(
        'colorSchemeDark', 0,
        0,
        blink.mojom.ManifestUserPreferenceOverridesSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.ManifestUserPreferences = class {
  constructor() {
    /** @export { (blink.mojom.ManifestUserPreferenceOverrides|undefined) } */
    this.colorSchemeDark;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestUserPreferenceOverridesSpec.$,
    'ManifestUserPreferenceOverrides',
    [
      mojo.internal.StructField(
        'hasThemeColor', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'themeColor', 4,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'hasBackgroundColor', 0,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'backgroundColor', 8,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.ManifestUserPreferenceOverrides = class {
  constructor() {
    /** @export { !boolean } */
    this.hasThemeColor;
    /** @export { !boolean } */
    this.hasBackgroundColor;
    /** @export { !number } */
    this.themeColor;
    /** @export { !number } */
    this.backgroundColor;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestTabStripSpec.$,
    'ManifestTabStrip',
    [
      mojo.internal.StructField(
        'homeTab', 0,
        0,
        blink.mojom.HomeTabUnionSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'newTabButton', 16,
        0,
        blink.mojom.NewTabButtonUnionSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 40],]);





/** @record */
blink.mojom.ManifestTabStrip = class {
  constructor() {
    /** @export { !blink.mojom.HomeTabUnion } */
    this.homeTab;
    /** @export { !blink.mojom.NewTabButtonUnion } */
    this.newTabButton;
  }
};




mojo.internal.Struct(
    blink.mojom.HomeTabParamsSpec.$,
    'HomeTabParams',
    [
      mojo.internal.StructField(
        'icons', 0,
        0,
        mojo.internal.Array(blink.mojom.ManifestImageResourceSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.HomeTabParams = class {
  constructor() {
    /** @export { !Array<!blink.mojom.ManifestImageResource> } */
    this.icons;
  }
};




mojo.internal.Struct(
    blink.mojom.NewTabButtonParamsSpec.$,
    'NewTabButtonParams',
    [
      mojo.internal.StructField(
        'url', 0,
        0,
        url.mojom.UrlSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.NewTabButtonParams = class {
  constructor() {
    /** @export { (url.mojom.Url|undefined) } */
    this.url;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestDebugInfoSpec.$,
    'ManifestDebugInfo',
    [
      mojo.internal.StructField(
        'errors', 0,
        0,
        mojo.internal.Array(blink.mojom.ManifestErrorSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'rawManifest', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.ManifestDebugInfo = class {
  constructor() {
    /** @export { !Array<!blink.mojom.ManifestError> } */
    this.errors;
    /** @export { !string } */
    this.rawManifest;
  }
};




mojo.internal.Struct(
    blink.mojom.ManifestErrorSpec.$,
    'ManifestError',
    [
      mojo.internal.StructField(
        'message', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'critical', 8,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'line', 12,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'column', 16,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ],
    [[0, 32],]);





/** @record */
blink.mojom.ManifestError = class {
  constructor() {
    /** @export { !string } */
    this.message;
    /** @export { !boolean } */
    this.critical;
    /** @export { !number } */
    this.line;
    /** @export { !number } */
    this.column;
  }
};




mojo.internal.Union(
    blink.mojom.HomeTabUnionSpec.$, 'HomeTabUnion',
    {
      'visibility': {
        'ordinal': 0,
        'type': blink.mojom.TabStripMemberVisibilitySpec.$,
      },
      'params': {
        'ordinal': 1,
        'type': blink.mojom.HomeTabParamsSpec.$,
      },
    });

/**
 * @typedef { {
 *   visibility: (!blink.mojom.TabStripMemberVisibility|undefined),
 *   params: (!blink.mojom.HomeTabParams|undefined),
 * } }
 */
blink.mojom.HomeTabUnion;


mojo.internal.Union(
    blink.mojom.NewTabButtonUnionSpec.$, 'NewTabButtonUnion',
    {
      'visibility': {
        'ordinal': 0,
        'type': blink.mojom.TabStripMemberVisibilitySpec.$,
      },
      'params': {
        'ordinal': 1,
        'type': blink.mojom.NewTabButtonParamsSpec.$,
      },
    });

/**
 * @typedef { {
 *   visibility: (!blink.mojom.TabStripMemberVisibility|undefined),
 *   params: (!blink.mojom.NewTabButtonParams|undefined),
 * } }
 */
blink.mojom.NewTabButtonUnion;
