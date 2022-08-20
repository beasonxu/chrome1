// third_party/blink/public/mojom/parakeet/ad_request.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/parakeet/ad_request.mojom';
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
  var url$ =
      mojo.internal.exposeNamespace('url.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'url/mojom/url.mojom', '../../../../../url/mojom/url.mojom.js');
  }


  var AdSignals = {};
  AdSignals.kCourseGeolocation = 0;
  AdSignals.kCourseUserAgent = 1;
  AdSignals.kTargeting = 2;
  AdSignals.kUserAdInterests = 3;
  AdSignals.MIN_VALUE = 0;
  AdSignals.MAX_VALUE = 3;

  AdSignals.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    }
    return false;
  };

  AdSignals.toKnownEnumValue = function(value) {
    return value;
  };

  AdSignals.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  function AdProperties(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AdProperties.prototype.initDefaults_ = function() {
    this.width = null;
    this.height = null;
    this.slot = null;
    this.lang = null;
    this.adType = null;
    this.bidFloor = 0;
  };
  AdProperties.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AdProperties.validate = function(messageValidator, offset) {
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


    // validate AdProperties.width
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 0, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AdProperties.height
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 8, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AdProperties.slot
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AdProperties.lang
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 24, false)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AdProperties.adType
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 32, false)
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  AdProperties.encodedSize = codec.kStructHeaderSize + 48;

  AdProperties.decode = function(decoder) {
    var packed;
    var val = new AdProperties();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.width =
        decoder.decodeStruct(codec.String);
    val.height =
        decoder.decodeStruct(codec.String);
    val.slot =
        decoder.decodeStruct(codec.String);
    val.lang =
        decoder.decodeStruct(codec.String);
    val.adType =
        decoder.decodeStruct(codec.String);
    val.bidFloor =
        decoder.decodeStruct(codec.Double);
    return val;
  };

  AdProperties.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AdProperties.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.String, val.width);
    encoder.encodeStruct(codec.String, val.height);
    encoder.encodeStruct(codec.String, val.slot);
    encoder.encodeStruct(codec.String, val.lang);
    encoder.encodeStruct(codec.String, val.adType);
    encoder.encodeStruct(codec.Double, val.bidFloor);
  };
  function AdGeolocation(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AdGeolocation.prototype.initDefaults_ = function() {
    this.latitude = 0;
    this.longitude = 0;
  };
  AdGeolocation.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AdGeolocation.validate = function(messageValidator, offset) {
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



    return validator.validationError.NONE;
  };

  AdGeolocation.encodedSize = codec.kStructHeaderSize + 16;

  AdGeolocation.decode = function(decoder) {
    var packed;
    var val = new AdGeolocation();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.latitude =
        decoder.decodeStruct(codec.Double);
    val.longitude =
        decoder.decodeStruct(codec.Double);
    return val;
  };

  AdGeolocation.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AdGeolocation.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Double, val.latitude);
    encoder.encodeStruct(codec.Double, val.longitude);
  };
  function AdTargeting(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AdTargeting.prototype.initDefaults_ = function() {
    this.interests = null;
    this.geolocation = null;
  };
  AdTargeting.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AdTargeting.validate = function(messageValidator, offset) {
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


    // validate AdTargeting.interests
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 0, 8, codec.String, true, [0, 0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AdTargeting.geolocation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, AdGeolocation, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AdTargeting.encodedSize = codec.kStructHeaderSize + 16;

  AdTargeting.decode = function(decoder) {
    var packed;
    var val = new AdTargeting();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.interests =
        decoder.decodeArrayPointer(codec.String);
    val.geolocation =
        decoder.decodeStructPointer(AdGeolocation);
    return val;
  };

  AdTargeting.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AdTargeting.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeArrayPointer(codec.String, val.interests);
    encoder.encodeStructPointer(AdGeolocation, val.geolocation);
  };
  function AdRequestConfig(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  AdRequestConfig.prototype.initDefaults_ = function() {
    this.adRequestUrl = null;
    this.adProperties = null;
    this.publisherCode = null;
    this.targeting = null;
    this.anonymizedProxiedSignals = null;
    this.fallbackSource = null;
  };
  AdRequestConfig.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  AdRequestConfig.validate = function(messageValidator, offset) {
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


    // validate AdRequestConfig.adRequestUrl
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, url$.Url, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AdRequestConfig.adProperties
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 8, 8, new codec.PointerTo(AdProperties), false, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AdRequestConfig.publisherCode
    err = messageValidator.validateStringPointer(offset + codec.kStructHeaderSize + 16, true)
    if (err !== validator.validationError.NONE)
        return err;


    // validate AdRequestConfig.targeting
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 24, AdTargeting, true);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AdRequestConfig.anonymizedProxiedSignals
    err = messageValidator.validateArrayPointer(offset + codec.kStructHeaderSize + 32, 4, new codec.Enum(AdSignals), true, [0], 0);
    if (err !== validator.validationError.NONE)
        return err;


    // validate AdRequestConfig.fallbackSource
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 40, url$.Url, true);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  AdRequestConfig.encodedSize = codec.kStructHeaderSize + 48;

  AdRequestConfig.decode = function(decoder) {
    var packed;
    var val = new AdRequestConfig();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.adRequestUrl =
        decoder.decodeStructPointer(url$.Url);
    val.adProperties =
        decoder.decodeArrayPointer(new codec.PointerTo(AdProperties));
    val.publisherCode =
        decoder.decodeStruct(codec.NullableString);
    val.targeting =
        decoder.decodeStructPointer(AdTargeting);
    val.anonymizedProxiedSignals =
        decoder.decodeArrayPointer(new codec.Enum(AdSignals));
    val.fallbackSource =
        decoder.decodeStructPointer(url$.Url);
    return val;
  };

  AdRequestConfig.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(AdRequestConfig.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(url$.Url, val.adRequestUrl);
    encoder.encodeArrayPointer(new codec.PointerTo(AdProperties), val.adProperties);
    encoder.encodeStruct(codec.NullableString, val.publisherCode);
    encoder.encodeStructPointer(AdTargeting, val.targeting);
    encoder.encodeArrayPointer(new codec.Enum(AdSignals), val.anonymizedProxiedSignals);
    encoder.encodeStructPointer(url$.Url, val.fallbackSource);
  };
  exports.AdSignals = AdSignals;
  exports.AdProperties = AdProperties;
  exports.AdGeolocation = AdGeolocation;
  exports.AdTargeting = AdTargeting;
  exports.AdRequestConfig = AdRequestConfig;
})();