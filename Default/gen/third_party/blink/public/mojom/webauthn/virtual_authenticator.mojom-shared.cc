// third_party/blink/public/mojom/webauthn/virtual_authenticator.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/webauthn/virtual_authenticator.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/webauthn/virtual_authenticator.mojom-params-data.h"
namespace blink {
namespace test {
namespace mojom {

static NOINLINE const char* ClientToAuthenticatorProtocolToStringHelper(ClientToAuthenticatorProtocol value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case ClientToAuthenticatorProtocol::U2F:
      return "U2F";
    case ClientToAuthenticatorProtocol::CTAP2:
      return "CTAP2";
    default:
      return nullptr;
  }
}

std::string ClientToAuthenticatorProtocolToString(ClientToAuthenticatorProtocol value) {
  const char *str = ClientToAuthenticatorProtocolToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown ClientToAuthenticatorProtocol value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, ClientToAuthenticatorProtocol value) {
  return os << ClientToAuthenticatorProtocolToString(value);
}

static NOINLINE const char* Ctap2VersionToStringHelper(Ctap2Version value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case Ctap2Version::CTAP2_0:
      return "CTAP2_0";
    case Ctap2Version::CTAP2_1:
      return "CTAP2_1";
    default:
      return nullptr;
  }
}

std::string Ctap2VersionToString(Ctap2Version value) {
  const char *str = Ctap2VersionToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown Ctap2Version value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, Ctap2Version value) {
  return os << Ctap2VersionToString(value);
}

namespace internal {


// static
bool VirtualAuthenticatorOptions_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 32, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const VirtualAuthenticatorOptions_Data* object =
      static_cast<const VirtualAuthenticatorOptions_Data*>(data);


  if (!::blink::test::mojom::internal::ClientToAuthenticatorProtocol_Data
        ::Validate(object->protocol, validation_context))
    return false;


  if (!::blink::test::mojom::internal::Ctap2Version_Data
        ::Validate(object->ctap2_version, validation_context))
    return false;


  if (!::blink::mojom::internal::AuthenticatorTransport_Data
        ::Validate(object->transport, validation_context))
    return false;


  if (!::blink::mojom::internal::AuthenticatorAttachment_Data
        ::Validate(object->attachment, validation_context))
    return false;

  return true;
}

VirtualAuthenticatorOptions_Data::VirtualAuthenticatorOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool RegisteredKey_Data::Validate(
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
  [[maybe_unused]] const RegisteredKey_Data* object =
      static_cast<const RegisteredKey_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key_handle, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_handle_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key_handle, validation_context,
                                         &key_handle_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->rp_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams rp_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->rp_id, validation_context,
                                         &rp_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->private_key, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams private_key_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->private_key, validation_context,
                                         &private_key_validate_params)) {
    return false;
  }

  return true;
}

RegisteredKey_Data::RegisteredKey_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_GetUniqueId_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const VirtualAuthenticator_GetUniqueId_Params_Data* object =
      static_cast<const VirtualAuthenticator_GetUniqueId_Params_Data*>(data);

  return true;
}

VirtualAuthenticator_GetUniqueId_Params_Data::VirtualAuthenticator_GetUniqueId_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_GetUniqueId_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticator_GetUniqueId_ResponseParams_Data* object =
      static_cast<const VirtualAuthenticator_GetUniqueId_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->id, validation_context,
                                         &id_validate_params)) {
    return false;
  }

  return true;
}

VirtualAuthenticator_GetUniqueId_ResponseParams_Data::VirtualAuthenticator_GetUniqueId_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_AddRegistration_Params_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticator_AddRegistration_Params_Data* object =
      static_cast<const VirtualAuthenticator_AddRegistration_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->key, validation_context))
    return false;

  return true;
}

VirtualAuthenticator_AddRegistration_Params_Data::VirtualAuthenticator_AddRegistration_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_AddRegistration_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticator_AddRegistration_ResponseParams_Data* object =
      static_cast<const VirtualAuthenticator_AddRegistration_ResponseParams_Data*>(data);

  return true;
}

VirtualAuthenticator_AddRegistration_ResponseParams_Data::VirtualAuthenticator_AddRegistration_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_GetRegistrations_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const VirtualAuthenticator_GetRegistrations_Params_Data* object =
      static_cast<const VirtualAuthenticator_GetRegistrations_Params_Data*>(data);

  return true;
}

VirtualAuthenticator_GetRegistrations_Params_Data::VirtualAuthenticator_GetRegistrations_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_GetRegistrations_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticator_GetRegistrations_ResponseParams_Data* object =
      static_cast<const VirtualAuthenticator_GetRegistrations_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->keys, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams keys_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->keys, validation_context,
                                         &keys_validate_params)) {
    return false;
  }

  return true;
}

VirtualAuthenticator_GetRegistrations_ResponseParams_Data::VirtualAuthenticator_GetRegistrations_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_RemoveRegistration_Params_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticator_RemoveRegistration_Params_Data* object =
      static_cast<const VirtualAuthenticator_RemoveRegistration_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key_handle, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_handle_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key_handle, validation_context,
                                         &key_handle_validate_params)) {
    return false;
  }

  return true;
}

VirtualAuthenticator_RemoveRegistration_Params_Data::VirtualAuthenticator_RemoveRegistration_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_RemoveRegistration_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticator_RemoveRegistration_ResponseParams_Data* object =
      static_cast<const VirtualAuthenticator_RemoveRegistration_ResponseParams_Data*>(data);

  return true;
}

VirtualAuthenticator_RemoveRegistration_ResponseParams_Data::VirtualAuthenticator_RemoveRegistration_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_ClearRegistrations_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const VirtualAuthenticator_ClearRegistrations_Params_Data* object =
      static_cast<const VirtualAuthenticator_ClearRegistrations_Params_Data*>(data);

  return true;
}

