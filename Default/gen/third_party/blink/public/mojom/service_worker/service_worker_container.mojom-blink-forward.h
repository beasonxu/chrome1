// third_party/blink/public/mojom/service_worker/service_worker_container.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_BLINK_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"




namespace blink {
namespace mojom {

enum class ControllerServiceWorkerPurpose : int32_t;
class ServiceWorkerContainerHostInterfaceBase;
class ServiceWorkerContainerInterfaceBase;
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
// Aliases for definition in the parent namespace.
using ControllerServiceWorkerPurpose = ControllerServiceWorkerPurpose;
using ServiceWorkerContainerHostInterfaceBase = ServiceWorkerContainerHostInterfaceBase;
using ServiceWorkerContainerInterfaceBase = ServiceWorkerContainerInterfaceBase;
class ServiceWorkerContainerInfoForClient;
using ServiceWorkerContainerInfoForClientPtr = mojo::StructPtr<ServiceWorkerContainerInfoForClient>;

class ServiceWorkerContainerHost;

class ServiceWorkerContainer;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_CONTAINER_MOJOM_BLINK_FORWARD_H_