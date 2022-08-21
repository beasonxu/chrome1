// device/gamepad/public/mojom/gamepad.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_FORWARD_H_
#define DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace device {
namespace mojom {
class GamepadQuaternionDataView;

class GamepadVectorDataView;

class GamepadButtonDataView;

class ButtonChangeDataView;

class AxisChangeDataView;

class GamepadChangesDataView;

class GamepadPoseDataView;

class GamepadHapticActuatorDataView;

class GamepadDataView;

class GamepadEffectParametersDataView;


enum class GamepadMapping : int32_t;

enum class GamepadHand : int32_t;

enum class GamepadHapticActuatorType : int32_t;

enum class GamepadHapticEffectType : int32_t;

enum class GamepadHapticsResult : int32_t;
class GamepadQuaternion;
using GamepadQuaternionPtr = mojo::InlinedStructPtr<GamepadQuaternion>;

class GamepadVector;
using GamepadVectorPtr = mojo::InlinedStructPtr<GamepadVector>;

class GamepadButton;
using GamepadButtonPtr = mojo::InlinedStructPtr<GamepadButton>;

class ButtonChange;
using ButtonChangePtr = mojo::StructPtr<ButtonChange>;

class AxisChange;
using AxisChangePtr = mojo::InlinedStructPtr<AxisChange>;

class GamepadChanges;
using GamepadChangesPtr = mojo::StructPtr<GamepadChanges>;

class GamepadPose;
using GamepadPosePtr = mojo::StructPtr<GamepadPose>;

class GamepadHapticActuator;
using GamepadHapticActuatorPtr = mojo::InlinedStructPtr<GamepadHapticActuator>;

class Gamepad;
using GamepadPtr = mojo::StructPtr<Gamepad>;

class GamepadEffectParameters;
using GamepadEffectParametersPtr = mojo::StructPtr<GamepadEffectParameters>;

class GamepadObserver;

class GamepadMonitor;

class GamepadHapticsManager;




}  // namespace mojom
}  // namespace device

#endif  // DEVICE_GAMEPAD_PUBLIC_MOJOM_GAMEPAD_MOJOM_FORWARD_H_