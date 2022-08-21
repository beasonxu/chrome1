// services/viz/public/mojom/compositing/selection.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';

import {
  SelectionBound as gfx_mojom_SelectionBound,
  SelectionBoundSpec as gfx_mojom_SelectionBoundSpec
} from '../../../../../ui/gfx/mojom/selection_bound.mojom.m.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SelectionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    SelectionSpec.$,
    'Selection',
    [
      mojo.internal.StructField(
        'start', 0,
        0,
        gfx_mojom_SelectionBoundSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'end', 8,
        0,
        gfx_mojom_SelectionBoundSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class Selection {
  constructor() {
    /** @type { !gfx_mojom_SelectionBound } */
    this.start;
    /** @type { !gfx_mojom_SelectionBound } */
    this.end;
  }
}

