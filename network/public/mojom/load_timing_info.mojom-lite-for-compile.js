// services/network/public/mojom/load_timing_info.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('mojoBase.mojom.Time');
goog.require('mojoBase.mojom.TimeTicks');






goog.provide('network.mojom.LoadTimingInfoConnectTimingSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.LoadTimingInfoConnectTimingSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.LoadTimingInfoSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.LoadTimingInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    network.mojom.LoadTimingInfoConnectTimingSpec.$,
    'LoadTimingInfoConnectTiming',
    [
      mojo.internal.StructField(
        'dnsStart', 0,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'dnsEnd', 8,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'connectStart', 16,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'connectEnd', 24,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sslStart', 32,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sslEnd', 40,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 56],]);



goog.provide('network.mojom.LoadTimingInfoConnectTiming');

/** @record */
network.mojom.LoadTimingInfoConnectTiming = class {
  constructor() {
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.dnsStart;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.dnsEnd;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.connectStart;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.connectEnd;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.sslStart;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.sslEnd;
  }
};




mojo.internal.Struct(
    network.mojom.LoadTimingInfoSpec.$,
    'LoadTimingInfo',
    [
      mojo.internal.StructField(
        'socketReused', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'socketLogId', 4,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'requestStartTime', 8,
        0,
        mojoBase.mojom.TimeSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'requestStart', 16,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'proxyResolveStart', 24,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'proxyResolveEnd', 32,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'connectTiming', 40,
        0,
        network.mojom.LoadTimingInfoConnectTimingSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sendStart', 48,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sendEnd', 56,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'receiveHeadersStart', 64,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'receiveHeadersEnd', 72,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'receiveNonInformationalHeadersStart', 80,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'firstEarlyHintsTime', 88,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'pushStart', 96,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'pushEnd', 104,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'serviceWorkerStartTime', 112,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'serviceWorkerReadyTime', 120,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'serviceWorkerFetchStart', 128,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'serviceWorkerRespondWithSettled', 136,
        0,
        mojoBase.mojom.TimeTicksSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 152],]);



goog.provide('network.mojom.LoadTimingInfo');

/** @record */
network.mojom.LoadTimingInfo = class {
  constructor() {
    /** @export { !boolean } */
    this.socketReused;
    /** @export { !number } */
    this.socketLogId;
    /** @export { !mojoBase.mojom.Time } */
    this.requestStartTime;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.requestStart;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.proxyResolveStart;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.proxyResolveEnd;
    /** @export { !network.mojom.LoadTimingInfoConnectTiming } */
    this.connectTiming;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.sendStart;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.sendEnd;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.receiveHeadersStart;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.receiveHeadersEnd;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.receiveNonInformationalHeadersStart;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.firstEarlyHintsTime;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.pushStart;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.pushEnd;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.serviceWorkerStartTime;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.serviceWorkerReadyTime;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.serviceWorkerFetchStart;
    /** @export { !mojoBase.mojom.TimeTicks } */
    this.serviceWorkerRespondWithSettled;
  }
};


