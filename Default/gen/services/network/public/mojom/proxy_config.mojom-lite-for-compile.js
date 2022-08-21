// services/network/public/mojom/proxy_config.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('mojoBase.mojom.BigString');




goog.provide('network.mojom.ProxyRulesType');
goog.provide('network.mojom.ProxyRulesTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
network.mojom.ProxyRulesTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
network.mojom.ProxyRulesType = {
  
  EMPTY: 0,
  PROXY_LIST: 1,
  PROXY_LIST_PER_SCHEME: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};



goog.provide('network.mojom.ProxyBypassRulesSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.ProxyBypassRulesSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.ProxyListSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.ProxyListSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.ProxyRulesSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.ProxyRulesSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('network.mojom.ProxyConfigSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
network.mojom.ProxyConfigSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    network.mojom.ProxyBypassRulesSpec.$,
    'ProxyBypassRules',
    [
      mojo.internal.StructField(
        'rules', 0,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('network.mojom.ProxyBypassRules');

/** @record */
network.mojom.ProxyBypassRules = class {
  constructor() {
    /** @export { !Array<!string> } */
    this.rules;
  }
};




mojo.internal.Struct(
    network.mojom.ProxyListSpec.$,
    'ProxyList',
    [
      mojo.internal.StructField(
        'proxies', 0,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('network.mojom.ProxyList');

/** @record */
network.mojom.ProxyList = class {
  constructor() {
    /** @export { !Array<!string> } */
    this.proxies;
  }
};




mojo.internal.Struct(
    network.mojom.ProxyRulesSpec.$,
    'ProxyRules',
    [
      mojo.internal.StructField(
        'bypassRules', 0,
        0,
        network.mojom.ProxyBypassRulesSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'reverseBypass', 8,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'type', 12,
        0,
        network.mojom.ProxyRulesTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'singleProxies', 16,
        0,
        network.mojom.ProxyListSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'proxiesForHttp', 24,
        0,
        network.mojom.ProxyListSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'proxiesForHttps', 32,
        0,
        network.mojom.ProxyListSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'proxiesForFtp', 40,
        0,
        network.mojom.ProxyListSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'fallbackProxies', 48,
        0,
        network.mojom.ProxyListSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 64],]);



goog.provide('network.mojom.ProxyRules');

/** @record */
network.mojom.ProxyRules = class {
  constructor() {
    /** @export { !network.mojom.ProxyBypassRules } */
    this.bypassRules;
    /** @export { !boolean } */
    this.reverseBypass;
    /** @export { !network.mojom.ProxyRulesType } */
    this.type;
    /** @export { !network.mojom.ProxyList } */
    this.singleProxies;
    /** @export { !network.mojom.ProxyList } */
    this.proxiesForHttp;
    /** @export { !network.mojom.ProxyList } */
    this.proxiesForHttps;
    /** @export { !network.mojom.ProxyList } */
    this.proxiesForFtp;
    /** @export { !network.mojom.ProxyList } */
    this.fallbackProxies;
  }
};




mojo.internal.Struct(
    network.mojom.ProxyConfigSpec.$,
    'ProxyConfig',
    [
      mojo.internal.StructField(
        'autoDetect', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'fromSystem', 0,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'pacUrl', 8,
        0,
        mojoBase.mojom.BigStringSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'pacMandatory', 0,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'proxyRules', 16,
        0,
        network.mojom.ProxyRulesSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 32],]);



goog.provide('network.mojom.ProxyConfig');

/** @record */
network.mojom.ProxyConfig = class {
  constructor() {
    /** @export { !boolean } */
    this.autoDetect;
    /** @export { !boolean } */
    this.fromSystem;
    /** @export { !boolean } */
    this.pacMandatory;
    /** @export { !mojoBase.mojom.BigString } */
    this.pacUrl;
    /** @export { !network.mojom.ProxyRules } */
    this.proxyRules;
  }
};


