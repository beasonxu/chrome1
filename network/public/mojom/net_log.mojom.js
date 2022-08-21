// services/network/public/mojom/net_log.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/net_log.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('network.mojom');
  var file$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/file.mojom', '../../../../mojo/public/mojom/base/file.mojom.js');
  }
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var values$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/values.mojom', '../../../../mojo/public/mojom/base/values.mojom.js');
  }


  var NetLogCaptureMode = {};
  NetLogCaptureMode.DEFAULT = 0;
  NetLogCaptureMode.INCLUDE_PRIVACY_INFO = 1;
  NetLogCaptureMode.EVERYTHING = 2;
  NetLogCaptureMode.MIN_VALUE = 0;
  NetLogCaptureMode.MAX_VALUE = 2;

  NetLogCaptureMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  NetLogCaptureMode.toKnownEnumValue = function(value) {
    return value;
  };

  NetLogCaptureMode.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var NetLogEventPhase = {};
  NetLogEventPhase.BEGIN = 0;
  NetLogEventPhase.END = 1;
  NetLogEventPhase.NONE = 2;
  NetLogEventPhase.MIN_VALUE = 0;
  NetLogEventPhase.MAX_VALUE = 2;

  NetLogEventPhase.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    }
    return false;
  };

  NetLogEventPhase.toKnownEnumValue = function(value) {
    return value;
  };

  NetLogEventPhase.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function NetLogExporter_Start_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetLogExporter_Start_Params.prototype.initDefaults_ = function() {
    this.destination = null;
    this.extraConstants = null;
    this.captureMode = 0;
    this.maxFileSize = 0;
  };
  NetLogExporter_Start_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NetLogExporter_Start_Params.validate = function(messageValidator, offset) {
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


    // validate NetLogExporter_Start_Params.destination
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, file$.File, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetLogExporter_Start_Params.extraConstants
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, values$.DictionaryValue, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetLogExporter_Start_Params.captureMode
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, NetLogCaptureMode);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  NetLogExporter_Start_Params.encodedSize = codec.kStructHeaderSize + 32;

  NetLogExporter_Start_Params.decode = function(decoder) {
    var packed;
    var val = new NetLogExporter_Start_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.destination =
        decoder.decodeStructPointer(file$.File);
    val.extraConstants =
        decoder.decodeStructPointer(values$.DictionaryValue);
    val.captureMode =
        decoder.decodeStruct(new codec.Enum(NetLogCaptureMode));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.maxFileSize =
        decoder.decodeStruct(codec.Uint64);
    return val;
  };

  NetLogExporter_Start_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetLogExporter_Start_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(file$.File, val.destination);
    encoder.encodeStructPointer(values$.DictionaryValue, val.extraConstants);
    encoder.encodeStruct(codec.Int32, val.captureMode);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Uint64, val.maxFileSize);
  };
  function NetLogExporter_Start_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetLogExporter_Start_ResponseParams.prototype.initDefaults_ = function() {
    this.netError = 0;
  };
  NetLogExporter_Start_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NetLogExporter_Start_ResponseParams.validate = function(messageValidator, offset) {
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

  NetLogExporter_Start_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NetLogExporter_Start_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetLogExporter_Start_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.netError =
        decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetLogExporter_Start_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetLogExporter_Start_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.netError);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetLogExporter_Stop_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetLogExporter_Stop_Params.prototype.initDefaults_ = function() {
    this.polledValues = null;
  };
  NetLogExporter_Stop_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NetLogExporter_Stop_Params.validate = function(messageValidator, offset) {
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


    // validate NetLogExporter_Stop_Params.polledValues
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, values$.DictionaryValue, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetLogExporter_Stop_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetLogExporter_Stop_Params.decode = function(decoder) {
    var packed;
    var val = new NetLogExporter_Stop_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.polledValues =
        decoder.decodeStructPointer(values$.DictionaryValue);
    return val;
  };

  NetLogExporter_Stop_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetLogExporter_Stop_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(values$.DictionaryValue, val.polledValues);
  };
  function NetLogExporter_Stop_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetLogExporter_Stop_ResponseParams.prototype.initDefaults_ = function() {
    this.netError = 0;
  };
  NetLogExporter_Stop_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NetLogExporter_Stop_ResponseParams.validate = function(messageValidator, offset) {
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

  NetLogExporter_Stop_ResponseParams.encodedSize = codec.kStructHeaderSize + 8;

  NetLogExporter_Stop_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new NetLogExporter_Stop_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.netError =
        decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetLogExporter_Stop_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetLogExporter_Stop_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.netError);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetLogProxySource_UpdateCaptureModes_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetLogProxySource_UpdateCaptureModes_Params.prototype.initDefaults_ = function() {
    this.modes = 0;
  };
  NetLogProxySource_UpdateCaptureModes_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NetLogProxySource_UpdateCaptureModes_Params.validate = function(messageValidator, offset) {
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

  NetLogProxySource_UpdateCaptureModes_Params.encodedSize = codec.kStructHeaderSize + 8;

  NetLogProxySource_UpdateCaptureModes_Params.decode = function(decoder) {
    var packed;
    var val = new NetLogProxySource_UpdateCaptureModes_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.modes =
        decoder.decodeStruct(codec.Uint32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  NetLogProxySource_UpdateCaptureModes_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetLogProxySource_UpdateCaptureModes_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.modes);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function NetLogProxySink_AddEntry_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  NetLogProxySink_AddEntry_Params.prototype.initDefaults_ = function() {
    this.type = 0;
    this.sourceType = 0;
    this.sourceId = 0;
    this.phase = 0;
    this.sourceStartTime = null;
    this.time = null;
    this.params = null;
  };
  NetLogProxySink_AddEntry_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  NetLogProxySink_AddEntry_Params.validate = function(messageValidator, offset) {
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





    // validate NetLogProxySink_AddEntry_Params.sourceStartTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetLogProxySink_AddEntry_Params.phase
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 12, NetLogEventPhase);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetLogProxySink_AddEntry_Params.time
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate NetLogProxySink_AddEntry_Params.params
    err = messageValidator.validateUnion(offset + codec.kStructHeaderSize + 32, values$.Value, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  NetLogProxySink_AddEntry_Params.encodedSize = codec.kStructHeaderSize + 48;

  NetLogProxySink_AddEntry_Params.decode = function(decoder) {
    var packed;
    var val = new NetLogProxySink_AddEntry_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.type =
        decoder.decodeStruct(codec.Uint32);
    val.sourceType =
        decoder.decodeStruct(codec.Uint32);
    val.sourceId =
        decoder.decodeStruct(codec.Uint32);
    val.phase =
        decoder.decodeStruct(new codec.Enum(NetLogEventPhase));
    val.sourceStartTime =
        decoder.decodeStructPointer(time$.TimeTicks);
    val.time =
        decoder.decodeStructPointer(time$.TimeTicks);
    val.params =
        decoder.decodeStruct(values$.Value);
    return val;
  };

  NetLogProxySink_AddEntry_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(NetLogProxySink_AddEntry_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Uint32, val.type);
    encoder.encodeStruct(codec.Uint32, val.sourceType);
    encoder.encodeStruct(codec.Uint32, val.sourceId);
    encoder.encodeStruct(codec.Int32, val.phase);
    encoder.encodeStructPointer(time$.TimeTicks, val.sourceStartTime);
    encoder.encodeStructPointer(time$.TimeTicks, val.time);
    encoder.encodeStruct(values$.Value, val.params);
  };
  var kNetLogExporter_Start_Name = 0;
  var kNetLogExporter_Stop_Name = 1;

  function NetLogExporterPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NetLogExporter,
                                                   handleOrPtrInfo);
  }

  function NetLogExporterAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NetLogExporter, associatedInterfacePtrInfo);
  }

  NetLogExporterAssociatedPtr.prototype =
      Object.create(NetLogExporterPtr.prototype);
  NetLogExporterAssociatedPtr.prototype.constructor =
      NetLogExporterAssociatedPtr;

  function NetLogExporterProxy(receiver) {
    this.receiver_ = receiver;
  }
  NetLogExporterPtr.prototype.start = function() {
    return NetLogExporterProxy.prototype.start
        .apply(this.ptr.getProxy(), arguments);
  };

  NetLogExporterProxy.prototype.start = function(destination, extraConstants, captureMode, maxFileSize) {
    var params_ = new NetLogExporter_Start_Params();
    params_.destination = destination;
    params_.extraConstants = extraConstants;
    params_.captureMode = captureMode;
    params_.maxFileSize = maxFileSize;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetLogExporter_Start_Name,
          codec.align(NetLogExporter_Start_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetLogExporter_Start_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetLogExporter_Start_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };
  NetLogExporterPtr.prototype.stop = function() {
    return NetLogExporterProxy.prototype.stop
        .apply(this.ptr.getProxy(), arguments);
  };

  NetLogExporterProxy.prototype.stop = function(polledValues) {
    var params_ = new NetLogExporter_Stop_Params();
    params_.polledValues = polledValues;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kNetLogExporter_Stop_Name,
          codec.align(NetLogExporter_Stop_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(NetLogExporter_Stop_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(NetLogExporter_Stop_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function NetLogExporterStub(delegate) {
    this.delegate_ = delegate;
  }
  NetLogExporterStub.prototype.start = function(destination, extraConstants, captureMode, maxFileSize) {
    return this.delegate_ && this.delegate_.start && this.delegate_.start(destination, extraConstants, captureMode, maxFileSize);
  }
  NetLogExporterStub.prototype.stop = function(polledValues) {
    return this.delegate_ && this.delegate_.stop && this.delegate_.stop(polledValues);
  }

  NetLogExporterStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  NetLogExporterStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetLogExporter_Start_Name:
      var params = reader.decodeStruct(NetLogExporter_Start_Params);
      this.start(params.destination, params.extraConstants, params.captureMode, params.maxFileSize).then(function(response) {
        var responseParams =
            new NetLogExporter_Start_ResponseParams();
        responseParams.netError = response.netError;
        var builder = new codec.MessageV1Builder(
            kNetLogExporter_Start_Name,
            codec.align(NetLogExporter_Start_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetLogExporter_Start_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    case kNetLogExporter_Stop_Name:
      var params = reader.decodeStruct(NetLogExporter_Stop_Params);
      this.stop(params.polledValues).then(function(response) {
        var responseParams =
            new NetLogExporter_Stop_ResponseParams();
        responseParams.netError = response.netError;
        var builder = new codec.MessageV1Builder(
            kNetLogExporter_Stop_Name,
            codec.align(NetLogExporter_Stop_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(NetLogExporter_Stop_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateNetLogExporterRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNetLogExporter_Start_Name:
        if (message.expectsResponse())
          paramsClass = NetLogExporter_Start_Params;
      break;
      case kNetLogExporter_Stop_Name:
        if (message.expectsResponse())
          paramsClass = NetLogExporter_Stop_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNetLogExporterResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kNetLogExporter_Start_Name:
        if (message.isResponse())
          paramsClass = NetLogExporter_Start_ResponseParams;
        break;
      case kNetLogExporter_Stop_Name:
        if (message.isResponse())
          paramsClass = NetLogExporter_Stop_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var NetLogExporter = {
    name: 'network.mojom.NetLogExporter',
    kVersion: 0,
    ptrClass: NetLogExporterPtr,
    proxyClass: NetLogExporterProxy,
    stubClass: NetLogExporterStub,
    validateRequest: validateNetLogExporterRequest,
    validateResponse: validateNetLogExporterResponse,
  };
  NetLogExporter.UNLIMITED_FILE_SIZE = 0xFFFFFFFFFFFFFFFF,
  NetLogExporterStub.prototype.validator = validateNetLogExporterRequest;
  NetLogExporterProxy.prototype.validator = validateNetLogExporterResponse;
  var kNetLogProxySource_UpdateCaptureModes_Name = 0;

  function NetLogProxySourcePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NetLogProxySource,
                                                   handleOrPtrInfo);
  }

  function NetLogProxySourceAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NetLogProxySource, associatedInterfacePtrInfo);
  }

  NetLogProxySourceAssociatedPtr.prototype =
      Object.create(NetLogProxySourcePtr.prototype);
  NetLogProxySourceAssociatedPtr.prototype.constructor =
      NetLogProxySourceAssociatedPtr;

  function NetLogProxySourceProxy(receiver) {
    this.receiver_ = receiver;
  }
  NetLogProxySourcePtr.prototype.updateCaptureModes = function() {
    return NetLogProxySourceProxy.prototype.updateCaptureModes
        .apply(this.ptr.getProxy(), arguments);
  };

  NetLogProxySourceProxy.prototype.updateCaptureModes = function(modes) {
    var params_ = new NetLogProxySource_UpdateCaptureModes_Params();
    params_.modes = modes;
    var builder = new codec.MessageV0Builder(
        kNetLogProxySource_UpdateCaptureModes_Name,
        codec.align(NetLogProxySource_UpdateCaptureModes_Params.encodedSize));
    builder.encodeStruct(NetLogProxySource_UpdateCaptureModes_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function NetLogProxySourceStub(delegate) {
    this.delegate_ = delegate;
  }
  NetLogProxySourceStub.prototype.updateCaptureModes = function(modes) {
    return this.delegate_ && this.delegate_.updateCaptureModes && this.delegate_.updateCaptureModes(modes);
  }

  NetLogProxySourceStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetLogProxySource_UpdateCaptureModes_Name:
      var params = reader.decodeStruct(NetLogProxySource_UpdateCaptureModes_Params);
      this.updateCaptureModes(params.modes);
      return true;
    default:
      return false;
    }
  };

  NetLogProxySourceStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateNetLogProxySourceRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNetLogProxySource_UpdateCaptureModes_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetLogProxySource_UpdateCaptureModes_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNetLogProxySourceResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var NetLogProxySource = {
    name: 'network.mojom.NetLogProxySource',
    kVersion: 0,
    ptrClass: NetLogProxySourcePtr,
    proxyClass: NetLogProxySourceProxy,
    stubClass: NetLogProxySourceStub,
    validateRequest: validateNetLogProxySourceRequest,
    validateResponse: null,
  };
  NetLogProxySourceStub.prototype.validator = validateNetLogProxySourceRequest;
  NetLogProxySourceProxy.prototype.validator = null;
  var kNetLogProxySink_AddEntry_Name = 0;

  function NetLogProxySinkPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(NetLogProxySink,
                                                   handleOrPtrInfo);
  }

  function NetLogProxySinkAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        NetLogProxySink, associatedInterfacePtrInfo);
  }

  NetLogProxySinkAssociatedPtr.prototype =
      Object.create(NetLogProxySinkPtr.prototype);
  NetLogProxySinkAssociatedPtr.prototype.constructor =
      NetLogProxySinkAssociatedPtr;

  function NetLogProxySinkProxy(receiver) {
    this.receiver_ = receiver;
  }
  NetLogProxySinkPtr.prototype.addEntry = function() {
    return NetLogProxySinkProxy.prototype.addEntry
        .apply(this.ptr.getProxy(), arguments);
  };

  NetLogProxySinkProxy.prototype.addEntry = function(type, sourceType, sourceId, sourceStartTime, phase, time, params) {
    var params_ = new NetLogProxySink_AddEntry_Params();
    params_.type = type;
    params_.sourceType = sourceType;
    params_.sourceId = sourceId;
    params_.sourceStartTime = sourceStartTime;
    params_.phase = phase;
    params_.time = time;
    params_.params = params;
    var builder = new codec.MessageV0Builder(
        kNetLogProxySink_AddEntry_Name,
        codec.align(NetLogProxySink_AddEntry_Params.encodedSize));
    builder.encodeStruct(NetLogProxySink_AddEntry_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function NetLogProxySinkStub(delegate) {
    this.delegate_ = delegate;
  }
  NetLogProxySinkStub.prototype.addEntry = function(type, sourceType, sourceId, sourceStartTime, phase, time, params) {
    return this.delegate_ && this.delegate_.addEntry && this.delegate_.addEntry(type, sourceType, sourceId, sourceStartTime, phase, time, params);
  }

  NetLogProxySinkStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kNetLogProxySink_AddEntry_Name:
      var params = reader.decodeStruct(NetLogProxySink_AddEntry_Params);
      this.addEntry(params.type, params.sourceType, params.sourceId, params.sourceStartTime, params.phase, params.time, params.params);
      return true;
    default:
      return false;
    }
  };

  NetLogProxySinkStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateNetLogProxySinkRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kNetLogProxySink_AddEntry_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = NetLogProxySink_AddEntry_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateNetLogProxySinkResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var NetLogProxySink = {
    name: 'network.mojom.NetLogProxySink',
    kVersion: 0,
    ptrClass: NetLogProxySinkPtr,
    proxyClass: NetLogProxySinkProxy,
    stubClass: NetLogProxySinkStub,
    validateRequest: validateNetLogProxySinkRequest,
    validateResponse: null,
  };
  NetLogProxySinkStub.prototype.validator = validateNetLogProxySinkRequest;
  NetLogProxySinkProxy.prototype.validator = null;
  exports.NetLogCaptureMode = NetLogCaptureMode;
  exports.NetLogEventPhase = NetLogEventPhase;
  exports.NetLogExporter = NetLogExporter;
  exports.NetLogExporterPtr = NetLogExporterPtr;
  exports.NetLogExporterAssociatedPtr = NetLogExporterAssociatedPtr;
  exports.NetLogProxySource = NetLogProxySource;
  exports.NetLogProxySourcePtr = NetLogProxySourcePtr;
  exports.NetLogProxySourceAssociatedPtr = NetLogProxySourceAssociatedPtr;
  exports.NetLogProxySink = NetLogProxySink;
  exports.NetLogProxySinkPtr = NetLogProxySinkPtr;
  exports.NetLogProxySinkAssociatedPtr = NetLogProxySinkAssociatedPtr;
})();