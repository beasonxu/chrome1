// chrome/browser/ui/webui/segmentation_internals/segmentation_internals.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'chrome/browser/ui/webui/segmentation_internals/segmentation_internals.mojom';
  if (mojo.internal.isMojomLoaded(mojomId)) {
    console.warn('The following mojom is loaded multiple times: ' + mojomId);
    return;
  }
  mojo.internal.markMojomLoaded(mojomId);
  var bindings = mojo;
  var associatedBindings = mojo;
  var codec = mojo.internal;
  var validator = mojo.internal;

  var exports = mojo.internal.exposeNamespace('segmentationInternals.mojom');



  function ServiceStatus(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ServiceStatus.prototype.initDefaults_ = function() {
    this.isInitialized = false;
    this.intializationStatus = 0;
  };
  ServiceStatus.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ServiceStatus.validate = function(messageValidator, offset) {
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

  ServiceStatus.encodedSize = codec.kStructHeaderSize + 8;

  ServiceStatus.decode = function(decoder) {
    var packed;
    var val = new ServiceStatus();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.isInitialized = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.intializationStatus =
        decoder.decodeStruct(codec.Int32);
    return val;
  };

  ServiceStatus.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ServiceStatus.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.isInitialized & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.intializationStatus);
  };
  function SegmentInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  SegmentInfo.prototype.initDefaults_ = function() {
    this.segmentName = null;
    this.segmentId = 0;
    this.canExecuteSegment = false;
    this.segmentData = null;
    this.predictionResult = null;
  };
  SegmentInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  SegmentInfo.validate = function(messageValidator, offset) {
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


    // validate SegmentInfo.segmentName
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate SegmentInfo.segmentData
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;



    // validate SegmentInfo.predictionResult
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  SegmentInfo.encodedSize = codec.kStructHeaderSize + 32;

  SegmentInfo.decode = function(decoder) {
    var packed;
    var val = new SegmentInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.segmentName =
        decoder.decodeStruct(codec.String);
    val.segmentId =
        decoder.decodeStruct(codec.Int32);
    packed = decoder.readUint8();
    val.canExecuteSegment = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.segmentData =
        decoder.decodeStruct(codec.String);
    val.predictionResult =
        decoder.decodeStruct(codec.String);
    return val;
  };

  SegmentInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(SegmentInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.segmentName);
    encoder.encodeStruct(codec.Int32, val.segmentId);
    packed = 0;
    packed |= (val.canExecuteSegment & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.String, val.segmentData);
    encoder.encodeStruct(codec.String, val.predictionResult);
  };
  function ClientInfo(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ClientInfo.prototype.initDefaults_ = function() {
    this.segmentationKey = null;
    this.selectedSegment = null;
    this.segmentInfo = null;
  };
  ClientInfo.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ClientInfo.validate = function(messageValidator, offset) {
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


    // validate ClientInfo.segmentationKey
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClientInfo.selectedSegment
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate ClientInfo.segmentInfo
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 16, 8, new codec.PointerTo(SegmentInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ClientInfo.encodedSize = codec.kStructHeaderSize + 24;

  ClientInfo.decode = function(decoder) {
    var packed;
    var val = new ClientInfo();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.segmentationKey =
        decoder.decodeStruct(codec.String);
    val.selectedSegment =
        decoder.decodeStruct(codec.String);
    val.segmentInfo =
        decoder.decodeArrayPointer(new codec.PointerTo(SegmentInfo));
    return val;
  };

  ClientInfo.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ClientInfo.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.segmentationKey);
    encoder.encodeStruct(codec.String, val.selectedSegment);
    encoder.encodeArrayPointer(new codec.PointerTo(SegmentInfo), val.segmentInfo);
  };
  function PageHandlerFactory_CreatePageHandler_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageHandlerFactory_CreatePageHandler_Params.prototype.initDefaults_ = function() {
    this.page = new PagePtr();
    this.handler = new bindings.InterfaceRequest();
  };
  PageHandlerFactory_CreatePageHandler_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PageHandlerFactory_CreatePageHandler_Params.validate = function(messageValidator, offset) {
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


    // validate PageHandlerFactory_CreatePageHandler_Params.page
    err = messageValidator.validateInterface(offset + codec.kStructHeaderSize + 0, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate PageHandlerFactory_CreatePageHandler_Params.handler
    err = messageValidator.validateInterfaceRequest(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  PageHandlerFactory_CreatePageHandler_Params.encodedSize = codec.kStructHeaderSize + 16;

  PageHandlerFactory_CreatePageHandler_Params.decode = function(decoder) {
    var packed;
    var val = new PageHandlerFactory_CreatePageHandler_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.page =
        decoder.decodeStruct(new codec.Interface(PagePtr));
    val.handler =
        decoder.decodeStruct(codec.InterfaceRequest);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PageHandlerFactory_CreatePageHandler_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageHandlerFactory_CreatePageHandler_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(new codec.Interface(PagePtr), val.page);
    encoder.encodeStruct(codec.InterfaceRequest, val.handler);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PageHandler_GetServiceStatus_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageHandler_GetServiceStatus_Params.prototype.initDefaults_ = function() {
  };
  PageHandler_GetServiceStatus_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PageHandler_GetServiceStatus_Params.validate = function(messageValidator, offset) {
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

  PageHandler_GetServiceStatus_Params.encodedSize = codec.kStructHeaderSize + 0;

  PageHandler_GetServiceStatus_Params.decode = function(decoder) {
    var packed;
    var val = new PageHandler_GetServiceStatus_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    return val;
  };

  PageHandler_GetServiceStatus_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageHandler_GetServiceStatus_Params.encodedSize);
    encoder.writeUint32(0);
  };
  function PageHandler_ExecuteModel_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageHandler_ExecuteModel_Params.prototype.initDefaults_ = function() {
    this.segmentId = 0;
  };
  PageHandler_ExecuteModel_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PageHandler_ExecuteModel_Params.validate = function(messageValidator, offset) {
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

  PageHandler_ExecuteModel_Params.encodedSize = codec.kStructHeaderSize + 8;

  PageHandler_ExecuteModel_Params.decode = function(decoder) {
    var packed;
    var val = new PageHandler_ExecuteModel_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.segmentId =
        decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PageHandler_ExecuteModel_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageHandler_ExecuteModel_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.segmentId);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function PageHandler_OverwriteResult_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageHandler_OverwriteResult_Params.prototype.initDefaults_ = function() {
    this.segmentId = 0;
    this.result = 0;
  };
  PageHandler_OverwriteResult_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PageHandler_OverwriteResult_Params.validate = function(messageValidator, offset) {
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

  PageHandler_OverwriteResult_Params.encodedSize = codec.kStructHeaderSize + 8;

  PageHandler_OverwriteResult_Params.decode = function(decoder) {
    var packed;
    var val = new PageHandler_OverwriteResult_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.segmentId =
        decoder.decodeStruct(codec.Int32);
    val.result =
        decoder.decodeStruct(codec.Float);
    return val;
  };

  PageHandler_OverwriteResult_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageHandler_OverwriteResult_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.segmentId);
    encoder.encodeStruct(codec.Float, val.result);
  };
  function PageHandler_SetSelected_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PageHandler_SetSelected_Params.prototype.initDefaults_ = function() {
    this.segmentationKey = null;
    this.optimizationTarget = 0;
  };
  PageHandler_SetSelected_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PageHandler_SetSelected_Params.validate = function(messageValidator, offset) {
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


    // validate PageHandler_SetSelected_Params.segmentationKey
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  PageHandler_SetSelected_Params.encodedSize = codec.kStructHeaderSize + 16;

  PageHandler_SetSelected_Params.decode = function(decoder) {
    var packed;
    var val = new PageHandler_SetSelected_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.segmentationKey =
        decoder.decodeStruct(codec.String);
    val.optimizationTarget =
        decoder.decodeStruct(codec.Int32);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PageHandler_SetSelected_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PageHandler_SetSelected_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.segmentationKey);
    encoder.encodeStruct(codec.Int32, val.optimizationTarget);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function Page_OnServiceStatusChanged_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Page_OnServiceStatusChanged_Params.prototype.initDefaults_ = function() {
    this.isInitialized = false;
    this.statusFlag = 0;
  };
  Page_OnServiceStatusChanged_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Page_OnServiceStatusChanged_Params.validate = function(messageValidator, offset) {
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

  Page_OnServiceStatusChanged_Params.encodedSize = codec.kStructHeaderSize + 8;

  Page_OnServiceStatusChanged_Params.decode = function(decoder) {
    var packed;
    var val = new Page_OnServiceStatusChanged_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    packed = decoder.readUint8();
    val.isInitialized = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.statusFlag =
        decoder.decodeStruct(codec.Int32);
    return val;
  };

  Page_OnServiceStatusChanged_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Page_OnServiceStatusChanged_Params.encodedSize);
    encoder.writeUint32(0);
    packed = 0;
    packed |= (val.isInitialized & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.statusFlag);
  };
  function Page_OnClientInfoAvailable_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  Page_OnClientInfoAvailable_Params.prototype.initDefaults_ = function() {
    this.clientInfo = null;
  };
  Page_OnClientInfoAvailable_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  Page_OnClientInfoAvailable_Params.validate = function(messageValidator, offset) {
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


    // validate Page_OnClientInfoAvailable_Params.clientInfo
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, new codec.PointerTo(ClientInfo), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  Page_OnClientInfoAvailable_Params.encodedSize = codec.kStructHeaderSize + 8;

  Page_OnClientInfoAvailable_Params.decode = function(decoder) {
    var packed;
    var val = new Page_OnClientInfoAvailable_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.clientInfo =
        decoder.decodeArrayPointer(new codec.PointerTo(ClientInfo));
    return val;
  };

  Page_OnClientInfoAvailable_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(Page_OnClientInfoAvailable_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(new codec.PointerTo(ClientInfo), val.clientInfo);
  };
  var kPageHandlerFactory_CreatePageHandler_Name = 0;

  function PageHandlerFactoryPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PageHandlerFactory,
                                                   handleOrPtrInfo);
  }

  function PageHandlerFactoryAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PageHandlerFactory, associatedInterfacePtrInfo);
  }

  PageHandlerFactoryAssociatedPtr.prototype =
      Object.create(PageHandlerFactoryPtr.prototype);
  PageHandlerFactoryAssociatedPtr.prototype.constructor =
      PageHandlerFactoryAssociatedPtr;

  function PageHandlerFactoryProxy(receiver) {
    this.receiver_ = receiver;
  }
  PageHandlerFactoryPtr.prototype.createPageHandler = function() {
    return PageHandlerFactoryProxy.prototype.createPageHandler
        .apply(this.ptr.getProxy(), arguments);
  };

  PageHandlerFactoryProxy.prototype.createPageHandler = function(page, handler) {
    var params_ = new PageHandlerFactory_CreatePageHandler_Params();
    params_.page = page;
    params_.handler = handler;
    var builder = new codec.MessageV0Builder(
        kPageHandlerFactory_CreatePageHandler_Name,
        codec.align(PageHandlerFactory_CreatePageHandler_Params.encodedSize));
    builder.encodeStruct(PageHandlerFactory_CreatePageHandler_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PageHandlerFactoryStub(delegate) {
    this.delegate_ = delegate;
  }
  PageHandlerFactoryStub.prototype.createPageHandler = function(page, handler) {
    return this.delegate_ && this.delegate_.createPageHandler && this.delegate_.createPageHandler(page, handler);
  }

  PageHandlerFactoryStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPageHandlerFactory_CreatePageHandler_Name:
      var params = reader.decodeStruct(PageHandlerFactory_CreatePageHandler_Params);
      this.createPageHandler(params.page, params.handler);
      return true;
    default:
      return false;
    }
  };

  PageHandlerFactoryStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePageHandlerFactoryRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPageHandlerFactory_CreatePageHandler_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageHandlerFactory_CreatePageHandler_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePageHandlerFactoryResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PageHandlerFactory = {
    name: 'segmentation_internals.mojom.PageHandlerFactory',
    kVersion: 0,
    ptrClass: PageHandlerFactoryPtr,
    proxyClass: PageHandlerFactoryProxy,
    stubClass: PageHandlerFactoryStub,
    validateRequest: validatePageHandlerFactoryRequest,
    validateResponse: null,
  };
  PageHandlerFactoryStub.prototype.validator = validatePageHandlerFactoryRequest;
  PageHandlerFactoryProxy.prototype.validator = null;
  var kPageHandler_GetServiceStatus_Name = 0;
  var kPageHandler_ExecuteModel_Name = 1;
  var kPageHandler_OverwriteResult_Name = 2;
  var kPageHandler_SetSelected_Name = 3;

  function PageHandlerPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(PageHandler,
                                                   handleOrPtrInfo);
  }

  function PageHandlerAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        PageHandler, associatedInterfacePtrInfo);
  }

  PageHandlerAssociatedPtr.prototype =
      Object.create(PageHandlerPtr.prototype);
  PageHandlerAssociatedPtr.prototype.constructor =
      PageHandlerAssociatedPtr;

  function PageHandlerProxy(receiver) {
    this.receiver_ = receiver;
  }
  PageHandlerPtr.prototype.getServiceStatus = function() {
    return PageHandlerProxy.prototype.getServiceStatus
        .apply(this.ptr.getProxy(), arguments);
  };

  PageHandlerProxy.prototype.getServiceStatus = function() {
    var params_ = new PageHandler_GetServiceStatus_Params();
    var builder = new codec.MessageV0Builder(
        kPageHandler_GetServiceStatus_Name,
        codec.align(PageHandler_GetServiceStatus_Params.encodedSize));
    builder.encodeStruct(PageHandler_GetServiceStatus_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PageHandlerPtr.prototype.executeModel = function() {
    return PageHandlerProxy.prototype.executeModel
        .apply(this.ptr.getProxy(), arguments);
  };

  PageHandlerProxy.prototype.executeModel = function(segmentId) {
    var params_ = new PageHandler_ExecuteModel_Params();
    params_.segmentId = segmentId;
    var builder = new codec.MessageV0Builder(
        kPageHandler_ExecuteModel_Name,
        codec.align(PageHandler_ExecuteModel_Params.encodedSize));
    builder.encodeStruct(PageHandler_ExecuteModel_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PageHandlerPtr.prototype.overwriteResult = function() {
    return PageHandlerProxy.prototype.overwriteResult
        .apply(this.ptr.getProxy(), arguments);
  };

  PageHandlerProxy.prototype.overwriteResult = function(segmentId, result) {
    var params_ = new PageHandler_OverwriteResult_Params();
    params_.segmentId = segmentId;
    params_.result = result;
    var builder = new codec.MessageV0Builder(
        kPageHandler_OverwriteResult_Name,
        codec.align(PageHandler_OverwriteResult_Params.encodedSize));
    builder.encodeStruct(PageHandler_OverwriteResult_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PageHandlerPtr.prototype.setSelected = function() {
    return PageHandlerProxy.prototype.setSelected
        .apply(this.ptr.getProxy(), arguments);
  };

  PageHandlerProxy.prototype.setSelected = function(segmentationKey, optimizationTarget) {
    var params_ = new PageHandler_SetSelected_Params();
    params_.segmentationKey = segmentationKey;
    params_.optimizationTarget = optimizationTarget;
    var builder = new codec.MessageV0Builder(
        kPageHandler_SetSelected_Name,
        codec.align(PageHandler_SetSelected_Params.encodedSize));
    builder.encodeStruct(PageHandler_SetSelected_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PageHandlerStub(delegate) {
    this.delegate_ = delegate;
  }
  PageHandlerStub.prototype.getServiceStatus = function() {
    return this.delegate_ && this.delegate_.getServiceStatus && this.delegate_.getServiceStatus();
  }
  PageHandlerStub.prototype.executeModel = function(segmentId) {
    return this.delegate_ && this.delegate_.executeModel && this.delegate_.executeModel(segmentId);
  }
  PageHandlerStub.prototype.overwriteResult = function(segmentId, result) {
    return this.delegate_ && this.delegate_.overwriteResult && this.delegate_.overwriteResult(segmentId, result);
  }
  PageHandlerStub.prototype.setSelected = function(segmentationKey, optimizationTarget) {
    return this.delegate_ && this.delegate_.setSelected && this.delegate_.setSelected(segmentationKey, optimizationTarget);
  }

  PageHandlerStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPageHandler_GetServiceStatus_Name:
      var params = reader.decodeStruct(PageHandler_GetServiceStatus_Params);
      this.getServiceStatus();
      return true;
    case kPageHandler_ExecuteModel_Name:
      var params = reader.decodeStruct(PageHandler_ExecuteModel_Params);
      this.executeModel(params.segmentId);
      return true;
    case kPageHandler_OverwriteResult_Name:
      var params = reader.decodeStruct(PageHandler_OverwriteResult_Params);
      this.overwriteResult(params.segmentId, params.result);
      return true;
    case kPageHandler_SetSelected_Name:
      var params = reader.decodeStruct(PageHandler_SetSelected_Params);
      this.setSelected(params.segmentationKey, params.optimizationTarget);
      return true;
    default:
      return false;
    }
  };

  PageHandlerStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePageHandlerRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPageHandler_GetServiceStatus_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageHandler_GetServiceStatus_Params;
      break;
      case kPageHandler_ExecuteModel_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageHandler_ExecuteModel_Params;
      break;
      case kPageHandler_OverwriteResult_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageHandler_OverwriteResult_Params;
      break;
      case kPageHandler_SetSelected_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = PageHandler_SetSelected_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePageHandlerResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var PageHandler = {
    name: 'segmentation_internals.mojom.PageHandler',
    kVersion: 0,
    ptrClass: PageHandlerPtr,
    proxyClass: PageHandlerProxy,
    stubClass: PageHandlerStub,
    validateRequest: validatePageHandlerRequest,
    validateResponse: null,
  };
  PageHandlerStub.prototype.validator = validatePageHandlerRequest;
  PageHandlerProxy.prototype.validator = null;
  var kPage_OnServiceStatusChanged_Name = 0;
  var kPage_OnClientInfoAvailable_Name = 1;

  function PagePtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(Page,
                                                   handleOrPtrInfo);
  }

  function PageAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        Page, associatedInterfacePtrInfo);
  }

  PageAssociatedPtr.prototype =
      Object.create(PagePtr.prototype);
  PageAssociatedPtr.prototype.constructor =
      PageAssociatedPtr;

  function PageProxy(receiver) {
    this.receiver_ = receiver;
  }
  PagePtr.prototype.onServiceStatusChanged = function() {
    return PageProxy.prototype.onServiceStatusChanged
        .apply(this.ptr.getProxy(), arguments);
  };

  PageProxy.prototype.onServiceStatusChanged = function(isInitialized, statusFlag) {
    var params_ = new Page_OnServiceStatusChanged_Params();
    params_.isInitialized = isInitialized;
    params_.statusFlag = statusFlag;
    var builder = new codec.MessageV0Builder(
        kPage_OnServiceStatusChanged_Name,
        codec.align(Page_OnServiceStatusChanged_Params.encodedSize));
    builder.encodeStruct(Page_OnServiceStatusChanged_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };
  PagePtr.prototype.onClientInfoAvailable = function() {
    return PageProxy.prototype.onClientInfoAvailable
        .apply(this.ptr.getProxy(), arguments);
  };

  PageProxy.prototype.onClientInfoAvailable = function(clientInfo) {
    var params_ = new Page_OnClientInfoAvailable_Params();
    params_.clientInfo = clientInfo;
    var builder = new codec.MessageV0Builder(
        kPage_OnClientInfoAvailable_Name,
        codec.align(Page_OnClientInfoAvailable_Params.encodedSize));
    builder.encodeStruct(Page_OnClientInfoAvailable_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function PageStub(delegate) {
    this.delegate_ = delegate;
  }
  PageStub.prototype.onServiceStatusChanged = function(isInitialized, statusFlag) {
    return this.delegate_ && this.delegate_.onServiceStatusChanged && this.delegate_.onServiceStatusChanged(isInitialized, statusFlag);
  }
  PageStub.prototype.onClientInfoAvailable = function(clientInfo) {
    return this.delegate_ && this.delegate_.onClientInfoAvailable && this.delegate_.onClientInfoAvailable(clientInfo);
  }

  PageStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kPage_OnServiceStatusChanged_Name:
      var params = reader.decodeStruct(Page_OnServiceStatusChanged_Params);
      this.onServiceStatusChanged(params.isInitialized, params.statusFlag);
      return true;
    case kPage_OnClientInfoAvailable_Name:
      var params = reader.decodeStruct(Page_OnClientInfoAvailable_Params);
      this.onClientInfoAvailable(params.clientInfo);
      return true;
    default:
      return false;
    }
  };

  PageStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validatePageRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kPage_OnServiceStatusChanged_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Page_OnServiceStatusChanged_Params;
      break;
      case kPage_OnClientInfoAvailable_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = Page_OnClientInfoAvailable_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validatePageResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var Page = {
    name: 'segmentation_internals.mojom.Page',
    kVersion: 0,
    ptrClass: PagePtr,
    proxyClass: PageProxy,
    stubClass: PageStub,
    validateRequest: validatePageRequest,
    validateResponse: null,
  };
  PageStub.prototype.validator = validatePageRequest;
  PageProxy.prototype.validator = null;
  exports.ServiceStatus = ServiceStatus;
  exports.SegmentInfo = SegmentInfo;
  exports.ClientInfo = ClientInfo;
  exports.PageHandlerFactory = PageHandlerFactory;
  exports.PageHandlerFactoryPtr = PageHandlerFactoryPtr;
  exports.PageHandlerFactoryAssociatedPtr = PageHandlerFactoryAssociatedPtr;
  exports.PageHandler = PageHandler;
  exports.PageHandlerPtr = PageHandlerPtr;
  exports.PageHandlerAssociatedPtr = PageHandlerAssociatedPtr;
  exports.Page = Page;
  exports.PagePtr = PagePtr;
  exports.PageAssociatedPtr = PageAssociatedPtr;
})();