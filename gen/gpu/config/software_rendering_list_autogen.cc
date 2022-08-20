// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
//    gpu/config/process_json.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#include "gpu/config/software_rendering_list_autogen.h"

#include <iterator>

#include "gpu/config/software_rendering_list_arrays_and_structs_autogen.h"
#include "gpu/config/software_rendering_list_exceptions_autogen.h"

namespace gpu {

const GpuControlList::Entry kSoftwareRenderingListEntries[] = {
{
4,  // id
"The Intel Mobile 945 Express family of chipsets is not compatible with WebGL",
std::size(kFeatureListForSoftwareEntry4),  // features size
kFeatureListForSoftwareEntry4,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForSoftwareEntry4),  // CrBugs size
kCrBugsForSoftwareEntry4,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
std::size(kDevicesForSoftwareEntry4),  // Devices size
kDevicesForSoftwareEntry4,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry4_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
8,  // id
"NVIDIA GeForce FX Go5200 is assumed to be buggy",
std::size(kFeatureListForSoftwareEntry8),  // features size
kFeatureListForSoftwareEntry8,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForSoftwareEntry8),  // CrBugs size
kCrBugsForSoftwareEntry8,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x10de,  // vendor_id
std::size(kDevicesForSoftwareEntry8),  // Devices size
kDevicesForSoftwareEntry8,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry8_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
76,  // id
"WebGL is disabled on Android unless the GPU runs in a separate process or reset notification is supported",
std::size(kFeatureListForSoftwareEntry76),  // features size
kFeatureListForSoftwareEntry76,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
0,  // CrBugs size
nullptr,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry76_1043157500,  // more data
},
std::size(kExceptionsForEntry76),  // exceptions count
kExceptionsForEntry76,  // exceptions
},
{
96,  // id
"Blocklist GPU raster/canvas on all except known good GPUs and newer Android releases",
std::size(kFeatureListForSoftwareEntry96),  // features size
kFeatureListForSoftwareEntry96,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForSoftwareEntry96),  // CrBugs size
kCrBugsForSoftwareEntry96,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry96_1043157500,  // more data
},
std::size(kExceptionsForEntry96),  // exceptions count
kExceptionsForEntry96,  // exceptions
},
{
100,  // id
"GPU rasterization and canvas is blocklisted on Nexus 10",
std::size(kFeatureListForSoftwareEntry100),  // features size
kFeatureListForSoftwareEntry100,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForSoftwareEntry100),  // CrBugs size
kCrBugsForSoftwareEntry100,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry100,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry100_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
102,  // id
"Accelerated 2D canvas and Ganesh broken on Galaxy Tab 2",
std::size(kFeatureListForSoftwareEntry102),  // features size
kFeatureListForSoftwareEntry102,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForSoftwareEntry102),  // CrBugs size
kCrBugsForSoftwareEntry102,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry102,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry102_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
104,  // id
"GPU raster broken on PowerVR Rogue",
std::size(kFeatureListForSoftwareEntry104),  // features size
kFeatureListForSoftwareEntry104,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForSoftwareEntry104),  // CrBugs size
kCrBugsForSoftwareEntry104,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForSoftwareEntry104,  // driver info
&kGLStringsForSoftwareEntry104,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry104_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
105,  // id
"GPU raster broken on PowerVR SGX even on Lollipop",
std::size(kFeatureListForSoftwareEntry105),  // features size
kFeatureListForSoftwareEntry105,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForSoftwareEntry105),  // CrBugs size
kCrBugsForSoftwareEntry105,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry105,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry105_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
106,  // id
"GPU raster broken on ES2-only Adreno 3xx drivers",
std::size(kFeatureListForSoftwareEntry106),  // features size
kFeatureListForSoftwareEntry106,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForSoftwareEntry106),  // CrBugs size
kCrBugsForSoftwareEntry106,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry106,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry106_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
108,  // id
"GPU rasterization image color broken on Vivante",
std::size(kFeatureListForSoftwareEntry108),  // features size
kFeatureListForSoftwareEntry108,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForSoftwareEntry108),  // CrBugs size
kCrBugsForSoftwareEntry108,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry108,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry108_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
140,  // id
"MSAA and depth texture buggy on Adreno 3xx prior to Android 9, also disable WebGL2",
std::size(kFeatureListForSoftwareEntry140),  // features size
kFeatureListForSoftwareEntry140,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForSoftwareEntry140),  // CrBugs size
kCrBugsForSoftwareEntry140,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "9.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry140,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry140_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
148,  // id
"VideoCore V has corrupt rendering with GPU Rasterization on Android versions below N.",
std::size(kFeatureListForSoftwareEntry148),  // features size
kFeatureListForSoftwareEntry148,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForSoftwareEntry148),  // CrBugs size
kCrBugsForSoftwareEntry148,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "7.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry148,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry148_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
149,  // id
"Adreno 420 support for EXT_multisampled_render_to_texture is buggy on Android < 5.1",
std::size(kFeatureListForSoftwareEntry149),  // features size
kFeatureListForSoftwareEntry149,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForSoftwareEntry149),  // CrBugs size
kCrBugsForSoftwareEntry149,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "5.1", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry149,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry149_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
152,  // id
"Test entry where all features except WebGL blocklisted",
std::size(kFeatureListForSoftwareEntry152),  // features size
kFeatureListForSoftwareEntry152,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
0,  // CrBugs size
nullptr,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry152_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
153,  // id
"Test entry where WebGL is blocklisted",
std::size(kFeatureListForSoftwareEntry153),  // features size
kFeatureListForSoftwareEntry153,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
0,  // CrBugs size
nullptr,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry153_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
168,  // id
"PowerVR Driver crashes with ANGLE",
std::size(kFeatureListForSoftwareEntry168),  // features size
kFeatureListForSoftwareEntry168,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForSoftwareEntry168),  // CrBugs size
kCrBugsForSoftwareEntry168,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "5.1.1", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForSoftwareEntry168,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry168_1043157500,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
};
const size_t kSoftwareRenderingListEntryCount = 16;
}  // namespace gpu
