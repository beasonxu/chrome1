// services/network/public/mojom/schemeful_site.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../mojo/public/js/bindings.js';

import {
  Origin as url_mojom_Origin,
  OriginSpec as url_mojom_OriginSpec
} from '../../../../url/mojom/origin.mojom.m.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SchemefulSiteSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    SchemefulSiteSpec.$,
    'SchemefulSite',
    [
      mojo.internal.StructField(
        'siteAsOrigin', 0,
        0,
        url_mojom_OriginSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class SchemefulSite {
  constructor() {
    /** @type { !url_mojom_Origin } */
    this.siteAsOrigin;
  }
}

