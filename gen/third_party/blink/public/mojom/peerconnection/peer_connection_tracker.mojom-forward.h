// third_party/blink/public/mojom/peerconnection/peer_connection_tracker.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PEERCONNECTION_PEER_CONNECTION_TRACKER_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PEERCONNECTION_PEER_CONNECTION_TRACKER_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"
#include "third_party/blink/public/common/common_export.h"






namespace blink {
namespace mojom {
class PeerConnectionInfoDataView;


enum class DeviceThermalState : int32_t;

constexpr int32_t kSpeedLimitMax = 100;
class PeerConnectionInfo;
using PeerConnectionInfoPtr = mojo::InlinedStructPtr<PeerConnectionInfo>;

class PeerConnectionManager;

class PeerConnectionTrackerHost;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PEERCONNECTION_PEER_CONNECTION_TRACKER_MOJOM_FORWARD_H_