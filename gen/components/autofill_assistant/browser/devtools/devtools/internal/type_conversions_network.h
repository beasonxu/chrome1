// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_NETWORK_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_NETWORK_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_network.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {

template <>
struct FromValue<network::ResourceType> {
  static network::ResourceType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::ResourceType::DOCUMENT;
    }
    if (value.GetString() == "Document")
      return network::ResourceType::DOCUMENT;
    if (value.GetString() == "Stylesheet")
      return network::ResourceType::STYLESHEET;
    if (value.GetString() == "Image")
      return network::ResourceType::IMAGE;
    if (value.GetString() == "Media")
      return network::ResourceType::MEDIA;
    if (value.GetString() == "Font")
      return network::ResourceType::FONT;
    if (value.GetString() == "Script")
      return network::ResourceType::SCRIPT;
    if (value.GetString() == "TextTrack")
      return network::ResourceType::TEXT_TRACK;
    if (value.GetString() == "XHR")
      return network::ResourceType::XHR;
    if (value.GetString() == "Fetch")
      return network::ResourceType::FETCH;
    if (value.GetString() == "Prefetch")
      return network::ResourceType::PREFETCH;
    if (value.GetString() == "EventSource")
      return network::ResourceType::EVENT_SOURCE;
    if (value.GetString() == "WebSocket")
      return network::ResourceType::WEB_SOCKET;
    if (value.GetString() == "Manifest")
      return network::ResourceType::MANIFEST;
    if (value.GetString() == "SignedExchange")
      return network::ResourceType::SIGNED_EXCHANGE;
    if (value.GetString() == "Ping")
      return network::ResourceType::PING;
    if (value.GetString() == "CSPViolationReport")
      return network::ResourceType::CSP_VIOLATION_REPORT;
    if (value.GetString() == "Preflight")
      return network::ResourceType::PREFLIGHT;
    if (value.GetString() == "Other")
      return network::ResourceType::OTHER;
    errors->AddError("invalid enum value");
    return network::ResourceType::DOCUMENT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ResourceType& value, T*) {
  switch (value) {
    case network::ResourceType::DOCUMENT:
      return std::make_unique<base::Value>("Document");
    case network::ResourceType::STYLESHEET:
      return std::make_unique<base::Value>("Stylesheet");
    case network::ResourceType::IMAGE:
      return std::make_unique<base::Value>("Image");
    case network::ResourceType::MEDIA:
      return std::make_unique<base::Value>("Media");
    case network::ResourceType::FONT:
      return std::make_unique<base::Value>("Font");
    case network::ResourceType::SCRIPT:
      return std::make_unique<base::Value>("Script");
    case network::ResourceType::TEXT_TRACK:
      return std::make_unique<base::Value>("TextTrack");
    case network::ResourceType::XHR:
      return std::make_unique<base::Value>("XHR");
    case network::ResourceType::FETCH:
      return std::make_unique<base::Value>("Fetch");
    case network::ResourceType::PREFETCH:
      return std::make_unique<base::Value>("Prefetch");
    case network::ResourceType::EVENT_SOURCE:
      return std::make_unique<base::Value>("EventSource");
    case network::ResourceType::WEB_SOCKET:
      return std::make_unique<base::Value>("WebSocket");
    case network::ResourceType::MANIFEST:
      return std::make_unique<base::Value>("Manifest");
    case network::ResourceType::SIGNED_EXCHANGE:
      return std::make_unique<base::Value>("SignedExchange");
    case network::ResourceType::PING:
      return std::make_unique<base::Value>("Ping");
    case network::ResourceType::CSP_VIOLATION_REPORT:
      return std::make_unique<base::Value>("CSPViolationReport");
    case network::ResourceType::PREFLIGHT:
      return std::make_unique<base::Value>("Preflight");
    case network::ResourceType::OTHER:
      return std::make_unique<base::Value>("Other");
  };
  NOTREACHED();
  return nullptr;
}



template <>
struct FromValue<network::ErrorReason> {
  static network::ErrorReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::ErrorReason::FAILED;
    }
    if (value.GetString() == "Failed")
      return network::ErrorReason::FAILED;
    if (value.GetString() == "Aborted")
      return network::ErrorReason::ABORTED;
    if (value.GetString() == "TimedOut")
      return network::ErrorReason::TIMED_OUT;
    if (value.GetString() == "AccessDenied")
      return network::ErrorReason::ACCESS_DENIED;
    if (value.GetString() == "ConnectionClosed")
      return network::ErrorReason::CONNECTION_CLOSED;
    if (value.GetString() == "ConnectionReset")
      return network::ErrorReason::CONNECTION_RESET;
    if (value.GetString() == "ConnectionRefused")
      return network::ErrorReason::CONNECTION_REFUSED;
    if (value.GetString() == "ConnectionAborted")
      return network::ErrorReason::CONNECTION_ABORTED;
    if (value.GetString() == "ConnectionFailed")
      return network::ErrorReason::CONNECTION_FAILED;
    if (value.GetString() == "NameNotResolved")
      return network::ErrorReason::NAME_NOT_RESOLVED;
    if (value.GetString() == "InternetDisconnected")
      return network::ErrorReason::INTERNET_DISCONNECTED;
    if (value.GetString() == "AddressUnreachable")
      return network::ErrorReason::ADDRESS_UNREACHABLE;
    if (value.GetString() == "BlockedByClient")
      return network::ErrorReason::BLOCKED_BY_CLIENT;
    if (value.GetString() == "BlockedByResponse")
      return network::ErrorReason::BLOCKED_BY_RESPONSE;
    errors->AddError("invalid enum value");
    return network::ErrorReason::FAILED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ErrorReason& value, T*) {
  switch (value) {
    case network::ErrorReason::FAILED:
      return std::make_unique<base::Value>("Failed");
    case network::ErrorReason::ABORTED:
      return std::make_unique<base::Value>("Aborted");
    case network::ErrorReason::TIMED_OUT:
      return std::make_unique<base::Value>("TimedOut");
    case network::ErrorReason::ACCESS_DENIED:
      return std::make_unique<base::Value>("AccessDenied");
    case network::ErrorReason::CONNECTION_CLOSED:
      return std::make_unique<base::Value>("ConnectionClosed");
    case network::ErrorReason::CONNECTION_RESET:
      return std::make_unique<base::Value>("ConnectionReset");
    case network::ErrorReason::CONNECTION_REFUSED:
      return std::make_unique<base::Value>("ConnectionRefused");
    case network::ErrorReason::CONNECTION_ABORTED:
      return std::make_unique<base::Value>("ConnectionAborted");
    case network::ErrorReason::CONNECTION_FAILED:
      return std::make_unique<base::Value>("ConnectionFailed");
    case network::ErrorReason::NAME_NOT_RESOLVED:
      return std::make_unique<base::Value>("NameNotResolved");
    case network::ErrorReason::INTERNET_DISCONNECTED:
      return std::make_unique<base::Value>("InternetDisconnected");
    case network::ErrorReason::ADDRESS_UNREACHABLE:
      return std::make_unique<base::Value>("AddressUnreachable");
    case network::ErrorReason::BLOCKED_BY_CLIENT:
      return std::make_unique<base::Value>("BlockedByClient");
    case network::ErrorReason::BLOCKED_BY_RESPONSE:
      return std::make_unique<base::Value>("BlockedByResponse");
  };
  NOTREACHED();
  return nullptr;
}



