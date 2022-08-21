// device/bluetooth/public/mojom/device.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "device/bluetooth/public/mojom/device.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "device/bluetooth/public/mojom/device.mojom-params-data.h"
namespace bluetooth {
namespace mojom {

static NOINLINE const char* PropertyToStringHelper(Property value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case Property::NONE:
      return "NONE";
    case Property::BROADCAST:
      return "BROADCAST";
    case Property::READ:
      return "READ";
    case Property::WRITE_WITHOUT_RESPONSE:
      return "WRITE_WITHOUT_RESPONSE";
    case Property::WRITE:
      return "WRITE";
    case Property::NOTIFY:
      return "NOTIFY";
    case Property::INDICATE:
      return "INDICATE";
    case Property::AUTHENTICATED_SIGNED_WRITES:
      return "AUTHENTICATED_SIGNED_WRITES";
    case Property::EXTENDED_PROPERTIES:
      return "EXTENDED_PROPERTIES";
    case Property::RELIABLE_WRITE:
      return "RELIABLE_WRITE";
    case Property::WRITABLE_AUXILIARIES:
      return "WRITABLE_AUXILIARIES";
    case Property::READ_ENCRYPTED:
      return "READ_ENCRYPTED";
    case Property::WRITE_ENCRYPTED:
      return "WRITE_ENCRYPTED";
    case Property::READ_ENCRYPTED_AUTHENTICATED:
      return "READ_ENCRYPTED_AUTHENTICATED";
    case Property::WRITE_ENCRYPTED_AUTHENTICATED:
      return "WRITE_ENCRYPTED_AUTHENTICATED";
    default:
      return nullptr;
  }
}

std::string PropertyToString(Property value) {
  const char *str = PropertyToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown Property value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, Property value) {
  return os << PropertyToString(value);
}

static NOINLINE const char* GattResultToStringHelper(GattResult value) {
  // Defined in a helper function to ensure that Clang generates a lookup table.
  switch(value) {
    case GattResult::SUCCESS:
      return "SUCCESS";
    case GattResult::UNKNOWN:
      return "UNKNOWN";
    case GattResult::FAILED:
      return "FAILED";
    case GattResult::IN_PROGRESS:
      return "IN_PROGRESS";
    case GattResult::INVALID_LENGTH:
      return "INVALID_LENGTH";
    case GattResult::NOT_PERMITTED:
      return "NOT_PERMITTED";
    case GattResult::NOT_AUTHORIZED:
      return "NOT_AUTHORIZED";
    case GattResult::NOT_PAIRED:
      return "NOT_PAIRED";
    case GattResult::NOT_SUPPORTED:
      return "NOT_SUPPORTED";
    case GattResult::SERVICE_NOT_FOUND:
      return "SERVICE_NOT_FOUND";
    case GattResult::CHARACTERISTIC_NOT_FOUND:
      return "CHARACTERISTIC_NOT_FOUND";
    case GattResult::DESCRIPTOR_NOT_FOUND:
      return "DESCRIPTOR_NOT_FOUND";
    default:
      return nullptr;
  }
}

std::string GattResultToString(GattResult value) {
  const char *str = GattResultToStringHelper(value);
  if (!str) {
    return base::StringPrintf("Unknown GattResult value: %i", static_cast<int32_t>(value));
  }
  return str;
}

std::ostream& operator<<(std::ostream& os, GattResult value) {
  return os << GattResultToString(value);
}

namespace internal {


// static
bool RSSIWrapper_Data::Validate(
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
  [[maybe_unused]] const RSSIWrapper_Data* object =
      static_cast<const RSSIWrapper_Data*>(data);

  return true;
}

RSSIWrapper_Data::RSSIWrapper_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DeviceInfo_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 72, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const DeviceInfo_Data* object =
      static_cast<const DeviceInfo_Data*>(data);

  const mojo::internal::ContainerValidateParams name_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name, validation_context,
                                         &name_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->name_for_display, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams name_for_display_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->name_for_display, validation_context,
                                         &name_for_display_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->address, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams address_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->address, validation_context,
                                         &address_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidateStruct(object->rssi, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->service_uuids, 6, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_uuids_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->service_uuids, validation_context,
                                         &service_uuids_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->manufacturer_data_map, 7, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams manufacturer_data_map_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->manufacturer_data_map, validation_context,
                                         &manufacturer_data_map_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->service_data_map, 8, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_data_map_validate_params(
      new mojo::internal::ContainerValidateParams(0, false, nullptr), new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)));
  if (!mojo::internal::ValidateContainer(object->service_data_map, validation_context,
                                         &service_data_map_validate_params)) {
    return false;
  }

