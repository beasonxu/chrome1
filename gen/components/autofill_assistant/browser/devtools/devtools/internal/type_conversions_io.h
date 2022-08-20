// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_IO_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_IO_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_io.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {



template <>
struct FromValue<io::CloseParams> {
  static std::unique_ptr<io::CloseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return io::CloseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const io::CloseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<io::CloseResult> {
  static std::unique_ptr<io::CloseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return io::CloseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const io::CloseResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<io::ReadParams> {
  static std::unique_ptr<io::ReadParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return io::ReadParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const io::ReadParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<io::ReadResult> {
  static std::unique_ptr<io::ReadResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return io::ReadResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const io::ReadResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<io::ResolveBlobParams> {
  static std::unique_ptr<io::ResolveBlobParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return io::ResolveBlobParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const io::ResolveBlobParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<io::ResolveBlobResult> {
  static std::unique_ptr<io::ResolveBlobResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return io::ResolveBlobResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const io::ResolveBlobResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_IO_H_
