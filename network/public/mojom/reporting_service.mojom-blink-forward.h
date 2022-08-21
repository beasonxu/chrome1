// services/network/public/mojom/reporting_service.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_REPORTING_SERVICE_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_REPORTING_SERVICE_MOJOM_BLINK_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"




namespace network {
namespace mojom {

enum class ReportingApiReportStatus : int32_t;
class ReportingApiObserverInterfaceBase;
}  // namespace network
}  // namespace mojom


namespace network {
namespace mojom {
namespace blink {
// Aliases for definition in the parent namespace.
using ReportingApiReportStatus = ReportingApiReportStatus;
using ReportingApiObserverInterfaceBase = ReportingApiObserverInterfaceBase;
class ReportingApiReport;
using ReportingApiReportPtr = mojo::StructPtr<ReportingApiReport>;

class ReportingApiEndpoint;
using ReportingApiEndpointPtr = mojo::StructPtr<ReportingApiEndpoint>;

class ReportingApiObserver;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_REPORTING_SERVICE_MOJOM_BLINK_FORWARD_H_