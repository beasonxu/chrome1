// mojo/public/interfaces/bindings/interface_control_messages.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.




/**
 * @const { !number }
 */
export const RUN_MESSAGE_ID = 0xFFFFFFFF;


/**
 * @const { !number }
 */
export const RUN_OR_CLOSE_PIPE_MESSAGE_ID = 0xFFFFFFFE;



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RunMessageParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RunResponseMessageParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const QueryVersionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const QueryVersionResultSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const FlushForTestingSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RunOrClosePipeMessageParamsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const RequireVersionSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const EnableIdleTrackingSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const MessageAckSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const NotifyIdleSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType} }
 */
export const RunInputSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType} }
 */
export const RunOutputSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };

/**
 * @const { {$:!mojo.internal.MojomType} }
 */
export const RunOrClosePipeInputSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    RunMessageParamsSpec.$,
    'RunMessageParams',
    [
      mojo.internal.StructField(
        'input', 0,
        0,
        RunInputSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class RunMessageParams {
  constructor() {
    /** @type { !RunInput } */
    this.input;
  }
}



mojo.internal.Struct(
    RunResponseMessageParamsSpec.$,
    'RunResponseMessageParams',
    [
      mojo.internal.StructField(
        'output', 0,
        0,
        RunOutputSpec.$,
        null,
        true /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class RunResponseMessageParams {
  constructor() {
    /** @type { (RunOutput|undefined) } */
    this.output;
  }
}



mojo.internal.Struct(
    QueryVersionSpec.$,
    'QueryVersion',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class QueryVersion {
  constructor() {
  }
}



mojo.internal.Struct(
    QueryVersionResultSpec.$,
    'QueryVersionResult',
    [
      mojo.internal.StructField(
        'version', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class QueryVersionResult {
  constructor() {
    /** @type { !number } */
    this.version;
  }
}



mojo.internal.Struct(
    FlushForTestingSpec.$,
    'FlushForTesting',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class FlushForTesting {
  constructor() {
  }
}



mojo.internal.Struct(
    RunOrClosePipeMessageParamsSpec.$,
    'RunOrClosePipeMessageParams',
    [
      mojo.internal.StructField(
        'input', 0,
        0,
        RunOrClosePipeInputSpec.$,
        null,
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class RunOrClosePipeMessageParams {
  constructor() {
    /** @type { !RunOrClosePipeInput } */
    this.input;
  }
}



mojo.internal.Struct(
    RequireVersionSpec.$,
    'RequireVersion',
    [
      mojo.internal.StructField(
        'version', 0,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class RequireVersion {
  constructor() {
    /** @type { !number } */
    this.version;
  }
}



mojo.internal.Struct(
    EnableIdleTrackingSpec.$,
    'EnableIdleTracking',
    [
      mojo.internal.StructField(
        'timeoutInMicroseconds', 0,
        0,
        mojo.internal.Int64,
        BigInt(0),
        false /* nullable */,
        0),
    ],
    [[0, 16],]);



/**
 * @record
 */
export class EnableIdleTracking {
  constructor() {
    /** @type { !bigint } */
    this.timeoutInMicroseconds;
  }
}



mojo.internal.Struct(
    MessageAckSpec.$,
    'MessageAck',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class MessageAck {
  constructor() {
  }
}



mojo.internal.Struct(
    NotifyIdleSpec.$,
    'NotifyIdle',
    [
    ],
    [[0, 8],]);



/**
 * @record
 */
export class NotifyIdle {
  constructor() {
  }
}

mojo.internal.Union(
    RunInputSpec.$, 'RunInput',
    {
      'queryVersion': {
        'ordinal': 0,
        'type': QueryVersionSpec.$,
      },
      'flushForTesting': {
        'ordinal': 1,
        'type': FlushForTestingSpec.$,
      },
    });

/**
 * @typedef { {
 *   queryVersion: (!QueryVersion|undefined),
 *   flushForTesting: (!FlushForTesting|undefined),
 * } }
 */
export const RunInput = {};
mojo.internal.Union(
    RunOutputSpec.$, 'RunOutput',
    {
      'queryVersionResult': {
        'ordinal': 0,
        'type': QueryVersionResultSpec.$,
      },
    });

/**
 * @typedef { {
 *   queryVersionResult: (!QueryVersionResult|undefined),
 * } }
 */
export const RunOutput = {};
mojo.internal.Union(
    RunOrClosePipeInputSpec.$, 'RunOrClosePipeInput',
    {
      'requireVersion': {
        'ordinal': 0,
        'type': RequireVersionSpec.$,
      },
      'enableIdleTracking': {
        'ordinal': 1,
        'type': EnableIdleTrackingSpec.$,
      },
      'messageAck': {
        'ordinal': 2,
        'type': MessageAckSpec.$,
      },
      'notifyIdle': {
        'ordinal': 3,
        'type': NotifyIdleSpec.$,
      },
    });

/**
 * @typedef { {
 *   requireVersion: (!RequireVersion|undefined),
 *   enableIdleTracking: (!EnableIdleTracking|undefined),
 *   messageAck: (!MessageAck|undefined),
 *   notifyIdle: (!NotifyIdle|undefined),
 * } }
 */
export const RunOrClosePipeInput = {};
