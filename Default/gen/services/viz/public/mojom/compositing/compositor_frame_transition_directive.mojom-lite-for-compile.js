// services/viz/public/mojom/compositing/compositor_frame_transition_directive.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('viz.mojom.CompositorRenderPassId');
goog.require('viz.mojom.SharedElementResourceId');
goog.require('mojoBase.mojom.TimeDelta');




goog.provide('viz.mojom.CompositorFrameTransitionDirectiveType');
goog.provide('viz.mojom.CompositorFrameTransitionDirectiveTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
viz.mojom.CompositorFrameTransitionDirectiveTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
viz.mojom.CompositorFrameTransitionDirectiveType = {
  
  kSave: 0,
  kAnimate: 1,
  kAnimateRenderer: 2,
  kRelease: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};

goog.provide('viz.mojom.CompositorFrameTransitionDirectiveEffect');
goog.provide('viz.mojom.CompositorFrameTransitionDirectiveEffectSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
viz.mojom.CompositorFrameTransitionDirectiveEffectSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
viz.mojom.CompositorFrameTransitionDirectiveEffect = {
  
  kNone: 0,
  kCoverDown: 1,
  kCoverLeft: 2,
  kCoverRight: 3,
  kCoverUp: 4,
  kExplode: 5,
  kFade: 6,
  kImplode: 7,
  kRevealDown: 8,
  kRevealLeft: 9,
  kRevealRight: 10,
  kRevealUp: 11,
  MIN_VALUE: 0,
  MAX_VALUE: 11,
};



goog.provide('viz.mojom.CompositorFrameTransitionDirectiveConfigSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.CompositorFrameTransitionDirectiveConfigSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.CompositorFrameTransitionDirectiveSharedElementSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.CompositorFrameTransitionDirectiveSharedElementSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('viz.mojom.CompositorFrameTransitionDirectiveSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.CompositorFrameTransitionDirectiveSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    viz.mojom.CompositorFrameTransitionDirectiveConfigSpec.$,
    'CompositorFrameTransitionDirectiveConfig',
    [
      mojo.internal.StructField(
        'duration', 0,
        0,
        mojoBase.mojom.TimeDeltaSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'delay', 8,
        0,
        mojoBase.mojom.TimeDeltaSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('viz.mojom.CompositorFrameTransitionDirectiveConfig');

/** @record */
viz.mojom.CompositorFrameTransitionDirectiveConfig = class {
  constructor() {
    /** @export { !mojoBase.mojom.TimeDelta } */
    this.duration;
    /** @export { !mojoBase.mojom.TimeDelta } */
    this.delay;
  }
};




mojo.internal.Struct(
    viz.mojom.CompositorFrameTransitionDirectiveSharedElementSpec.$,
    'CompositorFrameTransitionDirectiveSharedElement',
    [
      mojo.internal.StructField(
        'renderPassId', 0,
        0,
        viz.mojom.CompositorRenderPassIdSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'config', 8,
        0,
        viz.mojom.CompositorFrameTransitionDirectiveConfigSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sharedElementResourceId', 16,
        0,
        viz.mojom.SharedElementResourceIdSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 32],]);



goog.provide('viz.mojom.CompositorFrameTransitionDirectiveSharedElement');

/** @record */
viz.mojom.CompositorFrameTransitionDirectiveSharedElement = class {
  constructor() {
    /** @export { !viz.mojom.CompositorRenderPassId } */
    this.renderPassId;
    /** @export { !viz.mojom.CompositorFrameTransitionDirectiveConfig } */
    this.config;
    /** @export { !viz.mojom.SharedElementResourceId } */
    this.sharedElementResourceId;
  }
};




mojo.internal.Struct(
    viz.mojom.CompositorFrameTransitionDirectiveSpec.$,
    'CompositorFrameTransitionDirective',
    [
      mojo.internal.StructField(
        'sequenceId', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'type', 4,
        0,
        viz.mojom.CompositorFrameTransitionDirectiveTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'isRendererDrivenAnimation', 8,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'effect', 12,
        0,
        viz.mojom.CompositorFrameTransitionDirectiveEffectSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'rootConfig', 16,
        0,
        viz.mojom.CompositorFrameTransitionDirectiveConfigSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sharedElements', 24,
        0,
        mojo.internal.Array(viz.mojom.CompositorFrameTransitionDirectiveSharedElementSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 40],]);



goog.provide('viz.mojom.CompositorFrameTransitionDirective');

/** @record */
viz.mojom.CompositorFrameTransitionDirective = class {
  constructor() {
    /** @export { !number } */
    this.sequenceId;
    /** @export { !viz.mojom.CompositorFrameTransitionDirectiveType } */
    this.type;
    /** @export { !boolean } */
    this.isRendererDrivenAnimation;
    /** @export { !viz.mojom.CompositorFrameTransitionDirectiveEffect } */
    this.effect;
    /** @export { !viz.mojom.CompositorFrameTransitionDirectiveConfig } */
    this.rootConfig;
    /** @export { !Array<!viz.mojom.CompositorFrameTransitionDirectiveSharedElement> } */
    this.sharedElements;
  }
};


