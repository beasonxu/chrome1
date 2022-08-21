// services/tracing/public/mojom/perfetto_service.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_FORWARD_H_
#define SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"
#include "base/component_export.h"






namespace tracing {
namespace mojom {
class ChunksToMoveDataView;

class ChunkPatchDataView;

class ChunksToPatchDataView;

class CommitDataRequestDataView;

class ChromeConfigDataView;

class DataSourceConfigDataView;

class DataSourceRegistrationDataView;

class BufferConfigDataView;

class DataSourceDataView;

class PerfettoBuiltinDataSourceDataView;

class IncrementalStateConfigDataView;

class TraceConfigDataView;


enum class BufferFillPolicy : int32_t;

enum class TracingClientPriority : int32_t;

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kPerfettoProducerNamePrefix[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kTraceEventDataSourceName[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kMemoryInstrumentationDataSourceName[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kMetaDataSourceName[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kSystemTraceDataSourceName[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kArcTraceDataSourceName[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kSamplerProfilerSourceName[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kJavaHeapProfilerSourceName[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kReachedCodeProfilerSourceName[];

COMPONENT_EXPORT(TRACING_MOJOM) extern const char kNativeHeapProfilerSourceName[];
class ChunksToMove;
using ChunksToMovePtr = mojo::InlinedStructPtr<ChunksToMove>;

class ChunkPatch;
using ChunkPatchPtr = mojo::InlinedStructPtr<ChunkPatch>;

class ChunksToPatch;
using ChunksToPatchPtr = mojo::StructPtr<ChunksToPatch>;

class CommitDataRequest;
using CommitDataRequestPtr = mojo::StructPtr<CommitDataRequest>;

class ChromeConfig;
using ChromeConfigPtr = mojo::InlinedStructPtr<ChromeConfig>;

class DataSourceConfig;
using DataSourceConfigPtr = mojo::StructPtr<DataSourceConfig>;

class DataSourceRegistration;
using DataSourceRegistrationPtr = mojo::InlinedStructPtr<DataSourceRegistration>;

class BufferConfig;
using BufferConfigPtr = mojo::InlinedStructPtr<BufferConfig>;

class DataSource;
using DataSourcePtr = mojo::StructPtr<DataSource>;

class PerfettoBuiltinDataSource;
using PerfettoBuiltinDataSourcePtr = mojo::StructPtr<PerfettoBuiltinDataSource>;

class IncrementalStateConfig;
using IncrementalStateConfigPtr = mojo::InlinedStructPtr<IncrementalStateConfig>;

class TraceConfig;
using TraceConfigPtr = mojo::StructPtr<TraceConfig>;

class ProducerHost;

class ProducerClient;

class PerfettoService;

class ConsumerHost;

class TracingSessionHost;

class TracingSessionClient;




}  // namespace mojom
}  // namespace tracing

#endif  // SERVICES_TRACING_PUBLIC_MOJOM_PERFETTO_SERVICE_MOJOM_FORWARD_H_