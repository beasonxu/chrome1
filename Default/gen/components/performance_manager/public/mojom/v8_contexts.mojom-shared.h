// components/performance_manager/public/mojom/v8_contexts.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PERFORMANCE_MANAGER_PUBLIC_MOJOM_V8_CONTEXTS_MOJOM_SHARED_H_
#define COMPONENTS_PERFORMANCE_MANAGER_PUBLIC_MOJOM_V8_CONTEXTS_MOJOM_SHARED_H_

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

#include "components/performance_manager/public/mojom/v8_contexts.mojom-shared-internal.h"
#include "third_party/blink/public/mojom/tokens/tokens.mojom-shared.h"



#include "base/component_export.h"




namespace performance_manager {
namespace mojom {
class IframeAttributionDataDataView;

class V8ContextDescriptionDataView;



}  // namespace mojom
}  // namespace performance_manager

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::performance_manager::mojom::IframeAttributionDataDataView> {
  using Data = ::performance_manager::mojom::internal::IframeAttributionData_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::performance_manager::mojom::V8ContextDescriptionDataView> {
  using Data = ::performance_manager::mojom::internal::V8ContextDescription_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace performance_manager {
namespace mojom {


enum class V8ContextWorldType : int32_t {
  
  kMain = 0,
  
  kWorkerOrWorklet = 1,
  
  kExtension = 2,
  
  kIsolated = 3,
  
  kInspector = 4,
  
  kRegExp = 5,
  kMinValue = 0,
  kMaxValue = 5,
};

COMPONENT_EXPORT(PERFORMANCE_MANAGER_PUBLIC_MOJOM_SHARED) std::ostream& operator<<(std::ostream& os, V8ContextWorldType value);
inline bool IsKnownEnumValue(V8ContextWorldType value) {
  return internal::V8ContextWorldType_Data::IsKnownValue(
      static_cast<int32_t>(value));
}


class IframeAttributionDataDataView {
 public:
  IframeAttributionDataDataView() = default;

  IframeAttributionDataDataView(
      internal::IframeAttributionData_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadId(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        mojo::StringDataView, UserType>(),
    "Attempting to read the optional `id` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadId` instead "
    "of `ReadId if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetSrcDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSrc(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        mojo::StringDataView, UserType>(),
    "Attempting to read the optional `src` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadSrc` instead "
    "of `ReadSrc if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->src.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::IframeAttributionData_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class V8ContextDescriptionDataView {
 public:
  V8ContextDescriptionDataView() = default;

  V8ContextDescriptionDataView(
      internal::V8ContextDescription_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTokenDataView(
      ::blink::mojom::V8ContextTokenDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadToken(UserType* output) {
    
    auto* pointer = data_->token.Get();
    return mojo::internal::Deserialize<::blink::mojom::V8ContextTokenDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  [[nodiscard]] bool ReadWorldType(UserType* output) const {
    auto data_value = data_->world_type;
    return mojo::internal::Deserialize<::performance_manager::mojom::V8ContextWorldType>(
        data_value, output);
  }
  V8ContextWorldType world_type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::performance_manager::mojom::V8ContextWorldType>(data_->world_type));
  }
  inline void GetWorldNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadWorldName(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        mojo::StringDataView, UserType>(),
    "Attempting to read the optional `world_name` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadWorldName` instead "
    "of `ReadWorldName if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->world_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetExecutionContextTokenDataView(
      ::blink::mojom::ExecutionContextTokenDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadExecutionContextToken(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::blink::mojom::ExecutionContextTokenDataView, UserType>(),
    "Attempting to read the optional `execution_context_token` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadExecutionContextToken` instead "
    "of `ReadExecutionContextToken if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = !data_->execution_context_token.is_null() ? &data_->execution_context_token : nullptr;
    return mojo::internal::Deserialize<::blink::mojom::ExecutionContextTokenDataView>(
        pointer, output, message_);
  }
 private:
  internal::V8ContextDescription_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace performance_manager

namespace std {

template <>
struct hash<::performance_manager::mojom::V8ContextWorldType>
    : public mojo::internal::EnumHashImpl<::performance_manager::mojom::V8ContextWorldType> {};

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::performance_manager::mojom::V8ContextWorldType, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = EnumTraits<::performance_manager::mojom::V8ContextWorldType, UserType>;

  static void Serialize(UserType input, int32_t* output) {
    *output = static_cast<int32_t>(Traits::ToMojom(input));
  }

  static bool Deserialize(int32_t input, UserType* output) {
    return Traits::FromMojom(::mojo::internal::ToKnownEnumValueHelper(
        static_cast<::performance_manager::mojom::V8ContextWorldType>(input)), output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::performance_manager::mojom::IframeAttributionDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::performance_manager::mojom::IframeAttributionDataDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::performance_manager::mojom::internal::IframeAttributionData_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::id(input)) in_id = Traits::id(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->id)::BaseType> id_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_id, id_fragment);
    fragment->id.Set(
        id_fragment.is_null() ? nullptr : id_fragment.data());
    decltype(Traits::src(input)) in_src = Traits::src(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->src)::BaseType> src_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_src, src_fragment);
    fragment->src.Set(
        src_fragment.is_null() ? nullptr : src_fragment.data());
  }

  static bool Deserialize(::performance_manager::mojom::internal::IframeAttributionData_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::performance_manager::mojom::IframeAttributionDataDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::performance_manager::mojom::V8ContextDescriptionDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::performance_manager::mojom::V8ContextDescriptionDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::performance_manager::mojom::internal::V8ContextDescription_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::token(input)) in_token = Traits::token(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->token)::BaseType> token_fragment(
            fragment.message());
    mojo::internal::Serialize<::blink::mojom::V8ContextTokenDataView>(
        in_token, token_fragment);
    fragment->token.Set(
        token_fragment.is_null() ? nullptr : token_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->token.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null token in V8ContextDescription struct");
    mojo::internal::Serialize<::performance_manager::mojom::V8ContextWorldType>(
        Traits::world_type(input), &fragment->world_type);
    decltype(Traits::world_name(input)) in_world_name = Traits::world_name(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->world_name)::BaseType> world_name_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_world_name, world_name_fragment);
    fragment->world_name.Set(
        world_name_fragment.is_null() ? nullptr : world_name_fragment.data());
    decltype(Traits::execution_context_token(input)) in_execution_context_token = Traits::execution_context_token(input);
    mojo::internal::MessageFragment<decltype(fragment->execution_context_token)>
        execution_context_token_fragment(fragment.message());
    execution_context_token_fragment.Claim(&fragment->execution_context_token);
    mojo::internal::Serialize<::blink::mojom::ExecutionContextTokenDataView>(
        in_execution_context_token, execution_context_token_fragment, true);
  }

  static bool Deserialize(::performance_manager::mojom::internal::V8ContextDescription_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::performance_manager::mojom::V8ContextDescriptionDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace performance_manager {
namespace mojom {

inline void IframeAttributionDataDataView::GetIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->id.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void IframeAttributionDataDataView::GetSrcDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->src.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void V8ContextDescriptionDataView::GetTokenDataView(
    ::blink::mojom::V8ContextTokenDataView* output) {
  auto pointer = data_->token.Get();
  *output = ::blink::mojom::V8ContextTokenDataView(pointer, message_);
}
inline void V8ContextDescriptionDataView::GetWorldNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->world_name.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void V8ContextDescriptionDataView::GetExecutionContextTokenDataView(
    ::blink::mojom::ExecutionContextTokenDataView* output) {
  auto pointer = &data_->execution_context_token;
  *output = ::blink::mojom::ExecutionContextTokenDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace performance_manager

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

namespace perfetto {

template <>
struct COMPONENT_EXPORT(PERFORMANCE_MANAGER_PUBLIC_MOJOM_SHARED) TraceFormatTraits<::performance_manager::mojom::V8ContextWorldType> {
 static void WriteIntoTrace(perfetto::TracedValue context, ::performance_manager::mojom::V8ContextWorldType value);
};

} // namespace perfetto

#endif  // COMPONENTS_PERFORMANCE_MANAGER_PUBLIC_MOJOM_V8_CONTEXTS_MOJOM_SHARED_H_