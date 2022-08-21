// services/network/public/mojom/trust_tokens.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/network/public/mojom/trust_tokens.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/network/public/mojom/trust_tokens.mojom-params-data.h"
namespace network {
namespace mojom {

static NOINLINE const char* TrustTokenProtocolVersionToStringHelper(TrustTokenProtocolVersion value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case TrustTokenProtocolVersion::kTrustTokenV3Pmb:
      return "kTrustTokenV3Pmb";
    case TrustTokenProtocolVersion::kTrustTokenV3Voprf:
      return "kTrustTokenV3Voprf";
    default:
      return nullptr;
  }
}

std::string TrustTokenProtocolVersionToString(TrustTokenProtocolVersion value) {
  const char *str = TrustTokenProtocolVersionToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown TrustTokenProtocolVersion value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, TrustTokenProtocolVersion value) {
  return os << TrustTokenProtocolVersionToString(value);
}

static NOINLINE const char* TrustTokenOperationStatusToStringHelper(TrustTokenOperationStatus value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case TrustTokenOperationStatus::kOk:
      return "kOk";
    case TrustTokenOperationStatus::kInvalidArgument:
      return "kInvalidArgument";
    case TrustTokenOperationStatus::kFailedPrecondition:
      return "kFailedPrecondition";
    case TrustTokenOperationStatus::kResourceExhausted:
      return "kResourceExhausted";
    case TrustTokenOperationStatus::kAlreadyExists:
      return "kAlreadyExists";
    case TrustTokenOperationStatus::kUnavailable:
      return "kUnavailable";
    case TrustTokenOperationStatus::kBadResponse:
      return "kBadResponse";
    case TrustTokenOperationStatus::kInternalError:
      return "kInternalError";
    case TrustTokenOperationStatus::kUnknownError:
      return "kUnknownError";
    case TrustTokenOperationStatus::kOperationSuccessfullyFulfilledLocally:
      return "kOperationSuccessfullyFulfilledLocally";
    default:
      return nullptr;
  }
}

std::string TrustTokenOperationStatusToString(TrustTokenOperationStatus value) {
  const char *str = TrustTokenOperationStatusToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown TrustTokenOperationStatus value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, TrustTokenOperationStatus value) {
  return os << TrustTokenOperationStatusToString(value);
}

static NOINLINE const char* TrustTokenOperationTypeToStringHelper(TrustTokenOperationType value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case TrustTokenOperationType::kIssuance:
      return "kIssuance";
    case TrustTokenOperationType::kRedemption:
      return "kRedemption";
    case TrustTokenOperationType::kSigning:
      return "kSigning";
    default:
      return nullptr;
  }
}

std::string TrustTokenOperationTypeToString(TrustTokenOperationType value) {
  const char *str = TrustTokenOperationTypeToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown TrustTokenOperationType value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, TrustTokenOperationType value) {
  return os << TrustTokenOperationTypeToString(value);
}

static NOINLINE const char* TrustTokenRefreshPolicyToStringHelper(TrustTokenRefreshPolicy value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case TrustTokenRefreshPolicy::kUseCached:
      return "kUseCached";
    case TrustTokenRefreshPolicy::kRefresh:
      return "kRefresh";
    default:
      return nullptr;
  }
}

std::string TrustTokenRefreshPolicyToString(TrustTokenRefreshPolicy value) {
  const char *str = TrustTokenRefreshPolicyToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown TrustTokenRefreshPolicy value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, TrustTokenRefreshPolicy value) {
  return os << TrustTokenRefreshPolicyToString(value);
}

static NOINLINE const char* TrustTokenSignRequestDataToStringHelper(TrustTokenSignRequestData value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case TrustTokenSignRequestData::kOmit:
      return "kOmit";
    case TrustTokenSignRequestData::kHeadersOnly:
      return "kHeadersOnly";
    case TrustTokenSignRequestData::kInclude:
      return "kInclude";
    default:
      return nullptr;
  }
}

std::string TrustTokenSignRequestDataToString(TrustTokenSignRequestData value) {
  const char *str = TrustTokenSignRequestDataToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown TrustTokenSignRequestData value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, TrustTokenSignRequestData value) {
  return os << TrustTokenSignRequestDataToString(value);
}

static NOINLINE const char* DeleteStoredTrustTokensStatusToStringHelper(DeleteStoredTrustTokensStatus value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case DeleteStoredTrustTokensStatus::kSuccessTokensDeleted:
      return "kSuccessTokensDeleted";
    case DeleteStoredTrustTokensStatus::kSuccessNoTokensDeleted:
      return "kSuccessNoTokensDeleted";
    case DeleteStoredTrustTokensStatus::kFailureFeatureDisabled:
      return "kFailureFeatureDisabled";
    case DeleteStoredTrustTokensStatus::kFailureInvalidOrigin:
      return "kFailureInvalidOrigin";
    default:
      return nullptr;
  }
}

