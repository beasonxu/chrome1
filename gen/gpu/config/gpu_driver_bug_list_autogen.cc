// Copyright (c) 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is auto-generated from
//    gpu/config/process_json.py
// It's formatted by clang-format using chromium coding style:
//    clang-format -i -style=chromium filename
// DO NOT EDIT!

#include "gpu/config/gpu_driver_bug_list_autogen.h"

#include <iterator>

#include "gpu/config/gpu_driver_bug_list_arrays_and_structs_autogen.h"
#include "gpu/config/gpu_driver_bug_list_exceptions_autogen.h"

namespace gpu {

const GpuControlList::Entry kGpuDriverBugListEntries[] = {
{
1,  // id
"Imagination driver doesn't like uploading lots of buffer data constantly",
std::size(kFeatureListForWorkaroundsEntry1),  // features size
kFeatureListForWorkaroundsEntry1,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry1),  // CrBugs size
kCrBugsForWorkaroundsEntry1,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry1,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry1_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
2,  // id
"ARM driver doesn't like uploading lots of buffer data constantly",
std::size(kFeatureListForWorkaroundsEntry2),  // features size
kFeatureListForWorkaroundsEntry2,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry2),  // CrBugs size
kCrBugsForWorkaroundsEntry2,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry2,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry2_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
19,  // id
"Disable depth textures on older Adreno 2xx Qualcomm GPUs (legacy blocklist entry, original problem unclear)",
std::size(kFeatureListForWorkaroundsEntry19),  // features size
kFeatureListForWorkaroundsEntry19,  // features
std::size(kDisabledExtensionsForEntry19),  // DisabledExtensions size
kDisabledExtensionsForEntry19,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry19),  // CrBugs size
kCrBugsForWorkaroundsEntry19,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry19,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry19_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
21,  // id
"Vivante GPUs are buggy with context switching",
std::size(kFeatureListForWorkaroundsEntry21),  // features size
kFeatureListForWorkaroundsEntry21,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry21),  // CrBugs size
kCrBugsForWorkaroundsEntry21,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry21,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry21_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
22,  // id
"Imagination drivers are buggy with context switching",
std::size(kFeatureListForWorkaroundsEntry22),  // features size
kFeatureListForWorkaroundsEntry22,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry22),  // CrBugs size
kCrBugsForWorkaroundsEntry22,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry22,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry22_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
24,  // id
"Mali-4xx drivers throw an error when a buffer object's size is set to 0",
std::size(kFeatureListForWorkaroundsEntry24),  // features size
kFeatureListForWorkaroundsEntry24,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry24),  // CrBugs size
kCrBugsForWorkaroundsEntry24,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry24,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry24_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
31,  // id
"The Mali-3xx/4xx/Txxx driver does not guarantee flush ordering",
std::size(kFeatureListForWorkaroundsEntry31),  // features size
kFeatureListForWorkaroundsEntry31,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry31),  // CrBugs size
kCrBugsForWorkaroundsEntry31,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry31,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry31_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
32,  // id
"Share groups are not working on (older?) Broadcom drivers",
std::size(kFeatureListForWorkaroundsEntry32),  // features size
kFeatureListForWorkaroundsEntry32,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry32),  // CrBugs size
kCrBugsForWorkaroundsEntry32,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry32,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry32_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
33,  // id
"Share group-related crashes and poor context switching perf on Imagination drivers",
std::size(kFeatureListForWorkaroundsEntry33),  // features size
kFeatureListForWorkaroundsEntry33,  // features
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
&kGLStringsForWorkaroundsEntry33,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry33_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
34,  // id
"Share groups are not working on (older?) Vivante drivers",
std::size(kFeatureListForWorkaroundsEntry34),  // features size
kFeatureListForWorkaroundsEntry34,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry34),  // CrBugs size
kCrBugsForWorkaroundsEntry34,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry34,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry34_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
38,  // id
"Non-virtual contexts on Qualcomm sometimes cause out-of-order frames",
std::size(kFeatureListForWorkaroundsEntry38),  // features size
kFeatureListForWorkaroundsEntry38,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry38),  // CrBugs size
kCrBugsForWorkaroundsEntry38,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry38,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry38_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
42,  // id
"Framebuffer discarding causes flickering on older IMG drivers",
std::size(kFeatureListForWorkaroundsEntry42),  // features size
kFeatureListForWorkaroundsEntry42,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry42),  // CrBugs size
kCrBugsForWorkaroundsEntry42,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry42,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry42_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
43,  // id
"Framebuffer discarding doesn't accept trivial attachments on Vivante",
std::size(kFeatureListForWorkaroundsEntry43),  // features size
kFeatureListForWorkaroundsEntry43,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry43),  // CrBugs size
kCrBugsForWorkaroundsEntry43,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry43,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry43_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
49,  // id
"The first draw operation from an idle state is slow",
std::size(kFeatureListForWorkaroundsEntry49),  // features size
kFeatureListForWorkaroundsEntry49,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry49),  // CrBugs size
kCrBugsForWorkaroundsEntry49,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry49,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry49_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
54,  // id
"Clear uniforms before first program use on all platforms",
std::size(kFeatureListForWorkaroundsEntry54),  // features size
kFeatureListForWorkaroundsEntry54,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry54),  // CrBugs size
kCrBugsForWorkaroundsEntry54,  // CrBugs
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
&kMoreForEntry54_619971032,  // more data
},
std::size(kExceptionsForEntry54),  // exceptions count
kExceptionsForEntry54,  // exceptions
},
{
71,  // id
"Vivante's support of OES_standard_derivatives is buggy",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry71),  // DisabledExtensions size
kDisabledExtensionsForEntry71,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry71),  // CrBugs size
kCrBugsForWorkaroundsEntry71,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry71,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry71_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
72,  // id
"Use virtual contexts on NVIDIA with GLES 3.1",
std::size(kFeatureListForWorkaroundsEntry72),  // features size
kFeatureListForWorkaroundsEntry72,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry72),  // CrBugs size
kCrBugsForWorkaroundsEntry72,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry72,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry72_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
88,  // id
"Rewrite vec/mat constructors on older GLSL ES drivers, Android O and earlier",
std::size(kFeatureListForWorkaroundsEntry88),  // features size
kFeatureListForWorkaroundsEntry88,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry88),  // CrBugs size
kCrBugsForWorkaroundsEntry88,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "8.0", nullptr},  // os_version
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
&kMoreForEntry88_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
91,  // id
"ETC1 non-power-of-two sized textures crash older IMG drivers",
std::size(kFeatureListForWorkaroundsEntry91),  // features size
kFeatureListForWorkaroundsEntry91,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry91),  // CrBugs size
kCrBugsForWorkaroundsEntry91,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry91,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry91_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
93,  // id
"The GL implementation on the Android emulator has problems with PBOs.",
std::size(kFeatureListForWorkaroundsEntry93),  // features size
kFeatureListForWorkaroundsEntry93,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry93),  // CrBugs size
kCrBugsForWorkaroundsEntry93,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry93,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry93_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
94,  // id
"Disable EGL_KHR_wait_sync on NVIDIA with GLES 3.1",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry94),  // DisabledExtensions size
kDisabledExtensionsForEntry94,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry94),  // CrBugs size
kCrBugsForWorkaroundsEntry94,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLE, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "5.0.2", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry94,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry94_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
95,  // id
"glClear does not always work on these drivers",
std::size(kFeatureListForWorkaroundsEntry95),  // features size
kFeatureListForWorkaroundsEntry95,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry95),  // CrBugs size
kCrBugsForWorkaroundsEntry95,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry95,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry95_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
97,  // id
"Multisampling has poor performance in Intel BayTrail",
std::size(kFeatureListForWorkaroundsEntry97),  // features size
kFeatureListForWorkaroundsEntry97,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry97),  // CrBugs size
kCrBugsForWorkaroundsEntry97,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry97,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry97_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
98,  // id
"PowerVR SGX 540 drivers throw GL_OUT_OF_MEMORY error when a buffer object's size is set to 0",
std::size(kFeatureListForWorkaroundsEntry98),  // features size
kFeatureListForWorkaroundsEntry98,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry98),  // CrBugs size
kCrBugsForWorkaroundsEntry98,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry98,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry98_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
102,  // id
"Adreno 420 driver loses FBO attachment contents on bound FBO deletion",
std::size(kFeatureListForWorkaroundsEntry102),  // features size
kFeatureListForWorkaroundsEntry102,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry102),  // CrBugs size
kCrBugsForWorkaroundsEntry102,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kGT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "5.0.2", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry102,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry102_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
103,  // id
"Adreno 420 driver drops draw calls after FBO invalidation",
std::size(kFeatureListForWorkaroundsEntry103),  // features size
kFeatureListForWorkaroundsEntry103,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry103),  // CrBugs size
kCrBugsForWorkaroundsEntry103,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry103,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry103_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
105,  // id
"Framebuffer discarding causes corruption on Mali-4xx",
std::size(kFeatureListForWorkaroundsEntry105),  // features size
kFeatureListForWorkaroundsEntry105,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry105),  // CrBugs size
kCrBugsForWorkaroundsEntry105,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry105,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry105_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
106,  // id
"EXT_occlusion_query_boolean hangs on PowerVR SGX 544 (IMG) drivers",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry106),  // DisabledExtensions size
kDisabledExtensionsForEntry106,  // DisabledExtensions
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
&kGLStringsForWorkaroundsEntry106,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry106_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
107,  // id
"Workaround IMG PowerVR G6xxx drivers bugs",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry107),  // DisabledExtensions size
kDisabledExtensionsForEntry107,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry107),  // CrBugs size
kCrBugsForWorkaroundsEntry107,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kBetween, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "5.0.0", "5.1.99"},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForWorkaroundsEntry107,  // driver info
&kGLStringsForWorkaroundsEntry107,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry107_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
110,  // id
"EGL Sync server causes crashes on Adreno 2xx and 3xx drivers",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry110),  // DisabledExtensions size
kDisabledExtensionsForEntry110,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry110),  // CrBugs size
kCrBugsForWorkaroundsEntry110,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForWorkaroundsEntry110,  // driver info
&kGLStringsForWorkaroundsEntry110,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry110_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
112,  // id
"EXT_disjoint_timer_query fails after 2 queries on adreno 3xx in lollypop",
std::size(kFeatureListForWorkaroundsEntry112),  // features size
kFeatureListForWorkaroundsEntry112,  // features
std::size(kDisabledExtensionsForEntry112),  // DisabledExtensions size
kDisabledExtensionsForEntry112,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry112),  // CrBugs size
kCrBugsForWorkaroundsEntry112,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry112,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry112_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
113,  // id
"EXT_disjoint_timer_query fails after 256 queries on adreno 4xx",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry113),  // DisabledExtensions size
kDisabledExtensionsForEntry113,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry113),  // CrBugs size
kCrBugsForWorkaroundsEntry113,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry113,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry113_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
115,  // id
"glGetIntegerv with GL_GPU_DISJOINT_EXT causes GL_INVALID_ENUM error",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry115),  // DisabledExtensions size
kDisabledExtensionsForEntry115,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry115),  // CrBugs size
kCrBugsForWorkaroundsEntry115,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry115,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry115_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
116,  // id
"Adreno 420 support for EXT_multisampled_render_to_texture is buggy on Android < 5.1",
std::size(kFeatureListForWorkaroundsEntry116),  // features size
kFeatureListForWorkaroundsEntry116,  // features
std::size(kDisabledExtensionsForEntry116),  // DisabledExtensions size
kDisabledExtensionsForEntry116,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry116),  // CrBugs size
kCrBugsForWorkaroundsEntry116,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "5.1", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry116,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry116_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
117,  // id
"GL_KHR_blend_equation_advanced breaks blending on Adreno 4xx",
std::size(kFeatureListForWorkaroundsEntry117),  // features size
kFeatureListForWorkaroundsEntry117,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry117),  // CrBugs size
kCrBugsForWorkaroundsEntry117,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry117,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry117_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
119,  // id
"Context lost recovery often fails on Mali-400/450 on Android.",
std::size(kFeatureListForWorkaroundsEntry119),  // features size
kFeatureListForWorkaroundsEntry119,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry119),  // CrBugs size
kCrBugsForWorkaroundsEntry119,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry119,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry119_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
125,  // id
"glFinish doesn't clear caches on Android",
std::size(kFeatureListForWorkaroundsEntry125),  // features size
kFeatureListForWorkaroundsEntry125,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry125),  // CrBugs size
kCrBugsForWorkaroundsEntry125,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry125,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry125_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
126,  // id
"Program binaries contain incorrect bound attribute locations on Adreno 3xx GPUs",
std::size(kFeatureListForWorkaroundsEntry126),  // features size
kFeatureListForWorkaroundsEntry126,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry126),  // CrBugs size
kCrBugsForWorkaroundsEntry126,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry126,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry126_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
127,  // id
"Android Adreno crashes on binding incomplete cube map texture to FBO",
std::size(kFeatureListForWorkaroundsEntry127),  // features size
kFeatureListForWorkaroundsEntry127,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry127),  // CrBugs size
kCrBugsForWorkaroundsEntry127,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry127,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry127_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
132,  // id
"On Intel GPUs MSAA performance is not acceptable for GPU rasterization",
std::size(kFeatureListForWorkaroundsEntry132),  // features size
kFeatureListForWorkaroundsEntry132,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry132),  // CrBugs size
kCrBugsForWorkaroundsEntry132,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryActive,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry132_619971032,  // more data
},
std::size(kExceptionsForEntry132),  // exceptions count
kExceptionsForEntry132,  // exceptions
},
{
133,  // id
"CHROMIUM_copy_texture with 1MB copy per flush to avoid unwanted cache growth on Adreno",
std::size(kFeatureListForWorkaroundsEntry133),  // features size
kFeatureListForWorkaroundsEntry133,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry133),  // CrBugs size
kCrBugsForWorkaroundsEntry133,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry133,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry133_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
137,  // id
"NVIDIA fails glReadPixels from incomplete cube map texture",
std::size(kFeatureListForWorkaroundsEntry137),  // features size
kFeatureListForWorkaroundsEntry137,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry137),  // CrBugs size
kCrBugsForWorkaroundsEntry137,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry137,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry137_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
138,  // id
"NVIDIA drivers before 346 lack features in NV_path_rendering and related extensions to implement driver level path rendering.",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry138),  // DisabledExtensions size
kDisabledExtensionsForEntry138,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry138),  // CrBugs size
kCrBugsForWorkaroundsEntry138,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForWorkaroundsEntry138,  // driver info
&kGLStringsForWorkaroundsEntry138,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry138_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
140,  // id
"glReadPixels fails on FBOs with SRGB_ALPHA textures, Nexus 5X",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry140),  // DisabledExtensions size
kDisabledExtensionsForEntry140,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry140),  // CrBugs size
kCrBugsForWorkaroundsEntry140,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry140,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry140_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
145,  // id
"EGLImage ref counting across EGLContext/threads is broken",
std::size(kFeatureListForWorkaroundsEntry145),  // features size
kFeatureListForWorkaroundsEntry145,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry145),  // CrBugs size
kCrBugsForWorkaroundsEntry145,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry145,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry145_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
147,  // id
"Limit max texure size to 4096 on all of Android",
std::size(kFeatureListForWorkaroundsEntry147),  // features size
kFeatureListForWorkaroundsEntry147,  // features
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
&kMoreForEntry147_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
157,  // id
"Testing fences was broken on Mali ES2 drivers for specific phone models",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry157),  // DisabledExtensions size
kDisabledExtensionsForEntry157,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry157),  // CrBugs size
kCrBugsForWorkaroundsEntry157,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry157,  // GL strings
&kMachineModelInfoForEntry157,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry157_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
162,  // id
"Framebuffer discarding not useful on NVIDIA Kepler architecture and later",
std::size(kFeatureListForWorkaroundsEntry162),  // features size
kFeatureListForWorkaroundsEntry162,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry162),  // CrBugs size
kCrBugsForWorkaroundsEntry162,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry162,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry162_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
165,  // id
"Unpacking overlapping rows from unpack buffers is unstable on NVIDIA GL driver",
std::size(kFeatureListForWorkaroundsEntry165),  // features size
kFeatureListForWorkaroundsEntry165,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry165),  // CrBugs size
kCrBugsForWorkaroundsEntry165,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry165,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry165_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
174,  // id
"Adreno 4xx support for EXT_multisampled_render_to_texture is buggy on Android 7.0",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry174),  // DisabledExtensions size
kDisabledExtensionsForEntry174,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry174),  // CrBugs size
kCrBugsForWorkaroundsEntry174,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kBetween, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "7.0.0", "7.0.99"},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry174,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry174_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
175,  // id
"Adreno 5xx support for EXT_multisampled_render_to_texture is buggy on Android < 7.0",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry175),  // DisabledExtensions size
kDisabledExtensionsForEntry175,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry175),  // CrBugs size
kCrBugsForWorkaroundsEntry175,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "7.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry175,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry175_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
176,  // id
"glClear does not work on Acer Predator GT-810",
std::size(kFeatureListForWorkaroundsEntry176),  // features size
kFeatureListForWorkaroundsEntry176,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry176),  // CrBugs size
kCrBugsForWorkaroundsEntry176,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry176,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry176_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
180,  // id
"eglCreateImageKHR fails for one component textures on PowerVR",
std::size(kFeatureListForWorkaroundsEntry180),  // features size
kFeatureListForWorkaroundsEntry180,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry180),  // CrBugs size
kCrBugsForWorkaroundsEntry180,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry180,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry180_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
182,  // id
"Frequent hang in glClear on old android versions on Mali-T7xx",
std::size(kFeatureListForWorkaroundsEntry182),  // features size
kFeatureListForWorkaroundsEntry182,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry182),  // CrBugs size
kCrBugsForWorkaroundsEntry182,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "6.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry182,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry182_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
192,  // id
"Decode and encode before generateMipmap for srgb format textures on os except macosx",
std::size(kFeatureListForWorkaroundsEntry192),  // features size
kFeatureListForWorkaroundsEntry192,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry192),  // CrBugs size
kCrBugsForWorkaroundsEntry192,  // CrBugs
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
&kMoreForEntry192_619971032,  // more data
},
std::size(kExceptionsForEntry192),  // exceptions count
kExceptionsForEntry192,  // exceptions
},
{
205,  // id
"Adreno 5xx support for EXT_multisampled_render_to_texture is buggy on Android 7.1",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry205),  // DisabledExtensions size
kDisabledExtensionsForEntry205,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry205),  // CrBugs size
kCrBugsForWorkaroundsEntry205,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kEQ, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "7.1.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry205,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry205_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
206,  // id
"Disable KHR_blend_equation_advanced until cc shaders are updated",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry206),  // DisabledExtensions size
kDisabledExtensionsForEntry206,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry206),  // CrBugs size
kCrBugsForWorkaroundsEntry206,  // CrBugs
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
&kMoreForEntry206_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
212,  // id
"Program binaries don't contain transform feedback varyings on Qualcomm GPUs",
std::size(kFeatureListForWorkaroundsEntry212),  // features size
kFeatureListForWorkaroundsEntry212,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry212),  // CrBugs size
kCrBugsForWorkaroundsEntry212,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry212,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry212_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
213,  // id
"The Mali-Gxx driver does not guarantee flush ordering",
std::size(kFeatureListForWorkaroundsEntry213),  // features size
kFeatureListForWorkaroundsEntry213,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry213),  // CrBugs size
kCrBugsForWorkaroundsEntry213,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry213,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry213_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
214,  // id
"Some Adreno 3xx don't setup scissor state correctly when FBO0 is bound, nor support MSAA properly.",
std::size(kFeatureListForWorkaroundsEntry214),  // features size
kFeatureListForWorkaroundsEntry214,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry214),  // CrBugs size
kCrBugsForWorkaroundsEntry214,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "9.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry214,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry214_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
215,  // id
"Fake no-op GPU driver bug workaround for testing",
std::size(kFeatureListForWorkaroundsEntry215),  // features size
kFeatureListForWorkaroundsEntry215,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry215),  // CrBugs size
kCrBugsForWorkaroundsEntry215,  // CrBugs
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
&kMoreForEntry215_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
216,  // id
"Pack parameters work incorrectly with pack buffer bound",
std::size(kFeatureListForWorkaroundsEntry216),  // features size
kFeatureListForWorkaroundsEntry216,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry216),  // CrBugs size
kCrBugsForWorkaroundsEntry216,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry216,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry216_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
217,  // id
"Alignment works incorrectly with unpack buffer bound",
std::size(kFeatureListForWorkaroundsEntry217),  // features size
kFeatureListForWorkaroundsEntry217,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry217),  // CrBugs size
kCrBugsForWorkaroundsEntry217,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry217,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry217_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
218,  // id
"Certain Adreno 4xx and 5xx drivers often crash in glProgramBinary.",
std::size(kFeatureListForWorkaroundsEntry218),  // features size
kFeatureListForWorkaroundsEntry218,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry218),  // CrBugs size
kCrBugsForWorkaroundsEntry218,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForWorkaroundsEntry218,  // driver info
&kGLStringsForWorkaroundsEntry218,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry218_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
221,  // id
"Very large instanced draw calls crash on some Adreno 3xx drivers",
std::size(kFeatureListForWorkaroundsEntry221),  // features size
kFeatureListForWorkaroundsEntry221,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry221),  // CrBugs size
kCrBugsForWorkaroundsEntry221,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry221,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry221_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
231,  // id
"Multisampled color renderbuffers can't be resized on Qualcomm 4xx/5xx",
std::size(kFeatureListForWorkaroundsEntry231),  // features size
kFeatureListForWorkaroundsEntry231,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry231),  // CrBugs size
kCrBugsForWorkaroundsEntry231,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry231,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry231_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
240,  // id
"glGetQueryObject(GL_QUERY_RESULT_AVAILABLE) blocks unexpectedly on Adreno",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry240),  // DisabledExtensions size
kDisabledExtensionsForEntry240,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry240),  // CrBugs size
kCrBugsForWorkaroundsEntry240,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "8.1", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry240,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry240_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
241,  // id
"On Intel GPUs MSAA performance is not acceptable for GPU rasterization. Duplicate of 132 for Android",
std::size(kFeatureListForWorkaroundsEntry241),  // features size
kFeatureListForWorkaroundsEntry241,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry241),  // CrBugs size
kCrBugsForWorkaroundsEntry241,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry241,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry241_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
242,  // id
"Code produced by local variable initialization often triggers crashes in Marshmallow Adreno driver",
std::size(kFeatureListForWorkaroundsEntry242),  // features size
kFeatureListForWorkaroundsEntry242,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry242),  // CrBugs size
kCrBugsForWorkaroundsEntry242,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "7.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry242,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry242_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
246,  // id
"Code produced by initializing variables using loops can trigger crashes on some Adreno drivers.",
std::size(kFeatureListForWorkaroundsEntry246),  // features size
kFeatureListForWorkaroundsEntry246,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry246),  // CrBugs size
kCrBugsForWorkaroundsEntry246,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry246,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry246_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
247,  // id
"EXT_disjoint_timer_query is broken on Samsung Galaxy S6",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry247),  // DisabledExtensions size
kDisabledExtensionsForEntry247,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry247),  // CrBugs size
kCrBugsForWorkaroundsEntry247,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry247,  // GL strings
&kMachineModelInfoForEntry247,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry247_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
251,  // id
"Vivante GPUs shader cache breaks rendering",
std::size(kFeatureListForWorkaroundsEntry251),  // features size
kFeatureListForWorkaroundsEntry251,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry251),  // CrBugs size
kCrBugsForWorkaroundsEntry251,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry251,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry251_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
256,  // id
"Expose WebGL's disjoint_timer_query extensions on platforms with site isolation",
std::size(kFeatureListForWorkaroundsEntry256),  // features size
kFeatureListForWorkaroundsEntry256,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry256),  // CrBugs size
kCrBugsForWorkaroundsEntry256,  // CrBugs
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
&kMoreForEntry256_619971032,  // more data
},
std::size(kExceptionsForEntry256),  // exceptions count
kExceptionsForEntry256,  // exceptions
},
{
257,  // id
"Fake entry for testing disabling of WebGL extensions",
0,  // feature size
nullptr,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
std::size(kDisabledWebGLExtensionsForEntry257),  // DisabledWebGLExtensions size
kDisabledWebGLExtensionsForEntry257,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry257),  // CrBugs size
kCrBugsForWorkaroundsEntry257,  // CrBugs
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
&kMoreForEntry257_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
260,  // id
"eglClientWaitSyncKHR with nonzero timeout waits too long",
std::size(kFeatureListForWorkaroundsEntry260),  // features size
kFeatureListForWorkaroundsEntry260,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry260),  // CrBugs size
kCrBugsForWorkaroundsEntry260,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "8.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry260,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry260_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
262,  // id
"Program fails in PowerVR*GX6250 drivers if gl_Position is not set",
std::size(kFeatureListForWorkaroundsEntry262),  // features size
kFeatureListForWorkaroundsEntry262,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry262),  // CrBugs size
kCrBugsForWorkaroundsEntry262,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry262,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry262_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
263,  // id
"Program fails in PowerVR SGX54x drivers if gl_Position is not set",
std::size(kFeatureListForWorkaroundsEntry263),  // features size
kFeatureListForWorkaroundsEntry263,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry263),  // CrBugs size
kCrBugsForWorkaroundsEntry263,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry263,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry263_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
264,  // id
"Program fails in PowerVR G6200 drivers if gl_Position is not set",
std::size(kFeatureListForWorkaroundsEntry264),  // features size
kFeatureListForWorkaroundsEntry264,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry264),  // CrBugs size
kCrBugsForWorkaroundsEntry264,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry264,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry264_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
266,  // id
"Crash in gl::GLApiBase::glGetQueryObjectui64vFn with NetEase devices ",
std::size(kFeatureListForWorkaroundsEntry266),  // features size
kFeatureListForWorkaroundsEntry266,  // features
std::size(kDisabledExtensionsForEntry266),  // DisabledExtensions size
kDisabledExtensionsForEntry266,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry266),  // CrBugs size
kCrBugsForWorkaroundsEntry266,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry266,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry266_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
268,  // id
"Limit MSAA to 4x on Android devices",
std::size(kFeatureListForWorkaroundsEntry268),  // features size
kFeatureListForWorkaroundsEntry268,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry268),  // CrBugs size
kCrBugsForWorkaroundsEntry268,  // CrBugs
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
&kMoreForEntry268_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
271,  // id
"Frequent crashes in glClear on Mali-T7xx on N with driver 12.1.01alp0",
std::size(kFeatureListForWorkaroundsEntry271),  // features size
kFeatureListForWorkaroundsEntry271,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry271),  // CrBugs size
kCrBugsForWorkaroundsEntry271,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "8.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForWorkaroundsEntry271,  // driver info
&kGLStringsForWorkaroundsEntry271,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry271_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
272,  // id
"A deleted query id for GL_TIMESTAMP cannot be reused for other query targets",
std::size(kFeatureListForWorkaroundsEntry272),  // features size
kFeatureListForWorkaroundsEntry272,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry272),  // CrBugs size
kCrBugsForWorkaroundsEntry272,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry272,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry272_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
280,  // id
"ReadPixels is broken with EXT_multisampled_render_to_texture on recent Adreno drivers.",
std::size(kFeatureListForWorkaroundsEntry280),  // features size
kFeatureListForWorkaroundsEntry280,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry280),  // CrBugs size
kCrBugsForWorkaroundsEntry280,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForWorkaroundsEntry280,  // driver info
&kGLStringsForWorkaroundsEntry280,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry280_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
289,  // id
"Fake entry for testing command buffer init failures on ES 2.0",
std::size(kFeatureListForWorkaroundsEntry289),  // features size
kFeatureListForWorkaroundsEntry289,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry289),  // CrBugs size
kCrBugsForWorkaroundsEntry289,  // CrBugs
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
&kMoreForEntry289_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
290,  // id
"Round down glBindBufferRange size to a multiple of 4 on Qualcomm Adreno GPUs for uniform buffers",
std::size(kFeatureListForWorkaroundsEntry290),  // features size
kFeatureListForWorkaroundsEntry290,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry290),  // CrBugs size
kCrBugsForWorkaroundsEntry290,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry290,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry290_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
292,  // id
"adjust src/dst region if blitting pixels outside framebuffer on Android NVIDIA",
std::size(kFeatureListForWorkaroundsEntry292),  // features size
kFeatureListForWorkaroundsEntry292,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry292),  // CrBugs size
kCrBugsForWorkaroundsEntry292,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry292,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry292_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
293,  // id
"Frequent crashes in glClear on Android N with driver 12.0.04rel0",
std::size(kFeatureListForWorkaroundsEntry293),  // features size
kFeatureListForWorkaroundsEntry293,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry293),  // CrBugs size
kCrBugsForWorkaroundsEntry293,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "8.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForWorkaroundsEntry293,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry293_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
299,  // id
"Context lost recovery often fails on PowerVR Rogue GE8* GPUs on Android.",
std::size(kFeatureListForWorkaroundsEntry299),  // features size
kFeatureListForWorkaroundsEntry299,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry299),  // CrBugs size
kCrBugsForWorkaroundsEntry299,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry299,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry299_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
306,  // id
"Program binaries don't contain transform feedback varyings on Mali GPUs",
std::size(kFeatureListForWorkaroundsEntry306),  // features size
kFeatureListForWorkaroundsEntry306,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry306),  // CrBugs size
kCrBugsForWorkaroundsEntry306,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry306,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry306_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
312,  // id
"Crash on Mali-T8x when using glTexImage2D",
std::size(kFeatureListForWorkaroundsEntry312),  // features size
kFeatureListForWorkaroundsEntry312,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry312),  // CrBugs size
kCrBugsForWorkaroundsEntry312,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry312,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry312_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
314,  // id
"Crash on Adreno when using GL_EXT_shader_framebuffer_fetch",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry314),  // DisabledExtensions size
kDisabledExtensionsForEntry314,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry314),  // CrBugs size
kCrBugsForWorkaroundsEntry314,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry314,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry314_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
315,  // id
"Disable GL_MESA_framebuffer_flip_y for desktop GL",
0,  // feature size
nullptr,  // features
std::size(kDisabledExtensionsForEntry315),  // DisabledExtensions size
kDisabledExtensionsForEntry315,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry315),  // CrBugs size
kCrBugsForWorkaroundsEntry315,  // CrBugs
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
&kMoreForEntry315_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
320,  // id
"Remove dynamic indexing for swizzled vectors on Android",
std::size(kFeatureListForWorkaroundsEntry320),  // features size
kFeatureListForWorkaroundsEntry320,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry320),  // CrBugs size
kCrBugsForWorkaroundsEntry320,  // CrBugs
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
&kMoreForEntry320_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
334,  // id
"Some drivers seem to require as to use original texture whenever possible",
std::size(kFeatureListForWorkaroundsEntry334),  // features size
kFeatureListForWorkaroundsEntry334,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry334),  // CrBugs size
kCrBugsForWorkaroundsEntry334,  // CrBugs
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
&kMoreForEntry334_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
358,  // id
"Always assume float formats are renderable on Android except RGB32F",
std::size(kFeatureListForWorkaroundsEntry358),  // features size
kFeatureListForWorkaroundsEntry358,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry358),  // CrBugs size
kCrBugsForWorkaroundsEntry358,  // CrBugs
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
&kMoreForEntry358_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
359,  // id
"Disable depth textures on Adreno 3xx Qualcomm GPUs pre-Android 9 (legacy blocklist entry, original problem unclear)",
std::size(kFeatureListForWorkaroundsEntry359),  // features size
kFeatureListForWorkaroundsEntry359,  // features
std::size(kDisabledExtensionsForEntry359),  // DisabledExtensions size
kDisabledExtensionsForEntry359,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry359),  // CrBugs size
kCrBugsForWorkaroundsEntry359,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "9.0", nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry359,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry359_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
365,  // id
"Context lost recovery often fails on Adreno with SkiaRenderer GL.",
std::size(kFeatureListForWorkaroundsEntry365),  // features size
kFeatureListForWorkaroundsEntry365,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry365),  // CrBugs size
kCrBugsForWorkaroundsEntry365,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry365,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry365_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
367,  // id
"ANGLE cannot recover from context lost",
std::size(kFeatureListForWorkaroundsEntry367),  // features size
kFeatureListForWorkaroundsEntry367,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry367),  // CrBugs size
kCrBugsForWorkaroundsEntry367,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry367,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry367_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
386,  // id
"Older Adreno 4xx drivers drop draws sometimes with oop-c",
std::size(kFeatureListForWorkaroundsEntry386),  // features size
kFeatureListForWorkaroundsEntry386,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry386),  // CrBugs size
kCrBugsForWorkaroundsEntry386,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
&kDriverInfoForWorkaroundsEntry386,  // driver info
&kGLStringsForWorkaroundsEntry386,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // intel_gpu_generation
&kMoreForEntry386_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
{
398,  // id
"On pre-Ice Lake Intel GPUs MSAA performance is not acceptable for GPU rasterization",
std::size(kFeatureListForWorkaroundsEntry398),  // features size
kFeatureListForWorkaroundsEntry398,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry398),  // CrBugs size
kCrBugsForWorkaroundsEntry398,  // CrBugs
{
GpuControlList::kOsAny,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x8086,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryActive,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
nullptr,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "11", nullptr},  // intel_gpu_generation
&kMoreForEntry398_619971032,  // more data
},
std::size(kExceptionsForEntry398),  // exceptions count
kExceptionsForEntry398,  // exceptions
},
{
399,  // id
"On pre-Ice Lake Intel GPUs MSAA performance is not acceptable for GPU rasterization. Duplicate of 398 for Android",
std::size(kFeatureListForWorkaroundsEntry399),  // features size
kFeatureListForWorkaroundsEntry399,  // features
0,  // DisabledExtensions size
nullptr,  // DisabledExtensions
0,  // DisabledWebGLExtensions size
nullptr,  // DisabledWebGLExtensions
std::size(kCrBugsForWorkaroundsEntry399),  // CrBugs size
kCrBugsForWorkaroundsEntry399,  // CrBugs
{
GpuControlList::kOsAndroid,  // os_type
{GpuControlList::kUnknown, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, nullptr, nullptr},  // os_version
0x00,  // vendor_id
0,  // Devices size
nullptr,  // Devices
GpuControlList::kMultiGpuCategoryNone,  // multi_gpu_category
GpuControlList::kMultiGpuStyleNone,  // multi_gpu_style
nullptr,  // driver info
&kGLStringsForWorkaroundsEntry399,  // GL strings
nullptr,  // machine model info
0,  // intel_gpu_series size
nullptr,  // intel_gpu_series
{GpuControlList::kLT, GpuControlList::kVersionStyleNumerical, GpuControlList::kVersionSchemaCommon, "11", nullptr},  // intel_gpu_generation
&kMoreForEntry399_619971032,  // more data
},
0,  // exceptions count
nullptr,  // exceptions
},
};
const size_t kGpuDriverBugListEntryCount = 101;
}  // namespace gpu
