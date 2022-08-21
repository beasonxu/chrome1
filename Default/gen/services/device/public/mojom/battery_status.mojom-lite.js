// services/device/public/mojom/battery_status.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('device.mojom');







/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
device.mojom.BatteryStatusSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    device.mojom.BatteryStatusSpec.$,
    'BatteryStatus',
    [
      mojo.internal.StructField(
        'charging', 0,
        0,
        mojo.internal.Bool,
        true,
        false /* nullable */),
      mojo.internal.StructField(
        'chargingTime', 8,
        0,
        mojo.internal.Double,
        0.0,
        false /* nullable */),
      mojo.internal.StructField(
        'dischargingTime', 16,
        0,
        mojo.internal.Double,
        Infinity,
        false /* nullable */),
      mojo.internal.StructField(
        'level', 24,
        0,
        mojo.internal.Double,
        1.0,
        false /* nullable */),
    ],
    [[0, 40],]);





/** @record */
device.mojom.BatteryStatus = class {
  constructor() {
    /** @export { !boolean } */
    this.charging;
    /** @export { !number } */
    this.chargingTime;
    /** @export { !number } */
    this.dischargingTime;
    /** @export { !number } */
    this.level;
  }
};


