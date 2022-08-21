// third_party/blink/public/mojom/loader/url_loader_factory_bundle.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');

goog.require('network.mojom.URLLoaderFactory');
goog.require('url.mojom.Origin');






goog.provide('blink.mojom.URLLoaderFactoryBundleSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.URLLoaderFactoryBundleSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.URLLoaderFactoryBundleSpec.$,
    'URLLoaderFactoryBundle',
    [
      mojo.internal.StructField(
        'defaultFactory', 0,
        0,
        mojo.internal.InterfaceProxy(network.mojom.URLLoaderFactoryRemote),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'schemeSpecificFactories', 8,
        0,
        mojo.internal.Map(mojo.internal.String, mojo.internal.InterfaceProxy(network.mojom.URLLoaderFactoryRemote), false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'isolatedWorldFactories', 16,
        0,
        mojo.internal.Map(url.mojom.OriginSpec.$, mojo.internal.InterfaceProxy(network.mojom.URLLoaderFactoryRemote), false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'bypassRedirectChecks', 24,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 40],]);



goog.provide('blink.mojom.URLLoaderFactoryBundle');

/** @record */
blink.mojom.URLLoaderFactoryBundle = class {
  constructor() {
    /** @export { (network.mojom.URLLoaderFactoryRemote|undefined) } */
    this.defaultFactory;
    /** @export { !Object<!string, !network.mojom.URLLoaderFactoryRemote> } */
    this.schemeSpecificFactories;
    /** @export { !Map<!url.mojom.Origin, !network.mojom.URLLoaderFactoryRemote> } */
    this.isolatedWorldFactories;
    /** @export { !boolean } */
    this.bypassRedirectChecks;
  }
};


