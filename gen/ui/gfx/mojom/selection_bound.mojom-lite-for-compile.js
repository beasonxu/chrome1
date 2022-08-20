// ui/gfx/mojom/selection_bound.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('gfx.mojom.PointF');




goog.provide('gfx.mojom.SelectionBoundType');
goog.provide('gfx.mojom.SelectionBoundTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
gfx.mojom.SelectionBoundTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
gfx.mojom.SelectionBoundType = {
  
  LEFT: 0,
  RIGHT: 1,
  CENTER: 2,
  EMPTY: 3,
  LAST: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};



goog.provide('gfx.mojom.SelectionBoundSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.SelectionBoundSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    gfx.mojom.SelectionBoundSpec.$,
    'SelectionBound',
    [
      mojo.internal.StructField(
        'type', 0,
        0,
        gfx.mojom.SelectionBoundTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'edgeStart', 8,
        0,
        gfx.mojom.PointFSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'edgeEnd', 16,
        0,
        gfx.mojom.PointFSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'visibleEdgeStart', 24,
        0,
        gfx.mojom.PointFSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'visibleEdgeEnd', 32,
        0,
        gfx.mojom.PointFSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'visible', 4,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 48],]);



goog.provide('gfx.mojom.SelectionBound');

/** @record */
gfx.mojom.SelectionBound = class {
  constructor() {
    /** @export { !gfx.mojom.SelectionBoundType } */
    this.type;
    /** @export { !boolean } */
    this.visible;
    /** @export { !gfx.mojom.PointF } */
    this.edgeStart;
    /** @export { !gfx.mojom.PointF } */
    this.edgeEnd;
    /** @export { !gfx.mojom.PointF } */
    this.visibleEdgeStart;
    /** @export { !gfx.mojom.PointF } */
    this.visibleEdgeEnd;
  }
};


