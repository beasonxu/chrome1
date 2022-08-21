// third_party/blink/public/mojom/blob/data_element.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';

import {
  File as mojoBase_mojom_File,
  FileSpec as mojoBase_mojom_FileSpec
} from '../../../../../mojo/public/mojom/base/file.mojom.m.js';

import {
  FilePath as mojoBase_mojom_FilePath,
  FilePathSpec as mojoBase_mojom_FilePathSpec
} from '../../../../../mojo/public/mojom/base/file_path.mojom.m.js';

import {
  Time as mojoBase_mojom_Time,
  TimeSpec as mojoBase_mojom_TimeSpec
} from '../../../../../mojo/public/mojom/base/time.mojom.m.js';

import {
  BlobRemote as blink_mojom_BlobRemote,
  BlobPendingReceiver as blink_mojom_BlobPendingReceiver
} from './blob.mojom.m.js';




/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class BytesProviderPendingReceiver {
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
        this.handle, 'blink.mojom.BytesProvider', scope);
  }
}

/** @interface */
export class BytesProviderInterface {
  
  /**
   * @return {!Promise<{
        data: !Array<!number>,
   *  }>}
   */

  requestAsReply() {}
  
  /**
   * @param { !MojoHandle } pipe
   */

  requestAsStream(pipe) {}
  
  /**
   * @param { !bigint } sourceOffset
   * @param { !bigint } sourceSize
   * @param { !mojoBase_mojom_File } file
   * @param { !bigint } fileOffset
   * @return {!Promise<{
        timeFileModified: ?mojoBase_mojom_Time,
   *  }>}
   */

  requestAsFile(sourceOffset, sourceSize, file, fileOffset) {}
}

/**
 * @implements { BytesProviderInterface }
 */
export class BytesProviderRemote {
  /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
  constructor(handle = undefined) {
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!BytesProviderPendingReceiver>}
     */
    this.proxy =
        new mojo.internal.interfaceSupport.InterfaceRemoteBase(
          BytesProviderPendingReceiver,
          handle);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!BytesProviderPendingReceiver>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper(this.proxy);

    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.proxy.getConnectionErrorEventRouter();
  }

  
  /**
   * @return {!Promise<{
        data: !Array<!number>,
   *  }>}
   */

  requestAsReply() {
    return this.proxy.sendMessage(
        0,
        BytesProvider_RequestAsReply_ParamsSpec.$,
        BytesProvider_RequestAsReply_ResponseParamsSpec.$,
        [
        ]);
  }

  
  /**
   * @param { !MojoHandle } pipe
   */

  requestAsStream(
      pipe) {
    this.proxy.sendMessage(
        1,
        BytesProvider_RequestAsStream_ParamsSpec.$,
        null,
        [
          pipe
        ]);
  }

  
  /**
   * @param { !bigint } sourceOffset
   * @param { !bigint } sourceSize
   * @param { !mojoBase_mojom_File } file
   * @param { !bigint } fileOffset
   * @return {!Promise<{
        timeFileModified: ?mojoBase_mojom_Time,
   *  }>}
   */

  requestAsFile(
      sourceOffset,
      sourceSize,
      file,
      fileOffset) {
    return this.proxy.sendMessage(
        2,
        BytesProvider_RequestAsFile_ParamsSpec.$,
        BytesProvider_RequestAsFile_ResponseParamsSpec.$,
        [
          sourceOffset,
          sourceSize,
          file,
          fileOffset
        ]);
  }
}

