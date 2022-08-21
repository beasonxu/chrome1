// chrome/browser/ui/webui/internals/user_education/user_education_internals.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_INTERNALS_USER_EDUCATION_USER_EDUCATION_INTERNALS_MOJOM_SHARED_INTERNAL_H_
#define CHROME_BROWSER_UI_WEBUI_INTERNALS_USER_EDUCATION_USER_EDUCATION_INTERNALS_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace mojom {
namespace user_education_internals {
namespace internal {
class FeaturePromoDemoPageInfo_Data;

#pragma pack(push, 1)
class  FeaturePromoDemoPageInfo_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> display_title;
  mojo::internal::Pointer<mojo::internal::String_Data> display_description;

 private:
  friend class mojo::internal::MessageFragment<FeaturePromoDemoPageInfo_Data>;

  FeaturePromoDemoPageInfo_Data();
  ~FeaturePromoDemoPageInfo_Data() = delete;
};
static_assert(sizeof(FeaturePromoDemoPageInfo_Data) == 24,
              "Bad sizeof(FeaturePromoDemoPageInfo_Data)");
// Used by FeaturePromoDemoPageInfo::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct FeaturePromoDemoPageInfo_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  FeaturePromoDemoPageInfo_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~FeaturePromoDemoPageInfo_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<FeaturePromoDemoPageInfo_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    FeaturePromoDemoPageInfo_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace user_education_internals
}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_INTERNALS_USER_EDUCATION_USER_EDUCATION_INTERNALS_MOJOM_SHARED_INTERNAL_H_