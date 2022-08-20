// third_party/blink/public/mojom/fenced_frame/fenced_frame.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/fenced_frame/fenced_frame.mojom';
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


  var FencedFrameMode = {};
  FencedFrameMode.kDefault = 0;
  FencedFrameMode.kOpaqueAds = 1;
  FencedFrameMode.MIN_VALUE = 0;
  FencedFrameMode.MAX_VALUE = 1;

  FencedFrameMode.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  FencedFrameMode.toKnownEnumValue = function(value) {
    return value;
  };

  FencedFrameMode.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };
  var ReportingDestination = {};
  ReportingDestination.kBuyer = 0;
  ReportingDestination.kSeller = 1;
  ReportingDestination.kComponentSeller = 2;
  ReportingDestination.kSharedStorageSelectUrl = 3;
  ReportingDestination.MIN_VALUE = 0;
  ReportingDestination.MAX_VALUE = 3;

  ReportingDestination.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  ReportingDestination.toKnownEnumValue = function(value) {
    return value;
  };

  ReportingDestination.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function FencedFrameReporting(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FencedFrameReporting.prototype.initDefaults_ = function() {
    this.metadata = null;
  };
  FencedFrameReporting.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  FencedFrameReporting.validate = function(messageValidator, offset) {
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


    // validate FencedFrameReporting.metadata
    err = messageValidator.validateMapPointer(offset + codec.kStructHeaderSize + 0, false, new codec.Enum(ReportingDestination), new codec.MapOf(codec.String, new codec.PointerTo(url$.Url)), false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FencedFrameReporting.encodedSize = codec.kStructHeaderSize + 8;

  FencedFrameReporting.decode = function(decoder) {
    var packed;
    var val = new FencedFrameReporting();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.metadata =
        decoder.decodeMapPointer(new codec.Enum(ReportingDestination), new codec.MapOf(codec.String, new codec.PointerTo(url$.Url)));
    return val;
  };

  FencedFrameReporting.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FencedFrameReporting.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeMapPointer(new codec.Enum(ReportingDestination), new codec.MapOf(codec.String, new codec.PointerTo(url$.Url)), val.metadata);
  };
  function FencedFrameOwnerHost_Navigate_Params(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FencedFrameOwnerHost_Navigate_Params.prototype.initDefaults_ = function() {
    this.url = null;
    this.navigationStartTime = null;
  };
  FencedFrameOwnerHost_Navigate_Params.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  FencedFrameOwnerHost_Navigate_Params.validate = function(messageValidator, offset) {
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


    // validate FencedFrameOwnerHost_Navigate_Params.url
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FencedFrameOwnerHost_Navigate_Params.navigationStartTime
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, time$.TimeTicks, false);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  FencedFrameOwnerHost_Navigate_Params.encodedSize = codec.kStructHeaderSize + 16;

  FencedFrameOwnerHost_Navigate_Params.decode = function(decoder) {
    var packed;
    var val = new FencedFrameOwnerHost_Navigate_Params();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.url =
        decoder.decodeStructPointer(url$.Url);
    val.navigationStartTime =
        decoder.decodeStructPointer(time$.TimeTicks);
    return val;
  };

  FencedFrameOwnerHost_Navigate_Params.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FencedFrameOwnerHost_Navigate_Params.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.url);
    encoder.encodeStructPointer(time$.TimeTicks, val.navigationStartTime);
  };
  var kFencedFrameOwnerHost_Navigate_Name = 0;

  function FencedFrameOwnerHostPtr(handleOrPtrInfo) {
    this.ptr = new bindings.InterfacePtrController(FencedFrameOwnerHost,
                                                   handleOrPtrInfo);
  }

  function FencedFrameOwnerHostAssociatedPtr(associatedInterfacePtrInfo) {
    this.ptr = new associatedBindings.AssociatedInterfacePtrController(
        FencedFrameOwnerHost, associatedInterfacePtrInfo);
  }

  FencedFrameOwnerHostAssociatedPtr.prototype =
      Object.create(FencedFrameOwnerHostPtr.prototype);
  FencedFrameOwnerHostAssociatedPtr.prototype.constructor =
      FencedFrameOwnerHostAssociatedPtr;

  function FencedFrameOwnerHostProxy(receiver) {
    this.receiver_ = receiver;
  }
  FencedFrameOwnerHostPtr.prototype.navigate = function() {
    return FencedFrameOwnerHostProxy.prototype.navigate
        .apply(this.ptr.getProxy(), arguments);
  };

  FencedFrameOwnerHostProxy.prototype.navigate = function(url, navigationStartTime) {
    var params_ = new FencedFrameOwnerHost_Navigate_Params();
    params_.url = url;
    params_.navigationStartTime = navigationStartTime;
    var builder = new codec.MessageV0Builder(
        kFencedFrameOwnerHost_Navigate_Name,
        codec.align(FencedFrameOwnerHost_Navigate_Params.encodedSize));
    builder.encodeStruct(FencedFrameOwnerHost_Navigate_Params, params_);
    var message = builder.finish();
    this.receiver_.accept(message);
  };

  function FencedFrameOwnerHostStub(delegate) {
    this.delegate_ = delegate;
  }
  FencedFrameOwnerHostStub.prototype.navigate = function(url, navigationStartTime) {
    return this.delegate_ && this.delegate_.navigate && this.delegate_.navigate(url, navigationStartTime);
  }

  FencedFrameOwnerHostStub.prototype.accept = function(message) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    case kFencedFrameOwnerHost_Navigate_Name:
      var params = reader.decodeStruct(FencedFrameOwnerHost_Navigate_Params);
      this.navigate(params.url, params.navigationStartTime);
      return true;
    default:
      return false;
    }
  };

  FencedFrameOwnerHostStub.prototype.acceptWithResponder =
      function(message, responder) {
    var reader = new codec.MessageReader(message);
    switch (reader.messageName) {
    default:
      return false;
    }
  };

  function validateFencedFrameOwnerHostRequest(messageValidator) {
    var message = messageValidator.message;
    var paramsClass = null;
    switch (message.getName()) {
      case kFencedFrameOwnerHost_Navigate_Name:
        if (!message.expectsResponse() && !message.isResponse())
          paramsClass = FencedFrameOwnerHost_Navigate_Params;
      break;
    }
    if (paramsClass === null)
      return validator.validationError.NONE;
    return paramsClass.validate(messageValidator, messageValidator.message.getHeaderNumBytes());
  }

  function validateFencedFrameOwnerHostResponse(messageValidator) {
    return validator.validationError.NONE;
  }

  var FencedFrameOwnerHost = {
    name: 'blink.mojom.FencedFrameOwnerHost',
    kVersion: 0,
    ptrClass: FencedFrameOwnerHostPtr,
    proxyClass: FencedFrameOwnerHostProxy,
    stubClass: FencedFrameOwnerHostStub,
    validateRequest: validateFencedFrameOwnerHostRequest,
    validateResponse: null,
  };
  FencedFrameOwnerHostStub.prototype.validator = validateFencedFrameOwnerHostRequest;
  FencedFrameOwnerHostProxy.prototype.validator = null;
  exports.FencedFrameMode = FencedFrameMode;
  exports.ReportingDestination = ReportingDestination;
  exports.FencedFrameReporting = FencedFrameReporting;
  exports.FencedFrameOwnerHost = FencedFrameOwnerHost;
  exports.FencedFrameOwnerHostPtr = FencedFrameOwnerHostPtr;
  exports.FencedFrameOwnerHostAssociatedPtr = FencedFrameOwnerHostAssociatedPtr;
})();