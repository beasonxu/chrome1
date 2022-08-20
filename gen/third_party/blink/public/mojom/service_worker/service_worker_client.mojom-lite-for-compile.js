// third_party/blink/public/mojom/service_worker/service_worker_client.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('blink.mojom.RequestContextFrameType');
goog.require('mojoBase.mojom.TimeTicks');
goog.require('url.mojom.Url');




goog.provide('blink.mojom.ServiceWorkerClientType');
goog.provide('blink.mojom.ServiceWorkerClientTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.ServiceWorkerClientTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.ServiceWorkerClientType = {
  
  kWindow: 0,
  kDedicatedWorker: 1,
  kSharedWorker: 2,
  kAll: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};

goog.provide('blink.mojom.ServiceWorkerClientLifecycleState');
goog.provide('blink.mojom.ServiceWorkerClientLifecycleStateSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.ServiceWorkerClientLifecycleStateSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.ServiceWorkerClientLifecycleState = {
  
  kActive: 0,
  kFrozen: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};



goog.provide('blink.mojom.ServiceWorkerClientQueryOptionsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ServiceWorkerClientQueryOptionsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.ServiceWorkerClientInfoSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ServiceWorkerClientInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.ServiceWorkerClientQueryOptionsSpec.$,
    'ServiceWorkerClientQueryOptions',
    [
      mojo.internal.StructField(
        'includeUncontrolled', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'clientType', 4,
        0,
        blink.mojom.ServiceWorkerClientTypeSpec.$,
        blink.mojom.ServiceWorkerClientType.kWindow,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.ServiceWorkerClientQueryOptions');

/** @record */
blink.mojom.ServiceWorkerClientQueryOptions = class {
  constructor() {
    /** @export { !boolean } */
    this.includeUncontrolled;
    /** @export { !blink.mojom.ServiceWorkerClientType } */
    this.clientType;
  }
};




mojo.internal.Struct(
    blink.mojom.ServiceWorkerClientInfoSpec.$,
    'ServiceWorkerClientInfo',
    [
      mojo.internal.StructField(
        'url', 0,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'frameType', 8,
        0,
        blink.mojom.RequestContextFrameTypeSpec.$,
        blink.mojom.RequestContextFrameType.kNone,
        false /* nullable */),
      mojo.internal.StructField(
        'clientUuid', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'clientType', 12,
        0,
        blink.mojom.ServiceWorkerClientTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'pageHidden', 24,
        0,
        mojo.internal.Bool,
        true,
        false /* nullable */),
      mojo.internal.StructField(
        'isFocused', 24,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'lifecycleState', 28,
        0,
        blink.mojom.ServiceWorkerClientLifecycleStateSpec.$,
        blink.mojom.ServiceWorkerClientLifecycleState.kActive,
        false /* nullable */),
      mojo.internal.StructField(
        'lastFocusTime', 32,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'creationTime', 40,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 56],]);



goog.provide('blink.mojom.ServiceWorkerClientInfo');

/** @record */
blink.mojom.ServiceWorkerClientInfo = class {
  constructor() {
    /** @export { !url.mojom.Url } */
    this.url;
    /** @export { !blink.mojom.RequestContextFrameType } */
    this.frameType;
    /** @export { !blink.mojom.ServiceWorkerClientType } */
    this.clientType;
    /** @export { !string } */
    this.clientUuid;
    /** @export { !boolean } */
    this.pageHidden;
    /** @export { !boolean } */
    this.isFocused;
    /** @export { !blink.mojom.ServiceWorkerClientLifecycleState } */
    this.lifecycleState;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.lastFocusTime;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.creationTime;
  }
};


