// third_party/blink/public/mojom/loader/same_document_navigation_type.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const SameDocumentNavigationTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const SameDocumentNavigationType = {
  
  kFragment: 0,
  kHistoryApi: 1,
  kNavigationApiTransitionWhile: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};



