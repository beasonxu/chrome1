// third_party/blink/public/mojom/context_menu/context_menu.mojom-lite-for-compile.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';

goog.require('mojo.internal');
goog.require('mojo.internal.interfaceSupport');

goog.require('ui.mojom.MenuSourceType');
goog.require('network.mojom.ReferrerPolicy');
goog.require('blink.mojom.Impression');
goog.require('gfx.mojom.Rect');
goog.require('mojoBase.mojom.String16');
goog.require('url.mojom.Url');




goog.provide('blink.mojom.ContextMenuDataMediaType');
goog.provide('blink.mojom.ContextMenuDataMediaTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.ContextMenuDataMediaTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.ContextMenuDataMediaType = {
  
  kNone: 0,
  kImage: 1,
  kVideo: 2,
  kAudio: 3,
  kCanvas: 4,
  kFile: 5,
  kPlugin: 6,
  MIN_VALUE: 0,
  MAX_VALUE: 6,
};

goog.provide('blink.mojom.ContextMenuDataInputFieldType');
goog.provide('blink.mojom.ContextMenuDataInputFieldTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.ContextMenuDataInputFieldTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.ContextMenuDataInputFieldType = {
  
  kNone: 0,
  kPlainText: 1,
  kPassword: 2,
  kNumber: 3,
  kTelephone: 4,
  kOther: 5,
  MIN_VALUE: 0,
  MAX_VALUE: 5,
};

goog.provide('blink.mojom.CustomContextMenuItemType');
goog.provide('blink.mojom.CustomContextMenuItemTypeSpec');
/**
 * @const { {$: !mojo.internal.MojomType} }
 * @export
 */
blink.mojom.CustomContextMenuItemTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 * @export
 */
blink.mojom.CustomContextMenuItemType = {
  
  kOption: 0,
  kCheckableOption: 1,
  kGroup: 2,
  kSeparator: 3,
  kSubMenu: 4,
  MIN_VALUE: 0,
  MAX_VALUE: 4,
};



goog.provide('blink.mojom.ContextMenuClient');
goog.provide('blink.mojom.ContextMenuClientReceiver');
goog.provide('blink.mojom.ContextMenuClientCallbackRouter');
goog.provide('blink.mojom.ContextMenuClientInterface');
goog.provide('blink.mojom.ContextMenuClientRemote');
goog.provide('blink.mojom.ContextMenuClientPendingReceiver');


/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.ContextMenuClientPendingReceiver = class {
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
        this.handle,
        blink.mojom.ContextMenuClient.$interfaceName,
        scope);
  }
};

/** @interface */
blink.mojom.ContextMenuClientInterface = class {
  
  /**
   * @param { !number } action
   */

  customContextMenuAction(action) {}
  
  /**
   * @param { !url.mojom.Url } linkFollowed
   */

  contextMenuClosed(linkFollowed) {}
};

/**
 * @export
 * @implements { blink.mojom.ContextMenuClientInterface }
 */
blink.mojom.ContextMenuClientRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.ContextMenuClientPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.ContextMenuClientPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.ContextMenuClientPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !number } action
   */

  customContextMenuAction(
      action) {
    this.proxy.sendMessage(
        0,
        blink.mojom.ContextMenuClient_CustomContextMenuAction_ParamsSpec.$,
        null,
        [
          action
        ]);
  }

  
  /**
   * @param { !url.mojom.Url } linkFollowed
   */

  contextMenuClosed(
      linkFollowed) {
    this.proxy.sendMessage(
        1,
        blink.mojom.ContextMenuClient_ContextMenuClosed_ParamsSpec.$,
        null,
        [
          linkFollowed
        ]);
  }
};

