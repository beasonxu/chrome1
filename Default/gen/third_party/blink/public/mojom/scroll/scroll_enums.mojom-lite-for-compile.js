// third_party/blink/public/mojom/scroll/scroll_enums.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');





goog.provide('blink.mojom.ScrollType');
goog.provide('blink.mojom.ScrollTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.ScrollTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.ScrollType = {
  
  kUser: 0,
  kProgrammatic: 1,
  kClamping: 2,
  kCompositor: 3,
  kAnchoring: 4,
  kSequenced: 5,
  MIN_VALUE: 0,
  MAX_VALUE: 5,
};

goog.provide('blink.mojom.ScrollBehavior');
goog.provide('blink.mojom.ScrollBehaviorSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.ScrollBehaviorSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.ScrollBehavior = {
  
  kAuto: 0,
  kInstant: 1,
  kSmooth: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};




