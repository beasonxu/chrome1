// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_SERVICE_WORKER_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_SERVICE_WORKER_H_

#include "base/values.h"

namespace autofill_assistant {

namespace service_worker {
class ServiceWorkerRegistration;
class ServiceWorkerVersion;
class ServiceWorkerErrorMessage;
class DeliverPushMessageParams;
class DeliverPushMessageResult;
class DisableParams;
class DisableResult;
class DispatchSyncEventParams;
class DispatchSyncEventResult;
class DispatchPeriodicSyncEventParams;
class DispatchPeriodicSyncEventResult;
class EnableParams;
class EnableResult;
class InspectWorkerParams;
class InspectWorkerResult;
class SetForceUpdateOnPageLoadParams;
class SetForceUpdateOnPageLoadResult;
class SkipWaitingParams;
class SkipWaitingResult;
class StartWorkerParams;
class StartWorkerResult;
class StopAllWorkersParams;
class StopAllWorkersResult;
class StopWorkerParams;
class StopWorkerResult;
class UnregisterParams;
class UnregisterResult;
class UpdateRegistrationParams;
class UpdateRegistrationResult;
class WorkerErrorReportedParams;
class WorkerRegistrationUpdatedParams;
class WorkerVersionUpdatedParams;

enum class ServiceWorkerVersionRunningStatus {
  STOPPED,
  STARTING,
  RUNNING,
  STOPPING
};

enum class ServiceWorkerVersionStatus {
  NEW,
  INSTALLING,
  INSTALLED,
  ACTIVATING,
  ACTIVATED,
  REDUNDANT
};

}  // namespace service_worker

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_SERVICE_WORKER_H_
