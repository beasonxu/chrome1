// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/public/browser/gpu_utils.h"

#include <string>

#include "base/bind.h"
#include "base/command_line.h"
#include "base/strings/string_number_conversions.h"
#include "build/build_config.h"
#include "build/chromeos_buildflags.h"
#include "cc/base/switches.h"
#include "components/viz/common/features.h"
#include "components/viz/common/viz_utils.h"
#include "content/browser/browser_main_loop.h"
#include "content/browser/gpu/gpu_process_host.h"
#include "content/public/common/content_features.h"
#include "content/public/common/content_switches.h"
#include "gpu/command_buffer/service/gpu_switches.h"
#include "gpu/command_buffer/service/service_utils.h"
#include "gpu/config/gpu_finch_features.h"
#include "gpu/config/gpu_switches.h"
#include "media/base/media_switches.h"
#include "media/media_buildflags.h"
#include "ui/gfx/switches.h"

// TODO(b/192563524): remove it when the legacy video decoder is replaced for
// all devices.
#if BUILDFLAG(IS_CHROMEOS)
#include "ui/ozone/public/ozone_switches.h"  // nogncheck
#endif                                       // BUILDFLAG(IS_CHROMEOS)

namespace {

void KillGpuProcessImpl(content::GpuProcessHost* host) {
  if (host) {
    host->ForceShutdown();
  }
}

bool GetUintFromSwitch(const base::CommandLine* command_line,
                       const base::StringPiece& switch_string,
                       uint32_t* value) {
  std::string switch_value(command_line->GetSwitchValueASCII(switch_string));
  return base::StringToUint(switch_value, value);
}

}  // namespace

