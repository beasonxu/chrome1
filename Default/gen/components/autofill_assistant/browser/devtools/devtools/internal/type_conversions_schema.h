// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SCHEMA_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SCHEMA_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_schema.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<schema::Domain> {
  static std::unique_ptr<schema::Domain> Parse(const base::Value& value, ErrorReporter* errors) {
    return schema::Domain::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const schema::Domain& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<schema::GetDomainsParams> {
  static std::unique_ptr<schema::GetDomainsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return schema::GetDomainsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const schema::GetDomainsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<schema::GetDomainsResult> {
  static std::unique_ptr<schema::GetDomainsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return schema::GetDomainsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const schema::GetDomainsResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SCHEMA_H_
