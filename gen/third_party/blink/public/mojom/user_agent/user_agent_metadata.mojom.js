// third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/user_agent/user_agent_metadata.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('blink.mojom');



  function UserAgentBrandVersion(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UserAgentBrandVersion.prototype.initDefaults_ = function() {
    this.brand = null;
    this.version = null;
  };
  UserAgentBrandVersion.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UserAgentBrandVersion.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UserAgentBrandVersion.brand
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate UserAgentBrandVersion.version
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UserAgentBrandVersion.encodedSize = codec.kStructHeaderSize + 16;

  UserAgentBrandVersion.decode = function(decoder) {
    var packed;
    var val = new UserAgentBrandVersion();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.brand =
        decoder.decodeStruct(codec.String);
    val.version =
        decoder.decodeStruct(codec.String);
    return val;
  };

  UserAgentBrandVersion.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UserAgentBrandVersion.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.brand);
    encoder.encodeStruct(codec.String, val.version);
  };
  function UserAgentMetadata(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UserAgentMetadata.prototype.initDefaults_ = function() {
    this.brandVersionList = null;
    this.brandFullVersionList = null;
    this.fullVersion = null;
    this.platform = null;
    this.platformVersion = null;
    this.architecture = null;
    this.model = null;
    this.mobile = false;
    this.wow64 = false;
    this.bitness = null;
  };
  UserAgentMetadata.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UserAgentMetadata.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 80}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UserAgentMetadata.brandVersionList
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(UserAgentBrandVersion), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UserAgentMetadata.brandFullVersionList
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(UserAgentBrandVersion), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UserAgentMetadata.fullVersion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate UserAgentMetadata.platform
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate UserAgentMetadata.platformVersion
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate UserAgentMetadata.architecture
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 40, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate UserAgentMetadata.model
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 48, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate UserAgentMetadata.bitness
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 64, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  UserAgentMetadata.encodedSize = codec.kStructHeaderSize + 72;

  UserAgentMetadata.decode = function(decoder) {
    var packed;
    var val = new UserAgentMetadata();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.brandVersionList =
        decoder.decodeArrayPointer(new codec.PointerTo(UserAgentBrandVersion));
    val.brandFullVersionList =
        decoder.decodeArrayPointer(new codec.PointerTo(UserAgentBrandVersion));
    val.fullVersion =
        decoder.decodeStruct(codec.String);
    val.platform =
        decoder.decodeStruct(codec.String);
    val.platformVersion =
        decoder.decodeStruct(codec.String);
    val.architecture =
        decoder.decodeStruct(codec.String);
    val.model =
        decoder.decodeStruct(codec.String);
    packed = decoder.readUint8();
    val.mobile = (packed >> 0) & 1 ? true : false;
    val.wow64 = (packed >> 1) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.bitness =
        decoder.decodeStruct(codec.String);
    return val;
  };

  UserAgentMetadata.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UserAgentMetadata.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(UserAgentBrandVersion), val.brandVersionList);
    encoder.encodeArrayPointer(new codec.PointerTo(UserAgentBrandVersion), val.brandFullVersionList);
    encoder.encodeStruct(codec.String, val.fullVersion);
    encoder.encodeStruct(codec.String, val.platform);
    encoder.encodeStruct(codec.String, val.platformVersion);
    encoder.encodeStruct(codec.String, val.architecture);
    encoder.encodeStruct(codec.String, val.model);
    packed = 0;
    packed |= (val.mobile & 1) << 0
    packed |= (val.wow64 & 1) << 1
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.bitness);
  };
  function UserAgentOverride(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  UserAgentOverride.prototype.initDefaults_ = function() {
    this.uaStringOverride = null;
    this.uaMetadataOverride = null;
  };
  UserAgentOverride.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  UserAgentOverride.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 24}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate UserAgentOverride.uaStringOverride
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate UserAgentOverride.uaMetadataOverride
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, UserAgentMetadata, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  UserAgentOverride.encodedSize = codec.kStructHeaderSize + 16;

  UserAgentOverride.decode = function(decoder) {
    var packed;
    var val = new UserAgentOverride();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.uaStringOverride =
        decoder.decodeStruct(codec.String);
    val.uaMetadataOverride =
        decoder.decodeStructPointer(UserAgentMetadata);
    return val;
  };

  UserAgentOverride.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(UserAgentOverride.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.uaStringOverride);
    encoder.encodeStructPointer(UserAgentMetadata, val.uaMetadataOverride);
  };
  exports.UserAgentBrandVersion = UserAgentBrandVersion;
  exports.UserAgentMetadata = UserAgentMetadata;
  exports.UserAgentOverride = UserAgentOverride;
})();