// services/service_manager/public/mojom/connector.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_BLINK_FORWARD_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_BLINK_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"




namespace service_manager {
namespace mojom {

enum class ConnectResult : int32_t;

enum class BindInterfacePriority : int32_t;
class ProcessMetadataInterfaceBase;
class ConnectorInterfaceBase;
}  // namespace service_manager
}  // namespace mojom


namespace service_manager {
namespace mojom {
namespace blink {
// Aliases for definition in the parent namespace.
using ConnectResult = ConnectResult;
using BindInterfacePriority = BindInterfacePriority;
using ProcessMetadataInterfaceBase = ProcessMetadataInterfaceBase;
using ConnectorInterfaceBase = ConnectorInterfaceBase;
class Identity;
using IdentityPtr = mojo::StructPtr<Identity>;

class ServiceInfo;
using ServiceInfoPtr = mojo::InlinedStructPtr<ServiceInfo>;

class ProcessMetadata;

class Connector;




}  // namespace blink
}  // namespace mojom
}  // namespace service_manager

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONNECTOR_MOJOM_BLINK_FORWARD_H_