// components/digital_goods/mojom/digital_goods.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_DIGITAL_GOODS_MOJOM_DIGITAL_GOODS_MOJOM_BLINK_H_
#define COMPONENTS_DIGITAL_GOODS_MOJOM_DIGITAL_GOODS_MOJOM_BLINK_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "components/digital_goods/mojom/digital_goods.mojom-shared.h"
#include "components/digital_goods/mojom/digital_goods.mojom-blink-forward.h"
#include "url/mojom/url.mojom-blink.h"
#include "components/payments/mojom/payment_request_data.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct payments_mojom_internal_BillingResponseCode_DataHashFn {
  static unsigned GetHash(const ::payments::mojom::BillingResponseCode& value) {
    using utype = std::underlying_type<::payments::mojom::BillingResponseCode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::payments::mojom::BillingResponseCode& left, const ::payments::mojom::BillingResponseCode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::payments::mojom::BillingResponseCode>
    : public GenericHashTraits<::payments::mojom::BillingResponseCode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::payments::mojom::BillingResponseCode EmptyValue() { return static_cast<::payments::mojom::BillingResponseCode>(-1000000); }
  static void ConstructDeletedValue(::payments::mojom::BillingResponseCode& slot, bool) {
    slot = static_cast<::payments::mojom::BillingResponseCode>(-1000001);
  }
  static bool IsDeletedValue(const ::payments::mojom::BillingResponseCode& value) {
    return value == static_cast<::payments::mojom::BillingResponseCode>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct payments_mojom_internal_ItemType_DataHashFn {
  static unsigned GetHash(const ::payments::mojom::ItemType& value) {
    using utype = std::underlying_type<::payments::mojom::ItemType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::payments::mojom::ItemType& left, const ::payments::mojom::ItemType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::payments::mojom::ItemType>
    : public GenericHashTraits<::payments::mojom::ItemType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::payments::mojom::ItemType EmptyValue() { return static_cast<::payments::mojom::ItemType>(-1000000); }
  static void ConstructDeletedValue(::payments::mojom::ItemType& slot, bool) {
    slot = static_cast<::payments::mojom::ItemType>(-1000001);
  }
  static bool IsDeletedValue(const ::payments::mojom::ItemType& value) {
    return value == static_cast<::payments::mojom::ItemType>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct payments_mojom_internal_CreateDigitalGoodsResponseCode_DataHashFn {
  static unsigned GetHash(const ::payments::mojom::CreateDigitalGoodsResponseCode& value) {
    using utype = std::underlying_type<::payments::mojom::CreateDigitalGoodsResponseCode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::payments::mojom::CreateDigitalGoodsResponseCode& left, const ::payments::mojom::CreateDigitalGoodsResponseCode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::payments::mojom::CreateDigitalGoodsResponseCode>
    : public GenericHashTraits<::payments::mojom::CreateDigitalGoodsResponseCode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::payments::mojom::CreateDigitalGoodsResponseCode EmptyValue() { return static_cast<::payments::mojom::CreateDigitalGoodsResponseCode>(-1000000); }
  static void ConstructDeletedValue(::payments::mojom::CreateDigitalGoodsResponseCode& slot, bool) {
    slot = static_cast<::payments::mojom::CreateDigitalGoodsResponseCode>(-1000001);
  }
  static bool IsDeletedValue(const ::payments::mojom::CreateDigitalGoodsResponseCode& value) {
    return value == static_cast<::payments::mojom::CreateDigitalGoodsResponseCode>(-1000001);
  }
};
}  // namespace WTF


namespace payments {
namespace mojom {
namespace blink {






class BLINK_PLATFORM_EXPORT PurchaseReference {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<PurchaseReference, T>::value>;
  using DataView = PurchaseReferenceDataView;
  using Data_ = internal::PurchaseReference_Data;

  template <typename... Args>
  static PurchaseReferencePtr New(Args&&... args) {
    return PurchaseReferencePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PurchaseReferencePtr From(const U& u) {
    return mojo::TypeConverter<PurchaseReferencePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PurchaseReference>::Convert(*this);
  }


  PurchaseReference();

  PurchaseReference(
      const WTF::String& item_id,
      const WTF::String& purchase_token);


  ~PurchaseReference();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PurchaseReferencePtr>
  PurchaseReferencePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, PurchaseReference::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, PurchaseReference::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PurchaseReference::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PurchaseReference::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PurchaseReference_UnserializedMessageContext<
            UserType, PurchaseReference::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<PurchaseReference::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PurchaseReference::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PurchaseReference_UnserializedMessageContext<
            UserType, PurchaseReference::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PurchaseReference::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::String item_id;
  
  WTF::String purchase_token;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, PurchaseReference::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, PurchaseReference::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, PurchaseReference::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, PurchaseReference::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}







class BLINK_PLATFORM_EXPORT ItemDetails {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ItemDetails, T>::value>;
  using DataView = ItemDetailsDataView;
  using Data_ = internal::ItemDetails_Data;

  template <typename... Args>
  static ItemDetailsPtr New(Args&&... args) {
    return ItemDetailsPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ItemDetailsPtr From(const U& u) {
    return mojo::TypeConverter<ItemDetailsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ItemDetails>::Convert(*this);
  }


  ItemDetails();

  ItemDetails(
      const WTF::String& item_id,
      const WTF::String& title,
      const WTF::String& description,
      ::payments::mojom::blink::PaymentCurrencyAmountPtr price,
      const WTF::String& subscription_period,
      const WTF::String& free_trial_period,
      ::payments::mojom::blink::PaymentCurrencyAmountPtr introductory_price,
      const WTF::String& introductory_price_period);

  ItemDetails(
      const WTF::String& item_id,
      const WTF::String& title,
      const WTF::String& description,
      ::payments::mojom::blink::PaymentCurrencyAmountPtr price,
      const WTF::String& subscription_period,
      const WTF::String& free_trial_period,
      ::payments::mojom::blink::PaymentCurrencyAmountPtr introductory_price,
      const WTF::String& introductory_price_period,
      uint32_t introductory_price_cycles,
      ItemType type,
      absl::optional<WTF::Vector<::blink::KURL>> icon_urls);

ItemDetails(const ItemDetails&) = delete;
ItemDetails& operator=(const ItemDetails&) = delete;

  ~ItemDetails();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ItemDetailsPtr>
  ItemDetailsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ItemDetails::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ItemDetails::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ItemDetails::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ItemDetails::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ItemDetails_UnserializedMessageContext<
            UserType, ItemDetails::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ItemDetails::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ItemDetails::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ItemDetails_UnserializedMessageContext<
            UserType, ItemDetails::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ItemDetails::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::String item_id;
  
  WTF::String title;
  
  WTF::String description;
  
  ::payments::mojom::blink::PaymentCurrencyAmountPtr price;
  
  WTF::String subscription_period;
  
  WTF::String free_trial_period;
  
  ::payments::mojom::blink::PaymentCurrencyAmountPtr introductory_price;
  
  WTF::String introductory_price_period;
  
  uint32_t introductory_price_cycles;
  
  ItemType type;
  
  absl::optional<WTF::Vector<::blink::KURL>> icon_urls;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ItemDetails::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ItemDetails::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ItemDetails::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ItemDetails::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}


template <typename StructPtrType>
ItemDetailsPtr ItemDetails::Clone() const {
  return New(
      mojo::Clone(item_id),
      mojo::Clone(title),
      mojo::Clone(description),
      mojo::Clone(price),
      mojo::Clone(subscription_period),
      mojo::Clone(free_trial_period),
      mojo::Clone(introductory_price),
      mojo::Clone(introductory_price_period),
      mojo::Clone(introductory_price_cycles),
      mojo::Clone(type),
      mojo::Clone(icon_urls)
  );
}

template <typename T, ItemDetails::EnableIfSame<T>*>
bool ItemDetails::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->item_id, other_struct.item_id))
    return false;
  if (!mojo::Equals(this->title, other_struct.title))
    return false;
  if (!mojo::Equals(this->description, other_struct.description))
    return false;
  if (!mojo::Equals(this->price, other_struct.price))
    return false;
  if (!mojo::Equals(this->subscription_period, other_struct.subscription_period))
    return false;
  if (!mojo::Equals(this->free_trial_period, other_struct.free_trial_period))
    return false;
  if (!mojo::Equals(this->introductory_price, other_struct.introductory_price))
    return false;
  if (!mojo::Equals(this->introductory_price_period, other_struct.introductory_price_period))
    return false;
  if (!mojo::Equals(this->introductory_price_cycles, other_struct.introductory_price_cycles))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->icon_urls, other_struct.icon_urls))
    return false;
  return true;
}

template <typename T, ItemDetails::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.item_id < rhs.item_id)
    return true;
  if (rhs.item_id < lhs.item_id)
    return false;
  if (lhs.title < rhs.title)
    return true;
  if (rhs.title < lhs.title)
    return false;
  if (lhs.description < rhs.description)
    return true;
  if (rhs.description < lhs.description)
    return false;
  if (lhs.price < rhs.price)
    return true;
  if (rhs.price < lhs.price)
    return false;
  if (lhs.subscription_period < rhs.subscription_period)
    return true;
  if (rhs.subscription_period < lhs.subscription_period)
    return false;
  if (lhs.free_trial_period < rhs.free_trial_period)
    return true;
  if (rhs.free_trial_period < lhs.free_trial_period)
    return false;
  if (lhs.introductory_price < rhs.introductory_price)
    return true;
  if (rhs.introductory_price < lhs.introductory_price)
    return false;
  if (lhs.introductory_price_period < rhs.introductory_price_period)
    return true;
  if (rhs.introductory_price_period < lhs.introductory_price_period)
    return false;
  if (lhs.introductory_price_cycles < rhs.introductory_price_cycles)
    return true;
  if (rhs.introductory_price_cycles < lhs.introductory_price_cycles)
    return false;
  if (lhs.type < rhs.type)
    return true;
  if (rhs.type < lhs.type)
    return false;
  if (lhs.icon_urls < rhs.icon_urls)
    return true;
  if (rhs.icon_urls < lhs.icon_urls)
    return false;
  return false;
}
template <typename StructPtrType>
PurchaseReferencePtr PurchaseReference::Clone() const {
  return New(
      mojo::Clone(item_id),
      mojo::Clone(purchase_token)
  );
}

template <typename T, PurchaseReference::EnableIfSame<T>*>
bool PurchaseReference::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->item_id, other_struct.item_id))
    return false;
  if (!mojo::Equals(this->purchase_token, other_struct.purchase_token))
    return false;
  return true;
}

