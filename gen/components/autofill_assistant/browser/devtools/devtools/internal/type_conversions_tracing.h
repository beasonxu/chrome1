// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_TRACING_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_TRACING_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_tracing.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {



template <>
struct FromValue<tracing::TraceConfig> {
  static std::unique_ptr<tracing::TraceConfig> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::TraceConfig::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::TraceConfig& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<tracing::StreamFormat> {
  static tracing::StreamFormat Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return tracing::StreamFormat::JSON;
    }
    if (value.GetString() == "json")
      return tracing::StreamFormat::JSON;
    if (value.GetString() == "proto")
      return tracing::StreamFormat::PROTO;
    errors->AddError("invalid enum value");
    return tracing::StreamFormat::JSON;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::StreamFormat& value, T*) {
  switch (value) {
    case tracing::StreamFormat::JSON:
      return std::make_unique<base::Value>("json");
    case tracing::StreamFormat::PROTO:
      return std::make_unique<base::Value>("proto");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<tracing::StreamCompression> {
  static tracing::StreamCompression Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return tracing::StreamCompression::NONE;
    }
    if (value.GetString() == "none")
      return tracing::StreamCompression::NONE;
    if (value.GetString() == "gzip")
      return tracing::StreamCompression::GZIP;
    errors->AddError("invalid enum value");
    return tracing::StreamCompression::NONE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::StreamCompression& value, T*) {
  switch (value) {
    case tracing::StreamCompression::NONE:
      return std::make_unique<base::Value>("none");
    case tracing::StreamCompression::GZIP:
      return std::make_unique<base::Value>("gzip");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<tracing::MemoryDumpLevelOfDetail> {
  static tracing::MemoryDumpLevelOfDetail Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return tracing::MemoryDumpLevelOfDetail::BACKGROUND;
    }
    if (value.GetString() == "background")
      return tracing::MemoryDumpLevelOfDetail::BACKGROUND;
    if (value.GetString() == "light")
      return tracing::MemoryDumpLevelOfDetail::LIGHT;
    if (value.GetString() == "detailed")
      return tracing::MemoryDumpLevelOfDetail::DETAILED;
    errors->AddError("invalid enum value");
    return tracing::MemoryDumpLevelOfDetail::BACKGROUND;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::MemoryDumpLevelOfDetail& value, T*) {
  switch (value) {
    case tracing::MemoryDumpLevelOfDetail::BACKGROUND:
      return std::make_unique<base::Value>("background");
    case tracing::MemoryDumpLevelOfDetail::LIGHT:
      return std::make_unique<base::Value>("light");
    case tracing::MemoryDumpLevelOfDetail::DETAILED:
      return std::make_unique<base::Value>("detailed");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<tracing::TracingBackend> {
  static tracing::TracingBackend Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return tracing::TracingBackend::AUTO;
    }
    if (value.GetString() == "auto")
      return tracing::TracingBackend::AUTO;
    if (value.GetString() == "chrome")
      return tracing::TracingBackend::CHROME;
    if (value.GetString() == "system")
      return tracing::TracingBackend::SYSTEM;
    errors->AddError("invalid enum value");
    return tracing::TracingBackend::AUTO;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::TracingBackend& value, T*) {
  switch (value) {
    case tracing::TracingBackend::AUTO:
      return std::make_unique<base::Value>("auto");
    case tracing::TracingBackend::CHROME:
      return std::make_unique<base::Value>("chrome");
    case tracing::TracingBackend::SYSTEM:
      return std::make_unique<base::Value>("system");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<tracing::TraceConfigRecordMode> {
  static tracing::TraceConfigRecordMode Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return tracing::TraceConfigRecordMode::RECORD_UNTIL_FULL;
    }
    if (value.GetString() == "recordUntilFull")
      return tracing::TraceConfigRecordMode::RECORD_UNTIL_FULL;
    if (value.GetString() == "recordContinuously")
      return tracing::TraceConfigRecordMode::RECORD_CONTINUOUSLY;
    if (value.GetString() == "recordAsMuchAsPossible")
      return tracing::TraceConfigRecordMode::RECORD_AS_MUCH_AS_POSSIBLE;
    if (value.GetString() == "echoToConsole")
      return tracing::TraceConfigRecordMode::ECHO_TO_CONSOLE;
    errors->AddError("invalid enum value");
    return tracing::TraceConfigRecordMode::RECORD_UNTIL_FULL;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::TraceConfigRecordMode& value, T*) {
  switch (value) {
    case tracing::TraceConfigRecordMode::RECORD_UNTIL_FULL:
      return std::make_unique<base::Value>("recordUntilFull");
    case tracing::TraceConfigRecordMode::RECORD_CONTINUOUSLY:
      return std::make_unique<base::Value>("recordContinuously");
    case tracing::TraceConfigRecordMode::RECORD_AS_MUCH_AS_POSSIBLE:
      return std::make_unique<base::Value>("recordAsMuchAsPossible");
    case tracing::TraceConfigRecordMode::ECHO_TO_CONSOLE:
      return std::make_unique<base::Value>("echoToConsole");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<tracing::EndParams> {
  static std::unique_ptr<tracing::EndParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::EndParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::EndParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tracing::EndResult> {
  static std::unique_ptr<tracing::EndResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::EndResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::EndResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tracing::GetCategoriesParams> {
  static std::unique_ptr<tracing::GetCategoriesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::GetCategoriesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::GetCategoriesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tracing::GetCategoriesResult> {
  static std::unique_ptr<tracing::GetCategoriesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::GetCategoriesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::GetCategoriesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tracing::RecordClockSyncMarkerParams> {
  static std::unique_ptr<tracing::RecordClockSyncMarkerParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::RecordClockSyncMarkerParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::RecordClockSyncMarkerParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tracing::RecordClockSyncMarkerResult> {
  static std::unique_ptr<tracing::RecordClockSyncMarkerResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::RecordClockSyncMarkerResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::RecordClockSyncMarkerResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tracing::RequestMemoryDumpParams> {
  static std::unique_ptr<tracing::RequestMemoryDumpParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::RequestMemoryDumpParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::RequestMemoryDumpParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tracing::RequestMemoryDumpResult> {
  static std::unique_ptr<tracing::RequestMemoryDumpResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::RequestMemoryDumpResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::RequestMemoryDumpResult& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<tracing::StartTransferMode> {
  static tracing::StartTransferMode Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return tracing::StartTransferMode::REPORT_EVENTS;
    }
    if (value.GetString() == "ReportEvents")
      return tracing::StartTransferMode::REPORT_EVENTS;
    if (value.GetString() == "ReturnAsStream")
      return tracing::StartTransferMode::RETURN_AS_STREAM;
    errors->AddError("invalid enum value");
    return tracing::StartTransferMode::REPORT_EVENTS;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::StartTransferMode& value, T*) {
  switch (value) {
    case tracing::StartTransferMode::REPORT_EVENTS:
      return std::make_unique<base::Value>("ReportEvents");
    case tracing::StartTransferMode::RETURN_AS_STREAM:
      return std::make_unique<base::Value>("ReturnAsStream");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<tracing::StartParams> {
  static std::unique_ptr<tracing::StartParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::StartParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::StartParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tracing::StartResult> {
  static std::unique_ptr<tracing::StartResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::StartResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::StartResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tracing::BufferUsageParams> {
  static std::unique_ptr<tracing::BufferUsageParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::BufferUsageParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::BufferUsageParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tracing::DataCollectedParams> {
  static std::unique_ptr<tracing::DataCollectedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::DataCollectedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::DataCollectedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<tracing::TracingCompleteParams> {
  static std::unique_ptr<tracing::TracingCompleteParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return tracing::TracingCompleteParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const tracing::TracingCompleteParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_TRACING_H_
