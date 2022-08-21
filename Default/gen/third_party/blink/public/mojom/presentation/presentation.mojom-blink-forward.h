// third_party/blink/public/mojom/presentation/presentation.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_BLINK_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"




namespace blink {
namespace mojom {

enum class ScreenAvailability : int32_t;

enum class PresentationConnectionState : int32_t;

enum class PresentationConnectionCloseReason : int32_t;

enum class PresentationErrorType : int32_t;
class PresentationConnectionInterfaceBase;
class PresentationServiceInterfaceBase;
class PresentationControllerInterfaceBase;
class PresentationReceiverInterfaceBase;
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
// Aliases for definition in the parent namespace.
using ScreenAvailability = ScreenAvailability;
using PresentationConnectionState = PresentationConnectionState;
using PresentationConnectionCloseReason = PresentationConnectionCloseReason;
using PresentationErrorType = PresentationErrorType;
using PresentationConnectionInterfaceBase = PresentationConnectionInterfaceBase;
using PresentationServiceInterfaceBase = PresentationServiceInterfaceBase;
using PresentationControllerInterfaceBase = PresentationControllerInterfaceBase;
using PresentationReceiverInterfaceBase = PresentationReceiverInterfaceBase;
class PresentationInfo;
using PresentationInfoPtr = mojo::StructPtr<PresentationInfo>;

class PresentationError;
using PresentationErrorPtr = mojo::InlinedStructPtr<PresentationError>;

class PresentationConnectionResult;
using PresentationConnectionResultPtr = mojo::StructPtr<PresentationConnectionResult>;

class PresentationConnectionMessage;

using PresentationConnectionMessagePtr = mojo::StructPtr<PresentationConnectionMessage>;

class PresentationConnection;

class PresentationService;

class PresentationController;

class PresentationReceiver;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PRESENTATION_PRESENTATION_MOJOM_BLINK_FORWARD_H_