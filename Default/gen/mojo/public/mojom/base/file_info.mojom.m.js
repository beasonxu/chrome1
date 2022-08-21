// mojo/public/mojom/base/file_info.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../js/bindings.js';

import {
  Time as mojoBase_mojom_Time,
  TimeSpec as mojoBase_mojom_TimeSpec
} from './time.mojom.m.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const FileInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    FileInfoSpec.$,
    'FileInfo',
    [
      mojo.internal.StructField(
        'size', 0,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isDirectory', 8,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'isSymbolicLink', 8,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'lastModified', 16,
        0,
        mojoBase_mojom_TimeSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'lastAccessed', 24,
        0,
        mojoBase_mojom_TimeSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'creationTime', 32,
        0,
        mojoBase_mojom_TimeSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 48],]);



/**
 * @record
 */
export class FileInfo {
  constructor() {
    /** @type { !bigint } */
    this.size;
    /** @type { !boolean } */
    this.isDirectory;
    /** @type { !boolean } */
    this.isSymbolicLink;
    /** @type { !mojoBase_mojom_Time } */
    this.lastModified;
    /** @type { !mojoBase_mojom_Time } */
    this.lastAccessed;
    /** @type { !mojoBase_mojom_Time } */
    this.creationTime;
  }
}

