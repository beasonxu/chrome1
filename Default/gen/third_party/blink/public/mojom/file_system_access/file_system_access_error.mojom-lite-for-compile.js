// third_party/blink/public/mojom/file_system_access/file_system_access_error.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('mojoBase.mojom.FileError');




goog.provide('blink.mojom.FileSystemAccessStatus');
goog.provide('blink.mojom.FileSystemAccessStatusSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.FileSystemAccessStatusSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.FileSystemAccessStatus = {
  
  kOk: 0,
  kPermissionDenied: 1,
  kSecurityError: 2,
  kNoModificationAllowedError: 3,
  kInvalidState: 4,
  kInvalidArgument: 5,
  kOperationFailed: 6,
  kOperationAborted: 7,
  kFileError: 8,
  MIN_VALUE: 0,
  MAX_VALUE: 8,
};



goog.provide('blink.mojom.FileSystemAccessErrorSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.FileSystemAccessErrorSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.FileSystemAccessErrorSpec.$,
    'FileSystemAccessError',
    [
      mojo.internal.StructField(
        'status', 0,
        0,
        blink.mojom.FileSystemAccessStatusSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'fileError', 4,
        0,
        mojoBase.mojom.FileErrorSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'message', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);



goog.provide('blink.mojom.FileSystemAccessError');

/** @record */
blink.mojom.FileSystemAccessError = class {
  constructor() {
    /** @export { !blink.mojom.FileSystemAccessStatus } */
    this.status;
    /** @export { !mojoBase.mojom.FileError } */
    this.fileError;
    /** @export { !string } */
    this.message;
  }
};


