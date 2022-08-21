// services/viz/public/mojom/compositing/surface_id.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';

import {
  FrameSinkId as viz_mojom_FrameSinkId,
  FrameSinkIdSpec as viz_mojom_FrameSinkIdSpec
} from './frame_sink_id.mojom.m.js';

import {
  LocalSurfaceId as viz_mojom_LocalSurfaceId,
  LocalSurfaceIdSpec as viz_mojom_LocalSurfaceIdSpec
} from './local_surface_id.mojom.m.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SurfaceIdSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    SurfaceIdSpec.$,
    'SurfaceId',
    [
      mojo.internal.StructField(
        'frameSinkId', 0,
        0,
        viz_mojom_FrameSinkIdSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'localSurfaceId', 8,
        0,
        viz_mojom_LocalSurfaceIdSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class SurfaceId {
  constructor() {
    /** @type { !viz_mojom_FrameSinkId } */
    this.frameSinkId;
    /** @type { !viz_mojom_LocalSurfaceId } */
    this.localSurfaceId;
  }
}

