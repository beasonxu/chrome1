// components/autofill/content/common/mojom/autofill_driver.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_COMMON_MOJOM_AUTOFILL_DRIVER_MOJOM_SHARED_H_
#define COMPONENTS_AUTOFILL_CONTENT_COMMON_MOJOM_AUTOFILL_DRIVER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <iosfwd>
#include <type_traits>
#include <utility>
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "components/autofill/content/common/mojom/autofill_driver.mojom-shared-internal.h"
#include "components/autofill/core/common/mojom/autofill_types.mojom-shared.h"
#include "mojo/public/mojom/base/string16.mojom-shared.h"
#include "mojo/public/mojom/base/text_direction.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-shared.h"
#include "url/mojom/url.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace autofill {
namespace mojom {


}  // namespace mojom
}  // namespace autofill

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace autofill {
namespace mojom {
// Interface base classes. They are used for type safety check.
class AutofillDriverInterfaceBase {};

using AutofillDriverPtrDataView =
    mojo::InterfacePtrDataView<AutofillDriverInterfaceBase>;
using AutofillDriverRequestDataView =
    mojo::InterfaceRequestDataView<AutofillDriverInterfaceBase>;
using AutofillDriverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<AutofillDriverInterfaceBase>;
using AutofillDriverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<AutofillDriverInterfaceBase>;
class PasswordManagerDriverInterfaceBase {};

using PasswordManagerDriverPtrDataView =
    mojo::InterfacePtrDataView<PasswordManagerDriverInterfaceBase>;
using PasswordManagerDriverRequestDataView =
    mojo::InterfaceRequestDataView<PasswordManagerDriverInterfaceBase>;
using PasswordManagerDriverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PasswordManagerDriverInterfaceBase>;
using PasswordManagerDriverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PasswordManagerDriverInterfaceBase>;
class PasswordGenerationDriverInterfaceBase {};

using PasswordGenerationDriverPtrDataView =
    mojo::InterfacePtrDataView<PasswordGenerationDriverInterfaceBase>;
using PasswordGenerationDriverRequestDataView =
    mojo::InterfaceRequestDataView<PasswordGenerationDriverInterfaceBase>;
using PasswordGenerationDriverAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PasswordGenerationDriverInterfaceBase>;
using PasswordGenerationDriverAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PasswordGenerationDriverInterfaceBase>;


}  // namespace mojom
}  // namespace autofill

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace autofill {
namespace mojom {


}  // namespace mojom
}  // namespace autofill

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // COMPONENTS_AUTOFILL_CONTENT_COMMON_MOJOM_AUTOFILL_DRIVER_MOJOM_SHARED_H_