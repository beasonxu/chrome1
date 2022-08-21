// services/network/public/mojom/cross_origin_opener_policy.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_CROSS_ORIGIN_OPENER_POLICY_MOJOM_BLINK_FORWARD_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_CROSS_ORIGIN_OPENER_POLICY_MOJOM_BLINK_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"




namespace network {
namespace mojom {

enum class CoopAccessReportType : int32_t;

enum class CrossOriginOpenerPolicyValue : int32_t;
class CrossOriginOpenerPolicyReporterInterfaceBase;
}  // namespace network
}  // namespace mojom


namespace network {
namespace mojom {
namespace blink {
// Aliases for definition in the parent namespace.
using CoopAccessReportType = CoopAccessReportType;
using CrossOriginOpenerPolicyValue = CrossOriginOpenerPolicyValue;
using CrossOriginOpenerPolicyReporterInterfaceBase = CrossOriginOpenerPolicyReporterInterfaceBase;
class CrossOriginOpenerPolicyReporterParams;
using CrossOriginOpenerPolicyReporterParamsPtr = mojo::StructPtr<CrossOriginOpenerPolicyReporterParams>;

class CrossOriginOpenerPolicy;
using CrossOriginOpenerPolicyPtr = mojo::StructPtr<CrossOriginOpenerPolicy>;

class CrossOriginOpenerPolicyReporter;




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_CROSS_ORIGIN_OPENER_POLICY_MOJOM_BLINK_FORWARD_H_