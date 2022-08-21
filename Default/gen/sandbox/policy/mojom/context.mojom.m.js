// sandbox/policy/mojom/context.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const ContextSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const Context = {
  
  kBrowser: 0,
  kPrivilegedUtility: 1,
  kLowest: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};



