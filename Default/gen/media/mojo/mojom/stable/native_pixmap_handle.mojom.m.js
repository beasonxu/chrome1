// media/mojo/mojom/stable/native_pixmap_handle.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../mojo/public/js/bindings.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const NativePixmapPlaneSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const NativePixmapHandleSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    NativePixmapPlaneSpec.$,
    'NativePixmapPlane',
    [
      mojo.internal.StructField(
        'stride', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'offset', 8,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'size', 16,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'bufferHandle', 4,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 32],]);



/**
 * @record
 */
export class NativePixmapPlane {
  constructor() {
    /** @type { !number } */
    this.stride;
    /** @type { !MojoHandle } */
    this.bufferHandle;
    /** @type { !bigint } */
    this.offset;
    /** @type { !bigint } */
    this.size;
  }
}



mojo.internal.Struct(
    NativePixmapHandleSpec.$,
    'NativePixmapHandle',
    [
      mojo.internal.StructField(
        'planes', 0,
        0,
        mojo.internal.Array(NativePixmapPlaneSpec.$, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'modifier', 8,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class NativePixmapHandle {
  constructor() {
    /** @type { !Array<!NativePixmapPlane> } */
    this.planes;
    /** @type { !bigint } */
    this.modifier;
  }
}

