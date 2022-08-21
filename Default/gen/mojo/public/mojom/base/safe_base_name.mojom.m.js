// mojo/public/mojom/base/safe_base_name.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../js/bindings.js';

import {
  FilePath as mojoBase_mojom_FilePath,
  FilePathSpec as mojoBase_mojom_FilePathSpec
} from './file_path.mojom.m.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SafeBaseNameSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    SafeBaseNameSpec.$,
    'SafeBaseName',
    [
      mojo.internal.StructField(
        'path', 0,
        0,
        mojoBase_mojom_FilePathSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class SafeBaseName {
  constructor() {
    /** @type { !mojoBase_mojom_FilePath } */
    this.path;
  }
}

