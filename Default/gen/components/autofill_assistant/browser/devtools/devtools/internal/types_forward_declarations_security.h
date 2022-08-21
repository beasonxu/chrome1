// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_SECURITY_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_SECURITY_H_

#include "base/values.h"

namespace autofill_assistant {

namespace security {
class CertificateSecurityState;
class SafetyTipInfo;
class VisibleSecurityState;
class SecurityStateExplanation;
class InsecureContentStatus;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class SetIgnoreCertificateErrorsParams;
class SetIgnoreCertificateErrorsResult;
class HandleCertificateErrorParams;
class HandleCertificateErrorResult;
class SetOverrideCertificateErrorsParams;
class SetOverrideCertificateErrorsResult;
class CertificateErrorParams;
class VisibleSecurityStateChangedParams;
class SecurityStateChangedParams;

enum class MixedContentType {
  BLOCKABLE,
  OPTIONALLY_BLOCKABLE,
  NONE
};

enum class SecurityState {
  UNKNOWN,
  NEUTRAL,
  INSECURE,
  SECURE,
  INFO,
  INSECURE_BROKEN
};

enum class SafetyTipStatus {
  BAD_REPUTATION,
  LOOKALIKE
};

enum class CertificateErrorAction {
  CONTINUE,
  CANCEL
};

}  // namespace security

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_SECURITY_H_
