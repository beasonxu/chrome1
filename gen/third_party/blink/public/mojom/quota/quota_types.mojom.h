// third_party/blink/public/mojom/quota/quota_types.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_H_

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

#include "third_party/blink/public/mojom/quota/quota_types.mojom-shared.h"
#include "third_party/blink/public/mojom/quota/quota_types.mojom-forward.h"
#include <string>
#include <vector>




#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {








class BLINK_COMMON_EXPORT UsageBreakdown {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<UsageBreakdown, T>::value>;
  using DataView = UsageBreakdownDataView;
  using Data_ = internal::UsageBreakdown_Data;

  template <typename... Args>
  static UsageBreakdownPtr New(Args&&... args) {
    return UsageBreakdownPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static UsageBreakdownPtr From(const U& u) {
    return mojo::TypeConverter<UsageBreakdownPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, UsageBreakdown>::Convert(*this);
  }


  UsageBreakdown();

  UsageBreakdown(
      int64_t fileSystem,
      int64_t webSql,
      int64_t indexedDatabase,
      int64_t serviceWorkerCache,
      int64_t serviceWorker,
      int64_t backgroundFetch);


  ~UsageBreakdown();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = UsageBreakdownPtr>
  UsageBreakdownPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, UsageBreakdown::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, UsageBreakdown::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        UsageBreakdown::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        UsageBreakdown::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::UsageBreakdown_UnserializedMessageContext<
            UserType, UsageBreakdown::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<UsageBreakdown::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return UsageBreakdown::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::UsageBreakdown_UnserializedMessageContext<
            UserType, UsageBreakdown::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<UsageBreakdown::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  int64_t fileSystem;
  
  int64_t webSql;
  
  int64_t indexedDatabase;
  
  int64_t serviceWorkerCache;
  
  int64_t serviceWorker;
  
  int64_t backgroundFetch;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, UsageBreakdown::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, UsageBreakdown::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, UsageBreakdown::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, UsageBreakdown::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
UsageBreakdownPtr UsageBreakdown::Clone() const {
  return New(
      mojo::Clone(fileSystem),
      mojo::Clone(webSql),
      mojo::Clone(indexedDatabase),
      mojo::Clone(serviceWorkerCache),
      mojo::Clone(serviceWorker),
      mojo::Clone(backgroundFetch)
  );
}

template <typename T, UsageBreakdown::EnableIfSame<T>*>
bool UsageBreakdown::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->fileSystem, other_struct.fileSystem))
    return false;
  if (!mojo::Equals(this->webSql, other_struct.webSql))
    return false;
  if (!mojo::Equals(this->indexedDatabase, other_struct.indexedDatabase))
    return false;
  if (!mojo::Equals(this->serviceWorkerCache, other_struct.serviceWorkerCache))
    return false;
  if (!mojo::Equals(this->serviceWorker, other_struct.serviceWorker))
    return false;
  if (!mojo::Equals(this->backgroundFetch, other_struct.backgroundFetch))
    return false;
  return true;
}

template <typename T, UsageBreakdown::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.fileSystem < rhs.fileSystem)
    return true;
  if (rhs.fileSystem < lhs.fileSystem)
    return false;
  if (lhs.webSql < rhs.webSql)
    return true;
  if (rhs.webSql < lhs.webSql)
    return false;
  if (lhs.indexedDatabase < rhs.indexedDatabase)
    return true;
  if (rhs.indexedDatabase < lhs.indexedDatabase)
    return false;
  if (lhs.serviceWorkerCache < rhs.serviceWorkerCache)
    return true;
  if (rhs.serviceWorkerCache < lhs.serviceWorkerCache)
    return false;
  if (lhs.serviceWorker < rhs.serviceWorker)
    return true;
  if (rhs.serviceWorker < lhs.serviceWorker)
    return false;
  if (lhs.backgroundFetch < rhs.backgroundFetch)
    return true;
  if (rhs.backgroundFetch < lhs.backgroundFetch)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::UsageBreakdown::DataView,
                                         ::blink::mojom::UsageBreakdownPtr> {
  static bool IsNull(const ::blink::mojom::UsageBreakdownPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::UsageBreakdownPtr* output) { output->reset(); }

  static decltype(::blink::mojom::UsageBreakdown::fileSystem) fileSystem(
      const ::blink::mojom::UsageBreakdownPtr& input) {
    return input->fileSystem;
  }

  static decltype(::blink::mojom::UsageBreakdown::webSql) webSql(
      const ::blink::mojom::UsageBreakdownPtr& input) {
    return input->webSql;
  }

  static decltype(::blink::mojom::UsageBreakdown::indexedDatabase) indexedDatabase(
      const ::blink::mojom::UsageBreakdownPtr& input) {
    return input->indexedDatabase;
  }

  static decltype(::blink::mojom::UsageBreakdown::serviceWorkerCache) serviceWorkerCache(
      const ::blink::mojom::UsageBreakdownPtr& input) {
    return input->serviceWorkerCache;
  }

  static decltype(::blink::mojom::UsageBreakdown::serviceWorker) serviceWorker(
      const ::blink::mojom::UsageBreakdownPtr& input) {
    return input->serviceWorker;
  }

  static decltype(::blink::mojom::UsageBreakdown::backgroundFetch) backgroundFetch(
      const ::blink::mojom::UsageBreakdownPtr& input) {
    return input->backgroundFetch;
  }

  static bool Read(::blink::mojom::UsageBreakdown::DataView input, ::blink::mojom::UsageBreakdownPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_QUOTA_QUOTA_TYPES_MOJOM_H_