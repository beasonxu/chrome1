// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_EVENT_BREAKPOINTS_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_EVENT_BREAKPOINTS_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_event_breakpoints.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<event_breakpoints::SetInstrumentationBreakpointParams> {
  static std::unique_ptr<event_breakpoints::SetInstrumentationBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return event_breakpoints::SetInstrumentationBreakpointParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const event_breakpoints::SetInstrumentationBreakpointParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<event_breakpoints::SetInstrumentationBreakpointResult> {
  static std::unique_ptr<event_breakpoints::SetInstrumentationBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return event_breakpoints::SetInstrumentationBreakpointResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const event_breakpoints::SetInstrumentationBreakpointResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<event_breakpoints::RemoveInstrumentationBreakpointParams> {
  static std::unique_ptr<event_breakpoints::RemoveInstrumentationBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return event_breakpoints::RemoveInstrumentationBreakpointParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const event_breakpoints::RemoveInstrumentationBreakpointParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<event_breakpoints::RemoveInstrumentationBreakpointResult> {
  static std::unique_ptr<event_breakpoints::RemoveInstrumentationBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return event_breakpoints::RemoveInstrumentationBreakpointResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const event_breakpoints::RemoveInstrumentationBreakpointResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_EVENT_BREAKPOINTS_H_
