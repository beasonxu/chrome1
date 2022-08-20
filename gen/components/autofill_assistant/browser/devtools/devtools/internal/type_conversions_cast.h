// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_CAST_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_CAST_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_cast.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<cast::Sink> {
  static std::unique_ptr<cast::Sink> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::Sink::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::Sink& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::EnableParams> {
  static std::unique_ptr<cast::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::EnableResult> {
  static std::unique_ptr<cast::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::DisableParams> {
  static std::unique_ptr<cast::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::DisableResult> {
  static std::unique_ptr<cast::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::SetSinkToUseParams> {
  static std::unique_ptr<cast::SetSinkToUseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::SetSinkToUseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::SetSinkToUseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::SetSinkToUseResult> {
  static std::unique_ptr<cast::SetSinkToUseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::SetSinkToUseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::SetSinkToUseResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::StartDesktopMirroringParams> {
  static std::unique_ptr<cast::StartDesktopMirroringParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::StartDesktopMirroringParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::StartDesktopMirroringParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::StartDesktopMirroringResult> {
  static std::unique_ptr<cast::StartDesktopMirroringResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::StartDesktopMirroringResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::StartDesktopMirroringResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::StartTabMirroringParams> {
  static std::unique_ptr<cast::StartTabMirroringParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::StartTabMirroringParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::StartTabMirroringParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::StartTabMirroringResult> {
  static std::unique_ptr<cast::StartTabMirroringResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::StartTabMirroringResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::StartTabMirroringResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::StopCastingParams> {
  static std::unique_ptr<cast::StopCastingParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::StopCastingParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::StopCastingParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::StopCastingResult> {
  static std::unique_ptr<cast::StopCastingResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::StopCastingResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::StopCastingResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::SinksUpdatedParams> {
  static std::unique_ptr<cast::SinksUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::SinksUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::SinksUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<cast::IssueUpdatedParams> {
  static std::unique_ptr<cast::IssueUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return cast::IssueUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const cast::IssueUpdatedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_CAST_H_
