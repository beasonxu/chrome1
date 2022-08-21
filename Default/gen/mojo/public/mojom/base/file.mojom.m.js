// mojo/public/mojom/base/file.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../js/bindings.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const FileSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    FileSpec.$,
    'File',
    [
      mojo.internal.StructField(
        'fd', 0,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'async', 4,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class File {
  constructor() {
    /** @type { !MojoHandle } */
    this.fd;
    /** @type { !boolean } */
    this.async;
  }
}

