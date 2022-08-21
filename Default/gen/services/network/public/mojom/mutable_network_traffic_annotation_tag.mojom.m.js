// services/network/public/mojom/mutable_network_traffic_annotation_tag.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../mojo/public/js/bindings.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const MutableNetworkTrafficAnnotationTagSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    MutableNetworkTrafficAnnotationTagSpec.$,
    'MutableNetworkTrafficAnnotationTag',
    [
      mojo.internal.StructField(
        'uniqueIdHashCode', 0,
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
export class MutableNetworkTrafficAnnotationTag {
  constructor() {
    /** @type { !number } */
    this.uniqueIdHashCode;
  }
}

