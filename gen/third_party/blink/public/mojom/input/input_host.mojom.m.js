// third_party/blink/public/mojom/input/input_host.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class TextSuggestionHostPendingReceiver {
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
        this.handle, 'blink.mojom.TextSuggestionHost', scope);
  }
}

/** @interface */
export class TextSuggestionHostInterface {
  
  /**
   */

  startSuggestionMenuTimer() {}
  
  /**
   * @param { !number } caretX
   * @param { !number } caretY
   * @param { !string } markedText
   * @param { !Array<!SpellCheckSuggestion> } suggestions
   */

  showSpellCheckSuggestionMenu(caretX, caretY, markedText, suggestions) {}
  
  /**
   * @param { !number } caretX
   * @param { !number } caretY
   * @param { !string } markedText
   * @param { !Array<!TextSuggestion> } suggestions
   */

  showTextSuggestionMenu(caretX, caretY, markedText, suggestions) {}
}

/**
 * @implements { TextSuggestionHostInterface }
 */
export class TextSuggestionHostRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!TextSuggestionHostPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          TextSuggestionHostPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!TextSuggestionHostPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   */

  startSuggestionMenuTimer() {
    this.proxy.sendMessage(
        0,
        TextSuggestionHost_StartSuggestionMenuTimer_ParamsSpec.$,
        null,
        [
        ]);
  }

  
  /**
   * @param { !number } caretX
   * @param { !number } caretY
   * @param { !string } markedText
   * @param { !Array<!SpellCheckSuggestion> } suggestions
   */

  showSpellCheckSuggestionMenu(
      caretX,
      caretY,
      markedText,
      suggestions) {
    this.proxy.sendMessage(
        1,
        TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsSpec.$,
        null,
        [
          caretX,
          caretY,
          markedText,
          suggestions
        ]);
  }

  
  /**
   * @param { !number } caretX
   * @param { !number } caretY
   * @param { !string } markedText
   * @param { !Array<!TextSuggestion> } suggestions
   */

  showTextSuggestionMenu(
      caretX,
      caretY,
      markedText,
      suggestions) {
    this.proxy.sendMessage(
        2,
        TextSuggestionHost_ShowTextSuggestionMenu_ParamsSpec.$,
        null,
        [
          caretX,
          caretY,
          markedText,
          suggestions
        ]);
  }
}

/**
 * An object which receives request messages for the TextSuggestionHost
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class TextSuggestionHostReceiver {
  /**
   * @param {!TextSuggestionHostInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!TextSuggestionHostRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        TextSuggestionHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!TextSuggestionHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        TextSuggestionHost_StartSuggestionMenuTimer_ParamsSpec.$,
        null,
        impl.startSuggestionMenuTimer.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsSpec.$,
        null,
        impl.showSpellCheckSuggestionMenu.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        TextSuggestionHost_ShowTextSuggestionMenu_ParamsSpec.$,
        null,
        impl.showTextSuggestionMenu.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class TextSuggestionHost {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.TextSuggestionHost";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!TextSuggestionHostRemote}
   */
  static getRemote() {
    let remote = new TextSuggestionHostRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the TextSuggestionHost
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class TextSuggestionHostCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      TextSuggestionHostRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!TextSuggestionHostRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.startSuggestionMenuTimer =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        TextSuggestionHost_StartSuggestionMenuTimer_ParamsSpec.$,
        null,
        this.startSuggestionMenuTimer.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.showSpellCheckSuggestionMenu =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsSpec.$,
        null,
        this.showSpellCheckSuggestionMenu.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.showTextSuggestionMenu =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        TextSuggestionHost_ShowTextSuggestionMenu_ParamsSpec.$,
        null,
        this.showTextSuggestionMenu.createReceiverHandler(false /* expectsResponse */));
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
export const SpellCheckSuggestionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const TextSuggestionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const TextSuggestionHost_StartSuggestionMenuTimer_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const TextSuggestionHost_ShowTextSuggestionMenu_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    SpellCheckSuggestionSpec.$,
    'SpellCheckSuggestion',
    [
      mojo.internal.StructField(
        'suggestion', 0,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class SpellCheckSuggestion {
  constructor() {
    /** @type { !string } */
    this.suggestion;
  }
}



mojo.internal.Struct(
    TextSuggestionSpec.$,
    'TextSuggestion',
    [
      mojo.internal.StructField(
        'markerTag', 0,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'suggestionIndex', 4,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'prefix', 8,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'suggestion', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'suffix', 24,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class TextSuggestion {
  constructor() {
    /** @type { !number } */
    this.markerTag;
    /** @type { !number } */
    this.suggestionIndex;
    /** @type { !string } */
    this.prefix;
    /** @type { !string } */
    this.suggestion;
    /** @type { !string } */
    this.suffix;
  }
}



mojo.internal.Struct(
    TextSuggestionHost_StartSuggestionMenuTimer_ParamsSpec.$,
    'TextSuggestionHost_StartSuggestionMenuTimer_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class TextSuggestionHost_StartSuggestionMenuTimer_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    TextSuggestionHost_ShowSpellCheckSuggestionMenu_ParamsSpec.$,
    'TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params',
    [
      mojo.internal.StructField(
        'caretX', 0,
        0,
        mojo.internal.Double,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'caretY', 8,
        0,
        mojo.internal.Double,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'markedText', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'suggestions', 24,
        0,
        mojo.internal.Array(SpellCheckSuggestionSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class TextSuggestionHost_ShowSpellCheckSuggestionMenu_Params {
  constructor() {
    /** @type { !number } */
    this.caretX;
    /** @type { !number } */
    this.caretY;
    /** @type { !string } */
    this.markedText;
    /** @type { !Array<!SpellCheckSuggestion> } */
    this.suggestions;
  }
}



mojo.internal.Struct(
    TextSuggestionHost_ShowTextSuggestionMenu_ParamsSpec.$,
    'TextSuggestionHost_ShowTextSuggestionMenu_Params',
    [
      mojo.internal.StructField(
        'caretX', 0,
        0,
        mojo.internal.Double,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'caretY', 8,
        0,
        mojo.internal.Double,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'markedText', 16,
        0,
        mojo.internal.String,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'suggestions', 24,
        0,
        mojo.internal.Array(TextSuggestionSpec.$, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class TextSuggestionHost_ShowTextSuggestionMenu_Params {
  constructor() {
    /** @type { !number } */
    this.caretX;
    /** @type { !number } */
    this.caretY;
    /** @type { !string } */
    this.markedText;
    /** @type { !Array<!TextSuggestion> } */
    this.suggestions;
  }
}