std::string DeleteStoredTrustTokensStatusToString(DeleteStoredTrustTokensStatus value) {
  const char *str = DeleteStoredTrustTokensStatusToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown DeleteStoredTrustTokensStatus value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, DeleteStoredTrustTokensStatus value) {
  return os << DeleteStoredTrustTokensStatusToString(value);
}

static NOINLINE const char* TrustTokenKeyCommitmentResult_OsToStringHelper(TrustTokenKeyCommitmentResult_Os value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case TrustTokenKeyCommitmentResult_Os::kAndroid:
      return "kAndroid";
    default:
      return nullptr;
  }
}

std::string TrustTokenKeyCommitmentResult_OsToString(TrustTokenKeyCommitmentResult_Os value) {
  const char *str = TrustTokenKeyCommitmentResult_OsToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown TrustTokenKeyCommitmentResult_Os value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, TrustTokenKeyCommitmentResult_Os value) {
  return os << TrustTokenKeyCommitmentResult_OsToString(value);
}

static NOINLINE const char* TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallbackToStringHelper(TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallback value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallback::kWebIssuance:
      return "kWebIssuance";
    case TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallback::kReturnWithError:
      return "kReturnWithError";
    default:
      return nullptr;
  }
}

std::string TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallbackToString(TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallback value) {
  const char *str = TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallbackToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallback value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallback value) {
  return os << TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallbackToString(value);
}

static NOINLINE const char* FulfillTrustTokenIssuanceAnswer_StatusToStringHelper(FulfillTrustTokenIssuanceAnswer_Status value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case FulfillTrustTokenIssuanceAnswer_Status::kOk:
      return "kOk";
    case FulfillTrustTokenIssuanceAnswer_Status::kNotFound:
      return "kNotFound";
    case FulfillTrustTokenIssuanceAnswer_Status::kUnknownError:
      return "kUnknownError";
    default:
      return nullptr;
  }
}

std::string FulfillTrustTokenIssuanceAnswer_StatusToString(FulfillTrustTokenIssuanceAnswer_Status value) {
  const char *str = FulfillTrustTokenIssuanceAnswer_StatusToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown FulfillTrustTokenIssuanceAnswer_Status value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, FulfillTrustTokenIssuanceAnswer_Status value) {
  return os << FulfillTrustTokenIssuanceAnswer_StatusToString(value);
}

namespace internal {


// static
bool TrustTokenParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 56, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const TrustTokenParams_Data* object =
      static_cast<const TrustTokenParams_Data*>(data);


  if (!::network::mojom::internal::TrustTokenOperationType_Data
        ::Validate(object->type, validation_context))
    return false;


  if (!::network::mojom::internal::TrustTokenRefreshPolicy_Data
        ::Validate(object->refresh_policy, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams custom_key_commitment_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->custom_key_commitment, validation_context,
                                         &custom_key_commitment_validate_params)) {
    return false;
  }


  if (!::network::mojom::internal::TrustTokenSignRequestData_Data
        ::Validate(object->sign_request_data, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->issuers, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams issuers_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->issuers, validation_context,
                                         &issuers_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->additional_signed_headers, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams additional_signed_headers_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->additional_signed_headers, validation_context,
                                         &additional_signed_headers_validate_params)) {
    return false;
  }

  const mojo::internal::ContainerValidateParams possibly_unsafe_additional_signing_data_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->possibly_unsafe_additional_signing_data, validation_context,
                                         &possibly_unsafe_additional_signing_data_validate_params)) {
    return false;
  }

  return true;
}

TrustTokenParams_Data::TrustTokenParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool HasTrustTokensResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const HasTrustTokensResult_Data* object =
      static_cast<const HasTrustTokensResult_Data*>(data);


  if (!::network::mojom::internal::TrustTokenOperationStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  return true;
}

HasTrustTokensResult_Data::HasTrustTokensResult_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TrustTokenVerificationKey_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const TrustTokenVerificationKey_Data* object =
      static_cast<const TrustTokenVerificationKey_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->body, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams body_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->body, validation_context,
                                         &body_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->expiry, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->expiry, validation_context))
    return false;

  return true;
}

TrustTokenVerificationKey_Data::TrustTokenVerificationKey_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TrustTokenKeyCommitmentResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 40, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const TrustTokenKeyCommitmentResult_Data* object =
      static_cast<const TrustTokenKeyCommitmentResult_Data*>(data);


  if (!::network::mojom::internal::TrustTokenProtocolVersion_Data
        ::Validate(object->protocol_version, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->keys, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams keys_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->keys, validation_context,
                                         &keys_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->request_issuance_locally_on, 5, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams request_issuance_locally_on_validate_params(
      0, ::network::mojom::internal::TrustTokenKeyCommitmentResult_Os_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->request_issuance_locally_on, validation_context,
                                         &request_issuance_locally_on_validate_params)) {
    return false;
  }


  if (!::network::mojom::internal::TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallback_Data
        ::Validate(object->unavailable_local_operation_fallback, validation_context))
    return false;

  return true;
}

