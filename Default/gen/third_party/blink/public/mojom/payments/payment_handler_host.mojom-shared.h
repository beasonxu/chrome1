// third_party/blink/public/mojom/payments/payment_handler_host.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_SHARED_H_

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

#include "third_party/blink/public/mojom/payments/payment_handler_host.mojom-shared-internal.h"
#include "components/payments/mojom/payment_request_data.mojom-shared.h"
#include "third_party/blink/public/mojom/payments/payment_request.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "base/component_export.h"




namespace payments {
namespace mojom {
class PaymentHandlerMethodDataDataView;

class PaymentHandlerModifierDataView;

class PaymentRequestDetailsUpdateDataView;



}  // namespace mojom
}  // namespace payments

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::payments::mojom::PaymentHandlerMethodDataDataView> {
  using Data = ::payments::mojom::internal::PaymentHandlerMethodData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentHandlerModifierDataView> {
  using Data = ::payments::mojom::internal::PaymentHandlerModifier_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::payments::mojom::PaymentRequestDetailsUpdateDataView> {
  using Data = ::payments::mojom::internal::PaymentRequestDetailsUpdate_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace payments {
namespace mojom {
// Interface base classes. They are used for type safety check.
class PaymentHandlerHostInterfaceBase {};

using PaymentHandlerHostPtrDataView =
    mojo::InterfacePtrDataView<PaymentHandlerHostInterfaceBase>;
using PaymentHandlerHostRequestDataView =
    mojo::InterfaceRequestDataView<PaymentHandlerHostInterfaceBase>;
using PaymentHandlerHostAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<PaymentHandlerHostInterfaceBase>;
using PaymentHandlerHostAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<PaymentHandlerHostInterfaceBase>;


class PaymentHandlerMethodDataDataView {
 public:
  PaymentHandlerMethodDataDataView() = default;

  PaymentHandlerMethodDataDataView(
      internal::PaymentHandlerMethodData_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetMethodNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMethodName(UserType* output) {
    
    auto* pointer = data_->method_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetStringifiedDataDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadStringifiedData(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        mojo::StringDataView, UserType>(),
    "Attempting to read the optional `stringified_data` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadStringifiedData` instead "
    "of `ReadStringifiedData if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->stringified_data.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::PaymentHandlerMethodData_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class PaymentHandlerModifierDataView {
 public:
  PaymentHandlerModifierDataView() = default;

  PaymentHandlerModifierDataView(
      internal::PaymentHandlerModifier_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTotalDataView(
      ::payments::mojom::PaymentCurrencyAmountDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadTotal(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::payments::mojom::PaymentCurrencyAmountDataView, UserType>(),
    "Attempting to read the optional `total` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadTotal` instead "
    "of `ReadTotal if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->total.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        pointer, output, message_);
  }
  inline void GetMethodDataDataView(
      PaymentHandlerMethodDataDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMethodData(UserType* output) {
    
    auto* pointer = data_->method_data.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentHandlerMethodDataDataView>(
        pointer, output, message_);
  }
 private:
  internal::PaymentHandlerModifier_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class PaymentRequestDetailsUpdateDataView {
 public:
  PaymentRequestDetailsUpdateDataView() = default;

  PaymentRequestDetailsUpdateDataView(
      internal::PaymentRequestDetailsUpdate_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTotalDataView(
      ::payments::mojom::PaymentCurrencyAmountDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadTotal(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::payments::mojom::PaymentCurrencyAmountDataView, UserType>(),
    "Attempting to read the optional `total` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadTotal` instead "
    "of `ReadTotal if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->total.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        pointer, output, message_);
  }
  inline void GetShippingOptionsDataView(
      mojo::ArrayDataView<::payments::mojom::PaymentShippingOptionDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadShippingOptions(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        mojo::ArrayDataView<::payments::mojom::PaymentShippingOptionDataView>, UserType>(),
    "Attempting to read the optional `shipping_options` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadShippingOptions` instead "
    "of `ReadShippingOptions if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->shipping_options.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentShippingOptionDataView>>(
        pointer, output, message_);
  }
  inline void GetModifiersDataView(
      mojo::ArrayDataView<PaymentHandlerModifierDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadModifiers(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        mojo::ArrayDataView<::payments::mojom::PaymentHandlerModifierDataView>, UserType>(),
    "Attempting to read the optional `modifiers` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadModifiers` instead "
    "of `ReadModifiers if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->modifiers.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentHandlerModifierDataView>>(
        pointer, output, message_);
  }
  inline void GetErrorDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadError(UserType* output) {
    
    auto* pointer = data_->error.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetStringifiedPaymentMethodErrorsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadStringifiedPaymentMethodErrors(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        mojo::StringDataView, UserType>(),
    "Attempting to read the optional `stringified_payment_method_errors` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadStringifiedPaymentMethodErrors` instead "
    "of `ReadStringifiedPaymentMethodErrors if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->stringified_payment_method_errors.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetShippingAddressErrorsDataView(
      ::payments::mojom::AddressErrorsDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadShippingAddressErrors(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::payments::mojom::AddressErrorsDataView, UserType>(),
    "Attempting to read the optional `shipping_address_errors` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadShippingAddressErrors` instead "
    "of `ReadShippingAddressErrors if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->shipping_address_errors.Get();
    return mojo::internal::Deserialize<::payments::mojom::AddressErrorsDataView>(
        pointer, output, message_);
  }
 private:
  internal::PaymentRequestDetailsUpdate_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace payments

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentHandlerMethodDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentHandlerMethodDataDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::payments::mojom::internal::PaymentHandlerMethodData_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::method_name(input)) in_method_name = Traits::method_name(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->method_name)::BaseType> method_name_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_method_name, method_name_fragment);
    fragment->method_name.Set(
        method_name_fragment.is_null() ? nullptr : method_name_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->method_name.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method_name in PaymentHandlerMethodData struct");
    decltype(Traits::stringified_data(input)) in_stringified_data = Traits::stringified_data(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->stringified_data)::BaseType> stringified_data_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_stringified_data, stringified_data_fragment);
    fragment->stringified_data.Set(
        stringified_data_fragment.is_null() ? nullptr : stringified_data_fragment.data());
  }

  static bool Deserialize(::payments::mojom::internal::PaymentHandlerMethodData_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentHandlerMethodDataDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentHandlerModifierDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentHandlerModifierDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::payments::mojom::internal::PaymentHandlerModifier_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::total(input)) in_total = Traits::total(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->total)::BaseType> total_fragment(
            fragment.message());
    mojo::internal::Serialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        in_total, total_fragment);
    fragment->total.Set(
        total_fragment.is_null() ? nullptr : total_fragment.data());
    decltype(Traits::method_data(input)) in_method_data = Traits::method_data(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->method_data)::BaseType> method_data_fragment(
            fragment.message());
    mojo::internal::Serialize<::payments::mojom::PaymentHandlerMethodDataDataView>(
        in_method_data, method_data_fragment);
    fragment->method_data.Set(
        method_data_fragment.is_null() ? nullptr : method_data_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->method_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null method_data in PaymentHandlerModifier struct");
  }

  static bool Deserialize(::payments::mojom::internal::PaymentHandlerModifier_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentHandlerModifierDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::payments::mojom::PaymentRequestDetailsUpdateDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::payments::mojom::PaymentRequestDetailsUpdateDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::payments::mojom::internal::PaymentRequestDetailsUpdate_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::total(input)) in_total = Traits::total(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->total)::BaseType> total_fragment(
            fragment.message());
    mojo::internal::Serialize<::payments::mojom::PaymentCurrencyAmountDataView>(
        in_total, total_fragment);
    fragment->total.Set(
        total_fragment.is_null() ? nullptr : total_fragment.data());
    decltype(Traits::shipping_options(input)) in_shipping_options = Traits::shipping_options(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->shipping_options)::BaseType>
        shipping_options_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams shipping_options_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentShippingOptionDataView>>(
        in_shipping_options, shipping_options_fragment, &shipping_options_validate_params);
    fragment->shipping_options.Set(
        shipping_options_fragment.is_null() ? nullptr : shipping_options_fragment.data());
    decltype(Traits::modifiers(input)) in_modifiers = Traits::modifiers(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->modifiers)::BaseType>
        modifiers_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams modifiers_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::payments::mojom::PaymentHandlerModifierDataView>>(
        in_modifiers, modifiers_fragment, &modifiers_validate_params);
    fragment->modifiers.Set(
        modifiers_fragment.is_null() ? nullptr : modifiers_fragment.data());
    decltype(Traits::error(input)) in_error = Traits::error(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->error)::BaseType> error_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_error, error_fragment);
    fragment->error.Set(
        error_fragment.is_null() ? nullptr : error_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->error.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null error in PaymentRequestDetailsUpdate struct");
    decltype(Traits::stringified_payment_method_errors(input)) in_stringified_payment_method_errors = Traits::stringified_payment_method_errors(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->stringified_payment_method_errors)::BaseType> stringified_payment_method_errors_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_stringified_payment_method_errors, stringified_payment_method_errors_fragment);
    fragment->stringified_payment_method_errors.Set(
        stringified_payment_method_errors_fragment.is_null() ? nullptr : stringified_payment_method_errors_fragment.data());
    decltype(Traits::shipping_address_errors(input)) in_shipping_address_errors = Traits::shipping_address_errors(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->shipping_address_errors)::BaseType> shipping_address_errors_fragment(
            fragment.message());
    mojo::internal::Serialize<::payments::mojom::AddressErrorsDataView>(
        in_shipping_address_errors, shipping_address_errors_fragment);
    fragment->shipping_address_errors.Set(
        shipping_address_errors_fragment.is_null() ? nullptr : shipping_address_errors_fragment.data());
  }

  static bool Deserialize(::payments::mojom::internal::PaymentRequestDetailsUpdate_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::payments::mojom::PaymentRequestDetailsUpdateDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace payments {
namespace mojom {

inline void PaymentHandlerMethodDataDataView::GetMethodNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method_name.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void PaymentHandlerMethodDataDataView::GetStringifiedDataDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_data.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void PaymentHandlerModifierDataView::GetTotalDataView(
    ::payments::mojom::PaymentCurrencyAmountDataView* output) {
  auto pointer = data_->total.Get();
  *output = ::payments::mojom::PaymentCurrencyAmountDataView(pointer, message_);
}
inline void PaymentHandlerModifierDataView::GetMethodDataDataView(
    PaymentHandlerMethodDataDataView* output) {
  auto pointer = data_->method_data.Get();
  *output = PaymentHandlerMethodDataDataView(pointer, message_);
}


inline void PaymentRequestDetailsUpdateDataView::GetTotalDataView(
    ::payments::mojom::PaymentCurrencyAmountDataView* output) {
  auto pointer = data_->total.Get();
  *output = ::payments::mojom::PaymentCurrencyAmountDataView(pointer, message_);
}
inline void PaymentRequestDetailsUpdateDataView::GetShippingOptionsDataView(
    mojo::ArrayDataView<::payments::mojom::PaymentShippingOptionDataView>* output) {
  auto pointer = data_->shipping_options.Get();
  *output = mojo::ArrayDataView<::payments::mojom::PaymentShippingOptionDataView>(pointer, message_);
}
inline void PaymentRequestDetailsUpdateDataView::GetModifiersDataView(
    mojo::ArrayDataView<PaymentHandlerModifierDataView>* output) {
  auto pointer = data_->modifiers.Get();
  *output = mojo::ArrayDataView<PaymentHandlerModifierDataView>(pointer, message_);
}
inline void PaymentRequestDetailsUpdateDataView::GetErrorDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void PaymentRequestDetailsUpdateDataView::GetStringifiedPaymentMethodErrorsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_payment_method_errors.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void PaymentRequestDetailsUpdateDataView::GetShippingAddressErrorsDataView(
    ::payments::mojom::AddressErrorsDataView* output) {
  auto pointer = data_->shipping_address_errors.Get();
  *output = ::payments::mojom::AddressErrorsDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace payments

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_HANDLER_HOST_MOJOM_SHARED_H_