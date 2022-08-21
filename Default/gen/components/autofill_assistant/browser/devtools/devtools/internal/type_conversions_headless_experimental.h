// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_HEADLESS_EXPERIMENTAL_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_HEADLESS_EXPERIMENTAL_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_headless_experimental.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<headless_experimental::ScreenshotParams> {
  static std::unique_ptr<headless_experimental::ScreenshotParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return headless_experimental::ScreenshotParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const headless_experimental::ScreenshotParams& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<headless_experimental::ScreenshotParamsFormat> {
  static headless_experimental::ScreenshotParamsFormat Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return headless_experimental::ScreenshotParamsFormat::JPEG;
    }
    if (value.GetString() == "jpeg")
      return headless_experimental::ScreenshotParamsFormat::JPEG;
    if (value.GetString() == "png")
      return headless_experimental::ScreenshotParamsFormat::PNG;
    errors->AddError("invalid enum value");
    return headless_experimental::ScreenshotParamsFormat::JPEG;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const headless_experimental::ScreenshotParamsFormat& value, T*) {
  switch (value) {
    case headless_experimental::ScreenshotParamsFormat::JPEG:
      return std::make_unique<base::Value>("jpeg");
    case headless_experimental::ScreenshotParamsFormat::PNG:
      return std::make_unique<base::Value>("png");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<headless_experimental::BeginFrameParams> {
  static std::unique_ptr<headless_experimental::BeginFrameParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return headless_experimental::BeginFrameParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const headless_experimental::BeginFrameParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<headless_experimental::BeginFrameResult> {
  static std::unique_ptr<headless_experimental::BeginFrameResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return headless_experimental::BeginFrameResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const headless_experimental::BeginFrameResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<headless_experimental::DisableParams> {
  static std::unique_ptr<headless_experimental::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return headless_experimental::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const headless_experimental::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<headless_experimental::DisableResult> {
  static std::unique_ptr<headless_experimental::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return headless_experimental::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const headless_experimental::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<headless_experimental::EnableParams> {
  static std::unique_ptr<headless_experimental::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return headless_experimental::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const headless_experimental::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<headless_experimental::EnableResult> {
  static std::unique_ptr<headless_experimental::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return headless_experimental::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const headless_experimental::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<headless_experimental::NeedsBeginFramesChangedParams> {
  static std::unique_ptr<headless_experimental::NeedsBeginFramesChangedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return headless_experimental::NeedsBeginFramesChangedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const headless_experimental::NeedsBeginFramesChangedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_HEADLESS_EXPERIMENTAL_H_
