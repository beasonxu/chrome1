// third_party/blink/public/mojom/speculation_rules/speculation_rules.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';

import {
  Url as url_mojom_Url,
  UrlSpec as url_mojom_UrlSpec
} from '../../../../../url/mojom/url.mojom.m.js';

import {
  Referrer as blink_mojom_Referrer,
  ReferrerSpec as blink_mojom_ReferrerSpec
} from '../loader/referrer.mojom.m.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const SpeculationActionSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const SpeculationAction = {
  
  kPrefetch: 0,
  kPrefetchWithSubresources: 1,
  kPrerender: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};



/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class SpeculationHostPendingReceiver {
  /**
   * @param {!MojoHandle|!mojo.internal.interfaceSupport.Endpoint} handle
   */
  constructor(handle) {
    /** @public {!mojo.internal.interfaceSupport.Endpoint} */
    this.handle = mojo.internal.interfaceSupport.getEndpointForReceiver(handle);
  }

  /** @param {string=} scope */
  bindInBrowser(scope = 'context') {
    mojo.internal.interfaceSupport.bind(
        this.handle, 'blink.mojom.SpeculationHost', scope);
  }
}

/** @interface */
export class SpeculationHostInterface {
  
  /**
   * @param { !Array<!SpeculationCandidate> } candidates
   */

  updateSpeculationCandidates(candidates) {}
}

/**
 * @implements { SpeculationHostInterface }
 */
export class SpeculationHostRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!SpeculationHostPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          SpeculationHostPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!SpeculationHostPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !Array<!SpeculationCandidate> } candidates
   */

  updateSpeculationCandidates(
      candidates) {
    this.proxy.sendMessage(
        0,
        SpeculationHost_UpdateSpeculationCandidates_ParamsSpec.$,
        null,
        [
          candidates
        ]);
  }
}

/**
 * An object which receives request messages for the SpeculationHost
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class SpeculationHostReceiver {
  /**
   * @param {!SpeculationHostInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!SpeculationHostRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        SpeculationHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!SpeculationHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        SpeculationHost_UpdateSpeculationCandidates_ParamsSpec.$,
        null,
        impl.updateSpeculationCandidates.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class SpeculationHost {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.SpeculationHost";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!SpeculationHostRemote}
   */
  static getRemote() {
    let remote = new SpeculationHostRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the SpeculationHost
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class SpeculationHostCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      SpeculationHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!SpeculationHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.updateSpeculationCandidates =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        SpeculationHost_UpdateSpeculationCandidates_ParamsSpec.$,
        null,
        this.updateSpeculationCandidates.createReceiverHandler(false /* expectsResponse */));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }

  /**
   * @param {number} id An ID returned by a prior call to addListener.
   * @return {boolean} True iff the identified listener was found and removed.
   */
  removeListener(id) {
    return this.router_.removeListener(id);
  }
}

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SpeculationCandidateSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const SpeculationHost_UpdateSpeculationCandidates_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    SpeculationCandidateSpec.$,
    'SpeculationCandidate',
    [
      mojo.internal.StructField(
        'url', 0,
        0,
        url_mojom_UrlSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'action', 8,
        0,
        SpeculationActionSpec.$,
        SpeculationAction.kPrefetch,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'referrer', 16,
        0,
        blink_mojom_ReferrerSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'requiresAnonymousClientIpWhenCrossOrigin', 12,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 32],]);



/**
 * @record
 */
export class SpeculationCandidate {
  constructor() {
    /** @type { !url_mojom_Url } */
    this.url;
    /** @type { !SpeculationAction } */
    this.action;
    /** @type { !boolean } */
    this.requiresAnonymousClientIpWhenCrossOrigin;
    /** @type { !blink_mojom_Referrer } */
    this.referrer;
  }
}



mojo.internal.Struct(
    SpeculationHost_UpdateSpeculationCandidates_ParamsSpec.$,
    'SpeculationHost_UpdateSpeculationCandidates_Params',
    [
      mojo.internal.StructField(
        'candidates', 0,
        0,
        mojo.internal.Array(SpeculationCandidateSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class SpeculationHost_UpdateSpeculationCandidates_Params {
  constructor() {
    /** @type { !Array<!SpeculationCandidate> } */
    this.candidates;
  }
}

