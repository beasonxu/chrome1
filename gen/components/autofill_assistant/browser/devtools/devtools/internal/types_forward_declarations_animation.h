// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_ANIMATION_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_ANIMATION_H_

#include "base/values.h"

namespace autofill_assistant {

namespace animation {
class Animation;
class AnimationEffect;
class KeyframesRule;
class KeyframeStyle;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class GetCurrentAnimationTimeParams;
class GetCurrentAnimationTimeResult;
class GetPlaybackRateParams;
class GetPlaybackRateResult;
class ReleaseAnimationsParams;
class ReleaseAnimationsResult;
class ResolveAnimationParams;
class ResolveAnimationResult;
class SeekAnimationsParams;
class SeekAnimationsResult;
class SetPausedParams;
class SetPausedResult;
class SetPlaybackRateParams;
class SetPlaybackRateResult;
class SetTimingParams;
class SetTimingResult;
class AnimationCanceledParams;
class AnimationCreatedParams;
class AnimationStartedParams;

enum class AnimationType {
  CSS_TRANSITION,
  CSS_ANIMATION,
  WEB_ANIMATION
};

}  // namespace animation

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_ANIMATION_H_
