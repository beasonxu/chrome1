// services/viz/public/mojom/compositing/filter_operations.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_FILTER_OPERATIONS_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_FILTER_OPERATIONS_MOJOM_BLINK_H_

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

#include "services/viz/public/mojom/compositing/filter_operations.mojom-shared.h"
#include "services/viz/public/mojom/compositing/filter_operations.mojom-blink-forward.h"
#include "services/viz/public/mojom/compositing/filter_operation.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "third_party/blink/public/platform/web_common.h"




namespace viz {
namespace mojom {
namespace blink {








class BLINK_PLATFORM_EXPORT FilterOperations {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<FilterOperations, T>::value>;
  using DataView = FilterOperationsDataView;
  using Data_ = internal::FilterOperations_Data;

  template <typename... Args>
  static FilterOperationsPtr New(Args&&... args) {
    return FilterOperationsPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FilterOperationsPtr From(const U& u) {
    return mojo::TypeConverter<FilterOperationsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FilterOperations>::Convert(*this);
  }


  FilterOperations();

  explicit FilterOperations(
      WTF::Vector<::viz::mojom::blink::FilterOperationPtr> operations);

FilterOperations(const FilterOperations&) = delete;
FilterOperations& operator=(const FilterOperations&) = delete;

  ~FilterOperations();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FilterOperationsPtr>
  FilterOperationsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, FilterOperations::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, FilterOperations::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FilterOperations::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FilterOperations::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FilterOperations_UnserializedMessageContext<
            UserType, FilterOperations::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<FilterOperations::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return FilterOperations::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FilterOperations_UnserializedMessageContext<
            UserType, FilterOperations::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FilterOperations::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::Vector<::viz::mojom::blink::FilterOperationPtr> operations;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, FilterOperations::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, FilterOperations::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, FilterOperations::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, FilterOperations::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
FilterOperationsPtr FilterOperations::Clone() const {
  return New(
      mojo::Clone(operations)
  );
}

template <typename T, FilterOperations::EnableIfSame<T>*>
bool FilterOperations::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->operations, other_struct.operations))
    return false;
  return true;
}

template <typename T, FilterOperations::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.operations < rhs.operations)
    return true;
  if (rhs.operations < lhs.operations)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::viz::mojom::blink::FilterOperations::DataView,
                                         ::viz::mojom::blink::FilterOperationsPtr> {
  static bool IsNull(const ::viz::mojom::blink::FilterOperationsPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::FilterOperationsPtr* output) { output->reset(); }

  static const decltype(::viz::mojom::blink::FilterOperations::operations)& operations(
      const ::viz::mojom::blink::FilterOperationsPtr& input) {
    return input->operations;
  }

  static bool Read(::viz::mojom::blink::FilterOperations::DataView input, ::viz::mojom::blink::FilterOperationsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_FILTER_OPERATIONS_MOJOM_BLINK_H_