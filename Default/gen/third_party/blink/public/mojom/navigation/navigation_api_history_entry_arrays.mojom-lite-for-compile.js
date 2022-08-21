// third_party/blink/public/mojom/navigation/navigation_api_history_entry_arrays.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('mojoBase.mojom.String16');






goog.provide('blink.mojom.NavigationApiHistoryEntrySpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.NavigationApiHistoryEntrySpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.NavigationApiHistoryEntryArraysSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.NavigationApiHistoryEntryArraysSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.NavigationApiHistoryEntrySpec.$,
    'NavigationApiHistoryEntry',
    [
      mojo.internal.StructField(
        'key', 0,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'id', 8,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'url', 16,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'itemSequenceNumber', 24,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'documentSequenceNumber', 32,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'state', 40,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
    ],
    [[0, 56],]);



goog.provide('blink.mojom.NavigationApiHistoryEntry');

/** @record */
blink.mojom.NavigationApiHistoryEntry = class {
  constructor() {
    /** @export { !mojoBase.mojom.String16 } */
    this.key;
    /** @export { !mojoBase.mojom.String16 } */
    this.id;
    /** @export { !mojoBase.mojom.String16 } */
    this.url;
    /** @export { !bigint } */
    this.itemSequenceNumber;
    /** @export { !bigint } */
    this.documentSequenceNumber;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.state;
  }
};




mojo.internal.Struct(
    blink.mojom.NavigationApiHistoryEntryArraysSpec.$,
    'NavigationApiHistoryEntryArrays',
    [
      mojo.internal.StructField(
        'backEntries', 0,
        0,
        mojo.internal.Array(blink.mojom.NavigationApiHistoryEntrySpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'forwardEntries', 8,
        0,
        mojo.internal.Array(blink.mojom.NavigationApiHistoryEntrySpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.NavigationApiHistoryEntryArrays');

/** @record */
blink.mojom.NavigationApiHistoryEntryArrays = class {
  constructor() {
    /** @export { !Array<!blink.mojom.NavigationApiHistoryEntry> } */
    this.backEntries;
    /** @export { !Array<!blink.mojom.NavigationApiHistoryEntry> } */
    this.forwardEntries;
  }
};


