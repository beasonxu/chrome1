// third_party/blink/public/mojom/performance_manager/v8_detailed_memory_reporter.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERFORMANCE_MANAGER_V8_DETAILED_MEMORY_REPORTER_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERFORMANCE_MANAGER_V8_DETAILED_MEMORY_REPORTER_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace blink {
namespace mojom {
class PerContextV8MemoryUsageDataView;

class PerContextCanvasMemoryUsageDataView;

class PerIsolateV8MemoryUsageDataView;

class PerProcessV8MemoryUsageDataView;


enum class V8DetailedMemoryReporter_Mode : int32_t;
class PerContextV8MemoryUsage;
using PerContextV8MemoryUsagePtr = mojo::StructPtr<PerContextV8MemoryUsage>;

class PerContextCanvasMemoryUsage;
using PerContextCanvasMemoryUsagePtr = mojo::StructPtr<PerContextCanvasMemoryUsage>;

class PerIsolateV8MemoryUsage;
using PerIsolateV8MemoryUsagePtr = mojo::StructPtr<PerIsolateV8MemoryUsage>;

class PerProcessV8MemoryUsage;
using PerProcessV8MemoryUsagePtr = mojo::StructPtr<PerProcessV8MemoryUsage>;

class V8DetailedMemoryReporter;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PERFORMANCE_MANAGER_V8_DETAILED_MEMORY_REPORTER_MOJOM_FORWARD_H_