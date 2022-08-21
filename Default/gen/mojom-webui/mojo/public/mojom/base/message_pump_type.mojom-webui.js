// mojom-webui/mojo/public/mojom/base/message_pump_type.mojom-webui.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '//resources/mojo/mojo/public/js/bindings.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const MessagePumpTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const MessagePumpType = {
  
  kDefault: 0,
  kUi: 1,
  kCustom: 2,
  kIo: 3,
  kJava: 4,
  MIN_VALUE: 0,
  MAX_VALUE: 4,
};



