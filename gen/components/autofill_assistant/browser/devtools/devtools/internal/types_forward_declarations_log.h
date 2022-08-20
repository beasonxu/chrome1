// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_LOG_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_LOG_H_

#include "base/values.h"

namespace autofill_assistant {

namespace log {
class LogEntry;
class ViolationSetting;
class ClearParams;
class ClearResult;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class StartViolationsReportParams;
class StartViolationsReportResult;
class StopViolationsReportParams;
class StopViolationsReportResult;
class EntryAddedParams;

enum class LogEntrySource {
  XML,
  JAVASCRIPT,
  NETWORK,
  STORAGE,
  APPCACHE,
  RENDERING,
  SECURITY,
  DEPRECATION,
  WORKER,
  VIOLATION,
  INTERVENTION,
  RECOMMENDATION,
  OTHER
};

enum class LogEntryLevel {
  VERBOSE,
  INFO,
  WARNING,
  ERR
};

enum class LogEntryCategory {
  CORS
};

enum class ViolationSettingName {
  LONG_TASK,
  LONG_LAYOUT,
  BLOCKED_EVENT,
  BLOCKED_PARSER,
  DISCOURAGEDAPI_USE,
  HANDLER,
  RECURRING_HANDLER
};

}  // namespace log

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_LOG_H_
