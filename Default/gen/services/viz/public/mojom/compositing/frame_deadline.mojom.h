// services/viz/public/mojom/compositing/frame_deadline.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_FRAME_DEADLINE_MOJOM_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_FRAME_DEADLINE_MOJOM_H_

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

#include "services/viz/public/mojom/compositing/frame_deadline.mojom-shared.h"
#include "services/viz/public/mojom/compositing/frame_deadline.mojom-forward.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include <string>
#include <vector>




#include "services/viz/public/cpp/compositing/frame_deadline_mojom_traits.h"




namespace viz {
namespace mojom {








class  FrameDeadline {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<FrameDeadline, T>::value>;
  using DataView = FrameDeadlineDataView;
  using Data_ = internal::FrameDeadline_Data;

  template <typename... Args>
  static FrameDeadlinePtr New(Args&&... args) {
    return FrameDeadlinePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static FrameDeadlinePtr From(const U& u) {
    return mojo::TypeConverter<FrameDeadlinePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, FrameDeadline>::Convert(*this);
  }


  FrameDeadline();

  FrameDeadline(
      ::base::TimeTicks frame_start_time,
      uint32_t deadline_in_frames,
      ::base::TimeDelta frame_interval,
      bool use_default_lower_bound_deadline);


  ~FrameDeadline();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = FrameDeadlinePtr>
  FrameDeadlinePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, FrameDeadline::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, FrameDeadline::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        FrameDeadline::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        FrameDeadline::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::FrameDeadline_UnserializedMessageContext<
            UserType, FrameDeadline::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<FrameDeadline::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return FrameDeadline::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::FrameDeadline_UnserializedMessageContext<
            UserType, FrameDeadline::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<FrameDeadline::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::base::TimeTicks frame_start_time;
  
  uint32_t deadline_in_frames;
  
  ::base::TimeDelta frame_interval;
  
  bool use_default_lower_bound_deadline;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, FrameDeadline::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, FrameDeadline::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, FrameDeadline::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, FrameDeadline::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
FrameDeadlinePtr FrameDeadline::Clone() const {
  return New(
      mojo::Clone(frame_start_time),
      mojo::Clone(deadline_in_frames),
      mojo::Clone(frame_interval),
      mojo::Clone(use_default_lower_bound_deadline)
  );
}

template <typename T, FrameDeadline::EnableIfSame<T>*>
bool FrameDeadline::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->frame_start_time, other_struct.frame_start_time))
    return false;
  if (!mojo::Equals(this->deadline_in_frames, other_struct.deadline_in_frames))
    return false;
  if (!mojo::Equals(this->frame_interval, other_struct.frame_interval))
    return false;
  if (!mojo::Equals(this->use_default_lower_bound_deadline, other_struct.use_default_lower_bound_deadline))
    return false;
  return true;
}

template <typename T, FrameDeadline::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.frame_start_time < rhs.frame_start_time)
    return true;
  if (rhs.frame_start_time < lhs.frame_start_time)
    return false;
  if (lhs.deadline_in_frames < rhs.deadline_in_frames)
    return true;
  if (rhs.deadline_in_frames < lhs.deadline_in_frames)
    return false;
  if (lhs.frame_interval < rhs.frame_interval)
    return true;
  if (rhs.frame_interval < lhs.frame_interval)
    return false;
  if (lhs.use_default_lower_bound_deadline < rhs.use_default_lower_bound_deadline)
    return true;
  if (rhs.use_default_lower_bound_deadline < lhs.use_default_lower_bound_deadline)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct  StructTraits<::viz::mojom::FrameDeadline::DataView,
                                         ::viz::mojom::FrameDeadlinePtr> {
  static bool IsNull(const ::viz::mojom::FrameDeadlinePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::FrameDeadlinePtr* output) { output->reset(); }

  static const decltype(::viz::mojom::FrameDeadline::frame_start_time)& frame_start_time(
      const ::viz::mojom::FrameDeadlinePtr& input) {
    return input->frame_start_time;
  }

  static decltype(::viz::mojom::FrameDeadline::deadline_in_frames) deadline_in_frames(
      const ::viz::mojom::FrameDeadlinePtr& input) {
    return input->deadline_in_frames;
  }

  static const decltype(::viz::mojom::FrameDeadline::frame_interval)& frame_interval(
      const ::viz::mojom::FrameDeadlinePtr& input) {
    return input->frame_interval;
  }

  static decltype(::viz::mojom::FrameDeadline::use_default_lower_bound_deadline) use_default_lower_bound_deadline(
      const ::viz::mojom::FrameDeadlinePtr& input) {
    return input->use_default_lower_bound_deadline;
  }

  static bool Read(::viz::mojom::FrameDeadline::DataView input, ::viz::mojom::FrameDeadlinePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_FRAME_DEADLINE_MOJOM_H_