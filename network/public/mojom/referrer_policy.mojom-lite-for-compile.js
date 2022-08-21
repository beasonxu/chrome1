// services/network/public/mojom/referrer_policy.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');





goog.provide('network.mojom.ReferrerPolicy');
goog.provide('network.mojom.ReferrerPolicySpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.ReferrerPolicySpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.ReferrerPolicy = {
  
  kAlways: 0,
  kDefault: 1,
  kNoReferrerWhenDowngrade: 2,
  kNever: 3,
  kOrigin: 4,
  kOriginWhenCrossOrigin: 5,
  kStrictOriginWhenCrossOrigin: 6,
  kSameOrigin: 7,
  kStrictOrigin: 8,
  MIN_VALUE: 0,
  MAX_VALUE: 8,
};

goog.provide('network.mojom.URLRequestReferrerPolicy');
goog.provide('network.mojom.URLRequestReferrerPolicySpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.URLRequestReferrerPolicySpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.URLRequestReferrerPolicy = {
  
  kClearReferrerOnTransitionFromSecureToInsecure: 0,
  kReduceReferrerGranularityOnTransitionCrossOrigin: 1,
  kOriginOnlyOnTransitionCrossOrigin: 2,
  kNeverClearReferrer: 3,
  kOrigin: 4,
  kClearReferrerOnTransitionCrossOrigin: 5,
  kOriginClearOnTransitionFromSecureToInsecure: 6,
  kNoReferrer: 7,
  MIN_VALUE: 0,
  MAX_VALUE: 7,
};




