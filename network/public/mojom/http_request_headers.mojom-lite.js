// services/network/public/mojom/http_request_headers.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('network.mojom');







/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.HttpRequestHeaderKeyValuePairSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.HttpRequestHeadersSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    network.mojom.HttpRequestHeaderKeyValuePairSpec.$,
    'HttpRequestHeaderKeyValuePair',
    [
      mojo.internal.StructField(
        'key', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'value', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
network.mojom.HttpRequestHeaderKeyValuePair = class {
  constructor() {
    /** @export { !string } */
    this.key;
    /** @export { !string } */
    this.value;
  }
};




mojo.internal.Struct(
    network.mojom.HttpRequestHeadersSpec.$,
    'HttpRequestHeaders',
    [
      mojo.internal.StructField(
        'headers', 0,
        0,
        mojo.internal.Array(network.mojom.HttpRequestHeaderKeyValuePairSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
network.mojom.HttpRequestHeaders = class {
  constructor() {
    /** @export { !Array<!network.mojom.HttpRequestHeaderKeyValuePair> } */
    this.headers;
  }
};


