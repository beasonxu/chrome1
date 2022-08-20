// ui/display/mojom/display_mode.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../mojo/public/js/bindings.js';

import {
  Size as gfx_mojom_Size,
  SizeSpec as gfx_mojom_SizeSpec
} from '../../gfx/geometry/mojom/geometry.mojom.m.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DisplayModeSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    DisplayModeSpec.$,
    'DisplayMode',
    [
      mojo.internal.StructField(
        'size', 0,
        0,
        gfx_mojom_SizeSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isInterlaced', 8,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'refreshRate', 12,
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
export class DisplayMode {
  constructor() {
    /** @type { !gfx_mojom_Size } */
    this.size;
    /** @type { !boolean } */
    this.isInterlaced;
    /** @type { !number } */
    this.refreshRate;
  }
}

