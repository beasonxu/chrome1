// third_party/blink/public/mojom/manifest/manifest_launch_handler.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_LAUNCH_HANDLER_MOJOM_BLINK_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_LAUNCH_HANDLER_MOJOM_BLINK_H_

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

#include "third_party/blink/public/mojom/manifest/manifest_launch_handler.mojom-shared.h"
#include "third_party/blink/public/mojom/manifest/manifest_launch_handler.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "third_party/blink/renderer/platform/platform_export.h"




namespace WTF {
struct blink_mojom_internal_ManifestLaunchHandler_ClientMode_DataHashFn {
  static unsigned GetHash(const ::blink::mojom::ManifestLaunchHandler_ClientMode& value) {
    using utype = std::underlying_type<::blink::mojom::ManifestLaunchHandler_ClientMode>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::blink::mojom::ManifestLaunchHandler_ClientMode& left, const ::blink::mojom::ManifestLaunchHandler_ClientMode& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::blink::mojom::ManifestLaunchHandler_ClientMode>
    : public GenericHashTraits<::blink::mojom::ManifestLaunchHandler_ClientMode> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::blink::mojom::ManifestLaunchHandler_ClientMode EmptyValue() { return static_cast<::blink::mojom::ManifestLaunchHandler_ClientMode>(-1000000); }
  static void ConstructDeletedValue(::blink::mojom::ManifestLaunchHandler_ClientMode& slot, bool) {
    slot = static_cast<::blink::mojom::ManifestLaunchHandler_ClientMode>(-1000001);
  }
  static bool IsDeletedValue(const ::blink::mojom::ManifestLaunchHandler_ClientMode& value) {
    return value == static_cast<::blink::mojom::ManifestLaunchHandler_ClientMode>(-1000001);
  }
};
}  // namespace WTF


namespace blink {
namespace mojom {
namespace blink {





class PLATFORM_EXPORT ManifestLaunchHandler {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ManifestLaunchHandler, T>::value>;
  using DataView = ManifestLaunchHandlerDataView;
  using Data_ = internal::ManifestLaunchHandler_Data;
  using ClientMode = ManifestLaunchHandler_ClientMode;

  template <typename... Args>
  static ManifestLaunchHandlerPtr New(Args&&... args) {
    return ManifestLaunchHandlerPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ManifestLaunchHandlerPtr From(const U& u) {
    return mojo::TypeConverter<ManifestLaunchHandlerPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ManifestLaunchHandler>::Convert(*this);
  }


  ManifestLaunchHandler();

  explicit ManifestLaunchHandler(
      ManifestLaunchHandler::ClientMode client_mode);


  ~ManifestLaunchHandler();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ManifestLaunchHandlerPtr>
  ManifestLaunchHandlerPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ManifestLaunchHandler::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ManifestLaunchHandler::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ManifestLaunchHandler::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ManifestLaunchHandler::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ManifestLaunchHandler_UnserializedMessageContext<
            UserType, ManifestLaunchHandler::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ManifestLaunchHandler::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ManifestLaunchHandler::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ManifestLaunchHandler_UnserializedMessageContext<
            UserType, ManifestLaunchHandler::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ManifestLaunchHandler::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ManifestLaunchHandler::ClientMode client_mode;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ManifestLaunchHandler::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ManifestLaunchHandler::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ManifestLaunchHandler::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ManifestLaunchHandler::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}




template <typename StructPtrType>
ManifestLaunchHandlerPtr ManifestLaunchHandler::Clone() const {
  return New(
      mojo::Clone(client_mode)
  );
}

template <typename T, ManifestLaunchHandler::EnableIfSame<T>*>
bool ManifestLaunchHandler::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->client_mode, other_struct.client_mode))
    return false;
  return true;
}

template <typename T, ManifestLaunchHandler::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.client_mode < rhs.client_mode)
    return true;
  if (rhs.client_mode < lhs.client_mode)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct PLATFORM_EXPORT StructTraits<::blink::mojom::blink::ManifestLaunchHandler::DataView,
                                         ::blink::mojom::blink::ManifestLaunchHandlerPtr> {
  static bool IsNull(const ::blink::mojom::blink::ManifestLaunchHandlerPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::blink::ManifestLaunchHandlerPtr* output) { output->reset(); }

  static decltype(::blink::mojom::blink::ManifestLaunchHandler::client_mode) client_mode(
      const ::blink::mojom::blink::ManifestLaunchHandlerPtr& input) {
    return input->client_mode;
  }

  static bool Read(::blink::mojom::blink::ManifestLaunchHandler::DataView input, ::blink::mojom::blink::ManifestLaunchHandlerPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_MANIFEST_MANIFEST_LAUNCH_HANDLER_MOJOM_BLINK_H_