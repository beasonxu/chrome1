// mojo/public/mojom/base/safe_base_name.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('mojoBase.mojom.FilePath');






goog.provide('mojoBase.mojom.SafeBaseNameSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
mojoBase.mojom.SafeBaseNameSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    mojoBase.mojom.SafeBaseNameSpec.$,
    'SafeBaseName',
    [
      mojo.internal.StructField(
        'path', 0,
        0,
        mojoBase.mojom.FilePathSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('mojoBase.mojom.SafeBaseName');

/** @record */
mojoBase.mojom.SafeBaseName = class {
  constructor() {
    /** @export { !mojoBase.mojom.FilePath } */
    this.path;
  }
};


