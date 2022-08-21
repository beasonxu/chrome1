// services/viz/public/mojom/compositing/surface_range.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_SURFACE_RANGE_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_SURFACE_RANGE_MOJOM_H_

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

#include "services/viz/public/mojom/compositing/surface_range.mojom-shared.h"
#include "services/viz/public/mojom/compositing/surface_range.mojom-forward.h"
#include "services/viz/public/mojom/compositing/surface_id.mojom.h"
#include <string>
#include <vector>




#include "services/viz/public/cpp/compositing/surface_range_mojom_traits.h"




namespace viz {
namespace mojom {








class  SurfaceRange {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<SurfaceRange, T>::value>;
  using DataView = SurfaceRangeDataView;
  using Data_ = internal::SurfaceRange_Data;

  template <typename... Args>
  static SurfaceRangePtr New(Args&&... args) {
    return SurfaceRangePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SurfaceRangePtr From(const U& u) {
    return mojo::TypeConverter<SurfaceRangePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SurfaceRange>::Convert(*this);
  }


  SurfaceRange();

  SurfaceRange(
      const absl::optional<::viz::SurfaceId>& start,
      const ::viz::SurfaceId& end);


  ~SurfaceRange();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SurfaceRangePtr>
  SurfaceRangePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, SurfaceRange::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, SurfaceRange::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SurfaceRange::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SurfaceRange::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SurfaceRange_UnserializedMessageContext<
            UserType, SurfaceRange::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<SurfaceRange::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SurfaceRange::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SurfaceRange_UnserializedMessageContext<
            UserType, SurfaceRange::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SurfaceRange::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  absl::optional<::viz::SurfaceId> start;
  
  ::viz::SurfaceId end;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, SurfaceRange::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, SurfaceRange::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, SurfaceRange::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, SurfaceRange::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
SurfaceRangePtr SurfaceRange::Clone() const {
  return New(
      mojo::Clone(start),
      mojo::Clone(end)
  );
}

template <typename T, SurfaceRange::EnableIfSame<T>*>
bool SurfaceRange::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->start, other_struct.start))
    return false;
  if (!mojo::Equals(this->end, other_struct.end))
    return false;
  return true;
}

template <typename T, SurfaceRange::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.start < rhs.start)
    return true;
  if (rhs.start < lhs.start)
    return false;
  if (lhs.end < rhs.end)
    return true;
  if (rhs.end < lhs.end)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::SurfaceRange::DataView,
                                         ::viz::mojom::SurfaceRangePtr> {
  static bool IsNull(const ::viz::mojom::SurfaceRangePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::SurfaceRangePtr* output) { output->reset(); }

  static const decltype(::viz::mojom::SurfaceRange::start)& start(
      const ::viz::mojom::SurfaceRangePtr& input) {
    return input->start;
  }

  static const decltype(::viz::mojom::SurfaceRange::end)& end(
      const ::viz::mojom::SurfaceRangePtr& input) {
    return input->end;
  }

  static bool Read(::viz::mojom::SurfaceRange::DataView input, ::viz::mojom::SurfaceRangePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_SURFACE_RANGE_MOJOM_H_