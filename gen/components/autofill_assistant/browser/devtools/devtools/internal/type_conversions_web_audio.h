// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_WEB_AUDIO_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_WEB_AUDIO_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_web_audio.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<web_audio::ContextType> {
  static web_audio::ContextType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return web_audio::ContextType::REALTIME;
    }
    if (value.GetString() == "realtime")
      return web_audio::ContextType::REALTIME;
    if (value.GetString() == "offline")
      return web_audio::ContextType::OFFLINE;
    errors->AddError("invalid enum value");
    return web_audio::ContextType::REALTIME;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::ContextType& value, T*) {
  switch (value) {
    case web_audio::ContextType::REALTIME:
      return std::make_unique<base::Value>("realtime");
    case web_audio::ContextType::OFFLINE:
      return std::make_unique<base::Value>("offline");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<web_audio::ContextState> {
  static web_audio::ContextState Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return web_audio::ContextState::SUSPENDED;
    }
    if (value.GetString() == "suspended")
      return web_audio::ContextState::SUSPENDED;
    if (value.GetString() == "running")
      return web_audio::ContextState::RUNNING;
    if (value.GetString() == "closed")
      return web_audio::ContextState::CLOSED;
    errors->AddError("invalid enum value");
    return web_audio::ContextState::SUSPENDED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::ContextState& value, T*) {
  switch (value) {
    case web_audio::ContextState::SUSPENDED:
      return std::make_unique<base::Value>("suspended");
    case web_audio::ContextState::RUNNING:
      return std::make_unique<base::Value>("running");
    case web_audio::ContextState::CLOSED:
      return std::make_unique<base::Value>("closed");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<web_audio::ChannelCountMode> {
  static web_audio::ChannelCountMode Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return web_audio::ChannelCountMode::CLAMPED_MAX;
    }
    if (value.GetString() == "clamped-max")
      return web_audio::ChannelCountMode::CLAMPED_MAX;
    if (value.GetString() == "explicit")
      return web_audio::ChannelCountMode::EXPLICIT;
    if (value.GetString() == "max")
      return web_audio::ChannelCountMode::MAX;
    errors->AddError("invalid enum value");
    return web_audio::ChannelCountMode::CLAMPED_MAX;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::ChannelCountMode& value, T*) {
  switch (value) {
    case web_audio::ChannelCountMode::CLAMPED_MAX:
      return std::make_unique<base::Value>("clamped-max");
    case web_audio::ChannelCountMode::EXPLICIT:
      return std::make_unique<base::Value>("explicit");
    case web_audio::ChannelCountMode::MAX:
      return std::make_unique<base::Value>("max");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<web_audio::ChannelInterpretation> {
  static web_audio::ChannelInterpretation Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return web_audio::ChannelInterpretation::DISCRETE;
    }
    if (value.GetString() == "discrete")
      return web_audio::ChannelInterpretation::DISCRETE;
    if (value.GetString() == "speakers")
      return web_audio::ChannelInterpretation::SPEAKERS;
    errors->AddError("invalid enum value");
    return web_audio::ChannelInterpretation::DISCRETE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::ChannelInterpretation& value, T*) {
  switch (value) {
    case web_audio::ChannelInterpretation::DISCRETE:
      return std::make_unique<base::Value>("discrete");
    case web_audio::ChannelInterpretation::SPEAKERS:
      return std::make_unique<base::Value>("speakers");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<web_audio::AutomationRate> {
  static web_audio::AutomationRate Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return web_audio::AutomationRate::A_RATE;
    }
    if (value.GetString() == "a-rate")
      return web_audio::AutomationRate::A_RATE;
    if (value.GetString() == "k-rate")
      return web_audio::AutomationRate::K_RATE;
    errors->AddError("invalid enum value");
    return web_audio::AutomationRate::A_RATE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::AutomationRate& value, T*) {
  switch (value) {
    case web_audio::AutomationRate::A_RATE:
      return std::make_unique<base::Value>("a-rate");
    case web_audio::AutomationRate::K_RATE:
      return std::make_unique<base::Value>("k-rate");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<web_audio::ContextRealtimeData> {
  static std::unique_ptr<web_audio::ContextRealtimeData> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::ContextRealtimeData::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::ContextRealtimeData& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::BaseAudioContext> {
  static std::unique_ptr<web_audio::BaseAudioContext> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::BaseAudioContext::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::BaseAudioContext& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::AudioListener> {
  static std::unique_ptr<web_audio::AudioListener> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::AudioListener::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::AudioListener& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::AudioNode> {
  static std::unique_ptr<web_audio::AudioNode> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::AudioNode::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::AudioNode& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::AudioParam> {
  static std::unique_ptr<web_audio::AudioParam> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::AudioParam::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::AudioParam& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::EnableParams> {
  static std::unique_ptr<web_audio::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::EnableResult> {
  static std::unique_ptr<web_audio::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::DisableParams> {
  static std::unique_ptr<web_audio::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::DisableResult> {
  static std::unique_ptr<web_audio::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::GetRealtimeDataParams> {
  static std::unique_ptr<web_audio::GetRealtimeDataParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::GetRealtimeDataParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::GetRealtimeDataParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::GetRealtimeDataResult> {
  static std::unique_ptr<web_audio::GetRealtimeDataResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::GetRealtimeDataResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::GetRealtimeDataResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::ContextCreatedParams> {
  static std::unique_ptr<web_audio::ContextCreatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::ContextCreatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::ContextCreatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::ContextWillBeDestroyedParams> {
  static std::unique_ptr<web_audio::ContextWillBeDestroyedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::ContextWillBeDestroyedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::ContextWillBeDestroyedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::ContextChangedParams> {
  static std::unique_ptr<web_audio::ContextChangedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::ContextChangedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::ContextChangedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::AudioListenerCreatedParams> {
  static std::unique_ptr<web_audio::AudioListenerCreatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::AudioListenerCreatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::AudioListenerCreatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::AudioListenerWillBeDestroyedParams> {
  static std::unique_ptr<web_audio::AudioListenerWillBeDestroyedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::AudioListenerWillBeDestroyedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::AudioListenerWillBeDestroyedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::AudioNodeCreatedParams> {
  static std::unique_ptr<web_audio::AudioNodeCreatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::AudioNodeCreatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::AudioNodeCreatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::AudioNodeWillBeDestroyedParams> {
  static std::unique_ptr<web_audio::AudioNodeWillBeDestroyedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::AudioNodeWillBeDestroyedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::AudioNodeWillBeDestroyedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::AudioParamCreatedParams> {
  static std::unique_ptr<web_audio::AudioParamCreatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::AudioParamCreatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::AudioParamCreatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::AudioParamWillBeDestroyedParams> {
  static std::unique_ptr<web_audio::AudioParamWillBeDestroyedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::AudioParamWillBeDestroyedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::AudioParamWillBeDestroyedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::NodesConnectedParams> {
  static std::unique_ptr<web_audio::NodesConnectedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::NodesConnectedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::NodesConnectedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::NodesDisconnectedParams> {
  static std::unique_ptr<web_audio::NodesDisconnectedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::NodesDisconnectedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::NodesDisconnectedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::NodeParamConnectedParams> {
  static std::unique_ptr<web_audio::NodeParamConnectedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::NodeParamConnectedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::NodeParamConnectedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_audio::NodeParamDisconnectedParams> {
  static std::unique_ptr<web_audio::NodeParamDisconnectedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_audio::NodeParamDisconnectedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_audio::NodeParamDisconnectedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_WEB_AUDIO_H_
