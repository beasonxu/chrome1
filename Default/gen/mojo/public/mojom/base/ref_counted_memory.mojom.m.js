// mojo/public/mojom/base/ref_counted_memory.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../js/bindings.js';

import {
  BigBuffer as mojoBase_mojom_BigBuffer,
  BigBufferSpec as mojoBase_mojom_BigBufferSpec
} from './big_buffer.mojom.m.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RefCountedMemorySpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    RefCountedMemorySpec.$,
    'RefCountedMemory',
    [
      mojo.internal.StructField(
        'data', 0,
        0,
        mojoBase_mojom_BigBufferSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class RefCountedMemory {
  constructor() {
    /** @type { !mojoBase_mojom_BigBuffer } */
    this.data;
  }
}

