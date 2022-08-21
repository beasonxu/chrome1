// components/safe_browsing/core/common/safe_browsing_url_checker.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SAFE_BROWSING_CORE_COMMON_SAFE_BROWSING_URL_CHECKER_MOJOM_SHARED_H_
#define COMPONENTS_SAFE_BROWSING_CORE_COMMON_SAFE_BROWSING_URL_CHECKER_MOJOM_SHARED_H_

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

#include "components/safe_browsing/core/common/safe_browsing_url_checker.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace safe_browsing {
namespace mojom {


}  // namespace mojom
}  // namespace safe_browsing

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace safe_browsing {
namespace mojom {
// Interface base classes. They are used for type safety check.
class SafeBrowsingUrlCheckerInterfaceBase {};

using SafeBrowsingUrlCheckerPtrDataView =
    mojo::InterfacePtrDataView<SafeBrowsingUrlCheckerInterfaceBase>;
using SafeBrowsingUrlCheckerRequestDataView =
    mojo::InterfaceRequestDataView<SafeBrowsingUrlCheckerInterfaceBase>;
using SafeBrowsingUrlCheckerAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<SafeBrowsingUrlCheckerInterfaceBase>;
using SafeBrowsingUrlCheckerAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<SafeBrowsingUrlCheckerInterfaceBase>;
class UrlCheckNotifierInterfaceBase {};

using UrlCheckNotifierPtrDataView =
    mojo::InterfacePtrDataView<UrlCheckNotifierInterfaceBase>;
using UrlCheckNotifierRequestDataView =
    mojo::InterfaceRequestDataView<UrlCheckNotifierInterfaceBase>;
using UrlCheckNotifierAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<UrlCheckNotifierInterfaceBase>;
using UrlCheckNotifierAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<UrlCheckNotifierInterfaceBase>;


}  // namespace mojom
}  // namespace safe_browsing

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace safe_browsing {
namespace mojom {


}  // namespace mojom
}  // namespace safe_browsing

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // COMPONENTS_SAFE_BROWSING_CORE_COMMON_SAFE_BROWSING_URL_CHECKER_MOJOM_SHARED_H_