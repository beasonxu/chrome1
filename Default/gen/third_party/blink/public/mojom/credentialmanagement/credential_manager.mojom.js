// third_party/blink/public/mojom/credentialmanagement/credential_manager.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/credentialmanagement/credential_manager.mojom';
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
  var string16$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/string16.mojom', '../../../../../mojo/public/mojom/base/string16.mojom.js');
  }
  var origin$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/origin.mojom', '../../../../../url/mojom/origin.mojom.js');
  }
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }


  var CredentialType = {};
  CredentialType.EMPTY = 0;
  CredentialType.PASSWORD = 1;
  CredentialType.FEDERATED = 2;
  CredentialType.MIN_VALUE = 0;
  CredentialType.MAX_VALUE = 2;

  CredentialType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  CredentialType.toKnownEnumValue = function(value) {
    return value;
  };

  CredentialType.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CredentialMediationRequirement = {};
  CredentialMediationRequirement.kSilent = 0;
  CredentialMediationRequirement.kOptional = 1;
  CredentialMediationRequirement.kRequired = 2;
  CredentialMediationRequirement.MIN_VALUE = 0;
  CredentialMediationRequirement.MAX_VALUE = 2;

  CredentialMediationRequirement.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  CredentialMediationRequirement.toKnownEnumValue = function(value) {
    return value;
  };

  CredentialMediationRequirement.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var CredentialManagerError = {};
  CredentialManagerError.SUCCESS = 0;
  CredentialManagerError.PENDING_REQUEST = 1;
  CredentialManagerError.PASSWORD_STORE_UNAVAILABLE = 2;
  CredentialManagerError.UNKNOWN = 3;
  CredentialManagerError.MIN_VALUE = 0;
  CredentialManagerError.MAX_VALUE = 3;

  CredentialManagerError.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  CredentialManagerError.toKnownEnumValue = function(value) {
    return value;
  };

  CredentialManagerError.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function CredentialInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialInfo.prototype.initDefaults_ = function() {
    this.type = 0;
    this.id = null;
    this.name = null;
    this.icon = null;
    this.password = null;
    this.federation = null;
  };
  CredentialInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialInfo.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 56}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CredentialInfo.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CredentialType);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CredentialInfo.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CredentialInfo.name
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CredentialInfo.icon
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CredentialInfo.password
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, string16$.String16, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CredentialInfo.federation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, origin$.Origin, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CredentialInfo.encodedSize = codec.kStructHeaderSize + 48;

  CredentialInfo.decode = function(decoder) {
    var packed;
    var val = new CredentialInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type =
        decoder.decodeStruct(new codec.Enum(CredentialType));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.id =
        decoder.decodeStructPointer(string16$.String16);
    val.name =
        decoder.decodeStructPointer(string16$.String16);
    val.icon =
        decoder.decodeStructPointer(url$.Url);
    val.password =
        decoder.decodeStructPointer(string16$.String16);
    val.federation =
        decoder.decodeStructPointer(origin$.Origin);
    return val;
  };

  CredentialInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.type);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(string16$.String16, val.id);
    encoder.encodeStructPointer(string16$.String16, val.name);
    encoder.encodeStructPointer(url$.Url, val.icon);
    encoder.encodeStructPointer(string16$.String16, val.password);
    encoder.encodeStructPointer(origin$.Origin, val.federation);
  };
  function CredentialManager_Store_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialManager_Store_Params.prototype.initDefaults_ = function() {
    this.credential = null;
  };
  CredentialManager_Store_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialManager_Store_Params.validate = function(messageValidator, offset) {
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


    // validate CredentialManager_Store_Params.credential
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, CredentialInfo, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CredentialManager_Store_Params.encodedSize = codec.kStructHeaderSize + 8;

  CredentialManager_Store_Params.decode = function(decoder) {
    var packed;
    var val = new CredentialManager_Store_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.credential =
        decoder.decodeStructPointer(CredentialInfo);
    return val;
  };

  CredentialManager_Store_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialManager_Store_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(CredentialInfo, val.credential);
  };
  function CredentialManager_Store_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialManager_Store_ResponseParams.prototype.initDefaults_ = function() {
  };
  CredentialManager_Store_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialManager_Store_ResponseParams.validate = function(messageValidator, offset) {
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

  CredentialManager_Store_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  CredentialManager_Store_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CredentialManager_Store_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CredentialManager_Store_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialManager_Store_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function CredentialManager_PreventSilentAccess_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialManager_PreventSilentAccess_Params.prototype.initDefaults_ = function() {
  };
  CredentialManager_PreventSilentAccess_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialManager_PreventSilentAccess_Params.validate = function(messageValidator, offset) {
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

  CredentialManager_PreventSilentAccess_Params.encodedSize = codec.kStructHeaderSize + 0;

  CredentialManager_PreventSilentAccess_Params.decode = function(decoder) {
    var packed;
    var val = new CredentialManager_PreventSilentAccess_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CredentialManager_PreventSilentAccess_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialManager_PreventSilentAccess_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function CredentialManager_PreventSilentAccess_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialManager_PreventSilentAccess_ResponseParams.prototype.initDefaults_ = function() {
  };
  CredentialManager_PreventSilentAccess_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialManager_PreventSilentAccess_ResponseParams.validate = function(messageValidator, offset) {
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

  CredentialManager_PreventSilentAccess_ResponseParams.encodedSize = codec.kStructHeaderSize + 0;

  CredentialManager_PreventSilentAccess_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CredentialManager_PreventSilentAccess_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  CredentialManager_PreventSilentAccess_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialManager_PreventSilentAccess_ResponseParams.encodedSize);
    encoder.writeUint32(0);
  };
  function CredentialManager_Get_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialManager_Get_Params.prototype.initDefaults_ = function() {
    this.mediation = 0;
    this.includePasswords = false;
    this.federations = null;
  };
  CredentialManager_Get_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialManager_Get_Params.validate = function(messageValidator, offset) {
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


    // validate CredentialManager_Get_Params.mediation
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CredentialMediationRequirement);
    if (err !== validator.validationError.NONE)
        return err;



    // validate CredentialManager_Get_Params.federations
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(url$.Url), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CredentialManager_Get_Params.encodedSize = codec.kStructHeaderSize + 16;

  CredentialManager_Get_Params.decode = function(decoder) {
    var packed;
    var val = new CredentialManager_Get_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.mediation =
        decoder.decodeStruct(new codec.Enum(CredentialMediationRequirement));
    packed = decoder.readUint8();
    val.includePasswords = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.federations =
        decoder.decodeArrayPointer(new codec.PointerTo(url$.Url));
    return val;
  };

  CredentialManager_Get_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialManager_Get_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.mediation);
    packed = 0;
    packed |= (val.includePasswords & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeArrayPointer(new codec.PointerTo(url$.Url), val.federations);
  };
  function CredentialManager_Get_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  CredentialManager_Get_ResponseParams.prototype.initDefaults_ = function() {
    this.error = 0;
    this.credential = null;
  };
  CredentialManager_Get_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  CredentialManager_Get_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate CredentialManager_Get_ResponseParams.error
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, CredentialManagerError);
    if (err !== validator.validationError.NONE)
        return err;


    // validate CredentialManager_Get_ResponseParams.credential
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, CredentialInfo, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  CredentialManager_Get_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  CredentialManager_Get_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new CredentialManager_Get_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.error =
        decoder.decodeStruct(new codec.Enum(CredentialManagerError));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.credential =
        decoder.decodeStructPointer(CredentialInfo);
    return val;
  };

  CredentialManager_Get_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(CredentialManager_Get_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.error);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(CredentialInfo, val.credential);
  };
  var kCredentialManager_Store_Name = 0;
  var kCredentialManager_PreventSilentAccess_Name = 1;
  var kCredentialManager_Get_Name = 2;

  function CredentialManagerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(CredentialManager,
                                                   handleOrPtrInfo);
  }

  function CredentialManagerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        CredentialManager, associatedInterfacePtrInfo);
  }

  CredentialManagerAssociatedPtr.prototype =
      Object.create(CredentialManagerPtr.prototype);
  CredentialManagerAssociatedPtr.prototype.constructor =
      CredentialManagerAssociatedPtr;

  function CredentialManagerProxy(receiver) {
    this.receiver_ = receiver;
  }
  CredentialManagerPtr.prototype.store = function() {
    return CredentialManagerProxy.prototype.store
        .apply(this.ptr.getProxy(), arguments);
  };

  CredentialManagerProxy.prototype.store = function(credential) {
    var params_ = new CredentialManager_Store_Params();
    params_.credential = credential;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCredentialManager_Store_Name,
          codec.align(CredentialManager_Store_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CredentialManager_Store_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CredentialManager_Store_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CredentialManagerPtr.prototype.preventSilentAccess = function() {
    return CredentialManagerProxy.prototype.preventSilentAccess
        .apply(this.ptr.getProxy(), arguments);
  };

  CredentialManagerProxy.prototype.preventSilentAccess = function() {
    var params_ = new CredentialManager_PreventSilentAccess_Params();
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCredentialManager_PreventSilentAccess_Name,
          codec.align(CredentialManager_PreventSilentAccess_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CredentialManager_PreventSilentAccess_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CredentialManager_PreventSilentAccess_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  CredentialManagerPtr.prototype.get = function() {
    return CredentialManagerProxy.prototype.get
        .apply(this.ptr.getProxy(), arguments);
  };

  CredentialManagerProxy.prototype.get = function(mediation, includePasswords, federations) {
    var params_ = new CredentialManager_Get_Params();
    params_.mediation = mediation;
    params_.includePasswords = includePasswords;
    params_.federations = federations;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kCredentialManager_Get_Name,
          codec.align(CredentialManager_Get_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(CredentialManager_Get_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(CredentialManager_Get_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function CredentialManagerStub(delegate) {
    this.delegate_ = delegate;
  }
  CredentialManagerStub.prototype.store = function(credential) {
    return this.delegate_ && this.delegate_.store && this.delegate_.store(credential);
  }
  CredentialManagerStub.prototype.preventSilentAccess = function() {
    return this.delegate_ && this.delegate_.preventSilentAccess && this.delegate_.preventSilentAccess();
  }
  CredentialManagerStub.prototype.get = function(mediation, includePasswords, federations) {
    return this.delegate_ && this.delegate_.get && this.delegate_.get(mediation, includePasswords, federations);
  }

  CredentialManagerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  CredentialManagerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kCredentialManager_Store_Name:
      var params = reader.decodeStruct(CredentialManager_Store_Params);
      this.store(params.credential).then(function(response) {
        var responseParams =
            new CredentialManager_Store_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kCredentialManager_Store_Name,
            codec.align(CredentialManager_Store_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CredentialManager_Store_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCredentialManager_PreventSilentAccess_Name:
      var params = reader.decodeStruct(CredentialManager_PreventSilentAccess_Params);
      this.preventSilentAccess().then(function(response) {
        var responseParams =
            new CredentialManager_PreventSilentAccess_ResponseParams();
        var builder = new codec.MessageV1Builder(
            kCredentialManager_PreventSilentAccess_Name,
            codec.align(CredentialManager_PreventSilentAccess_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CredentialManager_PreventSilentAccess_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kCredentialManager_Get_Name:
      var params = reader.decodeStruct(CredentialManager_Get_Params);
      this.get(params.mediation, params.includePasswords, params.federations).then(function(response) {
        var responseParams =
            new CredentialManager_Get_ResponseParams();
        responseParams.error = response.error;
        responseParams.credential = response.credential;
        var builder = new codec.MessageV1Builder(
            kCredentialManager_Get_Name,
            codec.align(CredentialManager_Get_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(CredentialManager_Get_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateCredentialManagerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kCredentialManager_Store_Name:
        if (message.expectsResponse())
          paramsClass = CredentialManager_Store_Params;
      break;
      case kCredentialManager_PreventSilentAccess_Name:
        if (message.expectsResponse())
          paramsClass = CredentialManager_PreventSilentAccess_Params;
      break;
      case kCredentialManager_Get_Name:
        if (message.expectsResponse())
          paramsClass = CredentialManager_Get_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateCredentialManagerResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kCredentialManager_Store_Name:
        if (message.isResponse())
          paramsClass = CredentialManager_Store_ResponseParams;
        break;
      case kCredentialManager_PreventSilentAccess_Name:
        if (message.isResponse())
          paramsClass = CredentialManager_PreventSilentAccess_ResponseParams;
        break;
      case kCredentialManager_Get_Name:
        if (message.isResponse())
          paramsClass = CredentialManager_Get_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var CredentialManager = {
    name: 'blink.mojom.CredentialManager',
    kVersion: 0,
    ptrClass: CredentialManagerPtr,
    proxyClass: CredentialManagerProxy,
    stubClass: CredentialManagerStub,
    validateRequest: validateCredentialManagerRequest,
    validateResponse: validateCredentialManagerResponse,
  };
  CredentialManagerStub.prototype.validator = validateCredentialManagerRequest;
  CredentialManagerProxy.prototype.validator = validateCredentialManagerResponse;
  exports.CredentialType = CredentialType;
  exports.CredentialMediationRequirement = CredentialMediationRequirement;
  exports.CredentialManagerError = CredentialManagerError;
  exports.CredentialInfo = CredentialInfo;
  exports.CredentialManager = CredentialManager;
  exports.CredentialManagerPtr = CredentialManagerPtr;
  exports.CredentialManagerAssociatedPtr = CredentialManagerAssociatedPtr;
})();