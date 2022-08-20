// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_forward_declarations_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_FETCH_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_FETCH_H_

#include "base/values.h"

namespace autofill_assistant {

namespace fetch {
class RequestPattern;
class HeaderEntry;
class AuthChallenge;
class AuthChallengeResponse;
class DisableParams;
class DisableResult;
class EnableParams;
class EnableResult;
class FailRequestParams;
class FailRequestResult;
class FulfillRequestParams;
class FulfillRequestResult;
class ContinueRequestParams;
class ContinueRequestResult;
class ContinueWithAuthParams;
class ContinueWithAuthResult;
class ContinueResponseParams;
class ContinueResponseResult;
class GetResponseBodyParams;
class GetResponseBodyResult;
class TakeResponseBodyAsStreamParams;
class TakeResponseBodyAsStreamResult;
class RequestPausedParams;
class AuthRequiredParams;

enum class RequestStage {
  REQUEST,
  RESPONSE
};

enum class AuthChallengeSource {
  SERVER,
  PROXY
};

enum class AuthChallengeResponseResponse {
  DEFAULT,
  CANCEL_AUTH,
  PROVIDE_CREDENTIALS
};

}  // namespace fetch

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPES_FORWARD_DECLARATIONS_FETCH_H_
