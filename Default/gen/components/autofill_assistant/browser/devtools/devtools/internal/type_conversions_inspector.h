// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_INSPECTOR_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_INSPECTOR_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_inspector.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<inspector::DisableParams> {
  static std::unique_ptr<inspector::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return inspector::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const inspector::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<inspector::DisableResult> {
  static std::unique_ptr<inspector::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return inspector::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const inspector::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<inspector::EnableParams> {
  static std::unique_ptr<inspector::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return inspector::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const inspector::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<inspector::EnableResult> {
  static std::unique_ptr<inspector::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return inspector::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const inspector::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<inspector::DetachedParams> {
  static std::unique_ptr<inspector::DetachedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return inspector::DetachedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const inspector::DetachedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<inspector::TargetCrashedParams> {
  static std::unique_ptr<inspector::TargetCrashedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return inspector::TargetCrashedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const inspector::TargetCrashedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<inspector::TargetReloadedAfterCrashParams> {
  static std::unique_ptr<inspector::TargetReloadedAfterCrashParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return inspector::TargetReloadedAfterCrashParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const inspector::TargetReloadedAfterCrashParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_INSPECTOR_H_
