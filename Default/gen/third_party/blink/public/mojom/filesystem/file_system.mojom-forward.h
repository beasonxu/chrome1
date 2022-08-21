// third_party/blink/public/mojom/filesystem/file_system.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace blink {
namespace mojom {
class FileSystemInfoDataView;


enum class FileSystemType : int32_t;
class FileSystemInfo;
using FileSystemInfoPtr = mojo::StructPtr<FileSystemInfo>;

class FileSystemCancellableOperation;

class FileSystemOperationListener;

class ReceivedSnapshotListener;

class FileSystemManager;




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FILESYSTEM_FILE_SYSTEM_MOJOM_FORWARD_H_