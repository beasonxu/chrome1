// third_party/blink/public/mojom/frame/frame_policy.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_POLICY_MOJOM_SHARED_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_POLICY_MOJOM_SHARED_H_

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

#include "third_party/blink/public/mojom/frame/frame_policy.mojom-shared-internal.h"
#include "services/network/public/mojom/web_sandbox_flags.mojom-shared.h"
#include "third_party/blink/public/mojom/fenced_frame/fenced_frame.mojom-shared.h"
#include "third_party/blink/public/mojom/permissions_policy/permissions_policy.mojom-shared.h"
#include "third_party/blink/public/mojom/permissions_policy/document_policy_feature.mojom-shared.h"
#include "third_party/blink/public/mojom/permissions_policy/permissions_policy_feature.mojom-shared.h"
#include "third_party/blink/public/mojom/permissions_policy/policy_value.mojom-shared.h"



#include "base/component_export.h"




namespace blink {
namespace mojom {
class FramePolicyDataView;



}  // namespace mojom
}  // namespace blink

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::blink::mojom::FramePolicyDataView> {
  using Data = ::blink::mojom::internal::FramePolicy_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace blink {
namespace mojom {


class FramePolicyDataView {
 public:
  FramePolicyDataView() = default;

  FramePolicyDataView(
      internal::FramePolicy_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadSandboxFlags(UserType* output) const {
    auto data_value = data_->sandbox_flags;
    return mojo::internal::Deserialize<::network::mojom::WebSandboxFlags>(
        data_value, output);
  }
  ::network::mojom::WebSandboxFlags sandbox_flags() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::network::mojom::WebSandboxFlags>(data_->sandbox_flags));
  }
  inline void GetContainerPolicyDataView(
      mojo::ArrayDataView<::blink::mojom::ParsedPermissionsPolicyDeclarationDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadContainerPolicy(UserType* output) {
    
    auto* pointer = data_->container_policy.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::ParsedPermissionsPolicyDeclarationDataView>>(
        pointer, output, message_);
  }
  inline void GetRequiredDocumentPolicyDataView(
      mojo::MapDataView<::blink::mojom::DocumentPolicyFeature, ::blink::mojom::PolicyValueDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadRequiredDocumentPolicy(UserType* output) {
    
    auto* pointer = data_->required_document_policy.Get();
    return mojo::internal::Deserialize<mojo::MapDataView<::blink::mojom::DocumentPolicyFeature, ::blink::mojom::PolicyValueDataView>>(
        pointer, output, message_);
  }
  bool is_fenced() const {
    return data_->is_fenced;
  }
  template <typename UserType>
  [[nodiscard]] bool ReadFencedFrameMode(UserType* output) const {
    auto data_value = data_->fenced_frame_mode;
    return mojo::internal::Deserialize<::blink::mojom::FencedFrameMode>(
        data_value, output);
  }
  ::blink::mojom::FencedFrameMode fenced_frame_mode() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::blink::mojom::FencedFrameMode>(data_->fenced_frame_mode));
  }
 private:
  internal::FramePolicy_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::blink::mojom::FramePolicyDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::blink::mojom::FramePolicyDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::blink::mojom::internal::FramePolicy_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    mojo::internal::Serialize<::network::mojom::WebSandboxFlags>(
        Traits::sandbox_flags(input), &fragment->sandbox_flags);
    decltype(Traits::container_policy(input)) in_container_policy = Traits::container_policy(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->container_policy)::BaseType>
        container_policy_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams container_policy_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::blink::mojom::ParsedPermissionsPolicyDeclarationDataView>>(
        in_container_policy, container_policy_fragment, &container_policy_validate_params);
    fragment->container_policy.Set(
        container_policy_fragment.is_null() ? nullptr : container_policy_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->container_policy.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null container_policy in FramePolicy struct");
    decltype(Traits::required_document_policy(input)) in_required_document_policy = Traits::required_document_policy(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->required_document_policy)::BaseType>
        required_document_policy_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams required_document_policy_validate_params(
        new mojo::internal::ContainerValidateParams(0, ::blink::mojom::internal::DocumentPolicyFeature_Data::Validate), new mojo::internal::ContainerValidateParams(0, false, nullptr));
    mojo::internal::Serialize<mojo::MapDataView<::blink::mojom::DocumentPolicyFeature, ::blink::mojom::PolicyValueDataView>>(
        in_required_document_policy, required_document_policy_fragment, &required_document_policy_validate_params);
    fragment->required_document_policy.Set(
        required_document_policy_fragment.is_null() ? nullptr : required_document_policy_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->required_document_policy.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null required_document_policy in FramePolicy struct");
    fragment->is_fenced = Traits::is_fenced(input);
    mojo::internal::Serialize<::blink::mojom::FencedFrameMode>(
        Traits::fenced_frame_mode(input), &fragment->fenced_frame_mode);
  }

  static bool Deserialize(::blink::mojom::internal::FramePolicy_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::blink::mojom::FramePolicyDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace blink {
namespace mojom {

inline void FramePolicyDataView::GetContainerPolicyDataView(
    mojo::ArrayDataView<::blink::mojom::ParsedPermissionsPolicyDeclarationDataView>* output) {
  auto pointer = data_->container_policy.Get();
  *output = mojo::ArrayDataView<::blink::mojom::ParsedPermissionsPolicyDeclarationDataView>(pointer, message_);
}
inline void FramePolicyDataView::GetRequiredDocumentPolicyDataView(
    mojo::MapDataView<::blink::mojom::DocumentPolicyFeature, ::blink::mojom::PolicyValueDataView>* output) {
  auto pointer = data_->required_document_policy.Get();
  *output = mojo::MapDataView<::blink::mojom::DocumentPolicyFeature, ::blink::mojom::PolicyValueDataView>(pointer, message_);
}



}  // namespace mojom
}  // namespace blink

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_FRAME_POLICY_MOJOM_SHARED_H_