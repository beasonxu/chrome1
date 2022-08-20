// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_AUDITS_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_AUDITS_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_audits.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<audits::AffectedCookie> {
  static std::unique_ptr<audits::AffectedCookie> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::AffectedCookie::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::AffectedCookie& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::AffectedRequest> {
  static std::unique_ptr<audits::AffectedRequest> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::AffectedRequest::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::AffectedRequest& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::AffectedFrame> {
  static std::unique_ptr<audits::AffectedFrame> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::AffectedFrame::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::AffectedFrame& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::CookieExclusionReason> {
  static audits::CookieExclusionReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::CookieExclusionReason::EXCLUDE_SAME_SITE_UNSPECIFIED_TREATED_AS_LAX;
    }
    if (value.GetString() == "ExcludeSameSiteUnspecifiedTreatedAsLax")
      return audits::CookieExclusionReason::EXCLUDE_SAME_SITE_UNSPECIFIED_TREATED_AS_LAX;
    if (value.GetString() == "ExcludeSameSiteNoneInsecure")
      return audits::CookieExclusionReason::EXCLUDE_SAME_SITE_NONE_INSECURE;
    if (value.GetString() == "ExcludeSameSiteLax")
      return audits::CookieExclusionReason::EXCLUDE_SAME_SITE_LAX;
    if (value.GetString() == "ExcludeSameSiteStrict")
      return audits::CookieExclusionReason::EXCLUDE_SAME_SITE_STRICT;
    if (value.GetString() == "ExcludeInvalidSameParty")
      return audits::CookieExclusionReason::EXCLUDE_INVALID_SAME_PARTY;
    if (value.GetString() == "ExcludeSamePartyCrossPartyContext")
      return audits::CookieExclusionReason::EXCLUDE_SAME_PARTY_CROSS_PARTY_CONTEXT;
    if (value.GetString() == "ExcludeDomainNonASCII")
      return audits::CookieExclusionReason::EXCLUDE_DOMAIN_NONASCII;
    errors->AddError("invalid enum value");
    return audits::CookieExclusionReason::EXCLUDE_SAME_SITE_UNSPECIFIED_TREATED_AS_LAX;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::CookieExclusionReason& value, T*) {
  switch (value) {
    case audits::CookieExclusionReason::EXCLUDE_SAME_SITE_UNSPECIFIED_TREATED_AS_LAX:
      return std::make_unique<base::Value>("ExcludeSameSiteUnspecifiedTreatedAsLax");
    case audits::CookieExclusionReason::EXCLUDE_SAME_SITE_NONE_INSECURE:
      return std::make_unique<base::Value>("ExcludeSameSiteNoneInsecure");
    case audits::CookieExclusionReason::EXCLUDE_SAME_SITE_LAX:
      return std::make_unique<base::Value>("ExcludeSameSiteLax");
    case audits::CookieExclusionReason::EXCLUDE_SAME_SITE_STRICT:
      return std::make_unique<base::Value>("ExcludeSameSiteStrict");
    case audits::CookieExclusionReason::EXCLUDE_INVALID_SAME_PARTY:
      return std::make_unique<base::Value>("ExcludeInvalidSameParty");
    case audits::CookieExclusionReason::EXCLUDE_SAME_PARTY_CROSS_PARTY_CONTEXT:
      return std::make_unique<base::Value>("ExcludeSamePartyCrossPartyContext");
    case audits::CookieExclusionReason::EXCLUDE_DOMAIN_NONASCII:
      return std::make_unique<base::Value>("ExcludeDomainNonASCII");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<audits::CookieWarningReason> {
  static audits::CookieWarningReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::CookieWarningReason::WARN_SAME_SITE_UNSPECIFIED_CROSS_SITE_CONTEXT;
    }
    if (value.GetString() == "WarnSameSiteUnspecifiedCrossSiteContext")
      return audits::CookieWarningReason::WARN_SAME_SITE_UNSPECIFIED_CROSS_SITE_CONTEXT;
    if (value.GetString() == "WarnSameSiteNoneInsecure")
      return audits::CookieWarningReason::WARN_SAME_SITE_NONE_INSECURE;
    if (value.GetString() == "WarnSameSiteUnspecifiedLaxAllowUnsafe")
      return audits::CookieWarningReason::WARN_SAME_SITE_UNSPECIFIED_LAX_ALLOW_UNSAFE;
    if (value.GetString() == "WarnSameSiteStrictLaxDowngradeStrict")
      return audits::CookieWarningReason::WARN_SAME_SITE_STRICT_LAX_DOWNGRADE_STRICT;
    if (value.GetString() == "WarnSameSiteStrictCrossDowngradeStrict")
      return audits::CookieWarningReason::WARN_SAME_SITE_STRICT_CROSS_DOWNGRADE_STRICT;
    if (value.GetString() == "WarnSameSiteStrictCrossDowngradeLax")
      return audits::CookieWarningReason::WARN_SAME_SITE_STRICT_CROSS_DOWNGRADE_LAX;
    if (value.GetString() == "WarnSameSiteLaxCrossDowngradeStrict")
      return audits::CookieWarningReason::WARN_SAME_SITE_LAX_CROSS_DOWNGRADE_STRICT;
    if (value.GetString() == "WarnSameSiteLaxCrossDowngradeLax")
      return audits::CookieWarningReason::WARN_SAME_SITE_LAX_CROSS_DOWNGRADE_LAX;
    if (value.GetString() == "WarnAttributeValueExceedsMaxSize")
      return audits::CookieWarningReason::WARN_ATTRIBUTE_VALUE_EXCEEDS_MAX_SIZE;
    if (value.GetString() == "WarnDomainNonASCII")
      return audits::CookieWarningReason::WARN_DOMAIN_NONASCII;
    errors->AddError("invalid enum value");
    return audits::CookieWarningReason::WARN_SAME_SITE_UNSPECIFIED_CROSS_SITE_CONTEXT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::CookieWarningReason& value, T*) {
  switch (value) {
    case audits::CookieWarningReason::WARN_SAME_SITE_UNSPECIFIED_CROSS_SITE_CONTEXT:
      return std::make_unique<base::Value>("WarnSameSiteUnspecifiedCrossSiteContext");
    case audits::CookieWarningReason::WARN_SAME_SITE_NONE_INSECURE:
      return std::make_unique<base::Value>("WarnSameSiteNoneInsecure");
    case audits::CookieWarningReason::WARN_SAME_SITE_UNSPECIFIED_LAX_ALLOW_UNSAFE:
      return std::make_unique<base::Value>("WarnSameSiteUnspecifiedLaxAllowUnsafe");
    case audits::CookieWarningReason::WARN_SAME_SITE_STRICT_LAX_DOWNGRADE_STRICT:
      return std::make_unique<base::Value>("WarnSameSiteStrictLaxDowngradeStrict");
    case audits::CookieWarningReason::WARN_SAME_SITE_STRICT_CROSS_DOWNGRADE_STRICT:
      return std::make_unique<base::Value>("WarnSameSiteStrictCrossDowngradeStrict");
    case audits::CookieWarningReason::WARN_SAME_SITE_STRICT_CROSS_DOWNGRADE_LAX:
      return std::make_unique<base::Value>("WarnSameSiteStrictCrossDowngradeLax");
    case audits::CookieWarningReason::WARN_SAME_SITE_LAX_CROSS_DOWNGRADE_STRICT:
      return std::make_unique<base::Value>("WarnSameSiteLaxCrossDowngradeStrict");
    case audits::CookieWarningReason::WARN_SAME_SITE_LAX_CROSS_DOWNGRADE_LAX:
      return std::make_unique<base::Value>("WarnSameSiteLaxCrossDowngradeLax");
    case audits::CookieWarningReason::WARN_ATTRIBUTE_VALUE_EXCEEDS_MAX_SIZE:
      return std::make_unique<base::Value>("WarnAttributeValueExceedsMaxSize");
    case audits::CookieWarningReason::WARN_DOMAIN_NONASCII:
      return std::make_unique<base::Value>("WarnDomainNonASCII");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<audits::CookieOperation> {
  static audits::CookieOperation Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::CookieOperation::SET_COOKIE;
    }
    if (value.GetString() == "SetCookie")
      return audits::CookieOperation::SET_COOKIE;
    if (value.GetString() == "ReadCookie")
      return audits::CookieOperation::READ_COOKIE;
    errors->AddError("invalid enum value");
    return audits::CookieOperation::SET_COOKIE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::CookieOperation& value, T*) {
  switch (value) {
    case audits::CookieOperation::SET_COOKIE:
      return std::make_unique<base::Value>("SetCookie");
    case audits::CookieOperation::READ_COOKIE:
      return std::make_unique<base::Value>("ReadCookie");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::CookieIssueDetails> {
  static std::unique_ptr<audits::CookieIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::CookieIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::CookieIssueDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::MixedContentResolutionStatus> {
  static audits::MixedContentResolutionStatus Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::MixedContentResolutionStatus::MIXED_CONTENT_BLOCKED;
    }
    if (value.GetString() == "MixedContentBlocked")
      return audits::MixedContentResolutionStatus::MIXED_CONTENT_BLOCKED;
    if (value.GetString() == "MixedContentAutomaticallyUpgraded")
      return audits::MixedContentResolutionStatus::MIXED_CONTENT_AUTOMATICALLY_UPGRADED;
    if (value.GetString() == "MixedContentWarning")
      return audits::MixedContentResolutionStatus::MIXED_CONTENT_WARNING;
    errors->AddError("invalid enum value");
    return audits::MixedContentResolutionStatus::MIXED_CONTENT_BLOCKED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::MixedContentResolutionStatus& value, T*) {
  switch (value) {
    case audits::MixedContentResolutionStatus::MIXED_CONTENT_BLOCKED:
      return std::make_unique<base::Value>("MixedContentBlocked");
    case audits::MixedContentResolutionStatus::MIXED_CONTENT_AUTOMATICALLY_UPGRADED:
      return std::make_unique<base::Value>("MixedContentAutomaticallyUpgraded");
    case audits::MixedContentResolutionStatus::MIXED_CONTENT_WARNING:
      return std::make_unique<base::Value>("MixedContentWarning");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<audits::MixedContentResourceType> {
  static audits::MixedContentResourceType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::MixedContentResourceType::ATTRIBUTION_SRC;
    }
    if (value.GetString() == "AttributionSrc")
      return audits::MixedContentResourceType::ATTRIBUTION_SRC;
    if (value.GetString() == "Audio")
      return audits::MixedContentResourceType::AUDIO;
    if (value.GetString() == "Beacon")
      return audits::MixedContentResourceType::BEACON;
    if (value.GetString() == "CSPReport")
      return audits::MixedContentResourceType::CSP_REPORT;
    if (value.GetString() == "Download")
      return audits::MixedContentResourceType::DOWNLOAD;
    if (value.GetString() == "EventSource")
      return audits::MixedContentResourceType::EVENT_SOURCE;
    if (value.GetString() == "Favicon")
      return audits::MixedContentResourceType::FAVICON;
    if (value.GetString() == "Font")
      return audits::MixedContentResourceType::FONT;
    if (value.GetString() == "Form")
      return audits::MixedContentResourceType::FORM;
    if (value.GetString() == "Frame")
      return audits::MixedContentResourceType::FRAME;
    if (value.GetString() == "Image")
      return audits::MixedContentResourceType::IMAGE;
    if (value.GetString() == "Import")
      return audits::MixedContentResourceType::IMPORT;
    if (value.GetString() == "Manifest")
      return audits::MixedContentResourceType::MANIFEST;
    if (value.GetString() == "Ping")
      return audits::MixedContentResourceType::PING;
    if (value.GetString() == "PluginData")
      return audits::MixedContentResourceType::PLUGIN_DATA;
    if (value.GetString() == "PluginResource")
      return audits::MixedContentResourceType::PLUGIN_RESOURCE;
    if (value.GetString() == "Prefetch")
      return audits::MixedContentResourceType::PREFETCH;
    if (value.GetString() == "Resource")
      return audits::MixedContentResourceType::RESOURCE;
    if (value.GetString() == "Script")
      return audits::MixedContentResourceType::SCRIPT;
    if (value.GetString() == "ServiceWorker")
      return audits::MixedContentResourceType::SERVICE_WORKER;
    if (value.GetString() == "SharedWorker")
      return audits::MixedContentResourceType::SHARED_WORKER;
    if (value.GetString() == "Stylesheet")
      return audits::MixedContentResourceType::STYLESHEET;
    if (value.GetString() == "Track")
      return audits::MixedContentResourceType::TRACK;
    if (value.GetString() == "Video")
      return audits::MixedContentResourceType::VIDEO;
    if (value.GetString() == "Worker")
      return audits::MixedContentResourceType::WORKER;
    if (value.GetString() == "XMLHttpRequest")
      return audits::MixedContentResourceType::XML_HTTP_REQUEST;
    if (value.GetString() == "XSLT")
      return audits::MixedContentResourceType::XSLT;
    errors->AddError("invalid enum value");
    return audits::MixedContentResourceType::ATTRIBUTION_SRC;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::MixedContentResourceType& value, T*) {
  switch (value) {
    case audits::MixedContentResourceType::ATTRIBUTION_SRC:
      return std::make_unique<base::Value>("AttributionSrc");
    case audits::MixedContentResourceType::AUDIO:
      return std::make_unique<base::Value>("Audio");
    case audits::MixedContentResourceType::BEACON:
      return std::make_unique<base::Value>("Beacon");
    case audits::MixedContentResourceType::CSP_REPORT:
      return std::make_unique<base::Value>("CSPReport");
    case audits::MixedContentResourceType::DOWNLOAD:
      return std::make_unique<base::Value>("Download");
    case audits::MixedContentResourceType::EVENT_SOURCE:
      return std::make_unique<base::Value>("EventSource");
    case audits::MixedContentResourceType::FAVICON:
      return std::make_unique<base::Value>("Favicon");
    case audits::MixedContentResourceType::FONT:
      return std::make_unique<base::Value>("Font");
    case audits::MixedContentResourceType::FORM:
      return std::make_unique<base::Value>("Form");
    case audits::MixedContentResourceType::FRAME:
      return std::make_unique<base::Value>("Frame");
    case audits::MixedContentResourceType::IMAGE:
      return std::make_unique<base::Value>("Image");
    case audits::MixedContentResourceType::IMPORT:
      return std::make_unique<base::Value>("Import");
    case audits::MixedContentResourceType::MANIFEST:
      return std::make_unique<base::Value>("Manifest");
    case audits::MixedContentResourceType::PING:
      return std::make_unique<base::Value>("Ping");
    case audits::MixedContentResourceType::PLUGIN_DATA:
      return std::make_unique<base::Value>("PluginData");
    case audits::MixedContentResourceType::PLUGIN_RESOURCE:
      return std::make_unique<base::Value>("PluginResource");
    case audits::MixedContentResourceType::PREFETCH:
      return std::make_unique<base::Value>("Prefetch");
    case audits::MixedContentResourceType::RESOURCE:
      return std::make_unique<base::Value>("Resource");
    case audits::MixedContentResourceType::SCRIPT:
      return std::make_unique<base::Value>("Script");
    case audits::MixedContentResourceType::SERVICE_WORKER:
      return std::make_unique<base::Value>("ServiceWorker");
    case audits::MixedContentResourceType::SHARED_WORKER:
      return std::make_unique<base::Value>("SharedWorker");
    case audits::MixedContentResourceType::STYLESHEET:
      return std::make_unique<base::Value>("Stylesheet");
    case audits::MixedContentResourceType::TRACK:
      return std::make_unique<base::Value>("Track");
    case audits::MixedContentResourceType::VIDEO:
      return std::make_unique<base::Value>("Video");
    case audits::MixedContentResourceType::WORKER:
      return std::make_unique<base::Value>("Worker");
    case audits::MixedContentResourceType::XML_HTTP_REQUEST:
      return std::make_unique<base::Value>("XMLHttpRequest");
    case audits::MixedContentResourceType::XSLT:
      return std::make_unique<base::Value>("XSLT");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::MixedContentIssueDetails> {
  static std::unique_ptr<audits::MixedContentIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::MixedContentIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::MixedContentIssueDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::BlockedByResponseReason> {
  static audits::BlockedByResponseReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::BlockedByResponseReason::COEP_FRAME_RESOURCE_NEEDS_COEP_HEADER;
    }
    if (value.GetString() == "CoepFrameResourceNeedsCoepHeader")
      return audits::BlockedByResponseReason::COEP_FRAME_RESOURCE_NEEDS_COEP_HEADER;
    if (value.GetString() == "CoopSandboxedIFrameCannotNavigateToCoopPage")
      return audits::BlockedByResponseReason::COOP_SANDBOXEDI_FRAME_CANNOT_NAVIGATE_TO_COOP_PAGE;
    if (value.GetString() == "CorpNotSameOrigin")
      return audits::BlockedByResponseReason::CORP_NOT_SAME_ORIGIN;
    if (value.GetString() == "CorpNotSameOriginAfterDefaultedToSameOriginByCoep")
      return audits::BlockedByResponseReason::CORP_NOT_SAME_ORIGIN_AFTER_DEFAULTED_TO_SAME_ORIGIN_BY_COEP;
    if (value.GetString() == "CorpNotSameSite")
      return audits::BlockedByResponseReason::CORP_NOT_SAME_SITE;
    errors->AddError("invalid enum value");
    return audits::BlockedByResponseReason::COEP_FRAME_RESOURCE_NEEDS_COEP_HEADER;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::BlockedByResponseReason& value, T*) {
  switch (value) {
    case audits::BlockedByResponseReason::COEP_FRAME_RESOURCE_NEEDS_COEP_HEADER:
      return std::make_unique<base::Value>("CoepFrameResourceNeedsCoepHeader");
    case audits::BlockedByResponseReason::COOP_SANDBOXEDI_FRAME_CANNOT_NAVIGATE_TO_COOP_PAGE:
      return std::make_unique<base::Value>("CoopSandboxedIFrameCannotNavigateToCoopPage");
    case audits::BlockedByResponseReason::CORP_NOT_SAME_ORIGIN:
      return std::make_unique<base::Value>("CorpNotSameOrigin");
    case audits::BlockedByResponseReason::CORP_NOT_SAME_ORIGIN_AFTER_DEFAULTED_TO_SAME_ORIGIN_BY_COEP:
      return std::make_unique<base::Value>("CorpNotSameOriginAfterDefaultedToSameOriginByCoep");
    case audits::BlockedByResponseReason::CORP_NOT_SAME_SITE:
      return std::make_unique<base::Value>("CorpNotSameSite");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::BlockedByResponseIssueDetails> {
  static std::unique_ptr<audits::BlockedByResponseIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::BlockedByResponseIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::BlockedByResponseIssueDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::HeavyAdResolutionStatus> {
  static audits::HeavyAdResolutionStatus Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::HeavyAdResolutionStatus::HEAVY_AD_BLOCKED;
    }
    if (value.GetString() == "HeavyAdBlocked")
      return audits::HeavyAdResolutionStatus::HEAVY_AD_BLOCKED;
    if (value.GetString() == "HeavyAdWarning")
      return audits::HeavyAdResolutionStatus::HEAVY_AD_WARNING;
    errors->AddError("invalid enum value");
    return audits::HeavyAdResolutionStatus::HEAVY_AD_BLOCKED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::HeavyAdResolutionStatus& value, T*) {
  switch (value) {
    case audits::HeavyAdResolutionStatus::HEAVY_AD_BLOCKED:
      return std::make_unique<base::Value>("HeavyAdBlocked");
    case audits::HeavyAdResolutionStatus::HEAVY_AD_WARNING:
      return std::make_unique<base::Value>("HeavyAdWarning");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<audits::HeavyAdReason> {
  static audits::HeavyAdReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::HeavyAdReason::NETWORK_TOTAL_LIMIT;
    }
    if (value.GetString() == "NetworkTotalLimit")
      return audits::HeavyAdReason::NETWORK_TOTAL_LIMIT;
    if (value.GetString() == "CpuTotalLimit")
      return audits::HeavyAdReason::CPU_TOTAL_LIMIT;
    if (value.GetString() == "CpuPeakLimit")
      return audits::HeavyAdReason::CPU_PEAK_LIMIT;
    errors->AddError("invalid enum value");
    return audits::HeavyAdReason::NETWORK_TOTAL_LIMIT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::HeavyAdReason& value, T*) {
  switch (value) {
    case audits::HeavyAdReason::NETWORK_TOTAL_LIMIT:
      return std::make_unique<base::Value>("NetworkTotalLimit");
    case audits::HeavyAdReason::CPU_TOTAL_LIMIT:
      return std::make_unique<base::Value>("CpuTotalLimit");
    case audits::HeavyAdReason::CPU_PEAK_LIMIT:
      return std::make_unique<base::Value>("CpuPeakLimit");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::HeavyAdIssueDetails> {
  static std::unique_ptr<audits::HeavyAdIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::HeavyAdIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::HeavyAdIssueDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::ContentSecurityPolicyViolationType> {
  static audits::ContentSecurityPolicyViolationType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::ContentSecurityPolicyViolationType::K_INLINE_VIOLATION;
    }
    if (value.GetString() == "kInlineViolation")
      return audits::ContentSecurityPolicyViolationType::K_INLINE_VIOLATION;
    if (value.GetString() == "kEvalViolation")
      return audits::ContentSecurityPolicyViolationType::K_EVAL_VIOLATION;
    if (value.GetString() == "kURLViolation")
      return audits::ContentSecurityPolicyViolationType::KURL_VIOLATION;
    if (value.GetString() == "kTrustedTypesSinkViolation")
      return audits::ContentSecurityPolicyViolationType::K_TRUSTED_TYPES_SINK_VIOLATION;
    if (value.GetString() == "kTrustedTypesPolicyViolation")
      return audits::ContentSecurityPolicyViolationType::K_TRUSTED_TYPES_POLICY_VIOLATION;
    if (value.GetString() == "kWasmEvalViolation")
      return audits::ContentSecurityPolicyViolationType::K_WASM_EVAL_VIOLATION;
    errors->AddError("invalid enum value");
    return audits::ContentSecurityPolicyViolationType::K_INLINE_VIOLATION;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::ContentSecurityPolicyViolationType& value, T*) {
  switch (value) {
    case audits::ContentSecurityPolicyViolationType::K_INLINE_VIOLATION:
      return std::make_unique<base::Value>("kInlineViolation");
    case audits::ContentSecurityPolicyViolationType::K_EVAL_VIOLATION:
      return std::make_unique<base::Value>("kEvalViolation");
    case audits::ContentSecurityPolicyViolationType::KURL_VIOLATION:
      return std::make_unique<base::Value>("kURLViolation");
    case audits::ContentSecurityPolicyViolationType::K_TRUSTED_TYPES_SINK_VIOLATION:
      return std::make_unique<base::Value>("kTrustedTypesSinkViolation");
    case audits::ContentSecurityPolicyViolationType::K_TRUSTED_TYPES_POLICY_VIOLATION:
      return std::make_unique<base::Value>("kTrustedTypesPolicyViolation");
    case audits::ContentSecurityPolicyViolationType::K_WASM_EVAL_VIOLATION:
      return std::make_unique<base::Value>("kWasmEvalViolation");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::SourceCodeLocation> {
  static std::unique_ptr<audits::SourceCodeLocation> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::SourceCodeLocation::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::SourceCodeLocation& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::ContentSecurityPolicyIssueDetails> {
  static std::unique_ptr<audits::ContentSecurityPolicyIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::ContentSecurityPolicyIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::ContentSecurityPolicyIssueDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::SharedArrayBufferIssueType> {
  static audits::SharedArrayBufferIssueType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::SharedArrayBufferIssueType::TRANSFER_ISSUE;
    }
    if (value.GetString() == "TransferIssue")
      return audits::SharedArrayBufferIssueType::TRANSFER_ISSUE;
    if (value.GetString() == "CreationIssue")
      return audits::SharedArrayBufferIssueType::CREATION_ISSUE;
    errors->AddError("invalid enum value");
    return audits::SharedArrayBufferIssueType::TRANSFER_ISSUE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::SharedArrayBufferIssueType& value, T*) {
  switch (value) {
    case audits::SharedArrayBufferIssueType::TRANSFER_ISSUE:
      return std::make_unique<base::Value>("TransferIssue");
    case audits::SharedArrayBufferIssueType::CREATION_ISSUE:
      return std::make_unique<base::Value>("CreationIssue");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::SharedArrayBufferIssueDetails> {
  static std::unique_ptr<audits::SharedArrayBufferIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::SharedArrayBufferIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::SharedArrayBufferIssueDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::TwaQualityEnforcementViolationType> {
  static audits::TwaQualityEnforcementViolationType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::TwaQualityEnforcementViolationType::K_HTTP_ERROR;
    }
    if (value.GetString() == "kHttpError")
      return audits::TwaQualityEnforcementViolationType::K_HTTP_ERROR;
    if (value.GetString() == "kUnavailableOffline")
      return audits::TwaQualityEnforcementViolationType::K_UNAVAILABLE_OFFLINE;
    if (value.GetString() == "kDigitalAssetLinks")
      return audits::TwaQualityEnforcementViolationType::K_DIGITAL_ASSET_LINKS;
    errors->AddError("invalid enum value");
    return audits::TwaQualityEnforcementViolationType::K_HTTP_ERROR;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::TwaQualityEnforcementViolationType& value, T*) {
  switch (value) {
    case audits::TwaQualityEnforcementViolationType::K_HTTP_ERROR:
      return std::make_unique<base::Value>("kHttpError");
    case audits::TwaQualityEnforcementViolationType::K_UNAVAILABLE_OFFLINE:
      return std::make_unique<base::Value>("kUnavailableOffline");
    case audits::TwaQualityEnforcementViolationType::K_DIGITAL_ASSET_LINKS:
      return std::make_unique<base::Value>("kDigitalAssetLinks");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::TrustedWebActivityIssueDetails> {
  static std::unique_ptr<audits::TrustedWebActivityIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::TrustedWebActivityIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::TrustedWebActivityIssueDetails& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::LowTextContrastIssueDetails> {
  static std::unique_ptr<audits::LowTextContrastIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::LowTextContrastIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::LowTextContrastIssueDetails& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::CorsIssueDetails> {
  static std::unique_ptr<audits::CorsIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::CorsIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::CorsIssueDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::AttributionReportingIssueType> {
  static audits::AttributionReportingIssueType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::AttributionReportingIssueType::PERMISSION_POLICY_DISABLED;
    }
    if (value.GetString() == "PermissionPolicyDisabled")
      return audits::AttributionReportingIssueType::PERMISSION_POLICY_DISABLED;
    if (value.GetString() == "UntrustworthyReportingOrigin")
      return audits::AttributionReportingIssueType::UNTRUSTWORTHY_REPORTING_ORIGIN;
    if (value.GetString() == "InsecureContext")
      return audits::AttributionReportingIssueType::INSECURE_CONTEXT;
    if (value.GetString() == "InvalidHeader")
      return audits::AttributionReportingIssueType::INVALID_HEADER;
    if (value.GetString() == "InvalidRegisterTriggerHeader")
      return audits::AttributionReportingIssueType::INVALID_REGISTER_TRIGGER_HEADER;
    if (value.GetString() == "InvalidEligibleHeader")
      return audits::AttributionReportingIssueType::INVALID_ELIGIBLE_HEADER;
    if (value.GetString() == "TooManyConcurrentRequests")
      return audits::AttributionReportingIssueType::TOO_MANY_CONCURRENT_REQUESTS;
    if (value.GetString() == "SourceAndTriggerHeaders")
      return audits::AttributionReportingIssueType::SOURCE_AND_TRIGGER_HEADERS;
    if (value.GetString() == "SourceIgnored")
      return audits::AttributionReportingIssueType::SOURCE_IGNORED;
    if (value.GetString() == "TriggerIgnored")
      return audits::AttributionReportingIssueType::TRIGGER_IGNORED;
    errors->AddError("invalid enum value");
    return audits::AttributionReportingIssueType::PERMISSION_POLICY_DISABLED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::AttributionReportingIssueType& value, T*) {
  switch (value) {
    case audits::AttributionReportingIssueType::PERMISSION_POLICY_DISABLED:
      return std::make_unique<base::Value>("PermissionPolicyDisabled");
    case audits::AttributionReportingIssueType::UNTRUSTWORTHY_REPORTING_ORIGIN:
      return std::make_unique<base::Value>("UntrustworthyReportingOrigin");
    case audits::AttributionReportingIssueType::INSECURE_CONTEXT:
      return std::make_unique<base::Value>("InsecureContext");
    case audits::AttributionReportingIssueType::INVALID_HEADER:
      return std::make_unique<base::Value>("InvalidHeader");
    case audits::AttributionReportingIssueType::INVALID_REGISTER_TRIGGER_HEADER:
      return std::make_unique<base::Value>("InvalidRegisterTriggerHeader");
    case audits::AttributionReportingIssueType::INVALID_ELIGIBLE_HEADER:
      return std::make_unique<base::Value>("InvalidEligibleHeader");
    case audits::AttributionReportingIssueType::TOO_MANY_CONCURRENT_REQUESTS:
      return std::make_unique<base::Value>("TooManyConcurrentRequests");
    case audits::AttributionReportingIssueType::SOURCE_AND_TRIGGER_HEADERS:
      return std::make_unique<base::Value>("SourceAndTriggerHeaders");
    case audits::AttributionReportingIssueType::SOURCE_IGNORED:
      return std::make_unique<base::Value>("SourceIgnored");
    case audits::AttributionReportingIssueType::TRIGGER_IGNORED:
      return std::make_unique<base::Value>("TriggerIgnored");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::AttributionReportingIssueDetails> {
  static std::unique_ptr<audits::AttributionReportingIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::AttributionReportingIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::AttributionReportingIssueDetails& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::QuirksModeIssueDetails> {
  static std::unique_ptr<audits::QuirksModeIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::QuirksModeIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::QuirksModeIssueDetails& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::NavigatorUserAgentIssueDetails> {
  static std::unique_ptr<audits::NavigatorUserAgentIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::NavigatorUserAgentIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::NavigatorUserAgentIssueDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::GenericIssueErrorType> {
  static audits::GenericIssueErrorType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::GenericIssueErrorType::CROSS_ORIGIN_PORTAL_POST_MESSAGE_ERROR;
    }
    if (value.GetString() == "CrossOriginPortalPostMessageError")
      return audits::GenericIssueErrorType::CROSS_ORIGIN_PORTAL_POST_MESSAGE_ERROR;
    errors->AddError("invalid enum value");
    return audits::GenericIssueErrorType::CROSS_ORIGIN_PORTAL_POST_MESSAGE_ERROR;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::GenericIssueErrorType& value, T*) {
  switch (value) {
    case audits::GenericIssueErrorType::CROSS_ORIGIN_PORTAL_POST_MESSAGE_ERROR:
      return std::make_unique<base::Value>("CrossOriginPortalPostMessageError");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::GenericIssueDetails> {
  static std::unique_ptr<audits::GenericIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::GenericIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::GenericIssueDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::DeprecationIssueType> {
  static audits::DeprecationIssueType Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::DeprecationIssueType::AUTHORIZATION_COVERED_BY_WILDCARD;
    }
    if (value.GetString() == "AuthorizationCoveredByWildcard")
      return audits::DeprecationIssueType::AUTHORIZATION_COVERED_BY_WILDCARD;
    if (value.GetString() == "CanRequestURLHTTPContainingNewline")
      return audits::DeprecationIssueType::CAN_REQUESTURLHTTP_CONTAINING_NEWLINE;
    if (value.GetString() == "ChromeLoadTimesConnectionInfo")
      return audits::DeprecationIssueType::CHROME_LOAD_TIMES_CONNECTION_INFO;
    if (value.GetString() == "ChromeLoadTimesFirstPaintAfterLoadTime")
      return audits::DeprecationIssueType::CHROME_LOAD_TIMES_FIRST_PAINT_AFTER_LOAD_TIME;
    if (value.GetString() == "ChromeLoadTimesWasAlternateProtocolAvailable")
      return audits::DeprecationIssueType::CHROME_LOAD_TIMES_WAS_ALTERNATE_PROTOCOL_AVAILABLE;
    if (value.GetString() == "CookieWithTruncatingChar")
      return audits::DeprecationIssueType::COOKIE_WITH_TRUNCATING_CHAR;
    if (value.GetString() == "CrossOriginAccessBasedOnDocumentDomain")
      return audits::DeprecationIssueType::CROSS_ORIGIN_ACCESS_BASED_ON_DOCUMENT_DOMAIN;
    if (value.GetString() == "CrossOriginWindowAlert")
      return audits::DeprecationIssueType::CROSS_ORIGIN_WINDOW_ALERT;
    if (value.GetString() == "CrossOriginWindowConfirm")
      return audits::DeprecationIssueType::CROSS_ORIGIN_WINDOW_CONFIRM;
    if (value.GetString() == "CSSSelectorInternalMediaControlsOverlayCastButton")
      return audits::DeprecationIssueType::CSS_SELECTOR_INTERNAL_MEDIA_CONTROLS_OVERLAY_CAST_BUTTON;
    if (value.GetString() == "DeprecationExample")
      return audits::DeprecationIssueType::DEPRECATION_EXAMPLE;
    if (value.GetString() == "DocumentDomainSettingWithoutOriginAgentClusterHeader")
      return audits::DeprecationIssueType::DOCUMENT_DOMAIN_SETTING_WITHOUT_ORIGIN_AGENT_CLUSTER_HEADER;
    if (value.GetString() == "EventPath")
      return audits::DeprecationIssueType::EVENT_PATH;
    if (value.GetString() == "ExpectCTHeader")
      return audits::DeprecationIssueType::EXPECTCT_HEADER;
    if (value.GetString() == "GeolocationInsecureOrigin")
      return audits::DeprecationIssueType::GEOLOCATION_INSECURE_ORIGIN;
    if (value.GetString() == "GeolocationInsecureOriginDeprecatedNotRemoved")
      return audits::DeprecationIssueType::GEOLOCATION_INSECURE_ORIGIN_DEPRECATED_NOT_REMOVED;
    if (value.GetString() == "GetUserMediaInsecureOrigin")
      return audits::DeprecationIssueType::GET_USER_MEDIA_INSECURE_ORIGIN;
    if (value.GetString() == "HostCandidateAttributeGetter")
      return audits::DeprecationIssueType::HOST_CANDIDATE_ATTRIBUTE_GETTER;
    if (value.GetString() == "IdentityInCanMakePaymentEvent")
      return audits::DeprecationIssueType::IDENTITY_IN_CAN_MAKE_PAYMENT_EVENT;
    if (value.GetString() == "InsecurePrivateNetworkSubresourceRequest")
      return audits::DeprecationIssueType::INSECURE_PRIVATE_NETWORK_SUBRESOURCE_REQUEST;
    if (value.GetString() == "LegacyConstraintGoogIPv6")
      return audits::DeprecationIssueType::LEGACY_CONSTRAINT_GOOGI_PV6;
    if (value.GetString() == "LocalCSSFileExtensionRejected")
      return audits::DeprecationIssueType::LOCALCSS_FILE_EXTENSION_REJECTED;
    if (value.GetString() == "MediaSourceAbortRemove")
      return audits::DeprecationIssueType::MEDIA_SOURCE_ABORT_REMOVE;
    if (value.GetString() == "MediaSourceDurationTruncatingBuffered")
      return audits::DeprecationIssueType::MEDIA_SOURCE_DURATION_TRUNCATING_BUFFERED;
    if (value.GetString() == "NavigateEventRestoreScroll")
      return audits::DeprecationIssueType::NAVIGATE_EVENT_RESTORE_SCROLL;
    if (value.GetString() == "NavigateEventTransitionWhile")
      return audits::DeprecationIssueType::NAVIGATE_EVENT_TRANSITION_WHILE;
    if (value.GetString() == "NoSysexWebMIDIWithoutPermission")
      return audits::DeprecationIssueType::NO_SYSEX_WEBMIDI_WITHOUT_PERMISSION;
    if (value.GetString() == "NotificationInsecureOrigin")
      return audits::DeprecationIssueType::NOTIFICATION_INSECURE_ORIGIN;
    if (value.GetString() == "NotificationPermissionRequestedIframe")
      return audits::DeprecationIssueType::NOTIFICATION_PERMISSION_REQUESTED_IFRAME;
    if (value.GetString() == "ObsoleteWebRtcCipherSuite")
      return audits::DeprecationIssueType::OBSOLETE_WEB_RTC_CIPHER_SUITE;
    if (value.GetString() == "OpenWebDatabaseInsecureContext")
      return audits::DeprecationIssueType::OPEN_WEB_DATABASE_INSECURE_CONTEXT;
    if (value.GetString() == "OverflowVisibleOnReplacedElement")
      return audits::DeprecationIssueType::OVERFLOW_VISIBLE_ON_REPLACED_ELEMENT;
    if (value.GetString() == "PersistentQuotaType")
      return audits::DeprecationIssueType::PERSISTENT_QUOTA_TYPE;
    if (value.GetString() == "PictureSourceSrc")
      return audits::DeprecationIssueType::PICTURE_SOURCE_SRC;
    if (value.GetString() == "PrefixedCancelAnimationFrame")
      return audits::DeprecationIssueType::PREFIXED_CANCEL_ANIMATION_FRAME;
    if (value.GetString() == "PrefixedRequestAnimationFrame")
      return audits::DeprecationIssueType::PREFIXED_REQUEST_ANIMATION_FRAME;
    if (value.GetString() == "PrefixedStorageInfo")
      return audits::DeprecationIssueType::PREFIXED_STORAGE_INFO;
    if (value.GetString() == "PrefixedVideoDisplayingFullscreen")
      return audits::DeprecationIssueType::PREFIXED_VIDEO_DISPLAYING_FULLSCREEN;
    if (value.GetString() == "PrefixedVideoEnterFullscreen")
      return audits::DeprecationIssueType::PREFIXED_VIDEO_ENTER_FULLSCREEN;
    if (value.GetString() == "PrefixedVideoEnterFullScreen")
      return audits::DeprecationIssueType::PREFIXED_VIDEO_ENTER_FULL_SCREEN;
    if (value.GetString() == "PrefixedVideoExitFullscreen")
      return audits::DeprecationIssueType::PREFIXED_VIDEO_EXIT_FULLSCREEN;
    if (value.GetString() == "PrefixedVideoExitFullScreen")
      return audits::DeprecationIssueType::PREFIXED_VIDEO_EXIT_FULL_SCREEN;
    if (value.GetString() == "PrefixedVideoSupportsFullscreen")
      return audits::DeprecationIssueType::PREFIXED_VIDEO_SUPPORTS_FULLSCREEN;
    if (value.GetString() == "RangeExpand")
      return audits::DeprecationIssueType::RANGE_EXPAND;
    if (value.GetString() == "RequestedSubresourceWithEmbeddedCredentials")
      return audits::DeprecationIssueType::REQUESTED_SUBRESOURCE_WITH_EMBEDDED_CREDENTIALS;
    if (value.GetString() == "RTCConstraintEnableDtlsSrtpFalse")
      return audits::DeprecationIssueType::RTC_CONSTRAINT_ENABLE_DTLS_SRTP_FALSE;
    if (value.GetString() == "RTCConstraintEnableDtlsSrtpTrue")
      return audits::DeprecationIssueType::RTC_CONSTRAINT_ENABLE_DTLS_SRTP_TRUE;
    if (value.GetString() == "RTCPeerConnectionComplexPlanBSdpUsingDefaultSdpSemantics")
      return audits::DeprecationIssueType::RTC_PEER_CONNECTION_COMPLEX_PLANB_SDP_USING_DEFAULT_SDP_SEMANTICS;
    if (value.GetString() == "RTCPeerConnectionSdpSemanticsPlanB")
      return audits::DeprecationIssueType::RTC_PEER_CONNECTION_SDP_SEMANTICS_PLANB;
    if (value.GetString() == "RtcpMuxPolicyNegotiate")
      return audits::DeprecationIssueType::RTCP_MUX_POLICY_NEGOTIATE;
    if (value.GetString() == "SharedArrayBufferConstructedWithoutIsolation")
      return audits::DeprecationIssueType::SHARED_ARRAY_BUFFER_CONSTRUCTED_WITHOUT_ISOLATION;
    if (value.GetString() == "TextToSpeech_DisallowedByAutoplay")
      return audits::DeprecationIssueType::TEXT_TO_SPEECH_DISALLOWED_BY_AUTOPLAY;
    if (value.GetString() == "V8SharedArrayBufferConstructedInExtensionWithoutIsolation")
      return audits::DeprecationIssueType::V8_SHARED_ARRAY_BUFFER_CONSTRUCTED_IN_EXTENSION_WITHOUT_ISOLATION;
    if (value.GetString() == "XHRJSONEncodingDetection")
      return audits::DeprecationIssueType::XHRJSON_ENCODING_DETECTION;
    if (value.GetString() == "XMLHttpRequestSynchronousInNonWorkerOutsideBeforeUnload")
      return audits::DeprecationIssueType::XML_HTTP_REQUEST_SYNCHRONOUS_IN_NON_WORKER_OUTSIDE_BEFORE_UNLOAD;
    if (value.GetString() == "XRSupportsSession")
      return audits::DeprecationIssueType::XR_SUPPORTS_SESSION;
    errors->AddError("invalid enum value");
    return audits::DeprecationIssueType::AUTHORIZATION_COVERED_BY_WILDCARD;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::DeprecationIssueType& value, T*) {
  switch (value) {
    case audits::DeprecationIssueType::AUTHORIZATION_COVERED_BY_WILDCARD:
      return std::make_unique<base::Value>("AuthorizationCoveredByWildcard");
    case audits::DeprecationIssueType::CAN_REQUESTURLHTTP_CONTAINING_NEWLINE:
      return std::make_unique<base::Value>("CanRequestURLHTTPContainingNewline");
    case audits::DeprecationIssueType::CHROME_LOAD_TIMES_CONNECTION_INFO:
      return std::make_unique<base::Value>("ChromeLoadTimesConnectionInfo");
    case audits::DeprecationIssueType::CHROME_LOAD_TIMES_FIRST_PAINT_AFTER_LOAD_TIME:
      return std::make_unique<base::Value>("ChromeLoadTimesFirstPaintAfterLoadTime");
    case audits::DeprecationIssueType::CHROME_LOAD_TIMES_WAS_ALTERNATE_PROTOCOL_AVAILABLE:
      return std::make_unique<base::Value>("ChromeLoadTimesWasAlternateProtocolAvailable");
    case audits::DeprecationIssueType::COOKIE_WITH_TRUNCATING_CHAR:
      return std::make_unique<base::Value>("CookieWithTruncatingChar");
    case audits::DeprecationIssueType::CROSS_ORIGIN_ACCESS_BASED_ON_DOCUMENT_DOMAIN:
      return std::make_unique<base::Value>("CrossOriginAccessBasedOnDocumentDomain");
    case audits::DeprecationIssueType::CROSS_ORIGIN_WINDOW_ALERT:
      return std::make_unique<base::Value>("CrossOriginWindowAlert");
    case audits::DeprecationIssueType::CROSS_ORIGIN_WINDOW_CONFIRM:
      return std::make_unique<base::Value>("CrossOriginWindowConfirm");
    case audits::DeprecationIssueType::CSS_SELECTOR_INTERNAL_MEDIA_CONTROLS_OVERLAY_CAST_BUTTON:
      return std::make_unique<base::Value>("CSSSelectorInternalMediaControlsOverlayCastButton");
    case audits::DeprecationIssueType::DEPRECATION_EXAMPLE:
      return std::make_unique<base::Value>("DeprecationExample");
    case audits::DeprecationIssueType::DOCUMENT_DOMAIN_SETTING_WITHOUT_ORIGIN_AGENT_CLUSTER_HEADER:
      return std::make_unique<base::Value>("DocumentDomainSettingWithoutOriginAgentClusterHeader");
    case audits::DeprecationIssueType::EVENT_PATH:
      return std::make_unique<base::Value>("EventPath");
    case audits::DeprecationIssueType::EXPECTCT_HEADER:
      return std::make_unique<base::Value>("ExpectCTHeader");
    case audits::DeprecationIssueType::GEOLOCATION_INSECURE_ORIGIN:
      return std::make_unique<base::Value>("GeolocationInsecureOrigin");
    case audits::DeprecationIssueType::GEOLOCATION_INSECURE_ORIGIN_DEPRECATED_NOT_REMOVED:
      return std::make_unique<base::Value>("GeolocationInsecureOriginDeprecatedNotRemoved");
    case audits::DeprecationIssueType::GET_USER_MEDIA_INSECURE_ORIGIN:
      return std::make_unique<base::Value>("GetUserMediaInsecureOrigin");
    case audits::DeprecationIssueType::HOST_CANDIDATE_ATTRIBUTE_GETTER:
      return std::make_unique<base::Value>("HostCandidateAttributeGetter");
    case audits::DeprecationIssueType::IDENTITY_IN_CAN_MAKE_PAYMENT_EVENT:
      return std::make_unique<base::Value>("IdentityInCanMakePaymentEvent");
    case audits::DeprecationIssueType::INSECURE_PRIVATE_NETWORK_SUBRESOURCE_REQUEST:
      return std::make_unique<base::Value>("InsecurePrivateNetworkSubresourceRequest");
    case audits::DeprecationIssueType::LEGACY_CONSTRAINT_GOOGI_PV6:
      return std::make_unique<base::Value>("LegacyConstraintGoogIPv6");
    case audits::DeprecationIssueType::LOCALCSS_FILE_EXTENSION_REJECTED:
      return std::make_unique<base::Value>("LocalCSSFileExtensionRejected");
    case audits::DeprecationIssueType::MEDIA_SOURCE_ABORT_REMOVE:
      return std::make_unique<base::Value>("MediaSourceAbortRemove");
    case audits::DeprecationIssueType::MEDIA_SOURCE_DURATION_TRUNCATING_BUFFERED:
      return std::make_unique<base::Value>("MediaSourceDurationTruncatingBuffered");
    case audits::DeprecationIssueType::NAVIGATE_EVENT_RESTORE_SCROLL:
      return std::make_unique<base::Value>("NavigateEventRestoreScroll");
    case audits::DeprecationIssueType::NAVIGATE_EVENT_TRANSITION_WHILE:
      return std::make_unique<base::Value>("NavigateEventTransitionWhile");
    case audits::DeprecationIssueType::NO_SYSEX_WEBMIDI_WITHOUT_PERMISSION:
      return std::make_unique<base::Value>("NoSysexWebMIDIWithoutPermission");
    case audits::DeprecationIssueType::NOTIFICATION_INSECURE_ORIGIN:
      return std::make_unique<base::Value>("NotificationInsecureOrigin");
    case audits::DeprecationIssueType::NOTIFICATION_PERMISSION_REQUESTED_IFRAME:
      return std::make_unique<base::Value>("NotificationPermissionRequestedIframe");
    case audits::DeprecationIssueType::OBSOLETE_WEB_RTC_CIPHER_SUITE:
      return std::make_unique<base::Value>("ObsoleteWebRtcCipherSuite");
    case audits::DeprecationIssueType::OPEN_WEB_DATABASE_INSECURE_CONTEXT:
      return std::make_unique<base::Value>("OpenWebDatabaseInsecureContext");
    case audits::DeprecationIssueType::OVERFLOW_VISIBLE_ON_REPLACED_ELEMENT:
      return std::make_unique<base::Value>("OverflowVisibleOnReplacedElement");
    case audits::DeprecationIssueType::PERSISTENT_QUOTA_TYPE:
      return std::make_unique<base::Value>("PersistentQuotaType");
    case audits::DeprecationIssueType::PICTURE_SOURCE_SRC:
      return std::make_unique<base::Value>("PictureSourceSrc");
    case audits::DeprecationIssueType::PREFIXED_CANCEL_ANIMATION_FRAME:
      return std::make_unique<base::Value>("PrefixedCancelAnimationFrame");
    case audits::DeprecationIssueType::PREFIXED_REQUEST_ANIMATION_FRAME:
      return std::make_unique<base::Value>("PrefixedRequestAnimationFrame");
    case audits::DeprecationIssueType::PREFIXED_STORAGE_INFO:
      return std::make_unique<base::Value>("PrefixedStorageInfo");
    case audits::DeprecationIssueType::PREFIXED_VIDEO_DISPLAYING_FULLSCREEN:
      return std::make_unique<base::Value>("PrefixedVideoDisplayingFullscreen");
    case audits::DeprecationIssueType::PREFIXED_VIDEO_ENTER_FULLSCREEN:
      return std::make_unique<base::Value>("PrefixedVideoEnterFullscreen");
    case audits::DeprecationIssueType::PREFIXED_VIDEO_ENTER_FULL_SCREEN:
      return std::make_unique<base::Value>("PrefixedVideoEnterFullScreen");
    case audits::DeprecationIssueType::PREFIXED_VIDEO_EXIT_FULLSCREEN:
      return std::make_unique<base::Value>("PrefixedVideoExitFullscreen");
    case audits::DeprecationIssueType::PREFIXED_VIDEO_EXIT_FULL_SCREEN:
      return std::make_unique<base::Value>("PrefixedVideoExitFullScreen");
    case audits::DeprecationIssueType::PREFIXED_VIDEO_SUPPORTS_FULLSCREEN:
      return std::make_unique<base::Value>("PrefixedVideoSupportsFullscreen");
    case audits::DeprecationIssueType::RANGE_EXPAND:
      return std::make_unique<base::Value>("RangeExpand");
    case audits::DeprecationIssueType::REQUESTED_SUBRESOURCE_WITH_EMBEDDED_CREDENTIALS:
      return std::make_unique<base::Value>("RequestedSubresourceWithEmbeddedCredentials");
    case audits::DeprecationIssueType::RTC_CONSTRAINT_ENABLE_DTLS_SRTP_FALSE:
      return std::make_unique<base::Value>("RTCConstraintEnableDtlsSrtpFalse");
    case audits::DeprecationIssueType::RTC_CONSTRAINT_ENABLE_DTLS_SRTP_TRUE:
      return std::make_unique<base::Value>("RTCConstraintEnableDtlsSrtpTrue");
    case audits::DeprecationIssueType::RTC_PEER_CONNECTION_COMPLEX_PLANB_SDP_USING_DEFAULT_SDP_SEMANTICS:
      return std::make_unique<base::Value>("RTCPeerConnectionComplexPlanBSdpUsingDefaultSdpSemantics");
    case audits::DeprecationIssueType::RTC_PEER_CONNECTION_SDP_SEMANTICS_PLANB:
      return std::make_unique<base::Value>("RTCPeerConnectionSdpSemanticsPlanB");
    case audits::DeprecationIssueType::RTCP_MUX_POLICY_NEGOTIATE:
      return std::make_unique<base::Value>("RtcpMuxPolicyNegotiate");
    case audits::DeprecationIssueType::SHARED_ARRAY_BUFFER_CONSTRUCTED_WITHOUT_ISOLATION:
      return std::make_unique<base::Value>("SharedArrayBufferConstructedWithoutIsolation");
    case audits::DeprecationIssueType::TEXT_TO_SPEECH_DISALLOWED_BY_AUTOPLAY:
      return std::make_unique<base::Value>("TextToSpeech_DisallowedByAutoplay");
    case audits::DeprecationIssueType::V8_SHARED_ARRAY_BUFFER_CONSTRUCTED_IN_EXTENSION_WITHOUT_ISOLATION:
      return std::make_unique<base::Value>("V8SharedArrayBufferConstructedInExtensionWithoutIsolation");
    case audits::DeprecationIssueType::XHRJSON_ENCODING_DETECTION:
      return std::make_unique<base::Value>("XHRJSONEncodingDetection");
    case audits::DeprecationIssueType::XML_HTTP_REQUEST_SYNCHRONOUS_IN_NON_WORKER_OUTSIDE_BEFORE_UNLOAD:
      return std::make_unique<base::Value>("XMLHttpRequestSynchronousInNonWorkerOutsideBeforeUnload");
    case audits::DeprecationIssueType::XR_SUPPORTS_SESSION:
      return std::make_unique<base::Value>("XRSupportsSession");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::DeprecationIssueDetails> {
  static std::unique_ptr<audits::DeprecationIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::DeprecationIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::DeprecationIssueDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::ClientHintIssueReason> {
  static audits::ClientHintIssueReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::ClientHintIssueReason::META_TAG_ALLOW_LIST_INVALID_ORIGIN;
    }
    if (value.GetString() == "MetaTagAllowListInvalidOrigin")
      return audits::ClientHintIssueReason::META_TAG_ALLOW_LIST_INVALID_ORIGIN;
    if (value.GetString() == "MetaTagModifiedHTML")
      return audits::ClientHintIssueReason::META_TAG_MODIFIEDHTML;
    errors->AddError("invalid enum value");
    return audits::ClientHintIssueReason::META_TAG_ALLOW_LIST_INVALID_ORIGIN;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::ClientHintIssueReason& value, T*) {
  switch (value) {
    case audits::ClientHintIssueReason::META_TAG_ALLOW_LIST_INVALID_ORIGIN:
      return std::make_unique<base::Value>("MetaTagAllowListInvalidOrigin");
    case audits::ClientHintIssueReason::META_TAG_MODIFIEDHTML:
      return std::make_unique<base::Value>("MetaTagModifiedHTML");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::FederatedAuthRequestIssueDetails> {
  static std::unique_ptr<audits::FederatedAuthRequestIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::FederatedAuthRequestIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::FederatedAuthRequestIssueDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::FederatedAuthRequestIssueReason> {
  static audits::FederatedAuthRequestIssueReason Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::FederatedAuthRequestIssueReason::APPROVAL_DECLINED;
    }
    if (value.GetString() == "ApprovalDeclined")
      return audits::FederatedAuthRequestIssueReason::APPROVAL_DECLINED;
    if (value.GetString() == "TooManyRequests")
      return audits::FederatedAuthRequestIssueReason::TOO_MANY_REQUESTS;
    if (value.GetString() == "ManifestListHttpNotFound")
      return audits::FederatedAuthRequestIssueReason::MANIFEST_LIST_HTTP_NOT_FOUND;
    if (value.GetString() == "ManifestListNoResponse")
      return audits::FederatedAuthRequestIssueReason::MANIFEST_LIST_NO_RESPONSE;
    if (value.GetString() == "ManifestListInvalidResponse")
      return audits::FederatedAuthRequestIssueReason::MANIFEST_LIST_INVALID_RESPONSE;
    if (value.GetString() == "ManifestNotInManifestList")
      return audits::FederatedAuthRequestIssueReason::MANIFEST_NOT_IN_MANIFEST_LIST;
    if (value.GetString() == "ManifestListTooBig")
      return audits::FederatedAuthRequestIssueReason::MANIFEST_LIST_TOO_BIG;
    if (value.GetString() == "ManifestHttpNotFound")
      return audits::FederatedAuthRequestIssueReason::MANIFEST_HTTP_NOT_FOUND;
    if (value.GetString() == "ManifestNoResponse")
      return audits::FederatedAuthRequestIssueReason::MANIFEST_NO_RESPONSE;
    if (value.GetString() == "ManifestInvalidResponse")
      return audits::FederatedAuthRequestIssueReason::MANIFEST_INVALID_RESPONSE;
    if (value.GetString() == "ClientMetadataHttpNotFound")
      return audits::FederatedAuthRequestIssueReason::CLIENT_METADATA_HTTP_NOT_FOUND;
    if (value.GetString() == "ClientMetadataNoResponse")
      return audits::FederatedAuthRequestIssueReason::CLIENT_METADATA_NO_RESPONSE;
    if (value.GetString() == "ClientMetadataInvalidResponse")
      return audits::FederatedAuthRequestIssueReason::CLIENT_METADATA_INVALID_RESPONSE;
    if (value.GetString() == "DisabledInSettings")
      return audits::FederatedAuthRequestIssueReason::DISABLED_IN_SETTINGS;
    if (value.GetString() == "ErrorFetchingSignin")
      return audits::FederatedAuthRequestIssueReason::ERROR_FETCHING_SIGNIN;
    if (value.GetString() == "InvalidSigninResponse")
      return audits::FederatedAuthRequestIssueReason::INVALID_SIGNIN_RESPONSE;
    if (value.GetString() == "AccountsHttpNotFound")
      return audits::FederatedAuthRequestIssueReason::ACCOUNTS_HTTP_NOT_FOUND;
    if (value.GetString() == "AccountsNoResponse")
      return audits::FederatedAuthRequestIssueReason::ACCOUNTS_NO_RESPONSE;
    if (value.GetString() == "AccountsInvalidResponse")
      return audits::FederatedAuthRequestIssueReason::ACCOUNTS_INVALID_RESPONSE;
    if (value.GetString() == "IdTokenHttpNotFound")
      return audits::FederatedAuthRequestIssueReason::ID_TOKEN_HTTP_NOT_FOUND;
    if (value.GetString() == "IdTokenNoResponse")
      return audits::FederatedAuthRequestIssueReason::ID_TOKEN_NO_RESPONSE;
    if (value.GetString() == "IdTokenInvalidResponse")
      return audits::FederatedAuthRequestIssueReason::ID_TOKEN_INVALID_RESPONSE;
    if (value.GetString() == "IdTokenInvalidRequest")
      return audits::FederatedAuthRequestIssueReason::ID_TOKEN_INVALID_REQUEST;
    if (value.GetString() == "ErrorIdToken")
      return audits::FederatedAuthRequestIssueReason::ERROR_ID_TOKEN;
    if (value.GetString() == "Canceled")
      return audits::FederatedAuthRequestIssueReason::CANCELED;
    errors->AddError("invalid enum value");
    return audits::FederatedAuthRequestIssueReason::APPROVAL_DECLINED;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::FederatedAuthRequestIssueReason& value, T*) {
  switch (value) {
    case audits::FederatedAuthRequestIssueReason::APPROVAL_DECLINED:
      return std::make_unique<base::Value>("ApprovalDeclined");
    case audits::FederatedAuthRequestIssueReason::TOO_MANY_REQUESTS:
      return std::make_unique<base::Value>("TooManyRequests");
    case audits::FederatedAuthRequestIssueReason::MANIFEST_LIST_HTTP_NOT_FOUND:
      return std::make_unique<base::Value>("ManifestListHttpNotFound");
    case audits::FederatedAuthRequestIssueReason::MANIFEST_LIST_NO_RESPONSE:
      return std::make_unique<base::Value>("ManifestListNoResponse");
    case audits::FederatedAuthRequestIssueReason::MANIFEST_LIST_INVALID_RESPONSE:
      return std::make_unique<base::Value>("ManifestListInvalidResponse");
    case audits::FederatedAuthRequestIssueReason::MANIFEST_NOT_IN_MANIFEST_LIST:
      return std::make_unique<base::Value>("ManifestNotInManifestList");
    case audits::FederatedAuthRequestIssueReason::MANIFEST_LIST_TOO_BIG:
      return std::make_unique<base::Value>("ManifestListTooBig");
    case audits::FederatedAuthRequestIssueReason::MANIFEST_HTTP_NOT_FOUND:
      return std::make_unique<base::Value>("ManifestHttpNotFound");
    case audits::FederatedAuthRequestIssueReason::MANIFEST_NO_RESPONSE:
      return std::make_unique<base::Value>("ManifestNoResponse");
    case audits::FederatedAuthRequestIssueReason::MANIFEST_INVALID_RESPONSE:
      return std::make_unique<base::Value>("ManifestInvalidResponse");
    case audits::FederatedAuthRequestIssueReason::CLIENT_METADATA_HTTP_NOT_FOUND:
      return std::make_unique<base::Value>("ClientMetadataHttpNotFound");
    case audits::FederatedAuthRequestIssueReason::CLIENT_METADATA_NO_RESPONSE:
      return std::make_unique<base::Value>("ClientMetadataNoResponse");
    case audits::FederatedAuthRequestIssueReason::CLIENT_METADATA_INVALID_RESPONSE:
      return std::make_unique<base::Value>("ClientMetadataInvalidResponse");
    case audits::FederatedAuthRequestIssueReason::DISABLED_IN_SETTINGS:
      return std::make_unique<base::Value>("DisabledInSettings");
    case audits::FederatedAuthRequestIssueReason::ERROR_FETCHING_SIGNIN:
      return std::make_unique<base::Value>("ErrorFetchingSignin");
    case audits::FederatedAuthRequestIssueReason::INVALID_SIGNIN_RESPONSE:
      return std::make_unique<base::Value>("InvalidSigninResponse");
    case audits::FederatedAuthRequestIssueReason::ACCOUNTS_HTTP_NOT_FOUND:
      return std::make_unique<base::Value>("AccountsHttpNotFound");
    case audits::FederatedAuthRequestIssueReason::ACCOUNTS_NO_RESPONSE:
      return std::make_unique<base::Value>("AccountsNoResponse");
    case audits::FederatedAuthRequestIssueReason::ACCOUNTS_INVALID_RESPONSE:
      return std::make_unique<base::Value>("AccountsInvalidResponse");
    case audits::FederatedAuthRequestIssueReason::ID_TOKEN_HTTP_NOT_FOUND:
      return std::make_unique<base::Value>("IdTokenHttpNotFound");
    case audits::FederatedAuthRequestIssueReason::ID_TOKEN_NO_RESPONSE:
      return std::make_unique<base::Value>("IdTokenNoResponse");
    case audits::FederatedAuthRequestIssueReason::ID_TOKEN_INVALID_RESPONSE:
      return std::make_unique<base::Value>("IdTokenInvalidResponse");
    case audits::FederatedAuthRequestIssueReason::ID_TOKEN_INVALID_REQUEST:
      return std::make_unique<base::Value>("IdTokenInvalidRequest");
    case audits::FederatedAuthRequestIssueReason::ERROR_ID_TOKEN:
      return std::make_unique<base::Value>("ErrorIdToken");
    case audits::FederatedAuthRequestIssueReason::CANCELED:
      return std::make_unique<base::Value>("Canceled");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::ClientHintIssueDetails> {
  static std::unique_ptr<audits::ClientHintIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::ClientHintIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::ClientHintIssueDetails& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::InspectorIssueCode> {
  static audits::InspectorIssueCode Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::InspectorIssueCode::COOKIE_ISSUE;
    }
    if (value.GetString() == "CookieIssue")
      return audits::InspectorIssueCode::COOKIE_ISSUE;
    if (value.GetString() == "MixedContentIssue")
      return audits::InspectorIssueCode::MIXED_CONTENT_ISSUE;
    if (value.GetString() == "BlockedByResponseIssue")
      return audits::InspectorIssueCode::BLOCKED_BY_RESPONSE_ISSUE;
    if (value.GetString() == "HeavyAdIssue")
      return audits::InspectorIssueCode::HEAVY_AD_ISSUE;
    if (value.GetString() == "ContentSecurityPolicyIssue")
      return audits::InspectorIssueCode::CONTENT_SECURITY_POLICY_ISSUE;
    if (value.GetString() == "SharedArrayBufferIssue")
      return audits::InspectorIssueCode::SHARED_ARRAY_BUFFER_ISSUE;
    if (value.GetString() == "TrustedWebActivityIssue")
      return audits::InspectorIssueCode::TRUSTED_WEB_ACTIVITY_ISSUE;
    if (value.GetString() == "LowTextContrastIssue")
      return audits::InspectorIssueCode::LOW_TEXT_CONTRAST_ISSUE;
    if (value.GetString() == "CorsIssue")
      return audits::InspectorIssueCode::CORS_ISSUE;
    if (value.GetString() == "AttributionReportingIssue")
      return audits::InspectorIssueCode::ATTRIBUTION_REPORTING_ISSUE;
    if (value.GetString() == "QuirksModeIssue")
      return audits::InspectorIssueCode::QUIRKS_MODE_ISSUE;
    if (value.GetString() == "NavigatorUserAgentIssue")
      return audits::InspectorIssueCode::NAVIGATOR_USER_AGENT_ISSUE;
    if (value.GetString() == "GenericIssue")
      return audits::InspectorIssueCode::GENERIC_ISSUE;
    if (value.GetString() == "DeprecationIssue")
      return audits::InspectorIssueCode::DEPRECATION_ISSUE;
    if (value.GetString() == "ClientHintIssue")
      return audits::InspectorIssueCode::CLIENT_HINT_ISSUE;
    if (value.GetString() == "FederatedAuthRequestIssue")
      return audits::InspectorIssueCode::FEDERATED_AUTH_REQUEST_ISSUE;
    errors->AddError("invalid enum value");
    return audits::InspectorIssueCode::COOKIE_ISSUE;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::InspectorIssueCode& value, T*) {
  switch (value) {
    case audits::InspectorIssueCode::COOKIE_ISSUE:
      return std::make_unique<base::Value>("CookieIssue");
    case audits::InspectorIssueCode::MIXED_CONTENT_ISSUE:
      return std::make_unique<base::Value>("MixedContentIssue");
    case audits::InspectorIssueCode::BLOCKED_BY_RESPONSE_ISSUE:
      return std::make_unique<base::Value>("BlockedByResponseIssue");
    case audits::InspectorIssueCode::HEAVY_AD_ISSUE:
      return std::make_unique<base::Value>("HeavyAdIssue");
    case audits::InspectorIssueCode::CONTENT_SECURITY_POLICY_ISSUE:
      return std::make_unique<base::Value>("ContentSecurityPolicyIssue");
    case audits::InspectorIssueCode::SHARED_ARRAY_BUFFER_ISSUE:
      return std::make_unique<base::Value>("SharedArrayBufferIssue");
    case audits::InspectorIssueCode::TRUSTED_WEB_ACTIVITY_ISSUE:
      return std::make_unique<base::Value>("TrustedWebActivityIssue");
    case audits::InspectorIssueCode::LOW_TEXT_CONTRAST_ISSUE:
      return std::make_unique<base::Value>("LowTextContrastIssue");
    case audits::InspectorIssueCode::CORS_ISSUE:
      return std::make_unique<base::Value>("CorsIssue");
    case audits::InspectorIssueCode::ATTRIBUTION_REPORTING_ISSUE:
      return std::make_unique<base::Value>("AttributionReportingIssue");
    case audits::InspectorIssueCode::QUIRKS_MODE_ISSUE:
      return std::make_unique<base::Value>("QuirksModeIssue");
    case audits::InspectorIssueCode::NAVIGATOR_USER_AGENT_ISSUE:
      return std::make_unique<base::Value>("NavigatorUserAgentIssue");
    case audits::InspectorIssueCode::GENERIC_ISSUE:
      return std::make_unique<base::Value>("GenericIssue");
    case audits::InspectorIssueCode::DEPRECATION_ISSUE:
      return std::make_unique<base::Value>("DeprecationIssue");
    case audits::InspectorIssueCode::CLIENT_HINT_ISSUE:
      return std::make_unique<base::Value>("ClientHintIssue");
    case audits::InspectorIssueCode::FEDERATED_AUTH_REQUEST_ISSUE:
      return std::make_unique<base::Value>("FederatedAuthRequestIssue");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::InspectorIssueDetails> {
  static std::unique_ptr<audits::InspectorIssueDetails> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::InspectorIssueDetails::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::InspectorIssueDetails& value, T*) {
  return value.Serialize();
}



template <>
struct FromValue<audits::InspectorIssue> {
  static std::unique_ptr<audits::InspectorIssue> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::InspectorIssue::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::InspectorIssue& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<audits::GetEncodedResponseEncoding> {
  static audits::GetEncodedResponseEncoding Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return audits::GetEncodedResponseEncoding::WEBP;
    }
    if (value.GetString() == "webp")
      return audits::GetEncodedResponseEncoding::WEBP;
    if (value.GetString() == "jpeg")
      return audits::GetEncodedResponseEncoding::JPEG;
    if (value.GetString() == "png")
      return audits::GetEncodedResponseEncoding::PNG;
    errors->AddError("invalid enum value");
    return audits::GetEncodedResponseEncoding::WEBP;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::GetEncodedResponseEncoding& value, T*) {
  switch (value) {
    case audits::GetEncodedResponseEncoding::WEBP:
      return std::make_unique<base::Value>("webp");
    case audits::GetEncodedResponseEncoding::JPEG:
      return std::make_unique<base::Value>("jpeg");
    case audits::GetEncodedResponseEncoding::PNG:
      return std::make_unique<base::Value>("png");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<audits::GetEncodedResponseParams> {
  static std::unique_ptr<audits::GetEncodedResponseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::GetEncodedResponseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::GetEncodedResponseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::GetEncodedResponseResult> {
  static std::unique_ptr<audits::GetEncodedResponseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::GetEncodedResponseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::GetEncodedResponseResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::DisableParams> {
  static std::unique_ptr<audits::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::DisableResult> {
  static std::unique_ptr<audits::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::EnableParams> {
  static std::unique_ptr<audits::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::EnableResult> {
  static std::unique_ptr<audits::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::CheckContrastParams> {
  static std::unique_ptr<audits::CheckContrastParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::CheckContrastParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::CheckContrastParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::CheckContrastResult> {
  static std::unique_ptr<audits::CheckContrastResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::CheckContrastResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::CheckContrastResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<audits::IssueAddedParams> {
  static std::unique_ptr<audits::IssueAddedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return audits::IssueAddedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const audits::IssueAddedParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_AUDITS_H_
