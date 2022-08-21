// services/viz/public/mojom/compositing/copy_output_result.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/mojom/compositing/copy_output_result.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('viz.mojom');
  var mailbox$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/mailbox.mojom', '../../../../../gpu/ipc/common/mailbox.mojom.js');
  }
  var sync_token$ =
      mojo.internal.exposeNamespace('gpu.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'gpu/ipc/common/sync_token.mojom', '../../../../../gpu/ipc/common/sync_token.mojom.js');
  }
  var bitmap_in_shared_memory$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/mojom/compositing/bitmap_in_shared_memory.mojom', 'bitmap_in_shared_memory.mojom.js');
  }
  var texture_releaser$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/mojom/compositing/texture_releaser.mojom', 'texture_releaser.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojom/geometry.mojom', '../../../../../ui/gfx/geometry/mojom/geometry.mojom.js');
  }
  var color_space$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/mojom/color_space.mojom', '../../../../../ui/gfx/mojom/color_space.mojom.js');
  }


  var CopyOutputResultFormat = {};
  CopyOutputResultFormat.RGBA = 0;
  CopyOutputResultFormat.MIN_VALUE = 0;
  CopyOutputResultFormat.MAX_VALUE = 0;

  CopyOutputResultFormat.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
      return true;
    }
    return false;
  };

  CopyOutputResultFormat.toKnownEnumValue = function(value) {
    return value;
  };

  CopyOutputResultFormat.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CopyOutputResultDestination = {};
  CopyOutputResultDestination.kSystemMemory = 0;
  CopyOutputResultDestination.kNativeTextures = 1;
  CopyOutputResultDestination.MIN_VALUE = 0;
  CopyOutputResultDestination.MAX_VALUE = 1;

  CopyOutputResultDestination.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  CopyOutputResultDestination.toKnownEnumValue = function(value) {
    return value;
  };

  CopyOutputResultDestination.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function CopyOutputResult(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CopyOutputResult.prototype.initDefaults_ = function() {
    this.format = 0;
    this.destination = 0;
    this.rect = null;
    this.bitmap = null;
    this.mailbox = null;
    this.syncToken = null;
    this.colorSpace = null;
    this.releaser = new texture_releaser$.TextureReleaserPtr();
  };
  CopyOutputResult.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CopyOutputResult.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 64}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.format
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CopyOutputResultFormat);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.destination
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, CopyOutputResultDestination);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.rect
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.Rect, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.bitmap
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, bitmap_in_shared_memory$.BitmapInSharedMemory, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.mailbox
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, mailbox$.Mailbox, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.syncToken
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, sync_token$.SyncToken, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.colorSpace
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, color_space$.ColorSpace, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CopyOutputResult.releaser
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 48, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CopyOutputResult.encodedSize = codec.kStructHeaderSize + 56;

  CopyOutputResult.decode = function(decoder) {
    var packed;
    var val = new CopyOutputResult();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.format =
        decoder.decodeStruct(new codec.Enum(CopyOutputResultFormat));
    val.destination =
        decoder.decodeStruct(new codec.Enum(CopyOutputResultDestination));
    val.rect =
        decoder.decodeStructPointer(geometry$.Rect);
    val.bitmap =
        decoder.decodeStructPointer(bitmap_in_shared_memory$.BitmapInSharedMemory);
    val.mailbox =
        decoder.decodeStructPointer(mailbox$.Mailbox);
    val.syncToken =
        decoder.decodeStructPointer(sync_token$.SyncToken);
    val.colorSpace =
        decoder.decodeStructPointer(color_space$.ColorSpace);
    val.releaser =
        decoder.decodeStruct(new codec.NullableInterface(texture_releaser$.TextureReleaserPtr));
    return val;
  };

  CopyOutputResult.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CopyOutputResult.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.format);
    encoder.encodeStruct(codec.Int32, val.destination);
    encoder.encodeStructPointer(geometry$.Rect, val.rect);
    encoder.encodeStructPointer(bitmap_in_shared_memory$.BitmapInSharedMemory, val.bitmap);
    encoder.encodeStructPointer(mailbox$.Mailbox, val.mailbox);
    encoder.encodeStructPointer(sync_token$.SyncToken, val.syncToken);
    encoder.encodeStructPointer(color_space$.ColorSpace, val.colorSpace);
    encoder.encodeStruct(new codec.NullableInterface(texture_releaser$.TextureReleaserPtr), val.releaser);
  };
  exports.CopyOutputResultFormat = CopyOutputResultFormat;
  exports.CopyOutputResultDestination = CopyOutputResultDestination;
  exports.CopyOutputResult = CopyOutputResult;
})();