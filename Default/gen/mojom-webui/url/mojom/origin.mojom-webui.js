// mojom-webui/url/mojom/origin.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';

import {
  UnguessableToken as mojoBase_mojom_UnguessableToken,
  UnguessableTokenSpec as mojoBase_mojom_UnguessableTokenSpec
} from '../../mojo/public/mojom/base/unguessable_token.mojom-webui.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const OriginSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    OriginSpec.$,
    'Origin',
    [
      mojo.internal.StructField(
        'scheme', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'host', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'port', 16,
        0,
        mojo.internal.Uint16,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'nonceIfOpaque', 24,
        0,
        mojoBase_mojom_UnguessableTokenSpec.$,
        null,
        true /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class Origin {
  constructor() {
    /** @type { !string } */
    this.scheme;
    /** @type { !string } */
    this.host;
    /** @type { !number } */
    this.port;
    /** @type { (mojoBase_mojom_UnguessableToken|undefined) } */
    this.nonceIfOpaque;
  }
}