/**
 * An object which receives request messages for the ContextMenuClient
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.ContextMenuClientReceiver = class {
  /**
   * @param {!blink.mojom.ContextMenuClientInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.ContextMenuClientRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.ContextMenuClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.ContextMenuClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.ContextMenuClient_CustomContextMenuAction_ParamsSpec.$,
        null,
        impl.customContextMenuAction.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.ContextMenuClient_ContextMenuClosed_ParamsSpec.$,
        null,
        impl.contextMenuClosed.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.ContextMenuClient = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.ContextMenuClient";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.ContextMenuClientRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.ContextMenuClientRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the ContextMenuClient
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.ContextMenuClientCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.ContextMenuClientRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.ContextMenuClientRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.customContextMenuAction =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.ContextMenuClient_CustomContextMenuAction_ParamsSpec.$,
        null,
        this.customContextMenuAction.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.contextMenuClosed =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.ContextMenuClient_ContextMenuClosed_ParamsSpec.$,
        null,
        this.contextMenuClosed.createReceiverHandler(false /* expectsResponse */));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }

  /**
   * @param {number} id An ID returned by a prior call to addListener.
   * @return {boolean} True iff the identified listener was found and removed.
   * @export
   */
  removeListener(id) {
    return this.router_.removeListener(id);
  }
};


