// third_party/blink/public/mojom/ad_tagging/ad_evidence.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const FilterListResultSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const FilterListResult = {
  
  kNotChecked: 0,
  kMatchedAllowingRule: 1,
  kMatchedNoRules: 2,
  kMatchedBlockingRule: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const FrameCreationStackEvidenceSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const FrameCreationStackEvidence = {
  
  kNotCreatedByAdScript: 0,
  kCreatedByAdScript: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};


/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const FrameAdEvidenceSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    FrameAdEvidenceSpec.$,
    'FrameAdEvidence',
    [
      mojo.internal.StructField(
        'isComplete', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'parentIsAd', 0,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'latestFilterListResult', 4,
        0,
        FilterListResultSpec.$,
        FilterListResult.kNotChecked,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'mostRestrictiveFilterListResult', 8,
        0,
        FilterListResultSpec.$,
        FilterListResult.kNotChecked,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'createdByAdScript', 12,
        0,
        FrameCreationStackEvidenceSpec.$,
        FrameCreationStackEvidence.kNotCreatedByAdScript,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class FrameAdEvidence {
  constructor() {
    /** @type { !boolean } */
    this.isComplete;
    /** @type { !boolean } */
    this.parentIsAd;
    /** @type { !FilterListResult } */
    this.latestFilterListResult;
    /** @type { !FilterListResult } */
    this.mostRestrictiveFilterListResult;
    /** @type { !FrameCreationStackEvidence } */
    this.createdByAdScript;
  }
}

