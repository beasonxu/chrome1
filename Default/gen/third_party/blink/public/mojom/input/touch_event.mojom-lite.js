// third_party/blink/public/mojom/input/touch_event.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('blink.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.TouchStateSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.TouchState = {
  
  kStateUndefined: 0,
  kStateReleased: 1,
  kStatePressed: 2,
  kStateMoved: 3,
  kStateStationary: 4,
  kStateCancelled: 5,
  kStateMax: 5,
  MIN_VALUE: 0,
  MAX_VALUE: 5,
};




/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.TouchEventConsumersSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.TouchEventConsumersSpec.$,
    'TouchEventConsumers',
    [
      mojo.internal.StructField(
        'hasTouchEventHandlers', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'hasHitTestableScrollbar', 0,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.TouchEventConsumers = class {
  constructor() {
    /** @export { !boolean } */
    this.hasTouchEventHandlers;
    /** @export { !boolean } */
    this.hasHitTestableScrollbar;
  }
};


