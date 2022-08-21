// third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/service_worker/service_worker_fetch_response_callback.mojom';
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
  var time$ =
      mojo.internal.exposeNamespace('mojoBase.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'mojo/public/mojom/base/time.mojom', '../../../../../mojo/public/mojom/base/time.mojom.js');
  }
  var blob$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/blob/blob.mojom', '../blob/blob.mojom.js');
  }
  var fetch_api_response$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/fetch/fetch_api_response.mojom', '../fetch/fetch_api_response.mojom.js');
  }
  var service_worker_stream_handle$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/service_worker/service_worker_stream_handle.mojom', 'service_worker_stream_handle.mojom.js');
  }
  var url_request$ =
      mojo.internal.exposeNamespace('network.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'services/network/public/mojom/url_request.mojom', '../../../../../services/network/public/mojom/url_request.mojom.js');
  }



  function ServiceWorkerFetchEventTiming(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerFetchEventTiming.prototype.initDefaults_ = function() {
    this.dispatchEventTime = null;
    this.respondWithSettledTime = null;
  };
  ServiceWorkerFetchEventTiming.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceWorkerFetchEventTiming.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerFetchEventTiming.dispatchEventTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerFetchEventTiming.respondWithSettledTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerFetchEventTiming.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerFetchEventTiming.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerFetchEventTiming();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.dispatchEventTime =
        decoder.decodeStructPointer(time$.TimeTicks);
    val.respondWithSettledTime =
        decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  ServiceWorkerFetchEventTiming.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerFetchEventTiming.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(time$.TimeTicks, val.dispatchEventTime);
    encoder.encodeStructPointer(time$.TimeTicks, val.respondWithSettledTime);
  };
  function ServiceWorkerFetchResponseCallback_OnResponse_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerFetchResponseCallback_OnResponse_Params.prototype.initDefaults_ = function() {
    this.response = null;
    this.timing = null;
  };
  ServiceWorkerFetchResponseCallback_OnResponse_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceWorkerFetchResponseCallback_OnResponse_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerFetchResponseCallback_OnResponse_Params.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, fetch_api_response$.FetchAPIResponse, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerFetchResponseCallback_OnResponse_Params.timing
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ServiceWorkerFetchEventTiming, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerFetchResponseCallback_OnResponse_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerFetchResponseCallback_OnResponse_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerFetchResponseCallback_OnResponse_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.response =
        decoder.decodeStructPointer(fetch_api_response$.FetchAPIResponse);
    val.timing =
        decoder.decodeStructPointer(ServiceWorkerFetchEventTiming);
    return val;
  };

  ServiceWorkerFetchResponseCallback_OnResponse_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerFetchResponseCallback_OnResponse_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(fetch_api_response$.FetchAPIResponse, val.response);
    encoder.encodeStructPointer(ServiceWorkerFetchEventTiming, val.timing);
  };
  function ServiceWorkerFetchResponseCallback_OnResponseStream_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.prototype.initDefaults_ = function() {
    this.response = null;
    this.bodyAsStream = null;
    this.timing = null;
  };
  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerFetchResponseCallback_OnResponseStream_Params.response
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, fetch_api_response$.FetchAPIResponse, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerFetchResponseCallback_OnResponseStream_Params.bodyAsStream
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, service_worker_stream_handle$.ServiceWorkerStreamHandle, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerFetchResponseCallback_OnResponseStream_Params.timing
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 16, ServiceWorkerFetchEventTiming, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.encodedSize = codec.kStructHeaderSize + 24;

  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerFetchResponseCallback_OnResponseStream_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.response =
        decoder.decodeStructPointer(fetch_api_response$.FetchAPIResponse);
    val.bodyAsStream =
        decoder.decodeStructPointer(service_worker_stream_handle$.ServiceWorkerStreamHandle);
    val.timing =
        decoder.decodeStructPointer(ServiceWorkerFetchEventTiming);
    return val;
  };

  ServiceWorkerFetchResponseCallback_OnResponseStream_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerFetchResponseCallback_OnResponseStream_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(fetch_api_response$.FetchAPIResponse, val.response);
    encoder.encodeStructPointer(service_worker_stream_handle$.ServiceWorkerStreamHandle, val.bodyAsStream);
    encoder.encodeStructPointer(ServiceWorkerFetchEventTiming, val.timing);
  };
  function ServiceWorkerFetchResponseCallback_OnFallback_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceWorkerFetchResponseCallback_OnFallback_Params.prototype.initDefaults_ = function() {
    this.requestBody = null;
    this.timing = null;
  };
  ServiceWorkerFetchResponseCallback_OnFallback_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceWorkerFetchResponseCallback_OnFallback_Params.validate = function(messageValidator, offset) {
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


    // validate ServiceWorkerFetchResponseCallback_OnFallback_Params.requestBody
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url_request$.DataElementChunkedDataPipe, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ServiceWorkerFetchResponseCallback_OnFallback_Params.timing
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ServiceWorkerFetchEventTiming, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ServiceWorkerFetchResponseCallback_OnFallback_Params.encodedSize = codec.kStructHeaderSize + 16;

  ServiceWorkerFetchResponseCallback_OnFallback_Params.decode = function(decoder) {
    var packed;
    var val = new ServiceWorkerFetchResponseCallback_OnFallback_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.requestBody =
        decoder.decodeStructPointer(url_request$.DataElementChunkedDataPipe);
    val.timing =
        decoder.decodeStructPointer(ServiceWorkerFetchEventTiming);
    return val;
  };

  ServiceWorkerFetchResponseCallback_OnFallback_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceWorkerFetchResponseCallback_OnFallback_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url_request$.DataElementChunkedDataPipe, val.requestBody);
    encoder.encodeStructPointer(ServiceWorkerFetchEventTiming, val.timing);
  };
  var kServiceWorkerFetchResponseCallback_OnResponse_Name = 0;
  var kServiceWorkerFetchResponseCallback_OnResponseStream_Name = 1;
  var kServiceWorkerFetchResponseCallback_OnFallback_Name = 2;

  function ServiceWorkerFetchResponseCallbackPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(ServiceWorkerFetchResponseCallback,
                                                   handleOrPtrInfo);
  }

  function ServiceWorkerFetchResponseCallbackAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        ServiceWorkerFetchResponseCallback, associatedInterfacePtrInfo);
  }

  ServiceWorkerFetchResponseCallbackAssociatedPtr.prototype =
      Object.create(ServiceWorkerFetchResponseCallbackPtr.prototype);
  ServiceWorkerFetchResponseCallbackAssociatedPtr.prototype.constructor =
      ServiceWorkerFetchResponseCallbackAssociatedPtr;

  function ServiceWorkerFetchResponseCallbackProxy(receiver) {
    this.receiver_ = receiver;
  }
  ServiceWorkerFetchResponseCallbackPtr.prototype.onResponse = function() {
    return ServiceWorkerFetchResponseCallbackProxy.prototype.onResponse
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerFetchResponseCallbackProxy.prototype.onResponse = function(response, timing) {
    var params_ = new ServiceWorkerFetchResponseCallback_OnResponse_Params();
    params_.response = response;
    params_.timing = timing;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerFetchResponseCallback_OnResponse_Name,
        codec.align(ServiceWorkerFetchResponseCallback_OnResponse_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerFetchResponseCallback_OnResponse_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerFetchResponseCallbackPtr.prototype.onResponseStream = function() {
    return ServiceWorkerFetchResponseCallbackProxy.prototype.onResponseStream
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerFetchResponseCallbackProxy.prototype.onResponseStream = function(response, bodyAsStream, timing) {
    var params_ = new ServiceWorkerFetchResponseCallback_OnResponseStream_Params();
    params_.response = response;
    params_.bodyAsStream = bodyAsStream;
    params_.timing = timing;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerFetchResponseCallback_OnResponseStream_Name,
        codec.align(ServiceWorkerFetchResponseCallback_OnResponseStream_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerFetchResponseCallback_OnResponseStream_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  ServiceWorkerFetchResponseCallbackPtr.prototype.onFallback = function() {
    return ServiceWorkerFetchResponseCallbackProxy.prototype.onFallback
        .apply(this.ptr.getProxy(), arguments);
  };

  ServiceWorkerFetchResponseCallbackProxy.prototype.onFallback = function(requestBody, timing) {
    var params_ = new ServiceWorkerFetchResponseCallback_OnFallback_Params();
    params_.requestBody = requestBody;
    params_.timing = timing;
    var builder = new codec.MessageV0Builder(
        kServiceWorkerFetchResponseCallback_OnFallback_Name,
        codec.align(ServiceWorkerFetchResponseCallback_OnFallback_Params.encodedSize));
    builder.encodeStruct(ServiceWorkerFetchResponseCallback_OnFallback_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function ServiceWorkerFetchResponseCallbackStub(delegate) {
    this.delegate_ = delegate;
  }
  ServiceWorkerFetchResponseCallbackStub.prototype.onResponse = function(response, timing) {
    return this.delegate_ && this.delegate_.onResponse && this.delegate_.onResponse(response, timing);
  }
  ServiceWorkerFetchResponseCallbackStub.prototype.onResponseStream = function(response, bodyAsStream, timing) {
    return this.delegate_ && this.delegate_.onResponseStream && this.delegate_.onResponseStream(response, bodyAsStream, timing);
  }
  ServiceWorkerFetchResponseCallbackStub.prototype.onFallback = function(requestBody, timing) {
    return this.delegate_ && this.delegate_.onFallback && this.delegate_.onFallback(requestBody, timing);
  }

  ServiceWorkerFetchResponseCallbackStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kServiceWorkerFetchResponseCallback_OnResponse_Name:
      var params = reader.decodeStruct(ServiceWorkerFetchResponseCallback_OnResponse_Params);
      this.onResponse(params.response, params.timing);
      return true;
    case kServiceWorkerFetchResponseCallback_OnResponseStream_Name:
      var params = reader.decodeStruct(ServiceWorkerFetchResponseCallback_OnResponseStream_Params);
      this.onResponseStream(params.response, params.bodyAsStream, params.timing);
      return true;
    case kServiceWorkerFetchResponseCallback_OnFallback_Name:
      var params = reader.decodeStruct(ServiceWorkerFetchResponseCallback_OnFallback_Params);
      this.onFallback(params.requestBody, params.timing);
      return true;
    default:
      return false;
    }
  };

  ServiceWorkerFetchResponseCallbackStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateServiceWorkerFetchResponseCallbackRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kServiceWorkerFetchResponseCallback_OnResponse_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerFetchResponseCallback_OnResponse_Params;
      break;
      case kServiceWorkerFetchResponseCallback_OnResponseStream_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerFetchResponseCallback_OnResponseStream_Params;
      break;
      case kServiceWorkerFetchResponseCallback_OnFallback_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = ServiceWorkerFetchResponseCallback_OnFallback_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateServiceWorkerFetchResponseCallbackResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var ServiceWorkerFetchResponseCallback = {
    name: 'blink.mojom.ServiceWorkerFetchResponseCallback',
    kVersion: 0,
    ptrClass: ServiceWorkerFetchResponseCallbackPtr,
    proxyClass: ServiceWorkerFetchResponseCallbackProxy,
    stubClass: ServiceWorkerFetchResponseCallbackStub,
    validateRequest: validateServiceWorkerFetchResponseCallbackRequest,
    validateResponse: null,
  };
  ServiceWorkerFetchResponseCallbackStub.prototype.validator = validateServiceWorkerFetchResponseCallbackRequest;
  ServiceWorkerFetchResponseCallbackProxy.prototype.validator = null;
  exports.ServiceWorkerFetchEventTiming = ServiceWorkerFetchEventTiming;
  exports.ServiceWorkerFetchResponseCallback = ServiceWorkerFetchResponseCallback;
  exports.ServiceWorkerFetchResponseCallbackPtr = ServiceWorkerFetchResponseCallbackPtr;
  exports.ServiceWorkerFetchResponseCallbackAssociatedPtr = ServiceWorkerFetchResponseCallbackAssociatedPtr;
})();