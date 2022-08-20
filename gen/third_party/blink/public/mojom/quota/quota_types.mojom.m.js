// third_party/blink/public/mojom/quota/quota_types.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const StorageTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const StorageType = {
  
  kTemporary: 0,
  kPersistent: 1,
  kSyncable: 2,
  kDeprecatedQuotaNotManaged: 3,
  kUnknown: 4,
  MIN_VALUE: 0,
  MAX_VALUE: 4,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const QuotaStatusCodeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const QuotaStatusCode = {
  
  kOk: 0,
  kErrorNotSupported: 9,
  kErrorInvalidModification: 13,
  kErrorInvalidAccess: 15,
  kErrorAbort: 20,
  kUnknown: -1,
  MIN_VALUE: -1,
  MAX_VALUE: 20,
};


/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const UsageBreakdownSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    UsageBreakdownSpec.$,
    'UsageBreakdown',
    [
      mojo.internal.StructField(
        'fileSystem', 0,
        0,
        mojo.internal.Int64,
        BigInt('0'),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'webSql', 8,
        0,
        mojo.internal.Int64,
        BigInt('0'),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'indexedDatabase', 16,
        0,
        mojo.internal.Int64,
        BigInt('0'),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'serviceWorkerCache', 24,
        0,
        mojo.internal.Int64,
        BigInt('0'),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'serviceWorker', 32,
        0,
        mojo.internal.Int64,
        BigInt('0'),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'backgroundFetch', 40,
        0,
        mojo.internal.Int64,
        BigInt('0'),
        false /* nullable */,
        0),
    ],
    [[0, 56],]);



/**
 * @record
 */
export class UsageBreakdown {
  constructor() {
    /** @type { !bigint } */
    this.fileSystem;
    /** @type { !bigint } */
    this.webSql;
    /** @type { !bigint } */
    this.indexedDatabase;
    /** @type { !bigint } */
    this.serviceWorkerCache;
    /** @type { !bigint } */
    this.serviceWorker;
    /** @type { !bigint } */
    this.backgroundFetch;
  }
}

