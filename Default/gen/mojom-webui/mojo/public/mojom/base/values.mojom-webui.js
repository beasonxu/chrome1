// mojom-webui/mojo/public/mojom/base/values.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DictionaryValueSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const ListValueSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DeprecatedDictionaryValueSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType} }
 */
export const ValueSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    DictionaryValueSpec.$,
    'DictionaryValue',
    [
      mojo.internal.StructField(
        'storage', 0,
        0,
        mojo.internal.Map(mojo.internal.String, ValueSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class DictionaryValue {
  constructor() {
    /** @type { !Object<!string, !Value> } */
    this.storage;
  }
}



mojo.internal.Struct(
    ListValueSpec.$,
    'ListValue',
    [
      mojo.internal.StructField(
        'storage', 0,
        0,
        mojo.internal.Array(ValueSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class ListValue {
  constructor() {
    /** @type { !Array<!Value> } */
    this.storage;
  }
}



mojo.internal.Struct(
    DeprecatedDictionaryValueSpec.$,
    'DeprecatedDictionaryValue',
    [
      mojo.internal.StructField(
        'storage', 0,
        0,
        mojo.internal.Map(mojo.internal.String, ValueSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class DeprecatedDictionaryValue {
  constructor() {
    /** @type { !Object<!string, !Value> } */
    this.storage;
  }
}

mojo.internal.Union(
    ValueSpec.$, 'Value',
    {
      'nullValue': {
        'ordinal': 0,
        'type': mojo.internal.Uint8,
      },
      'boolValue': {
        'ordinal': 1,
        'type': mojo.internal.Bool,
      },
      'intValue': {
        'ordinal': 2,
        'type': mojo.internal.Int32,
      },
      'doubleValue': {
        'ordinal': 3,
        'type': mojo.internal.Double,
      },
      'stringValue': {
        'ordinal': 4,
        'type': mojo.internal.String,
      },
      'binaryValue': {
        'ordinal': 5,
        'type': mojo.internal.Array(mojo.internal.Uint8, false),
      },
      'dictionaryValue': {
        'ordinal': 6,
        'type': DictionaryValueSpec.$,
      },
      'listValue': {
        'ordinal': 7,
        'type': ListValueSpec.$,
      },
    });

/**
 * @typedef { {
 *   nullValue: (!number|undefined),
 *   boolValue: (!boolean|undefined),
 *   intValue: (!number|undefined),
 *   doubleValue: (!number|undefined),
 *   stringValue: (!string|undefined),
 *   binaryValue: (!Array<!number>|undefined),
 *   dictionaryValue: (!DictionaryValue|undefined),
 *   listValue: (!ListValue|undefined),
 * } }
 */
export const Value = {};
