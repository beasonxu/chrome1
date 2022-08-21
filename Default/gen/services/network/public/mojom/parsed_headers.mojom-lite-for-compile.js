// services/network/public/mojom/parsed_headers.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('network.mojom.WebClientHintsType');
goog.require('network.mojom.XFrameOptionsValue');
goog.require('network.mojom.ContentSecurityPolicy');
goog.require('network.mojom.CrossOriginEmbedderPolicy');
goog.require('network.mojom.CrossOriginOpenerPolicy');
goog.require('network.mojom.LinkHeader');
goog.require('network.mojom.VariantsHeader');
goog.require('network.mojom.AllowCSPFromHeaderValue');
goog.require('network.mojom.TimingAllowOrigin');




goog.provide('network.mojom.OriginAgentClusterValue');
goog.provide('network.mojom.OriginAgentClusterValueSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.OriginAgentClusterValueSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.OriginAgentClusterValue = {
  
  kAbsent: 0,
  kTrue: 1,
  kFalse: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};



goog.provide('network.mojom.ParsedHeadersSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.ParsedHeadersSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    network.mojom.ParsedHeadersSpec.$,
    'ParsedHeaders',
    [
      mojo.internal.StructField(
        'contentSecurityPolicy', 0,
        0,
        mojo.internal.Array(network.mojom.ContentSecurityPolicySpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'allowCspFrom', 8,
        0,
        network.mojom.AllowCSPFromHeaderValueSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'crossOriginEmbedderPolicy', 24,
        0,
        network.mojom.CrossOriginEmbedderPolicySpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'crossOriginOpenerPolicy', 32,
        0,
        network.mojom.CrossOriginOpenerPolicySpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'originAgentCluster', 40,
        0,
        network.mojom.OriginAgentClusterValueSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'acceptCh', 48,
        0,
        mojo.internal.Array(network.mojom.WebClientHintsTypeSpec.$, false),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'criticalCh', 56,
        0,
        mojo.internal.Array(network.mojom.WebClientHintsTypeSpec.$, false),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'xfo', 44,
        0,
        network.mojom.XFrameOptionsValueSpec.$,
        network.mojom.XFrameOptionsValue.kNone,
        false /* nullable */),
      mojo.internal.StructField(
        'linkHeaders', 64,
        0,
        mojo.internal.Array(network.mojom.LinkHeaderSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'timingAllowOrigin', 72,
        0,
        network.mojom.TimingAllowOriginSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'bfcacheOptInUnload', 88,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'reportingEndpoints', 96,
        0,
        mojo.internal.Map(mojo.internal.String, mojo.internal.String, false),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'variantsHeaders', 104,
        0,
        mojo.internal.Array(network.mojom.VariantsHeaderSpec.$, false),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'contentLanguage', 112,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        true /* nullable */),
    ],
    [[0, 128],]);



goog.provide('network.mojom.ParsedHeaders');

/** @record */
network.mojom.ParsedHeaders = class {
  constructor() {
    /** @export { !Array<!network.mojom.ContentSecurityPolicy> } */
    this.contentSecurityPolicy;
    /** @export { (network.mojom.AllowCSPFromHeaderValue|undefined) } */
    this.allowCspFrom;
    /** @export { !network.mojom.CrossOriginEmbedderPolicy } */
    this.crossOriginEmbedderPolicy;
    /** @export { !network.mojom.CrossOriginOpenerPolicy } */
    this.crossOriginOpenerPolicy;
    /** @export { !network.mojom.OriginAgentClusterValue } */
    this.originAgentCluster;
    /** @export { !network.mojom.XFrameOptionsValue } */
    this.xfo;
    /** @export { (Array<!network.mojom.WebClientHintsType>|undefined) } */
    this.acceptCh;
    /** @export { (Array<!network.mojom.WebClientHintsType>|undefined) } */
    this.criticalCh;
    /** @export { !Array<!network.mojom.LinkHeader> } */
    this.linkHeaders;
    /** @export { (network.mojom.TimingAllowOrigin|undefined) } */
    this.timingAllowOrigin;
    /** @export { !boolean } */
    this.bfcacheOptInUnload;
    /** @export { (Object<!string, !string>|undefined) } */
    this.reportingEndpoints;
    /** @export { (Array<!network.mojom.VariantsHeader>|undefined) } */
    this.variantsHeaders;
    /** @export { (Array<!string>|undefined) } */
    this.contentLanguage;
  }
};


