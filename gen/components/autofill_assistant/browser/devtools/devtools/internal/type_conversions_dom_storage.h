// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_STORAGE_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_STORAGE_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_dom_storage.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {



template <>
struct FromValue<dom_storage::StorageId> {
  static std::unique_ptr<dom_storage::StorageId> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::StorageId::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::StorageId& value, T*) {
  return value.Serialize();
}



template <>
struct FromValue<dom_storage::ClearParams> {
  static std::unique_ptr<dom_storage::ClearParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::ClearParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::ClearParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::ClearResult> {
  static std::unique_ptr<dom_storage::ClearResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::ClearResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::ClearResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::DisableParams> {
  static std::unique_ptr<dom_storage::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::DisableResult> {
  static std::unique_ptr<dom_storage::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::EnableParams> {
  static std::unique_ptr<dom_storage::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::EnableResult> {
  static std::unique_ptr<dom_storage::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::GetDOMStorageItemsParams> {
  static std::unique_ptr<dom_storage::GetDOMStorageItemsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::GetDOMStorageItemsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::GetDOMStorageItemsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::GetDOMStorageItemsResult> {
  static std::unique_ptr<dom_storage::GetDOMStorageItemsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::GetDOMStorageItemsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::GetDOMStorageItemsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::RemoveDOMStorageItemParams> {
  static std::unique_ptr<dom_storage::RemoveDOMStorageItemParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::RemoveDOMStorageItemParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::RemoveDOMStorageItemParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::RemoveDOMStorageItemResult> {
  static std::unique_ptr<dom_storage::RemoveDOMStorageItemResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::RemoveDOMStorageItemResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::RemoveDOMStorageItemResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::SetDOMStorageItemParams> {
  static std::unique_ptr<dom_storage::SetDOMStorageItemParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::SetDOMStorageItemParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::SetDOMStorageItemParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::SetDOMStorageItemResult> {
  static std::unique_ptr<dom_storage::SetDOMStorageItemResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::SetDOMStorageItemResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::SetDOMStorageItemResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::DomStorageItemAddedParams> {
  static std::unique_ptr<dom_storage::DomStorageItemAddedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::DomStorageItemAddedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::DomStorageItemAddedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::DomStorageItemRemovedParams> {
  static std::unique_ptr<dom_storage::DomStorageItemRemovedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::DomStorageItemRemovedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::DomStorageItemRemovedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::DomStorageItemUpdatedParams> {
  static std::unique_ptr<dom_storage::DomStorageItemUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::DomStorageItemUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::DomStorageItemUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_storage::DomStorageItemsClearedParams> {
  static std::unique_ptr<dom_storage::DomStorageItemsClearedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_storage::DomStorageItemsClearedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_storage::DomStorageItemsClearedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_STORAGE_H_
