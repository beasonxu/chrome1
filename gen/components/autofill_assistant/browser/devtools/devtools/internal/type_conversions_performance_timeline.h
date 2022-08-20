// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PERFORMANCE_TIMELINE_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PERFORMANCE_TIMELINE_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_performance_timeline.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<performance_timeline::LargestContentfulPaint> {
  static std::unique_ptr<performance_timeline::LargestContentfulPaint> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance_timeline::LargestContentfulPaint::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance_timeline::LargestContentfulPaint& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance_timeline::LayoutShiftAttribution> {
  static std::unique_ptr<performance_timeline::LayoutShiftAttribution> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance_timeline::LayoutShiftAttribution::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance_timeline::LayoutShiftAttribution& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance_timeline::LayoutShift> {
  static std::unique_ptr<performance_timeline::LayoutShift> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance_timeline::LayoutShift::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance_timeline::LayoutShift& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance_timeline::TimelineEvent> {
  static std::unique_ptr<performance_timeline::TimelineEvent> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance_timeline::TimelineEvent::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance_timeline::TimelineEvent& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance_timeline::EnableParams> {
  static std::unique_ptr<performance_timeline::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance_timeline::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance_timeline::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance_timeline::EnableResult> {
  static std::unique_ptr<performance_timeline::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance_timeline::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance_timeline::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance_timeline::TimelineEventAddedParams> {
  static std::unique_ptr<performance_timeline::TimelineEventAddedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance_timeline::TimelineEventAddedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance_timeline::TimelineEventAddedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PERFORMANCE_TIMELINE_H_
