// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_type_conversions_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_FETCH_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_FETCH_H_

#include "base/notreached.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_fetch.h"
#include "components/autofill_assistant/browser/devtools/value_conversions.h"

namespace autofill_assistant {
namespace internal {


template <>
struct FromValue<fetch::RequestStage> {
  static fetch::RequestStage Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return fetch::RequestStage::REQUEST;
    }
    if (value.GetString() == "Request")
      return fetch::RequestStage::REQUEST;
    if (value.GetString() == "Response")
      return fetch::RequestStage::RESPONSE;
    errors->AddError("invalid enum value");
    return fetch::RequestStage::REQUEST;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::RequestStage& value, T*) {
  switch (value) {
    case fetch::RequestStage::REQUEST:
      return std::make_unique<base::Value>("Request");
    case fetch::RequestStage::RESPONSE:
      return std::make_unique<base::Value>("Response");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<fetch::RequestPattern> {
  static std::unique_ptr<fetch::RequestPattern> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::RequestPattern::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::RequestPattern& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::HeaderEntry> {
  static std::unique_ptr<fetch::HeaderEntry> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::HeaderEntry::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::HeaderEntry& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::AuthChallenge> {
  static std::unique_ptr<fetch::AuthChallenge> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::AuthChallenge::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::AuthChallenge& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::AuthChallengeResponse> {
  static std::unique_ptr<fetch::AuthChallengeResponse> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::AuthChallengeResponse::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::AuthChallengeResponse& value, T*) {
  return value.Serialize();
}

template <>
struct FromValue<fetch::AuthChallengeSource> {
  static fetch::AuthChallengeSource Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return fetch::AuthChallengeSource::SERVER;
    }
    if (value.GetString() == "Server")
      return fetch::AuthChallengeSource::SERVER;
    if (value.GetString() == "Proxy")
      return fetch::AuthChallengeSource::PROXY;
    errors->AddError("invalid enum value");
    return fetch::AuthChallengeSource::SERVER;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::AuthChallengeSource& value, T*) {
  switch (value) {
    case fetch::AuthChallengeSource::SERVER:
      return std::make_unique<base::Value>("Server");
    case fetch::AuthChallengeSource::PROXY:
      return std::make_unique<base::Value>("Proxy");
  };
  NOTREACHED();
  return nullptr;
}
template <>
struct FromValue<fetch::AuthChallengeResponseResponse> {
  static fetch::AuthChallengeResponseResponse Parse(const base::Value& value, ErrorReporter* errors) {
    if (!value.is_string()) {
      errors->AddError("string enum value expected");
      return fetch::AuthChallengeResponseResponse::DEFAULT;
    }
    if (value.GetString() == "Default")
      return fetch::AuthChallengeResponseResponse::DEFAULT;
    if (value.GetString() == "CancelAuth")
      return fetch::AuthChallengeResponseResponse::CANCEL_AUTH;
    if (value.GetString() == "ProvideCredentials")
      return fetch::AuthChallengeResponseResponse::PROVIDE_CREDENTIALS;
    errors->AddError("invalid enum value");
    return fetch::AuthChallengeResponseResponse::DEFAULT;
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::AuthChallengeResponseResponse& value, T*) {
  switch (value) {
    case fetch::AuthChallengeResponseResponse::DEFAULT:
      return std::make_unique<base::Value>("Default");
    case fetch::AuthChallengeResponseResponse::CANCEL_AUTH:
      return std::make_unique<base::Value>("CancelAuth");
    case fetch::AuthChallengeResponseResponse::PROVIDE_CREDENTIALS:
      return std::make_unique<base::Value>("ProvideCredentials");
  };
  NOTREACHED();
  return nullptr;
}

template <>
struct FromValue<fetch::DisableParams> {
  static std::unique_ptr<fetch::DisableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::DisableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::DisableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::DisableResult> {
  static std::unique_ptr<fetch::DisableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::DisableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::DisableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::EnableParams> {
  static std::unique_ptr<fetch::EnableParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::EnableParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::EnableParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::EnableResult> {
  static std::unique_ptr<fetch::EnableResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::EnableResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::EnableResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::FailRequestParams> {
  static std::unique_ptr<fetch::FailRequestParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::FailRequestParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::FailRequestParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::FailRequestResult> {
  static std::unique_ptr<fetch::FailRequestResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::FailRequestResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::FailRequestResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::FulfillRequestParams> {
  static std::unique_ptr<fetch::FulfillRequestParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::FulfillRequestParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::FulfillRequestParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::FulfillRequestResult> {
  static std::unique_ptr<fetch::FulfillRequestResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::FulfillRequestResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::FulfillRequestResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::ContinueRequestParams> {
  static std::unique_ptr<fetch::ContinueRequestParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::ContinueRequestParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::ContinueRequestParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::ContinueRequestResult> {
  static std::unique_ptr<fetch::ContinueRequestResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::ContinueRequestResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::ContinueRequestResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::ContinueWithAuthParams> {
  static std::unique_ptr<fetch::ContinueWithAuthParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::ContinueWithAuthParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::ContinueWithAuthParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::ContinueWithAuthResult> {
  static std::unique_ptr<fetch::ContinueWithAuthResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::ContinueWithAuthResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::ContinueWithAuthResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::ContinueResponseParams> {
  static std::unique_ptr<fetch::ContinueResponseParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::ContinueResponseParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::ContinueResponseParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::ContinueResponseResult> {
  static std::unique_ptr<fetch::ContinueResponseResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::ContinueResponseResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::ContinueResponseResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::GetResponseBodyParams> {
  static std::unique_ptr<fetch::GetResponseBodyParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::GetResponseBodyParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::GetResponseBodyParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::GetResponseBodyResult> {
  static std::unique_ptr<fetch::GetResponseBodyResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::GetResponseBodyResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::GetResponseBodyResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::TakeResponseBodyAsStreamParams> {
  static std::unique_ptr<fetch::TakeResponseBodyAsStreamParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::TakeResponseBodyAsStreamParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::TakeResponseBodyAsStreamParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::TakeResponseBodyAsStreamResult> {
  static std::unique_ptr<fetch::TakeResponseBodyAsStreamResult> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::TakeResponseBodyAsStreamResult::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::TakeResponseBodyAsStreamResult& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::RequestPausedParams> {
  static std::unique_ptr<fetch::RequestPausedParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::RequestPausedParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::RequestPausedParams& value, T*) {
  return value.Serialize();
}


template <>
struct FromValue<fetch::AuthRequiredParams> {
  static std::unique_ptr<fetch::AuthRequiredParams> Parse(const base::Value& value, ErrorReporter* errors) {
    return fetch::AuthRequiredParams::Parse(value, errors);
  }
};

template <typename T>
std::unique_ptr<base::Value> ToValueImpl(const fetch::AuthRequiredParams& value, T*) {
  return value.Serialize();
}


}  // namespace internal
}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_INTERNAL_TYPE_CONVERSIONS_FETCH_H_
