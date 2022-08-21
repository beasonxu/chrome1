// services/network/public/mojom/ip_address.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('network.mojom');







/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.IPAddressSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    network.mojom.IPAddressSpec.$,
    'IPAddress',
    [
      mojo.internal.StructField(
        'addressBytes', 0,
        0,
        mojo.internal.Array(mojo.internal.Uint8, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
network.mojom.IPAddress = class {
  constructor() {
    /** @export { !Array<!number> } */
    this.addressBytes;
  }
};


