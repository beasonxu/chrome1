// content/browser/process_internals/process_internals.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_BROWSER_PROCESS_INTERNALS_PROCESS_INTERNALS_MOJOM_FORWARD_H_
#define CONTENT_BROWSER_PROCESS_INTERNALS_PROCESS_INTERNALS_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace mojom {
class SiteInstanceInfoDataView;

class FrameInfoDataView;

class WebContentsInfoDataView;

class IsolatedOriginInfoDataView;


enum class FrameInfo_Type : int32_t;
class SiteInstanceInfo;
using SiteInstanceInfoPtr = mojo::StructPtr<SiteInstanceInfo>;

class FrameInfo;
using FrameInfoPtr = mojo::StructPtr<FrameInfo>;

class WebContentsInfo;
using WebContentsInfoPtr = mojo::StructPtr<WebContentsInfo>;

class IsolatedOriginInfo;
using IsolatedOriginInfoPtr = mojo::InlinedStructPtr<IsolatedOriginInfo>;

class ProcessInternalsHandler;




}  // namespace mojom

#endif  // CONTENT_BROWSER_PROCESS_INTERNALS_PROCESS_INTERNALS_MOJOM_FORWARD_H_