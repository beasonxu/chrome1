// services/device/public/mojom/battery_status.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../mojo/public/js/bindings.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BatteryStatusSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    BatteryStatusSpec.$,
    'BatteryStatus',
    [
      mojo.internal.StructField(
        'charging', 0,
        0,
        mojo.internal.Bool,
        true,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'chargingTime', 8,
        0,
        mojo.internal.Double,
        0.0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'dischargingTime', 16,
        0,
        mojo.internal.Double,
        Infinity,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'level', 24,
        0,
        mojo.internal.Double,
        1.0,
        false /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class BatteryStatus {
  constructor() {
    /** @type { !boolean } */
    this.charging;
    /** @type { !number } */
    this.chargingTime;
    /** @type { !number } */
    this.dischargingTime;
    /** @type { !number } */
    this.level;
  }
}

