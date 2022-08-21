// mojo/public/mojom/base/generic_pending_receiver.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_GENERIC_PENDING_RECEIVER_MOJOM_BLINK_H_
#define MOJO_PUBLIC_MOJOM_BASE_GENERIC_PENDING_RECEIVER_MOJOM_BLINK_H_

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

#include "mojo/public/mojom/base/generic_pending_receiver.mojom-shared.h"
#include "mojo/public/mojom/base/generic_pending_receiver.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "mojo/public/cpp/base/generic_pending_receiver_mojom_traits.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {
namespace blink {








class COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) GenericPendingReceiver {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<GenericPendingReceiver, T>::value>;
  using DataView = GenericPendingReceiverDataView;
  using Data_ = internal::GenericPendingReceiver_Data;

  template <typename... Args>
  static GenericPendingReceiverPtr New(Args&&... args) {
    return GenericPendingReceiverPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static GenericPendingReceiverPtr From(const U& u) {
    return mojo::TypeConverter<GenericPendingReceiverPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, GenericPendingReceiver>::Convert(*this);
  }


  GenericPendingReceiver();

  GenericPendingReceiver(
      const WTF::String& interface_name,
      ::mojo::ScopedMessagePipeHandle receiving_pipe);

GenericPendingReceiver(const GenericPendingReceiver&) = delete;
GenericPendingReceiver& operator=(const GenericPendingReceiver&) = delete;

  ~GenericPendingReceiver();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = GenericPendingReceiverPtr>
  GenericPendingReceiverPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, GenericPendingReceiver::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, GenericPendingReceiver::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        GenericPendingReceiver::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::GenericPendingReceiver_UnserializedMessageContext<
            UserType, GenericPendingReceiver::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<GenericPendingReceiver::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return GenericPendingReceiver::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::GenericPendingReceiver_UnserializedMessageContext<
            UserType, GenericPendingReceiver::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<GenericPendingReceiver::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  WTF::String interface_name;
  
  ::mojo::ScopedMessagePipeHandle receiving_pipe;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, GenericPendingReceiver::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, GenericPendingReceiver::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, GenericPendingReceiver::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, GenericPendingReceiver::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
GenericPendingReceiverPtr GenericPendingReceiver::Clone() const {
  return New(
      mojo::Clone(interface_name),
      mojo::Clone(receiving_pipe)
  );
}

template <typename T, GenericPendingReceiver::EnableIfSame<T>*>
bool GenericPendingReceiver::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->interface_name, other_struct.interface_name))
    return false;
  if (!mojo::Equals(this->receiving_pipe, other_struct.receiving_pipe))
    return false;
  return true;
}

template <typename T, GenericPendingReceiver::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.interface_name < rhs.interface_name)
    return true;
  if (rhs.interface_name < lhs.interface_name)
    return false;
  if (lhs.receiving_pipe < rhs.receiving_pipe)
    return true;
  if (rhs.receiving_pipe < lhs.receiving_pipe)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM_BLINK) StructTraits<::mojo_base::mojom::blink::GenericPendingReceiver::DataView,
                                         ::mojo_base::mojom::blink::GenericPendingReceiverPtr> {
  static bool IsNull(const ::mojo_base::mojom::blink::GenericPendingReceiverPtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::blink::GenericPendingReceiverPtr* output) { output->reset(); }

  static const decltype(::mojo_base::mojom::blink::GenericPendingReceiver::interface_name)& interface_name(
      const ::mojo_base::mojom::blink::GenericPendingReceiverPtr& input) {
    return input->interface_name;
  }

  static  decltype(::mojo_base::mojom::blink::GenericPendingReceiver::receiving_pipe)& receiving_pipe(
       ::mojo_base::mojom::blink::GenericPendingReceiverPtr& input) {
    return input->receiving_pipe;
  }

  static bool Read(::mojo_base::mojom::blink::GenericPendingReceiver::DataView input, ::mojo_base::mojom::blink::GenericPendingReceiverPtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_GENERIC_PENDING_RECEIVER_MOJOM_BLINK_H_