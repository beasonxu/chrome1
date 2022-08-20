// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SECURITY_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SECURITY_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_security.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<security::MixedContentType> {
  static security::MixedContentType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return security::MixedContentType::BLOCKABLE;
    }
    if (value.GetString() == "blockable")
      return security::MixedContentType::BLOCKABLE;
    if (value.GetString() == "optionally-blockable")
      return security::MixedContentType::OPTIONALLY_BLOCKABLE;
    if (value.GetString() == "none")
      return security::MixedContentType::NONE;
    errors->AddError("invalid enum value");
    return security::MixedContentType::BLOCKABLE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::MixedContentType& value, T*) {
  switch (value) {
    case security::MixedContentType::BLOCKABLE:
      return std::make_unique<base::Value>("blockable");
    case security::MixedContentType::OPTIONALLY_BLOCKABLE:
      return std::make_unique<base::Value>("optionally-blockable");
    case security::MixedContentType::NONE:
      return std::make_unique<base::Value>("none");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<security::SecurityState> {
  static security::SecurityState Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return security::SecurityState::UNKNOWN;
    }
    if (value.GetString() == "unknown")
      return security::SecurityState::UNKNOWN;
    if (value.GetString() == "neutral")
      return security::SecurityState::NEUTRAL;
    if (value.GetString() == "insecure")
      return security::SecurityState::INSECURE;
    if (value.GetString() == "secure")
      return security::SecurityState::SECURE;
    if (value.GetString() == "info")
      return security::SecurityState::INFO;
    if (value.GetString() == "insecure-broken")
      return security::SecurityState::INSECURE_BROKEN;
    errors->AddError("invalid enum value");
    return security::SecurityState::UNKNOWN;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::SecurityState& value, T*) {
  switch (value) {
    case security::SecurityState::UNKNOWN:
      return std::make_unique<base::Value>("unknown");
    case security::SecurityState::NEUTRAL:
      return std::make_unique<base::Value>("neutral");
    case security::SecurityState::INSECURE:
      return std::make_unique<base::Value>("insecure");
    case security::SecurityState::SECURE:
      return std::make_unique<base::Value>("secure");
    case security::SecurityState::INFO:
      return std::make_unique<base::Value>("info");
    case security::SecurityState::INSECURE_BROKEN:
      return std::make_unique<base::Value>("insecure-broken");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<security::CertificateSecurityState> {
  static std::unique_ptr<security::CertificateSecurityState> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::CertificateSecurityState::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::CertificateSecurityState& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<security::SafetyTipStatus> {
  static security::SafetyTipStatus Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return security::SafetyTipStatus::BAD_REPUTATION;
    }
    if (value.GetString() == "badReputation")
      return security::SafetyTipStatus::BAD_REPUTATION;
    if (value.GetString() == "lookalike")
      return security::SafetyTipStatus::LOOKALIKE;
    errors->AddError("invalid enum value");
    return security::SafetyTipStatus::BAD_REPUTATION;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::SafetyTipStatus& value, T*) {
  switch (value) {
    case security::SafetyTipStatus::BAD_REPUTATION:
      return std::make_unique<base::Value>("badReputation");
    case security::SafetyTipStatus::LOOKALIKE:
      return std::make_unique<base::Value>("lookalike");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<security::SafetyTipInfo> {
  static std::unique_ptr<security::SafetyTipInfo> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::SafetyTipInfo::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::SafetyTipInfo& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::VisibleSecurityState> {
  static std::unique_ptr<security::VisibleSecurityState> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::VisibleSecurityState::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::VisibleSecurityState& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::SecurityStateExplanation> {
  static std::unique_ptr<security::SecurityStateExplanation> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::SecurityStateExplanation::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::SecurityStateExplanation& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::InsecureContentStatus> {
  static std::unique_ptr<security::InsecureContentStatus> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::InsecureContentStatus::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::InsecureContentStatus& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<security::CertificateErrorAction> {
  static security::CertificateErrorAction Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return security::CertificateErrorAction::CONTINUE;
    }
    if (value.GetString() == "continue")
      return security::CertificateErrorAction::CONTINUE;
    if (value.GetString() == "cancel")
      return security::CertificateErrorAction::CANCEL;
    errors->AddError("invalid enum value");
    return security::CertificateErrorAction::CONTINUE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::CertificateErrorAction& value, T*) {
  switch (value) {
    case security::CertificateErrorAction::CONTINUE:
      return std::make_unique<base::Value>("continue");
    case security::CertificateErrorAction::CANCEL:
      return std::make_unique<base::Value>("cancel");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<security::DisableParams> {
  static std::unique_ptr<security::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::DisableResult> {
  static std::unique_ptr<security::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::EnableParams> {
  static std::unique_ptr<security::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::EnableResult> {
  static std::unique_ptr<security::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::SetIgnoreCertificateErrorsParams> {
  static std::unique_ptr<security::SetIgnoreCertificateErrorsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::SetIgnoreCertificateErrorsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::SetIgnoreCertificateErrorsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::SetIgnoreCertificateErrorsResult> {
  static std::unique_ptr<security::SetIgnoreCertificateErrorsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::SetIgnoreCertificateErrorsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::SetIgnoreCertificateErrorsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::HandleCertificateErrorParams> {
  static std::unique_ptr<security::HandleCertificateErrorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::HandleCertificateErrorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::HandleCertificateErrorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::HandleCertificateErrorResult> {
  static std::unique_ptr<security::HandleCertificateErrorResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::HandleCertificateErrorResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::HandleCertificateErrorResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::SetOverrideCertificateErrorsParams> {
  static std::unique_ptr<security::SetOverrideCertificateErrorsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::SetOverrideCertificateErrorsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::SetOverrideCertificateErrorsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::SetOverrideCertificateErrorsResult> {
  static std::unique_ptr<security::SetOverrideCertificateErrorsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::SetOverrideCertificateErrorsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::SetOverrideCertificateErrorsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::CertificateErrorParams> {
  static std::unique_ptr<security::CertificateErrorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::CertificateErrorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::CertificateErrorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::VisibleSecurityStateChangedParams> {
  static std::unique_ptr<security::VisibleSecurityStateChangedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::VisibleSecurityStateChangedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::VisibleSecurityStateChangedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<security::SecurityStateChangedParams> {
  static std::unique_ptr<security::SecurityStateChangedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return security::SecurityStateChangedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const security::SecurityStateChangedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_SECURITY_H_
