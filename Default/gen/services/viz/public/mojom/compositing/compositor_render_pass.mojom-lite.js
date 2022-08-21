// services/viz/public/mojom/compositing/compositor_render_pass.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('viz.mojom');







/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.CompositorRenderPassSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    viz.mojom.CompositorRenderPassSpec.$,
    'CompositorRenderPass',
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        viz.mojom.CompositorRenderPassIdSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'outputRect', 8,
        0,
        gfx.mojom.RectSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'damageRect', 16,
        0,
        gfx.mojom.RectSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'transformToRootTarget', 24,
        0,
        gfx.mojom.TransformSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'filters', 32,
        0,
        viz.mojom.FilterOperationsSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'backdropFilters', 40,
        0,
        viz.mojom.FilterOperationsSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'backdropFilterBounds', 48,
        0,
        gfx.mojom.RRectFSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'subtreeCaptureId', 56,
        0,
        viz.mojom.SubtreeCaptureIdSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'subtreeSize', 64,
        0,
        gfx.mojom.SizeSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sharedElementResourceId', 72,
        0,
        viz.mojom.SharedElementResourceIdSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'hasTransparentBackground', 80,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'cacheRenderPass', 80,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'hasDamageFromContributingContent', 80,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'generateMipmap', 80,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'copyRequests', 88,
        0,
        mojo.internal.Array(viz.mojom.CopyOutputRequestSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'quadList', 96,
        0,
        mojo.internal.Array(viz.mojom.DrawQuadSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'hasPerQuadDamage', 80,
        4,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 112],]);





/** @record */
viz.mojom.CompositorRenderPass = class {
  constructor() {
    /** @export { !viz.mojom.CompositorRenderPassId } */
    this.id;
    /** @export { !gfx.mojom.Rect } */
    this.outputRect;
    /** @export { !gfx.mojom.Rect } */
    this.damageRect;
    /** @export { !gfx.mojom.Transform } */
    this.transformToRootTarget;
    /** @export { !viz.mojom.FilterOperations } */
    this.filters;
    /** @export { !viz.mojom.FilterOperations } */
    this.backdropFilters;
    /** @export { (gfx.mojom.RRectF|undefined) } */
    this.backdropFilterBounds;
    /** @export { !viz.mojom.SubtreeCaptureId } */
    this.subtreeCaptureId;
    /** @export { !gfx.mojom.Size } */
    this.subtreeSize;
    /** @export { !viz.mojom.SharedElementResourceId } */
    this.sharedElementResourceId;
    /** @export { !boolean } */
    this.hasTransparentBackground;
    /** @export { !boolean } */
    this.cacheRenderPass;
    /** @export { !boolean } */
    this.hasDamageFromContributingContent;
    /** @export { !boolean } */
    this.generateMipmap;
    /** @export { !boolean } */
    this.hasPerQuadDamage;
    /** @export { !Array<!viz.mojom.CopyOutputRequest> } */
    this.copyRequests;
    /** @export { !Array<!viz.mojom.DrawQuad> } */
    this.quadList;
  }
};


