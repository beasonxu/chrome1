// url/mojom/origin.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('mojoBase.mojom.UnguessableToken');






goog.provide('url.mojom.OriginSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
url.mojom.OriginSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    url.mojom.OriginSpec.$,
    'Origin',
    [
      mojo.internal.StructField(
        'scheme', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'host', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'port', 16,
        0,
        mojo.internal.Uint16,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'nonceIfOpaque', 24,
        0,
        mojoBase.mojom.UnguessableTokenSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 40],]);



goog.provide('url.mojom.Origin');

/** @record */
url.mojom.Origin = class {
  constructor() {
    /** @export { !string } */
    this.scheme;
    /** @export { !string } */
    this.host;
    /** @export { !number } */
    this.port;
    /** @export { (mojoBase.mojom.UnguessableToken|undefined) } */
    this.nonceIfOpaque;
  }
};


