// gpu/ipc/common/surface_handle.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../mojo/public/js/bindings.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SurfaceHandleSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    SurfaceHandleSpec.$,
    'SurfaceHandle',
    [
      mojo.internal.StructField(
        'surfaceHandle', 0,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class SurfaceHandle {
  constructor() {
    /** @type { !bigint } */
    this.surfaceHandle;
  }
}

