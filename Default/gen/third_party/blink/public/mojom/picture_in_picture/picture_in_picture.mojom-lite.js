// third_party/blink/public/mojom/picture_in_picture/picture_in_picture.mojom-lite.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2018 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
'use strict';


mojo.internal.exportModule('blink.mojom');








/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.PictureInPictureSessionObserverPendingReceiver = class {
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
        blink.mojom.PictureInPictureSessionObserver.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { blink.mojom.PictureInPictureSessionObserverInterface }
 */
blink.mojom.PictureInPictureSessionObserverRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.PictureInPictureSessionObserverPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.PictureInPictureSessionObserverPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.PictureInPictureSessionObserverPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !gfx.mojom.Size } size
   */

  onWindowSizeChanged(
      size) {
    this.proxy.sendMessage(
        0,
        blink.mojom.PictureInPictureSessionObserver_OnWindowSizeChanged_ParamsSpec.$,
        null,
        [
          size
        ]);
  }

  
  /**
   */

  onStopped() {
    this.proxy.sendMessage(
        1,
        blink.mojom.PictureInPictureSessionObserver_OnStopped_ParamsSpec.$,
        null,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the PictureInPictureSessionObserver
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.PictureInPictureSessionObserverReceiver = class {
  /**
   * @param {!blink.mojom.PictureInPictureSessionObserverInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.PictureInPictureSessionObserverRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.PictureInPictureSessionObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PictureInPictureSessionObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PictureInPictureSessionObserver_OnWindowSizeChanged_ParamsSpec.$,
        null,
        impl.onWindowSizeChanged.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.PictureInPictureSessionObserver_OnStopped_ParamsSpec.$,
        null,
        impl.onStopped.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.PictureInPictureSessionObserver = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.PictureInPictureSessionObserver";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.PictureInPictureSessionObserverRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.PictureInPictureSessionObserverRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the PictureInPictureSessionObserver
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.PictureInPictureSessionObserverCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.PictureInPictureSessionObserverRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PictureInPictureSessionObserverRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onWindowSizeChanged =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PictureInPictureSessionObserver_OnWindowSizeChanged_ParamsSpec.$,
        null,
        this.onWindowSizeChanged.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.onStopped =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.PictureInPictureSessionObserver_OnStopped_ParamsSpec.$,
        null,
        this.onStopped.createReceiverHandler(false /* expectsResponse */));
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




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.PictureInPictureSessionPendingReceiver = class {
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
        blink.mojom.PictureInPictureSession.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { blink.mojom.PictureInPictureSessionInterface }
 */
blink.mojom.PictureInPictureSessionRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.PictureInPictureSessionPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.PictureInPictureSessionPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.PictureInPictureSessionPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !number } playerId
   * @param { !Object } playerRemote
   * @param { !viz.mojom.SurfaceId } surfaceId
   * @param { !gfx.mojom.Size } naturalSize
   * @param { !boolean } showPlayPauseButton
   */

  update(
      playerId,
      playerRemote,
      surfaceId,
      naturalSize,
      showPlayPauseButton) {
    this.proxy.sendMessage(
        0,
        blink.mojom.PictureInPictureSession_Update_ParamsSpec.$,
        null,
        [
          playerId,
          playerRemote,
          surfaceId,
          naturalSize,
          showPlayPauseButton
        ]);
  }

  
  /**
   * @return {!Promise}
   */

  stop() {
    return this.proxy.sendMessage(
        1,
        blink.mojom.PictureInPictureSession_Stop_ParamsSpec.$,
        blink.mojom.PictureInPictureSession_Stop_ResponseParamsSpec.$,
        [
        ]);
  }
};

/**
 * An object which receives request messages for the PictureInPictureSession
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.PictureInPictureSessionReceiver = class {
  /**
   * @param {!blink.mojom.PictureInPictureSessionInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.PictureInPictureSessionRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.PictureInPictureSessionRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PictureInPictureSessionRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PictureInPictureSession_Update_ParamsSpec.$,
        null,
        impl.update.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        blink.mojom.PictureInPictureSession_Stop_ParamsSpec.$,
        blink.mojom.PictureInPictureSession_Stop_ResponseParamsSpec.$,
        impl.stop.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.PictureInPictureSession = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.PictureInPictureSession";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.PictureInPictureSessionRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.PictureInPictureSessionRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the PictureInPictureSession
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.PictureInPictureSessionCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.PictureInPictureSessionRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PictureInPictureSessionRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.update =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PictureInPictureSession_Update_ParamsSpec.$,
        null,
        this.update.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.stop =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        blink.mojom.PictureInPictureSession_Stop_ParamsSpec.$,
        blink.mojom.PictureInPictureSession_Stop_ResponseParamsSpec.$,
        this.stop.createReceiverHandler(true /* expectsResponse */));
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




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 * @export
 */