goog.provide('blink.mojom.FieldRendererIdSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.FieldRendererIdSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.CustomContextMenuItemSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.CustomContextMenuItemSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.UntrustworthyContextMenuParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.UntrustworthyContextMenuParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.ContextMenuClient_CustomContextMenuAction_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ContextMenuClient_CustomContextMenuAction_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

goog.provide('blink.mojom.ContextMenuClient_ContextMenuClosed_ParamsSpec');
/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.ContextMenuClient_ContextMenuClosed_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.FieldRendererIdSpec.$,
    'FieldRendererId',
    [
      mojo.internal.StructField(
        'id', 0,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.FieldRendererId');

/** @record */
blink.mojom.FieldRendererId = class {
  constructor() {
    /** @export { !bigint } */
    this.id;
  }
};




mojo.internal.Struct(
    blink.mojom.CustomContextMenuItemSpec.$,
    'CustomContextMenuItem',
    [
      mojo.internal.StructField(
        'label', 0,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'icon', 8,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'toolTip', 16,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'type', 24,
        0,
        blink.mojom.CustomContextMenuItemTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'action', 28,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'rtl', 32,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'hasDirectionalOverride', 32,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'enabled', 32,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'checked', 32,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'submenu', 40,
        0,
        mojo.internal.Array(blink.mojom.CustomContextMenuItemSpec.$, false),
        null,
        false /* nullable */),
    ],
    [[0, 56],]);



goog.provide('blink.mojom.CustomContextMenuItem');

/** @record */
blink.mojom.CustomContextMenuItem = class {
  constructor() {
    /** @export { !mojoBase.mojom.String16 } */
    this.label;
    /** @export { !mojoBase.mojom.String16 } */
    this.icon;
    /** @export { !mojoBase.mojom.String16 } */
    this.toolTip;
    /** @export { !blink.mojom.CustomContextMenuItemType } */
    this.type;
    /** @export { !number } */
    this.action;
    /** @export { !boolean } */
    this.rtl;
    /** @export { !boolean } */
    this.hasDirectionalOverride;
    /** @export { !boolean } */
    this.enabled;
    /** @export { !boolean } */
    this.checked;
    /** @export { !Array<!blink.mojom.CustomContextMenuItem> } */
    this.submenu;
  }
};




mojo.internal.Struct(
    blink.mojom.UntrustworthyContextMenuParamsSpec.$,
    'UntrustworthyContextMenuParams',
    [
      mojo.internal.StructField(
        'mediaType', 0,
        0,
        blink.mojom.ContextMenuDataMediaTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'x', 4,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'y', 8,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'linkUrl', 16,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'linkText', 24,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'impression', 32,
        0,
        blink.mojom.ImpressionSpec.$,
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'unfilteredLinkUrl', 40,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'srcUrl', 48,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'hasImageContents', 12,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'mediaFlags', 56,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'selectionText', 64,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'titleText', 72,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'altText', 80,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'suggestedFilename', 88,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'misspelledWord', 96,
        0,
        mojoBase.mojom.String16Spec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'dictionarySuggestions', 104,
        0,
        mojo.internal.Array(mojoBase.mojom.String16Spec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'spellcheckEnabled', 12,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'isEditable', 12,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'writingDirectionDefault', 60,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'writingDirectionLeftToRight', 112,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'writingDirectionRightToLeft', 116,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'editFlags', 120,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'frameCharset', 128,
        0,
        mojo.internal.String,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'referrerPolicy', 124,
        0,
        network.mojom.ReferrerPolicySpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'linkFollowed', 136,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'customItems', 144,
        0,
        mojo.internal.Array(blink.mojom.CustomContextMenuItemSpec.$, false),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sourceType', 152,
        0,
        ui.mojom.MenuSourceTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'inputFieldType', 156,
        0,
        blink.mojom.ContextMenuDataInputFieldTypeSpec.$,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'selectionRect', 160,
        0,
        gfx.mojom.RectSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'selectionStartOffset', 168,
        0,
        mojo.internal.Int32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'openedFromHighlight', 12,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'fieldRendererId', 176,
        0,
        blink.mojom.FieldRendererIdSpec.$,
        null,
        true /* nullable */),
    ],
    [[0, 192],]);



goog.provide('blink.mojom.UntrustworthyContextMenuParams');

/** @record */
blink.mojom.UntrustworthyContextMenuParams = class {
  constructor() {
    /** @export { !blink.mojom.ContextMenuDataMediaType } */
    this.mediaType;
    /** @export { !number } */
    this.x;
    /** @export { !number } */
    this.y;
    /** @export { !boolean } */
    this.hasImageContents;
    /** @export { !boolean } */
    this.spellcheckEnabled;
    /** @export { !boolean } */
    this.isEditable;
    /** @export { !boolean } */
    this.openedFromHighlight;
    /** @export { !url.mojom.Url } */
    this.linkUrl;
    /** @export { !mojoBase.mojom.String16 } */
    this.linkText;
    /** @export { (blink.mojom.Impression|undefined) } */
    this.impression;
    /** @export { !url.mojom.Url } */
    this.unfilteredLinkUrl;
    /** @export { !url.mojom.Url } */
    this.srcUrl;
    /** @export { !number } */
    this.mediaFlags;
    /** @export { !number } */
    this.writingDirectionDefault;
    /** @export { !mojoBase.mojom.String16 } */
    this.selectionText;
    /** @export { !mojoBase.mojom.String16 } */
    this.titleText;
    /** @export { !mojoBase.mojom.String16 } */
    this.altText;
    /** @export { !mojoBase.mojom.String16 } */
    this.suggestedFilename;
    /** @export { !mojoBase.mojom.String16 } */
    this.misspelledWord;
    /** @export { !Array<!mojoBase.mojom.String16> } */
    this.dictionarySuggestions;
    /** @export { !number } */
    this.writingDirectionLeftToRight;
    /** @export { !number } */
    this.writingDirectionRightToLeft;
    /** @export { !number } */
    this.editFlags;
    /** @export { !network.mojom.ReferrerPolicy } */
    this.referrerPolicy;
    /** @export { !string } */
    this.frameCharset;
    /** @export { !url.mojom.Url } */
    this.linkFollowed;
    /** @export { !Array<!blink.mojom.CustomContextMenuItem> } */
    this.customItems;
    /** @export { !ui.mojom.MenuSourceType } */
    this.sourceType;
    /** @export { !blink.mojom.ContextMenuDataInputFieldType } */
    this.inputFieldType;
    /** @export { !gfx.mojom.Rect } */
    this.selectionRect;
    /** @export { !number } */
    this.selectionStartOffset;
    /** @export { (blink.mojom.FieldRendererId|undefined) } */
    this.fieldRendererId;
  }
};




mojo.internal.Struct(
    blink.mojom.ContextMenuClient_CustomContextMenuAction_ParamsSpec.$,
    'ContextMenuClient_CustomContextMenuAction_Params',
    [
      mojo.internal.StructField(
        'action', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.ContextMenuClient_CustomContextMenuAction_Params');

/** @record */
blink.mojom.ContextMenuClient_CustomContextMenuAction_Params = class {
  constructor() {
    /** @export { !number } */
    this.action;
  }
};




mojo.internal.Struct(
    blink.mojom.ContextMenuClient_ContextMenuClosed_ParamsSpec.$,
    'ContextMenuClient_ContextMenuClosed_Params',
    [
      mojo.internal.StructField(
        'linkFollowed', 0,
        0,
        url.mojom.UrlSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);



goog.provide('blink.mojom.ContextMenuClient_ContextMenuClosed_Params');

/** @record */
blink.mojom.ContextMenuClient_ContextMenuClosed_Params = class {
  constructor() {
    /** @export { !url.mojom.Url } */
    this.linkFollowed;
  }
};


