// content/common/web_ui.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_WEB_UI_MOJOM_PARAMS_DATA_H_
#define CONTENT_COMMON_WEB_UI_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace content {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebUIHost_Send_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> message;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ListValue_Data> args;

 private:
  friend class mojo::internal::MessageFragment<WebUIHost_Send_Params_Data>;

  WebUIHost_Send_Params_Data();
  ~WebUIHost_Send_Params_Data() = delete;
};
static_assert(sizeof(WebUIHost_Send_Params_Data) == 24,
              "Bad sizeof(WebUIHost_Send_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) WebUI_SetProperty_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> property_name;
  mojo::internal::Pointer<mojo::internal::String_Data> property_value_json;

 private:
  friend class mojo::internal::MessageFragment<WebUI_SetProperty_Params_Data>;

  WebUI_SetProperty_Params_Data();
  ~WebUI_SetProperty_Params_Data() = delete;
};
static_assert(sizeof(WebUI_SetProperty_Params_Data) == 24,
              "Bad sizeof(WebUI_SetProperty_Params_Data)");

}  // namespace internal


class WebUIHost_Send_ParamsDataView {
 public:
  WebUIHost_Send_ParamsDataView() = default;

  WebUIHost_Send_ParamsDataView(
      internal::WebUIHost_Send_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMessage(UserType* output) {
    
    auto* pointer = data_->message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetArgsDataView(
      ::mojo_base::mojom::ListValueDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadArgs(UserType* output) {
    
    auto* pointer = data_->args.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::ListValueDataView>(
        pointer, output, message_);
  }
 private:
  internal::WebUIHost_Send_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class WebUI_SetProperty_ParamsDataView {
 public:
  WebUI_SetProperty_ParamsDataView() = default;

  WebUI_SetProperty_ParamsDataView(
      internal::WebUI_SetProperty_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetPropertyNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadPropertyName(UserType* output) {
    
    auto* pointer = data_->property_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetPropertyValueJsonDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadPropertyValueJson(UserType* output) {
    
    auto* pointer = data_->property_value_json.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::WebUI_SetProperty_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void WebUIHost_Send_ParamsDataView::GetMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->message.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void WebUIHost_Send_ParamsDataView::GetArgsDataView(
    ::mojo_base::mojom::ListValueDataView* output) {
  auto pointer = data_->args.Get();
  *output = ::mojo_base::mojom::ListValueDataView(pointer, message_);
}


inline void WebUI_SetProperty_ParamsDataView::GetPropertyNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->property_name.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void WebUI_SetProperty_ParamsDataView::GetPropertyValueJsonDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->property_value_json.Get();
  *output = mojo::StringDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace content

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // CONTENT_COMMON_WEB_UI_MOJOM_PARAMS_DATA_H_