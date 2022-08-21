// mojo/public/mojom/base/memory_allocator_dump_cross_process_uid.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../js/bindings.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const MemoryAllocatorDumpCrossProcessUidSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    MemoryAllocatorDumpCrossProcessUidSpec.$,
    'MemoryAllocatorDumpCrossProcessUid',
    [
      mojo.internal.StructField(
        'value', 0,
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
export class MemoryAllocatorDumpCrossProcessUid {
  constructor() {
    /** @type { !bigint } */
    this.value;
  }
}

