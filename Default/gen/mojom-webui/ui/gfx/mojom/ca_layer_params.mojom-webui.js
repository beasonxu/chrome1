// mojom-webui/ui/gfx/mojom/ca_layer_params.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';

import {
  Size as gfx_mojom_Size,
  SizeSpec as gfx_mojom_SizeSpec
} from '../geometry/mojom/geometry.mojom-webui.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const CALayerParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType} }
 */
export const CALayerContentSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    CALayerParamsSpec.$,
    'CALayerParams',
    [
      mojo.internal.StructField(
        'isEmpty', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'content', 8,
        0,
        CALayerContentSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'pixelSize', 24,
        0,
        gfx_mojom_SizeSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'scaleFactor', 4,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class CALayerParams {
  constructor() {
    /** @type { !boolean } */
    this.isEmpty;
    /** @type { !number } */
    this.scaleFactor;
    /** @type { !CALayerContent } */
    this.content;
    /** @type { !gfx_mojom_Size } */
    this.pixelSize;
  }
}

mojo.internal.Union(
    CALayerContentSpec.$, 'CALayerContent',
    {
      'caContextId': {
        'ordinal': 0,
        'type': mojo.internal.Uint32,
      },
      'ioSurfaceMachPort': {
        'ordinal': 1,
        'type': mojo.internal.Handle,
      },
    });

/**
 * @typedef { {
 *   caContextId: (!number|undefined),
 *   ioSurfaceMachPort: (!MojoHandle|undefined),
 * } }
 */
export const CALayerContent = {};
