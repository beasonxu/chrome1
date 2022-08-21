// mojom-webui/ui/gfx/mojom/color_space.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const ColorSpacePrimaryIDSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const ColorSpacePrimaryID = {
  
  INVALID: 0,
  BT709: 1,
  BT470M: 2,
  BT470BG: 3,
  SMPTE170M: 4,
  SMPTE240M: 5,
  FILM: 6,
  BT2020: 7,
  SMPTEST428_1: 8,
  SMPTEST431_2: 9,
  P3: 10,
  XYZ_D50: 11,
  ADOBE_RGB: 12,
  APPLE_GENERIC_RGB: 13,
  WIDE_GAMUT_COLOR_SPIN: 14,
  CUSTOM: 15,
  MIN_VALUE: 0,
  MAX_VALUE: 15,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const ColorSpaceTransferIDSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const ColorSpaceTransferID = {
  
  INVALID: 0,
  BT709: 1,
  BT709_APPLE: 2,
  GAMMA18: 3,
  GAMMA22: 4,
  GAMMA24: 5,
  GAMMA28: 6,
  SMPTE170M: 7,
  SMPTE240M: 8,
  LINEAR: 9,
  LOG: 10,
  LOG_SQRT: 11,
  IEC61966_2_4: 12,
  BT1361_ECG: 13,
  SRGB: 14,
  BT2020_10: 15,
  BT2020_12: 16,
  PQ: 17,
  SMPTEST428_1: 18,
  HLG: 19,
  SRGB_HDR: 20,
  LINEAR_HDR: 21,
  CUSTOM: 22,
  CUSTOM_HDR: 23,
  PIECEWISE_HDR: 24,
  SCRGB_LINEAR_80_NITS: 25,
  MIN_VALUE: 0,
  MAX_VALUE: 25,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const ColorSpaceMatrixIDSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const ColorSpaceMatrixID = {
  
  INVALID: 0,
  RGB: 1,
  BT709: 2,
  FCC: 3,
  BT470BG: 4,
  SMPTE170M: 5,
  SMPTE240M: 6,
  YCOCG: 7,
  BT2020_NCL: 8,
  BT2020_CL: 9,
  YDZDX: 10,
  GBR: 11,
  MIN_VALUE: 0,
  MAX_VALUE: 11,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const ColorSpaceRangeIDSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const ColorSpaceRangeID = {
  
  INVALID: 0,
  LIMITED: 1,
  FULL: 2,
  DERIVED: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};


/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ColorSpaceSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    ColorSpaceSpec.$,
    'ColorSpace',
    [
      mojo.internal.StructField(
        'primaries', 0,
        0,
        ColorSpacePrimaryIDSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'transfer', 4,
        0,
        ColorSpaceTransferIDSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'matrix', 8,
        0,
        ColorSpaceMatrixIDSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'range', 12,
        0,
        ColorSpaceRangeIDSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'customPrimaryMatrix', 16,
        0,
        mojo.internal.Array(mojo.internal.Float, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'transferParams', 24,
        0,
        mojo.internal.Array(mojo.internal.Float, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class ColorSpace {
  constructor() {
    /** @type { !ColorSpacePrimaryID } */
    this.primaries;
    /** @type { !ColorSpaceTransferID } */
    this.transfer;
    /** @type { !ColorSpaceMatrixID } */
    this.matrix;
    /** @type { !ColorSpaceRangeID } */
    this.range;
    /** @type { !Array<!number> } */
    this.customPrimaryMatrix;
    /** @type { !Array<!number> } */
    this.transferParams;
  }
}

