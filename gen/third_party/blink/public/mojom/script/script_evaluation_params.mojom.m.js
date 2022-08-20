// third_party/blink/public/mojom/script/script_evaluation_params.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const UserActivationOptionSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const UserActivationOption = {
  
  kDoNotActivate: 0,
  kActivate: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const WantResultOptionSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const WantResultOption = {
  
  kNoResult: 0,
  kWantResult: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const PromiseResultOptionSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const PromiseResultOption = {
  
  kAwait: 0,
  kDoNotWait: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const EvaluationTimingSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const EvaluationTiming = {
  
  kAsynchronous: 0,
  kSynchronous: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const LoadEventBlockingOptionSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const LoadEventBlockingOption = {
  
  kDoNotBlock: 0,
  kBlock: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};



