// services/network/public/mojom/udp_socket.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/network/public/mojom/udp_socket.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/network/public/mojom/udp_socket.mojom-params-data.h"
namespace network {
namespace mojom {

namespace internal {


// static
bool UDPSocketOptions_Data::Validate(
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
  [[maybe_unused]] const UDPSocketOptions_Data* object =
      static_cast<const UDPSocketOptions_Data*>(data);

  return true;
}

UDPSocketOptions_Data::UDPSocketOptions_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_Bind_Params_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_Bind_Params_Data* object =
      static_cast<const UDPSocket_Bind_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->local_addr, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->local_addr, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->socket_options, validation_context))
    return false;

  return true;
}

UDPSocket_Bind_Params_Data::UDPSocket_Bind_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_Bind_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_Bind_ResponseParams_Data* object =
      static_cast<const UDPSocket_Bind_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->local_addr_out, validation_context))
    return false;

  return true;
}

UDPSocket_Bind_ResponseParams_Data::UDPSocket_Bind_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_Connect_Params_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_Connect_Params_Data* object =
      static_cast<const UDPSocket_Connect_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->remote_addr, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->remote_addr, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->socket_options, validation_context))
    return false;

  return true;
}

UDPSocket_Connect_Params_Data::UDPSocket_Connect_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_Connect_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_Connect_ResponseParams_Data* object =
      static_cast<const UDPSocket_Connect_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->local_addr_out, validation_context))
    return false;

  return true;
}

UDPSocket_Connect_ResponseParams_Data::UDPSocket_Connect_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_SetBroadcast_Params_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_SetBroadcast_Params_Data* object =
      static_cast<const UDPSocket_SetBroadcast_Params_Data*>(data);

  return true;
}

UDPSocket_SetBroadcast_Params_Data::UDPSocket_SetBroadcast_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_SetBroadcast_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_SetBroadcast_ResponseParams_Data* object =
      static_cast<const UDPSocket_SetBroadcast_ResponseParams_Data*>(data);

  return true;
}

UDPSocket_SetBroadcast_ResponseParams_Data::UDPSocket_SetBroadcast_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_SetSendBufferSize_Params_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_SetSendBufferSize_Params_Data* object =
      static_cast<const UDPSocket_SetSendBufferSize_Params_Data*>(data);

  return true;
}

UDPSocket_SetSendBufferSize_Params_Data::UDPSocket_SetSendBufferSize_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_SetSendBufferSize_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_SetSendBufferSize_ResponseParams_Data* object =
      static_cast<const UDPSocket_SetSendBufferSize_ResponseParams_Data*>(data);

  return true;
}

UDPSocket_SetSendBufferSize_ResponseParams_Data::UDPSocket_SetSendBufferSize_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_SetReceiveBufferSize_Params_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_SetReceiveBufferSize_Params_Data* object =
      static_cast<const UDPSocket_SetReceiveBufferSize_Params_Data*>(data);

  return true;
}

UDPSocket_SetReceiveBufferSize_Params_Data::UDPSocket_SetReceiveBufferSize_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_SetReceiveBufferSize_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_SetReceiveBufferSize_ResponseParams_Data* object =
      static_cast<const UDPSocket_SetReceiveBufferSize_ResponseParams_Data*>(data);

  return true;
}

UDPSocket_SetReceiveBufferSize_ResponseParams_Data::UDPSocket_SetReceiveBufferSize_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_JoinGroup_Params_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_JoinGroup_Params_Data* object =
      static_cast<const UDPSocket_JoinGroup_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->group_address, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->group_address, validation_context))
    return false;

  return true;
}

UDPSocket_JoinGroup_Params_Data::UDPSocket_JoinGroup_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_JoinGroup_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_JoinGroup_ResponseParams_Data* object =
      static_cast<const UDPSocket_JoinGroup_ResponseParams_Data*>(data);

  return true;
}

UDPSocket_JoinGroup_ResponseParams_Data::UDPSocket_JoinGroup_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_LeaveGroup_Params_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_LeaveGroup_Params_Data* object =
      static_cast<const UDPSocket_LeaveGroup_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->group_address, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->group_address, validation_context))
    return false;

  return true;
}

UDPSocket_LeaveGroup_Params_Data::UDPSocket_LeaveGroup_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_LeaveGroup_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_LeaveGroup_ResponseParams_Data* object =
      static_cast<const UDPSocket_LeaveGroup_ResponseParams_Data*>(data);

  return true;
}

UDPSocket_LeaveGroup_ResponseParams_Data::UDPSocket_LeaveGroup_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_ReceiveMore_Params_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_ReceiveMore_Params_Data* object =
      static_cast<const UDPSocket_ReceiveMore_Params_Data*>(data);

  return true;
}

UDPSocket_ReceiveMore_Params_Data::UDPSocket_ReceiveMore_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_ReceiveMoreWithBufferSize_Params_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_ReceiveMoreWithBufferSize_Params_Data* object =
      static_cast<const UDPSocket_ReceiveMoreWithBufferSize_Params_Data*>(data);

  return true;
}

UDPSocket_ReceiveMoreWithBufferSize_Params_Data::UDPSocket_ReceiveMoreWithBufferSize_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_SendTo_Params_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_SendTo_Params_Data* object =
      static_cast<const UDPSocket_SendTo_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->dest_addr, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->dest_addr, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->data, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->traffic_annotation, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->traffic_annotation, validation_context))
    return false;

  return true;
}

UDPSocket_SendTo_Params_Data::UDPSocket_SendTo_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_SendTo_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_SendTo_ResponseParams_Data* object =
      static_cast<const UDPSocket_SendTo_ResponseParams_Data*>(data);

  return true;
}

UDPSocket_SendTo_ResponseParams_Data::UDPSocket_SendTo_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_Send_Params_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_Send_Params_Data* object =
      static_cast<const UDPSocket_Send_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->data, validation_context))
    return false;

  if (!mojo::internal::ValidatePointerNonNullable(
          object->traffic_annotation, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->traffic_annotation, validation_context))
    return false;

  return true;
}

UDPSocket_Send_Params_Data::UDPSocket_Send_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_Send_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_Send_ResponseParams_Data* object =
      static_cast<const UDPSocket_Send_ResponseParams_Data*>(data);

  return true;
}

UDPSocket_Send_ResponseParams_Data::UDPSocket_Send_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocket_Close_Params_Data::Validate(
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
  [[maybe_unused]] const UDPSocket_Close_Params_Data* object =
      static_cast<const UDPSocket_Close_Params_Data*>(data);

  return true;
}

UDPSocket_Close_Params_Data::UDPSocket_Close_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool UDPSocketListener_OnReceived_Params_Data::Validate(
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
  [[maybe_unused]] const UDPSocketListener_OnReceived_Params_Data* object =
      static_cast<const UDPSocketListener_OnReceived_Params_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->src_addr, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->data, validation_context))
    return false;

  return true;
}

UDPSocketListener_OnReceived_Params_Data::UDPSocketListener_OnReceived_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network