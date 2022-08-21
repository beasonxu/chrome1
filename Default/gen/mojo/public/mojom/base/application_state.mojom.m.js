// mojo/public/mojom/base/application_state.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const ApplicationStateSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const ApplicationState = {
  
  UNKNOWN: 0,
  HAS_RUNNING_ACTIVITIES: 1,
  HAS_PAUSED_ACTIVITIES: 2,
  HAS_STOPPED_ACTIVITIES: 3,
  HAS_DESTROYED_ACTIVITIES: 4,
  MIN_VALUE: 0,
  MAX_VALUE: 4,
};



