// gpu/ipc/common/gpu_preferences.mojom.m.js is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {mojo} from '../../../mojo/public/js/bindings.js';

import {
  BufferUsageAndFormat as gfx_mojom_BufferUsageAndFormat,
  BufferUsageAndFormatSpec as gfx_mojom_BufferUsageAndFormatSpec
} from '../../../ui/gfx/mojom/buffer_types.mojom.m.js';


/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const VulkanImplementationNameSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const VulkanImplementationName = {
  
  kNone: 0,
  kNative: 1,
  kForcedNative: 2,
  kSwiftshader: 3,
  kLast: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const WebGPUAdapterNameSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const WebGPUAdapterName = {
  
  kDefault: 0,
  kCompat: 1,
  kSwiftShader: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const GrContextTypeSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const GrContextType = {
  
  kGL: 0,
  kVulkan: 1,
  kMetal: 2,
  kDawn: 3,
  kLast: 3,
  MIN_VALUE: 0,
  MAX_VALUE: 3,
};

/**
 * @const { {$: !mojo.internal.MojomType} }
 */
export const DawnBackendValidationLevelSpec = { $: mojo.internal.Enum() };

/**
 * @enum {number}
 */
export const DawnBackendValidationLevel = {
  
  kDisabled: 0,
  kPartial: 1,
  kFull: 2,
  MIN_VALUE: 0,
  MAX_VALUE: 2,
};


/**
 * @const { {$:!mojo.internal.MojomType}}
 */
export const GpuPreferencesSpec =
    { $: /** @type {!mojo.internal.MojomType} */ ({}) };




mojo.internal.Struct(
    GpuPreferencesSpec.$,
    'GpuPreferences',
    [
      mojo.internal.StructField(
        'disableAcceleratedVideoDecode', 0,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'disableAcceleratedVideoEncode', 0,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'gpuStartupDialog', 0,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'disableGpuWatchdog', 0,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'gpuSandboxStartEarly', 0,
        4,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableLowLatencyDxva', 0,
        5,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableZeroCopyDxgiVideo', 0,
        6,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableNv12DxgiVideo', 0,
        7,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableMediaFoundationVeaOnWindows7', 1,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'disableSoftwareRasterizer', 1,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'logGpuControlListDecisions', 1,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'compileShaderAlwaysSucceeds', 1,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'disableGlErrorLimit', 1,
        4,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'disableGlslTranslator', 1,
        5,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'disableShaderNameHashing', 1,
        6,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableGpuCommandLogging', 1,
        7,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableGpuDebugging', 2,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableGpuServiceLoggingGpu', 2,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableGpuDriverDebugLogging', 2,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'disableGpuProgramCache', 2,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enforceGlMinimums', 2,
        4,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'forceGpuMemAvailableBytes', 4,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'forceGpuMemDiscardableLimitBytes', 8,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'forceMaxTextureSize', 12,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'gpuProgramCacheSize', 16,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'disableGpuShaderDiskCache', 2,
        5,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableThreadedTextureMailboxes', 2,
        6,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'glShaderIntermOutput', 2,
        7,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableAndroidSurfaceControl', 3,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableGpuServiceLogging', 3,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableGpuServiceTracing', 3,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'usePassthroughCmdDecoder', 3,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'disableBiplanarGpuMemoryBuffersForVideoFrames', 3,
        4,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'textureTargetExceptionList', 24,
        0,
        mojo.internal.Array(gfx_mojom_BufferUsageAndFormatSpec.$, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'ignoreGpuBlocklist', 3,
        5,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'watchdogStartsBackgrounded', 3,
        6,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'grContextType', 20,
        0,
        GrContextTypeSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'useVulkan', 32,
        0,
        VulkanImplementationNameSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableVulkanProtectedMemory', 3,
        7,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'disableVulkanSurface', 36,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'disableVulkanFallbackToGlForTesting', 36,
        1,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'vulkanHeapMemoryLimit', 40,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'vulkanSyncCpuMemoryLimit', 44,
        0,
        mojo.internal.Uint32,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableMetal', 36,
        2,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableGpuBenchmarkingExtension', 36,
        3,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableWebgpu', 36,
        4,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableUnsafeWebgpu', 36,
        5,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'useWebgpuAdapter', 48,
        0,
        WebGPUAdapterNameSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableDawnBackendValidation', 52,
        0,
        DawnBackendValidationLevelSpec.$,
        0,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enabledDawnFeaturesList', 56,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'disabledDawnFeaturesList', 64,
        0,
        mojo.internal.Array(mojo.internal.String, false),
        null,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableGpuBlockedTimeMetric', 36,
        6,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enablePerfDataCollection', 36,
        7,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
      mojo.internal.StructField(
        'enableNativeGpuMemoryBuffers', 37,
        0,
        mojo.internal.Bool,
        false,
        false /* nullable */,
        0),
    ],
    [[0, 80],]);



/**
 * @record
 */
export class GpuPreferences {
  constructor() {
    /** @type { !boolean } */
    this.disableAcceleratedVideoDecode;
    /** @type { !boolean } */
    this.disableAcceleratedVideoEncode;
    /** @type { !boolean } */
    this.gpuStartupDialog;
    /** @type { !boolean } */
    this.disableGpuWatchdog;
    /** @type { !boolean } */
    this.gpuSandboxStartEarly;
    /** @type { !boolean } */
    this.enableLowLatencyDxva;
    /** @type { !boolean } */
    this.enableZeroCopyDxgiVideo;
    /** @type { !boolean } */
    this.enableNv12DxgiVideo;
    /** @type { !boolean } */
    this.enableMediaFoundationVeaOnWindows7;
    /** @type { !boolean } */
    this.disableSoftwareRasterizer;
    /** @type { !boolean } */
    this.logGpuControlListDecisions;
    /** @type { !boolean } */
    this.compileShaderAlwaysSucceeds;
    /** @type { !boolean } */
    this.disableGlErrorLimit;
    /** @type { !boolean } */
    this.disableGlslTranslator;
    /** @type { !boolean } */
    this.disableShaderNameHashing;
    /** @type { !boolean } */
    this.enableGpuCommandLogging;
    /** @type { !boolean } */
    this.enableGpuDebugging;
    /** @type { !boolean } */
    this.enableGpuServiceLoggingGpu;
    /** @type { !boolean } */
    this.enableGpuDriverDebugLogging;
    /** @type { !boolean } */
    this.disableGpuProgramCache;
    /** @type { !boolean } */
    this.enforceGlMinimums;
    /** @type { !boolean } */
    this.disableGpuShaderDiskCache;
    /** @type { !boolean } */
    this.enableThreadedTextureMailboxes;
    /** @type { !boolean } */
    this.glShaderIntermOutput;
    /** @type { !boolean } */
    this.enableAndroidSurfaceControl;
    /** @type { !boolean } */
    this.enableGpuServiceLogging;
    /** @type { !boolean } */
    this.enableGpuServiceTracing;
    /** @type { !boolean } */
    this.usePassthroughCmdDecoder;
    /** @type { !boolean } */
    this.disableBiplanarGpuMemoryBuffersForVideoFrames;
    /** @type { !boolean } */
    this.ignoreGpuBlocklist;
    /** @type { !boolean } */
    this.watchdogStartsBackgrounded;
    /** @type { !boolean } */
    this.enableVulkanProtectedMemory;
    /** @type { !number } */
    this.forceGpuMemAvailableBytes;
    /** @type { !number } */
    this.forceGpuMemDiscardableLimitBytes;
    /** @type { !number } */
    this.forceMaxTextureSize;
    /** @type { !number } */
    this.gpuProgramCacheSize;
    /** @type { !GrContextType } */
    this.grContextType;
    /** @type { !Array<!gfx_mojom_BufferUsageAndFormat> } */
    this.textureTargetExceptionList;
    /** @type { !VulkanImplementationName } */
    this.useVulkan;
    /** @type { !boolean } */
    this.disableVulkanSurface;
    /** @type { !boolean } */
    this.disableVulkanFallbackToGlForTesting;
    /** @type { !boolean } */
    this.enableMetal;
    /** @type { !boolean } */
    this.enableGpuBenchmarkingExtension;
    /** @type { !boolean } */
    this.enableWebgpu;
    /** @type { !boolean } */
    this.enableUnsafeWebgpu;
    /** @type { !boolean } */
    this.enableGpuBlockedTimeMetric;
    /** @type { !boolean } */
    this.enablePerfDataCollection;
    /** @type { !boolean } */
    this.enableNativeGpuMemoryBuffers;
    /** @type { !number } */
    this.vulkanHeapMemoryLimit;
    /** @type { !number } */
    this.vulkanSyncCpuMemoryLimit;
    /** @type { !WebGPUAdapterName } */
    this.useWebgpuAdapter;
    /** @type { !DawnBackendValidationLevel } */
    this.enableDawnBackendValidation;
    /** @type { !Array<!string> } */
    this.enabledDawnFeaturesList;
    /** @type { !Array<!string> } */
    this.disabledDawnFeaturesList;
  }
}

