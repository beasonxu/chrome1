// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DEVICE_ORIENTATION_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DEVICE_ORIENTATION_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_device_orientation.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<device_orientation::ClearDeviceOrientationOverrideParams> {
  static std::unique_ptr<device_orientation::ClearDeviceOrientationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return device_orientation::ClearDeviceOrientationOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const device_orientation::ClearDeviceOrientationOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<device_orientation::ClearDeviceOrientationOverrideResult> {
  static std::unique_ptr<device_orientation::ClearDeviceOrientationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return device_orientation::ClearDeviceOrientationOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const device_orientation::ClearDeviceOrientationOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<device_orientation::SetDeviceOrientationOverrideParams> {
  static std::unique_ptr<device_orientation::SetDeviceOrientationOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return device_orientation::SetDeviceOrientationOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const device_orientation::SetDeviceOrientationOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<device_orientation::SetDeviceOrientationOverrideResult> {
  static std::unique_ptr<device_orientation::SetDeviceOrientationOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return device_orientation::SetDeviceOrientationOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const device_orientation::SetDeviceOrientationOverrideResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DEVICE_ORIENTATION_H_
