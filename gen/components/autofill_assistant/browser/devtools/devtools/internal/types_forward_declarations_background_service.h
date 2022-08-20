// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_BACKGROUND_SERVICE_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_BACKGROUND_SERVICE_H_

#include "base/values.h"

namespace autofill_assistant {

namespace background_service {
class EventMetadata;
class BackgroundServiceEvent;
class StartObservingParams;
class StartObservingResult;
class StopObservingParams;
class StopObservingResult;
class SetRecordingParams;
class SetRecordingResult;
class ClearEventsParams;
class ClearEventsResult;
class RecordingStateChangedParams;
class BackgroundServiceEventReceivedParams;

enum class ServiceName {
  BACKGROUND_FETCH,
  BACKGROUND_SYNC,
  PUSH_MESSAGING,
  NOTIFICATIONS,
  PAYMENT_HANDLER,
  PERIODIC_BACKGROUND_SYNC
};

}  // namespace background_service

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_BACKGROUND_SERVICE_H_
