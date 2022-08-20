// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DATABASE_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DATABASE_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_database.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {



template <>
struct FromValue<database::Database> {
  static std::unique_ptr<database::Database> Parse(const base::Value& value, ErrorReporter* errors) {
    return database::Database::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const database::Database& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<database::Error> {
  static std::unique_ptr<database::Error> Parse(const base::Value& value, ErrorReporter* errors) {
    return database::Error::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const database::Error& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<database::DisableParams> {
  static std::unique_ptr<database::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return database::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const database::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<database::DisableResult> {
  static std::unique_ptr<database::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return database::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const database::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<database::EnableParams> {
  static std::unique_ptr<database::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return database::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const database::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<database::EnableResult> {
  static std::unique_ptr<database::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return database::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const database::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<database::ExecuteSQLParams> {
  static std::unique_ptr<database::ExecuteSQLParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return database::ExecuteSQLParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const database::ExecuteSQLParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<database::ExecuteSQLResult> {
  static std::unique_ptr<database::ExecuteSQLResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return database::ExecuteSQLResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const database::ExecuteSQLResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<database::GetDatabaseTableNamesParams> {
  static std::unique_ptr<database::GetDatabaseTableNamesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return database::GetDatabaseTableNamesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const database::GetDatabaseTableNamesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<database::GetDatabaseTableNamesResult> {
  static std::unique_ptr<database::GetDatabaseTableNamesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return database::GetDatabaseTableNamesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const database::GetDatabaseTableNamesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<database::AddDatabaseParams> {
  static std::unique_ptr<database::AddDatabaseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return database::AddDatabaseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const database::AddDatabaseParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DATABASE_H_
