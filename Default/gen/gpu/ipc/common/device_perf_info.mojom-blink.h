// gpu/ipc/common/device_perf_info.mojom-blink.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_DEVICE_PERF_INFO_MOJOM_BLINK_H_
#define GPU_IPC_COMMON_DEVICE_PERF_INFO_MOJOM_BLINK_H_

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

#include "gpu/ipc/common/device_perf_info.mojom-shared.h"
#include "gpu/ipc/common/device_perf_info.mojom-blink-forward.h"

#include "mojo/public/cpp/bindings/lib/wtf_clone_equals_util.h"
#include "mojo/public/cpp/bindings/lib/wtf_hash_util.h"
#include "third_party/blink/renderer/platform/wtf/hash_functions.h"
#include "third_party/blink/renderer/platform/wtf/text/wtf_string.h"




#include "third_party/blink/public/platform/web_common.h"




namespace WTF {
struct gpu_mojom_internal_Direct3DFeatureLevel_DataHashFn {
  static unsigned GetHash(const ::gpu::mojom::Direct3DFeatureLevel& value) {
    using utype = std::underlying_type<::gpu::mojom::Direct3DFeatureLevel>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gpu::mojom::Direct3DFeatureLevel& left, const ::gpu::mojom::Direct3DFeatureLevel& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gpu::mojom::Direct3DFeatureLevel>
    : public GenericHashTraits<::gpu::mojom::Direct3DFeatureLevel> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::gpu::mojom::Direct3DFeatureLevel EmptyValue() { return static_cast<::gpu::mojom::Direct3DFeatureLevel>(-1000000); }
  static void ConstructDeletedValue(::gpu::mojom::Direct3DFeatureLevel& slot, bool) {
    slot = static_cast<::gpu::mojom::Direct3DFeatureLevel>(-1000001);
  }
  static bool IsDeletedValue(const ::gpu::mojom::Direct3DFeatureLevel& value) {
    return value == static_cast<::gpu::mojom::Direct3DFeatureLevel>(-1000001);
  }
};
}  // namespace WTF


namespace WTF {
struct gpu_mojom_internal_HasDiscreteGpu_DataHashFn {
  static unsigned GetHash(const ::gpu::mojom::HasDiscreteGpu& value) {
    using utype = std::underlying_type<::gpu::mojom::HasDiscreteGpu>::type;
    return DefaultHash<utype>::Hash().GetHash(static_cast<utype>(value));
  }
  static bool Equal(const ::gpu::mojom::HasDiscreteGpu& left, const ::gpu::mojom::HasDiscreteGpu& right) {
    return left == right;
  }
  static const bool safe_to_compare_to_empty_or_deleted = true;
};

template <>
struct HashTraits<::gpu::mojom::HasDiscreteGpu>
    : public GenericHashTraits<::gpu::mojom::HasDiscreteGpu> {
  static_assert(true,
                "-1000000 is a reserved enum value");
  static_assert(true,
                "-1000001 is a reserved enum value");
  static const bool kEmptyValueIsZero = false;
  static ::gpu::mojom::HasDiscreteGpu EmptyValue() { return static_cast<::gpu::mojom::HasDiscreteGpu>(-1000000); }
  static void ConstructDeletedValue(::gpu::mojom::HasDiscreteGpu& slot, bool) {
    slot = static_cast<::gpu::mojom::HasDiscreteGpu>(-1000001);
  }
  static bool IsDeletedValue(const ::gpu::mojom::HasDiscreteGpu& value) {
    return value == static_cast<::gpu::mojom::HasDiscreteGpu>(-1000001);
  }
};
}  // namespace WTF


namespace gpu {
namespace mojom {
namespace blink {





class BLINK_PLATFORM_EXPORT DevicePerfInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<DevicePerfInfo, T>::value>;
  using DataView = DevicePerfInfoDataView;
  using Data_ = internal::DevicePerfInfo_Data;

