// third_party/blink/public/mojom/input/input_event_result.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('blink.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.InputEventResultSourceSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.InputEventResultSource = {
  
  kUnknown: 0,
  kCompositorThread: 1,
  kMainThread: 2,
  kBrowser: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};


/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.InputEventResultStateSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.InputEventResultState = {
  
  kUnknown: 0,
  kConsumed: 1,
  kNotConsumed: 2,
  kNoConsumerExists: 3,
  kIgnored: 4,
  kSetNonBlocking: 5,
  kSetNonBlockingDueToFling: 6,
  MIN_VALUE: 0,
  MAX_VALUE: 6,
};




