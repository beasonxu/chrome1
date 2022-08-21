// mojom-webui/components/media_router/common/mojom/route_request_result_code.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const RouteRequestResultCodeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const RouteRequestResultCode = {
  
  UNKNOWN_ERROR: 0,
  OK: 1,
  TIMED_OUT: 2,
  ROUTE_NOT_FOUND: 3,
  SINK_NOT_FOUND: 4,
  INVALID_ORIGIN: 5,
  DEPRECATED_OFF_THE_RECORD_MISMATCH: 6,
  NO_SUPPORTED_PROVIDER: 7,
  CANCELLED: 8,
  ROUTE_ALREADY_EXISTS: 9,
  DESKTOP_PICKER_FAILED: 10,
  ROUTE_ALREADY_TERMINATED: 11,
  REDUNDANT_REQUEST: 12,
  MIN_VALUE: 0,
  MAX_VALUE: 12,
};



