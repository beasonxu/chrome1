// third_party/blink/public/mojom/picture_in_picture_window_options/picture_in_picture_window_options.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/picture_in_picture_window_options/picture_in_picture_window_options.mojom';
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



  function PictureInPictureWindowOptions(values) {
    this.initDefaults_();
    this.initFields_(values);
  }


  PictureInPictureWindowOptions.prototype.initDefaults_ = function() {
    this.initialAspectRatio = 0;
    this.lockAspectRatio = false;
  };
  PictureInPictureWindowOptions.prototype.initFields_ = function(fields) {
    for(var field in fields) {
        if (this.hasOwnProperty(field))
          this[field] = fields[field];
    }
  };

  PictureInPictureWindowOptions.validate = function(messageValidator, offset) {
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

  PictureInPictureWindowOptions.encodedSize = codec.kStructHeaderSize + 8;

  PictureInPictureWindowOptions.decode = function(decoder) {
    var packed;
    var val = new PictureInPictureWindowOptions();
    var numberOfBytes = decoder.readUint32();
    var version = decoder.readUint32();
    val.initialAspectRatio =
        decoder.decodeStruct(codec.Float);
    packed = decoder.readUint8();
    val.lockAspectRatio = (packed >> 0) & 1 ? true : false;
    decoder.skip(1);
    decoder.skip(1);
    decoder.skip(1);
    return val;
  };

  PictureInPictureWindowOptions.encode = function(encoder, val) {
    var packed;
    encoder.writeUint32(PictureInPictureWindowOptions.encodedSize);
    encoder.writeUint32(0);
    encoder.encodeStruct(codec.Float, val.initialAspectRatio);
    packed = 0;
    packed |= (val.lockAspectRatio & 1) << 0
    encoder.writeUint8(packed);
    encoder.skip(1);
    encoder.skip(1);
    encoder.skip(1);
  };
  exports.PictureInPictureWindowOptions = PictureInPictureWindowOptions;
})();