  return true;
}

DeviceInfo_Data::DeviceInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool ServiceInfo_Data::Validate(
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
  [[maybe_unused]] const ServiceInfo_Data* object =
      static_cast<const ServiceInfo_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->uuid, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->uuid, validation_context))
    return false;

  return true;
}

ServiceInfo_Data::ServiceInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool CharacteristicInfo_Data::Validate(
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
  [[maybe_unused]] const CharacteristicInfo_Data* object =
      static_cast<const CharacteristicInfo_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->uuid, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->uuid, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->last_known_value, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams last_known_value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->last_known_value, validation_context,
                                         &last_known_value_validate_params)) {
    return false;
  }

  return true;
}

CharacteristicInfo_Data::CharacteristicInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool DescriptorInfo_Data::Validate(
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
  [[maybe_unused]] const DescriptorInfo_Data* object =
      static_cast<const DescriptorInfo_Data*>(data);

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

  if (!mojo::internal::ValidatePointerNonNullable(
          object->uuid, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->uuid, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->last_known_value, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams last_known_value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->last_known_value, validation_context,
                                         &last_known_value_validate_params)) {
    return false;
  }

  return true;
}

DescriptorInfo_Data::DescriptorInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_Disconnect_Params_Data::Validate(
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
  [[maybe_unused]] const Device_Disconnect_Params_Data* object =
      static_cast<const Device_Disconnect_Params_Data*>(data);

  return true;
}

Device_Disconnect_Params_Data::Device_Disconnect_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_GetInfo_Params_Data::Validate(
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
  [[maybe_unused]] const Device_GetInfo_Params_Data* object =
      static_cast<const Device_GetInfo_Params_Data*>(data);

  return true;
}

Device_GetInfo_Params_Data::Device_GetInfo_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_GetInfo_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Device_GetInfo_ResponseParams_Data* object =
      static_cast<const Device_GetInfo_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->info, validation_context))
    return false;

  return true;
}

Device_GetInfo_ResponseParams_Data::Device_GetInfo_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_GetServices_Params_Data::Validate(
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
  [[maybe_unused]] const Device_GetServices_Params_Data* object =
      static_cast<const Device_GetServices_Params_Data*>(data);

  return true;
}

Device_GetServices_Params_Data::Device_GetServices_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_GetServices_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Device_GetServices_ResponseParams_Data* object =
      static_cast<const Device_GetServices_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->services, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams services_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->services, validation_context,
                                         &services_validate_params)) {
    return false;
  }

  return true;
}

Device_GetServices_ResponseParams_Data::Device_GetServices_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_GetCharacteristics_Params_Data::Validate(
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
  [[maybe_unused]] const Device_GetCharacteristics_Params_Data* object =
      static_cast<const Device_GetCharacteristics_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->service_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->service_id, validation_context,
                                         &service_id_validate_params)) {
    return false;
  }

  return true;
}

Device_GetCharacteristics_Params_Data::Device_GetCharacteristics_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_GetCharacteristics_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Device_GetCharacteristics_ResponseParams_Data* object =
      static_cast<const Device_GetCharacteristics_ResponseParams_Data*>(data);

  const mojo::internal::ContainerValidateParams characteristics_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->characteristics, validation_context,
                                         &characteristics_validate_params)) {
    return false;
  }

  return true;
}

Device_GetCharacteristics_ResponseParams_Data::Device_GetCharacteristics_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_ReadValueForCharacteristic_Params_Data::Validate(
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
  [[maybe_unused]] const Device_ReadValueForCharacteristic_Params_Data* object =
      static_cast<const Device_ReadValueForCharacteristic_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->service_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->service_id, validation_context,
                                         &service_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->characteristic_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams characteristic_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->characteristic_id, validation_context,
                                         &characteristic_id_validate_params)) {
    return false;
  }

  return true;
}

Device_ReadValueForCharacteristic_Params_Data::Device_ReadValueForCharacteristic_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_ReadValueForCharacteristic_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Device_ReadValueForCharacteristic_ResponseParams_Data* object =
      static_cast<const Device_ReadValueForCharacteristic_ResponseParams_Data*>(data);


  if (!::bluetooth::mojom::internal::GattResult_Data
        ::Validate(object->result, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->value, validation_context,
                                         &value_validate_params)) {
    return false;
  }

  return true;
}

