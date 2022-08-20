// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_TETHERING_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_TETHERING_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_tethering.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<tethering::BindParams> {
  static std::unique_ptr<tethering::BindParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tethering::BindParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tethering::BindParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tethering::BindResult> {
  static std::unique_ptr<tethering::BindResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return tethering::BindResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tethering::BindResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tethering::UnbindParams> {
  static std::unique_ptr<tethering::UnbindParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tethering::UnbindParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tethering::UnbindParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tethering::UnbindResult> {
  static std::unique_ptr<tethering::UnbindResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return tethering::UnbindResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tethering::UnbindResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tethering::AcceptedParams> {
  static std::unique_ptr<tethering::AcceptedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tethering::AcceptedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tethering::AcceptedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_TETHERING_H_
