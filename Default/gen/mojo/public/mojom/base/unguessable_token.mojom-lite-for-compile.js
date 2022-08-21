// mojo/public/mojom/base/unguessable_token.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');







goog.provide('mojoBase.mojom.UnguessableTokenSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.UnguessableTokenSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojoBase.mojom.UnguessableTokenSpec.$,
    'UnguessableToken',
    [
      mojo.internal.StructField(
        'high', 0,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'low', 8,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('mojoBase.mojom.UnguessableToken');

/** @record */
mojoBase.mojom.UnguessableToken = class {
  constructor() {
    /** @export { !bigint } */
    this.high;
    /** @export { !bigint } */
    this.low;
  }
};


