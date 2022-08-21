// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_ANIMATION_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_ANIMATION_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_animation.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<animation::Animation> {
  static std::unique_ptr<animation::Animation> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::Animation::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::Animation& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::AnimationEffect> {
  static std::unique_ptr<animation::AnimationEffect> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::AnimationEffect::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::AnimationEffect& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::KeyframesRule> {
  static std::unique_ptr<animation::KeyframesRule> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::KeyframesRule::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::KeyframesRule& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::KeyframeStyle> {
  static std::unique_ptr<animation::KeyframeStyle> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::KeyframeStyle::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::KeyframeStyle& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<animation::AnimationType> {
  static animation::AnimationType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return animation::AnimationType::CSS_TRANSITION;
    }
    if (value.GetString() == "CSSTransition")
      return animation::AnimationType::CSS_TRANSITION;
    if (value.GetString() == "CSSAnimation")
      return animation::AnimationType::CSS_ANIMATION;
    if (value.GetString() == "WebAnimation")
      return animation::AnimationType::WEB_ANIMATION;
    errors->AddError("invalid enum value");
    return animation::AnimationType::CSS_TRANSITION;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::AnimationType& value, T*) {
  switch (value) {
    case animation::AnimationType::CSS_TRANSITION:
      return std::make_unique<base::Value>("CSSTransition");
    case animation::AnimationType::CSS_ANIMATION:
      return std::make_unique<base::Value>("CSSAnimation");
    case animation::AnimationType::WEB_ANIMATION:
      return std::make_unique<base::Value>("WebAnimation");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<animation::DisableParams> {
  static std::unique_ptr<animation::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::DisableResult> {
  static std::unique_ptr<animation::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::EnableParams> {
  static std::unique_ptr<animation::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::EnableResult> {
  static std::unique_ptr<animation::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::GetCurrentAnimationTimeParams> {
  static std::unique_ptr<animation::GetCurrentAnimationTimeParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::GetCurrentAnimationTimeParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::GetCurrentAnimationTimeParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::GetCurrentAnimationTimeResult> {
  static std::unique_ptr<animation::GetCurrentAnimationTimeResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::GetCurrentAnimationTimeResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::GetCurrentAnimationTimeResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::GetPlaybackRateParams> {
  static std::unique_ptr<animation::GetPlaybackRateParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::GetPlaybackRateParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::GetPlaybackRateParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::GetPlaybackRateResult> {
  static std::unique_ptr<animation::GetPlaybackRateResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::GetPlaybackRateResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::GetPlaybackRateResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::ReleaseAnimationsParams> {
  static std::unique_ptr<animation::ReleaseAnimationsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::ReleaseAnimationsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::ReleaseAnimationsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::ReleaseAnimationsResult> {
  static std::unique_ptr<animation::ReleaseAnimationsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::ReleaseAnimationsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::ReleaseAnimationsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::ResolveAnimationParams> {
  static std::unique_ptr<animation::ResolveAnimationParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::ResolveAnimationParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::ResolveAnimationParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::ResolveAnimationResult> {
  static std::unique_ptr<animation::ResolveAnimationResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::ResolveAnimationResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::ResolveAnimationResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::SeekAnimationsParams> {
  static std::unique_ptr<animation::SeekAnimationsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::SeekAnimationsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::SeekAnimationsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::SeekAnimationsResult> {
  static std::unique_ptr<animation::SeekAnimationsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::SeekAnimationsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::SeekAnimationsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::SetPausedParams> {
  static std::unique_ptr<animation::SetPausedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::SetPausedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::SetPausedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::SetPausedResult> {
  static std::unique_ptr<animation::SetPausedResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::SetPausedResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::SetPausedResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::SetPlaybackRateParams> {
  static std::unique_ptr<animation::SetPlaybackRateParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::SetPlaybackRateParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::SetPlaybackRateParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::SetPlaybackRateResult> {
  static std::unique_ptr<animation::SetPlaybackRateResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::SetPlaybackRateResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::SetPlaybackRateResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::SetTimingParams> {
  static std::unique_ptr<animation::SetTimingParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::SetTimingParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::SetTimingParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::SetTimingResult> {
  static std::unique_ptr<animation::SetTimingResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::SetTimingResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::SetTimingResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::AnimationCanceledParams> {
  static std::unique_ptr<animation::AnimationCanceledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::AnimationCanceledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::AnimationCanceledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::AnimationCreatedParams> {
  static std::unique_ptr<animation::AnimationCreatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::AnimationCreatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::AnimationCreatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<animation::AnimationStartedParams> {
  static std::unique_ptr<animation::AnimationStartedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return animation::AnimationStartedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const animation::AnimationStartedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_ANIMATION_H_
