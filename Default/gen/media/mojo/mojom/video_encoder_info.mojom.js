// media/mojo/mojom/video_encoder_info.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/mojom/video_encoder_info.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('media.mojom');
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojom/geometry.mojom', '../../../ui/gfx/geometry/mojom/geometry.mojom.js');
  }



  function ResolutionBitrateLimit(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ResolutionBitrateLimit.prototype.initDefaults_ = function() {
    this.frameSize = null;
    this.minStartBitrateBps = 0;
    this.minBitrateBps = 0;
    this.maxBitrateBps = 0;
  };
  ResolutionBitrateLimit.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ResolutionBitrateLimit.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 32}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ResolutionBitrateLimit.frameSize
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Size, false);
    if (err !== validator.validationError.NONE)
        return err;




    return validator.validationError.NONE;
  };

  ResolutionBitrateLimit.encodedSize = codec.kStructHeaderSize + 24;

  ResolutionBitrateLimit.decode = function(decoder) {
    var packed;
    var val = new ResolutionBitrateLimit();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.frameSize =
        decoder.decodeStructPointer(geometry$.Size);
    val.minStartBitrateBps =
        decoder.decodeStruct(codec.Int32);
    val.minBitrateBps =
        decoder.decodeStruct(codec.Int32);
    val.maxBitrateBps =
        decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ResolutionBitrateLimit.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ResolutionBitrateLimit.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Size, val.frameSize);
    encoder.encodeStruct(codec.Int32, val.minStartBitrateBps);
    encoder.encodeStruct(codec.Int32, val.minBitrateBps);
    encoder.encodeStruct(codec.Int32, val.maxBitrateBps);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function VideoEncoderInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  VideoEncoderInfo.prototype.initDefaults_ = function() {
    this.implementationName = null;
    this.supportsNativeHandle = false;
    this.hasTrustedRateController = false;
    this.isHardwareAccelerated = false;
    this.supportsSimulcast = false;
    this.reportsAverageQp = false;
    this.fpsAllocation = null;
    this.resolutionBitrateLimits = null;
  };
  VideoEncoderInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  VideoEncoderInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 40}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoEncoderInfo.implementationName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;







    // validate VideoEncoderInfo.fpsAllocation
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.ArrayOf(codec.Uint8), false, [5, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate VideoEncoderInfo.resolutionBitrateLimits
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 24, 8, new codec.PointerTo(ResolutionBitrateLimit), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  VideoEncoderInfo.encodedSize = codec.kStructHeaderSize + 32;

  VideoEncoderInfo.decode = function(decoder) {
    var packed;
    var val = new VideoEncoderInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.implementationName =
        decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.supportsNativeHandle = (packed >> 0) & 1 ? true : false;
    val.hasTrustedRateController = (packed >> 1) & 1 ? true : false;
    val.isHardwareAccelerated = (packed >> 2) & 1 ? true : false;
    val.supportsSimulcast = (packed >> 3) & 1 ? true : false;
    val.reportsAverageQp = (packed >> 4) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.fpsAllocation =
        decoder.decodeArrayPointer(new codec.ArrayOf(codec.Uint8));
    val.resolutionBitrateLimits =
        decoder.decodeArrayPointer(new codec.PointerTo(ResolutionBitrateLimit));
    return val;
  };

  VideoEncoderInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(VideoEncoderInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.implementationName);
    packed = 0;
    packed |= (val.supportsNativeHandle & 1) << 0
    packed |= (val.hasTrustedRateController & 1) << 1
    packed |= (val.isHardwareAccelerated & 1) << 2
    packed |= (val.supportsSimulcast & 1) << 3
    packed |= (val.reportsAverageQp & 1) << 4
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.ArrayOf(codec.Uint8), val.fpsAllocation);
    encoder.encodeArrayPointer(new codec.PointerTo(ResolutionBitrateLimit), val.resolutionBitrateLimits);
  };
  exports.ResolutionBitrateLimit = ResolutionBitrateLimit;
  exports.VideoEncoderInfo = VideoEncoderInfo;
})();