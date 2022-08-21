// components/mirroring/mojom/session_parameters.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_MIRRORING_MOJOM_SESSION_PARAMETERS_MOJOM_H_
#define COMPONENTS_MIRRORING_MOJOM_SESSION_PARAMETERS_MOJOM_H_

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

#include "components/mirroring/mojom/session_parameters.mojom-shared.h"
#include "components/mirroring/mojom/session_parameters.mojom-forward.h"
#include "services/network/public/mojom/ip_address.mojom.h"
#include "mojo/public/mojom/base/time.mojom.h"
#include <string>
#include <vector>








namespace mirroring {
namespace mojom {








class  SessionParameters {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<SessionParameters, T>::value>;
  using DataView = SessionParametersDataView;
  using Data_ = internal::SessionParameters_Data;

  template <typename... Args>
  static SessionParametersPtr New(Args&&... args) {
    return SessionParametersPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SessionParametersPtr From(const U& u) {
    return mojo::TypeConverter<SessionParametersPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SessionParameters>::Convert(*this);
  }


  SessionParameters();

  SessionParameters(
      SessionType type,
      const ::net::IPAddress& receiver_address,
      const std::string& receiver_model_name,
      absl::optional<::base::TimeDelta> target_playout_delay);


  ~SessionParameters();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SessionParametersPtr>
  SessionParametersPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, SessionParameters::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, SessionParameters::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SessionParameters::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SessionParameters::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SessionParameters_UnserializedMessageContext<
            UserType, SessionParameters::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<SessionParameters::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SessionParameters::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SessionParameters_UnserializedMessageContext<
            UserType, SessionParameters::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SessionParameters::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  SessionType type;
  
  ::net::IPAddress receiver_address;
  
  std::string receiver_model_name;
  
  absl::optional<::base::TimeDelta> target_playout_delay;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, SessionParameters::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, SessionParameters::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, SessionParameters::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, SessionParameters::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
SessionParametersPtr SessionParameters::Clone() const {
  return New(
      mojo::Clone(type),
      mojo::Clone(receiver_address),
      mojo::Clone(receiver_model_name),
      mojo::Clone(target_playout_delay)
  );
}

template <typename T, SessionParameters::EnableIfSame<T>*>
bool SessionParameters::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->receiver_address, other_struct.receiver_address))
    return false;
  if (!mojo::Equals(this->receiver_model_name, other_struct.receiver_model_name))
    return false;
  if (!mojo::Equals(this->target_playout_delay, other_struct.target_playout_delay))
    return false;
  return true;
}

template <typename T, SessionParameters::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.type < rhs.type)
    return true;
  if (rhs.type < lhs.type)
    return false;
  if (lhs.receiver_address < rhs.receiver_address)
    return true;
  if (rhs.receiver_address < lhs.receiver_address)
    return false;
  if (lhs.receiver_model_name < rhs.receiver_model_name)
    return true;
  if (rhs.receiver_model_name < lhs.receiver_model_name)
    return false;
  if (lhs.target_playout_delay < rhs.target_playout_delay)
    return true;
  if (rhs.target_playout_delay < lhs.target_playout_delay)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace mirroring

namespace mojo {


template <>
struct  StructTraits<::mirroring::mojom::SessionParameters::DataView,
                                         ::mirroring::mojom::SessionParametersPtr> {
  static bool IsNull(const ::mirroring::mojom::SessionParametersPtr& input) { return !input; }
  static void SetToNull(::mirroring::mojom::SessionParametersPtr* output) { output->reset(); }

  static decltype(::mirroring::mojom::SessionParameters::type) type(
      const ::mirroring::mojom::SessionParametersPtr& input) {
    return input->type;
  }

  static const decltype(::mirroring::mojom::SessionParameters::receiver_address)& receiver_address(
      const ::mirroring::mojom::SessionParametersPtr& input) {
    return input->receiver_address;
  }

  static const decltype(::mirroring::mojom::SessionParameters::receiver_model_name)& receiver_model_name(
      const ::mirroring::mojom::SessionParametersPtr& input) {
    return input->receiver_model_name;
  }

  static const decltype(::mirroring::mojom::SessionParameters::target_playout_delay)& target_playout_delay(
      const ::mirroring::mojom::SessionParametersPtr& input) {
    return input->target_playout_delay;
  }

  static bool Read(::mirroring::mojom::SessionParameters::DataView input, ::mirroring::mojom::SessionParametersPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_MIRRORING_MOJOM_SESSION_PARAMETERS_MOJOM_H_