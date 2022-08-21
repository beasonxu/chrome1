// services/network/public/mojom/web_client_hints_types.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');





goog.provide('network.mojom.WebClientHintsType');
goog.provide('network.mojom.WebClientHintsTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.WebClientHintsTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.WebClientHintsType = {
  
  kDeviceMemory_DEPRECATED: 0,
  kDpr_DEPRECATED: 1,
  kResourceWidth_DEPRECATED: 2,
  kViewportWidth_DEPRECATED: 3,
  kRtt_DEPRECATED: 4,
  kDownlink_DEPRECATED: 5,
  kEct_DEPRECATED: 6,
  kUA: 8,
  kUAArch: 9,
  kUAPlatform: 10,
  kUAModel: 11,
  kUAMobile: 12,
  kUAFullVersion: 13,
  kUAPlatformVersion: 14,
  kPrefersColorScheme: 15,
  kUABitness: 16,
  kUAReduced: 17,
  kViewportHeight: 18,
  kDeviceMemory: 19,
  kDpr: 20,
  kResourceWidth: 21,
  kViewportWidth: 22,
  kUAFullVersionList: 23,
  kFullUserAgent: 24,
  kUAWoW64: 25,
  kSaveData: 27,
  MIN_VALUE: 0,
  MAX_VALUE: 27,
};




