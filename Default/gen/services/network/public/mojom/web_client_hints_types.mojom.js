// services/network/public/mojom/web_client_hints_types.mojom.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

'use strict';

(function() {
  var mojomId = 'services/network/public/mojom/web_client_hints_types.mojom';
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


  var WebClientHintsType = {};
  WebClientHintsType.kDeviceMemory_DEPRECATED = 0;
  WebClientHintsType.kDpr_DEPRECATED = 1;
  WebClientHintsType.kResourceWidth_DEPRECATED = 2;
  WebClientHintsType.kViewportWidth_DEPRECATED = 3;
  WebClientHintsType.kRtt_DEPRECATED = 4;
  WebClientHintsType.kDownlink_DEPRECATED = 5;
  WebClientHintsType.kEct_DEPRECATED = 6;
  WebClientHintsType.kUA = 8;
  WebClientHintsType.kUAArch = 9;
  WebClientHintsType.kUAPlatform = 10;
  WebClientHintsType.kUAModel = 11;
  WebClientHintsType.kUAMobile = 12;
  WebClientHintsType.kUAFullVersion = 13;
  WebClientHintsType.kUAPlatformVersion = 14;
  WebClientHintsType.kPrefersColorScheme = 15;
  WebClientHintsType.kUABitness = 16;
  WebClientHintsType.kUAReduced = 17;
  WebClientHintsType.kViewportHeight = 18;
  WebClientHintsType.kDeviceMemory = 19;
  WebClientHintsType.kDpr = 20;
  WebClientHintsType.kResourceWidth = 21;
  WebClientHintsType.kViewportWidth = 22;
  WebClientHintsType.kUAFullVersionList = 23;
  WebClientHintsType.kFullUserAgent = 24;
  WebClientHintsType.kUAWoW64 = 25;
  WebClientHintsType.kSaveData = 27;
  WebClientHintsType.MIN_VALUE = 0;
  WebClientHintsType.MAX_VALUE = 27;

  WebClientHintsType.isKnownEnumValue = function(value) {
    switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 27:
      return true;
    }
    return false;
  };

  WebClientHintsType.toKnownEnumValue = function(value) {
    return value;
  };

  WebClientHintsType.validate = function(enumValue) {
    const isExtensible = false;
    if (isExtensible || this.isKnownEnumValue(enumValue))
      return validator.validationError.NONE;

    return validator.validationError.UNKNOWN_ENUM_VALUE;
  };

  exports.WebClientHintsType = WebClientHintsType;
})();