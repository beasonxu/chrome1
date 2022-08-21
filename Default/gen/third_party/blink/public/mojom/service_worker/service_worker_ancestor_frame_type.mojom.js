// third_party/blink/public/mojom/service_worker/service_worker_ancestor_frame_type.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'third_party/blink/public/mojom/service_worker/service_worker_ancestor_frame_type.mojom';
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


  var AncestorFrameType = {};
  AncestorFrameType.kNormalFrame = 0;
  AncestorFrameType.kFencedFrame = 1;
  AncestorFrameType.MIN_VALUE = 0;
  AncestorFrameType.MAX_VALUE = 1;

  AncestorFrameType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
      return true;
    }
    return false;
  };

  AncestorFrameType.toKnownEnumValue = function(value) {
    return value;
  };

  AncestorFrameType.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.AncestorFrameType = AncestorFrameType;
})();