template <typename T, PurchaseReference::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.item_id < rhs.item_id)
    return true;
  if (rhs.item_id < lhs.item_id)
    return false;
  if (lhs.purchase_token < rhs.purchase_token)
    return true;
  if (rhs.purchase_token < lhs.purchase_token)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace payments

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::payments::mojom::blink::ItemDetails::DataView,
                                         ::payments::mojom::blink::ItemDetailsPtr> {
  static bool IsNull(const ::payments::mojom::blink::ItemDetailsPtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::ItemDetailsPtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::ItemDetails::item_id)& item_id(
      const ::payments::mojom::blink::ItemDetailsPtr& input) {
    return input->item_id;
  }

  static const decltype(::payments::mojom::blink::ItemDetails::title)& title(
      const ::payments::mojom::blink::ItemDetailsPtr& input) {
    return input->title;
  }

  static const decltype(::payments::mojom::blink::ItemDetails::description)& description(
      const ::payments::mojom::blink::ItemDetailsPtr& input) {
    return input->description;
  }

  static const decltype(::payments::mojom::blink::ItemDetails::price)& price(
      const ::payments::mojom::blink::ItemDetailsPtr& input) {
    return input->price;
  }

  static const decltype(::payments::mojom::blink::ItemDetails::subscription_period)& subscription_period(
      const ::payments::mojom::blink::ItemDetailsPtr& input) {
    return input->subscription_period;
  }

  static const decltype(::payments::mojom::blink::ItemDetails::free_trial_period)& free_trial_period(
      const ::payments::mojom::blink::ItemDetailsPtr& input) {
    return input->free_trial_period;
  }

  static const decltype(::payments::mojom::blink::ItemDetails::introductory_price)& introductory_price(
      const ::payments::mojom::blink::ItemDetailsPtr& input) {
    return input->introductory_price;
  }

  static const decltype(::payments::mojom::blink::ItemDetails::introductory_price_period)& introductory_price_period(
      const ::payments::mojom::blink::ItemDetailsPtr& input) {
    return input->introductory_price_period;
  }

  static decltype(::payments::mojom::blink::ItemDetails::introductory_price_cycles) introductory_price_cycles(
      const ::payments::mojom::blink::ItemDetailsPtr& input) {
    return input->introductory_price_cycles;
  }

  static decltype(::payments::mojom::blink::ItemDetails::type) type(
      const ::payments::mojom::blink::ItemDetailsPtr& input) {
    return input->type;
  }

  static const decltype(::payments::mojom::blink::ItemDetails::icon_urls)& icon_urls(
      const ::payments::mojom::blink::ItemDetailsPtr& input) {
    return input->icon_urls;
  }

  static bool Read(::payments::mojom::blink::ItemDetails::DataView input, ::payments::mojom::blink::ItemDetailsPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::payments::mojom::blink::PurchaseReference::DataView,
                                         ::payments::mojom::blink::PurchaseReferencePtr> {
  static bool IsNull(const ::payments::mojom::blink::PurchaseReferencePtr& input) { return !input; }
  static void SetToNull(::payments::mojom::blink::PurchaseReferencePtr* output) { output->reset(); }

  static const decltype(::payments::mojom::blink::PurchaseReference::item_id)& item_id(
      const ::payments::mojom::blink::PurchaseReferencePtr& input) {
    return input->item_id;
  }

  static const decltype(::payments::mojom::blink::PurchaseReference::purchase_token)& purchase_token(
      const ::payments::mojom::blink::PurchaseReferencePtr& input) {
    return input->purchase_token;
  }

  static bool Read(::payments::mojom::blink::PurchaseReference::DataView input, ::payments::mojom::blink::PurchaseReferencePtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_DIGITAL_GOODS_MOJOM_DIGITAL_GOODS_MOJOM_BLINK_H_