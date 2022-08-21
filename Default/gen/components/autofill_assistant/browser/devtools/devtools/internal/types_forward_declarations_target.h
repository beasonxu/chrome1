// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_TARGET_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_TARGET_H_

#include "base/values.h"

namespace autofill_assistant {

namespace target {
class TargetInfo;
class FilterEntry;
class RemoteLocation;
class ActivateTargetParams;
class ActivateTargetResult;
class AttachToTargetParams;
class AttachToTargetResult;
class AttachToBrowserTargetParams;
class AttachToBrowserTargetResult;
class CloseTargetParams;
class CloseTargetResult;
class ExposeDevToolsProtocolParams;
class ExposeDevToolsProtocolResult;
class CreateBrowserContextParams;
class CreateBrowserContextResult;
class GetBrowserContextsParams;
class GetBrowserContextsResult;
class CreateTargetParams;
class CreateTargetResult;
class DetachFromTargetParams;
class DetachFromTargetResult;
class DisposeBrowserContextParams;
class DisposeBrowserContextResult;
class GetTargetInfoParams;
class GetTargetInfoResult;
class GetTargetsParams;
class GetTargetsResult;
class SendMessageToTargetParams;
class SendMessageToTargetResult;
class SetAutoAttachParams;
class SetAutoAttachResult;
class AutoAttachRelatedParams;
class AutoAttachRelatedResult;
class SetDiscoverTargetsParams;
class SetDiscoverTargetsResult;
class SetRemoteLocationsParams;
class SetRemoteLocationsResult;
class AttachedToTargetParams;
class DetachedFromTargetParams;
class ReceivedMessageFromTargetParams;
class TargetCreatedParams;
class TargetDestroyedParams;
class TargetCrashedParams;
class TargetInfoChangedParams;

}  // namespace target

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_TARGET_H_
