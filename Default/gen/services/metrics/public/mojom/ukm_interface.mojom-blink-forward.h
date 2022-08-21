// services/metrics/public/mojom/ukm_interface.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_FORWARD_H_
#define SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_FORWARD_H_



#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"




namespace ukm {
namespace mojom {
class UkmRecorderInterfaceInterfaceBase;
}  // namespace ukm
}  // namespace mojom


namespace ukm {
namespace mojom {
namespace blink {
// Aliases for definition in the parent namespace.
using UkmRecorderInterfaceInterfaceBase = UkmRecorderInterfaceInterfaceBase;
class UkmEntry;
using UkmEntryPtr = mojo::StructPtr<UkmEntry>;

class UkmRecorderInterface;




}  // namespace blink
}  // namespace mojom
}  // namespace ukm

#endif  // SERVICES_METRICS_PUBLIC_MOJOM_UKM_INTERFACE_MOJOM_BLINK_FORWARD_H_