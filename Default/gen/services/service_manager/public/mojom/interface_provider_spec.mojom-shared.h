// services/service_manager/public/mojom/interface_provider_spec.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_SPEC_MOJOM_SHARED_H_
#define SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_SPEC_MOJOM_SHARED_H_

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

#include "services/service_manager/public/mojom/interface_provider_spec.mojom-shared-internal.h"



#include "base/component_export.h"




namespace service_manager {
namespace mojom {
class InterfaceSetDataView;

class CapabilitySetDataView;

class InterfaceProviderSpecDataView;



}  // namespace mojom
}  // namespace service_manager

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::service_manager::mojom::InterfaceSetDataView> {
  using Data = ::service_manager::mojom::internal::InterfaceSet_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::service_manager::mojom::CapabilitySetDataView> {
  using Data = ::service_manager::mojom::internal::CapabilitySet_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::service_manager::mojom::InterfaceProviderSpecDataView> {
  using Data = ::service_manager::mojom::internal::InterfaceProviderSpec_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace service_manager {
namespace mojom {


class InterfaceSetDataView {
 public:
  InterfaceSetDataView() = default;

  InterfaceSetDataView(
      internal::InterfaceSet_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetInterfacesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadInterfaces(UserType* output) {
    
    auto* pointer = data_->interfaces.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, message_);
  }
 private:
  internal::InterfaceSet_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class CapabilitySetDataView {
 public:
  CapabilitySetDataView() = default;

  CapabilitySetDataView(
      internal::CapabilitySet_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetCapabilitiesDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadCapabilities(UserType* output) {
    
    auto* pointer = data_->capabilities.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, message_);
  }
 private:
  internal::CapabilitySet_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class InterfaceProviderSpecDataView {
 public:
  InterfaceProviderSpecDataView() = default;

  InterfaceProviderSpecDataView(
      internal::InterfaceProviderSpec_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetProvidesDataView(
      mojo::MapDataView<mojo::StringDataView, InterfaceSetDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadProvides(UserType* output) {
    
    auto* pointer = data_->provides.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, ::service_manager::mojom::InterfaceSetDataView>>(
        pointer, output, message_);
  }
  inline void GetNeedsDataView(
      mojo::MapDataView<mojo::StringDataView, CapabilitySetDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadNeeds(UserType* output) {
    
    auto* pointer = data_->needs.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<mojo::StringDataView, ::service_manager::mojom::CapabilitySetDataView>>(
        pointer, output, message_);
  }
 private:
  internal::InterfaceProviderSpec_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace service_manager

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::InterfaceSetDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::InterfaceSetDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::service_manager::mojom::internal::InterfaceSet_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::interfaces(input)) in_interfaces = Traits::interfaces(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->interfaces)::BaseType>
        interfaces_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams interfaces_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_interfaces, interfaces_fragment, &interfaces_validate_params);
    fragment->interfaces.Set(
        interfaces_fragment.is_null() ? nullptr : interfaces_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->interfaces.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null interfaces in InterfaceSet struct");
  }

  static bool Deserialize(::service_manager::mojom::internal::InterfaceSet_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::InterfaceSetDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::CapabilitySetDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::CapabilitySetDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::service_manager::mojom::internal::CapabilitySet_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::capabilities(input)) in_capabilities = Traits::capabilities(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->capabilities)::BaseType>
        capabilities_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams capabilities_validate_params(
        0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::ArrayDataView<mojo::StringDataView>>(
        in_capabilities, capabilities_fragment, &capabilities_validate_params);
    fragment->capabilities.Set(
        capabilities_fragment.is_null() ? nullptr : capabilities_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->capabilities.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null capabilities in CapabilitySet struct");
  }

  static bool Deserialize(::service_manager::mojom::internal::CapabilitySet_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::CapabilitySetDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::service_manager::mojom::InterfaceProviderSpecDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::service_manager::mojom::InterfaceProviderSpecDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::service_manager::mojom::internal::InterfaceProviderSpec_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::provides(input)) in_provides = Traits::provides(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->provides)::BaseType>
        provides_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams provides_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, ::service_manager::mojom::InterfaceSetDataView>>(
        in_provides, provides_fragment, &provides_validate_params);
    fragment->provides.Set(
        provides_fragment.is_null() ? nullptr : provides_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->provides.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null provides in InterfaceProviderSpec struct");
    decltype(Traits::needs(input)) in_needs = Traits::needs(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->needs)::BaseType>
        needs_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams needs_validate_params(
        new mojo::internal::ContainerValidateParams(0, false, new mojo::internal::ContainerValidateParams(0, false, nullptr)), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<mojo::StringDataView, ::service_manager::mojom::CapabilitySetDataView>>(
        in_needs, needs_fragment, &needs_validate_params);
    fragment->needs.Set(
        needs_fragment.is_null() ? nullptr : needs_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->needs.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null needs in InterfaceProviderSpec struct");
  }

  static bool Deserialize(::service_manager::mojom::internal::InterfaceProviderSpec_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::service_manager::mojom::InterfaceProviderSpecDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace service_manager {
namespace mojom {

inline void InterfaceSetDataView::GetInterfacesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->interfaces.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, message_);
}


inline void CapabilitySetDataView::GetCapabilitiesDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->capabilities.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, message_);
}


inline void InterfaceProviderSpecDataView::GetProvidesDataView(
    mojo::MapDataView<mojo::StringDataView, InterfaceSetDataView>* output) {
  auto pointer = data_->provides.Get();
  *output = mojo::MapDataView<mojo::StringDataView, InterfaceSetDataView>(pointer, message_);
}
inline void InterfaceProviderSpecDataView::GetNeedsDataView(
    mojo::MapDataView<mojo::StringDataView, CapabilitySetDataView>* output) {
  auto pointer = data_->needs.Get();
  *output = mojo::MapDataView<mojo::StringDataView, CapabilitySetDataView>(pointer, message_);
}



}  // namespace mojom
}  // namespace service_manager

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // SERVICES_SERVICE_MANAGER_PUBLIC_MOJOM_INTERFACE_PROVIDER_SPEC_MOJOM_SHARED_H_