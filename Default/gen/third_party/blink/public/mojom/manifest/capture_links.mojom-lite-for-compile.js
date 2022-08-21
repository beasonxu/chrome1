// third_party/blink/public/mojom/manifest/capture_links.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');





goog.provide('blink.mojom.CaptureLinks');
goog.provide('blink.mojom.CaptureLinksSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.CaptureLinksSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.CaptureLinks = {
  
  kUndefined: 0,
  kNone: 1,
  kNewClient: 2,
  kExistingClientNavigate: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};




