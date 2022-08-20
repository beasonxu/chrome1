// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PROFILER_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PROFILER_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_profiler.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<profiler::ProfileNode> {
  static std::unique_ptr<profiler::ProfileNode> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::ProfileNode::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::ProfileNode& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::Profile> {
  static std::unique_ptr<profiler::Profile> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::Profile::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::Profile& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::PositionTickInfo> {
  static std::unique_ptr<profiler::PositionTickInfo> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::PositionTickInfo::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::PositionTickInfo& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::CoverageRange> {
  static std::unique_ptr<profiler::CoverageRange> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::CoverageRange::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::CoverageRange& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::FunctionCoverage> {
  static std::unique_ptr<profiler::FunctionCoverage> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::FunctionCoverage::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::FunctionCoverage& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::ScriptCoverage> {
  static std::unique_ptr<profiler::ScriptCoverage> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::ScriptCoverage::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::ScriptCoverage& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::TypeObject> {
  static std::unique_ptr<profiler::TypeObject> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::TypeObject::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::TypeObject& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::TypeProfileEntry> {
  static std::unique_ptr<profiler::TypeProfileEntry> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::TypeProfileEntry::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::TypeProfileEntry& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::ScriptTypeProfile> {
  static std::unique_ptr<profiler::ScriptTypeProfile> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::ScriptTypeProfile::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::ScriptTypeProfile& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::DisableParams> {
  static std::unique_ptr<profiler::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::DisableResult> {
  static std::unique_ptr<profiler::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::EnableParams> {
  static std::unique_ptr<profiler::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::EnableResult> {
  static std::unique_ptr<profiler::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::GetBestEffortCoverageParams> {
  static std::unique_ptr<profiler::GetBestEffortCoverageParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::GetBestEffortCoverageParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::GetBestEffortCoverageParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::GetBestEffortCoverageResult> {
  static std::unique_ptr<profiler::GetBestEffortCoverageResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::GetBestEffortCoverageResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::GetBestEffortCoverageResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::SetSamplingIntervalParams> {
  static std::unique_ptr<profiler::SetSamplingIntervalParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::SetSamplingIntervalParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::SetSamplingIntervalParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::SetSamplingIntervalResult> {
  static std::unique_ptr<profiler::SetSamplingIntervalResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::SetSamplingIntervalResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::SetSamplingIntervalResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::StartParams> {
  static std::unique_ptr<profiler::StartParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::StartParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::StartParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::StartResult> {
  static std::unique_ptr<profiler::StartResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::StartResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::StartResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::StartPreciseCoverageParams> {
  static std::unique_ptr<profiler::StartPreciseCoverageParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::StartPreciseCoverageParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::StartPreciseCoverageParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::StartPreciseCoverageResult> {
  static std::unique_ptr<profiler::StartPreciseCoverageResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::StartPreciseCoverageResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::StartPreciseCoverageResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::StartTypeProfileParams> {
  static std::unique_ptr<profiler::StartTypeProfileParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::StartTypeProfileParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::StartTypeProfileParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::StartTypeProfileResult> {
  static std::unique_ptr<profiler::StartTypeProfileResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::StartTypeProfileResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::StartTypeProfileResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::StopParams> {
  static std::unique_ptr<profiler::StopParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::StopParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::StopParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::StopResult> {
  static std::unique_ptr<profiler::StopResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::StopResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::StopResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::StopPreciseCoverageParams> {
  static std::unique_ptr<profiler::StopPreciseCoverageParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::StopPreciseCoverageParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::StopPreciseCoverageParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::StopPreciseCoverageResult> {
  static std::unique_ptr<profiler::StopPreciseCoverageResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::StopPreciseCoverageResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::StopPreciseCoverageResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::StopTypeProfileParams> {
  static std::unique_ptr<profiler::StopTypeProfileParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::StopTypeProfileParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::StopTypeProfileParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::StopTypeProfileResult> {
  static std::unique_ptr<profiler::StopTypeProfileResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::StopTypeProfileResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::StopTypeProfileResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::TakePreciseCoverageParams> {
  static std::unique_ptr<profiler::TakePreciseCoverageParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::TakePreciseCoverageParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::TakePreciseCoverageParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::TakePreciseCoverageResult> {
  static std::unique_ptr<profiler::TakePreciseCoverageResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::TakePreciseCoverageResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::TakePreciseCoverageResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::TakeTypeProfileParams> {
  static std::unique_ptr<profiler::TakeTypeProfileParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::TakeTypeProfileParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::TakeTypeProfileParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::TakeTypeProfileResult> {
  static std::unique_ptr<profiler::TakeTypeProfileResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::TakeTypeProfileResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::TakeTypeProfileResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::ConsoleProfileFinishedParams> {
  static std::unique_ptr<profiler::ConsoleProfileFinishedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::ConsoleProfileFinishedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::ConsoleProfileFinishedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::ConsoleProfileStartedParams> {
  static std::unique_ptr<profiler::ConsoleProfileStartedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::ConsoleProfileStartedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::ConsoleProfileStartedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<profiler::PreciseCoverageDeltaUpdateParams> {
  static std::unique_ptr<profiler::PreciseCoverageDeltaUpdateParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return profiler::PreciseCoverageDeltaUpdateParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const profiler::PreciseCoverageDeltaUpdateParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_PROFILER_H_
