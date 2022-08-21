// third_party/blink/public/mojom/worker/shared_worker_client.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace blink {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerClient_OnCreated_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t creation_context_type;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<SharedWorkerClient_OnCreated_Params_Data>;

  SharedWorkerClient_OnCreated_Params_Data();
  ~SharedWorkerClient_OnCreated_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerClient_OnCreated_Params_Data) == 16,
              "Bad sizeof(SharedWorkerClient_OnCreated_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerClient_OnConnected_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<int32_t>> features_used;

 private:
  friend class mojo::internal::MessageFragment<SharedWorkerClient_OnConnected_Params_Data>;

  SharedWorkerClient_OnConnected_Params_Data();
  ~SharedWorkerClient_OnConnected_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerClient_OnConnected_Params_Data) == 16,
              "Bad sizeof(SharedWorkerClient_OnConnected_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerClient_OnScriptLoadFailed_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  friend class mojo::internal::MessageFragment<SharedWorkerClient_OnScriptLoadFailed_Params_Data>;

  SharedWorkerClient_OnScriptLoadFailed_Params_Data();
  ~SharedWorkerClient_OnScriptLoadFailed_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerClient_OnScriptLoadFailed_Params_Data) == 16,
              "Bad sizeof(SharedWorkerClient_OnScriptLoadFailed_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) SharedWorkerClient_OnFeatureUsed_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t feature;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<SharedWorkerClient_OnFeatureUsed_Params_Data>;

  SharedWorkerClient_OnFeatureUsed_Params_Data();
  ~SharedWorkerClient_OnFeatureUsed_Params_Data() = delete;
};
static_assert(sizeof(SharedWorkerClient_OnFeatureUsed_Params_Data) == 16,
              "Bad sizeof(SharedWorkerClient_OnFeatureUsed_Params_Data)");

}  // namespace internal


class SharedWorkerClient_OnCreated_ParamsDataView {
 public:
  SharedWorkerClient_OnCreated_ParamsDataView() = default;

  SharedWorkerClient_OnCreated_ParamsDataView(
      internal::SharedWorkerClient_OnCreated_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadCreationContextType(UserType* output) const {
    auto data_value = data_->creation_context_type;
    return mojo::internal::Deserialize<::blink::mojom::SharedWorkerCreationContextType>(
        data_value, output);
  }
  ::blink::mojom::SharedWorkerCreationContextType creation_context_type() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::blink::mojom::SharedWorkerCreationContextType>(data_->creation_context_type));
  }
 private:
  internal::SharedWorkerClient_OnCreated_Params_Data* data_ = nullptr;
};



class SharedWorkerClient_OnConnected_ParamsDataView {
 public:
  SharedWorkerClient_OnConnected_ParamsDataView() = default;

  SharedWorkerClient_OnConnected_ParamsDataView(
      internal::SharedWorkerClient_OnConnected_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetFeaturesUsedDataView(
      mojo::ArrayDataView<::blink::mojom::WebFeature>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadFeaturesUsed(UserType* output) {
    
    auto* pointer = data_->features_used.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::blink::mojom::WebFeature>>(
        pointer, output, message_);
  }
 private:
  internal::SharedWorkerClient_OnConnected_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedWorkerClient_OnScriptLoadFailed_ParamsDataView {
 public:
  SharedWorkerClient_OnScriptLoadFailed_ParamsDataView() = default;

  SharedWorkerClient_OnScriptLoadFailed_ParamsDataView(
      internal::SharedWorkerClient_OnScriptLoadFailed_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadErrorMessage(UserType* output) {
    
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::SharedWorkerClient_OnScriptLoadFailed_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class SharedWorkerClient_OnFeatureUsed_ParamsDataView {
 public:
  SharedWorkerClient_OnFeatureUsed_ParamsDataView() = default;

  SharedWorkerClient_OnFeatureUsed_ParamsDataView(
      internal::SharedWorkerClient_OnFeatureUsed_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadFeature(UserType* output) const {
    auto data_value = data_->feature;
    return mojo::internal::Deserialize<::blink::mojom::WebFeature>(
        data_value, output);
  }
  ::blink::mojom::WebFeature feature() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::blink::mojom::WebFeature>(data_->feature));
  }
 private:
  internal::SharedWorkerClient_OnFeatureUsed_Params_Data* data_ = nullptr;
};




inline void SharedWorkerClient_OnConnected_ParamsDataView::GetFeaturesUsedDataView(
    mojo::ArrayDataView<::blink::mojom::WebFeature>* output) {
  auto pointer = data_->features_used.Get();
  *output = mojo::ArrayDataView<::blink::mojom::WebFeature>(pointer, message_);
}


inline void SharedWorkerClient_OnScriptLoadFailed_ParamsDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_CLIENT_MOJOM_PARAMS_DATA_H_