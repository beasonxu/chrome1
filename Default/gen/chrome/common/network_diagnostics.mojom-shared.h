// chrome/common/network_diagnostics.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_SHARED_H_
#define CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_SHARED_H_

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

#include "chrome/common/network_diagnostics.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"






namespace chrome {
namespace mojom {


}  // namespace mojom
}  // namespace chrome

namespace mojo {
namespace internal {

}  // namespace internal
}  // namespace mojo


namespace chrome {
namespace mojom {
// Interface base classes. They are used for type safety check.
class NetworkDiagnosticsInterfaceBase {};

using NetworkDiagnosticsPtrDataView =
    mojo::InterfacePtrDataView<NetworkDiagnosticsInterfaceBase>;
using NetworkDiagnosticsRequestDataView =
    mojo::InterfaceRequestDataView<NetworkDiagnosticsInterfaceBase>;
using NetworkDiagnosticsAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkDiagnosticsInterfaceBase>;
using NetworkDiagnosticsAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkDiagnosticsInterfaceBase>;
class NetworkDiagnosticsClientInterfaceBase {};

using NetworkDiagnosticsClientPtrDataView =
    mojo::InterfacePtrDataView<NetworkDiagnosticsClientInterfaceBase>;
using NetworkDiagnosticsClientRequestDataView =
    mojo::InterfaceRequestDataView<NetworkDiagnosticsClientInterfaceBase>;
using NetworkDiagnosticsClientAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<NetworkDiagnosticsClientInterfaceBase>;
using NetworkDiagnosticsClientAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<NetworkDiagnosticsClientInterfaceBase>;


}  // namespace mojom
}  // namespace chrome

namespace std {

}  // namespace std

namespace mojo {

}  // namespace mojo


namespace chrome {
namespace mojom {


}  // namespace mojom
}  // namespace chrome

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // CHROME_COMMON_NETWORK_DIAGNOSTICS_MOJOM_SHARED_H_