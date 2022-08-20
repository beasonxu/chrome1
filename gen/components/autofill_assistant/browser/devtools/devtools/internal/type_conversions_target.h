// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_TARGET_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_TARGET_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_target.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {




template <>
struct FromValue<target::TargetInfo> {
  static std::unique_ptr<target::TargetInfo> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::TargetInfo::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::TargetInfo& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::FilterEntry> {
  static std::unique_ptr<target::FilterEntry> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::FilterEntry::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::FilterEntry& value, T*) {
  return value.Serialize();
}



template <>
struct FromValue<target::RemoteLocation> {
  static std::unique_ptr<target::RemoteLocation> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::RemoteLocation::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::RemoteLocation& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::ActivateTargetParams> {
  static std::unique_ptr<target::ActivateTargetParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::ActivateTargetParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::ActivateTargetParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::ActivateTargetResult> {
  static std::unique_ptr<target::ActivateTargetResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::ActivateTargetResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::ActivateTargetResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::AttachToTargetParams> {
  static std::unique_ptr<target::AttachToTargetParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::AttachToTargetParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::AttachToTargetParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::AttachToTargetResult> {
  static std::unique_ptr<target::AttachToTargetResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::AttachToTargetResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::AttachToTargetResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::AttachToBrowserTargetParams> {
  static std::unique_ptr<target::AttachToBrowserTargetParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::AttachToBrowserTargetParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::AttachToBrowserTargetParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::AttachToBrowserTargetResult> {
  static std::unique_ptr<target::AttachToBrowserTargetResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::AttachToBrowserTargetResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::AttachToBrowserTargetResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::CloseTargetParams> {
  static std::unique_ptr<target::CloseTargetParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::CloseTargetParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::CloseTargetParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::CloseTargetResult> {
  static std::unique_ptr<target::CloseTargetResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::CloseTargetResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::CloseTargetResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::ExposeDevToolsProtocolParams> {
  static std::unique_ptr<target::ExposeDevToolsProtocolParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::ExposeDevToolsProtocolParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::ExposeDevToolsProtocolParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::ExposeDevToolsProtocolResult> {
  static std::unique_ptr<target::ExposeDevToolsProtocolResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::ExposeDevToolsProtocolResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::ExposeDevToolsProtocolResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::CreateBrowserContextParams> {
  static std::unique_ptr<target::CreateBrowserContextParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::CreateBrowserContextParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::CreateBrowserContextParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::CreateBrowserContextResult> {
  static std::unique_ptr<target::CreateBrowserContextResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::CreateBrowserContextResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::CreateBrowserContextResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::GetBrowserContextsParams> {
  static std::unique_ptr<target::GetBrowserContextsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::GetBrowserContextsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::GetBrowserContextsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::GetBrowserContextsResult> {
  static std::unique_ptr<target::GetBrowserContextsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::GetBrowserContextsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::GetBrowserContextsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::CreateTargetParams> {
  static std::unique_ptr<target::CreateTargetParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::CreateTargetParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::CreateTargetParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::CreateTargetResult> {
  static std::unique_ptr<target::CreateTargetResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::CreateTargetResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::CreateTargetResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::DetachFromTargetParams> {
  static std::unique_ptr<target::DetachFromTargetParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::DetachFromTargetParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::DetachFromTargetParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::DetachFromTargetResult> {
  static std::unique_ptr<target::DetachFromTargetResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::DetachFromTargetResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::DetachFromTargetResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::DisposeBrowserContextParams> {
  static std::unique_ptr<target::DisposeBrowserContextParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::DisposeBrowserContextParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::DisposeBrowserContextParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::DisposeBrowserContextResult> {
  static std::unique_ptr<target::DisposeBrowserContextResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::DisposeBrowserContextResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::DisposeBrowserContextResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::GetTargetInfoParams> {
  static std::unique_ptr<target::GetTargetInfoParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::GetTargetInfoParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::GetTargetInfoParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::GetTargetInfoResult> {
  static std::unique_ptr<target::GetTargetInfoResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::GetTargetInfoResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::GetTargetInfoResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::GetTargetsParams> {
  static std::unique_ptr<target::GetTargetsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::GetTargetsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::GetTargetsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::GetTargetsResult> {
  static std::unique_ptr<target::GetTargetsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::GetTargetsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::GetTargetsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::SendMessageToTargetParams> {
  static std::unique_ptr<target::SendMessageToTargetParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::SendMessageToTargetParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::SendMessageToTargetParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::SendMessageToTargetResult> {
  static std::unique_ptr<target::SendMessageToTargetResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::SendMessageToTargetResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::SendMessageToTargetResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::SetAutoAttachParams> {
  static std::unique_ptr<target::SetAutoAttachParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::SetAutoAttachParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::SetAutoAttachParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::SetAutoAttachResult> {
  static std::unique_ptr<target::SetAutoAttachResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::SetAutoAttachResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::SetAutoAttachResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::AutoAttachRelatedParams> {
  static std::unique_ptr<target::AutoAttachRelatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::AutoAttachRelatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::AutoAttachRelatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::AutoAttachRelatedResult> {
  static std::unique_ptr<target::AutoAttachRelatedResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::AutoAttachRelatedResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::AutoAttachRelatedResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::SetDiscoverTargetsParams> {
  static std::unique_ptr<target::SetDiscoverTargetsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::SetDiscoverTargetsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::SetDiscoverTargetsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::SetDiscoverTargetsResult> {
  static std::unique_ptr<target::SetDiscoverTargetsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::SetDiscoverTargetsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::SetDiscoverTargetsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::SetRemoteLocationsParams> {
  static std::unique_ptr<target::SetRemoteLocationsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::SetRemoteLocationsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::SetRemoteLocationsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::SetRemoteLocationsResult> {
  static std::unique_ptr<target::SetRemoteLocationsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::SetRemoteLocationsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::SetRemoteLocationsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::AttachedToTargetParams> {
  static std::unique_ptr<target::AttachedToTargetParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::AttachedToTargetParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::AttachedToTargetParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::DetachedFromTargetParams> {
  static std::unique_ptr<target::DetachedFromTargetParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::DetachedFromTargetParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::DetachedFromTargetParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::ReceivedMessageFromTargetParams> {
  static std::unique_ptr<target::ReceivedMessageFromTargetParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::ReceivedMessageFromTargetParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::ReceivedMessageFromTargetParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::TargetCreatedParams> {
  static std::unique_ptr<target::TargetCreatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::TargetCreatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::TargetCreatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::TargetDestroyedParams> {
  static std::unique_ptr<target::TargetDestroyedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::TargetDestroyedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::TargetDestroyedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::TargetCrashedParams> {
  static std::unique_ptr<target::TargetCrashedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::TargetCrashedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::TargetCrashedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<target::TargetInfoChangedParams> {
  static std::unique_ptr<target::TargetInfoChangedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return target::TargetInfoChangedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const target::TargetInfoChangedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_TARGET_H_
