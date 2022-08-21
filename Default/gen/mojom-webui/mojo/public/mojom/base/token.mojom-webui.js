// mojom-webui/mojo/public/mojom/base/token.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const TokenSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    TokenSpec.$,
    'Token',
    [
      mojo.internal.StructField(
        'high', 0,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'low', 8,
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
export class Token {
  constructor() {
    /** @type { !bigint } */
    this.high;
    /** @type { !bigint } */
    this.low;
  }
}