/**
 * An object which receives request messages for the BytesProvider
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class BytesProviderReceiver {
  /**
   * @param {!BytesProviderInterface } impl
   */
  constructor(impl) {
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!BytesProviderRemote>} */
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
        BytesProviderRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!BytesProviderRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);


    this.helper_internal_.registerHandler(
        0,
        BytesProvider_RequestAsReply_ParamsSpec.$,
        BytesProvider_RequestAsReply_ResponseParamsSpec.$,
        impl.requestAsReply.bind(impl));
    this.helper_internal_.registerHandler(
        1,
        BytesProvider_RequestAsStream_ParamsSpec.$,
        null,
        impl.requestAsStream.bind(impl));
    this.helper_internal_.registerHandler(
        2,
        BytesProvider_RequestAsFile_ParamsSpec.$,
        BytesProvider_RequestAsFile_ResponseParamsSpec.$,
        impl.requestAsFile.bind(impl));
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    this.onConnectionError = this.helper_internal_.getConnectionErrorEventRouter();
  }
}

export class BytesProvider {
  /**
   * @return {!string}
   */
  static get $interfaceName() {
    return "blink.mojom.BytesProvider";
  }

  /**
   * Returns a remote for this interface which sends messages to the browser.
   * The browser must have an interface request binder registered for this
   * interface and accessible to the calling document's frame.
   *
   * @return {!BytesProviderRemote}
   */
  static getRemote() {
    let remote = new BytesProviderRemote;
    remote.$.bindNewPipeAndPassReceiver().bindInBrowser();
    return remote;
  }
}


/**
 * An object which receives request messages for the BytesProvider
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class BytesProviderCallbackRouter {
  constructor() {
    this.helper_internal_ = new mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal(
      BytesProviderRemote);

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!BytesProviderRemote>}
     */
    this.$ = new mojo.internal.interfaceSupport.InterfaceReceiverHelper(this.helper_internal_);

    this.router_ = new mojo.internal.interfaceSupport.CallbackRouter;

    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.requestAsReply =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        0,
        BytesProvider_RequestAsReply_ParamsSpec.$,
        BytesProvider_RequestAsReply_ResponseParamsSpec.$,
        this.requestAsReply.createReceiverHandler(true /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.requestAsStream =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        1,
        BytesProvider_RequestAsStream_ParamsSpec.$,
        null,
        this.requestAsStream.createReceiverHandler(false /* expectsResponse */));
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    this.requestAsFile =
        new mojo.internal.interfaceSupport.InterfaceCallbackReceiver(
            this.router_);

    this.helper_internal_.registerHandler(
        2,
        BytesProvider_RequestAsFile_ParamsSpec.$,
        BytesProvider_RequestAsFile_ResponseParamsSpec.$,
        this.requestAsFile.createReceiverHandler(true /* expectsResponse */));
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
export const DataElementBytesSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DataElementFileSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const DataElementBlobSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BytesProvider_RequestAsReply_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BytesProvider_RequestAsReply_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BytesProvider_RequestAsStream_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BytesProvider_RequestAsFile_ParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const BytesProvider_RequestAsFile_ResponseParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType} }
 */
export const DataElementSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };


/**
 * @const { !bigint }
 */
export const DataElementBytes_MAXIMUM_EMBEDDED_DATA_SIZE =
    BigInt('256000');



mojo.internal.Struct(
    DataElementBytesSpec.$,
    'DataElementBytes',
    [
      mojo.internal.StructField(
        'length', 0,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'embeddedData', 8,
        0,
        mojo.internal.Array(mojo.internal.Uint8, false),
        null,
        true /* nullable */,
        0),
      mojo.internal.StructField(
        'data', 16,
        0,
        mojo.internal.InterfaceProxy(BytesProviderRemote),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 32],]);



/**
 * @record
 */
export class DataElementBytes {
  constructor() {
    /** @type { !bigint } */
    this.length;
    /** @type { (Array<!number>|undefined) } */
    this.embeddedData;
    /** @type { !BytesProviderRemote } */
    this.data;
  }
}



