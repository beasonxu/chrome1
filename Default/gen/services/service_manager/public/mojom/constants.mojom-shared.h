// services/service_manager/public/mojom/constants.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_SHARED_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_SHARED_H_

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

#include "services/service_manager/public/mojom/constants.mojom-shared-internal.h"



#include "base/component_export.h"




namespace service_manager {
namespace mojom {
class Constants_UnusedStruct_InternalDataView;



}  // namespace mojom
}  // namespace service_manager

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::service_manager::mojom::Constants_UnusedStruct_InternalDataView> {
  using Data = ::service_manager::mojom::internal::Constants_UnusedStruct_Internal_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace service_manager {
namespace mojom {


class Constants_UnusedStruct_InternalDataView {
 public:
  Constants_UnusedStruct_InternalDataView() = default;

  Constants_UnusedStruct_InternalDataView(
      internal::Constants_UnusedStruct_Internal_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Constants_UnusedStruct_Internal_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace service_manager

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::Constants_UnusedStruct_InternalDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::Constants_UnusedStruct_InternalDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::service_manager::mojom::internal::Constants_UnusedStruct_Internal_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
  }

  static bool Deserialize(::service_manager::mojom::internal::Constants_UnusedStruct_Internal_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::Constants_UnusedStruct_InternalDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace service_manager {
namespace mojom {




}  // namespace mojom
}  // namespace service_manager

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_CONSTANTS_MOJOM_SHARED_H_