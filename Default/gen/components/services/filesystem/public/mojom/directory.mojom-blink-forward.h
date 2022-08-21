// components/services/filesystem/public/mojom/directory.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_MOJOM_DIRECTORY_MOJOM_BLINK_FORWARD_H_
#define COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_MOJOM_DIRECTORY_MOJOM_BLINK_FORWARD_H_



#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"




namespace filesystem {
namespace mojom {
class DirectoryInterfaceBase;
}  // namespace filesystem
}  // namespace mojom


namespace filesystem {
namespace mojom {
namespace blink {
// Aliases for definition in the parent namespace.
using DirectoryInterfaceBase = DirectoryInterfaceBase;
class FileOpenDetails;
using FileOpenDetailsPtr = mojo::InlinedStructPtr<FileOpenDetails>;

class FileOpenResult;
using FileOpenResultPtr = mojo::StructPtr<FileOpenResult>;

class Directory;




}  // namespace blink
}  // namespace mojom
}  // namespace filesystem

#endif  // COMPONENTS_SERVICES_FILESYSTEM_PUBLIC_MOJOM_DIRECTORY_MOJOM_BLINK_FORWARD_H_