mojo.internal.Struct(
    DataElementFileSpec.$,
    'DataElementFile',
    [
      mojo.internal.StructField(
        'path', 0,
        0,
        mojoBase_mojom_FilePathSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'offset', 8,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'length', 16,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'expectedModificationTime', 24,
        0,
        mojoBase_mojom_TimeSpec.$,
        null,
        true /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class DataElementFile {
  constructor() {
    /** @type { !mojoBase_mojom_FilePath } */
    this.path;
    /** @type { !bigint } */
    this.offset;
    /** @type { !bigint } */
    this.length;
    /** @type { (mojoBase_mojom_Time|undefined) } */
    this.expectedModificationTime;
  }
}



mojo.internal.Struct(
    DataElementBlobSpec.$,
    'DataElementBlob',
    [
      mojo.internal.StructField(
        'blob', 0,
        0,
        mojo.internal.InterfaceProxy(blink_mojom_BlobRemote),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'offset', 8,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'length', 16,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */,
        0),
    ],
    [[0, 32],]);



/**
 * @record
 */
export class DataElementBlob {
  constructor() {
    /** @type { !blink_mojom_BlobRemote } */
    this.blob;
    /** @type { !bigint } */
    this.offset;
    /** @type { !bigint } */
    this.length;
  }
}



mojo.internal.Struct(
    BytesProvider_RequestAsReply_ParamsSpec.$,
    'BytesProvider_RequestAsReply_Params',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class BytesProvider_RequestAsReply_Params {
  constructor() {
  }
}



mojo.internal.Struct(
    BytesProvider_RequestAsReply_ResponseParamsSpec.$,
    'BytesProvider_RequestAsReply_ResponseParams',
    [
      mojo.internal.StructField(
        'data', 0,
        0,
        mojo.internal.Array(mojo.internal.Uint8, false),
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BytesProvider_RequestAsReply_ResponseParams {
  constructor() {
    /** @type { !Array<!number> } */
    this.data;
  }
}



mojo.internal.Struct(
    BytesProvider_RequestAsStream_ParamsSpec.$,
    'BytesProvider_RequestAsStream_Params',
    [
      mojo.internal.StructField(
        'pipe', 0,
        0,
        mojo.internal.Handle,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BytesProvider_RequestAsStream_Params {
  constructor() {
    /** @type { !MojoHandle } */
    this.pipe;
  }
}



mojo.internal.Struct(
    BytesProvider_RequestAsFile_ParamsSpec.$,
    'BytesProvider_RequestAsFile_Params',
    [
      mojo.internal.StructField(
        'sourceOffset', 0,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'sourceSize', 8,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'file', 16,
        0,
        mojoBase_mojom_FileSpec.$,
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'fileOffset', 24,
        0,
        mojo.internal.Uint64,
        BigInt(0),
        false /* nullable */,
        0),
    ],
    [[0, 40],]);



/**
 * @record
 */
export class BytesProvider_RequestAsFile_Params {
  constructor() {
    /** @type { !bigint } */
    this.sourceOffset;
    /** @type { !bigint } */
    this.sourceSize;
    /** @type { !mojoBase_mojom_File } */
    this.file;
    /** @type { !bigint } */
    this.fileOffset;
  }
}



mojo.internal.Struct(
    BytesProvider_RequestAsFile_ResponseParamsSpec.$,
    'BytesProvider_RequestAsFile_ResponseParams',
    [
      mojo.internal.StructField(
        'timeFileModified', 0,
        0,
        mojoBase_mojom_TimeSpec.$,
        null,
        true /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class BytesProvider_RequestAsFile_ResponseParams {
  constructor() {
    /** @type { (mojoBase_mojom_Time|undefined) } */
    this.timeFileModified;
  }
}

mojo.internal.Union(
    DataElementSpec.$, 'DataElement',
    {
      'bytes': {
        'ordinal': 0,
        'type': DataElementBytesSpec.$,
      },
      'file': {
        'ordinal': 1,
        'type': DataElementFileSpec.$,
      },
      'blob': {
        'ordinal': 2,
        'type': DataElementBlobSpec.$,
      },
    });

/**
 * @typedef { {
 *   bytes: (!DataElementBytes|undefined),
 *   file: (!DataElementFile|undefined),
 *   blob: (!DataElementBlob|undefined),
 * } }
 */
export const DataElement = {};
