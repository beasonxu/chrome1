// services/viz/public/mojom/compositing/compositor_frame_metadata.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';

import {
  TimeDelta as mojoBase_mojom_TimeDelta,
  TimeDeltaSpec as mojoBase_mojom_TimeDeltaSpec
} from '../../../../../mojo/public/mojom/base/time.mojom.m.js';

import {
  SkColor4f as skia_mojom_SkColor4f,
  SkColor4fSpec as skia_mojom_SkColor4fSpec
} from '../../../../../skia/public/mojom/skcolor4f.mojom.m.js';

import {
  PointF as gfx_mojom_PointF,
  PointFSpec as gfx_mojom_PointFSpec,
  SizeF as gfx_mojom_SizeF,
  SizeFSpec as gfx_mojom_SizeFSpec
} from '../../../../../ui/gfx/geometry/mojom/geometry.mojom.m.js';

import {
  DelegatedInkMetadata as gfx_mojom_DelegatedInkMetadata,
  DelegatedInkMetadataSpec as gfx_mojom_DelegatedInkMetadataSpec
} from '../../../../../ui/gfx/mojom/delegated_ink_metadata.mojom.m.js';

import {
  ContentColorUsage as gfx_mojom_ContentColorUsage,
  ContentColorUsageSpec as gfx_mojom_ContentColorUsageSpec
} from '../../../../../ui/gfx/mojom/display_color_spaces.mojom.m.js';

import {
  OverlayTransform as gfx_mojom_OverlayTransform,
  OverlayTransformSpec as gfx_mojom_OverlayTransformSpec
} from '../../../../../ui/gfx/mojom/overlay_transform.mojom.m.js';

import {
  LatencyInfo as ui_mojom_LatencyInfo,
  LatencyInfoSpec as ui_mojom_LatencyInfoSpec
} from '../../../../../ui/latency/mojom/latency_info.mojom.m.js';

import {
  BeginFrameAck as viz_mojom_BeginFrameAck,
  BeginFrameAckSpec as viz_mojom_BeginFrameAckSpec
} from './begin_frame_args.mojom.m.js';

import {
  CompositorFrameTransitionDirective as viz_mojom_CompositorFrameTransitionDirective,
  CompositorFrameTransitionDirectiveSpec as viz_mojom_CompositorFrameTransitionDirectiveSpec
} from './compositor_frame_transition_directive.mojom.m.js';

import {
  FrameDeadline as viz_mojom_FrameDeadline,
  FrameDeadlineSpec as viz_mojom_FrameDeadlineSpec
} from './frame_deadline.mojom.m.js';

import {
  RegionCaptureBounds as viz_mojom_RegionCaptureBounds,
  RegionCaptureBoundsSpec as viz_mojom_RegionCaptureBoundsSpec
} from './region_capture_bounds.mojom.m.js';

import {
  SurfaceId as viz_mojom_SurfaceId,
  SurfaceIdSpec as viz_mojom_SurfaceIdSpec
} from './surface_id.mojom.m.js';

