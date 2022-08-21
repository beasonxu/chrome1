// third_party/blink/public/mojom/page_state/page_state.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_STATE_PAGE_STATE_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_STATE_PAGE_STATE_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"




#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace blink {
namespace mojom {
class DEPRECATED_FileSystemFileDataView;

class FileDataView;

class RequestBodyDataView;

class HttpBodyDataView;

class ViewStateDataView;

class FrameStateDataView;

class PageStateDataView;

class ElementDataView;

enum class ScrollRestorationType : int32_t;
class DEPRECATED_FileSystemFile;
using DEPRECATED_FileSystemFilePtr = mojo::StructPtr<DEPRECATED_FileSystemFile>;

class File;
using FilePtr = mojo::StructPtr<File>;

class RequestBody;
using RequestBodyPtr = mojo::StructPtr<RequestBody>;

class HttpBody;
using HttpBodyPtr = mojo::StructPtr<HttpBody>;

class ViewState;
using ViewStatePtr = mojo::StructPtr<ViewState>;

class FrameState;
using FrameStatePtr = mojo::StructPtr<FrameState>;

class PageState;
using PageStatePtr = mojo::StructPtr<PageState>;

class Element;

using ElementPtr = mojo::StructPtr<Element>;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAGE_STATE_PAGE_STATE_MOJOM_FORWARD_H_