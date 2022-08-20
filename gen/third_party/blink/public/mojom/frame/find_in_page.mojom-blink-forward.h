// third_party/blink/public/mojom/frame/find_in_page.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_BLINK_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"




namespace blink {
namespace mojom {

enum class StopFindAction : int32_t;

enum class FindMatchUpdateType : int32_t;
class FindInPageInterfaceBase;
class FindInPageClientInterfaceBase;
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
// Aliases for definition in the parent namespace.
using StopFindAction = StopFindAction;
using FindMatchUpdateType = FindMatchUpdateType;
using FindInPageInterfaceBase = FindInPageInterfaceBase;
using FindInPageClientInterfaceBase = FindInPageClientInterfaceBase;
class FindOptions;
using FindOptionsPtr = mojo::StructPtr<FindOptions>;

class FindInPage;

class FindInPageClient;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FIND_IN_PAGE_MOJOM_BLINK_FORWARD_H_