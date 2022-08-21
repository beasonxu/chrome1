// services/viz/public/mojom/compositing/region_capture_bounds.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_REGION_CAPTURE_BOUNDS_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_REGION_CAPTURE_BOUNDS_MOJOM_BLINK_H_

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

#include "services/viz/public/mojom/compositing/region_capture_bounds.mojom-shared.h"
#include "services/viz/public/mojom/compositing/region_capture_bounds.mojom-blink-forward.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-blink.h"
#include "mojo/public/mojom/base/token.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "services/viz/public/cpp/compositing/region_capture_bounds_mojom_traits.h"
#include "third_party/blink/public/platform/web_common.h"




namespace viz {
namespace mojom {
namespace blink {









class BLINK_PLATFORM_EXPORT CropIdBoundsPair {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<CropIdBoundsPair, T>::value>;
  using DataView = CropIdBoundsPairDataView;
  using Data_ = internal::CropIdBoundsPair_Data;

  template <typename... Args>
  static CropIdBoundsPairPtr New(Args&&... args) {
    return CropIdBoundsPairPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CropIdBoundsPairPtr From(const U& u) {
    return mojo::TypeConverter<CropIdBoundsPairPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CropIdBoundsPair>::Convert(*this);
  }


  CropIdBoundsPair();

  CropIdBoundsPair(
      const ::base::Token& crop_id,
      const ::gfx::Rect& bounds);


  ~CropIdBoundsPair();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CropIdBoundsPairPtr>
  CropIdBoundsPairPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, CropIdBoundsPair::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, CropIdBoundsPair::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CropIdBoundsPair::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CropIdBoundsPair::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CropIdBoundsPair_UnserializedMessageContext<
            UserType, CropIdBoundsPair::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<CropIdBoundsPair::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return CropIdBoundsPair::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CropIdBoundsPair_UnserializedMessageContext<
            UserType, CropIdBoundsPair::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CropIdBoundsPair::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::base::Token crop_id;
  
  ::gfx::Rect bounds;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, CropIdBoundsPair::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, CropIdBoundsPair::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, CropIdBoundsPair::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, CropIdBoundsPair::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class BLINK_PLATFORM_EXPORT RegionCaptureBounds {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<RegionCaptureBounds, T>::value>;
  using DataView = RegionCaptureBoundsDataView;
  using Data_ = internal::RegionCaptureBounds_Data;

  template <typename... Args>
  static RegionCaptureBoundsPtr New(Args&&... args) {
    return RegionCaptureBoundsPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RegionCaptureBoundsPtr From(const U& u) {
    return mojo::TypeConverter<RegionCaptureBoundsPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RegionCaptureBounds>::Convert(*this);
  }


  RegionCaptureBounds();

  explicit RegionCaptureBounds(
      WTF::Vector<CropIdBoundsPairPtr> bounds);

RegionCaptureBounds(const RegionCaptureBounds&) = delete;
RegionCaptureBounds& operator=(const RegionCaptureBounds&) = delete;

  ~RegionCaptureBounds();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RegionCaptureBoundsPtr>
  RegionCaptureBoundsPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, RegionCaptureBounds::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, RegionCaptureBounds::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RegionCaptureBounds::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RegionCaptureBounds::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RegionCaptureBounds_UnserializedMessageContext<
            UserType, RegionCaptureBounds::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<RegionCaptureBounds::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return RegionCaptureBounds::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RegionCaptureBounds_UnserializedMessageContext<
            UserType, RegionCaptureBounds::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RegionCaptureBounds::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::Vector<CropIdBoundsPairPtr> bounds;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, RegionCaptureBounds::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, RegionCaptureBounds::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, RegionCaptureBounds::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, RegionCaptureBounds::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
CropIdBoundsPairPtr CropIdBoundsPair::Clone() const {
  return New(
      mojo::Clone(crop_id),
      mojo::Clone(bounds)
  );
}

template <typename T, CropIdBoundsPair::EnableIfSame<T>*>
bool CropIdBoundsPair::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->crop_id, other_struct.crop_id))
    return false;
  if (!mojo::Equals(this->bounds, other_struct.bounds))
    return false;
  return true;
}

template <typename T, CropIdBoundsPair::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.crop_id < rhs.crop_id)
    return true;
  if (rhs.crop_id < lhs.crop_id)
    return false;
  if (lhs.bounds < rhs.bounds)
    return true;
  if (rhs.bounds < lhs.bounds)
    return false;
  return false;
}
template <typename StructPtrType>
RegionCaptureBoundsPtr RegionCaptureBounds::Clone() const {
  return New(
      mojo::Clone(bounds)
  );
}

template <typename T, RegionCaptureBounds::EnableIfSame<T>*>
bool RegionCaptureBounds::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->bounds, other_struct.bounds))
    return false;
  return true;
}

template <typename T, RegionCaptureBounds::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.bounds < rhs.bounds)
    return true;
  if (rhs.bounds < lhs.bounds)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::viz::mojom::blink::CropIdBoundsPair::DataView,
                                         ::viz::mojom::blink::CropIdBoundsPairPtr> {
  static bool IsNull(const ::viz::mojom::blink::CropIdBoundsPairPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::CropIdBoundsPairPtr* output) { output->reset(); }

  static const decltype(::viz::mojom::blink::CropIdBoundsPair::crop_id)& crop_id(
      const ::viz::mojom::blink::CropIdBoundsPairPtr& input) {
    return input->crop_id;
  }

  static const decltype(::viz::mojom::blink::CropIdBoundsPair::bounds)& bounds(
      const ::viz::mojom::blink::CropIdBoundsPairPtr& input) {
    return input->bounds;
  }

  static bool Read(::viz::mojom::blink::CropIdBoundsPair::DataView input, ::viz::mojom::blink::CropIdBoundsPairPtr* output);
};


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::viz::mojom::blink::RegionCaptureBounds::DataView,
                                         ::viz::mojom::blink::RegionCaptureBoundsPtr> {
  static bool IsNull(const ::viz::mojom::blink::RegionCaptureBoundsPtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::RegionCaptureBoundsPtr* output) { output->reset(); }

  static const decltype(::viz::mojom::blink::RegionCaptureBounds::bounds)& bounds(
      const ::viz::mojom::blink::RegionCaptureBoundsPtr& input) {
    return input->bounds;
  }

  static bool Read(::viz::mojom::blink::RegionCaptureBounds::DataView input, ::viz::mojom::blink::RegionCaptureBoundsPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_REGION_CAPTURE_BOUNDS_MOJOM_BLINK_H_