Device_ReadValueForCharacteristic_ResponseParams_Data::Device_ReadValueForCharacteristic_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_WriteValueForCharacteristic_Params_Data::Validate(
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
  [[maybe_unused]] const Device_WriteValueForCharacteristic_Params_Data* object =
      static_cast<const Device_WriteValueForCharacteristic_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->service_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->service_id, validation_context,
                                         &service_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->characteristic_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams characteristic_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->characteristic_id, validation_context,
                                         &characteristic_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->value, validation_context,
                                         &value_validate_params)) {
    return false;
  }

  return true;
}

Device_WriteValueForCharacteristic_Params_Data::Device_WriteValueForCharacteristic_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_WriteValueForCharacteristic_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Device_WriteValueForCharacteristic_ResponseParams_Data* object =
      static_cast<const Device_WriteValueForCharacteristic_ResponseParams_Data*>(data);


  if (!::bluetooth::mojom::internal::GattResult_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

Device_WriteValueForCharacteristic_ResponseParams_Data::Device_WriteValueForCharacteristic_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_GetDescriptors_Params_Data::Validate(
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
  [[maybe_unused]] const Device_GetDescriptors_Params_Data* object =
      static_cast<const Device_GetDescriptors_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->service_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->service_id, validation_context,
                                         &service_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->characteristic_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams characteristic_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->characteristic_id, validation_context,
                                         &characteristic_id_validate_params)) {
    return false;
  }

  return true;
}

Device_GetDescriptors_Params_Data::Device_GetDescriptors_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_GetDescriptors_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Device_GetDescriptors_ResponseParams_Data* object =
      static_cast<const Device_GetDescriptors_ResponseParams_Data*>(data);

  const mojo::internal::ContainerValidateParams descriptors_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->descriptors, validation_context,
                                         &descriptors_validate_params)) {
    return false;
  }

  return true;
}

Device_GetDescriptors_ResponseParams_Data::Device_GetDescriptors_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_ReadValueForDescriptor_Params_Data::Validate(
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
  [[maybe_unused]] const Device_ReadValueForDescriptor_Params_Data* object =
      static_cast<const Device_ReadValueForDescriptor_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->service_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->service_id, validation_context,
                                         &service_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->characteristic_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams characteristic_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->characteristic_id, validation_context,
                                         &characteristic_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->descriptor_id, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams descriptor_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->descriptor_id, validation_context,
                                         &descriptor_id_validate_params)) {
    return false;
  }

  return true;
}

Device_ReadValueForDescriptor_Params_Data::Device_ReadValueForDescriptor_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_ReadValueForDescriptor_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Device_ReadValueForDescriptor_ResponseParams_Data* object =
      static_cast<const Device_ReadValueForDescriptor_ResponseParams_Data*>(data);


  if (!::bluetooth::mojom::internal::GattResult_Data
        ::Validate(object->result, validation_context))
    return false;

  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->value, validation_context,
                                         &value_validate_params)) {
    return false;
  }

  return true;
}

Device_ReadValueForDescriptor_ResponseParams_Data::Device_ReadValueForDescriptor_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_WriteValueForDescriptor_Params_Data::Validate(
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
  [[maybe_unused]] const Device_WriteValueForDescriptor_Params_Data* object =
      static_cast<const Device_WriteValueForDescriptor_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->service_id, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams service_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->service_id, validation_context,
                                         &service_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->characteristic_id, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams characteristic_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->characteristic_id, validation_context,
                                         &characteristic_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->descriptor_id, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams descriptor_id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->descriptor_id, validation_context,
                                         &descriptor_id_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->value, 4, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams value_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->value, validation_context,
                                         &value_validate_params)) {
    return false;
  }

  return true;
}

Device_WriteValueForDescriptor_Params_Data::Device_WriteValueForDescriptor_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool Device_WriteValueForDescriptor_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const Device_WriteValueForDescriptor_ResponseParams_Data* object =
      static_cast<const Device_WriteValueForDescriptor_ResponseParams_Data*>(data);


  if (!::bluetooth::mojom::internal::GattResult_Data
        ::Validate(object->result, validation_context))
    return false;

  return true;
}

Device_WriteValueForDescriptor_ResponseParams_Data::Device_WriteValueForDescriptor_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace bluetooth

namespace perfetto {

// static
void TraceFormatTraits<::bluetooth::mojom::Property>::WriteIntoTrace(
   perfetto::TracedValue context, ::bluetooth::mojom::Property value) {
  return std::move(context).WriteString(::bluetooth::mojom::PropertyToString(value));
}

} // namespace perfetto

namespace perfetto {

// static
void TraceFormatTraits<::bluetooth::mojom::GattResult>::WriteIntoTrace(
   perfetto::TracedValue context, ::bluetooth::mojom::GattResult value) {
  return std::move(context).WriteString(::bluetooth::mojom::GattResultToString(value));
}

} // namespace perfetto