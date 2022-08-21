// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_SYSTEM_INFO_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_SYSTEM_INFO_H_

#include "base/values.h"

namespace autofill_assistant {

namespace system_info {
class GPUDevice;
class Size;
class VideoDecodeAcceleratorCapability;
class VideoEncodeAcceleratorCapability;
class ImageDecodeAcceleratorCapability;
class GPUInfo;
class ProcessInfo;
class GetInfoParams;
class GetInfoResult;
class GetProcessInfoParams;
class GetProcessInfoResult;

enum class SubsamplingFormat {
  YUV420,
  YUV422,
  YUV444
};

enum class ImageType {
  JPEG,
  WEBP,
  UNKNOWN
};

}  // namespace system_info

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_SYSTEM_INFO_H_
