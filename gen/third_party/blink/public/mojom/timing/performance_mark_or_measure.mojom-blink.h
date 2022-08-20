// third_party/blink/public/mojom/timing/performance_mark_or_measure.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_TIMING_PERFORMANCE_MARK_OR_MEASURE_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_TIMING_PERFORMANCE_MARK_OR_MEASURE_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/timing/performance_mark_or_measure.mojom-shared.h"
#include "third_party/blink/public/mojom/timing/performance_mark_or_measure.mojom-blink-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_PerformanceMarkOrMeasure_EntryType_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::PerformanceMarkOrMeasure_EntryType& value) {
    using utype = std::underlying_type<::blink::mojom::PerformanceMarkOrMeasure_EntryType>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::PerformanceMarkOrMeasure_EntryType& left, const ::blink::mojom::PerformanceMarkOrMeasure_EntryType& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::PerformanceMarkOrMeasure_EntryType>
    : public GenericHashTraits<::blink::mojom::PerformanceMarkOrMeasure_EntryType> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::PerformanceMarkOrMeasure_EntryType EmptyValue() { return static_cast<::blink::mojom::PerformanceMarkOrMeasure_EntryType>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::PerformanceMarkOrMeasure_EntryType& slot, bool) {
    slot = static_cast<::blink::mojom::PerformanceMarkOrMeasure_EntryType>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::PerformanceMarkOrMeasure_EntryType& value) {
    return value == static_cast<::blink::mojom::PerformanceMarkOrMeasure_EntryType>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {








class PLATFORM_EXPORT PerformanceMarkOrMeasure {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<PerformanceMarkOrMeasure, T>::value>;
  using DataView = PerformanceMarkOrMeasureDataView;
  using Data_ = internal::PerformanceMarkOrMeasure_Data;
  using EntryType = PerformanceMarkOrMeasure_EntryType;

  template <typename... Args>
  static PerformanceMarkOrMeasurePtr New(Args&&... args) {
    return PerformanceMarkOrMeasurePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PerformanceMarkOrMeasurePtr From(const U& u) {
    return mojo::TypeConverter<PerformanceMarkOrMeasurePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PerformanceMarkOrMeasure>::Convert(*this);
  }


  PerformanceMarkOrMeasure();

  PerformanceMarkOrMeasure(
      const WTF::String& name,
      PerformanceMarkOrMeasure::EntryType entry_type,
      double start_time,
      double duration,
      absl::optional<::mojo_base::BigBuffer> detail);

PerformanceMarkOrMeasure(const PerformanceMarkOrMeasure&) = delete;
PerformanceMarkOrMeasure& operator=(const PerformanceMarkOrMeasure&) = delete;

  ~PerformanceMarkOrMeasure();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PerformanceMarkOrMeasurePtr>
  PerformanceMarkOrMeasurePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, PerformanceMarkOrMeasure::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, PerformanceMarkOrMeasure::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PerformanceMarkOrMeasure::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PerformanceMarkOrMeasure_UnserializedMessageContext<
            UserType, PerformanceMarkOrMeasure::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<PerformanceMarkOrMeasure::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return PerformanceMarkOrMeasure::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PerformanceMarkOrMeasure_UnserializedMessageContext<
            UserType, PerformanceMarkOrMeasure::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PerformanceMarkOrMeasure::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::String name;
  
  PerformanceMarkOrMeasure::EntryType entry_type;
  
  double start_time;
  
  double duration;
  
  absl::optional<::mojo_base::BigBuffer> detail;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, PerformanceMarkOrMeasure::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, PerformanceMarkOrMeasure::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, PerformanceMarkOrMeasure::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, PerformanceMarkOrMeasure::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
PerformanceMarkOrMeasurePtr PerformanceMarkOrMeasure::Clone() const {
  return New(
      mojo::Clone(name),
      mojo::Clone(entry_type),
      mojo::Clone(start_time),
      mojo::Clone(duration),
      mojo::Clone(detail)
  );
}

template <typename T, PerformanceMarkOrMeasure::EnableIfSame<T>*>
bool PerformanceMarkOrMeasure::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->entry_type, other_struct.entry_type))
    return false;
  if (!mojo::Equals(this->start_time, other_struct.start_time))
    return false;
  if (!mojo::Equals(this->duration, other_struct.duration))
    return false;
  if (!mojo::Equals(this->detail, other_struct.detail))
    return false;
  return true;
}

template <typename T, PerformanceMarkOrMeasure::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.name < rhs.name)
    return true;
  if (rhs.name < lhs.name)
    return false;
  if (lhs.entry_type < rhs.entry_type)
    return true;
  if (rhs.entry_type < lhs.entry_type)
    return false;
  if (lhs.start_time < rhs.start_time)
    return true;
  if (rhs.start_time < lhs.start_time)
    return false;
  if (lhs.duration < rhs.duration)
    return true;
  if (rhs.duration < lhs.duration)
    return false;
  if (lhs.detail < rhs.detail)
    return true;
  if (rhs.detail < lhs.detail)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::PerformanceMarkOrMeasure::DataView,
                                         ::blink::mojom::blink::PerformanceMarkOrMeasurePtr> {
  static bool IsNull(const ::blink::mojom::blink::PerformanceMarkOrMeasurePtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::PerformanceMarkOrMeasurePtr* output) { output->reset(); }

  static const decltype(::blink::mojom::blink::PerformanceMarkOrMeasure::name)& name(
      const ::blink::mojom::blink::PerformanceMarkOrMeasurePtr& input) {
    return input->name;
  }

  static decltype(::blink::mojom::blink::PerformanceMarkOrMeasure::entry_type) entry_type(
      const ::blink::mojom::blink::PerformanceMarkOrMeasurePtr& input) {
    return input->entry_type;
  }

  static decltype(::blink::mojom::blink::PerformanceMarkOrMeasure::start_time) start_time(
      const ::blink::mojom::blink::PerformanceMarkOrMeasurePtr& input) {
    return input->start_time;
  }

  static decltype(::blink::mojom::blink::PerformanceMarkOrMeasure::duration) duration(
      const ::blink::mojom::blink::PerformanceMarkOrMeasurePtr& input) {
    return input->duration;
  }

  static  decltype(::blink::mojom::blink::PerformanceMarkOrMeasure::detail)& detail(
       ::blink::mojom::blink::PerformanceMarkOrMeasurePtr& input) {
    return input->detail;
  }

  static bool Read(::blink::mojom::blink::PerformanceMarkOrMeasure::DataView input, ::blink::mojom::blink::PerformanceMarkOrMeasurePtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_TIMING_PERFORMANCE_MARK_OR_MEASURE_MOJOM_BLINK_H_