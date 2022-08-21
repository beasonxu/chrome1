// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_DEBUGGER_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_DEBUGGER_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_dom_debugger.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {

template <>
struct FromValue<dom_debugger::DOMBreakpointType> {
  static dom_debugger::DOMBreakpointType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return dom_debugger::DOMBreakpointType::SUBTREE_MODIFIED;
    }
    if (value.GetString() == "subtree-modified")
      return dom_debugger::DOMBreakpointType::SUBTREE_MODIFIED;
    if (value.GetString() == "attribute-modified")
      return dom_debugger::DOMBreakpointType::ATTRIBUTE_MODIFIED;
    if (value.GetString() == "node-removed")
      return dom_debugger::DOMBreakpointType::NODE_REMOVED;
    errors->AddError("invalid enum value");
    return dom_debugger::DOMBreakpointType::SUBTREE_MODIFIED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::DOMBreakpointType& value, T*) {
  switch (value) {
    case dom_debugger::DOMBreakpointType::SUBTREE_MODIFIED:
      return std::make_unique<base::Value>("subtree-modified");
    case dom_debugger::DOMBreakpointType::ATTRIBUTE_MODIFIED:
      return std::make_unique<base::Value>("attribute-modified");
    case dom_debugger::DOMBreakpointType::NODE_REMOVED:
      return std::make_unique<base::Value>("node-removed");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<dom_debugger::CSPViolationType> {
  static dom_debugger::CSPViolationType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return dom_debugger::CSPViolationType::TRUSTEDTYPE_SINK_VIOLATION;
    }
    if (value.GetString() == "trustedtype-sink-violation")
      return dom_debugger::CSPViolationType::TRUSTEDTYPE_SINK_VIOLATION;
    if (value.GetString() == "trustedtype-policy-violation")
      return dom_debugger::CSPViolationType::TRUSTEDTYPE_POLICY_VIOLATION;
    errors->AddError("invalid enum value");
    return dom_debugger::CSPViolationType::TRUSTEDTYPE_SINK_VIOLATION;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::CSPViolationType& value, T*) {
  switch (value) {
    case dom_debugger::CSPViolationType::TRUSTEDTYPE_SINK_VIOLATION:
      return std::make_unique<base::Value>("trustedtype-sink-violation");
    case dom_debugger::CSPViolationType::TRUSTEDTYPE_POLICY_VIOLATION:
      return std::make_unique<base::Value>("trustedtype-policy-violation");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<dom_debugger::EventListener> {
  static std::unique_ptr<dom_debugger::EventListener> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::EventListener::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::EventListener& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::GetEventListenersParams> {
  static std::unique_ptr<dom_debugger::GetEventListenersParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::GetEventListenersParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::GetEventListenersParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::GetEventListenersResult> {
  static std::unique_ptr<dom_debugger::GetEventListenersResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::GetEventListenersResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::GetEventListenersResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::RemoveDOMBreakpointParams> {
  static std::unique_ptr<dom_debugger::RemoveDOMBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::RemoveDOMBreakpointParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::RemoveDOMBreakpointParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::RemoveDOMBreakpointResult> {
  static std::unique_ptr<dom_debugger::RemoveDOMBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::RemoveDOMBreakpointResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::RemoveDOMBreakpointResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::RemoveEventListenerBreakpointParams> {
  static std::unique_ptr<dom_debugger::RemoveEventListenerBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::RemoveEventListenerBreakpointParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::RemoveEventListenerBreakpointParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::RemoveEventListenerBreakpointResult> {
  static std::unique_ptr<dom_debugger::RemoveEventListenerBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::RemoveEventListenerBreakpointResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::RemoveEventListenerBreakpointResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::RemoveInstrumentationBreakpointParams> {
  static std::unique_ptr<dom_debugger::RemoveInstrumentationBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::RemoveInstrumentationBreakpointParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::RemoveInstrumentationBreakpointParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::RemoveInstrumentationBreakpointResult> {
  static std::unique_ptr<dom_debugger::RemoveInstrumentationBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::RemoveInstrumentationBreakpointResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::RemoveInstrumentationBreakpointResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::RemoveXHRBreakpointParams> {
  static std::unique_ptr<dom_debugger::RemoveXHRBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::RemoveXHRBreakpointParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::RemoveXHRBreakpointParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::RemoveXHRBreakpointResult> {
  static std::unique_ptr<dom_debugger::RemoveXHRBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::RemoveXHRBreakpointResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::RemoveXHRBreakpointResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::SetBreakOnCSPViolationParams> {
  static std::unique_ptr<dom_debugger::SetBreakOnCSPViolationParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::SetBreakOnCSPViolationParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::SetBreakOnCSPViolationParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::SetBreakOnCSPViolationResult> {
  static std::unique_ptr<dom_debugger::SetBreakOnCSPViolationResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::SetBreakOnCSPViolationResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::SetBreakOnCSPViolationResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::SetDOMBreakpointParams> {
  static std::unique_ptr<dom_debugger::SetDOMBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::SetDOMBreakpointParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::SetDOMBreakpointParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::SetDOMBreakpointResult> {
  static std::unique_ptr<dom_debugger::SetDOMBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::SetDOMBreakpointResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::SetDOMBreakpointResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::SetEventListenerBreakpointParams> {
  static std::unique_ptr<dom_debugger::SetEventListenerBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::SetEventListenerBreakpointParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::SetEventListenerBreakpointParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::SetEventListenerBreakpointResult> {
  static std::unique_ptr<dom_debugger::SetEventListenerBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::SetEventListenerBreakpointResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::SetEventListenerBreakpointResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::SetInstrumentationBreakpointParams> {
  static std::unique_ptr<dom_debugger::SetInstrumentationBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::SetInstrumentationBreakpointParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::SetInstrumentationBreakpointParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::SetInstrumentationBreakpointResult> {
  static std::unique_ptr<dom_debugger::SetInstrumentationBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::SetInstrumentationBreakpointResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::SetInstrumentationBreakpointResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::SetXHRBreakpointParams> {
  static std::unique_ptr<dom_debugger::SetXHRBreakpointParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::SetXHRBreakpointParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::SetXHRBreakpointParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<dom_debugger::SetXHRBreakpointResult> {
  static std::unique_ptr<dom_debugger::SetXHRBreakpointResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return dom_debugger::SetXHRBreakpointResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const dom_debugger::SetXHRBreakpointResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_DOM_DEBUGGER_H_
