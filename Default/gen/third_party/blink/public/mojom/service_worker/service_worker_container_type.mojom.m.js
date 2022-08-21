// third_party/blink/public/mojom/service_worker/service_worker_container_type.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../../../mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const ServiceWorkerContainerTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const ServiceWorkerContainerType = {
  
  kUnknown: 0,
  kForWindow: 1,
  kForDedicatedWorker: 2,
  kForSharedWorker: 3,
  kForServiceWorker: 4,
  MIN_VALUE: 0,
  MAX_VALUE: 4,
};



