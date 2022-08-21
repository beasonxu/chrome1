// services/network/public/mojom/cors.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('network.mojom');





/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.CorsPreflightPolicySpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.CorsPreflightPolicy = {
  
  kConsiderPreflight: 0,
  kPreventPreflight: 1,
  MIN_VALUE: 0,
  MAX_VALUE: 1,
};


/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.CorsErrorSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.CorsError = {
  
  kDisallowedByMode: 0,
  kInvalidResponse: 1,
  kWildcardOriginNotAllowed: 2,
  kMissingAllowOriginHeader: 3,
  kMultipleAllowOriginValues: 4,
  kInvalidAllowOriginValue: 5,
  kAllowOriginMismatch: 6,
  kInvalidAllowCredentials: 7,
  kCorsDisabledScheme: 8,
  kPreflightInvalidStatus: 9,
  kPreflightDisallowedRedirect: 10,
  kPreflightWildcardOriginNotAllowed: 11,
  kPreflightMissingAllowOriginHeader: 12,
  kPreflightMultipleAllowOriginValues: 13,
  kPreflightInvalidAllowOriginValue: 14,
  kPreflightAllowOriginMismatch: 15,
  kPreflightInvalidAllowCredentials: 16,
  kPreflightMissingAllowPrivateNetwork: 17,
  kPreflightInvalidAllowPrivateNetwork: 18,
  kInvalidAllowMethodsPreflightResponse: 19,
  kInvalidAllowHeadersPreflightResponse: 20,
  kMethodDisallowedByPreflightResponse: 21,
  kHeaderDisallowedByPreflightResponse: 22,
  kRedirectContainsCredentials: 23,
  kInsecurePrivateNetwork: 24,
  kInvalidPrivateNetworkAccess: 25,
  kUnexpectedPrivateNetworkAccess: 26,
  MIN_VALUE: 0,
  MAX_VALUE: 26,
};




/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.CorsErrorStatusSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    network.mojom.CorsErrorStatusSpec.$,
    'CorsErrorStatus',
    [
      mojo.internal.StructField(
        'corsError', 0,
        0,
        network.mojom.CorsErrorSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'failedParameter', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'targetAddressSpace', 4,
        0,
        network.mojom.IPAddressSpaceSpec.$,
        network.mojom.IPAddressSpace.kUnknown,
        false /* nullable */),
      mojo.internal.StructField(
        'resourceAddressSpace', 16,
        0,
        network.mojom.IPAddressSpaceSpec.$,
        network.mojom.IPAddressSpace.kUnknown,
        false /* nullable */),
      mojo.internal.StructField(
        'hasAuthorizationCoveredByWildcardOnPreflight', 20,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'issueId', 24,
        0,
        mojoBase.mojom.UnguessableTokenSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 40],]);





/** @record */
network.mojom.CorsErrorStatus = class {
  constructor() {
    /** @export { !network.mojom.CorsError } */
    this.corsError;
    /** @export { !network.mojom.IPAddressSpace } */
    this.targetAddressSpace;
    /** @export { !string } */
    this.failedParameter;
    /** @export { !network.mojom.IPAddressSpace } */
    this.resourceAddressSpace;
    /** @export { !boolean } */
    this.hasAuthorizationCoveredByWildcardOnPreflight;
    /** @export { !mojoBase.mojom.UnguessableToken } */
    this.issueId;
  }
};


