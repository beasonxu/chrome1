// services/viz/public/mojom/compositing/returned_resource.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_RETURNED_RESOURCE_MOJOM_BLINK_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_RETURNED_RESOURCE_MOJOM_BLINK_H_

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

#include "services/viz/public/mojom/compositing/returned_resource.mojom-shared.h"
#include "services/viz/public/mojom/compositing/returned_resource.mojom-blink-forward.h"
#include "gpu/ipc/common/sync_token.mojom-blink.h"
#include "services/viz/public/mojom/compositing/resource_id.mojom-blink.h"
#include "ui/gfx/mojom/gpu_fence_handle.mojom-blink.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "services/viz/public/cpp/compositing/returned_resource_mojom_traits.h"
#include "third_party/blink/public/platform/web_common.h"




namespace viz {
namespace mojom {
namespace blink {








class BLINK_PLATFORM_EXPORT ReturnedResource {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ReturnedResource, T>::value>;
  using DataView = ReturnedResourceDataView;
  using Data_ = internal::ReturnedResource_Data;

  template <typename... Args>
  static ReturnedResourcePtr New(Args&&... args) {
    return ReturnedResourcePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReturnedResourcePtr From(const U& u) {
    return mojo::TypeConverter<ReturnedResourcePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ReturnedResource>::Convert(*this);
  }


  ReturnedResource();

  ReturnedResource(
      ::viz::mojom::blink::ResourceIdPtr id,
      const ::gpu::SyncToken& sync_token,
      ::gfx::GpuFenceHandle release_fence,
      int32_t count,
      bool lost);

ReturnedResource(const ReturnedResource&) = delete;
ReturnedResource& operator=(const ReturnedResource&) = delete;

  ~ReturnedResource();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReturnedResourcePtr>
  ReturnedResourcePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ReturnedResource::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ReturnedResource::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ReturnedResource::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ReturnedResource_UnserializedMessageContext<
            UserType, ReturnedResource::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ReturnedResource::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return ReturnedResource::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ReturnedResource_UnserializedMessageContext<
            UserType, ReturnedResource::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ReturnedResource::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::viz::mojom::blink::ResourceIdPtr id;
  
  ::gpu::SyncToken sync_token;
  
  ::gfx::GpuFenceHandle release_fence;
  
  int32_t count;
  
  bool lost;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ReturnedResource::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ReturnedResource::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ReturnedResource::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ReturnedResource::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
ReturnedResourcePtr ReturnedResource::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(sync_token),
      mojo::Clone(release_fence),
      mojo::Clone(count),
      mojo::Clone(lost)
  );
}

template <typename T, ReturnedResource::EnableIfSame<T>*>
bool ReturnedResource::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->sync_token, other_struct.sync_token))
    return false;
  if (!mojo::Equals(this->release_fence, other_struct.release_fence))
    return false;
  if (!mojo::Equals(this->count, other_struct.count))
    return false;
  if (!mojo::Equals(this->lost, other_struct.lost))
    return false;
  return true;
}

template <typename T, ReturnedResource::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.id < rhs.id)
    return true;
  if (rhs.id < lhs.id)
    return false;
  if (lhs.sync_token < rhs.sync_token)
    return true;
  if (rhs.sync_token < lhs.sync_token)
    return false;
  if (lhs.release_fence < rhs.release_fence)
    return true;
  if (rhs.release_fence < lhs.release_fence)
    return false;
  if (lhs.count < rhs.count)
    return true;
  if (rhs.count < lhs.count)
    return false;
  if (lhs.lost < rhs.lost)
    return true;
  if (rhs.lost < lhs.lost)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace viz

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::viz::mojom::blink::ReturnedResource::DataView,
                                         ::viz::mojom::blink::ReturnedResourcePtr> {
  static bool IsNull(const ::viz::mojom::blink::ReturnedResourcePtr& input) { return !input; }
  static void SetToNull(::viz::mojom::blink::ReturnedResourcePtr* output) { output->reset(); }

  static const decltype(::viz::mojom::blink::ReturnedResource::id)& id(
      const ::viz::mojom::blink::ReturnedResourcePtr& input) {
    return input->id;
  }

  static const decltype(::viz::mojom::blink::ReturnedResource::sync_token)& sync_token(
      const ::viz::mojom::blink::ReturnedResourcePtr& input) {
    return input->sync_token;
  }

  static  decltype(::viz::mojom::blink::ReturnedResource::release_fence)& release_fence(
       ::viz::mojom::blink::ReturnedResourcePtr& input) {
    return input->release_fence;
  }

  static decltype(::viz::mojom::blink::ReturnedResource::count) count(
      const ::viz::mojom::blink::ReturnedResourcePtr& input) {
    return input->count;
  }

  static decltype(::viz::mojom::blink::ReturnedResource::lost) lost(
      const ::viz::mojom::blink::ReturnedResourcePtr& input) {
    return input->lost;
  }

  static bool Read(::viz::mojom::blink::ReturnedResource::DataView input, ::viz::mojom::blink::ReturnedResourcePtr* output);
};

}  // namespace mojo

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_RETURNED_RESOURCE_MOJOM_BLINK_H_