// mojom-webui/services/device/public/mojom/usb_enumeration_options.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';

import {
  String16 as mojoBase_mojom_String16,
  String16Spec as mojoBase_mojom_String16Spec
} from 'chrome://resources/mojo/mojo/public/mojom/base/string16.mojom-webui.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UsbDeviceFilterSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UsbEnumerationOptionsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    UsbDeviceFilterSpec.$,
    'UsbDeviceFilter',
    [
      mojo.internal.StructField(
        'hasVendorId', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'vendorId', 2,
        0,
        mojo.internal.Uint16,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'hasProductId', 0,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'productId', 4,
        0,
        mojo.internal.Uint16,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'hasClassCode', 0,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'classCode', 1,
        0,
        mojo.internal.Uint8,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'hasSubclassCode', 0,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'subclassCode', 6,
        0,
        mojo.internal.Uint8,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'hasProtocolCode', 0,
        4,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'protocolCode', 7,
        0,
        mojo.internal.Uint8,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'serialNumber', 8,
        0,
        mojoBase_mojom_String16Spec.$,
        null,
        true /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class UsbDeviceFilter {
  constructor() {
    /** @type { !boolean } */
    this.hasVendorId;
    /** @type { !boolean } */
    this.hasProductId;
    /** @type { !boolean } */
    this.hasClassCode;
    /** @type { !boolean } */
    this.hasSubclassCode;
    /** @type { !boolean } */
    this.hasProtocolCode;
    /** @type { !number } */
    this.classCode;
    /** @type { !number } */
    this.vendorId;
    /** @type { !number } */
    this.productId;
    /** @type { !number } */
    this.subclassCode;
    /** @type { !number } */
    this.protocolCode;
    /** @type { (mojoBase_mojom_String16|undefined) } */
    this.serialNumber;
  }
}



mojo.internal.Struct(
    UsbEnumerationOptionsSpec.$,
    'UsbEnumerationOptions',
    [
      mojo.internal.StructField(
        'filters', 0,
        0,
        mojo.internal.Array(UsbDeviceFilterSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class UsbEnumerationOptions {
  constructor() {
    /** @type { !Array<!UsbDeviceFilter> } */
    this.filters;
  }
}

