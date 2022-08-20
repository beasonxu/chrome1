// third_party/blink/public/mojom/buckets/bucket_manager_host.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/public/mojom/buckets/bucket_manager_host.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/buckets/bucket_manager_host.mojom-params-data.h"
namespace blink {
namespace mojom {

static NOINLINE const char* BucketDurabilityToStringHelper(BucketDurability value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case BucketDurability::kRelaxed:
      return "kRelaxed";
    case BucketDurability::kStrict:
      return "kStrict";
    default:
      return nullptr;
  }
}

std::string BucketDurabilityToString(BucketDurability value) {
  const char *str = BucketDurabilityToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown BucketDurability value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, BucketDurability value) {
  return os << BucketDurabilityToString(value);
}

namespace internal {


// static
bool BucketPolicies_Data::Validate(
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
  [[maybe_unused]] const BucketPolicies_Data* object =
      static_cast<const BucketPolicies_Data*>(data);


  if (!::blink::mojom::internal::BucketDurability_Data
        ::Validate(object->durability, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->expires, validation_context))
    return false;

  return true;
}

BucketPolicies_Data::BucketPolicies_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_Persist_Params_Data::Validate(
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
  [[maybe_unused]] const BucketHost_Persist_Params_Data* object =
      static_cast<const BucketHost_Persist_Params_Data*>(data);

  return true;
}

BucketHost_Persist_Params_Data::BucketHost_Persist_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_Persist_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const BucketHost_Persist_ResponseParams_Data* object =
      static_cast<const BucketHost_Persist_ResponseParams_Data*>(data);

  return true;
}

BucketHost_Persist_ResponseParams_Data::BucketHost_Persist_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_Persisted_Params_Data::Validate(
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
  [[maybe_unused]] const BucketHost_Persisted_Params_Data* object =
      static_cast<const BucketHost_Persisted_Params_Data*>(data);

  return true;
}

BucketHost_Persisted_Params_Data::BucketHost_Persisted_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_Persisted_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const BucketHost_Persisted_ResponseParams_Data* object =
      static_cast<const BucketHost_Persisted_ResponseParams_Data*>(data);

  return true;
}

BucketHost_Persisted_ResponseParams_Data::BucketHost_Persisted_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_Estimate_Params_Data::Validate(
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
  [[maybe_unused]] const BucketHost_Estimate_Params_Data* object =
      static_cast<const BucketHost_Estimate_Params_Data*>(data);

  return true;
}

BucketHost_Estimate_Params_Data::BucketHost_Estimate_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_Estimate_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const BucketHost_Estimate_ResponseParams_Data* object =
      static_cast<const BucketHost_Estimate_ResponseParams_Data*>(data);

  return true;
}

BucketHost_Estimate_ResponseParams_Data::BucketHost_Estimate_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_Durability_Params_Data::Validate(
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
  [[maybe_unused]] const BucketHost_Durability_Params_Data* object =
      static_cast<const BucketHost_Durability_Params_Data*>(data);

  return true;
}

BucketHost_Durability_Params_Data::BucketHost_Durability_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_Durability_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const BucketHost_Durability_ResponseParams_Data* object =
      static_cast<const BucketHost_Durability_ResponseParams_Data*>(data);


  if (!::blink::mojom::internal::BucketDurability_Data
        ::Validate(object->durability, validation_context))
    return false;

  return true;
}

BucketHost_Durability_ResponseParams_Data::BucketHost_Durability_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_SetExpires_Params_Data::Validate(
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
  [[maybe_unused]] const BucketHost_SetExpires_Params_Data* object =
      static_cast<const BucketHost_SetExpires_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->expires, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->expires, validation_context))
    return false;

  return true;
}

BucketHost_SetExpires_Params_Data::BucketHost_SetExpires_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_SetExpires_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const BucketHost_SetExpires_ResponseParams_Data* object =
      static_cast<const BucketHost_SetExpires_ResponseParams_Data*>(data);

  return true;
}

