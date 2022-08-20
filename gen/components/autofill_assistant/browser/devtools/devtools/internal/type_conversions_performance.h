// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PERFORMANCE_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PERFORMANCE_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_performance.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<performance::Metric> {
  static std::unique_ptr<performance::Metric> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::Metric::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::Metric& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::DisableParams> {
  static std::unique_ptr<performance::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::DisableResult> {
  static std::unique_ptr<performance::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::DisableResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<performance::EnableTimeDomain> {
  static performance::EnableTimeDomain Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return performance::EnableTimeDomain::TIME_TICKS;
    }
    if (value.GetString() == "timeTicks")
      return performance::EnableTimeDomain::TIME_TICKS;
    if (value.GetString() == "threadTicks")
      return performance::EnableTimeDomain::THREAD_TICKS;
    errors->AddError("invalid enum value");
    return performance::EnableTimeDomain::TIME_TICKS;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::EnableTimeDomain& value, T*) {
  switch (value) {
    case performance::EnableTimeDomain::TIME_TICKS:
      return std::make_unique<base::Value>("timeTicks");
    case performance::EnableTimeDomain::THREAD_TICKS:
      return std::make_unique<base::Value>("threadTicks");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<performance::EnableParams> {
  static std::unique_ptr<performance::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::EnableResult> {
  static std::unique_ptr<performance::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::EnableResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<performance::SetTimeDomainTimeDomain> {
  static performance::SetTimeDomainTimeDomain Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return performance::SetTimeDomainTimeDomain::TIME_TICKS;
    }
    if (value.GetString() == "timeTicks")
      return performance::SetTimeDomainTimeDomain::TIME_TICKS;
    if (value.GetString() == "threadTicks")
      return performance::SetTimeDomainTimeDomain::THREAD_TICKS;
    errors->AddError("invalid enum value");
    return performance::SetTimeDomainTimeDomain::TIME_TICKS;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::SetTimeDomainTimeDomain& value, T*) {
  switch (value) {
    case performance::SetTimeDomainTimeDomain::TIME_TICKS:
      return std::make_unique<base::Value>("timeTicks");
    case performance::SetTimeDomainTimeDomain::THREAD_TICKS:
      return std::make_unique<base::Value>("threadTicks");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<performance::SetTimeDomainParams> {
  static std::unique_ptr<performance::SetTimeDomainParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::SetTimeDomainParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::SetTimeDomainParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::SetTimeDomainResult> {
  static std::unique_ptr<performance::SetTimeDomainResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::SetTimeDomainResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::SetTimeDomainResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::GetMetricsParams> {
  static std::unique_ptr<performance::GetMetricsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::GetMetricsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::GetMetricsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::GetMetricsResult> {
  static std::unique_ptr<performance::GetMetricsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::GetMetricsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::GetMetricsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<performance::MetricsParams> {
  static std::unique_ptr<performance::MetricsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return performance::MetricsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const performance::MetricsParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PERFORMANCE_H_
