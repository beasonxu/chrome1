// third_party/blink/public/mojom/scroll/scroll_into_view_params.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/scroll/scroll_into_view_params.mojom';
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
  var scroll_enums$ =
      mojo.internal.exposeNamespace('blink.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'third_party/blink/public/mojom/scroll/scroll_enums.mojom', 'scroll_enums.mojom.js');
  }
  var geometry$ =
      mojo.internal.exposeNamespace('gfx.mojom');
  if (mojo.config.autoLoadMojomDeps) {
    mojo.internal.loadMojomIfNecessary(
        'ui/gfx/geometry/mojom/geometry.mojom', '../../../../../ui/gfx/geometry/mojom/geometry.mojom.js');
  }



  function ScrollAlignment(values) {
    this.initDefaults_();
    this.initFields_(values);
  }

  ScrollAlignment.Behavior = {};
  ScrollAlignment.Behavior.kNoScroll = 0;
  ScrollAlignment.Behavior.kCenter = 1;
  ScrollAlignment.Behavior.kTop = 2;
  ScrollAlignment.Behavior.kBottom = 3;
  ScrollAlignment.Behavior.kLeft = 4;
  ScrollAlignment.Behavior.kRight = 5;
  ScrollAlignment.Behavior.kClosestEdge = 6;
  ScrollAlignment.Behavior.MIN_VALUE = 0;
  ScrollAlignment.Behavior.MAX_VALUE = 6;

  ScrollAlignment.Behavior.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    }
    return false;
  };

  ScrollAlignment.Behavior.toKnownEnumValue = function(value) {
    return value;
  };

  ScrollAlignment.Behavior.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  ScrollAlignment.prototype.initDefaults_ = function() {
    this.rectVisible = ScrollAlignment.Behavior.kNoScroll;
    this.rectHidden = ScrollAlignment.Behavior.kCenter;
    this.rectPartial = ScrollAlignment.Behavior.kClosestEdge;
  };
  ScrollAlignment.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ScrollAlignment.validate = function(messageValidator, offset) {
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


    // validate ScrollAlignment.rectVisible
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 0, ScrollAlignment.Behavior);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ScrollAlignment.rectHidden
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 4, ScrollAlignment.Behavior);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ScrollAlignment.rectPartial
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 8, ScrollAlignment.Behavior);
    if (err !== validator.validationError.NONE)
        return err;

    return validator.validationError.NONE;
  };

  ScrollAlignment.encodedSize = codec.kStructHeaderSize + 16;

  ScrollAlignment.decode = function(decoder) {
    var packed;
    var val = new ScrollAlignment();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.rectVisible =
        decoder.decodeStruct(new codec.Enum(ScrollAlignment.Behavior));
    val.rectHidden =
        decoder.decodeStruct(new codec.Enum(ScrollAlignment.Behavior));
    val.rectPartial =
        decoder.decodeStruct(new codec.Enum(ScrollAlignment.Behavior));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  ScrollAlignment.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScrollAlignment.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Int32, val.rectVisible);
    encoder.encodeStruct(codec.Int32, val.rectHidden);
    encoder.encodeStruct(codec.Int32, val.rectPartial);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function FocusedEditableParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  FocusedEditableParams.prototype.initDefaults_ = function() {
    this.relativeLocation = null;
    this.size = null;
    this.canZoom = true;
  };
  FocusedEditableParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  FocusedEditableParams.validate = function(messageValidator, offset) {
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


    // validate FocusedEditableParams.relativeLocation
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, geometry$.Vector2dF, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate FocusedEditableParams.size
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, geometry$.SizeF, false);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  FocusedEditableParams.encodedSize = codec.kStructHeaderSize + 24;

  FocusedEditableParams.decode = function(decoder) {
    var packed;
    var val = new FocusedEditableParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.relativeLocation =
        decoder.decodeStructPointer(geometry$.Vector2dF);
    val.size =
        decoder.decodeStructPointer(geometry$.SizeF);
    packed = decoder.readUint8();
    val.canZoom = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  FocusedEditableParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(FocusedEditableParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(geometry$.Vector2dF, val.relativeLocation);
    encoder.encodeStructPointer(geometry$.SizeF, val.size);
    packed = 0;
    packed |= (val.canZoom & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  function ScrollIntoViewParams(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  ScrollIntoViewParams.prototype.initDefaults_ = function() {
    this.alignX = null;
    this.alignY = null;
    this.type = scroll_enums$.ScrollType.kProgrammatic;
    this.makeVisibleInVisualViewport = true;
    this.isForScrollSequence = false;
    this.crossOriginBoundaries = true;
    this.behavior = scroll_enums$.ScrollBehavior.kAuto;
    this.forFocusedEditable = null;
  };
  ScrollIntoViewParams.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  ScrollIntoViewParams.validate = function(messageValidator, offset) {
    var err;
    err = messageValidator.validateStructHeader(offset, codec.kStructHeaderSize);
    if (err !== validator.validationError.NONE)
        return err;

    var kVersionSizes = [
      {version: 0, numBytes: 48}
    ];
    err = messageValidator.validateStructVersion(offset, kVersionSizes);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ScrollIntoViewParams.alignX
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 0, ScrollAlignment, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ScrollIntoViewParams.alignY
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 8, ScrollAlignment, false);
    if (err !== validator.validationError.NONE)
        return err;


    // validate ScrollIntoViewParams.type
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 16, scroll_enums$.ScrollType);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ScrollIntoViewParams.behavior
    err = messageValidator.validateEnum(offset + codec.kStructHeaderSize + 24, scroll_enums$.ScrollBehavior);
    if (err !== validator.validationError.NONE)
        return err;



    // validate ScrollIntoViewParams.forFocusedEditable
    err = messageValidator.validateStructPointer(offset + codec.kStructHeaderSize + 32, FocusedEditableParams, true);
    if (err !== validator.validationError.NONE)
        return err;


    return validator.validationError.NONE;
  };

  ScrollIntoViewParams.encodedSize = codec.kStructHeaderSize + 40;

  ScrollIntoViewParams.decode = function(decoder) {
    var packed;
    var val = new ScrollIntoViewParams();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.alignX =
        decoder.decodeStructPointer(ScrollAlignment);
    val.alignY =
        decoder.decodeStructPointer(ScrollAlignment);
    val.type =
        decoder.decodeStruct(new codec.Enum(scroll_enums$.ScrollType));
    packed = decoder.readUint8();
    val.makeVisibleInVisualViewport = (packed >> 0) & 1 ? true : false;
    val.isForScrollSequence = (packed >> 1) & 1 ? true : false;
    val.crossOriginBoundaries = (packed >> 2) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.behavior =
        decoder.decodeStruct(new codec.Enum(scroll_enums$.ScrollBehavior));
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    val.forFocusedEditable =
        decoder.decodeStructPointer(FocusedEditableParams);
    return val;
  };

  ScrollIntoViewParams.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(ScrollIntoViewParams.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStructPointer(ScrollAlignment, val.alignX);
    encoder.encodeStructPointer(ScrollAlignment, val.alignY);
    encoder.encodeStruct(codec.Int32, val.type);
    packed = 0;
    packed |= (val.makeVisibleInVisualViewport & 1) << 0
    packed |= (val.isForScrollSequence & 1) << 1
    packed |= (val.crossOriginBoundaries & 1) << 2
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStruct(codec.Int32, val.behavior);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
    encoder.encodeStructPointer(FocusedEditableParams, val.forFocusedEditable);
  };
  exports.ScrollAlignment = ScrollAlignment;
  exports.FocusedEditableParams = FocusedEditableParams;
  exports.ScrollIntoViewParams = ScrollIntoViewParams;
})();