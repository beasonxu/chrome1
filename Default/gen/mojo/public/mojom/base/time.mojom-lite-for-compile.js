// mojo/public/mojom/base/time.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');







goog.provide('mojoBase.mojom.TimeSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.TimeSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('mojoBase.mojom.TimeDeltaSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.TimeDeltaSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('mojoBase.mojom.TimeTicksSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.TimeTicksSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojoBase.mojom.TimeSpec.$,
    'Time',
    [
      mojo.internal.StructField(
        'internalValue', 0,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('mojoBase.mojom.Time');

/** @record */
mojoBase.mojom.Time = class {
  constructor() {
    /** @export { !bigint } */
    this.internalValue;
  }
};




mojo.internal.Struct(
    mojoBase.mojom.TimeDeltaSpec.$,
    'TimeDelta',
    [
      mojo.internal.StructField(
        'microseconds', 0,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('mojoBase.mojom.TimeDelta');

/** @record */
mojoBase.mojom.TimeDelta = class {
  constructor() {
    /** @export { !bigint } */
    this.microseconds;
  }
};




mojo.internal.Struct(
    mojoBase.mojom.TimeTicksSpec.$,
    'TimeTicks',
    [
      mojo.internal.StructField(
        'internalValue', 0,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('mojoBase.mojom.TimeTicks');

/** @record */
mojoBase.mojom.TimeTicks = class {
  constructor() {
    /** @export { !bigint } */
    this.internalValue;
  }
};


