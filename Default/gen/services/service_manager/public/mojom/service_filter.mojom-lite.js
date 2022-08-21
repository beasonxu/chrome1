// services/service_manager/public/mojom/service_filter.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('serviceManager.mojom');







/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
serviceManager.mojom.ServiceFilterSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    serviceManager.mojom.ServiceFilterSpec.$,
    'ServiceFilter',
    [
      mojo.internal.StructField(
        'serviceName', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'instanceGroup', 8,
        0,
        mojoBase.mojom.TokenSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'instanceId', 16,
        0,
        mojoBase.mojom.TokenSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'globallyUniqueId', 24,
        0,
        mojoBase.mojom.TokenSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 40],]);





/** @record */
serviceManager.mojom.ServiceFilter = class {
  constructor() {
    /** @export { !string } */
    this.serviceName;
    /** @export { (mojoBase.mojom.Token|undefined) } */
    this.instanceGroup;
    /** @export { (mojoBase.mojom.Token|undefined) } */
    this.instanceId;
    /** @export { (mojoBase.mojom.Token|undefined) } */
    this.globallyUniqueId;
  }
};


