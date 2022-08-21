// services/viz/public/mojom/compositing/shared_quad_state.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('viz.mojom');







/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.SharedQuadStateSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    viz.mojom.SharedQuadStateSpec.$,
    'SharedQuadState',
    [
      mojo.internal.StructField(
        'quadToTargetTransform', 0,
        0,
        gfx.mojom.TransformSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'quadLayerRect', 8,
        0,
        gfx.mojom.RectSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'visibleQuadLayerRect', 16,
        0,
        gfx.mojom.RectSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'maskFilterInfo', 24,
        0,
        gfx.mojom.MaskFilterInfoSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'clipRect', 32,
        0,
        gfx.mojom.RectSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'areContentsOpaque', 40,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'opacity', 44,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'blendMode', 48,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'sortingContextId', 52,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'isFastRoundedCorner', 40,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'deJellyDeltaY', 56,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */),
    ],
    [[0, 72],]);





/** @record */
viz.mojom.SharedQuadState = class {
  constructor() {
    /** @export { !gfx.mojom.Transform } */
    this.quadToTargetTransform;
    /** @export { !gfx.mojom.Rect } */
    this.quadLayerRect;
    /** @export { !gfx.mojom.Rect } */
    this.visibleQuadLayerRect;
    /** @export { !gfx.mojom.MaskFilterInfo } */
    this.maskFilterInfo;
    /** @export { (gfx.mojom.Rect|undefined) } */
    this.clipRect;
    /** @export { !boolean } */
    this.areContentsOpaque;
    /** @export { !boolean } */
    this.isFastRoundedCorner;
    /** @export { !number } */
    this.opacity;
    /** @export { !number } */
    this.blendMode;
    /** @export { !number } */
    this.sortingContextId;
    /** @export { !number } */
    this.deJellyDeltaY;
  }
};


