// third_party/blink/public/mojom/service_worker/service_worker_registration_options.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_OPTIONS_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_OPTIONS_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/service_worker/service_worker_registration_options.mojom-shared.h"
#include "third_party/blink/public/mojom/service_worker/service_worker_registration_options.mojom-blink-forward.h"
#include "third_party/blink/public/mojom/script/script_type.mojom-blink-forward.h"
#include "url/mojom/url.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_ServiceWorkerUpdateViaCache_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ServiceWorkerUpdateViaCache& value) {
    using utype = std::underlying_type<::blink::mojom::ServiceWorkerUpdateViaCache>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ServiceWorkerUpdateViaCache& left, const ::blink::mojom::ServiceWorkerUpdateViaCache& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ServiceWorkerUpdateViaCache>
    : public GenericHashTraits<::blink::mojom::ServiceWorkerUpdateViaCache> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::ServiceWorkerUpdateViaCache EmptyValue() { return static_cast<::blink::mojom::ServiceWorkerUpdateViaCache>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::ServiceWorkerUpdateViaCache& slot, bool) {
    slot = static_cast<::blink::mojom::ServiceWorkerUpdateViaCache>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ServiceWorkerUpdateViaCache& value) {
    return value == static_cast<::blink::mojom::ServiceWorkerUpdateViaCache>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {








class PLATFORM_EXPORT ServiceWorkerRegistrationOptions {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ServiceWorkerRegistrationOptions, T>::value>;
  using DataView = ServiceWorkerRegistrationOptionsDataView;
  using Data_ = internal::ServiceWorkerRegistrationOptions_Data;

  template <typename... Args>
  static ServiceWorkerRegistrationOptionsPtr New(Args&&... args) {
    return ServiceWorkerRegistrationOptionsPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceWorkerRegistrationOptionsPtr From(const U& u) {
    return mojo::TypeConverter<ServiceWorkerRegistrationOptionsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceWorkerRegistrationOptions>::Convert(*this);
  }


  ServiceWorkerRegistrationOptions();

  ServiceWorkerRegistrationOptions(
      const ::blink::KURL& scope,
      ::blink::mojom::blink::ScriptType type,
      ServiceWorkerUpdateViaCache update_via_cache);


  ~ServiceWorkerRegistrationOptions();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceWorkerRegistrationOptionsPtr>
  ServiceWorkerRegistrationOptionsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ServiceWorkerRegistrationOptions::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ServiceWorkerRegistrationOptions::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceWorkerRegistrationOptions::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceWorkerRegistrationOptions::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceWorkerRegistrationOptions_UnserializedMessageContext<
            UserType, ServiceWorkerRegistrationOptions::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ServiceWorkerRegistrationOptions::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ServiceWorkerRegistrationOptions::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceWorkerRegistrationOptions_UnserializedMessageContext<
            UserType, ServiceWorkerRegistrationOptions::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceWorkerRegistrationOptions::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::blink::KURL scope;
  
  ::blink::mojom::blink::ScriptType type;
  
  ServiceWorkerUpdateViaCache update_via_cache;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ServiceWorkerRegistrationOptions::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ServiceWorkerRegistrationOptions::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ServiceWorkerRegistrationOptions::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ServiceWorkerRegistrationOptions::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
ServiceWorkerRegistrationOptionsPtr ServiceWorkerRegistrationOptions::Clone() const {
  return New(
      mojo::Clone(scope),
      mojo::Clone(type),
      mojo::Clone(update_via_cache)
  );
}

template <typename T, ServiceWorkerRegistrationOptions::EnableIfSame<T>*>
bool ServiceWorkerRegistrationOptions::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->scope, other_struct.scope))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->update_via_cache, other_struct.update_via_cache))
    return false;
  return true;
}

template <typename T, ServiceWorkerRegistrationOptions::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.scope < rhs.scope)
    return true;
  if (rhs.scope < lhs.scope)
    return false;
  if (lhs.type < rhs.type)
    return true;
  if (rhs.type < lhs.type)
    return false;
  if (lhs.update_via_cache < rhs.update_via_cache)
    return true;
  if (rhs.update_via_cache < lhs.update_via_cache)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ServiceWorkerRegistrationOptions::DataView,
                                         ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr> {
  static bool IsNull(const ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::ServiceWorkerRegistrationOptions::scope)& scope(
      const ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr& input) {
    return input->scope;
  }

  static decltype(::blink::mojom::blink::ServiceWorkerRegistrationOptions::type) type(
      const ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr& input) {
    return input->type;
  }

  static decltype(::blink::mojom::blink::ServiceWorkerRegistrationOptions::update_via_cache) update_via_cache(
      const ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr& input) {
    return input->update_via_cache;
  }

  static bool Read(::blink::mojom::blink::ServiceWorkerRegistrationOptions::DataView input, ::blink::mojom::blink::ServiceWorkerRegistrationOptionsPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_REGISTRATION_OPTIONS_MOJOM_BLINK_H_