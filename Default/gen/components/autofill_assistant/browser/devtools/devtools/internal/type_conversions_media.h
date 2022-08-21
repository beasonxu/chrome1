// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_MEDIA_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_MEDIA_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_media.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {




template <>
struct FromValue<media::PlayerMessage> {
  static std::unique_ptr<media::PlayerMessage> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::PlayerMessage::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::PlayerMessage& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<media::PlayerProperty> {
  static std::unique_ptr<media::PlayerProperty> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::PlayerProperty::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::PlayerProperty& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<media::PlayerEvent> {
  static std::unique_ptr<media::PlayerEvent> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::PlayerEvent::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::PlayerEvent& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<media::PlayerErrorSourceLocation> {
  static std::unique_ptr<media::PlayerErrorSourceLocation> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::PlayerErrorSourceLocation::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::PlayerErrorSourceLocation& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<media::PlayerError> {
  static std::unique_ptr<media::PlayerError> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::PlayerError::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::PlayerError& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<media::PlayerMessageLevel> {
  static media::PlayerMessageLevel Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return media::PlayerMessageLevel::ERR;
    }
    if (value.GetString() == "error")
      return media::PlayerMessageLevel::ERR;
    if (value.GetString() == "warning")
      return media::PlayerMessageLevel::WARNING;
    if (value.GetString() == "info")
      return media::PlayerMessageLevel::INFO;
    if (value.GetString() == "debug")
      return media::PlayerMessageLevel::DEBUG;
    errors->AddError("invalid enum value");
    return media::PlayerMessageLevel::ERR;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::PlayerMessageLevel& value, T*) {
  switch (value) {
    case media::PlayerMessageLevel::ERR:
      return std::make_unique<base::Value>("error");
    case media::PlayerMessageLevel::WARNING:
      return std::make_unique<base::Value>("warning");
    case media::PlayerMessageLevel::INFO:
      return std::make_unique<base::Value>("info");
    case media::PlayerMessageLevel::DEBUG:
      return std::make_unique<base::Value>("debug");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<media::EnableParams> {
  static std::unique_ptr<media::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<media::EnableResult> {
  static std::unique_ptr<media::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<media::DisableParams> {
  static std::unique_ptr<media::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<media::DisableResult> {
  static std::unique_ptr<media::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<media::PlayerPropertiesChangedParams> {
  static std::unique_ptr<media::PlayerPropertiesChangedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::PlayerPropertiesChangedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::PlayerPropertiesChangedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<media::PlayerEventsAddedParams> {
  static std::unique_ptr<media::PlayerEventsAddedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::PlayerEventsAddedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::PlayerEventsAddedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<media::PlayerMessagesLoggedParams> {
  static std::unique_ptr<media::PlayerMessagesLoggedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::PlayerMessagesLoggedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::PlayerMessagesLoggedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<media::PlayerErrorsRaisedParams> {
  static std::unique_ptr<media::PlayerErrorsRaisedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::PlayerErrorsRaisedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::PlayerErrorsRaisedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<media::PlayersCreatedParams> {
  static std::unique_ptr<media::PlayersCreatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return media::PlayersCreatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const media::PlayersCreatedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_MEDIA_H_
