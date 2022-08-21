// third_party/blink/public/mojom/drag/drag.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('blink.mojom');







/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.AllowedDragOperationsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.DragItemStringSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.DragItemBinarySpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.DragItemFileSystemFileSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.DragDataSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.DragEventSourceInfoSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType} }
 * @export
 */
blink.mojom.DragItemSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.AllowedDragOperationsSpec.$,
    'AllowedDragOperations',
    [
      mojo.internal.StructField(
        'allowCopy', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'allowLink', 0,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'allowMove', 0,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.AllowedDragOperations = class {
  constructor() {
    /** @export { !boolean } */
    this.allowCopy;
    /** @export { !boolean } */
    this.allowLink;
    /** @export { !boolean } */
    this.allowMove;
  }
};




mojo.internal.Struct(
    blink.mojom.DragItemStringSpec.$,
    'DragItemString',
    [
      mojo.internal.StructField(
        'stringType', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'stringData', 8,
        0,
        mojoBase.mojom.BigString16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'title', 16,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'baseUrl', 24,
        0,
        url.mojom.UrlSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 40],]);





/** @record */
blink.mojom.DragItemString = class {
  constructor() {
    /** @export { !string } */
    this.stringType;
    /** @export { !mojoBase.mojom.BigString16 } */
    this.stringData;
    /** @export { (mojoBase.mojom.String16|undefined) } */
    this.title;
    /** @export { (url.mojom.Url|undefined) } */
    this.baseUrl;
  }
};




mojo.internal.Struct(
    blink.mojom.DragItemBinarySpec.$,
    'DragItemBinary',
    [
      mojo.internal.StructField(
        'data', 0,
        0,
        mojoBase.mojom.BigBufferSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'isImageAccessible', 16,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'sourceUrl', 24,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'filenameExtension', 32,
        0,
        mojoBase.mojom.FilePathSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'contentDisposition', 40,
        0,
        mojo.internal.String,
        null,
        true /* nullable */),
    ],
    [[0, 56],]);





/** @record */
blink.mojom.DragItemBinary = class {
  constructor() {
    /** @export { !mojoBase.mojom.BigBuffer } */
    this.data;
    /** @export { !boolean } */
    this.isImageAccessible;
    /** @export { !url.mojom.Url } */
    this.sourceUrl;
    /** @export { !mojoBase.mojom.FilePath } */
    this.filenameExtension;
    /** @export { (string|undefined) } */
    this.contentDisposition;
  }
};




mojo.internal.Struct(
    blink.mojom.DragItemFileSystemFileSpec.$,
    'DragItemFileSystemFile',
    [
      mojo.internal.StructField(
        'url', 0,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'size', 8,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */),
      mojo.internal.StructField(
        'fileSystemId', 16,
        0,
        mojo.internal.String,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'serializedBlob', 24,
        0,
        blink.mojom.SerializedBlobSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 40],]);





/** @record */
blink.mojom.DragItemFileSystemFile = class {
  constructor() {
    /** @export { !url.mojom.Url } */
    this.url;
    /** @export { !bigint } */
    this.size;
    /** @export { (string|undefined) } */
    this.fileSystemId;
    /** @export { (blink.mojom.SerializedBlob|undefined) } */
    this.serializedBlob;
  }
};




mojo.internal.Struct(
    blink.mojom.DragDataSpec.$,
    'DragData',
    [
      mojo.internal.StructField(
        'items', 0,
        0,
        mojo.internal.Array(blink.mojom.DragItemSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'fileSystemId', 8,
        0,
        mojo.internal.String,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'referrerPolicy', 16,
        0,
        network.mojom.ReferrerPolicySpec.$,
        network.mojom.ReferrerPolicy.kDefault,
        false /* nullable */),
    ],
    [[0, 32],]);





/** @record */
blink.mojom.DragData = class {
  constructor() {
    /** @export { !Array<!blink.mojom.DragItem> } */
    this.items;
    /** @export { (string|undefined) } */
    this.fileSystemId;
    /** @export { !network.mojom.ReferrerPolicy } */
    this.referrerPolicy;
  }
};




mojo.internal.Struct(
    blink.mojom.DragEventSourceInfoSpec.$,
    'DragEventSourceInfo',
    [
      mojo.internal.StructField(
        'location', 0,
        0,
        gfx.mojom.PointSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'source', 8,
        0,
        ui.mojom.DragEventSourceSpec.$,
        0,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.DragEventSourceInfo = class {
  constructor() {
    /** @export { !gfx.mojom.Point } */
    this.location;
    /** @export { !ui.mojom.DragEventSource } */
    this.source;
  }
};




mojo.internal.Union(
    blink.mojom.DragItemSpec.$, 'DragItem',
    {
      'string': {
        'ordinal': 0,
        'type': blink.mojom.DragItemStringSpec.$,
      },
      'file': {
        'ordinal': 1,
        'type': blink.mojom.DataTransferFileSpec.$,
      },
      'binary': {
        'ordinal': 2,
        'type': blink.mojom.DragItemBinarySpec.$,
      },
      'fileSystemFile': {
        'ordinal': 3,
        'type': blink.mojom.DragItemFileSystemFileSpec.$,
      },
    });

/**
 * @typedef { {
 *   string: (!blink.mojom.DragItemString|undefined),
 *   file: (!blink.mojom.DataTransferFile|undefined),
 *   binary: (!blink.mojom.DragItemBinary|undefined),
 *   fileSystemFile: (!blink.mojom.DragItemFileSystemFile|undefined),
 * } }
 */
blink.mojom.DragItem;