BucketHost_SetExpires_ResponseParams_Data::BucketHost_SetExpires_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_Expires_Params_Data::Validate(
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
  [[maybe_unused]] const BucketHost_Expires_Params_Data* object =
      static_cast<const BucketHost_Expires_Params_Data*>(data);

  return true;
}

BucketHost_Expires_Params_Data::BucketHost_Expires_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_Expires_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const BucketHost_Expires_ResponseParams_Data* object =
      static_cast<const BucketHost_Expires_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->expires, validation_context))
    return false;

  return true;
}

BucketHost_Expires_ResponseParams_Data::BucketHost_Expires_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_GetIdbFactory_Params_Data::Validate(
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
  [[maybe_unused]] const BucketHost_GetIdbFactory_Params_Data* object =
      static_cast<const BucketHost_GetIdbFactory_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->idb_factory, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->idb_factory,
                                                 validation_context)) {
    return false;
  }

  return true;
}

BucketHost_GetIdbFactory_Params_Data::BucketHost_GetIdbFactory_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketHost_GetLockManager_Params_Data::Validate(
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
  [[maybe_unused]] const BucketHost_GetLockManager_Params_Data* object =
      static_cast<const BucketHost_GetLockManager_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->lock_manager, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->lock_manager,
                                                 validation_context)) {
    return false;
  }

  return true;
}

BucketHost_GetLockManager_Params_Data::BucketHost_GetLockManager_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketManagerHost_OpenBucket_Params_Data::Validate(
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
  [[maybe_unused]] const BucketManagerHost_OpenBucket_Params_Data* object =
      static_cast<const BucketManagerHost_OpenBucket_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->policy, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->policy, validation_context))
    return false;

  return true;
}

BucketManagerHost_OpenBucket_Params_Data::BucketManagerHost_OpenBucket_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketManagerHost_OpenBucket_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const BucketManagerHost_OpenBucket_ResponseParams_Data* object =
      static_cast<const BucketManagerHost_OpenBucket_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterface(object->remote,
                                                 validation_context)) {
    return false;
  }

  return true;
}

BucketManagerHost_OpenBucket_ResponseParams_Data::BucketManagerHost_OpenBucket_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketManagerHost_Keys_Params_Data::Validate(
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
  [[maybe_unused]] const BucketManagerHost_Keys_Params_Data* object =
      static_cast<const BucketManagerHost_Keys_Params_Data*>(data);

  return true;
}

BucketManagerHost_Keys_Params_Data::BucketManagerHost_Keys_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketManagerHost_Keys_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const BucketManagerHost_Keys_ResponseParams_Data* object =
      static_cast<const BucketManagerHost_Keys_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->buckets, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams buckets_validate_params(
      0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
  if (!mojo::internal::ValidateContainer(object->buckets, validation_context,
                                         &buckets_validate_params)) {
    return false;
  }

  return true;
}

BucketManagerHost_Keys_ResponseParams_Data::BucketManagerHost_Keys_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketManagerHost_DeleteBucket_Params_Data::Validate(
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
  [[maybe_unused]] const BucketManagerHost_DeleteBucket_Params_Data* object =
      static_cast<const BucketManagerHost_DeleteBucket_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  return true;
}

BucketManagerHost_DeleteBucket_Params_Data::BucketManagerHost_DeleteBucket_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool BucketManagerHost_DeleteBucket_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const BucketManagerHost_DeleteBucket_ResponseParams_Data* object =
      static_cast<const BucketManagerHost_DeleteBucket_ResponseParams_Data*>(data);

  return true;
}

BucketManagerHost_DeleteBucket_ResponseParams_Data::BucketManagerHost_DeleteBucket_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace blink

namespace perfetto {

// static
void TraceFormatTraits<::blink::mojom::BucketDurability>::WriteIntoTrace(
   perfetto::TracedValue context, ::blink::mojom::BucketDurability value) {
  return std::move(context).WriteString(::blink::mojom::BucketDurabilityToString(value));
}

} // namespace perfetto