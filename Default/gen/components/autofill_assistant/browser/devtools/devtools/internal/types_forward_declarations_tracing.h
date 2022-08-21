// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_TRACING_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_TRACING_H_

#include "base/values.h"

namespace autofill_assistant {

namespace tracing {
using MemoryDumpConfig = base::Value;
class TraceConfig;
class EndParams;
class EndResult;
class GetCategoriesParams;
class GetCategoriesResult;
class RecordClockSyncMarkerParams;
class RecordClockSyncMarkerResult;
class RequestMemoryDumpParams;
class RequestMemoryDumpResult;
class StartParams;
class StartResult;
class BufferUsageParams;
class DataCollectedParams;
class TracingCompleteParams;

enum class StreamFormat {
  JSON,
  PROTO
};

enum class StreamCompression {
  NONE,
  GZIP
};

enum class MemoryDumpLevelOfDetail {
  BACKGROUND,
  LIGHT,
  DETAILED
};

enum class TracingBackend {
  AUTO,
  CHROME,
  SYSTEM
};

enum class TraceConfigRecordMode {
  RECORD_UNTIL_FULL,
  RECORD_CONTINUOUSLY,
  RECORD_AS_MUCH_AS_POSSIBLE,
  ECHO_TO_CONSOLE
};

enum class StartTransferMode {
  REPORT_EVENTS,
  RETURN_AS_STREAM
};

}  // namespace tracing

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_TRACING_H_
