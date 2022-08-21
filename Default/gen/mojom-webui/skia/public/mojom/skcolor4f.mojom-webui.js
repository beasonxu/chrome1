// mojom-webui/skia/public/mojom/skcolor4f.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SkColor4fSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    SkColor4fSpec.$,
    'SkColor4f',
    [
      mojo.internal.StructField(
        'r', 0,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'g', 4,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'b', 8,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'a', 12,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class SkColor4f {
  constructor() {
    /** @type { !number } */
    this.r;
    /** @type { !number } */
    this.g;
    /** @type { !number } */
    this.b;
    /** @type { !number } */
    this.a;
  }
}

