// ui/gfx/mojom/linear_gradient.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_GFX_MOJOM_LINEAR_GRADIENT_MOJOM_H_
#define UI_GFX_MOJOM_LINEAR_GRADIENT_MOJOM_H_

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

#include "ui/gfx/mojom/linear_gradient.mojom-shared.h"
#include "ui/gfx/mojom/linear_gradient.mojom-forward.h"
#include <string>
#include <vector>




#include "ui/gfx/mojom/linear_gradient_mojom_traits.h"




namespace gfx {
namespace mojom {





class  Step {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<Step, T>::value>;
  using DataView = StepDataView;
  using Data_ = internal::Step_Data;

  template <typename... Args>
  static StepPtr New(Args&&... args) {
    return StepPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static StepPtr From(const U& u) {
    return mojo::TypeConverter<StepPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, Step>::Convert(*this);
  }


  Step();

  Step(
      float fraction,
      uint8_t alpha);


  ~Step();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = StepPtr>
  StepPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, Step::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, Step::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        Step::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        Step::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::Step_UnserializedMessageContext<
            UserType, Step::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<Step::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return Step::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::Step_UnserializedMessageContext<
            UserType, Step::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<Step::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  float fraction;
  
  uint8_t alpha;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, Step::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, Step::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, Step::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, Step::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}









class  LinearGradient {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<LinearGradient, T>::value>;
  using DataView = LinearGradientDataView;
  using Data_ = internal::LinearGradient_Data;

  template <typename... Args>
  static LinearGradientPtr New(Args&&... args) {
    return LinearGradientPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static LinearGradientPtr From(const U& u) {
    return mojo::TypeConverter<LinearGradientPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, LinearGradient>::Convert(*this);
  }


  LinearGradient();

  LinearGradient(
      int16_t angle,
      uint8_t step_count,
      std::vector<StepPtr> steps);

LinearGradient(const LinearGradient&) = delete;
LinearGradient& operator=(const LinearGradient&) = delete;

  ~LinearGradient();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = LinearGradientPtr>
  LinearGradientPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, LinearGradient::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, LinearGradient::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        LinearGradient::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        LinearGradient::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::LinearGradient_UnserializedMessageContext<
            UserType, LinearGradient::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<LinearGradient::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return LinearGradient::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::LinearGradient_UnserializedMessageContext<
            UserType, LinearGradient::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<LinearGradient::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  int16_t angle;
  
  uint8_t step_count;
  
  std::vector<StepPtr> steps;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, LinearGradient::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, LinearGradient::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, LinearGradient::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, LinearGradient::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
StepPtr Step::Clone() const {
  return New(
      mojo::Clone(fraction),
      mojo::Clone(alpha)
  );
}

template <typename T, Step::EnableIfSame<T>*>
bool Step::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->fraction, other_struct.fraction))
    return false;
  if (!mojo::Equals(this->alpha, other_struct.alpha))
    return false;
  return true;
}

template <typename T, Step::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.fraction < rhs.fraction)
    return true;
  if (rhs.fraction < lhs.fraction)
    return false;
  if (lhs.alpha < rhs.alpha)
    return true;
  if (rhs.alpha < lhs.alpha)
    return false;
  return false;
}
template <typename StructPtrType>
LinearGradientPtr LinearGradient::Clone() const {
  return New(
      mojo::Clone(angle),
      mojo::Clone(step_count),
      mojo::Clone(steps)
  );
}

template <typename T, LinearGradient::EnableIfSame<T>*>
bool LinearGradient::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->angle, other_struct.angle))
    return false;
  if (!mojo::Equals(this->step_count, other_struct.step_count))
    return false;
  if (!mojo::Equals(this->steps, other_struct.steps))
    return false;
  return true;
}

template <typename T, LinearGradient::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.angle < rhs.angle)
    return true;
  if (rhs.angle < lhs.angle)
    return false;
  if (lhs.step_count < rhs.step_count)
    return true;
  if (rhs.step_count < lhs.step_count)
    return false;
  if (lhs.steps < rhs.steps)
    return true;
  if (rhs.steps < lhs.steps)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace gfx

namespace mojo {


template <>
struct  StructTraits<::gfx::mojom::Step::DataView,
                                         ::gfx::mojom::StepPtr> {
  static bool IsNull(const ::gfx::mojom::StepPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::StepPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::Step::fraction) fraction(
      const ::gfx::mojom::StepPtr& input) {
    return input->fraction;
  }

  static decltype(::gfx::mojom::Step::alpha) alpha(
      const ::gfx::mojom::StepPtr& input) {
    return input->alpha;
  }

  static bool Read(::gfx::mojom::Step::DataView input, ::gfx::mojom::StepPtr* output);
};


template <>
struct  StructTraits<::gfx::mojom::LinearGradient::DataView,
                                         ::gfx::mojom::LinearGradientPtr> {
  static bool IsNull(const ::gfx::mojom::LinearGradientPtr& input) { return !input; }
  static void SetToNull(::gfx::mojom::LinearGradientPtr* output) { output->reset(); }

  static decltype(::gfx::mojom::LinearGradient::angle) angle(
      const ::gfx::mojom::LinearGradientPtr& input) {
    return input->angle;
  }

  static decltype(::gfx::mojom::LinearGradient::step_count) step_count(
      const ::gfx::mojom::LinearGradientPtr& input) {
    return input->step_count;
  }

  static const decltype(::gfx::mojom::LinearGradient::steps)& steps(
      const ::gfx::mojom::LinearGradientPtr& input) {
    return input->steps;
  }

  static bool Read(::gfx::mojom::LinearGradient::DataView input, ::gfx::mojom::LinearGradientPtr* output);
};

}  // namespace mojo

#endif  // UI_GFX_MOJOM_LINEAR_GRADIENT_MOJOM_H_