// media/mojo/mojom/media_drm_storage.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'media/mojo/mojom/media_drm_storage.mojom';
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
  var unguessable_token$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/unguessable_token.mojom', '../../../mojo/public/mojom/base/unguessable_token.mojom.js');
  }



  function SessionData(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  SessionData.KeyType = {};

  SessionData.KeyType.isKnownEnumValue = function(value) {
    return false;
  };

  SessionData.KeyType.toKnownEnumValue = function(value) {
    return value;
  };

  SessionData.KeyType.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  SessionData.prototype.initDefaults_ = function() {
    this.keySetId = null;
    this.mimeType = null;
    this.keyType = 0;
  };
  SessionData.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SessionData.validate = function(messageValidator, offset) {
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


    // validate SessionData.keySetId
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 1, codec.Uint8, false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate SessionData.mimeType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate SessionData.keyType
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, SessionData.KeyType);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SessionData.encodedSize = codec.kStructHeaderSize + 24;

  SessionData.decode = function(decoder) {
    var packed;
    var val = new SessionData();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.keySetId =
        decoder.decodeArrayPointer(codec.Uint8);
    val.mimeType =
        decoder.decodeStruct(codec.String);
    val.keyType =
        decoder.decodeStruct(new codec.Enum(SessionData.KeyType));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  SessionData.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SessionData.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.Uint8, val.keySetId);
    encoder.encodeStruct(codec.String, val.mimeType);
    encoder.encodeStruct(codec.Int32, val.keyType);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaDrmStorage_Initialize_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDrmStorage_Initialize_Params.prototype.initDefaults_ = function() {
  };
  MediaDrmStorage_Initialize_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaDrmStorage_Initialize_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDrmStorage_Initialize_Params.encodedSize = codec.kStructHeaderSize + 0;

  MediaDrmStorage_Initialize_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDrmStorage_Initialize_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MediaDrmStorage_Initialize_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDrmStorage_Initialize_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MediaDrmStorage_Initialize_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDrmStorage_Initialize_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
    this.originId = null;
  };
  MediaDrmStorage_Initialize_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaDrmStorage_Initialize_ResponseParams.validate = function(messageValidator, offset) {
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



    // validate MediaDrmStorage_Initialize_ResponseParams.originId
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, unguessable_token$.UnguessableToken, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDrmStorage_Initialize_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  MediaDrmStorage_Initialize_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaDrmStorage_Initialize_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.originId =
        decoder.decodeStructPointer(unguessable_token$.UnguessableToken);
    return val;
  };

  MediaDrmStorage_Initialize_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDrmStorage_Initialize_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(unguessable_token$.UnguessableToken, val.originId);
  };
  function MediaDrmStorage_OnProvisioned_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDrmStorage_OnProvisioned_Params.prototype.initDefaults_ = function() {
  };
  MediaDrmStorage_OnProvisioned_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaDrmStorage_OnProvisioned_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 8}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDrmStorage_OnProvisioned_Params.encodedSize = codec.kStructHeaderSize + 0;

  MediaDrmStorage_OnProvisioned_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDrmStorage_OnProvisioned_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  MediaDrmStorage_OnProvisioned_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDrmStorage_OnProvisioned_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function MediaDrmStorage_OnProvisioned_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDrmStorage_OnProvisioned_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  MediaDrmStorage_OnProvisioned_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaDrmStorage_OnProvisioned_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaDrmStorage_OnProvisioned_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaDrmStorage_OnProvisioned_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaDrmStorage_OnProvisioned_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaDrmStorage_OnProvisioned_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDrmStorage_OnProvisioned_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaDrmStorage_SavePersistentSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDrmStorage_SavePersistentSession_Params.prototype.initDefaults_ = function() {
    this.sessionId = null;
    this.sessionData = null;
  };
  MediaDrmStorage_SavePersistentSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaDrmStorage_SavePersistentSession_Params.validate = function(messageValidator, offset) {
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


    // validate MediaDrmStorage_SavePersistentSession_Params.sessionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaDrmStorage_SavePersistentSession_Params.sessionData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, SessionData, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDrmStorage_SavePersistentSession_Params.encodedSize = codec.kStructHeaderSize + 16;

  MediaDrmStorage_SavePersistentSession_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDrmStorage_SavePersistentSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionId =
        decoder.decodeStruct(codec.String);
    val.sessionData =
        decoder.decodeStructPointer(SessionData);
    return val;
  };

  MediaDrmStorage_SavePersistentSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDrmStorage_SavePersistentSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sessionId);
    encoder.encodeStructPointer(SessionData, val.sessionData);
  };
  function MediaDrmStorage_SavePersistentSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDrmStorage_SavePersistentSession_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  MediaDrmStorage_SavePersistentSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaDrmStorage_SavePersistentSession_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaDrmStorage_SavePersistentSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaDrmStorage_SavePersistentSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaDrmStorage_SavePersistentSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaDrmStorage_SavePersistentSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDrmStorage_SavePersistentSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function MediaDrmStorage_LoadPersistentSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDrmStorage_LoadPersistentSession_Params.prototype.initDefaults_ = function() {
    this.sessionId = null;
  };
  MediaDrmStorage_LoadPersistentSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaDrmStorage_LoadPersistentSession_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaDrmStorage_LoadPersistentSession_Params.sessionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDrmStorage_LoadPersistentSession_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaDrmStorage_LoadPersistentSession_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDrmStorage_LoadPersistentSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionId =
        decoder.decodeStruct(codec.String);
    return val;
  };

  MediaDrmStorage_LoadPersistentSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDrmStorage_LoadPersistentSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sessionId);
  };
  function MediaDrmStorage_LoadPersistentSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDrmStorage_LoadPersistentSession_ResponseParams.prototype.initDefaults_ = function() {
    this.sessionData = null;
  };
  MediaDrmStorage_LoadPersistentSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaDrmStorage_LoadPersistentSession_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaDrmStorage_LoadPersistentSession_ResponseParams.sessionData
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, SessionData, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDrmStorage_LoadPersistentSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaDrmStorage_LoadPersistentSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaDrmStorage_LoadPersistentSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionData =
        decoder.decodeStructPointer(SessionData);
    return val;
  };

  MediaDrmStorage_LoadPersistentSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDrmStorage_LoadPersistentSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(SessionData, val.sessionData);
  };
  function MediaDrmStorage_RemovePersistentSession_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDrmStorage_RemovePersistentSession_Params.prototype.initDefaults_ = function() {
    this.sessionId = null;
  };
  MediaDrmStorage_RemovePersistentSession_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaDrmStorage_RemovePersistentSession_Params.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate MediaDrmStorage_RemovePersistentSession_Params.sessionId
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  MediaDrmStorage_RemovePersistentSession_Params.encodedSize = codec.kStructHeaderSize + 8;

  MediaDrmStorage_RemovePersistentSession_Params.decode = function(decoder) {
    var packed;
    var val = new MediaDrmStorage_RemovePersistentSession_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.sessionId =
        decoder.decodeStruct(codec.String);
    return val;
  };

  MediaDrmStorage_RemovePersistentSession_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDrmStorage_RemovePersistentSession_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.sessionId);
  };
  function MediaDrmStorage_RemovePersistentSession_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  MediaDrmStorage_RemovePersistentSession_ResponseParams.prototype.initDefaults_ = function() {
    this.success = false;
  };
  MediaDrmStorage_RemovePersistentSession_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  MediaDrmStorage_RemovePersistentSession_ResponseParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 16}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  MediaDrmStorage_RemovePersistentSession_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  MediaDrmStorage_RemovePersistentSession_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new MediaDrmStorage_RemovePersistentSession_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.success = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  MediaDrmStorage_RemovePersistentSession_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(MediaDrmStorage_RemovePersistentSession_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.success & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  var kMediaDrmStorage_Initialize_Name = 0;
  var kMediaDrmStorage_OnProvisioned_Name = 1;
  var kMediaDrmStorage_SavePersistentSession_Name = 2;
  var kMediaDrmStorage_LoadPersistentSession_Name = 3;
  var kMediaDrmStorage_RemovePersistentSession_Name = 4;

  function MediaDrmStoragePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(MediaDrmStorage,
                                                   handleOrPtrInfo);
  }

  function MediaDrmStorageAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        MediaDrmStorage, associatedInterfacePtrInfo);
  }

  MediaDrmStorageAssociatedPtr.prototype =
      Object.create(MediaDrmStoragePtr.prototype);
  MediaDrmStorageAssociatedPtr.prototype.constructor =
      MediaDrmStorageAssociatedPtr;

  function MediaDrmStorageProxy(receiver) {
    this.receiver_ = receiver;
  }
  MediaDrmStoragePtr.prototype.initialize = function() {
    return MediaDrmStorageProxy.prototype.initialize
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDrmStorageProxy.prototype.initialize = function() {
    var params_ = new MediaDrmStorage_Initialize_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaDrmStorage_Initialize_Name,
          codec.align(MediaDrmStorage_Initialize_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaDrmStorage_Initialize_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaDrmStorage_Initialize_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaDrmStoragePtr.prototype.onProvisioned = function() {
    return MediaDrmStorageProxy.prototype.onProvisioned
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDrmStorageProxy.prototype.onProvisioned = function() {
    var params_ = new MediaDrmStorage_OnProvisioned_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaDrmStorage_OnProvisioned_Name,
          codec.align(MediaDrmStorage_OnProvisioned_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaDrmStorage_OnProvisioned_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaDrmStorage_OnProvisioned_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaDrmStoragePtr.prototype.savePersistentSession = function() {
    return MediaDrmStorageProxy.prototype.savePersistentSession
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDrmStorageProxy.prototype.savePersistentSession = function(sessionId, sessionData) {
    var params_ = new MediaDrmStorage_SavePersistentSession_Params();
    params_.sessionId = sessionId;
    params_.sessionData = sessionData;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaDrmStorage_SavePersistentSession_Name,
          codec.align(MediaDrmStorage_SavePersistentSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaDrmStorage_SavePersistentSession_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaDrmStorage_SavePersistentSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaDrmStoragePtr.prototype.loadPersistentSession = function() {
    return MediaDrmStorageProxy.prototype.loadPersistentSession
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDrmStorageProxy.prototype.loadPersistentSession = function(sessionId) {
    var params_ = new MediaDrmStorage_LoadPersistentSession_Params();
    params_.sessionId = sessionId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaDrmStorage_LoadPersistentSession_Name,
          codec.align(MediaDrmStorage_LoadPersistentSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaDrmStorage_LoadPersistentSession_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaDrmStorage_LoadPersistentSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  MediaDrmStoragePtr.prototype.removePersistentSession = function() {
    return MediaDrmStorageProxy.prototype.removePersistentSession
        .apply(this.ptr.getProxy(), arguments);
  };

  MediaDrmStorageProxy.prototype.removePersistentSession = function(sessionId) {
    var params_ = new MediaDrmStorage_RemovePersistentSession_Params();
    params_.sessionId = sessionId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kMediaDrmStorage_RemovePersistentSession_Name,
          codec.align(MediaDrmStorage_RemovePersistentSession_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(MediaDrmStorage_RemovePersistentSession_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(MediaDrmStorage_RemovePersistentSession_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function MediaDrmStorageStub(delegate) {
    this.delegate_ = delegate;
  }
  MediaDrmStorageStub.prototype.initialize = function() {
    return this.delegate_ && this.delegate_.initialize && this.delegate_.initialize();
  }
  MediaDrmStorageStub.prototype.onProvisioned = function() {
    return this.delegate_ && this.delegate_.onProvisioned && this.delegate_.onProvisioned();
  }
  MediaDrmStorageStub.prototype.savePersistentSession = function(sessionId, sessionData) {
    return this.delegate_ && this.delegate_.savePersistentSession && this.delegate_.savePersistentSession(sessionId, sessionData);
  }
  MediaDrmStorageStub.prototype.loadPersistentSession = function(sessionId) {
    return this.delegate_ && this.delegate_.loadPersistentSession && this.delegate_.loadPersistentSession(sessionId);
  }
  MediaDrmStorageStub.prototype.removePersistentSession = function(sessionId) {
    return this.delegate_ && this.delegate_.removePersistentSession && this.delegate_.removePersistentSession(sessionId);
  }

  MediaDrmStorageStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  MediaDrmStorageStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kMediaDrmStorage_Initialize_Name:
      var params = reader.decodeStruct(MediaDrmStorage_Initialize_Params);
      this.initialize().then(function(response) {
        var responseParams =
            new MediaDrmStorage_Initialize_ResponseParams();
        responseParams.success = response.success;
        responseParams.originId = response.originId;
        var builder = new codec.MessageV1Builder(
            kMediaDrmStorage_Initialize_Name,
            codec.align(MediaDrmStorage_Initialize_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaDrmStorage_Initialize_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaDrmStorage_OnProvisioned_Name:
      var params = reader.decodeStruct(MediaDrmStorage_OnProvisioned_Params);
      this.onProvisioned().then(function(response) {
        var responseParams =
            new MediaDrmStorage_OnProvisioned_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kMediaDrmStorage_OnProvisioned_Name,
            codec.align(MediaDrmStorage_OnProvisioned_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaDrmStorage_OnProvisioned_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaDrmStorage_SavePersistentSession_Name:
      var params = reader.decodeStruct(MediaDrmStorage_SavePersistentSession_Params);
      this.savePersistentSession(params.sessionId, params.sessionData).then(function(response) {
        var responseParams =
            new MediaDrmStorage_SavePersistentSession_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kMediaDrmStorage_SavePersistentSession_Name,
            codec.align(MediaDrmStorage_SavePersistentSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaDrmStorage_SavePersistentSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaDrmStorage_LoadPersistentSession_Name:
      var params = reader.decodeStruct(MediaDrmStorage_LoadPersistentSession_Params);
      this.loadPersistentSession(params.sessionId).then(function(response) {
        var responseParams =
            new MediaDrmStorage_LoadPersistentSession_ResponseParams();
        responseParams.sessionData = response.sessionData;
        var builder = new codec.MessageV1Builder(
            kMediaDrmStorage_LoadPersistentSession_Name,
            codec.align(MediaDrmStorage_LoadPersistentSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaDrmStorage_LoadPersistentSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kMediaDrmStorage_RemovePersistentSession_Name:
      var params = reader.decodeStruct(MediaDrmStorage_RemovePersistentSession_Params);
      this.removePersistentSession(params.sessionId).then(function(response) {
        var responseParams =
            new MediaDrmStorage_RemovePersistentSession_ResponseParams();
        responseParams.success = response.success;
        var builder = new codec.MessageV1Builder(
            kMediaDrmStorage_RemovePersistentSession_Name,
            codec.align(MediaDrmStorage_RemovePersistentSession_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(MediaDrmStorage_RemovePersistentSession_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateMediaDrmStorageRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kMediaDrmStorage_Initialize_Name:
        if (message.expectsResponse())
          paramsClass = MediaDrmStorage_Initialize_Params;
      break;
      case kMediaDrmStorage_OnProvisioned_Name:
        if (message.expectsResponse())
          paramsClass = MediaDrmStorage_OnProvisioned_Params;
      break;
      case kMediaDrmStorage_SavePersistentSession_Name:
        if (message.expectsResponse())
          paramsClass = MediaDrmStorage_SavePersistentSession_Params;
      break;
      case kMediaDrmStorage_LoadPersistentSession_Name:
        if (message.expectsResponse())
          paramsClass = MediaDrmStorage_LoadPersistentSession_Params;
      break;
      case kMediaDrmStorage_RemovePersistentSession_Name:
        if (message.expectsResponse())
          paramsClass = MediaDrmStorage_RemovePersistentSession_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateMediaDrmStorageResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kMediaDrmStorage_Initialize_Name:
        if (message.isResponse())
          paramsClass = MediaDrmStorage_Initialize_ResponseParams;
        break;
      case kMediaDrmStorage_OnProvisioned_Name:
        if (message.isResponse())
          paramsClass = MediaDrmStorage_OnProvisioned_ResponseParams;
        break;
      case kMediaDrmStorage_SavePersistentSession_Name:
        if (message.isResponse())
          paramsClass = MediaDrmStorage_SavePersistentSession_ResponseParams;
        break;
      case kMediaDrmStorage_LoadPersistentSession_Name:
        if (message.isResponse())
          paramsClass = MediaDrmStorage_LoadPersistentSession_ResponseParams;
        break;
      case kMediaDrmStorage_RemovePersistentSession_Name:
        if (message.isResponse())
          paramsClass = MediaDrmStorage_RemovePersistentSession_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var MediaDrmStorage = {
    name: 'media.mojom.MediaDrmStorage',
    kVersion: 0,
    ptrClass: MediaDrmStoragePtr,
    proxyClass: MediaDrmStorageProxy,
    stubClass: MediaDrmStorageStub,
    validateRequest: validateMediaDrmStorageRequest,
    validateResponse: validateMediaDrmStorageResponse,
  };
  MediaDrmStorageStub.prototype.validator = validateMediaDrmStorageRequest;
  MediaDrmStorageProxy.prototype.validator = validateMediaDrmStorageResponse;
  exports.SessionData = SessionData;
  exports.MediaDrmStorage = MediaDrmStorage;
  exports.MediaDrmStoragePtr = MediaDrmStoragePtr;
  exports.MediaDrmStorageAssociatedPtr = MediaDrmStorageAssociatedPtr;
})();