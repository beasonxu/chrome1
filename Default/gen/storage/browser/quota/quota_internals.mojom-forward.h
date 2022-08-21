// storage/browser/quota/quota_internals.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef STORAGE_BROWSER_QUOTA_QUOTA_INTERNALS_MOJOM_FORWARD_H_
#define STORAGE_BROWSER_QUOTA_QUOTA_INTERNALS_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace storage {
namespace mojom {
class BucketTableEntryDataView;


enum class StorageType : int32_t;
class BucketTableEntry;
using BucketTableEntryPtr = mojo::StructPtr<BucketTableEntry>;

class QuotaInternalsHandler;




}  // namespace mojom
}  // namespace storage

#endif  // STORAGE_BROWSER_QUOTA_QUOTA_INTERNALS_MOJOM_FORWARD_H_