import {
  SurfaceRange as viz_mojom_SurfaceRange,
  SurfaceRangeSpec as viz_mojom_SurfaceRangeSpec
} from './surface_range.mojom.m.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const CompositorFrameMetadataSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    CompositorFrameMetadataSpec.$,
    'CompositorFrameMetadata',
    [
      mojo.internal.StructField(
        'deviceScaleFactor', 0,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'rootScrollOffset', 8,
        0,
        gfx_mojom_PointFSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'pageScaleFactor', 4,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'scrollableViewportSize', 16,
        0,
        gfx_mojom_SizeFSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'contentColorUsage', 24,
        0,
        gfx_mojom_ContentColorUsageSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'mayContainVideo', 28,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'mayThrottleIfUndrawnFrames', 28,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isResourcelessSoftwareDrawWithScrollOrAnimation', 28,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'rootBackgroundColor', 32,
        0,
        skia_mojom_SkColor4fSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'latencyInfo', 40,
        0,
        mojo.internal.Array(ui_mojom_LatencyInfoSpec.$, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'referencedSurfaces', 48,
        0,
        mojo.internal.Array(viz_mojom_SurfaceRangeSpec.$, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'deadline', 56,
        0,
        viz_mojom_FrameDeadlineSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'activationDependencies', 64,
        0,
        mojo.internal.Array(viz_mojom_SurfaceIdSpec.$, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'beginFrameAck', 72,
        0,
        viz_mojom_BeginFrameAckSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'frameToken', 80,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'sendFrameTokenToEmbedder', 28,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'topControlsVisibleHeightSet', 28,
        4,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'topControlsVisibleHeight', 84,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'minPageScaleFactor', 88,
        0,
        mojo.internal.Float,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'preferredFrameInterval', 96,
        0,
        mojoBase_mojom_TimeDeltaSpec.$,
        null,
        true /* nullable */,
        0),
      mojo.internal.StructField(
        'displayTransformHint', 92,
        0,
        gfx_mojom_OverlayTransformSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'delegatedInkMetadata', 104,
        0,
        gfx_mojom_DelegatedInkMetadataSpec.$,
        null,
        true /* nullable */,
        0),
      mojo.internal.StructField(
        'transitionDirectives', 112,
        0,
        mojo.internal.Array(viz_mojom_CompositorFrameTransitionDirectiveSpec.$, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'captureBounds', 120,
        0,
        viz_mojom_RegionCaptureBoundsSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'hasSharedElementResources', 28,
        5,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 136],]);



/**
 * @record
 */
export class CompositorFrameMetadata {
  constructor() {
    /** @type { !number } */
    this.deviceScaleFactor;
    /** @type { !number } */
    this.pageScaleFactor;
    /** @type { !gfx_mojom_PointF } */
    this.rootScrollOffset;
    /** @type { !gfx_mojom_SizeF } */
    this.scrollableViewportSize;
    /** @type { !gfx_mojom_ContentColorUsage } */
    this.contentColorUsage;
    /** @type { !boolean } */
    this.mayContainVideo;
    /** @type { !boolean } */
    this.mayThrottleIfUndrawnFrames;
    /** @type { !boolean } */
    this.isResourcelessSoftwareDrawWithScrollOrAnimation;
    /** @type { !boolean } */
    this.sendFrameTokenToEmbedder;
    /** @type { !boolean } */
    this.topControlsVisibleHeightSet;
    /** @type { !boolean } */
    this.hasSharedElementResources;
    /** @type { !skia_mojom_SkColor4f } */
    this.rootBackgroundColor;
    /** @type { !Array<!ui_mojom_LatencyInfo> } */
    this.latencyInfo;
    /** @type { !Array<!viz_mojom_SurfaceRange> } */
    this.referencedSurfaces;
    /** @type { !viz_mojom_FrameDeadline } */
    this.deadline;
    /** @type { !Array<!viz_mojom_SurfaceId> } */
    this.activationDependencies;
    /** @type { !viz_mojom_BeginFrameAck } */
    this.beginFrameAck;
    /** @type { !number } */
    this.frameToken;
    /** @type { !number } */
    this.topControlsVisibleHeight;
    /** @type { !number } */
    this.minPageScaleFactor;
    /** @type { !gfx_mojom_OverlayTransform } */
    this.displayTransformHint;
    /** @type { (mojoBase_mojom_TimeDelta|undefined) } */
    this.preferredFrameInterval;
    /** @type { (gfx_mojom_DelegatedInkMetadata|undefined) } */
    this.delegatedInkMetadata;
    /** @type { !Array<!viz_mojom_CompositorFrameTransitionDirective> } */
    this.transitionDirectives;
    /** @type { !viz_mojom_RegionCaptureBounds } */
    this.captureBounds;
  }
}

