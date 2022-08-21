// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_INDEXEDDB_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_INDEXEDDB_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_indexeddb.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<indexeddb::DatabaseWithObjectStores> {
  static std::unique_ptr<indexeddb::DatabaseWithObjectStores> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::DatabaseWithObjectStores::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::DatabaseWithObjectStores& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::ObjectStore> {
  static std::unique_ptr<indexeddb::ObjectStore> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::ObjectStore::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::ObjectStore& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::ObjectStoreIndex> {
  static std::unique_ptr<indexeddb::ObjectStoreIndex> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::ObjectStoreIndex::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::ObjectStoreIndex& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::Key> {
  static std::unique_ptr<indexeddb::Key> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::Key::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::Key& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::KeyRange> {
  static std::unique_ptr<indexeddb::KeyRange> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::KeyRange::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::KeyRange& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::DataEntry> {
  static std::unique_ptr<indexeddb::DataEntry> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::DataEntry::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::DataEntry& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::KeyPath> {
  static std::unique_ptr<indexeddb::KeyPath> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::KeyPath::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::KeyPath& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<indexeddb::KeyType> {
  static indexeddb::KeyType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return indexeddb::KeyType::NUMBER;
    }
    if (value.GetString() == "number")
      return indexeddb::KeyType::NUMBER;
    if (value.GetString() == "string")
      return indexeddb::KeyType::STRING;
    if (value.GetString() == "date")
      return indexeddb::KeyType::DATE;
    if (value.GetString() == "array")
      return indexeddb::KeyType::ARRAY;
    errors->AddError("invalid enum value");
    return indexeddb::KeyType::NUMBER;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::KeyType& value, T*) {
  switch (value) {
    case indexeddb::KeyType::NUMBER:
      return std::make_unique<base::Value>("number");
    case indexeddb::KeyType::STRING:
      return std::make_unique<base::Value>("string");
    case indexeddb::KeyType::DATE:
      return std::make_unique<base::Value>("date");
    case indexeddb::KeyType::ARRAY:
      return std::make_unique<base::Value>("array");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<indexeddb::KeyPathType> {
  static indexeddb::KeyPathType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return indexeddb::KeyPathType::NONE;
    }
    if (value.GetString() == "null")
      return indexeddb::KeyPathType::NONE;
    if (value.GetString() == "string")
      return indexeddb::KeyPathType::STRING;
    if (value.GetString() == "array")
      return indexeddb::KeyPathType::ARRAY;
    errors->AddError("invalid enum value");
    return indexeddb::KeyPathType::NONE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::KeyPathType& value, T*) {
  switch (value) {
    case indexeddb::KeyPathType::NONE:
      return std::make_unique<base::Value>("null");
    case indexeddb::KeyPathType::STRING:
      return std::make_unique<base::Value>("string");
    case indexeddb::KeyPathType::ARRAY:
      return std::make_unique<base::Value>("array");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<indexeddb::ClearObjectStoreParams> {
  static std::unique_ptr<indexeddb::ClearObjectStoreParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::ClearObjectStoreParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::ClearObjectStoreParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::ClearObjectStoreResult> {
  static std::unique_ptr<indexeddb::ClearObjectStoreResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::ClearObjectStoreResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::ClearObjectStoreResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::DeleteDatabaseParams> {
  static std::unique_ptr<indexeddb::DeleteDatabaseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::DeleteDatabaseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::DeleteDatabaseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::DeleteDatabaseResult> {
  static std::unique_ptr<indexeddb::DeleteDatabaseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::DeleteDatabaseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::DeleteDatabaseResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::DeleteObjectStoreEntriesParams> {
  static std::unique_ptr<indexeddb::DeleteObjectStoreEntriesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::DeleteObjectStoreEntriesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::DeleteObjectStoreEntriesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::DeleteObjectStoreEntriesResult> {
  static std::unique_ptr<indexeddb::DeleteObjectStoreEntriesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::DeleteObjectStoreEntriesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::DeleteObjectStoreEntriesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::DisableParams> {
  static std::unique_ptr<indexeddb::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::DisableResult> {
  static std::unique_ptr<indexeddb::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::EnableParams> {
  static std::unique_ptr<indexeddb::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::EnableResult> {
  static std::unique_ptr<indexeddb::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::RequestDataParams> {
  static std::unique_ptr<indexeddb::RequestDataParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::RequestDataParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::RequestDataParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::RequestDataResult> {
  static std::unique_ptr<indexeddb::RequestDataResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::RequestDataResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::RequestDataResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::GetMetadataParams> {
  static std::unique_ptr<indexeddb::GetMetadataParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::GetMetadataParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::GetMetadataParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::GetMetadataResult> {
  static std::unique_ptr<indexeddb::GetMetadataResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::GetMetadataResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::GetMetadataResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::RequestDatabaseParams> {
  static std::unique_ptr<indexeddb::RequestDatabaseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::RequestDatabaseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::RequestDatabaseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::RequestDatabaseResult> {
  static std::unique_ptr<indexeddb::RequestDatabaseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::RequestDatabaseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::RequestDatabaseResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::RequestDatabaseNamesParams> {
  static std::unique_ptr<indexeddb::RequestDatabaseNamesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::RequestDatabaseNamesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::RequestDatabaseNamesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<indexeddb::RequestDatabaseNamesResult> {
  static std::unique_ptr<indexeddb::RequestDatabaseNamesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return indexeddb::RequestDatabaseNamesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const indexeddb::RequestDatabaseNamesResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_INDEXEDDB_H_
