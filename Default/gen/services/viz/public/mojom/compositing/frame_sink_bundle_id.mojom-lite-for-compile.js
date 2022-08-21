// services/viz/public/mojom/compositing/frame_sink_bundle_id.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');







goog.provide('viz.mojom.FrameSinkBundleIdSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.FrameSinkBundleIdSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    viz.mojom.FrameSinkBundleIdSpec.$,
    'FrameSinkBundleId',
    [
      mojo.internal.StructField(
        'clientId', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'bundleId', 4,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('viz.mojom.FrameSinkBundleId');

/** @record */
viz.mojom.FrameSinkBundleId = class {
  constructor() {
    /** @export { !number } */
    this.clientId;
    /** @export { !number } */
    this.bundleId;
  }
};


