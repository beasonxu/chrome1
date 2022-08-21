// gpu/ipc/common/sync_token.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_SHARED_H_
#define GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <iosfwd>
#include <type_traits>
#include <utility>
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "gpu/ipc/common/sync_token.mojom-shared-internal.h"



#include "base/component_export.h"




namespace gpu {
namespace mojom {
class SyncTokenDataView;



}  // namespace mojom
}  // namespace gpu

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::gpu::mojom::SyncTokenDataView> {
  using Data = ::gpu::mojom::internal::SyncToken_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace gpu {
namespace mojom {


enum class CommandBufferNamespace : int32_t {
  
  INVALID = -1,
  
  GPU_IO = 0,
  
  IN_PROCESS = 1,
  
  MOJO = 2,
  
  MOJO_LOCAL = 3,
  
  NUM_COMMAND_BUFFER_NAMESPACES = 4,
  kMinValue = -1,
  kMaxValue = 4,
};

COMPONENT_EXPORT(MOJOM_SHARED_GPU_EXPORT) std::ostream& operator<<(std::ostream& os, CommandBufferNamespace value);
inline bool IsKnownEnumValue(CommandBufferNamespace value) {
  return internal::CommandBufferNamespace_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


class SyncTokenDataView {
 public:
  SyncTokenDataView() = default;

  SyncTokenDataView(
      internal::SyncToken_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool verified_flush() const {
    return data_->verified_flush;
  }
  template <typename UserType>
  [[nodiscard]] bool ReadNamespaceId(UserType* output) const {
    auto data_value = data_->namespace_id;
    return mojo::internal::Deserialize<::gpu::mojom::CommandBufferNamespace>(
        data_value, output);
  }
  CommandBufferNamespace namespace_id() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::gpu::mojom::CommandBufferNamespace>(data_->namespace_id));
  }
  uint64_t command_buffer_id() const {
    return data_->command_buffer_id;
  }
  uint64_t release_count() const {
    return data_->release_count;
  }
 private:
  internal::SyncToken_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace gpu

namespace std {

template <>
struct hash<::gpu::mojom::CommandBufferNamespace>
    : public mojo::internal::EnumHashImpl<::gpu::mojom::CommandBufferNamespace> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::CommandBufferNamespace, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::gpu::mojom::CommandBufferNamespace, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::gpu::mojom::CommandBufferNamespace>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::gpu::mojom::SyncTokenDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::gpu::mojom::SyncTokenDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::gpu::mojom::internal::SyncToken_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    fragment->verified_flush = Traits::verified_flush(input);
    mojo::internal::Serialize<::gpu::mojom::CommandBufferNamespace>(
        Traits::namespace_id(input), &fragment->namespace_id);
    fragment->command_buffer_id = Traits::command_buffer_id(input);
    fragment->release_count = Traits::release_count(input);
  }

  static bool Deserialize(::gpu::mojom::internal::SyncToken_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::gpu::mojom::SyncTokenDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace gpu {
namespace mojom {




}  // namespace mojom
}  // namespace gpu

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct COMPONENT_EXPORT(MOJOM_SHARED_GPU_EXPORT) TraceFormatTraits<::gpu::mojom::CommandBufferNamespace> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::gpu::mojom::CommandBufferNamespace value);
};

} // namespace perfetto

#endif  // GPU_IPC_COMMON_SYNC_TOKEN_MOJOM_SHARED_H_