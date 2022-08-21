// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_WEB_AUTHN_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_WEB_AUTHN_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_web_authn.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<web_authn::AuthenticatorProtocol> {
  static web_authn::AuthenticatorProtocol Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return web_authn::AuthenticatorProtocol::U2F;
    }
    if (value.GetString() == "u2f")
      return web_authn::AuthenticatorProtocol::U2F;
    if (value.GetString() == "ctap2")
      return web_authn::AuthenticatorProtocol::CTAP2;
    errors->AddError("invalid enum value");
    return web_authn::AuthenticatorProtocol::U2F;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::AuthenticatorProtocol& value, T*) {
  switch (value) {
    case web_authn::AuthenticatorProtocol::U2F:
      return std::make_unique<base::Value>("u2f");
    case web_authn::AuthenticatorProtocol::CTAP2:
      return std::make_unique<base::Value>("ctap2");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<web_authn::Ctap2Version> {
  static web_authn::Ctap2Version Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return web_authn::Ctap2Version::CTAP2_0;
    }
    if (value.GetString() == "ctap2_0")
      return web_authn::Ctap2Version::CTAP2_0;
    if (value.GetString() == "ctap2_1")
      return web_authn::Ctap2Version::CTAP2_1;
    errors->AddError("invalid enum value");
    return web_authn::Ctap2Version::CTAP2_0;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::Ctap2Version& value, T*) {
  switch (value) {
    case web_authn::Ctap2Version::CTAP2_0:
      return std::make_unique<base::Value>("ctap2_0");
    case web_authn::Ctap2Version::CTAP2_1:
      return std::make_unique<base::Value>("ctap2_1");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<web_authn::AuthenticatorTransport> {
  static web_authn::AuthenticatorTransport Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return web_authn::AuthenticatorTransport::USB;
    }
    if (value.GetString() == "usb")
      return web_authn::AuthenticatorTransport::USB;
    if (value.GetString() == "nfc")
      return web_authn::AuthenticatorTransport::NFC;
    if (value.GetString() == "ble")
      return web_authn::AuthenticatorTransport::BLE;
    if (value.GetString() == "cable")
      return web_authn::AuthenticatorTransport::CABLE;
    if (value.GetString() == "internal")
      return web_authn::AuthenticatorTransport::INTERNAL;
    errors->AddError("invalid enum value");
    return web_authn::AuthenticatorTransport::USB;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::AuthenticatorTransport& value, T*) {
  switch (value) {
    case web_authn::AuthenticatorTransport::USB:
      return std::make_unique<base::Value>("usb");
    case web_authn::AuthenticatorTransport::NFC:
      return std::make_unique<base::Value>("nfc");
    case web_authn::AuthenticatorTransport::BLE:
      return std::make_unique<base::Value>("ble");
    case web_authn::AuthenticatorTransport::CABLE:
      return std::make_unique<base::Value>("cable");
    case web_authn::AuthenticatorTransport::INTERNAL:
      return std::make_unique<base::Value>("internal");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<web_authn::VirtualAuthenticatorOptions> {
  static std::unique_ptr<web_authn::VirtualAuthenticatorOptions> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::VirtualAuthenticatorOptions::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::VirtualAuthenticatorOptions& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::Credential> {
  static std::unique_ptr<web_authn::Credential> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::Credential::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::Credential& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::EnableParams> {
  static std::unique_ptr<web_authn::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::EnableResult> {
  static std::unique_ptr<web_authn::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::DisableParams> {
  static std::unique_ptr<web_authn::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::DisableResult> {
  static std::unique_ptr<web_authn::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::AddVirtualAuthenticatorParams> {
  static std::unique_ptr<web_authn::AddVirtualAuthenticatorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::AddVirtualAuthenticatorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::AddVirtualAuthenticatorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::AddVirtualAuthenticatorResult> {
  static std::unique_ptr<web_authn::AddVirtualAuthenticatorResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::AddVirtualAuthenticatorResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::AddVirtualAuthenticatorResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::RemoveVirtualAuthenticatorParams> {
  static std::unique_ptr<web_authn::RemoveVirtualAuthenticatorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::RemoveVirtualAuthenticatorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::RemoveVirtualAuthenticatorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::RemoveVirtualAuthenticatorResult> {
  static std::unique_ptr<web_authn::RemoveVirtualAuthenticatorResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::RemoveVirtualAuthenticatorResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::RemoveVirtualAuthenticatorResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::AddCredentialParams> {
  static std::unique_ptr<web_authn::AddCredentialParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::AddCredentialParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::AddCredentialParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::AddCredentialResult> {
  static std::unique_ptr<web_authn::AddCredentialResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::AddCredentialResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::AddCredentialResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::GetCredentialParams> {
  static std::unique_ptr<web_authn::GetCredentialParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::GetCredentialParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::GetCredentialParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::GetCredentialResult> {
  static std::unique_ptr<web_authn::GetCredentialResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::GetCredentialResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::GetCredentialResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::GetCredentialsParams> {
  static std::unique_ptr<web_authn::GetCredentialsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::GetCredentialsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::GetCredentialsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::GetCredentialsResult> {
  static std::unique_ptr<web_authn::GetCredentialsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::GetCredentialsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::GetCredentialsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::RemoveCredentialParams> {
  static std::unique_ptr<web_authn::RemoveCredentialParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::RemoveCredentialParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::RemoveCredentialParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::RemoveCredentialResult> {
  static std::unique_ptr<web_authn::RemoveCredentialResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::RemoveCredentialResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::RemoveCredentialResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::ClearCredentialsParams> {
  static std::unique_ptr<web_authn::ClearCredentialsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::ClearCredentialsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::ClearCredentialsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::ClearCredentialsResult> {
  static std::unique_ptr<web_authn::ClearCredentialsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::ClearCredentialsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::ClearCredentialsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::SetUserVerifiedParams> {
  static std::unique_ptr<web_authn::SetUserVerifiedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::SetUserVerifiedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::SetUserVerifiedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::SetUserVerifiedResult> {
  static std::unique_ptr<web_authn::SetUserVerifiedResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::SetUserVerifiedResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::SetUserVerifiedResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::SetAutomaticPresenceSimulationParams> {
  static std::unique_ptr<web_authn::SetAutomaticPresenceSimulationParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::SetAutomaticPresenceSimulationParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::SetAutomaticPresenceSimulationParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<web_authn::SetAutomaticPresenceSimulationResult> {
  static std::unique_ptr<web_authn::SetAutomaticPresenceSimulationResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return web_authn::SetAutomaticPresenceSimulationResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const web_authn::SetAutomaticPresenceSimulationResult& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_WEB_AUTHN_H_
