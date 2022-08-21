// third_party/blink/public/mojom/notifications/notification.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('blink.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.NotificationDirectionSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.NotificationDirection = {
  
  LEFT_TO_RIGHT: 0,
  RIGHT_TO_LEFT: 1,
  AUTO: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};


/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.NotificationActionTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.NotificationActionType = {
  
  BUTTON: 0,
  TEXT: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};




/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.NotificationActionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.NotificationDataSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.NotificationResourcesSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.NotificationActionSpec.$,
    'NotificationAction',
    [
      mojo.internal.StructField(
        'type', 0,
        0,
        blink.mojom.NotificationActionTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'action', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'title', 16,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'icon', 24,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'placeholder', 32,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
    ],
    [[0, 48],]);





/** @record */
blink.mojom.NotificationAction = class {
  constructor() {
    /** @export { !blink.mojom.NotificationActionType } */
    this.type;
    /** @export { !string } */
    this.action;
    /** @export { !mojoBase.mojom.String16 } */
    this.title;
    /** @export { !url.mojom.Url } */
    this.icon;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.placeholder;
  }
};


/**
 * @const { !bigint }
 * @export
 */
blink.mojom.NotificationData_MAXIMUM_DEVELOPER_DATA_SIZE =
    BigInt('1048576');



mojo.internal.Struct(
    blink.mojom.NotificationDataSpec.$,
    'NotificationData',
    [
      mojo.internal.StructField(
        'title', 0,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'direction', 8,
        0,
        blink.mojom.NotificationDirectionSpec.$,
        blink.mojom.NotificationDirection.LEFT_TO_RIGHT,
        false /* nullable */),
      mojo.internal.StructField(
        'lang', 16,
        0,
        mojo.internal.String,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'body', 24,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'tag', 32,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'image', 40,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'icon', 48,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'badge', 56,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'vibrationPattern', 64,
        0,
        mojo.internal.Array(mojo.internal.Int32, false),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'timestamp', 72,
        0,
        mojo.internal.Double,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'renotify', 12,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'silent', 12,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'requireInteraction', 12,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'data', 80,
        0,
        mojo.internal.Array(mojo.internal.Uint8, false),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'actions', 88,
        0,
        mojo.internal.Array(blink.mojom.NotificationActionSpec.$, false),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'showTriggerTimestamp', 96,
        0,
        mojoBase.mojom.TimeSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 112],]);





/** @record */
blink.mojom.NotificationData = class {
  constructor() {
    /** @export { !mojoBase.mojom.String16 } */
    this.title;
    /** @export { !blink.mojom.NotificationDirection } */
    this.direction;
    /** @export { !boolean } */
    this.renotify;
    /** @export { !boolean } */
    this.silent;
    /** @export { !boolean } */
    this.requireInteraction;
    /** @export { (string|undefined) } */
    this.lang;
    /** @export { !mojoBase.mojom.String16 } */
    this.body;
    /** @export { !string } */
    this.tag;
    /** @export { !url.mojom.Url } */
    this.image;
    /** @export { !url.mojom.Url } */
    this.icon;
    /** @export { !url.mojom.Url } */
    this.badge;
    /** @export { (Array<!number>|undefined) } */
    this.vibrationPattern;
    /** @export { !number } */
    this.timestamp;
    /** @export { (Array<!number>|undefined) } */
    this.data;
    /** @export { (Array<!blink.mojom.NotificationAction>|undefined) } */
    this.actions;
    /** @export { (mojoBase.mojom.Time|undefined) } */
    this.showTriggerTimestamp;
  }
};




mojo.internal.Struct(
    blink.mojom.NotificationResourcesSpec.$,
    'NotificationResources',
    [
      mojo.internal.StructField(
        'image', 0,
        0,
        skia.mojom.BitmapN32Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'icon', 8,
        0,
        skia.mojom.BitmapN32Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'badge', 16,
        0,
        skia.mojom.BitmapN32Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'actionIcons', 24,
        0,
        mojo.internal.Array(skia.mojom.BitmapN32Spec.$, true),
        null,
        true /* nullable */),
    ],
    [[0, 40],]);





/** @record */
blink.mojom.NotificationResources = class {
  constructor() {
    /** @export { (skia.mojom.BitmapN32|undefined) } */
    this.image;
    /** @export { (skia.mojom.BitmapN32|undefined) } */
    this.icon;
    /** @export { (skia.mojom.BitmapN32|undefined) } */
    this.badge;
    /** @export { (Array<?skia.mojom.BitmapN32>|undefined) } */
    this.actionIcons;
  }
};