namespace content {

bool ShouldEnableAndroidSurfaceControl(const base::CommandLine& cmd_line) {
#if !BUILDFLAG(IS_ANDROID)
  return false;
#else
  if (viz::PreferRGB565ResourcesForDisplay())
    return false;
  return features::IsAndroidSurfaceControlEnabled();
#endif
}

const gpu::GpuPreferences GetGpuPreferencesFromCommandLine() {
  DCHECK(base::CommandLine::InitializedForCurrentProcess());
  const base::CommandLine* command_line =
      base::CommandLine::ForCurrentProcess();
  gpu::GpuPreferences gpu_preferences =
      gpu::gles2::ParseGpuPreferences(command_line);
  gpu_preferences.disable_accelerated_video_decode =
      command_line->HasSwitch(switches::kDisableAcceleratedVideoDecode);
  gpu_preferences.disable_accelerated_video_encode =
      command_line->HasSwitch(switches::kDisableAcceleratedVideoEncode);
#if BUILDFLAG(IS_WIN)
  gpu_preferences.enable_low_latency_dxva =
      !command_line->HasSwitch(switches::kDisableLowLatencyDxva);
  gpu_preferences.enable_zero_copy_dxgi_video =
      !command_line->HasSwitch(switches::kDisableZeroCopyDxgiVideo);
  gpu_preferences.enable_nv12_dxgi_video =
      !command_line->HasSwitch(switches::kDisableNv12DxgiVideo);
#endif
  gpu_preferences.disable_software_rasterizer =
      command_line->HasSwitch(switches::kDisableSoftwareRasterizer);
  gpu_preferences.log_gpu_control_list_decisions =
      command_line->HasSwitch(switches::kLogGpuControlListDecisions);
  gpu_preferences.gpu_startup_dialog =
      command_line->HasSwitch(switches::kGpuStartupDialog);
  gpu_preferences.disable_gpu_watchdog =
      command_line->HasSwitch(switches::kDisableGpuWatchdog) ||
      command_line->HasSwitch(switches::kSingleProcess) ||
      command_line->HasSwitch(switches::kInProcessGPU);
  gpu_preferences.gpu_sandbox_start_early =
      command_line->HasSwitch(switches::kGpuSandboxStartEarly);
  gpu_preferences.enable_vulkan_protected_memory =
      command_line->HasSwitch(switches::kEnableVulkanProtectedMemory);
  gpu_preferences.disable_vulkan_fallback_to_gl_for_testing =
      command_line->HasSwitch(switches::kDisableVulkanFallbackToGLForTesting);

#if BUILDFLAG(IS_MAC)
  gpu_preferences.enable_metal = base::FeatureList::IsEnabled(features::kMetal);
#endif

  gpu_preferences.enable_gpu_benchmarking_extension =
      command_line->HasSwitch(cc::switches::kEnableGpuBenchmarking);

  gpu_preferences.enable_android_surface_control =
      ShouldEnableAndroidSurfaceControl(*command_line);

  gpu_preferences.enable_native_gpu_memory_buffers =
      command_line->HasSwitch(switches::kEnableNativeGpuMemoryBuffers);

#if BUILDFLAG(IS_CHROMEOS)
#if BUILDFLAG(USE_CHROMEOS_MEDIA_ACCELERATION)
  // The direct VideoDecoder is disallowed on some particular SoC/platforms.
  const bool should_use_direct_video_decoder =
      !command_line->HasSwitch(
          switches::kPlatformDisallowsChromeOSDirectVideoDecoder) &&
      base::FeatureList::IsEnabled(media::kUseChromeOSDirectVideoDecoder);

  // For testing purposes, the following flag allows using the "other" video
  // decoder implementation.
  if (base::FeatureList::IsEnabled(
          media::kUseAlternateVideoDecoderImplementation)) {
    gpu_preferences.enable_chromeos_direct_video_decoder =
        !should_use_direct_video_decoder;
  } else {
    gpu_preferences.enable_chromeos_direct_video_decoder =
        should_use_direct_video_decoder;
  }
#else   // !BUILDFLAG(USE_CHROMEOS_MEDIA_ACCELERATION)
  gpu_preferences.enable_chromeos_direct_video_decoder = false;
#endif  // BUILDFLAG(USE_CHROMEOS_MEDIA_ACCELERATION)
#endif  // BUILDFLAG(IS_CHROMEOS)

#if BUILDFLAG(IS_ANDROID)
  gpu_preferences.disable_oopr_debug_crash_dump =
      command_line->HasSwitch(switches::kDisableOoprDebugCrashDump);
#endif

  if (GetUintFromSwitch(command_line, switches::kVulkanHeapMemoryLimitMb,
                        &gpu_preferences.vulkan_heap_memory_limit)) {
    gpu_preferences.vulkan_heap_memory_limit *= 1024 * 1024;
  }
  if (GetUintFromSwitch(command_line, switches::kVulkanSyncCpuMemoryLimitMb,
                        &gpu_preferences.vulkan_sync_cpu_memory_limit)) {
    gpu_preferences.vulkan_sync_cpu_memory_limit *= 1024 * 1024;
  }

  // Some of these preferences are set or adjusted in
  // GpuDataManagerImplPrivate::AppendGpuCommandLine.
  return gpu_preferences;
}

void KillGpuProcess() {
  GpuProcessHost::CallOnIO(GPU_PROCESS_KIND_SANDBOXED, false /* force_create */,
                           base::BindOnce(&KillGpuProcessImpl));
}

gpu::GpuChannelEstablishFactory* GetGpuChannelEstablishFactory() {
  return BrowserMainLoop::GetInstance()->gpu_channel_establish_factory();
}

#if BUILDFLAG(CLANG_PROFILING_INSIDE_SANDBOX)
void DumpGpuProfilingData(base::OnceClosure callback) {
  content::GpuProcessHost::CallOnIO(
      content::GPU_PROCESS_KIND_SANDBOXED, false /* force_create */,
      base::BindOnce(
          [](base::OnceClosure callback, content::GpuProcessHost* host) {
            host->gpu_service()->WriteClangProfilingProfile(
                std::move(callback));
          },
          std::move(callback)));
}
#endif  // BUILDFLAG(CLANG_PROFILING_INSIDE_SANDBOX)

}  // namespace content
