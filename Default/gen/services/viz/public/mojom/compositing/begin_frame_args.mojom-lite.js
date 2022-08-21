// services/viz/public/mojom/compositing/begin_frame_args.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('viz.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
viz.mojom.BeginFrameArgsTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
viz.mojom.BeginFrameArgsType = {
  
  INVALID: 0,
  NORMAL: 1,
  MISSED: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};




/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.BeginFrameArgsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
viz.mojom.BeginFrameAckSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    viz.mojom.BeginFrameArgsSpec.$,
    'BeginFrameArgs',
    [
      mojo.internal.StructField(
        'frameTime', 0,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'deadline', 8,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'interval', 16,
        0,
        mojoBase.mojom.TimeDeltaSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sourceId', 24,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'sequenceNumber', 32,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'framesThrottledSinceLast', 40,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'traceId', 48,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'type', 56,
        0,
        viz.mojom.BeginFrameArgsTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'onCriticalPath', 60,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'animateOnly', 60,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 72],]);





/** @record */
viz.mojom.BeginFrameArgs = class {
  constructor() {
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.frameTime;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.deadline;
    /** @export { !mojoBase.mojom.TimeDelta } */
    this.interval;
    /** @export { !bigint } */
    this.sourceId;
    /** @export { !bigint } */
    this.sequenceNumber;
    /** @export { !bigint } */
    this.framesThrottledSinceLast;
    /** @export { !bigint } */
    this.traceId;
    /** @export { !viz.mojom.BeginFrameArgsType } */
    this.type;
    /** @export { !boolean } */
    this.onCriticalPath;
    /** @export { !boolean } */
    this.animateOnly;
  }
};




mojo.internal.Struct(
    viz.mojom.BeginFrameAckSpec.$,
    'BeginFrameAck',
    [
      mojo.internal.StructField(
        'sourceId', 0,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'sequenceNumber', 8,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'traceId', 16,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'hasDamage', 24,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 40],]);





/** @record */
viz.mojom.BeginFrameAck = class {
  constructor() {
    /** @export { !bigint } */
    this.sourceId;
    /** @export { !bigint } */
    this.sequenceNumber;
    /** @export { !bigint } */
    this.traceId;
    /** @export { !boolean } */
    this.hasDamage;
  }
};


