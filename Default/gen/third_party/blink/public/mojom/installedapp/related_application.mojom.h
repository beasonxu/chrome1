// third_party/blink/public/mojom/installedapp/related_application.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_RELATED_APPLICATION_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_RELATED_APPLICATION_MOJOM_H_

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

#include "third_party/blink/public/mojom/installedapp/related_application.mojom-shared.h"
#include "third_party/blink/public/mojom/installedapp/related_application.mojom-forward.h"
#include <string>
#include <vector>




#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {





class BLINK_COMMON_EXPORT RelatedApplication {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<RelatedApplication, T>::value>;
  using DataView = RelatedApplicationDataView;
  using Data_ = internal::RelatedApplication_Data;

  template <typename... Args>
  static RelatedApplicationPtr New(Args&&... args) {
    return RelatedApplicationPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static RelatedApplicationPtr From(const U& u) {
    return mojo::TypeConverter<RelatedApplicationPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, RelatedApplication>::Convert(*this);
  }


  RelatedApplication();

  RelatedApplication(
      const std::string& platform,
      const absl::optional<std::string>& url,
      const absl::optional<std::string>& id,
      const absl::optional<std::string>& version);


  ~RelatedApplication();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = RelatedApplicationPtr>
  RelatedApplicationPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, RelatedApplication::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, RelatedApplication::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        RelatedApplication::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        RelatedApplication::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::RelatedApplication_UnserializedMessageContext<
            UserType, RelatedApplication::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<RelatedApplication::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return RelatedApplication::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::RelatedApplication_UnserializedMessageContext<
            UserType, RelatedApplication::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<RelatedApplication::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  std::string platform;
  
  absl::optional<std::string> url;
  
  absl::optional<std::string> id;
  
  absl::optional<std::string> version;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, RelatedApplication::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, RelatedApplication::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, RelatedApplication::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, RelatedApplication::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}




template <typename StructPtrType>
RelatedApplicationPtr RelatedApplication::Clone() const {
  return New(
      mojo::Clone(platform),
      mojo::Clone(url),
      mojo::Clone(id),
      mojo::Clone(version)
  );
}

template <typename T, RelatedApplication::EnableIfSame<T>*>
bool RelatedApplication::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->platform, other_struct.platform))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->version, other_struct.version))
    return false;
  return true;
}

template <typename T, RelatedApplication::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.platform < rhs.platform)
    return true;
  if (rhs.platform < lhs.platform)
    return false;
  if (lhs.url < rhs.url)
    return true;
  if (rhs.url < lhs.url)
    return false;
  if (lhs.id < rhs.id)
    return true;
  if (rhs.id < lhs.id)
    return false;
  if (lhs.version < rhs.version)
    return true;
  if (rhs.version < lhs.version)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::RelatedApplication::DataView,
                                         ::blink::mojom::RelatedApplicationPtr> {
  static bool IsNull(const ::blink::mojom::RelatedApplicationPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::RelatedApplicationPtr* output) { output->reset(); }

  static const decltype(::blink::mojom::RelatedApplication::platform)& platform(
      const ::blink::mojom::RelatedApplicationPtr& input) {
    return input->platform;
  }

  static const decltype(::blink::mojom::RelatedApplication::url)& url(
      const ::blink::mojom::RelatedApplicationPtr& input) {
    return input->url;
  }

  static const decltype(::blink::mojom::RelatedApplication::id)& id(
      const ::blink::mojom::RelatedApplicationPtr& input) {
    return input->id;
  }

  static const decltype(::blink::mojom::RelatedApplication::version)& version(
      const ::blink::mojom::RelatedApplicationPtr& input) {
    return input->version;
  }

  static bool Read(::blink::mojom::RelatedApplication::DataView input, ::blink::mojom::RelatedApplicationPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_INSTALLEDAPP_RELATED_APPLICATION_MOJOM_H_