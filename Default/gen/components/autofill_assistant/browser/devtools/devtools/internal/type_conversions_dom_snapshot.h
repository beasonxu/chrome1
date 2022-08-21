// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_SNAPSHOT_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_SNAPSHOT_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_dom_snapshot.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<dom_snapshot::DOMNode> {
  static std::unique_ptr<dom_snapshot::DOMNode> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::DOMNode::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::DOMNode& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::InlineTextBox> {
  static std::unique_ptr<dom_snapshot::InlineTextBox> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::InlineTextBox::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::InlineTextBox& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::LayoutTreeNode> {
  static std::unique_ptr<dom_snapshot::LayoutTreeNode> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::LayoutTreeNode::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::LayoutTreeNode& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::ComputedStyle> {
  static std::unique_ptr<dom_snapshot::ComputedStyle> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::ComputedStyle::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::ComputedStyle& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::NameValue> {
  static std::unique_ptr<dom_snapshot::NameValue> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::NameValue::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::NameValue& value, T*) {
  return value.Serialize();
}




template <>
struct FromValue<dom_snapshot::RareStringData> {
  static std::unique_ptr<dom_snapshot::RareStringData> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::RareStringData::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::RareStringData& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::RareBooleanData> {
  static std::unique_ptr<dom_snapshot::RareBooleanData> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::RareBooleanData::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::RareBooleanData& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::RareIntegerData> {
  static std::unique_ptr<dom_snapshot::RareIntegerData> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::RareIntegerData::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::RareIntegerData& value, T*) {
  return value.Serialize();
}



template <>
struct FromValue<dom_snapshot::DocumentSnapshot> {
  static std::unique_ptr<dom_snapshot::DocumentSnapshot> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::DocumentSnapshot::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::DocumentSnapshot& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::NodeTreeSnapshot> {
  static std::unique_ptr<dom_snapshot::NodeTreeSnapshot> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::NodeTreeSnapshot::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::NodeTreeSnapshot& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::LayoutTreeSnapshot> {
  static std::unique_ptr<dom_snapshot::LayoutTreeSnapshot> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::LayoutTreeSnapshot::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::LayoutTreeSnapshot& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::TextBoxSnapshot> {
  static std::unique_ptr<dom_snapshot::TextBoxSnapshot> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::TextBoxSnapshot::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::TextBoxSnapshot& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::DisableParams> {
  static std::unique_ptr<dom_snapshot::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::DisableResult> {
  static std::unique_ptr<dom_snapshot::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::EnableParams> {
  static std::unique_ptr<dom_snapshot::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::EnableResult> {
  static std::unique_ptr<dom_snapshot::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::GetSnapshotParams> {
  static std::unique_ptr<dom_snapshot::GetSnapshotParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::GetSnapshotParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::GetSnapshotParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::GetSnapshotResult> {
  static std::unique_ptr<dom_snapshot::GetSnapshotResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::GetSnapshotResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::GetSnapshotResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::CaptureSnapshotParams> {
  static std::unique_ptr<dom_snapshot::CaptureSnapshotParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::CaptureSnapshotParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::CaptureSnapshotParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_snapshot::CaptureSnapshotResult> {
  static std::unique_ptr<dom_snapshot::CaptureSnapshotResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_snapshot::CaptureSnapshotResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_snapshot::CaptureSnapshotResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_SNAPSHOT_H_
