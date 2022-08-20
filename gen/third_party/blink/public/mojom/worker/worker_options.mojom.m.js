// third_party/blink/public/mojom/worker/worker_options.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';

import {
  CredentialsMode as network_mojom_CredentialsMode,
  CredentialsModeSpec as network_mojom_CredentialsModeSpec
} from '../../../../../services/network/public/mojom/fetch_api.mojom.m.js';

import {
  ScriptType as blink_mojom_ScriptType,
  ScriptTypeSpec as blink_mojom_ScriptTypeSpec
} from '../script/script_type.mojom.m.js';



/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const WorkerOptionsSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    WorkerOptionsSpec.$,
    'WorkerOptions',
    [
      mojo.internal.StructField(
        'type', 0,
        0,
        blink_mojom_ScriptTypeSpec.$,
        blink_mojom_ScriptType.kClassic,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'credentials', 4,
        0,
        network_mojom_CredentialsModeSpec.$,
        network_mojom_CredentialsMode.kSameOrigin,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'name', 8,
        0,
        mojo.internal.String,
        "",
        false /* nullable */,
        0),
    ],
    [[0, 24],]);



/**
 * @record
 */
export class WorkerOptions {
  constructor() {
    /** @type { !blink_mojom_ScriptType } */
    this.type;
    /** @type { !network_mojom_CredentialsMode } */
    this.credentials;
    /** @type { !string } */
    this.name;
  }
}

