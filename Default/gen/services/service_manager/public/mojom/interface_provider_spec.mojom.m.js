// services/service_manager/public/mojom/interface_provider_spec.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../mojo/public/js/bindings.js';


/**
 * @const { !string }
 */
export const SERVICE_MANAGER_CONNECTOR_SPEC = "service_manager:connector";



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const InterfaceSetSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const CapabilitySetSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const InterfaceProviderSpecSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    InterfaceSetSpec.$,
    'InterfaceSet',
    [
      mojo.internal.StructField(
        'interfaces', 0,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class InterfaceSet {
  constructor() {
    /** @type { !Array<!string> } */
    this.interfaces;
  }
}



mojo.internal.Struct(
    CapabilitySetSpec.$,
    'CapabilitySet',
    [
      mojo.internal.StructField(
        'capabilities', 0,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class CapabilitySet {
  constructor() {
    /** @type { !Array<!string> } */
    this.capabilities;
  }
}



mojo.internal.Struct(
    InterfaceProviderSpecSpec.$,
    'InterfaceProviderSpec',
    [
      mojo.internal.StructField(
        'provides', 0,
        0,
        mojo.internal.Map(mojo.internal.String, InterfaceSetSpec.$, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'needs', 8,
        0,
        mojo.internal.Map(mojo.internal.String, CapabilitySetSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class InterfaceProviderSpec {
  constructor() {
    /** @type { !Object<!string, !InterfaceSet> } */
    this.provides;
    /** @type { !Object<!string, !CapabilitySet> } */
    this.needs;
  }
}

