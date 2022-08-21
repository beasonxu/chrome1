// skia/public/mojom/skcolor.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');







goog.provide('skia.mojom.SkColorSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
skia.mojom.SkColorSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    skia.mojom.SkColorSpec.$,
    'SkColor',
    [
      mojo.internal.StructField(
        'value', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('skia.mojom.SkColor');

/** @record */
skia.mojom.SkColor = class {
  constructor() {
    /** @export { !number } */
    this.value;
  }
};


