// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SYSTEM_INFO_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SYSTEM_INFO_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_system_info.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<system_info::GPUDevice> {
  static std::unique_ptr<system_info::GPUDevice> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::GPUDevice::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::GPUDevice& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<system_info::Size> {
  static std::unique_ptr<system_info::Size> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::Size::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::Size& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<system_info::VideoDecodeAcceleratorCapability> {
  static std::unique_ptr<system_info::VideoDecodeAcceleratorCapability> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::VideoDecodeAcceleratorCapability::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::VideoDecodeAcceleratorCapability& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<system_info::VideoEncodeAcceleratorCapability> {
  static std::unique_ptr<system_info::VideoEncodeAcceleratorCapability> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::VideoEncodeAcceleratorCapability::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::VideoEncodeAcceleratorCapability& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<system_info::SubsamplingFormat> {
  static system_info::SubsamplingFormat Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return system_info::SubsamplingFormat::YUV420;
    }
    if (value.GetString() == "yuv420")
      return system_info::SubsamplingFormat::YUV420;
    if (value.GetString() == "yuv422")
      return system_info::SubsamplingFormat::YUV422;
    if (value.GetString() == "yuv444")
      return system_info::SubsamplingFormat::YUV444;
    errors->AddError("invalid enum value");
    return system_info::SubsamplingFormat::YUV420;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::SubsamplingFormat& value, T*) {
  switch (value) {
    case system_info::SubsamplingFormat::YUV420:
      return std::make_unique<base::Value>("yuv420");
    case system_info::SubsamplingFormat::YUV422:
      return std::make_unique<base::Value>("yuv422");
    case system_info::SubsamplingFormat::YUV444:
      return std::make_unique<base::Value>("yuv444");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<system_info::ImageType> {
  static system_info::ImageType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return system_info::ImageType::JPEG;
    }
    if (value.GetString() == "jpeg")
      return system_info::ImageType::JPEG;
    if (value.GetString() == "webp")
      return system_info::ImageType::WEBP;
    if (value.GetString() == "unknown")
      return system_info::ImageType::UNKNOWN;
    errors->AddError("invalid enum value");
    return system_info::ImageType::JPEG;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::ImageType& value, T*) {
  switch (value) {
    case system_info::ImageType::JPEG:
      return std::make_unique<base::Value>("jpeg");
    case system_info::ImageType::WEBP:
      return std::make_unique<base::Value>("webp");
    case system_info::ImageType::UNKNOWN:
      return std::make_unique<base::Value>("unknown");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<system_info::ImageDecodeAcceleratorCapability> {
  static std::unique_ptr<system_info::ImageDecodeAcceleratorCapability> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::ImageDecodeAcceleratorCapability::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::ImageDecodeAcceleratorCapability& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<system_info::GPUInfo> {
  static std::unique_ptr<system_info::GPUInfo> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::GPUInfo::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::GPUInfo& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<system_info::ProcessInfo> {
  static std::unique_ptr<system_info::ProcessInfo> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::ProcessInfo::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::ProcessInfo& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<system_info::GetInfoParams> {
  static std::unique_ptr<system_info::GetInfoParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::GetInfoParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::GetInfoParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<system_info::GetInfoResult> {
  static std::unique_ptr<system_info::GetInfoResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::GetInfoResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::GetInfoResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<system_info::GetProcessInfoParams> {
  static std::unique_ptr<system_info::GetProcessInfoParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::GetProcessInfoParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::GetProcessInfoParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<system_info::GetProcessInfoResult> {
  static std::unique_ptr<system_info::GetProcessInfoResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return system_info::GetProcessInfoResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const system_info::GetProcessInfoResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SYSTEM_INFO_H_
