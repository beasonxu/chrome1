// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DOM_DEBUGGER_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DOM_DEBUGGER_H_

#include "base/values.h"

namespace autofill_assistant {

namespace dom_debugger {
class EventListener;
class GetEventListenersParams;
class GetEventListenersResult;
class RemoveDOMBreakpointParams;
class RemoveDOMBreakpointResult;
class RemoveEventListenerBreakpointParams;
class RemoveEventListenerBreakpointResult;
class RemoveInstrumentationBreakpointParams;
class RemoveInstrumentationBreakpointResult;
class RemoveXHRBreakpointParams;
class RemoveXHRBreakpointResult;
class SetBreakOnCSPViolationParams;
class SetBreakOnCSPViolationResult;
class SetDOMBreakpointParams;
class SetDOMBreakpointResult;
class SetEventListenerBreakpointParams;
class SetEventListenerBreakpointResult;
class SetInstrumentationBreakpointParams;
class SetInstrumentationBreakpointResult;
class SetXHRBreakpointParams;
class SetXHRBreakpointResult;

enum class DOMBreakpointType {
  SUBTREE_MODIFIED,
  ATTRIBUTE_MODIFIED,
  NODE_REMOVED
};

enum class CSPViolationType {
  TRUSTEDTYPE_SINK_VIOLATION,
  TRUSTEDTYPE_POLICY_VIOLATION
};

}  // namespace dom_debugger

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_DOM_DEBUGGER_H_