template <>
struct FromValue<network::ConnectionType> {
  static network::ConnectionType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::ConnectionType::NONE;
    }
    if (value.GetString() == "none")
      return network::ConnectionType::NONE;
    if (value.GetString() == "cellular2g")
      return network::ConnectionType::CELLULAR2G;
    if (value.GetString() == "cellular3g")
      return network::ConnectionType::CELLULAR3G;
    if (value.GetString() == "cellular4g")
      return network::ConnectionType::CELLULAR4G;
    if (value.GetString() == "bluetooth")
      return network::ConnectionType::BLUETOOTH;
    if (value.GetString() == "ethernet")
      return network::ConnectionType::ETHERNET;
    if (value.GetString() == "wifi")
      return network::ConnectionType::WIFI;
    if (value.GetString() == "wimax")
      return network::ConnectionType::WIMAX;
    if (value.GetString() == "other")
      return network::ConnectionType::OTHER;
    errors->AddError("invalid enum value");
    return network::ConnectionType::NONE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ConnectionType& value, T*) {
  switch (value) {
    case network::ConnectionType::NONE:
      return std::make_unique<base::Value>("none");
    case network::ConnectionType::CELLULAR2G:
      return std::make_unique<base::Value>("cellular2g");
    case network::ConnectionType::CELLULAR3G:
      return std::make_unique<base::Value>("cellular3g");
    case network::ConnectionType::CELLULAR4G:
      return std::make_unique<base::Value>("cellular4g");
    case network::ConnectionType::BLUETOOTH:
      return std::make_unique<base::Value>("bluetooth");
    case network::ConnectionType::ETHERNET:
      return std::make_unique<base::Value>("ethernet");
    case network::ConnectionType::WIFI:
      return std::make_unique<base::Value>("wifi");
    case network::ConnectionType::WIMAX:
      return std::make_unique<base::Value>("wimax");
    case network::ConnectionType::OTHER:
      return std::make_unique<base::Value>("other");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::CookieSameSite> {
  static network::CookieSameSite Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::CookieSameSite::EXACT;
    }
    if (value.GetString() == "Strict")
      return network::CookieSameSite::EXACT;
    if (value.GetString() == "Lax")
      return network::CookieSameSite::LAX;
    if (value.GetString() == "None")
      return network::CookieSameSite::NONE;
    errors->AddError("invalid enum value");
    return network::CookieSameSite::EXACT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CookieSameSite& value, T*) {
  switch (value) {
    case network::CookieSameSite::EXACT:
      return std::make_unique<base::Value>("Strict");
    case network::CookieSameSite::LAX:
      return std::make_unique<base::Value>("Lax");
    case network::CookieSameSite::NONE:
      return std::make_unique<base::Value>("None");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::CookiePriority> {
  static network::CookiePriority Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::CookiePriority::LOW;
    }
    if (value.GetString() == "Low")
      return network::CookiePriority::LOW;
    if (value.GetString() == "Medium")
      return network::CookiePriority::MEDIUM;
    if (value.GetString() == "High")
      return network::CookiePriority::HIGH;
    errors->AddError("invalid enum value");
    return network::CookiePriority::LOW;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CookiePriority& value, T*) {
  switch (value) {
    case network::CookiePriority::LOW:
      return std::make_unique<base::Value>("Low");
    case network::CookiePriority::MEDIUM:
      return std::make_unique<base::Value>("Medium");
    case network::CookiePriority::HIGH:
      return std::make_unique<base::Value>("High");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::CookieSourceScheme> {
  static network::CookieSourceScheme Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::CookieSourceScheme::UNSET;
    }
    if (value.GetString() == "Unset")
      return network::CookieSourceScheme::UNSET;
    if (value.GetString() == "NonSecure")
      return network::CookieSourceScheme::NON_SECURE;
    if (value.GetString() == "Secure")
      return network::CookieSourceScheme::SECURE;
    errors->AddError("invalid enum value");
    return network::CookieSourceScheme::UNSET;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CookieSourceScheme& value, T*) {
  switch (value) {
    case network::CookieSourceScheme::UNSET:
      return std::make_unique<base::Value>("Unset");
    case network::CookieSourceScheme::NON_SECURE:
      return std::make_unique<base::Value>("NonSecure");
    case network::CookieSourceScheme::SECURE:
      return std::make_unique<base::Value>("Secure");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::ResourceTiming> {
  static std::unique_ptr<network::ResourceTiming> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ResourceTiming::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ResourceTiming& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::ResourcePriority> {
  static network::ResourcePriority Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::ResourcePriority::VERY_LOW;
    }
    if (value.GetString() == "VeryLow")
      return network::ResourcePriority::VERY_LOW;
    if (value.GetString() == "Low")
      return network::ResourcePriority::LOW;
    if (value.GetString() == "Medium")
      return network::ResourcePriority::MEDIUM;
    if (value.GetString() == "High")
      return network::ResourcePriority::HIGH;
    if (value.GetString() == "VeryHigh")
      return network::ResourcePriority::VERY_HIGH;
    errors->AddError("invalid enum value");
    return network::ResourcePriority::VERY_LOW;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ResourcePriority& value, T*) {
  switch (value) {
    case network::ResourcePriority::VERY_LOW:
      return std::make_unique<base::Value>("VeryLow");
    case network::ResourcePriority::LOW:
      return std::make_unique<base::Value>("Low");
    case network::ResourcePriority::MEDIUM:
      return std::make_unique<base::Value>("Medium");
    case network::ResourcePriority::HIGH:
      return std::make_unique<base::Value>("High");
    case network::ResourcePriority::VERY_HIGH:
      return std::make_unique<base::Value>("VeryHigh");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::PostDataEntry> {
  static std::unique_ptr<network::PostDataEntry> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::PostDataEntry::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::PostDataEntry& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::Request> {
  static std::unique_ptr<network::Request> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::Request::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::Request& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SignedCertificateTimestamp> {
  static std::unique_ptr<network::SignedCertificateTimestamp> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SignedCertificateTimestamp::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SignedCertificateTimestamp& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SecurityDetails> {
  static std::unique_ptr<network::SecurityDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SecurityDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SecurityDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::CertificateTransparencyCompliance> {
  static network::CertificateTransparencyCompliance Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::CertificateTransparencyCompliance::UNKNOWN;
    }
    if (value.GetString() == "unknown")
      return network::CertificateTransparencyCompliance::UNKNOWN;
    if (value.GetString() == "not-compliant")
      return network::CertificateTransparencyCompliance::NOT_COMPLIANT;
    if (value.GetString() == "compliant")
      return network::CertificateTransparencyCompliance::COMPLIANT;
    errors->AddError("invalid enum value");
    return network::CertificateTransparencyCompliance::UNKNOWN;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CertificateTransparencyCompliance& value, T*) {
  switch (value) {
    case network::CertificateTransparencyCompliance::UNKNOWN:
      return std::make_unique<base::Value>("unknown");
    case network::CertificateTransparencyCompliance::NOT_COMPLIANT:
      return std::make_unique<base::Value>("not-compliant");
    case network::CertificateTransparencyCompliance::COMPLIANT:
      return std::make_unique<base::Value>("compliant");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::BlockedReason> {
  static network::BlockedReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::BlockedReason::OTHER;
    }
    if (value.GetString() == "other")
      return network::BlockedReason::OTHER;
    if (value.GetString() == "csp")
      return network::BlockedReason::CSP;
    if (value.GetString() == "mixed-content")
      return network::BlockedReason::MIXED_CONTENT;
    if (value.GetString() == "origin")
      return network::BlockedReason::ORIGIN;
    if (value.GetString() == "inspector")
      return network::BlockedReason::INSPECTOR;
    if (value.GetString() == "subresource-filter")
      return network::BlockedReason::SUBRESOURCE_FILTER;
    if (value.GetString() == "content-type")
      return network::BlockedReason::CONTENT_TYPE;
    if (value.GetString() == "coep-frame-resource-needs-coep-header")
      return network::BlockedReason::COEP_FRAME_RESOURCE_NEEDS_COEP_HEADER;
    if (value.GetString() == "coop-sandboxed-iframe-cannot-navigate-to-coop-page")
      return network::BlockedReason::COOP_SANDBOXED_IFRAME_CANNOT_NAVIGATE_TO_COOP_PAGE;
    if (value.GetString() == "corp-not-same-origin")
      return network::BlockedReason::CORP_NOT_SAME_ORIGIN;
    if (value.GetString() == "corp-not-same-origin-after-defaulted-to-same-origin-by-coep")
      return network::BlockedReason::CORP_NOT_SAME_ORIGIN_AFTER_DEFAULTED_TO_SAME_ORIGIN_BY_COEP;
    if (value.GetString() == "corp-not-same-site")
      return network::BlockedReason::CORP_NOT_SAME_SITE;
    errors->AddError("invalid enum value");
    return network::BlockedReason::OTHER;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::BlockedReason& value, T*) {
  switch (value) {
    case network::BlockedReason::OTHER:
      return std::make_unique<base::Value>("other");
    case network::BlockedReason::CSP:
      return std::make_unique<base::Value>("csp");
    case network::BlockedReason::MIXED_CONTENT:
      return std::make_unique<base::Value>("mixed-content");
    case network::BlockedReason::ORIGIN:
      return std::make_unique<base::Value>("origin");
    case network::BlockedReason::INSPECTOR:
      return std::make_unique<base::Value>("inspector");
    case network::BlockedReason::SUBRESOURCE_FILTER:
      return std::make_unique<base::Value>("subresource-filter");
    case network::BlockedReason::CONTENT_TYPE:
      return std::make_unique<base::Value>("content-type");
    case network::BlockedReason::COEP_FRAME_RESOURCE_NEEDS_COEP_HEADER:
      return std::make_unique<base::Value>("coep-frame-resource-needs-coep-header");
    case network::BlockedReason::COOP_SANDBOXED_IFRAME_CANNOT_NAVIGATE_TO_COOP_PAGE:
      return std::make_unique<base::Value>("coop-sandboxed-iframe-cannot-navigate-to-coop-page");
    case network::BlockedReason::CORP_NOT_SAME_ORIGIN:
      return std::make_unique<base::Value>("corp-not-same-origin");
    case network::BlockedReason::CORP_NOT_SAME_ORIGIN_AFTER_DEFAULTED_TO_SAME_ORIGIN_BY_COEP:
      return std::make_unique<base::Value>("corp-not-same-origin-after-defaulted-to-same-origin-by-coep");
    case network::BlockedReason::CORP_NOT_SAME_SITE:
      return std::make_unique<base::Value>("corp-not-same-site");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::CorsError> {
  static network::CorsError Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::CorsError::DISALLOWED_BY_MODE;
    }
    if (value.GetString() == "DisallowedByMode")
      return network::CorsError::DISALLOWED_BY_MODE;
    if (value.GetString() == "InvalidResponse")
      return network::CorsError::INVALID_RESPONSE;
    if (value.GetString() == "WildcardOriginNotAllowed")
      return network::CorsError::WILDCARD_ORIGIN_NOT_ALLOWED;
    if (value.GetString() == "MissingAllowOriginHeader")
      return network::CorsError::MISSING_ALLOW_ORIGIN_HEADER;
    if (value.GetString() == "MultipleAllowOriginValues")
      return network::CorsError::MULTIPLE_ALLOW_ORIGIN_VALUES;
    if (value.GetString() == "InvalidAllowOriginValue")
      return network::CorsError::INVALID_ALLOW_ORIGIN_VALUE;
    if (value.GetString() == "AllowOriginMismatch")
      return network::CorsError::ALLOW_ORIGIN_MISMATCH;
    if (value.GetString() == "InvalidAllowCredentials")
      return network::CorsError::INVALID_ALLOW_CREDENTIALS;
    if (value.GetString() == "CorsDisabledScheme")
      return network::CorsError::CORS_DISABLED_SCHEME;
    if (value.GetString() == "PreflightInvalidStatus")
      return network::CorsError::PREFLIGHT_INVALID_STATUS;
    if (value.GetString() == "PreflightDisallowedRedirect")
      return network::CorsError::PREFLIGHT_DISALLOWED_REDIRECT;
    if (value.GetString() == "PreflightWildcardOriginNotAllowed")
      return network::CorsError::PREFLIGHT_WILDCARD_ORIGIN_NOT_ALLOWED;
    if (value.GetString() == "PreflightMissingAllowOriginHeader")
      return network::CorsError::PREFLIGHT_MISSING_ALLOW_ORIGIN_HEADER;
    if (value.GetString() == "PreflightMultipleAllowOriginValues")
      return network::CorsError::PREFLIGHT_MULTIPLE_ALLOW_ORIGIN_VALUES;
    if (value.GetString() == "PreflightInvalidAllowOriginValue")
      return network::CorsError::PREFLIGHT_INVALID_ALLOW_ORIGIN_VALUE;
    if (value.GetString() == "PreflightAllowOriginMismatch")
      return network::CorsError::PREFLIGHT_ALLOW_ORIGIN_MISMATCH;
    if (value.GetString() == "PreflightInvalidAllowCredentials")
      return network::CorsError::PREFLIGHT_INVALID_ALLOW_CREDENTIALS;
    if (value.GetString() == "PreflightMissingAllowExternal")
      return network::CorsError::PREFLIGHT_MISSING_ALLOW_EXTERNAL;
    if (value.GetString() == "PreflightInvalidAllowExternal")
      return network::CorsError::PREFLIGHT_INVALID_ALLOW_EXTERNAL;
    if (value.GetString() == "PreflightMissingAllowPrivateNetwork")
      return network::CorsError::PREFLIGHT_MISSING_ALLOW_PRIVATE_NETWORK;
    if (value.GetString() == "PreflightInvalidAllowPrivateNetwork")
      return network::CorsError::PREFLIGHT_INVALID_ALLOW_PRIVATE_NETWORK;
    if (value.GetString() == "InvalidAllowMethodsPreflightResponse")
      return network::CorsError::INVALID_ALLOW_METHODS_PREFLIGHT_RESPONSE;
    if (value.GetString() == "InvalidAllowHeadersPreflightResponse")
      return network::CorsError::INVALID_ALLOW_HEADERS_PREFLIGHT_RESPONSE;
    if (value.GetString() == "MethodDisallowedByPreflightResponse")
      return network::CorsError::METHOD_DISALLOWED_BY_PREFLIGHT_RESPONSE;
    if (value.GetString() == "HeaderDisallowedByPreflightResponse")
      return network::CorsError::HEADER_DISALLOWED_BY_PREFLIGHT_RESPONSE;
    if (value.GetString() == "RedirectContainsCredentials")
      return network::CorsError::REDIRECT_CONTAINS_CREDENTIALS;
    if (value.GetString() == "InsecurePrivateNetwork")
      return network::CorsError::INSECURE_PRIVATE_NETWORK;
    if (value.GetString() == "InvalidPrivateNetworkAccess")
      return network::CorsError::INVALID_PRIVATE_NETWORK_ACCESS;
    if (value.GetString() == "UnexpectedPrivateNetworkAccess")
      return network::CorsError::UNEXPECTED_PRIVATE_NETWORK_ACCESS;
    if (value.GetString() == "NoCorsRedirectModeNotFollow")
      return network::CorsError::NO_CORS_REDIRECT_MODE_NOT_FOLLOW;
    errors->AddError("invalid enum value");
    return network::CorsError::DISALLOWED_BY_MODE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CorsError& value, T*) {
  switch (value) {
    case network::CorsError::DISALLOWED_BY_MODE:
      return std::make_unique<base::Value>("DisallowedByMode");
    case network::CorsError::INVALID_RESPONSE:
      return std::make_unique<base::Value>("InvalidResponse");
    case network::CorsError::WILDCARD_ORIGIN_NOT_ALLOWED:
      return std::make_unique<base::Value>("WildcardOriginNotAllowed");
    case network::CorsError::MISSING_ALLOW_ORIGIN_HEADER:
      return std::make_unique<base::Value>("MissingAllowOriginHeader");
    case network::CorsError::MULTIPLE_ALLOW_ORIGIN_VALUES:
      return std::make_unique<base::Value>("MultipleAllowOriginValues");
    case network::CorsError::INVALID_ALLOW_ORIGIN_VALUE:
      return std::make_unique<base::Value>("InvalidAllowOriginValue");
    case network::CorsError::ALLOW_ORIGIN_MISMATCH:
      return std::make_unique<base::Value>("AllowOriginMismatch");
    case network::CorsError::INVALID_ALLOW_CREDENTIALS:
      return std::make_unique<base::Value>("InvalidAllowCredentials");
    case network::CorsError::CORS_DISABLED_SCHEME:
      return std::make_unique<base::Value>("CorsDisabledScheme");
    case network::CorsError::PREFLIGHT_INVALID_STATUS:
      return std::make_unique<base::Value>("PreflightInvalidStatus");
    case network::CorsError::PREFLIGHT_DISALLOWED_REDIRECT:
      return std::make_unique<base::Value>("PreflightDisallowedRedirect");
    case network::CorsError::PREFLIGHT_WILDCARD_ORIGIN_NOT_ALLOWED:
      return std::make_unique<base::Value>("PreflightWildcardOriginNotAllowed");
    case network::CorsError::PREFLIGHT_MISSING_ALLOW_ORIGIN_HEADER:
      return std::make_unique<base::Value>("PreflightMissingAllowOriginHeader");
    case network::CorsError::PREFLIGHT_MULTIPLE_ALLOW_ORIGIN_VALUES:
      return std::make_unique<base::Value>("PreflightMultipleAllowOriginValues");
    case network::CorsError::PREFLIGHT_INVALID_ALLOW_ORIGIN_VALUE:
      return std::make_unique<base::Value>("PreflightInvalidAllowOriginValue");
    case network::CorsError::PREFLIGHT_ALLOW_ORIGIN_MISMATCH:
      return std::make_unique<base::Value>("PreflightAllowOriginMismatch");
    case network::CorsError::PREFLIGHT_INVALID_ALLOW_CREDENTIALS:
      return std::make_unique<base::Value>("PreflightInvalidAllowCredentials");
    case network::CorsError::PREFLIGHT_MISSING_ALLOW_EXTERNAL:
      return std::make_unique<base::Value>("PreflightMissingAllowExternal");
    case network::CorsError::PREFLIGHT_INVALID_ALLOW_EXTERNAL:
      return std::make_unique<base::Value>("PreflightInvalidAllowExternal");
    case network::CorsError::PREFLIGHT_MISSING_ALLOW_PRIVATE_NETWORK:
      return std::make_unique<base::Value>("PreflightMissingAllowPrivateNetwork");
    case network::CorsError::PREFLIGHT_INVALID_ALLOW_PRIVATE_NETWORK:
      return std::make_unique<base::Value>("PreflightInvalidAllowPrivateNetwork");
    case network::CorsError::INVALID_ALLOW_METHODS_PREFLIGHT_RESPONSE:
      return std::make_unique<base::Value>("InvalidAllowMethodsPreflightResponse");
    case network::CorsError::INVALID_ALLOW_HEADERS_PREFLIGHT_RESPONSE:
      return std::make_unique<base::Value>("InvalidAllowHeadersPreflightResponse");
    case network::CorsError::METHOD_DISALLOWED_BY_PREFLIGHT_RESPONSE:
      return std::make_unique<base::Value>("MethodDisallowedByPreflightResponse");
    case network::CorsError::HEADER_DISALLOWED_BY_PREFLIGHT_RESPONSE:
      return std::make_unique<base::Value>("HeaderDisallowedByPreflightResponse");
    case network::CorsError::REDIRECT_CONTAINS_CREDENTIALS:
      return std::make_unique<base::Value>("RedirectContainsCredentials");
    case network::CorsError::INSECURE_PRIVATE_NETWORK:
      return std::make_unique<base::Value>("InsecurePrivateNetwork");
    case network::CorsError::INVALID_PRIVATE_NETWORK_ACCESS:
      return std::make_unique<base::Value>("InvalidPrivateNetworkAccess");
    case network::CorsError::UNEXPECTED_PRIVATE_NETWORK_ACCESS:
      return std::make_unique<base::Value>("UnexpectedPrivateNetworkAccess");
    case network::CorsError::NO_CORS_REDIRECT_MODE_NOT_FOLLOW:
      return std::make_unique<base::Value>("NoCorsRedirectModeNotFollow");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::CorsErrorStatus> {
  static std::unique_ptr<network::CorsErrorStatus> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CorsErrorStatus::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CorsErrorStatus& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::ServiceWorkerResponseSource> {
  static network::ServiceWorkerResponseSource Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::ServiceWorkerResponseSource::CACHE_STORAGE;
    }
    if (value.GetString() == "cache-storage")
      return network::ServiceWorkerResponseSource::CACHE_STORAGE;
    if (value.GetString() == "http-cache")
      return network::ServiceWorkerResponseSource::HTTP_CACHE;
    if (value.GetString() == "fallback-code")
      return network::ServiceWorkerResponseSource::FALLBACK_CODE;
    if (value.GetString() == "network")
      return network::ServiceWorkerResponseSource::NETWORK;
    errors->AddError("invalid enum value");
    return network::ServiceWorkerResponseSource::CACHE_STORAGE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ServiceWorkerResponseSource& value, T*) {
  switch (value) {
    case network::ServiceWorkerResponseSource::CACHE_STORAGE:
      return std::make_unique<base::Value>("cache-storage");
    case network::ServiceWorkerResponseSource::HTTP_CACHE:
      return std::make_unique<base::Value>("http-cache");
    case network::ServiceWorkerResponseSource::FALLBACK_CODE:
      return std::make_unique<base::Value>("fallback-code");
    case network::ServiceWorkerResponseSource::NETWORK:
      return std::make_unique<base::Value>("network");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::TrustTokenParams> {
  static std::unique_ptr<network::TrustTokenParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::TrustTokenParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::TrustTokenParams& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::TrustTokenOperationType> {
  static network::TrustTokenOperationType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::TrustTokenOperationType::ISSUANCE;
    }
    if (value.GetString() == "Issuance")
      return network::TrustTokenOperationType::ISSUANCE;
    if (value.GetString() == "Redemption")
      return network::TrustTokenOperationType::REDEMPTION;
    if (value.GetString() == "Signing")
      return network::TrustTokenOperationType::SIGNING;
    errors->AddError("invalid enum value");
    return network::TrustTokenOperationType::ISSUANCE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::TrustTokenOperationType& value, T*) {
  switch (value) {
    case network::TrustTokenOperationType::ISSUANCE:
      return std::make_unique<base::Value>("Issuance");
    case network::TrustTokenOperationType::REDEMPTION:
      return std::make_unique<base::Value>("Redemption");
    case network::TrustTokenOperationType::SIGNING:
      return std::make_unique<base::Value>("Signing");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::Response> {
  static std::unique_ptr<network::Response> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::Response::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::Response& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketRequest> {
  static std::unique_ptr<network::WebSocketRequest> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketRequest::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketRequest& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketResponse> {
  static std::unique_ptr<network::WebSocketResponse> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketResponse::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketResponse& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketFrame> {
  static std::unique_ptr<network::WebSocketFrame> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketFrame::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketFrame& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CachedResource> {
  static std::unique_ptr<network::CachedResource> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CachedResource::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CachedResource& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::Initiator> {
  static std::unique_ptr<network::Initiator> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::Initiator::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::Initiator& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::Cookie> {
  static std::unique_ptr<network::Cookie> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::Cookie::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::Cookie& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::SetCookieBlockedReason> {
  static network::SetCookieBlockedReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::SetCookieBlockedReason::SECURE_ONLY;
    }
    if (value.GetString() == "SecureOnly")
      return network::SetCookieBlockedReason::SECURE_ONLY;
    if (value.GetString() == "SameSiteStrict")
      return network::SetCookieBlockedReason::SAME_SITE_STRICT;
    if (value.GetString() == "SameSiteLax")
      return network::SetCookieBlockedReason::SAME_SITE_LAX;
    if (value.GetString() == "SameSiteUnspecifiedTreatedAsLax")
      return network::SetCookieBlockedReason::SAME_SITE_UNSPECIFIED_TREATED_AS_LAX;
    if (value.GetString() == "SameSiteNoneInsecure")
      return network::SetCookieBlockedReason::SAME_SITE_NONE_INSECURE;
    if (value.GetString() == "UserPreferences")
      return network::SetCookieBlockedReason::USER_PREFERENCES;
    if (value.GetString() == "SyntaxError")
      return network::SetCookieBlockedReason::SYNTAX_ERROR;
    if (value.GetString() == "SchemeNotSupported")
      return network::SetCookieBlockedReason::SCHEME_NOT_SUPPORTED;
    if (value.GetString() == "OverwriteSecure")
      return network::SetCookieBlockedReason::OVERWRITE_SECURE;
    if (value.GetString() == "InvalidDomain")
      return network::SetCookieBlockedReason::INVALID_DOMAIN;
    if (value.GetString() == "InvalidPrefix")
      return network::SetCookieBlockedReason::INVALID_PREFIX;
    if (value.GetString() == "UnknownError")
      return network::SetCookieBlockedReason::UNKNOWN_ERROR;
    if (value.GetString() == "SchemefulSameSiteStrict")
      return network::SetCookieBlockedReason::SCHEMEFUL_SAME_SITE_STRICT;
    if (value.GetString() == "SchemefulSameSiteLax")
      return network::SetCookieBlockedReason::SCHEMEFUL_SAME_SITE_LAX;
    if (value.GetString() == "SchemefulSameSiteUnspecifiedTreatedAsLax")
      return network::SetCookieBlockedReason::SCHEMEFUL_SAME_SITE_UNSPECIFIED_TREATED_AS_LAX;
    if (value.GetString() == "SamePartyFromCrossPartyContext")
      return network::SetCookieBlockedReason::SAME_PARTY_FROM_CROSS_PARTY_CONTEXT;
    if (value.GetString() == "SamePartyConflictsWithOtherAttributes")
      return network::SetCookieBlockedReason::SAME_PARTY_CONFLICTS_WITH_OTHER_ATTRIBUTES;
    if (value.GetString() == "NameValuePairExceedsMaxSize")
      return network::SetCookieBlockedReason::NAME_VALUE_PAIR_EXCEEDS_MAX_SIZE;
    errors->AddError("invalid enum value");
    return network::SetCookieBlockedReason::SECURE_ONLY;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetCookieBlockedReason& value, T*) {
  switch (value) {
    case network::SetCookieBlockedReason::SECURE_ONLY:
      return std::make_unique<base::Value>("SecureOnly");
    case network::SetCookieBlockedReason::SAME_SITE_STRICT:
      return std::make_unique<base::Value>("SameSiteStrict");
    case network::SetCookieBlockedReason::SAME_SITE_LAX:
      return std::make_unique<base::Value>("SameSiteLax");
    case network::SetCookieBlockedReason::SAME_SITE_UNSPECIFIED_TREATED_AS_LAX:
      return std::make_unique<base::Value>("SameSiteUnspecifiedTreatedAsLax");
    case network::SetCookieBlockedReason::SAME_SITE_NONE_INSECURE:
      return std::make_unique<base::Value>("SameSiteNoneInsecure");
    case network::SetCookieBlockedReason::USER_PREFERENCES:
      return std::make_unique<base::Value>("UserPreferences");
    case network::SetCookieBlockedReason::SYNTAX_ERROR:
      return std::make_unique<base::Value>("SyntaxError");
    case network::SetCookieBlockedReason::SCHEME_NOT_SUPPORTED:
      return std::make_unique<base::Value>("SchemeNotSupported");
    case network::SetCookieBlockedReason::OVERWRITE_SECURE:
      return std::make_unique<base::Value>("OverwriteSecure");
    case network::SetCookieBlockedReason::INVALID_DOMAIN:
      return std::make_unique<base::Value>("InvalidDomain");
    case network::SetCookieBlockedReason::INVALID_PREFIX:
      return std::make_unique<base::Value>("InvalidPrefix");
    case network::SetCookieBlockedReason::UNKNOWN_ERROR:
      return std::make_unique<base::Value>("UnknownError");
    case network::SetCookieBlockedReason::SCHEMEFUL_SAME_SITE_STRICT:
      return std::make_unique<base::Value>("SchemefulSameSiteStrict");
    case network::SetCookieBlockedReason::SCHEMEFUL_SAME_SITE_LAX:
      return std::make_unique<base::Value>("SchemefulSameSiteLax");
    case network::SetCookieBlockedReason::SCHEMEFUL_SAME_SITE_UNSPECIFIED_TREATED_AS_LAX:
      return std::make_unique<base::Value>("SchemefulSameSiteUnspecifiedTreatedAsLax");
    case network::SetCookieBlockedReason::SAME_PARTY_FROM_CROSS_PARTY_CONTEXT:
      return std::make_unique<base::Value>("SamePartyFromCrossPartyContext");
    case network::SetCookieBlockedReason::SAME_PARTY_CONFLICTS_WITH_OTHER_ATTRIBUTES:
      return std::make_unique<base::Value>("SamePartyConflictsWithOtherAttributes");
    case network::SetCookieBlockedReason::NAME_VALUE_PAIR_EXCEEDS_MAX_SIZE:
      return std::make_unique<base::Value>("NameValuePairExceedsMaxSize");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::CookieBlockedReason> {
  static network::CookieBlockedReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::CookieBlockedReason::SECURE_ONLY;
    }
    if (value.GetString() == "SecureOnly")
      return network::CookieBlockedReason::SECURE_ONLY;
    if (value.GetString() == "NotOnPath")
      return network::CookieBlockedReason::NOT_ON_PATH;
    if (value.GetString() == "DomainMismatch")
      return network::CookieBlockedReason::DOMAIN_MISMATCH;
    if (value.GetString() == "SameSiteStrict")
      return network::CookieBlockedReason::SAME_SITE_STRICT;
    if (value.GetString() == "SameSiteLax")
      return network::CookieBlockedReason::SAME_SITE_LAX;
    if (value.GetString() == "SameSiteUnspecifiedTreatedAsLax")
      return network::CookieBlockedReason::SAME_SITE_UNSPECIFIED_TREATED_AS_LAX;
    if (value.GetString() == "SameSiteNoneInsecure")
      return network::CookieBlockedReason::SAME_SITE_NONE_INSECURE;
    if (value.GetString() == "UserPreferences")
      return network::CookieBlockedReason::USER_PREFERENCES;
    if (value.GetString() == "UnknownError")
      return network::CookieBlockedReason::UNKNOWN_ERROR;
    if (value.GetString() == "SchemefulSameSiteStrict")
      return network::CookieBlockedReason::SCHEMEFUL_SAME_SITE_STRICT;
    if (value.GetString() == "SchemefulSameSiteLax")
      return network::CookieBlockedReason::SCHEMEFUL_SAME_SITE_LAX;
    if (value.GetString() == "SchemefulSameSiteUnspecifiedTreatedAsLax")
      return network::CookieBlockedReason::SCHEMEFUL_SAME_SITE_UNSPECIFIED_TREATED_AS_LAX;
    if (value.GetString() == "SamePartyFromCrossPartyContext")
      return network::CookieBlockedReason::SAME_PARTY_FROM_CROSS_PARTY_CONTEXT;
    if (value.GetString() == "NameValuePairExceedsMaxSize")
      return network::CookieBlockedReason::NAME_VALUE_PAIR_EXCEEDS_MAX_SIZE;
    errors->AddError("invalid enum value");
    return network::CookieBlockedReason::SECURE_ONLY;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CookieBlockedReason& value, T*) {
  switch (value) {
    case network::CookieBlockedReason::SECURE_ONLY:
      return std::make_unique<base::Value>("SecureOnly");
    case network::CookieBlockedReason::NOT_ON_PATH:
      return std::make_unique<base::Value>("NotOnPath");
    case network::CookieBlockedReason::DOMAIN_MISMATCH:
      return std::make_unique<base::Value>("DomainMismatch");
    case network::CookieBlockedReason::SAME_SITE_STRICT:
      return std::make_unique<base::Value>("SameSiteStrict");
    case network::CookieBlockedReason::SAME_SITE_LAX:
      return std::make_unique<base::Value>("SameSiteLax");
    case network::CookieBlockedReason::SAME_SITE_UNSPECIFIED_TREATED_AS_LAX:
      return std::make_unique<base::Value>("SameSiteUnspecifiedTreatedAsLax");
    case network::CookieBlockedReason::SAME_SITE_NONE_INSECURE:
      return std::make_unique<base::Value>("SameSiteNoneInsecure");
    case network::CookieBlockedReason::USER_PREFERENCES:
      return std::make_unique<base::Value>("UserPreferences");
    case network::CookieBlockedReason::UNKNOWN_ERROR:
      return std::make_unique<base::Value>("UnknownError");
    case network::CookieBlockedReason::SCHEMEFUL_SAME_SITE_STRICT:
      return std::make_unique<base::Value>("SchemefulSameSiteStrict");
    case network::CookieBlockedReason::SCHEMEFUL_SAME_SITE_LAX:
      return std::make_unique<base::Value>("SchemefulSameSiteLax");
    case network::CookieBlockedReason::SCHEMEFUL_SAME_SITE_UNSPECIFIED_TREATED_AS_LAX:
      return std::make_unique<base::Value>("SchemefulSameSiteUnspecifiedTreatedAsLax");
    case network::CookieBlockedReason::SAME_PARTY_FROM_CROSS_PARTY_CONTEXT:
      return std::make_unique<base::Value>("SamePartyFromCrossPartyContext");
    case network::CookieBlockedReason::NAME_VALUE_PAIR_EXCEEDS_MAX_SIZE:
      return std::make_unique<base::Value>("NameValuePairExceedsMaxSize");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::BlockedSetCookieWithReason> {
  static std::unique_ptr<network::BlockedSetCookieWithReason> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::BlockedSetCookieWithReason::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::BlockedSetCookieWithReason& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::BlockedCookieWithReason> {
  static std::unique_ptr<network::BlockedCookieWithReason> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::BlockedCookieWithReason::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::BlockedCookieWithReason& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CookieParam> {
  static std::unique_ptr<network::CookieParam> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CookieParam::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CookieParam& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::AuthChallenge> {
  static std::unique_ptr<network::AuthChallenge> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::AuthChallenge::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::AuthChallenge& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::AuthChallengeResponse> {
  static std::unique_ptr<network::AuthChallengeResponse> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::AuthChallengeResponse::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::AuthChallengeResponse& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::InterceptionStage> {
  static network::InterceptionStage Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::InterceptionStage::REQUEST;
    }
    if (value.GetString() == "Request")
      return network::InterceptionStage::REQUEST;
    if (value.GetString() == "HeadersReceived")
      return network::InterceptionStage::HEADERS_RECEIVED;
    errors->AddError("invalid enum value");
    return network::InterceptionStage::REQUEST;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::InterceptionStage& value, T*) {
  switch (value) {
    case network::InterceptionStage::REQUEST:
      return std::make_unique<base::Value>("Request");
    case network::InterceptionStage::HEADERS_RECEIVED:
      return std::make_unique<base::Value>("HeadersReceived");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::RequestPattern> {
  static std::unique_ptr<network::RequestPattern> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::RequestPattern::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::RequestPattern& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SignedExchangeSignature> {
  static std::unique_ptr<network::SignedExchangeSignature> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SignedExchangeSignature::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SignedExchangeSignature& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SignedExchangeHeader> {
  static std::unique_ptr<network::SignedExchangeHeader> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SignedExchangeHeader::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SignedExchangeHeader& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::SignedExchangeErrorField> {
  static network::SignedExchangeErrorField Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::SignedExchangeErrorField::SIGNATURE_SIG;
    }
    if (value.GetString() == "signatureSig")
      return network::SignedExchangeErrorField::SIGNATURE_SIG;
    if (value.GetString() == "signatureIntegrity")
      return network::SignedExchangeErrorField::SIGNATURE_INTEGRITY;
    if (value.GetString() == "signatureCertUrl")
      return network::SignedExchangeErrorField::SIGNATURE_CERT_URL;
    if (value.GetString() == "signatureCertSha256")
      return network::SignedExchangeErrorField::SIGNATURE_CERT_SHA256;
    if (value.GetString() == "signatureValidityUrl")
      return network::SignedExchangeErrorField::SIGNATURE_VALIDITY_URL;
    if (value.GetString() == "signatureTimestamps")
      return network::SignedExchangeErrorField::SIGNATURE_TIMESTAMPS;
    errors->AddError("invalid enum value");
    return network::SignedExchangeErrorField::SIGNATURE_SIG;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SignedExchangeErrorField& value, T*) {
  switch (value) {
    case network::SignedExchangeErrorField::SIGNATURE_SIG:
      return std::make_unique<base::Value>("signatureSig");
    case network::SignedExchangeErrorField::SIGNATURE_INTEGRITY:
      return std::make_unique<base::Value>("signatureIntegrity");
    case network::SignedExchangeErrorField::SIGNATURE_CERT_URL:
      return std::make_unique<base::Value>("signatureCertUrl");
    case network::SignedExchangeErrorField::SIGNATURE_CERT_SHA256:
      return std::make_unique<base::Value>("signatureCertSha256");
    case network::SignedExchangeErrorField::SIGNATURE_VALIDITY_URL:
      return std::make_unique<base::Value>("signatureValidityUrl");
    case network::SignedExchangeErrorField::SIGNATURE_TIMESTAMPS:
      return std::make_unique<base::Value>("signatureTimestamps");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::SignedExchangeError> {
  static std::unique_ptr<network::SignedExchangeError> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SignedExchangeError::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SignedExchangeError& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SignedExchangeInfo> {
  static std::unique_ptr<network::SignedExchangeInfo> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SignedExchangeInfo::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SignedExchangeInfo& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::ContentEncoding> {
  static network::ContentEncoding Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::ContentEncoding::DEFLATE;
    }
    if (value.GetString() == "deflate")
      return network::ContentEncoding::DEFLATE;
    if (value.GetString() == "gzip")
      return network::ContentEncoding::GZIP;
    if (value.GetString() == "br")
      return network::ContentEncoding::BR;
    errors->AddError("invalid enum value");
    return network::ContentEncoding::DEFLATE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ContentEncoding& value, T*) {
  switch (value) {
    case network::ContentEncoding::DEFLATE:
      return std::make_unique<base::Value>("deflate");
    case network::ContentEncoding::GZIP:
      return std::make_unique<base::Value>("gzip");
    case network::ContentEncoding::BR:
      return std::make_unique<base::Value>("br");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::PrivateNetworkRequestPolicy> {
  static network::PrivateNetworkRequestPolicy Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::PrivateNetworkRequestPolicy::ALLOW;
    }
    if (value.GetString() == "Allow")
      return network::PrivateNetworkRequestPolicy::ALLOW;
    if (value.GetString() == "BlockFromInsecureToMorePrivate")
      return network::PrivateNetworkRequestPolicy::BLOCK_FROM_INSECURE_TO_MORE_PRIVATE;
    if (value.GetString() == "WarnFromInsecureToMorePrivate")
      return network::PrivateNetworkRequestPolicy::WARN_FROM_INSECURE_TO_MORE_PRIVATE;
    if (value.GetString() == "PreflightBlock")
      return network::PrivateNetworkRequestPolicy::PREFLIGHT_BLOCK;
    if (value.GetString() == "PreflightWarn")
      return network::PrivateNetworkRequestPolicy::PREFLIGHT_WARN;
    errors->AddError("invalid enum value");
    return network::PrivateNetworkRequestPolicy::ALLOW;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::PrivateNetworkRequestPolicy& value, T*) {
  switch (value) {
    case network::PrivateNetworkRequestPolicy::ALLOW:
      return std::make_unique<base::Value>("Allow");
    case network::PrivateNetworkRequestPolicy::BLOCK_FROM_INSECURE_TO_MORE_PRIVATE:
      return std::make_unique<base::Value>("BlockFromInsecureToMorePrivate");
    case network::PrivateNetworkRequestPolicy::WARN_FROM_INSECURE_TO_MORE_PRIVATE:
      return std::make_unique<base::Value>("WarnFromInsecureToMorePrivate");
    case network::PrivateNetworkRequestPolicy::PREFLIGHT_BLOCK:
      return std::make_unique<base::Value>("PreflightBlock");
    case network::PrivateNetworkRequestPolicy::PREFLIGHT_WARN:
      return std::make_unique<base::Value>("PreflightWarn");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::IPAddressSpace> {
  static network::IPAddressSpace Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::IPAddressSpace::LOCAL;
    }
    if (value.GetString() == "Local")
      return network::IPAddressSpace::LOCAL;
    if (value.GetString() == "Private")
      return network::IPAddressSpace::PRIVATE;
    if (value.GetString() == "Public")
      return network::IPAddressSpace::PUBLIC;
    if (value.GetString() == "Unknown")
      return network::IPAddressSpace::UNKNOWN;
    errors->AddError("invalid enum value");
    return network::IPAddressSpace::LOCAL;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::IPAddressSpace& value, T*) {
  switch (value) {
    case network::IPAddressSpace::LOCAL:
      return std::make_unique<base::Value>("Local");
    case network::IPAddressSpace::PRIVATE:
      return std::make_unique<base::Value>("Private");
    case network::IPAddressSpace::PUBLIC:
      return std::make_unique<base::Value>("Public");
    case network::IPAddressSpace::UNKNOWN:
      return std::make_unique<base::Value>("Unknown");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::ConnectTiming> {
  static std::unique_ptr<network::ConnectTiming> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ConnectTiming::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ConnectTiming& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ClientSecurityState> {
  static std::unique_ptr<network::ClientSecurityState> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ClientSecurityState::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ClientSecurityState& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::CrossOriginOpenerPolicyValue> {
  static network::CrossOriginOpenerPolicyValue Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::CrossOriginOpenerPolicyValue::SAME_ORIGIN;
    }
    if (value.GetString() == "SameOrigin")
      return network::CrossOriginOpenerPolicyValue::SAME_ORIGIN;
    if (value.GetString() == "SameOriginAllowPopups")
      return network::CrossOriginOpenerPolicyValue::SAME_ORIGIN_ALLOW_POPUPS;
    if (value.GetString() == "RestrictProperties")
      return network::CrossOriginOpenerPolicyValue::RESTRICT_PROPERTIES;
    if (value.GetString() == "UnsafeNone")
      return network::CrossOriginOpenerPolicyValue::UNSAFE_NONE;
    if (value.GetString() == "SameOriginPlusCoep")
      return network::CrossOriginOpenerPolicyValue::SAME_ORIGIN_PLUS_COEP;
    if (value.GetString() == "RestrictPropertiesPlusCoep")
      return network::CrossOriginOpenerPolicyValue::RESTRICT_PROPERTIES_PLUS_COEP;
    errors->AddError("invalid enum value");
    return network::CrossOriginOpenerPolicyValue::SAME_ORIGIN;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CrossOriginOpenerPolicyValue& value, T*) {
  switch (value) {
    case network::CrossOriginOpenerPolicyValue::SAME_ORIGIN:
      return std::make_unique<base::Value>("SameOrigin");
    case network::CrossOriginOpenerPolicyValue::SAME_ORIGIN_ALLOW_POPUPS:
      return std::make_unique<base::Value>("SameOriginAllowPopups");
    case network::CrossOriginOpenerPolicyValue::RESTRICT_PROPERTIES:
      return std::make_unique<base::Value>("RestrictProperties");
    case network::CrossOriginOpenerPolicyValue::UNSAFE_NONE:
      return std::make_unique<base::Value>("UnsafeNone");
    case network::CrossOriginOpenerPolicyValue::SAME_ORIGIN_PLUS_COEP:
      return std::make_unique<base::Value>("SameOriginPlusCoep");
    case network::CrossOriginOpenerPolicyValue::RESTRICT_PROPERTIES_PLUS_COEP:
      return std::make_unique<base::Value>("RestrictPropertiesPlusCoep");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::CrossOriginOpenerPolicyStatus> {
  static std::unique_ptr<network::CrossOriginOpenerPolicyStatus> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CrossOriginOpenerPolicyStatus::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CrossOriginOpenerPolicyStatus& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::CrossOriginEmbedderPolicyValue> {
  static network::CrossOriginEmbedderPolicyValue Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::CrossOriginEmbedderPolicyValue::NONE;
    }
    if (value.GetString() == "None")
      return network::CrossOriginEmbedderPolicyValue::NONE;
    if (value.GetString() == "Credentialless")
      return network::CrossOriginEmbedderPolicyValue::CREDENTIALLESS;
    if (value.GetString() == "RequireCorp")
      return network::CrossOriginEmbedderPolicyValue::REQUIRE_CORP;
    errors->AddError("invalid enum value");
    return network::CrossOriginEmbedderPolicyValue::NONE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CrossOriginEmbedderPolicyValue& value, T*) {
  switch (value) {
    case network::CrossOriginEmbedderPolicyValue::NONE:
      return std::make_unique<base::Value>("None");
    case network::CrossOriginEmbedderPolicyValue::CREDENTIALLESS:
      return std::make_unique<base::Value>("Credentialless");
    case network::CrossOriginEmbedderPolicyValue::REQUIRE_CORP:
      return std::make_unique<base::Value>("RequireCorp");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::CrossOriginEmbedderPolicyStatus> {
  static std::unique_ptr<network::CrossOriginEmbedderPolicyStatus> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CrossOriginEmbedderPolicyStatus::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CrossOriginEmbedderPolicyStatus& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SecurityIsolationStatus> {
  static std::unique_ptr<network::SecurityIsolationStatus> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SecurityIsolationStatus::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SecurityIsolationStatus& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::ReportStatus> {
  static network::ReportStatus Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::ReportStatus::QUEUED;
    }
    if (value.GetString() == "Queued")
      return network::ReportStatus::QUEUED;
    if (value.GetString() == "Pending")
      return network::ReportStatus::PENDING;
    if (value.GetString() == "MarkedForRemoval")
      return network::ReportStatus::MARKED_FOR_REMOVAL;
    if (value.GetString() == "Success")
      return network::ReportStatus::SUCCESS;
    errors->AddError("invalid enum value");
    return network::ReportStatus::QUEUED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ReportStatus& value, T*) {
  switch (value) {
    case network::ReportStatus::QUEUED:
      return std::make_unique<base::Value>("Queued");
    case network::ReportStatus::PENDING:
      return std::make_unique<base::Value>("Pending");
    case network::ReportStatus::MARKED_FOR_REMOVAL:
      return std::make_unique<base::Value>("MarkedForRemoval");
    case network::ReportStatus::SUCCESS:
      return std::make_unique<base::Value>("Success");
  };
  NOTREACHED();
  return nullptr;
}


template <>
struct FromValue<network::ReportingApiReport> {
  static std::unique_ptr<network::ReportingApiReport> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ReportingApiReport::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ReportingApiReport& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ReportingApiEndpoint> {
  static std::unique_ptr<network::ReportingApiEndpoint> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ReportingApiEndpoint::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ReportingApiEndpoint& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::LoadNetworkResourcePageResult> {
  static std::unique_ptr<network::LoadNetworkResourcePageResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::LoadNetworkResourcePageResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::LoadNetworkResourcePageResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::LoadNetworkResourceOptions> {
  static std::unique_ptr<network::LoadNetworkResourceOptions> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::LoadNetworkResourceOptions::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::LoadNetworkResourceOptions& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::RequestReferrerPolicy> {
  static network::RequestReferrerPolicy Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::RequestReferrerPolicy::UNSAFE_URL;
    }
    if (value.GetString() == "unsafe-url")
      return network::RequestReferrerPolicy::UNSAFE_URL;
    if (value.GetString() == "no-referrer-when-downgrade")
      return network::RequestReferrerPolicy::NO_REFERRER_WHEN_DOWNGRADE;
    if (value.GetString() == "no-referrer")
      return network::RequestReferrerPolicy::NO_REFERRER;
    if (value.GetString() == "origin")
      return network::RequestReferrerPolicy::ORIGIN;
    if (value.GetString() == "origin-when-cross-origin")
      return network::RequestReferrerPolicy::ORIGIN_WHEN_CROSS_ORIGIN;
    if (value.GetString() == "same-origin")
      return network::RequestReferrerPolicy::SAME_ORIGIN;
    if (value.GetString() == "strict-origin")
      return network::RequestReferrerPolicy::STRICT_ORIGIN;
    if (value.GetString() == "strict-origin-when-cross-origin")
      return network::RequestReferrerPolicy::STRICT_ORIGIN_WHEN_CROSS_ORIGIN;
    errors->AddError("invalid enum value");
    return network::RequestReferrerPolicy::UNSAFE_URL;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::RequestReferrerPolicy& value, T*) {
  switch (value) {
    case network::RequestReferrerPolicy::UNSAFE_URL:
      return std::make_unique<base::Value>("unsafe-url");
    case network::RequestReferrerPolicy::NO_REFERRER_WHEN_DOWNGRADE:
      return std::make_unique<base::Value>("no-referrer-when-downgrade");
    case network::RequestReferrerPolicy::NO_REFERRER:
      return std::make_unique<base::Value>("no-referrer");
    case network::RequestReferrerPolicy::ORIGIN:
      return std::make_unique<base::Value>("origin");
    case network::RequestReferrerPolicy::ORIGIN_WHEN_CROSS_ORIGIN:
      return std::make_unique<base::Value>("origin-when-cross-origin");
    case network::RequestReferrerPolicy::SAME_ORIGIN:
      return std::make_unique<base::Value>("same-origin");
    case network::RequestReferrerPolicy::STRICT_ORIGIN:
      return std::make_unique<base::Value>("strict-origin");
    case network::RequestReferrerPolicy::STRICT_ORIGIN_WHEN_CROSS_ORIGIN:
      return std::make_unique<base::Value>("strict-origin-when-cross-origin");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::TrustTokenParamsRefreshPolicy> {
  static network::TrustTokenParamsRefreshPolicy Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::TrustTokenParamsRefreshPolicy::USE_CACHED;
    }
    if (value.GetString() == "UseCached")
      return network::TrustTokenParamsRefreshPolicy::USE_CACHED;
    if (value.GetString() == "Refresh")
      return network::TrustTokenParamsRefreshPolicy::REFRESH;
    errors->AddError("invalid enum value");
    return network::TrustTokenParamsRefreshPolicy::USE_CACHED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::TrustTokenParamsRefreshPolicy& value, T*) {
  switch (value) {
    case network::TrustTokenParamsRefreshPolicy::USE_CACHED:
      return std::make_unique<base::Value>("UseCached");
    case network::TrustTokenParamsRefreshPolicy::REFRESH:
      return std::make_unique<base::Value>("Refresh");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::InitiatorType> {
  static network::InitiatorType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::InitiatorType::PARSER;
    }
    if (value.GetString() == "parser")
      return network::InitiatorType::PARSER;
    if (value.GetString() == "script")
      return network::InitiatorType::SCRIPT;
    if (value.GetString() == "preload")
      return network::InitiatorType::PRELOAD;
    if (value.GetString() == "SignedExchange")
      return network::InitiatorType::SIGNED_EXCHANGE;
    if (value.GetString() == "preflight")
      return network::InitiatorType::PREFLIGHT;
    if (value.GetString() == "other")
      return network::InitiatorType::OTHER;
    errors->AddError("invalid enum value");
    return network::InitiatorType::PARSER;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::InitiatorType& value, T*) {
  switch (value) {
    case network::InitiatorType::PARSER:
      return std::make_unique<base::Value>("parser");
    case network::InitiatorType::SCRIPT:
      return std::make_unique<base::Value>("script");
    case network::InitiatorType::PRELOAD:
      return std::make_unique<base::Value>("preload");
    case network::InitiatorType::SIGNED_EXCHANGE:
      return std::make_unique<base::Value>("SignedExchange");
    case network::InitiatorType::PREFLIGHT:
      return std::make_unique<base::Value>("preflight");
    case network::InitiatorType::OTHER:
      return std::make_unique<base::Value>("other");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::AuthChallengeSource> {
  static network::AuthChallengeSource Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::AuthChallengeSource::SERVER;
    }
    if (value.GetString() == "Server")
      return network::AuthChallengeSource::SERVER;
    if (value.GetString() == "Proxy")
      return network::AuthChallengeSource::PROXY;
    errors->AddError("invalid enum value");
    return network::AuthChallengeSource::SERVER;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::AuthChallengeSource& value, T*) {
  switch (value) {
    case network::AuthChallengeSource::SERVER:
      return std::make_unique<base::Value>("Server");
    case network::AuthChallengeSource::PROXY:
      return std::make_unique<base::Value>("Proxy");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<network::AuthChallengeResponseResponse> {
  static network::AuthChallengeResponseResponse Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::AuthChallengeResponseResponse::DEFAULT;
    }
    if (value.GetString() == "Default")
      return network::AuthChallengeResponseResponse::DEFAULT;
    if (value.GetString() == "CancelAuth")
      return network::AuthChallengeResponseResponse::CANCEL_AUTH;
    if (value.GetString() == "ProvideCredentials")
      return network::AuthChallengeResponseResponse::PROVIDE_CREDENTIALS;
    errors->AddError("invalid enum value");
    return network::AuthChallengeResponseResponse::DEFAULT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::AuthChallengeResponseResponse& value, T*) {
  switch (value) {
    case network::AuthChallengeResponseResponse::DEFAULT:
      return std::make_unique<base::Value>("Default");
    case network::AuthChallengeResponseResponse::CANCEL_AUTH:
      return std::make_unique<base::Value>("CancelAuth");
    case network::AuthChallengeResponseResponse::PROVIDE_CREDENTIALS:
      return std::make_unique<base::Value>("ProvideCredentials");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::SetAcceptedEncodingsParams> {
  static std::unique_ptr<network::SetAcceptedEncodingsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetAcceptedEncodingsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetAcceptedEncodingsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetAcceptedEncodingsResult> {
  static std::unique_ptr<network::SetAcceptedEncodingsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetAcceptedEncodingsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetAcceptedEncodingsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ClearAcceptedEncodingsOverrideParams> {
  static std::unique_ptr<network::ClearAcceptedEncodingsOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ClearAcceptedEncodingsOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ClearAcceptedEncodingsOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ClearAcceptedEncodingsOverrideResult> {
  static std::unique_ptr<network::ClearAcceptedEncodingsOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ClearAcceptedEncodingsOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ClearAcceptedEncodingsOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CanClearBrowserCacheParams> {
  static std::unique_ptr<network::CanClearBrowserCacheParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CanClearBrowserCacheParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CanClearBrowserCacheParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CanClearBrowserCacheResult> {
  static std::unique_ptr<network::CanClearBrowserCacheResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CanClearBrowserCacheResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CanClearBrowserCacheResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CanClearBrowserCookiesParams> {
  static std::unique_ptr<network::CanClearBrowserCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CanClearBrowserCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CanClearBrowserCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CanClearBrowserCookiesResult> {
  static std::unique_ptr<network::CanClearBrowserCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CanClearBrowserCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CanClearBrowserCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CanEmulateNetworkConditionsParams> {
  static std::unique_ptr<network::CanEmulateNetworkConditionsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CanEmulateNetworkConditionsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CanEmulateNetworkConditionsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::CanEmulateNetworkConditionsResult> {
  static std::unique_ptr<network::CanEmulateNetworkConditionsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::CanEmulateNetworkConditionsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::CanEmulateNetworkConditionsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ClearBrowserCacheParams> {
  static std::unique_ptr<network::ClearBrowserCacheParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ClearBrowserCacheParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ClearBrowserCacheParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ClearBrowserCacheResult> {
  static std::unique_ptr<network::ClearBrowserCacheResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ClearBrowserCacheResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ClearBrowserCacheResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ClearBrowserCookiesParams> {
  static std::unique_ptr<network::ClearBrowserCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ClearBrowserCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ClearBrowserCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ClearBrowserCookiesResult> {
  static std::unique_ptr<network::ClearBrowserCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ClearBrowserCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ClearBrowserCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ContinueInterceptedRequestParams> {
  static std::unique_ptr<network::ContinueInterceptedRequestParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ContinueInterceptedRequestParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ContinueInterceptedRequestParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ContinueInterceptedRequestResult> {
  static std::unique_ptr<network::ContinueInterceptedRequestResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ContinueInterceptedRequestResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ContinueInterceptedRequestResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::DeleteCookiesParams> {
  static std::unique_ptr<network::DeleteCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::DeleteCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::DeleteCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::DeleteCookiesResult> {
  static std::unique_ptr<network::DeleteCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::DeleteCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::DeleteCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::DisableParams> {
  static std::unique_ptr<network::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::DisableResult> {
  static std::unique_ptr<network::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::EmulateNetworkConditionsParams> {
  static std::unique_ptr<network::EmulateNetworkConditionsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::EmulateNetworkConditionsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::EmulateNetworkConditionsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::EmulateNetworkConditionsResult> {
  static std::unique_ptr<network::EmulateNetworkConditionsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::EmulateNetworkConditionsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::EmulateNetworkConditionsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::EnableParams> {
  static std::unique_ptr<network::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::EnableResult> {
  static std::unique_ptr<network::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetAllCookiesParams> {
  static std::unique_ptr<network::GetAllCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetAllCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetAllCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetAllCookiesResult> {
  static std::unique_ptr<network::GetAllCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetAllCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetAllCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetCertificateParams> {
  static std::unique_ptr<network::GetCertificateParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetCertificateParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetCertificateParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetCertificateResult> {
  static std::unique_ptr<network::GetCertificateResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetCertificateResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetCertificateResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetCookiesParams> {
  static std::unique_ptr<network::GetCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetCookiesResult> {
  static std::unique_ptr<network::GetCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetResponseBodyParams> {
  static std::unique_ptr<network::GetResponseBodyParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetResponseBodyParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetResponseBodyParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetResponseBodyResult> {
  static std::unique_ptr<network::GetResponseBodyResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetResponseBodyResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetResponseBodyResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetRequestPostDataParams> {
  static std::unique_ptr<network::GetRequestPostDataParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetRequestPostDataParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetRequestPostDataParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetRequestPostDataResult> {
  static std::unique_ptr<network::GetRequestPostDataResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetRequestPostDataResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetRequestPostDataResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetResponseBodyForInterceptionParams> {
  static std::unique_ptr<network::GetResponseBodyForInterceptionParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetResponseBodyForInterceptionParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetResponseBodyForInterceptionParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetResponseBodyForInterceptionResult> {
  static std::unique_ptr<network::GetResponseBodyForInterceptionResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetResponseBodyForInterceptionResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetResponseBodyForInterceptionResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::TakeResponseBodyForInterceptionAsStreamParams> {
  static std::unique_ptr<network::TakeResponseBodyForInterceptionAsStreamParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::TakeResponseBodyForInterceptionAsStreamParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::TakeResponseBodyForInterceptionAsStreamParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::TakeResponseBodyForInterceptionAsStreamResult> {
  static std::unique_ptr<network::TakeResponseBodyForInterceptionAsStreamResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::TakeResponseBodyForInterceptionAsStreamResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::TakeResponseBodyForInterceptionAsStreamResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ReplayXHRParams> {
  static std::unique_ptr<network::ReplayXHRParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ReplayXHRParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ReplayXHRParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ReplayXHRResult> {
  static std::unique_ptr<network::ReplayXHRResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ReplayXHRResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ReplayXHRResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SearchInResponseBodyParams> {
  static std::unique_ptr<network::SearchInResponseBodyParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SearchInResponseBodyParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SearchInResponseBodyParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SearchInResponseBodyResult> {
  static std::unique_ptr<network::SearchInResponseBodyResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SearchInResponseBodyResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SearchInResponseBodyResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetBlockedURLsParams> {
  static std::unique_ptr<network::SetBlockedURLsParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetBlockedURLsParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetBlockedURLsParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetBlockedURLsResult> {
  static std::unique_ptr<network::SetBlockedURLsResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetBlockedURLsResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetBlockedURLsResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetBypassServiceWorkerParams> {
  static std::unique_ptr<network::SetBypassServiceWorkerParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetBypassServiceWorkerParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetBypassServiceWorkerParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetBypassServiceWorkerResult> {
  static std::unique_ptr<network::SetBypassServiceWorkerResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetBypassServiceWorkerResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetBypassServiceWorkerResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetCacheDisabledParams> {
  static std::unique_ptr<network::SetCacheDisabledParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetCacheDisabledParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetCacheDisabledParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetCacheDisabledResult> {
  static std::unique_ptr<network::SetCacheDisabledResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetCacheDisabledResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetCacheDisabledResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetCookieParams> {
  static std::unique_ptr<network::SetCookieParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetCookieParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetCookieParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetCookieResult> {
  static std::unique_ptr<network::SetCookieResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetCookieResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetCookieResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetCookiesParams> {
  static std::unique_ptr<network::SetCookiesParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetCookiesParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetCookiesParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetCookiesResult> {
  static std::unique_ptr<network::SetCookiesResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetCookiesResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetCookiesResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetExtraHTTPHeadersParams> {
  static std::unique_ptr<network::SetExtraHTTPHeadersParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetExtraHTTPHeadersParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetExtraHTTPHeadersParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetExtraHTTPHeadersResult> {
  static std::unique_ptr<network::SetExtraHTTPHeadersResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetExtraHTTPHeadersResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetExtraHTTPHeadersResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetAttachDebugStackParams> {
  static std::unique_ptr<network::SetAttachDebugStackParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetAttachDebugStackParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetAttachDebugStackParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetAttachDebugStackResult> {
  static std::unique_ptr<network::SetAttachDebugStackResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetAttachDebugStackResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetAttachDebugStackResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetRequestInterceptionParams> {
  static std::unique_ptr<network::SetRequestInterceptionParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetRequestInterceptionParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetRequestInterceptionParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetRequestInterceptionResult> {
  static std::unique_ptr<network::SetRequestInterceptionResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetRequestInterceptionResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetRequestInterceptionResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetUserAgentOverrideParams> {
  static std::unique_ptr<network::SetUserAgentOverrideParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetUserAgentOverrideParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetUserAgentOverrideParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SetUserAgentOverrideResult> {
  static std::unique_ptr<network::SetUserAgentOverrideResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SetUserAgentOverrideResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SetUserAgentOverrideResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetSecurityIsolationStatusParams> {
  static std::unique_ptr<network::GetSecurityIsolationStatusParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetSecurityIsolationStatusParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetSecurityIsolationStatusParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::GetSecurityIsolationStatusResult> {
  static std::unique_ptr<network::GetSecurityIsolationStatusResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::GetSecurityIsolationStatusResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::GetSecurityIsolationStatusResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::EnableReportingApiParams> {
  static std::unique_ptr<network::EnableReportingApiParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::EnableReportingApiParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::EnableReportingApiParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::EnableReportingApiResult> {
  static std::unique_ptr<network::EnableReportingApiResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::EnableReportingApiResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::EnableReportingApiResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::LoadNetworkResourceParams> {
  static std::unique_ptr<network::LoadNetworkResourceParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::LoadNetworkResourceParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::LoadNetworkResourceParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::LoadNetworkResourceResult> {
  static std::unique_ptr<network::LoadNetworkResourceResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::LoadNetworkResourceResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::LoadNetworkResourceResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::DataReceivedParams> {
  static std::unique_ptr<network::DataReceivedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::DataReceivedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::DataReceivedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::EventSourceMessageReceivedParams> {
  static std::unique_ptr<network::EventSourceMessageReceivedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::EventSourceMessageReceivedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::EventSourceMessageReceivedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::LoadingFailedParams> {
  static std::unique_ptr<network::LoadingFailedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::LoadingFailedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::LoadingFailedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::LoadingFinishedParams> {
  static std::unique_ptr<network::LoadingFinishedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::LoadingFinishedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::LoadingFinishedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::RequestInterceptedParams> {
  static std::unique_ptr<network::RequestInterceptedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::RequestInterceptedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::RequestInterceptedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::RequestServedFromCacheParams> {
  static std::unique_ptr<network::RequestServedFromCacheParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::RequestServedFromCacheParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::RequestServedFromCacheParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::RequestWillBeSentParams> {
  static std::unique_ptr<network::RequestWillBeSentParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::RequestWillBeSentParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::RequestWillBeSentParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ResourceChangedPriorityParams> {
  static std::unique_ptr<network::ResourceChangedPriorityParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ResourceChangedPriorityParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ResourceChangedPriorityParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SignedExchangeReceivedParams> {
  static std::unique_ptr<network::SignedExchangeReceivedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SignedExchangeReceivedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SignedExchangeReceivedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ResponseReceivedParams> {
  static std::unique_ptr<network::ResponseReceivedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ResponseReceivedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ResponseReceivedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketClosedParams> {
  static std::unique_ptr<network::WebSocketClosedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketClosedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketClosedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketCreatedParams> {
  static std::unique_ptr<network::WebSocketCreatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketCreatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketCreatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketFrameErrorParams> {
  static std::unique_ptr<network::WebSocketFrameErrorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketFrameErrorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketFrameErrorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketFrameReceivedParams> {
  static std::unique_ptr<network::WebSocketFrameReceivedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketFrameReceivedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketFrameReceivedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketFrameSentParams> {
  static std::unique_ptr<network::WebSocketFrameSentParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketFrameSentParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketFrameSentParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketHandshakeResponseReceivedParams> {
  static std::unique_ptr<network::WebSocketHandshakeResponseReceivedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketHandshakeResponseReceivedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketHandshakeResponseReceivedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebSocketWillSendHandshakeRequestParams> {
  static std::unique_ptr<network::WebSocketWillSendHandshakeRequestParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebSocketWillSendHandshakeRequestParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebSocketWillSendHandshakeRequestParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebTransportCreatedParams> {
  static std::unique_ptr<network::WebTransportCreatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebTransportCreatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebTransportCreatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebTransportConnectionEstablishedParams> {
  static std::unique_ptr<network::WebTransportConnectionEstablishedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebTransportConnectionEstablishedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebTransportConnectionEstablishedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::WebTransportClosedParams> {
  static std::unique_ptr<network::WebTransportClosedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::WebTransportClosedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::WebTransportClosedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::RequestWillBeSentExtraInfoParams> {
  static std::unique_ptr<network::RequestWillBeSentExtraInfoParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::RequestWillBeSentExtraInfoParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::RequestWillBeSentExtraInfoParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ResponseReceivedExtraInfoParams> {
  static std::unique_ptr<network::ResponseReceivedExtraInfoParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ResponseReceivedExtraInfoParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ResponseReceivedExtraInfoParams& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<network::TrustTokenOperationDoneStatus> {
  static network::TrustTokenOperationDoneStatus Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return network::TrustTokenOperationDoneStatus::OK;
    }
    if (value.GetString() == "Ok")
      return network::TrustTokenOperationDoneStatus::OK;
    if (value.GetString() == "InvalidArgument")
      return network::TrustTokenOperationDoneStatus::INVALID_ARGUMENT;
    if (value.GetString() == "FailedPrecondition")
      return network::TrustTokenOperationDoneStatus::FAILED_PRECONDITION;
    if (value.GetString() == "ResourceExhausted")
      return network::TrustTokenOperationDoneStatus::RESOURCE_EXHAUSTED;
    if (value.GetString() == "AlreadyExists")
      return network::TrustTokenOperationDoneStatus::ALREADY_EXISTS;
    if (value.GetString() == "Unavailable")
      return network::TrustTokenOperationDoneStatus::UNAVAILABLE;
    if (value.GetString() == "BadResponse")
      return network::TrustTokenOperationDoneStatus::BAD_RESPONSE;
    if (value.GetString() == "InternalError")
      return network::TrustTokenOperationDoneStatus::INTERNAL_ERROR;
    if (value.GetString() == "UnknownError")
      return network::TrustTokenOperationDoneStatus::UNKNOWN_ERROR;
    if (value.GetString() == "FulfilledLocally")
      return network::TrustTokenOperationDoneStatus::FULFILLED_LOCALLY;
    errors->AddError("invalid enum value");
    return network::TrustTokenOperationDoneStatus::OK;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::TrustTokenOperationDoneStatus& value, T*) {
  switch (value) {
    case network::TrustTokenOperationDoneStatus::OK:
      return std::make_unique<base::Value>("Ok");
    case network::TrustTokenOperationDoneStatus::INVALID_ARGUMENT:
      return std::make_unique<base::Value>("InvalidArgument");
    case network::TrustTokenOperationDoneStatus::FAILED_PRECONDITION:
      return std::make_unique<base::Value>("FailedPrecondition");
    case network::TrustTokenOperationDoneStatus::RESOURCE_EXHAUSTED:
      return std::make_unique<base::Value>("ResourceExhausted");
    case network::TrustTokenOperationDoneStatus::ALREADY_EXISTS:
      return std::make_unique<base::Value>("AlreadyExists");
    case network::TrustTokenOperationDoneStatus::UNAVAILABLE:
      return std::make_unique<base::Value>("Unavailable");
    case network::TrustTokenOperationDoneStatus::BAD_RESPONSE:
      return std::make_unique<base::Value>("BadResponse");
    case network::TrustTokenOperationDoneStatus::INTERNAL_ERROR:
      return std::make_unique<base::Value>("InternalError");
    case network::TrustTokenOperationDoneStatus::UNKNOWN_ERROR:
      return std::make_unique<base::Value>("UnknownError");
    case network::TrustTokenOperationDoneStatus::FULFILLED_LOCALLY:
      return std::make_unique<base::Value>("FulfilledLocally");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<network::TrustTokenOperationDoneParams> {
  static std::unique_ptr<network::TrustTokenOperationDoneParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::TrustTokenOperationDoneParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::TrustTokenOperationDoneParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SubresourceWebBundleMetadataReceivedParams> {
  static std::unique_ptr<network::SubresourceWebBundleMetadataReceivedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SubresourceWebBundleMetadataReceivedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SubresourceWebBundleMetadataReceivedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SubresourceWebBundleMetadataErrorParams> {
  static std::unique_ptr<network::SubresourceWebBundleMetadataErrorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SubresourceWebBundleMetadataErrorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SubresourceWebBundleMetadataErrorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SubresourceWebBundleInnerResponseParsedParams> {
  static std::unique_ptr<network::SubresourceWebBundleInnerResponseParsedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SubresourceWebBundleInnerResponseParsedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SubresourceWebBundleInnerResponseParsedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::SubresourceWebBundleInnerResponseErrorParams> {
  static std::unique_ptr<network::SubresourceWebBundleInnerResponseErrorParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::SubresourceWebBundleInnerResponseErrorParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::SubresourceWebBundleInnerResponseErrorParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ReportingApiReportAddedParams> {
  static std::unique_ptr<network::ReportingApiReportAddedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ReportingApiReportAddedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ReportingApiReportAddedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ReportingApiReportUpdatedParams> {
  static std::unique_ptr<network::ReportingApiReportUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ReportingApiReportUpdatedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ReportingApiReportUpdatedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<network::ReportingApiEndpointsChangedForOriginParams> {
  static std::unique_ptr<network::ReportingApiEndpointsChangedForOriginParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return network::ReportingApiEndpointsChangedForOriginParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const network::ReportingApiEndpointsChangedForOriginParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_NETWORK_H_
