// gpu/ipc/common/gpu_feature_info.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "gpu/ipc/common/gpu_feature_info.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/debug/alias.h"
#include "base/hash/md5_constexpr.h"
#include "base/run_loop.h"
#include "base/strings/string_number_conversions.h"
#include "base/trace_event/trace_event.h"
#include "base/trace_event/typed_macros.h"
#include "mojo/public/cpp/bindings/lib/generated_code_util.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/send_message_helper.h"
#include "mojo/public/cpp/bindings/lib/proxy_to_responder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "gpu/ipc/common/gpu_feature_info.mojom-params-data.h"
#include "gpu/ipc/common/gpu_feature_info.mojom-shared-message-ids.h"

#include "gpu/ipc/common/gpu_feature_info.mojom-import-headers.h"
#include "gpu/ipc/common/gpu_feature_info.mojom-test-utils.h"


#ifndef GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_JUMBO_H_
#define GPU_IPC_COMMON_GPU_FEATURE_INFO_MOJOM_JUMBO_H_
#endif



namespace gpu {
namespace mojom {
GpuFeatureInfo::GpuFeatureInfo()
    : status_values(),
      enabled_gpu_driver_bug_workarounds(),
      disabled_extensions(),
      disabled_webgl_extensions(),
      applied_gpu_blocklist_entries(),
      applied_gpu_driver_bug_list_entries(),
      supported_buffer_formats_for_allocation_and_texturing() {}

GpuFeatureInfo::GpuFeatureInfo(
    std::vector<::gpu::GpuFeatureStatus> status_values_in,
    std::vector<int32_t> enabled_gpu_driver_bug_workarounds_in,
    const std::string& disabled_extensions_in,
    const std::string& disabled_webgl_extensions_in,
    std::vector<uint32_t> applied_gpu_blocklist_entries_in,
    std::vector<uint32_t> applied_gpu_driver_bug_list_entries_in,
    std::vector<::gfx::BufferFormat> supported_buffer_formats_for_allocation_and_texturing_in)
    : status_values(std::move(status_values_in)),
      enabled_gpu_driver_bug_workarounds(std::move(enabled_gpu_driver_bug_workarounds_in)),
      disabled_extensions(std::move(disabled_extensions_in)),
      disabled_webgl_extensions(std::move(disabled_webgl_extensions_in)),
      applied_gpu_blocklist_entries(std::move(applied_gpu_blocklist_entries_in)),
      applied_gpu_driver_bug_list_entries(std::move(applied_gpu_driver_bug_list_entries_in)),
      supported_buffer_formats_for_allocation_and_texturing(std::move(supported_buffer_formats_for_allocation_and_texturing_in)) {}

GpuFeatureInfo::~GpuFeatureInfo() = default;

void GpuFeatureInfo::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "status_values"), this->status_values,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::vector<::gpu::GpuFeatureStatus>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "enabled_gpu_driver_bug_workarounds"), this->enabled_gpu_driver_bug_workarounds,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::vector<int32_t>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "disabled_extensions"), this->disabled_extensions,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "disabled_webgl_extensions"), this->disabled_webgl_extensions,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "applied_gpu_blocklist_entries"), this->applied_gpu_blocklist_entries,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::vector<uint32_t>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "applied_gpu_driver_bug_list_entries"), this->applied_gpu_driver_bug_list_entries,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::vector<uint32_t>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "supported_buffer_formats_for_allocation_and_texturing"), this->supported_buffer_formats_for_allocation_and_texturing,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::vector<::gfx::BufferFormat>&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool GpuFeatureInfo::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}


}  // namespace mojom
}  // namespace gpu


namespace mojo {


// static
bool StructTraits<::gpu::mojom::GpuFeatureInfo::DataView, ::gpu::mojom::GpuFeatureInfoPtr>::Read(
    ::gpu::mojom::GpuFeatureInfo::DataView input,
    ::gpu::mojom::GpuFeatureInfoPtr* output) {
  bool success = true;
  ::gpu::mojom::GpuFeatureInfoPtr result(::gpu::mojom::GpuFeatureInfo::New());
  
      if (success && !input.ReadStatusValues(&result->status_values))
        success = false;
      if (success && !input.ReadEnabledGpuDriverBugWorkarounds(&result->enabled_gpu_driver_bug_workarounds))
        success = false;
      if (success && !input.ReadDisabledExtensions(&result->disabled_extensions))
        success = false;
      if (success && !input.ReadDisabledWebglExtensions(&result->disabled_webgl_extensions))
        success = false;
      if (success && !input.ReadAppliedGpuBlocklistEntries(&result->applied_gpu_blocklist_entries))
        success = false;
      if (success && !input.ReadAppliedGpuDriverBugListEntries(&result->applied_gpu_driver_bug_list_entries))
        success = false;
      if (success && !input.ReadSupportedBufferFormatsForAllocationAndTexturing(&result->supported_buffer_formats_for_allocation_and_texturing))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace gpu {
namespace mojom {




}  // namespace mojom
}  // namespace gpu


#if defined(__clang__)
#pragma clang diagnostic pop
#endif