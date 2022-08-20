// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
//    gpu/config/process_json.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#ifndef GPU_CONFIG_SOFTWARE_RENDERING_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_
#define GPU_CONFIG_SOFTWARE_RENDERING_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_

#include "gpu/config/gpu_feature_type.h"

namespace gpu {
const int kFeatureListForSoftwareEntry4[2] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
};

const uint32_t kCrBugsForSoftwareEntry4[1] = {
232035,
};

const GpuControlList::Device kDevicesForSoftwareEntry4[2] = {
{0x27AE, 0x0},
{0x27A2, 0x0},
};

const GpuControlList::More kMoreForEntry4_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry8[12] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_ENCODE,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_GL,
GPU_FEATURE_TYPE_METAL,
GPU_FEATURE_TYPE_VULKAN,
GPU_FEATURE_TYPE_CANVAS_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_WEBGPU,
};

const uint32_t kCrBugsForSoftwareEntry8[1] = {
72938,
};

const GpuControlList::Device kDevicesForSoftwareEntry8[1] = {
{0x0324, 0x0},
};

const GpuControlList::More kMoreForEntry8_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry76[1] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
};

const GpuControlList::More kMoreForEntry76_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
true,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const GpuControlList::More kMoreForEntry76_1043157500Exception0 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
33362,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry76Exception1 = {
nullptr,
"Mali-4.*",
".*EXT_robustness.*",
nullptr,
};

const GpuControlList::More kMoreForEntry76_1043157500Exception1 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry96[2] = {
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
};

const uint32_t kCrBugsForSoftwareEntry96[2] = {
362779,
424970,
};

const GpuControlList::More kMoreForEntry96_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry96Exception0 = {
nullptr,
"Adreno \\(TM\\) 3.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry96_1043157500Exception0 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry96Exception1 = {
nullptr,
"Mali-4.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry96_1043157500Exception1 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry96Exception2 = {
nullptr,
"NVIDIA.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry96_1043157500Exception2 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const GpuControlList::More kMoreForEntry96_1043157500Exception3 = {
GpuControlList::kGLTypeGLES,  // gl_type
{GpuControlList::kGE, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "3.0", nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry96Exception4 = {
nullptr,
".*Google.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry96_1043157500Exception4 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry96Exception5 = {
nullptr,
"ANGLE.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry96_1043157500Exception5 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry100[2] = {
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
};

const uint32_t kCrBugsForSoftwareEntry100[1] = {
407144,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry100 = {
nullptr,
".*Mali-T604.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry100_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry102[2] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForSoftwareEntry102[1] = {
416910,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry102 = {
nullptr,
"PowerVR SGX 540",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry102_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry104[2] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForSoftwareEntry104[3] = {
436331,
483574,
684586,
};

const GpuControlList::DriverInfo kDriverInfoForSoftwareEntry104 = {
nullptr,  // driver_vendor
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "1.8", nullptr},  // driver_version
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry104 = {
nullptr,
"PowerVR Rogue.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry104_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry105[2] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForSoftwareEntry105[2] = {
461456,
1243361,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry105 = {
nullptr,
"PowerVR SGX \\d+",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry105_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry106[2] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForSoftwareEntry106[1] = {
480149,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry106 = {
nullptr,
"Adreno \\(TM\\) 3.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry106_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "2.0", nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry108[2] = {
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
};

const uint32_t kCrBugsForSoftwareEntry108[1] = {
560587,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry108 = {
nullptr,
".*Vivante.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry108_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry140[1] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
};

const uint32_t kCrBugsForSoftwareEntry140[3] = {
449116,
698197,
1042214,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry140 = {
nullptr,
"Adreno \\(TM\\) 3.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry140_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry148[1] = {
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
};

const uint32_t kCrBugsForSoftwareEntry148[1] = {
710273,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry148 = {
nullptr,
".*VideoCore V HW.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry148_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry149[1] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
};

const uint32_t kCrBugsForSoftwareEntry149[2] = {
490379,
767913,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry149 = {
nullptr,
"Adreno \\(TM\\) 4.*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry149_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry152[10] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_ENCODE,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_METAL,
GPU_FEATURE_TYPE_VULKAN,
GPU_FEATURE_TYPE_CANVAS_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_WEBGPU,
};

const GpuControlList::More kMoreForEntry152_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
1,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry153[1] = {
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
};

const GpuControlList::More kMoreForEntry153_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
2,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

const int kFeatureListForSoftwareEntry168[12] = {
GPU_FEATURE_TYPE_ACCELERATED_2D_CANVAS,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_DECODE,
GPU_FEATURE_TYPE_ACCELERATED_VIDEO_ENCODE,
GPU_FEATURE_TYPE_GPU_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_WEBGL2,
GPU_FEATURE_TYPE_ANDROID_SURFACE_CONTROL,
GPU_FEATURE_TYPE_ACCELERATED_GL,
GPU_FEATURE_TYPE_METAL,
GPU_FEATURE_TYPE_VULKAN,
GPU_FEATURE_TYPE_CANVAS_OOP_RASTERIZATION,
GPU_FEATURE_TYPE_ACCELERATED_WEBGPU,
};

const uint32_t kCrBugsForSoftwareEntry168[2] = {
1203652,
1221321,
};

const GpuControlList::GLStrings kGLStringsForSoftwareEntry168 = {
nullptr,
"ANGLE \\(Imagination Technologies, PowerVR .*",
nullptr,
nullptr,
};

const GpuControlList::More kMoreForEntry168_1043157500 = {
GpuControlList::kGLTypeNone,  // gl_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gl_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // pixel_shader_version
false,  // in_process_gpu
0,  // gl_reset_notification_strategy
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // direct_rendering_version
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // gpu_count
GpuControlList::kDontCare,  // hardware_overlay
0,  // test_group
GpuControlList::kDontCare,  // subpixel_font_rendering
};

}  // namespace gpu

#endif  // GPU_CONFIG_SOFTWARE_RENDERING_LIST_ARRAYS_AND_STRUCTS_AUTOGEN_H_
