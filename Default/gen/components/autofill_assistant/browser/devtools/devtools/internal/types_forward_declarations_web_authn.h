// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_WEB_AUTHN_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_WEB_AUTHN_H_

#include "base/values.h"

namespace autofill_assistant {

namespace web_authn {
class VirtualAuthenticatorOptions;
class Credential;
class EnableParams;
class EnableResult;
class DisableParams;
class DisableResult;
class AddVirtualAuthenticatorParams;
class AddVirtualAuthenticatorResult;
class RemoveVirtualAuthenticatorParams;
class RemoveVirtualAuthenticatorResult;
class AddCredentialParams;
class AddCredentialResult;
class GetCredentialParams;
class GetCredentialResult;
class GetCredentialsParams;
class GetCredentialsResult;
class RemoveCredentialParams;
class RemoveCredentialResult;
class ClearCredentialsParams;
class ClearCredentialsResult;
class SetUserVerifiedParams;
class SetUserVerifiedResult;
class SetAutomaticPresenceSimulationParams;
class SetAutomaticPresenceSimulationResult;

enum class AuthenticatorProtocol {
  U2F,
  CTAP2
};

enum class Ctap2Version {
  CTAP2_0,
  CTAP2_1
};

enum class AuthenticatorTransport {
  USB,
  NFC,
  BLE,
  CABLE,
  INTERNAL
};

}  // namespace web_authn

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_WEB_AUTHN_H_
