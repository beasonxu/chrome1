// services/viz/public/mojom/hit_test/input_target_client.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/viz/public/mojom/hit_test/input_target_client.mojom';
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
  var frame_sink_id$ =
      mojo.internal.exposeNamespace('viz.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/viz/public/mojom/compositing/frame_sink_id.mojom', '../compositing/frame_sink_id.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojom/geometry.mojom', '../../../../../ui/gfx/geometry/mojom/geometry.mojom.js');
  }



  function InputTargetClient_FrameSinkIdAt_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputTargetClient_FrameSinkIdAt_Params.prototype.initDefaults_ = function() {
    this.point = null;
    this.traceId = 0;
  };
  InputTargetClient_FrameSinkIdAt_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  InputTargetClient_FrameSinkIdAt_Params.validate = function(messageValidator, offset) {
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


    // validate InputTargetClient_FrameSinkIdAt_Params.point
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  InputTargetClient_FrameSinkIdAt_Params.encodedSize = codec.kStructHeaderSize + 16;

  InputTargetClient_FrameSinkIdAt_Params.decode = function(decoder) {
    var packed;
    var val = new InputTargetClient_FrameSinkIdAt_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.point =
        decoder.decodeStructPointer(geometry$.PointF);
    val.traceId =
        decoder.decodeStruct(codec.Uint64);
    return val;
  };

  InputTargetClient_FrameSinkIdAt_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputTargetClient_FrameSinkIdAt_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.PointF, val.point);
    encoder.encodeStruct(codec.Uint64, val.traceId);
  };
  function InputTargetClient_FrameSinkIdAt_ResponseParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  InputTargetClient_FrameSinkIdAt_ResponseParams.prototype.initDefaults_ = function() {
    this.id = null;
    this.localPoint = null;
  };
  InputTargetClient_FrameSinkIdAt_ResponseParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  InputTargetClient_FrameSinkIdAt_ResponseParams.validate = function(messageValidator, offset) {
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


    // validate InputTargetClient_FrameSinkIdAt_ResponseParams.id
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, frame_sink_id$.FrameSinkId, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate InputTargetClient_FrameSinkIdAt_ResponseParams.localPoint
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.PointF, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  InputTargetClient_FrameSinkIdAt_ResponseParams.encodedSize = codec.kStructHeaderSize + 16;

  InputTargetClient_FrameSinkIdAt_ResponseParams.decode = function(decoder) {
    var packed;
    var val = new InputTargetClient_FrameSinkIdAt_ResponseParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.id =
        decoder.decodeStructPointer(frame_sink_id$.FrameSinkId);
    val.localPoint =
        decoder.decodeStructPointer(geometry$.PointF);
    return val;
  };

  InputTargetClient_FrameSinkIdAt_ResponseParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(InputTargetClient_FrameSinkIdAt_ResponseParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(frame_sink_id$.FrameSinkId, val.id);
    encoder.encodeStructPointer(geometry$.PointF, val.localPoint);
  };
  var kInputTargetClient_FrameSinkIdAt_Name = 0;

  function InputTargetClientPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(InputTargetClient,
                                                   handleOrPtrInfo);
  }

  function InputTargetClientAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        InputTargetClient, associatedInterfacePtrInfo);
  }

  InputTargetClientAssociatedPtr.prototype =
      Object.create(InputTargetClientPtr.prototype);
  InputTargetClientAssociatedPtr.prototype.constructor =
      InputTargetClientAssociatedPtr;

  function InputTargetClientProxy(receiver) {
    this.receiver_ = receiver;
  }
  InputTargetClientPtr.prototype.frameSinkIdAt = function() {
    return InputTargetClientProxy.prototype.frameSinkIdAt
        .apply(this.ptr.getProxy(), arguments);
  };

  InputTargetClientProxy.prototype.frameSinkIdAt = function(point, traceId) {
    var params_ = new InputTargetClient_FrameSinkIdAt_Params();
    params_.point = point;
    params_.traceId = traceId;
    return new Promise(function(resolve, reject) {
      var builder = new codec.MessageV1Builder(
          kInputTargetClient_FrameSinkIdAt_Name,
          codec.align(InputTargetClient_FrameSinkIdAt_Params.encodedSize),
          codec.kMessageExpectsResponse, 0);
      builder.encodeStruct(InputTargetClient_FrameSinkIdAt_Params, params_);
      var message = builder.finish();
      this.receiver_.acceptAndExpectResponse(message).then(function(message) {
        var reader = new codec.MessageReader(message);
        var responseParams =
            reader.decodeStruct(InputTargetClient_FrameSinkIdAt_ResponseParams);
        resolve(responseParams);
      }).catch(function(result) {
        reject(Error("Connection error: " + result));
      });
    }.bind(this));
  };

  function InputTargetClientStub(delegate) {
    this.delegate_ = delegate;
  }
  InputTargetClientStub.prototype.frameSinkIdAt = function(point, traceId) {
    return this.delegate_ && this.delegate_.frameSinkIdAt && this.delegate_.frameSinkIdAt(point, traceId);
  }

  InputTargetClientStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  InputTargetClientStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kInputTargetClient_FrameSinkIdAt_Name:
      var params = reader.decodeStruct(InputTargetClient_FrameSinkIdAt_Params);
      this.frameSinkIdAt(params.point, params.traceId).then(function(response) {
        var responseParams =
            new InputTargetClient_FrameSinkIdAt_ResponseParams();
        responseParams.id = response.id;
        responseParams.localPoint = response.localPoint;
        var builder = new codec.MessageV1Builder(
            kInputTargetClient_FrameSinkIdAt_Name,
            codec.align(InputTargetClient_FrameSinkIdAt_ResponseParams.encodedSize),
            codec.kMessageIsResponse, reader.requestID);
        builder.encodeStruct(InputTargetClient_FrameSinkIdAt_ResponseParams,
                             responseParams);
        var message = builder.finish();
        responder.accept(message);
      });
      return true;
    default:
      return false;
    }
  };

  function validateInputTargetClientRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kInputTargetClient_FrameSinkIdAt_Name:
        if (message.expectsResponse())
          paramsClass = InputTargetClient_FrameSinkIdAt_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateInputTargetClientResponse(messageValidator) {
   var message = messageValidator.message;
   var paramsClass = null;
   switch (message.getName()) {
      case kInputTargetClient_FrameSinkIdAt_Name:
        if (message.isResponse())
          paramsClass = InputTargetClient_FrameSinkIdAt_ResponseParams;
        break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  var InputTargetClient = {
    name: 'viz.mojom.InputTargetClient',
    kVersion: 0,
    ptrClass: InputTargetClientPtr,
    proxyClass: InputTargetClientProxy,
    stubClass: InputTargetClientStub,
    validateRequest: validateInputTargetClientRequest,
    validateResponse: validateInputTargetClientResponse,
  };
  InputTargetClientStub.prototype.validator = validateInputTargetClientRequest;
  InputTargetClientProxy.prototype.validator = validateInputTargetClientResponse;
  exports.InputTargetClient = InputTargetClient;
  exports.InputTargetClientPtr = InputTargetClientPtr;
  exports.InputTargetClientAssociatedPtr = InputTargetClientAssociatedPtr;
})();