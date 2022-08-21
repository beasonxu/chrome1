// third_party/blink/public/mojom/scroll/scroll_enums.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const ScrollTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const ScrollType = {
  
  kUser: 0,
  kProgrammatic: 1,
  kClamping: 2,
  kCompositor: 3,
  kAnchoring: 4,
  kSequenced: 5,
  MIN_VALUE: 0,
  MAX_VALUE: 5,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const ScrollBehaviorSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const ScrollBehavior = {
  
  kAuto: 0,
  kInstant: 1,
  kSmooth: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};



