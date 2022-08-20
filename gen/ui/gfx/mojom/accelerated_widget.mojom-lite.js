// ui/gfx/mojom/accelerated_widget.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('gfx.mojom');







/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
gfx.mojom.AcceleratedWidgetSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    gfx.mojom.AcceleratedWidgetSpec.$,
    'AcceleratedWidget',
    [
      mojo.internal.StructField(
        'widget', 0,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
gfx.mojom.AcceleratedWidget = class {
  constructor() {
    /** @export { !bigint } */
    this.widget;
  }
};


