// services/viz/public/mojom/compositing/shared_element_resource_id.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SharedElementResourceIdSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    SharedElementResourceIdSpec.$,
    'SharedElementResourceId',
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class SharedElementResourceId {
  constructor() {
    /** @type { !number } */
    this.id;
  }
}

