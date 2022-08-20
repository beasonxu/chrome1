// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_PROFILER_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_PROFILER_H_

#include "base/values.h"

namespace autofill_assistant {

namespace profiler {
class ProfileNode;
class Profile;
class PositionTickInfo;
class CoverageRange;
class FunctionCoverage;
class ScriptCoverage;
class TypeObject;
class TypeProfileEntry;
class ScriptTypeProfile;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class GetBestEffortCoverageParams;
class GetBestEffortCoverageResult;
class SetSamplingIntervalParams;
class SetSamplingIntervalResult;
class StartParams;
class StartResult;
class StartPreciseCoverageParams;
class StartPreciseCoverageResult;
class StartTypeProfileParams;
class StartTypeProfileResult;
class StopParams;
class StopResult;
class StopPreciseCoverageParams;
class StopPreciseCoverageResult;
class StopTypeProfileParams;
class StopTypeProfileResult;
class TakePreciseCoverageParams;
class TakePreciseCoverageResult;
class TakeTypeProfileParams;
class TakeTypeProfileResult;
class ConsoleProfileFinishedParams;
class ConsoleProfileStartedParams;
class PreciseCoverageDeltaUpdateParams;

}  // namespace profiler

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_PROFILER_H_