VirtualAuthenticator_ClearRegistrations_Params_Data::VirtualAuthenticator_ClearRegistrations_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_ClearRegistrations_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const VirtualAuthenticator_ClearRegistrations_ResponseParams_Data* object =
      static_cast<const VirtualAuthenticator_ClearRegistrations_ResponseParams_Data*>(data);

  return true;
}

VirtualAuthenticator_ClearRegistrations_ResponseParams_Data::VirtualAuthenticator_ClearRegistrations_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_GetLargeBlob_Params_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticator_GetLargeBlob_Params_Data* object =
      static_cast<const VirtualAuthenticator_GetLargeBlob_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key_handle, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_handle_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key_handle, validation_context,
                                         &key_handle_validate_params)) {
    return false;
  }

  return true;
}

VirtualAuthenticator_GetLargeBlob_Params_Data::VirtualAuthenticator_GetLargeBlob_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_GetLargeBlob_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticator_GetLargeBlob_ResponseParams_Data* object =
      static_cast<const VirtualAuthenticator_GetLargeBlob_ResponseParams_Data*>(data);

  const mojo::internal::ContainerValidateParams blob_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->blob, validation_context,
                                         &blob_validate_params)) {
    return false;
  }

  return true;
}

VirtualAuthenticator_GetLargeBlob_ResponseParams_Data::VirtualAuthenticator_GetLargeBlob_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_SetLargeBlob_Params_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticator_SetLargeBlob_Params_Data* object =
      static_cast<const VirtualAuthenticator_SetLargeBlob_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->key_handle, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams key_handle_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->key_handle, validation_context,
                                         &key_handle_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->blob, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams blob_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->blob, validation_context,
                                         &blob_validate_params)) {
    return false;
  }

  return true;
}

VirtualAuthenticator_SetLargeBlob_Params_Data::VirtualAuthenticator_SetLargeBlob_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_SetLargeBlob_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticator_SetLargeBlob_ResponseParams_Data* object =
      static_cast<const VirtualAuthenticator_SetLargeBlob_ResponseParams_Data*>(data);

  return true;
}

VirtualAuthenticator_SetLargeBlob_ResponseParams_Data::VirtualAuthenticator_SetLargeBlob_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_SetUserVerified_Params_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticator_SetUserVerified_Params_Data* object =
      static_cast<const VirtualAuthenticator_SetUserVerified_Params_Data*>(data);

  return true;
}

VirtualAuthenticator_SetUserVerified_Params_Data::VirtualAuthenticator_SetUserVerified_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticator_SetUserVerified_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const VirtualAuthenticator_SetUserVerified_ResponseParams_Data* object =
      static_cast<const VirtualAuthenticator_SetUserVerified_ResponseParams_Data*>(data);

  return true;
}

VirtualAuthenticator_SetUserVerified_ResponseParams_Data::VirtualAuthenticator_SetUserVerified_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticatorManager_CreateAuthenticator_Params_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticatorManager_CreateAuthenticator_Params_Data* object =
      static_cast<const VirtualAuthenticatorManager_CreateAuthenticator_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->options, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->options, validation_context))
    return false;

  return true;
}

VirtualAuthenticatorManager_CreateAuthenticator_Params_Data::VirtualAuthenticatorManager_CreateAuthenticator_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data* object =
      static_cast<const VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->authenticator, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->authenticator,
                                                 validation_context)) {
    return false;
  }

  return true;
}

VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data::VirtualAuthenticatorManager_CreateAuthenticator_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticatorManager_GetAuthenticators_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const VirtualAuthenticatorManager_GetAuthenticators_Params_Data* object =
      static_cast<const VirtualAuthenticatorManager_GetAuthenticators_Params_Data*>(data);

  return true;
}

VirtualAuthenticatorManager_GetAuthenticators_Params_Data::VirtualAuthenticatorManager_GetAuthenticators_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data* object =
      static_cast<const VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->authenticators, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams authenticators_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->authenticators, validation_context,
                                         &authenticators_validate_params)) {
    return false;
  }

  return true;
}

VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data::VirtualAuthenticatorManager_GetAuthenticators_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data* object =
      static_cast<const VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->id, validation_context,
                                         &id_validate_params)) {
    return false;
  }

  return true;
}

VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data::VirtualAuthenticatorManager_RemoveAuthenticator_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data* object =
      static_cast<const VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data*>(data);

  return true;
}

VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data::VirtualAuthenticatorManager_RemoveAuthenticator_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticatorManager_ClearAuthenticators_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const VirtualAuthenticatorManager_ClearAuthenticators_Params_Data* object =
      static_cast<const VirtualAuthenticatorManager_ClearAuthenticators_Params_Data*>(data);

  return true;
}

VirtualAuthenticatorManager_ClearAuthenticators_Params_Data::VirtualAuthenticatorManager_ClearAuthenticators_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data* object =
      static_cast<const VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data*>(data);

  return true;
}

VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data::VirtualAuthenticatorManager_ClearAuthenticators_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace test
}  // namespace blink

namespace perfetto {

// static
void TraceFormatTraits<::blink::test::mojom::ClientToAuthenticatorProtocol>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::test::mojom::ClientToAuthenticatorProtocol value) {
  return std::move(context).WriteString(::blink::test::mojom::ClientToAuthenticatorProtocolToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::blink::test::mojom::Ctap2Version>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::test::mojom::Ctap2Version value) {
  return std::move(context).WriteString(::blink::test::mojom::Ctap2VersionToString(value));
}

} // namespace perfetto