  template <typename... Args>
  static DevicePerfInfoPtr New(Args&&... args) {
    return DevicePerfInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DevicePerfInfoPtr From(const U& u) {
    return mojo::TypeConverter<DevicePerfInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DevicePerfInfo>::Convert(*this);
  }


  DevicePerfInfo();

  DevicePerfInfo(
      uint32_t total_physical_memory_mb,
      uint32_t total_disk_space_mb,
      uint32_t hardware_concurrency);


  ~DevicePerfInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DevicePerfInfoPtr>
  DevicePerfInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, DevicePerfInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, DevicePerfInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static WTF::Vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DevicePerfInfo::DataView, WTF::Vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DevicePerfInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DevicePerfInfo_UnserializedMessageContext<
            UserType, DevicePerfInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<DevicePerfInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const WTF::Vector<uint8_t>& input,
                          UserType* output) {
    return DevicePerfInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DevicePerfInfo_UnserializedMessageContext<
            UserType, DevicePerfInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DevicePerfInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  uint32_t total_physical_memory_mb;
  
  uint32_t total_disk_space_mb;
  
  uint32_t hardware_concurrency;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, DevicePerfInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, DevicePerfInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, DevicePerfInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, DevicePerfInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}




template <typename StructPtrType>
DevicePerfInfoPtr DevicePerfInfo::Clone() const {
  return New(
      mojo::Clone(total_physical_memory_mb),
      mojo::Clone(total_disk_space_mb),
      mojo::Clone(hardware_concurrency)
  );
}

template <typename T, DevicePerfInfo::EnableIfSame<T>*>
bool DevicePerfInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->total_physical_memory_mb, other_struct.total_physical_memory_mb))
    return false;
  if (!mojo::Equals(this->total_disk_space_mb, other_struct.total_disk_space_mb))
    return false;
  if (!mojo::Equals(this->hardware_concurrency, other_struct.hardware_concurrency))
    return false;
  return true;
}

template <typename T, DevicePerfInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.total_physical_memory_mb < rhs.total_physical_memory_mb)
    return true;
  if (rhs.total_physical_memory_mb < lhs.total_physical_memory_mb)
    return false;
  if (lhs.total_disk_space_mb < rhs.total_disk_space_mb)
    return true;
  if (rhs.total_disk_space_mb < lhs.total_disk_space_mb)
    return false;
  if (lhs.hardware_concurrency < rhs.hardware_concurrency)
    return true;
  if (rhs.hardware_concurrency < lhs.hardware_concurrency)
    return false;
  return false;
}


}  // namespace blink
}  // namespace mojom
}  // namespace gpu

namespace mojo {


template <>
struct BLINK_PLATFORM_EXPORT StructTraits<::gpu::mojom::blink::DevicePerfInfo::DataView,
                                         ::gpu::mojom::blink::DevicePerfInfoPtr> {
  static bool IsNull(const ::gpu::mojom::blink::DevicePerfInfoPtr& input) { return !input; }
  static void SetToNull(::gpu::mojom::blink::DevicePerfInfoPtr* output) { output->reset(); }

  static decltype(::gpu::mojom::blink::DevicePerfInfo::total_physical_memory_mb) total_physical_memory_mb(
      const ::gpu::mojom::blink::DevicePerfInfoPtr& input) {
    return input->total_physical_memory_mb;
  }

  static decltype(::gpu::mojom::blink::DevicePerfInfo::total_disk_space_mb) total_disk_space_mb(
      const ::gpu::mojom::blink::DevicePerfInfoPtr& input) {
    return input->total_disk_space_mb;
  }

  static decltype(::gpu::mojom::blink::DevicePerfInfo::hardware_concurrency) hardware_concurrency(
      const ::gpu::mojom::blink::DevicePerfInfoPtr& input) {
    return input->hardware_concurrency;
  }

  static bool Read(::gpu::mojom::blink::DevicePerfInfo::DataView input, ::gpu::mojom::blink::DevicePerfInfoPtr* output);
};

}  // namespace mojo

#endif  // GPU_IPC_COMMON_DEVICE_PERF_INFO_MOJOM_BLINK_H_