// services/viz/public/mojom/compositing/compositor_frame.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('viz.mojom');







/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.CompositorFrameSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    viz.mojom.CompositorFrameSpec.$,
    'CompositorFrame',
    [
      mojo.internal.StructField(
        'metadata', 0,
        0,
        viz.mojom.CompositorFrameMetadataSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'resources', 8,
        0,
        mojo.internal.Array(viz.mojom.TransferableResourceSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'passes', 16,
        0,
        mojo.internal.Array(viz.mojom.CompositorRenderPassSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 32],]);





/** @record */
viz.mojom.CompositorFrame = class {
  constructor() {
    /** @export { !viz.mojom.CompositorFrameMetadata } */
    this.metadata;
    /** @export { !Array<!viz.mojom.TransferableResource> } */
    this.resources;
    /** @export { !Array<!viz.mojom.CompositorRenderPass> } */
    this.passes;
  }
};


