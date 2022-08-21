// mojom-webui/ui/gfx/mojom/gpu_extra_info.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ANGLEFeatureSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const GpuExtraInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    ANGLEFeatureSpec.$,
    'ANGLEFeature',
    [
      mojo.internal.StructField(
        'name', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'category', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'description', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'bug', 24,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'status', 32,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'condition', 40,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 56],]);



/**
 * @record
 */
export class ANGLEFeature {
  constructor() {
    /** @type { !string } */
    this.name;
    /** @type { !string } */
    this.category;
    /** @type { !string } */
    this.description;
    /** @type { !string } */
    this.bug;
    /** @type { !string } */
    this.status;
    /** @type { !string } */
    this.condition;
  }
}



mojo.internal.Struct(
    GpuExtraInfoSpec.$,
    'GpuExtraInfo',
    [
      mojo.internal.StructField(
        'angleFeatures', 0,
        0,
        mojo.internal.Array(ANGLEFeatureSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class GpuExtraInfo {
  constructor() {
    /** @type { !Array<!ANGLEFeature> } */
    this.angleFeatures;
  }
}

