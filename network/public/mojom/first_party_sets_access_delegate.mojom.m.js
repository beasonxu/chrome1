// services/network/public/mojom/first_party_sets_access_delegate.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../mojo/public/js/bindings.js';

import {
  FirstPartySetEntry as network_mojom_FirstPartySetEntry,
  FirstPartySetEntrySpec as network_mojom_FirstPartySetEntrySpec
} from './first_party_sets.mojom.m.js';

import {
  SchemefulSite as network_mojom_SchemefulSite,
  SchemefulSiteSpec as network_mojom_SchemefulSiteSpec
} from './schemeful_site.mojom.m.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class FirstPartySetsAccessDelegatePendingReceiver {
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
        this.handle, 'network.mojom.FirstPartySetsAccessDelegate', scope);
  }
}

/** @interface */
export class FirstPartySetsAccessDelegateInterface {
  
  /**
   * @param { !FirstPartySetsReadyEvent } readyEvent
   */

  notifyReady(readyEvent) {}
}

/**
 * @implements { FirstPartySetsAccessDelegateInterface }
 */
export class FirstPartySetsAccessDelegateRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!FirstPartySetsAccessDelegatePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          FirstPartySetsAccessDelegatePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!FirstPartySetsAccessDelegatePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !FirstPartySetsReadyEvent } readyEvent
   */

  notifyReady(
      readyEvent) {
    this.proxy.sendMessage(
        0,
        FirstPartySetsAccessDelegate_NotifyReady_ParamsSpec.$,
        null,
        [
          readyEvent
        ]);
  }
}

/**
 * An object which receives request messages for the FirstPartySetsAccessDelegate
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class FirstPartySetsAccessDelegateReceiver {
  /**
   * @param {!FirstPartySetsAccessDelegateInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!FirstPartySetsAccessDelegateRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        FirstPartySetsAccessDelegateRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!FirstPartySetsAccessDelegateRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        FirstPartySetsAccessDelegate_NotifyReady_ParamsSpec.$,
        null,
        impl.notifyReady.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class FirstPartySetsAccessDelegate {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "network.mojom.FirstPartySetsAccessDelegate";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!FirstPartySetsAccessDelegateRemote}
   */
  static getRemote() {
    let remote = new FirstPartySetsAccessDelegateRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the FirstPartySetsAccessDelegate
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class FirstPartySetsAccessDelegateCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      FirstPartySetsAccessDelegateRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!FirstPartySetsAccessDelegateRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.notifyReady =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        FirstPartySetsAccessDelegate_NotifyReady_ParamsSpec.$,
        null,
        this.notifyReady.createReceiverHandler(false /* expectsResponse */));
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
export const FirstPartySetsAccessDelegateParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const FirstPartySetsReadyEventSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const FirstPartySetsAccessDelegate_NotifyReady_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    FirstPartySetsAccessDelegateParamsSpec.$,
    'FirstPartySetsAccessDelegateParams',
    [
      mojo.internal.StructField(
        'enabled', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class FirstPartySetsAccessDelegateParams {
  constructor() {
    /** @type { !boolean } */
    this.enabled;
  }
}



mojo.internal.Struct(
    FirstPartySetsReadyEventSpec.$,
    'FirstPartySetsReadyEvent',
    [
      mojo.internal.StructField(
        'customizations', 0,
        0,
        mojo.internal.Map(network_mojom_SchemefulSiteSpec.$, network_mojom_FirstPartySetEntrySpec.$, true),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class FirstPartySetsReadyEvent {
  constructor() {
    /** @type { !Map<!network_mojom_SchemefulSite, ?network_mojom_FirstPartySetEntry> } */
    this.customizations;
  }
}



mojo.internal.Struct(
    FirstPartySetsAccessDelegate_NotifyReady_ParamsSpec.$,
    'FirstPartySetsAccessDelegate_NotifyReady_Params',
    [
      mojo.internal.StructField(
        'readyEvent', 0,
        0,
        FirstPartySetsReadyEventSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class FirstPartySetsAccessDelegate_NotifyReady_Params {
  constructor() {
    /** @type { !FirstPartySetsReadyEvent } */
    this.readyEvent;
  }
}

