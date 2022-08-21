// services/viz/public/mojom/compositing/compositor_frame_transition_directive.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITOR_FRAME_TRANSITION_DIRECTIVE_MOJOM_SHARED_INTERNAL_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITOR_FRAME_TRANSITION_DIRECTIVE_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/time.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/compositor_render_pass_id.mojom-shared-internal.h"
#include "services/viz/public/mojom/compositing/shared_element_resource_id.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace viz {
namespace mojom {
namespace internal {
class CompositorFrameTransitionDirectiveConfig_Data;
class CompositorFrameTransitionDirectiveSharedElement_Data;
class CompositorFrameTransitionDirective_Data;

struct CompositorFrameTransitionDirectiveType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct CompositorFrameTransitionDirectiveEffect_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)
class  CompositorFrameTransitionDirectiveConfig_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> duration;
  mojo::internal::Pointer<::mojo_base::mojom::internal::TimeDelta_Data> delay;

 private:
  friend class mojo::internal::MessageFragment<CompositorFrameTransitionDirectiveConfig_Data>;

  CompositorFrameTransitionDirectiveConfig_Data();
  ~CompositorFrameTransitionDirectiveConfig_Data() = delete;
};
static_assert(sizeof(CompositorFrameTransitionDirectiveConfig_Data) == 24,
              "Bad sizeof(CompositorFrameTransitionDirectiveConfig_Data)");
// Used by CompositorFrameTransitionDirectiveConfig::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CompositorFrameTransitionDirectiveConfig_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CompositorFrameTransitionDirectiveConfig_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CompositorFrameTransitionDirectiveConfig_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<CompositorFrameTransitionDirectiveConfig_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CompositorFrameTransitionDirectiveConfig_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CompositorFrameTransitionDirectiveSharedElement_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::viz::mojom::internal::CompositorRenderPassId_Data> render_pass_id;
  mojo::internal::Pointer<internal::CompositorFrameTransitionDirectiveConfig_Data> config;
  mojo::internal::Pointer<::viz::mojom::internal::SharedElementResourceId_Data> shared_element_resource_id;

 private:
  friend class mojo::internal::MessageFragment<CompositorFrameTransitionDirectiveSharedElement_Data>;

  CompositorFrameTransitionDirectiveSharedElement_Data();
  ~CompositorFrameTransitionDirectiveSharedElement_Data() = delete;
};
static_assert(sizeof(CompositorFrameTransitionDirectiveSharedElement_Data) == 32,
              "Bad sizeof(CompositorFrameTransitionDirectiveSharedElement_Data)");
// Used by CompositorFrameTransitionDirectiveSharedElement::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CompositorFrameTransitionDirectiveSharedElement_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CompositorFrameTransitionDirectiveSharedElement_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CompositorFrameTransitionDirectiveSharedElement_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<CompositorFrameTransitionDirectiveSharedElement_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CompositorFrameTransitionDirectiveSharedElement_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  CompositorFrameTransitionDirective_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t sequence_id;
  int32_t type;
  uint8_t is_renderer_driven_animation : 1;
  uint8_t pad2_[3];
  int32_t effect;
  mojo::internal::Pointer<internal::CompositorFrameTransitionDirectiveConfig_Data> root_config;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::CompositorFrameTransitionDirectiveSharedElement_Data>>> shared_elements;

 private:
  friend class mojo::internal::MessageFragment<CompositorFrameTransitionDirective_Data>;

  CompositorFrameTransitionDirective_Data();
  ~CompositorFrameTransitionDirective_Data() = delete;
};
static_assert(sizeof(CompositorFrameTransitionDirective_Data) == 40,
              "Bad sizeof(CompositorFrameTransitionDirective_Data)");
// Used by CompositorFrameTransitionDirective::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct CompositorFrameTransitionDirective_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  CompositorFrameTransitionDirective_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~CompositorFrameTransitionDirective_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<CompositorFrameTransitionDirective_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    CompositorFrameTransitionDirective_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace viz

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_COMPOSITING_COMPOSITOR_FRAME_TRANSITION_DIRECTIVE_MOJOM_SHARED_INTERNAL_H_