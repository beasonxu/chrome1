// services/network/public/mojom/web_transport.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/network/public/mojom/web_transport.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/network/public/mojom/web_transport.mojom-params-data.h"
namespace network {
namespace mojom {

namespace internal {


// static
bool WebTransportError_Data::Validate(
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
  [[maybe_unused]] const WebTransportError_Data* object =
      static_cast<const WebTransportError_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->details, 3, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams details_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->details, validation_context,
                                         &details_validate_params)) {
    return false;
  }

  return true;
}

WebTransportError_Data::WebTransportError_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransportCertificateFingerprint_Data::Validate(
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
  [[maybe_unused]] const WebTransportCertificateFingerprint_Data* object =
      static_cast<const WebTransportCertificateFingerprint_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->algorithm, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams algorithm_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->algorithm, validation_context,
                                         &algorithm_validate_params)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->fingerprint, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams fingerprint_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->fingerprint, validation_context,
                                         &fingerprint_validate_params)) {
    return false;
  }

  return true;
}

WebTransportCertificateFingerprint_Data::WebTransportCertificateFingerprint_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransportCloseInfo_Data::Validate(
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
  [[maybe_unused]] const WebTransportCloseInfo_Data* object =
      static_cast<const WebTransportCloseInfo_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->reason, 2, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams reason_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->reason, validation_context,
                                         &reason_validate_params)) {
    return false;
  }

  return true;
}

WebTransportCloseInfo_Data::WebTransportCloseInfo_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransport_SendDatagram_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransport_SendDatagram_Params_Data* object =
      static_cast<const WebTransport_SendDatagram_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->data, validation_context))
    return false;

  return true;
}

WebTransport_SendDatagram_Params_Data::WebTransport_SendDatagram_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransport_SendDatagram_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const WebTransport_SendDatagram_ResponseParams_Data* object =
      static_cast<const WebTransport_SendDatagram_ResponseParams_Data*>(data);

  return true;
}

WebTransport_SendDatagram_ResponseParams_Data::WebTransport_SendDatagram_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransport_CreateStream_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransport_CreateStream_Params_Data* object =
      static_cast<const WebTransport_CreateStream_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->readable, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->readable,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterface(object->writable,
                                                 validation_context)) {
    return false;
  }

  return true;
}

WebTransport_CreateStream_Params_Data::WebTransport_CreateStream_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransport_CreateStream_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const WebTransport_CreateStream_ResponseParams_Data* object =
      static_cast<const WebTransport_CreateStream_ResponseParams_Data*>(data);

  return true;
}

WebTransport_CreateStream_ResponseParams_Data::WebTransport_CreateStream_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransport_AcceptBidirectionalStream_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransport_AcceptBidirectionalStream_Params_Data* object =
      static_cast<const WebTransport_AcceptBidirectionalStream_Params_Data*>(data);

  return true;
}

WebTransport_AcceptBidirectionalStream_Params_Data::WebTransport_AcceptBidirectionalStream_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransport_AcceptBidirectionalStream_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const WebTransport_AcceptBidirectionalStream_ResponseParams_Data* object =
      static_cast<const WebTransport_AcceptBidirectionalStream_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->readable, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->readable,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->writable, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->writable,
                                                 validation_context)) {
    return false;
  }

  return true;
}

WebTransport_AcceptBidirectionalStream_ResponseParams_Data::WebTransport_AcceptBidirectionalStream_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransport_AcceptUnidirectionalStream_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransport_AcceptUnidirectionalStream_Params_Data* object =
      static_cast<const WebTransport_AcceptUnidirectionalStream_Params_Data*>(data);

  return true;
}

WebTransport_AcceptUnidirectionalStream_Params_Data::WebTransport_AcceptUnidirectionalStream_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransport_AcceptUnidirectionalStream_ResponseParams_Data::Validate(
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
  [[maybe_unused]] const WebTransport_AcceptUnidirectionalStream_ResponseParams_Data* object =
      static_cast<const WebTransport_AcceptUnidirectionalStream_ResponseParams_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->readable, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->readable,
                                                 validation_context)) {
    return false;
  }

  return true;
}

WebTransport_AcceptUnidirectionalStream_ResponseParams_Data::WebTransport_AcceptUnidirectionalStream_ResponseParams_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransport_SendFin_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransport_SendFin_Params_Data* object =
      static_cast<const WebTransport_SendFin_Params_Data*>(data);

  return true;
}