TrustTokenKeyCommitmentResult_Data::TrustTokenKeyCommitmentResult_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FulfillTrustTokenIssuanceRequest_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const FulfillTrustTokenIssuanceRequest_Data* object =
      static_cast<const FulfillTrustTokenIssuanceRequest_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->issuer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->issuer, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->request, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams request_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->request, validation_context,
                                         &request_validate_params)) {
    return false;
  }

  return true;
}

FulfillTrustTokenIssuanceRequest_Data::FulfillTrustTokenIssuanceRequest_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool FulfillTrustTokenIssuanceAnswer_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const FulfillTrustTokenIssuanceAnswer_Data* object =
      static_cast<const FulfillTrustTokenIssuanceAnswer_Data*>(data);


  if (!::network::mojom::internal::FulfillTrustTokenIssuanceAnswer_Status_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->response, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams response_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->response, validation_context,
                                         &response_validate_params)) {
    return false;
  }

  return true;
}

FulfillTrustTokenIssuanceAnswer_Data::FulfillTrustTokenIssuanceAnswer_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TrustTokenOperationResult_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 40, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const TrustTokenOperationResult_Data* object =
      static_cast<const TrustTokenOperationResult_Data*>(data);


  if (!::network::mojom::internal::TrustTokenOperationType_Data
        ::Validate(object->type, validation_context))
    return false;


  if (!::network::mojom::internal::TrustTokenOperationStatus_Data
        ::Validate(object->status, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->issuer, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->top_level_origin, validation_context))
    return false;

  return true;
}

TrustTokenOperationResult_Data::TrustTokenOperationResult_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool StoredTrustTokensForIssuer_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const StoredTrustTokensForIssuer_Data* object =
      static_cast<const StoredTrustTokensForIssuer_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->issuer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->issuer, validation_context))
    return false;

  return true;
}

StoredTrustTokensForIssuer_Data::StoredTrustTokensForIssuer_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TrustTokenQueryAnswerer_HasTrustTokens_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const TrustTokenQueryAnswerer_HasTrustTokens_Params_Data* object =
      static_cast<const TrustTokenQueryAnswerer_HasTrustTokens_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->issuer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->issuer, validation_context))
    return false;

  return true;
}

TrustTokenQueryAnswerer_HasTrustTokens_Params_Data::TrustTokenQueryAnswerer_HasTrustTokens_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool TrustTokenQueryAnswerer_HasTrustTokens_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const TrustTokenQueryAnswerer_HasTrustTokens_ResponseParams_Data* object =
      static_cast<const TrustTokenQueryAnswerer_HasTrustTokens_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->result, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->result, validation_context))
    return false;

  return true;
}

TrustTokenQueryAnswerer_HasTrustTokens_ResponseParams_Data::TrustTokenQueryAnswerer_HasTrustTokens_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::TrustTokenProtocolVersion>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::TrustTokenProtocolVersion value) {
  return std::move(context).WriteString(::network::mojom::TrustTokenProtocolVersionToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::TrustTokenOperationStatus>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::TrustTokenOperationStatus value) {
  return std::move(context).WriteString(::network::mojom::TrustTokenOperationStatusToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::TrustTokenOperationType>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::TrustTokenOperationType value) {
  return std::move(context).WriteString(::network::mojom::TrustTokenOperationTypeToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::TrustTokenRefreshPolicy>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::TrustTokenRefreshPolicy value) {
  return std::move(context).WriteString(::network::mojom::TrustTokenRefreshPolicyToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::TrustTokenSignRequestData>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::TrustTokenSignRequestData value) {
  return std::move(context).WriteString(::network::mojom::TrustTokenSignRequestDataToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::DeleteStoredTrustTokensStatus>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::DeleteStoredTrustTokensStatus value) {
  return std::move(context).WriteString(::network::mojom::DeleteStoredTrustTokensStatusToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::TrustTokenKeyCommitmentResult_Os>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::TrustTokenKeyCommitmentResult_Os value) {
  return std::move(context).WriteString(::network::mojom::TrustTokenKeyCommitmentResult_OsToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallback>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallback value) {
  return std::move(context).WriteString(::network::mojom::TrustTokenKeyCommitmentResult_UnavailableLocalOperationFallbackToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::network::mojom::FulfillTrustTokenIssuanceAnswer_Status>::WriteIntoTrace(
   perfetto::TracedValue context, ::network::mojom::FulfillTrustTokenIssuanceAnswer_Status value) {
  return std::move(context).WriteString(::network::mojom::FulfillTrustTokenIssuanceAnswer_StatusToString(value));
}

} // namespace perfetto