blink.mojom.PictureInPictureServicePendingReceiver = class {
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
        blink.mojom.PictureInPictureService.$interfaceName,
        scope);
  }
};



/**
 * @export
 * @implements { blink.mojom.PictureInPictureServiceInterface }
 */
blink.mojom.PictureInPictureServiceRemote = class {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!blink.mojom.PictureInPictureServicePendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          blink.mojom.PictureInPictureServicePendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!blink.mojom.PictureInPictureServicePendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @param { !number } playerId
   * @param { !Object } playerRemote
   * @param { !viz.mojom.SurfaceId } surfaceId
   * @param { !gfx.mojom.Size } naturalSize
   * @param { !boolean } showPlayPauseButton
   * @param { !blink.mojom.PictureInPictureSessionObserverRemote } observer
   * @param { !gfx.mojom.Rect } sourceBounds
   * @return {!Promise<{
        session: ?blink.mojom.PictureInPictureSessionRemote,
        size: !gfx.mojom.Size,
   *  }>}
   */

  startSession(
      playerId,
      playerRemote,
      surfaceId,
      naturalSize,
      showPlayPauseButton,
      observer,
      sourceBounds) {
    return this.proxy.sendMessage(
        0,
        blink.mojom.PictureInPictureService_StartSession_ParamsSpec.$,
        blink.mojom.PictureInPictureService_StartSession_ResponseParamsSpec.$,
        [
          playerId,
          playerRemote,
          surfaceId,
          naturalSize,
          showPlayPauseButton,
          observer,
          sourceBounds
        ]);
  }
};

/**
 * An object which receives request messages for the PictureInPictureService
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 *
 * @export
 */
blink.mojom.PictureInPictureServiceReceiver = class {
  /**
   * @param {!blink.mojom.PictureInPictureServiceInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!blink.mojom.PictureInPictureServiceRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        blink.mojom.PictureInPictureServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PictureInPictureServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PictureInPictureService_StartSession_ParamsSpec.$,
        blink.mojom.PictureInPictureService_StartSession_ResponseParamsSpec.$,
        impl.startSession.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
};

/**
 *  @export
 */
blink.mojom.PictureInPictureService = class {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.PictureInPictureService";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!blink.mojom.PictureInPictureServiceRemote}
   * @export
   */
  static getRemote() {
    let remote = new blink.mojom.PictureInPictureServiceRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
};


/**
 * An object which receives request messages for the PictureInPictureService
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 *
 * @export
 */
blink.mojom.PictureInPictureServiceCallbackRouter = class {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      blink.mojom.PictureInPictureServiceRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!blink.mojom.PictureInPictureServiceRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.startSession =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        blink.mojom.PictureInPictureService_StartSession_ParamsSpec.$,
        blink.mojom.PictureInPictureService_StartSession_ResponseParamsSpec.$,
        this.startSession.createReceiverHandler(true /* expectsResponse */));
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



/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PictureInPictureSessionObserver_OnWindowSizeChanged_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PictureInPictureSessionObserver_OnStopped_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PictureInPictureSession_Update_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PictureInPictureSession_Stop_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PictureInPictureSession_Stop_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PictureInPictureService_StartSession_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { {$:!mojo.internal.MojomType}}
 * @export
 */
blink.mojom.PictureInPictureService_StartSession_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    blink.mojom.PictureInPictureSessionObserver_OnWindowSizeChanged_ParamsSpec.$,
    'PictureInPictureSessionObserver_OnWindowSizeChanged_Params',
    [
      mojo.internal.StructField(
        'size', 0,
        0,
        gfx.mojom.SizeSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 16],]);





/** @record */
blink.mojom.PictureInPictureSessionObserver_OnWindowSizeChanged_Params = class {
  constructor() {
    /** @export { !gfx.mojom.Size } */
    this.size;
  }
};




mojo.internal.Struct(
    blink.mojom.PictureInPictureSessionObserver_OnStopped_ParamsSpec.$,
    'PictureInPictureSessionObserver_OnStopped_Params',
    [
    ],
    [[0, 8],]);





/** @record */
blink.mojom.PictureInPictureSessionObserver_OnStopped_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.PictureInPictureSession_Update_ParamsSpec.$,
    'PictureInPictureSession_Update_Params',
    [
      mojo.internal.StructField(
        'playerId', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'playerRemote', 4,
        0,
        mojo.internal.AssociatedInterfaceProxy(media.mojom.MediaPlayerRemote),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'surfaceId', 16,
        0,
        viz.mojom.SurfaceIdSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'naturalSize', 24,
        0,
        gfx.mojom.SizeSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'showPlayPauseButton', 12,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
    ],
    [[0, 40],]);





/** @record */
blink.mojom.PictureInPictureSession_Update_Params = class {
  constructor() {
    /** @export { !number } */
    this.playerId;
    /** @export { !Object } */
    this.playerRemote;
    /** @export { !boolean } */
    this.showPlayPauseButton;
    /** @export { !viz.mojom.SurfaceId } */
    this.surfaceId;
    /** @export { !gfx.mojom.Size } */
    this.naturalSize;
  }
};




mojo.internal.Struct(
    blink.mojom.PictureInPictureSession_Stop_ParamsSpec.$,
    'PictureInPictureSession_Stop_Params',
    [
    ],
    [[0, 8],]);





/** @record */
blink.mojom.PictureInPictureSession_Stop_Params = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.PictureInPictureSession_Stop_ResponseParamsSpec.$,
    'PictureInPictureSession_Stop_ResponseParams',
    [
    ],
    [[0, 8],]);





/** @record */
blink.mojom.PictureInPictureSession_Stop_ResponseParams = class {
  constructor() {
  }
};




mojo.internal.Struct(
    blink.mojom.PictureInPictureService_StartSession_ParamsSpec.$,
    'PictureInPictureService_StartSession_Params',
    [
      mojo.internal.StructField(
        'playerId', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */),
      mojo.internal.StructField(
        'playerRemote', 4,
        0,
        mojo.internal.AssociatedInterfaceProxy(media.mojom.MediaPlayerRemote),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'surfaceId', 16,
        0,
        viz.mojom.SurfaceIdSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'naturalSize', 24,
        0,
        gfx.mojom.SizeSpec.$,
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'showPlayPauseButton', 12,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */),
      mojo.internal.StructField(
        'observer', 32,
        0,
        mojo.internal.InterfaceProxy(blink.mojom.PictureInPictureSessionObserverRemote),
        null,
        false /* nullable */),
      mojo.internal.StructField(
        'sourceBounds', 40,
        0,
        gfx.mojom.RectSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 56],]);





/** @record */
blink.mojom.PictureInPictureService_StartSession_Params = class {
  constructor() {
    /** @export { !number } */
    this.playerId;
    /** @export { !Object } */
    this.playerRemote;
    /** @export { !boolean } */
    this.showPlayPauseButton;
    /** @export { !viz.mojom.SurfaceId } */
    this.surfaceId;
    /** @export { !gfx.mojom.Size } */
    this.naturalSize;
    /** @export { !blink.mojom.PictureInPictureSessionObserverRemote } */
    this.observer;
    /** @export { !gfx.mojom.Rect } */
    this.sourceBounds;
  }
};




mojo.internal.Struct(
    blink.mojom.PictureInPictureService_StartSession_ResponseParamsSpec.$,
    'PictureInPictureService_StartSession_ResponseParams',
    [
      mojo.internal.StructField(
        'session', 0,
        0,
        mojo.internal.InterfaceProxy(blink.mojom.PictureInPictureSessionRemote),
        null,
        true /* nullable */),
      mojo.internal.StructField(
        'size', 8,
        0,
        gfx.mojom.SizeSpec.$,
        null,
        false /* nullable */),
    ],
    [[0, 24],]);





/** @record */
blink.mojom.PictureInPictureService_StartSession_ResponseParams = class {
  constructor() {
    /** @export { (blink.mojom.PictureInPictureSessionRemote|undefined) } */
    this.session;
    /** @export { !gfx.mojom.Size } */
    this.size;
  }
};