WebTransport_SendFin_Params_Data::WebTransport_SendFin_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransport_AbortStream_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransport_AbortStream_Params_Data* object =
      static_cast<const WebTransport_AbortStream_Params_Data*>(data);

  return true;
}

WebTransport_AbortStream_Params_Data::WebTransport_AbortStream_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransport_StopSending_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransport_StopSending_Params_Data* object =
      static_cast<const WebTransport_StopSending_Params_Data*>(data);

  return true;
}

WebTransport_StopSending_Params_Data::WebTransport_StopSending_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransport_SetOutgoingDatagramExpirationDuration_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransport_SetOutgoingDatagramExpirationDuration_Params_Data* object =
      static_cast<const WebTransport_SetOutgoingDatagramExpirationDuration_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->duration, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->duration, validation_context))
    return false;

  return true;
}

WebTransport_SetOutgoingDatagramExpirationDuration_Params_Data::WebTransport_SetOutgoingDatagramExpirationDuration_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransport_Close_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransport_Close_Params_Data* object =
      static_cast<const WebTransport_Close_Params_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->close_info, validation_context))
    return false;

  return true;
}

WebTransport_Close_Params_Data::WebTransport_Close_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransportClient_OnDatagramReceived_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransportClient_OnDatagramReceived_Params_Data* object =
      static_cast<const WebTransportClient_OnDatagramReceived_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->data, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->data, validation_context))
    return false;

  return true;
}

WebTransportClient_OnDatagramReceived_Params_Data::WebTransportClient_OnDatagramReceived_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransportClient_OnIncomingStreamClosed_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransportClient_OnIncomingStreamClosed_Params_Data* object =
      static_cast<const WebTransportClient_OnIncomingStreamClosed_Params_Data*>(data);

  return true;
}

WebTransportClient_OnIncomingStreamClosed_Params_Data::WebTransportClient_OnIncomingStreamClosed_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransportClient_OnOutgoingStreamClosed_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransportClient_OnOutgoingStreamClosed_Params_Data* object =
      static_cast<const WebTransportClient_OnOutgoingStreamClosed_Params_Data*>(data);

  return true;
}

WebTransportClient_OnOutgoingStreamClosed_Params_Data::WebTransportClient_OnOutgoingStreamClosed_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransportClient_OnReceivedStopSending_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransportClient_OnReceivedStopSending_Params_Data* object =
      static_cast<const WebTransportClient_OnReceivedStopSending_Params_Data*>(data);

  return true;
}

WebTransportClient_OnReceivedStopSending_Params_Data::WebTransportClient_OnReceivedStopSending_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransportClient_OnReceivedResetStream_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransportClient_OnReceivedResetStream_Params_Data* object =
      static_cast<const WebTransportClient_OnReceivedResetStream_Params_Data*>(data);

  return true;
}

WebTransportClient_OnReceivedResetStream_Params_Data::WebTransportClient_OnReceivedResetStream_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransportClient_OnClosed_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransportClient_OnClosed_Params_Data* object =
      static_cast<const WebTransportClient_OnClosed_Params_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->close_info, validation_context))
    return false;

  return true;
}

WebTransportClient_OnClosed_Params_Data::WebTransportClient_OnClosed_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransportHandshakeClient_OnConnectionEstablished_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransportHandshakeClient_OnConnectionEstablished_Params_Data* object =
      static_cast<const WebTransportHandshakeClient_OnConnectionEstablished_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->transport, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->transport,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->client, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->client,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->response_headers, 3, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->response_headers, validation_context))
    return false;

  return true;
}

WebTransportHandshakeClient_OnConnectionEstablished_Params_Data::WebTransportHandshakeClient_OnConnectionEstablished_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool WebTransportHandshakeClient_OnHandshakeFailed_Params_Data::Validate(
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
  [[maybe_unused]] const WebTransportHandshakeClient_OnHandshakeFailed_Params_Data* object =
      static_cast<const WebTransportHandshakeClient_OnHandshakeFailed_Params_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->error, validation_context))
    return false;

  return true;
}

WebTransportHandshakeClient_OnHandshakeFailed_Params_Data::WebTransportHandshakeClient_OnHandshakeFailed_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace network