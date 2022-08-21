// mojom-webui/mojo/public/mojom/base/shared_memory.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ReadOnlySharedMemoryRegionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WritableSharedMemoryRegionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UnsafeSharedMemoryRegionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    ReadOnlySharedMemoryRegionSpec.$,
    'ReadOnlySharedMemoryRegion',
    [
      mojo.internal.StructField(
        'buffer', 0,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class ReadOnlySharedMemoryRegion {
  constructor() {
    /** @type { !MojoHandle } */
    this.buffer;
  }
}



mojo.internal.Struct(
    WritableSharedMemoryRegionSpec.$,
    'WritableSharedMemoryRegion',
    [
      mojo.internal.StructField(
        'buffer', 0,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class WritableSharedMemoryRegion {
  constructor() {
    /** @type { !MojoHandle } */
    this.buffer;
  }
}



mojo.internal.Struct(
    UnsafeSharedMemoryRegionSpec.$,
    'UnsafeSharedMemoryRegion',
    [
      mojo.internal.StructField(
        'buffer', 0,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class UnsafeSharedMemoryRegion {
  constructor() {
    /** @type { !MojoHandle } */
    this.buffer;
  }
}

