// components/performance_manager/public/mojom/web_memory.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PERFORMANCE_MANAGER_PUBLIC_MOJOM_WEB_MEMORY_MOJOM_FORWARD_H_
#define COMPONENTS_PERFORMANCE_MANAGER_PUBLIC_MOJOM_WEB_MEMORY_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"




#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace performance_manager {
namespace mojom {
class WebMemoryAttributionDataView;

class WebMemoryUsageDataView;

class WebMemoryBreakdownEntryDataView;

class WebMemoryMeasurementDataView;


enum class WebMemoryAttribution_Scope : int32_t;

enum class WebMemoryMeasurement_Mode : int32_t;
class WebMemoryAttribution;
using WebMemoryAttributionPtr = mojo::InlinedStructPtr<WebMemoryAttribution>;

class WebMemoryUsage;
using WebMemoryUsagePtr = mojo::InlinedStructPtr<WebMemoryUsage>;

class WebMemoryBreakdownEntry;
using WebMemoryBreakdownEntryPtr = mojo::StructPtr<WebMemoryBreakdownEntry>;

class WebMemoryMeasurement;
using WebMemoryMeasurementPtr = mojo::StructPtr<WebMemoryMeasurement>;




}  // namespace mojom
}  // namespace performance_manager

#endif  // COMPONENTS_PERFORMANCE_MANAGER_PUBLIC_MOJOM_WEB_MEMORY_MOJOM_FORWARD_H_