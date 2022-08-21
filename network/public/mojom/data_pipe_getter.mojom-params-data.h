// services/network/public/mojom/data_pipe_getter.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace network {
namespace mojom {
namespace internal {

class ValidationContext;
class  DataPipeGetter_Read_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data pipe;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<DataPipeGetter_Read_Params_Data>;

  DataPipeGetter_Read_Params_Data();
  ~DataPipeGetter_Read_Params_Data() = delete;
};
static_assert(sizeof(DataPipeGetter_Read_Params_Data) == 16,
              "Bad sizeof(DataPipeGetter_Read_Params_Data)");
class  DataPipeGetter_Read_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t status;
  uint8_t pad0_[4];
  uint64_t size;

 private:
  friend class mojo::internal::MessageFragment<DataPipeGetter_Read_ResponseParams_Data>;

  DataPipeGetter_Read_ResponseParams_Data();
  ~DataPipeGetter_Read_ResponseParams_Data() = delete;
};
static_assert(sizeof(DataPipeGetter_Read_ResponseParams_Data) == 24,
              "Bad sizeof(DataPipeGetter_Read_ResponseParams_Data)");
class  DataPipeGetter_Clone_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data receiver;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<DataPipeGetter_Clone_Params_Data>;

  DataPipeGetter_Clone_Params_Data();
  ~DataPipeGetter_Clone_Params_Data() = delete;
};
static_assert(sizeof(DataPipeGetter_Clone_Params_Data) == 16,
              "Bad sizeof(DataPipeGetter_Clone_Params_Data)");

}  // namespace internal


class DataPipeGetter_Read_ParamsDataView {
 public:
  DataPipeGetter_Read_ParamsDataView() = default;

  DataPipeGetter_Read_ParamsDataView(
      internal::DataPipeGetter_Read_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  mojo::ScopedDataPipeProducerHandle TakePipe() {
    mojo::ScopedDataPipeProducerHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedDataPipeProducerHandle>(
            &data_->pipe, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DataPipeGetter_Read_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class DataPipeGetter_Read_ResponseParamsDataView {
 public:
  DataPipeGetter_Read_ResponseParamsDataView() = default;

  DataPipeGetter_Read_ResponseParamsDataView(
      internal::DataPipeGetter_Read_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  int32_t status() const {
    return data_->status;
  }
  uint64_t size() const {
    return data_->size;
  }
 private:
  internal::DataPipeGetter_Read_ResponseParams_Data* data_ = nullptr;
};



class DataPipeGetter_Clone_ParamsDataView {
 public:
  DataPipeGetter_Clone_ParamsDataView() = default;

  DataPipeGetter_Clone_ParamsDataView(
      internal::DataPipeGetter_Clone_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::network::mojom::DataPipeGetterInterfaceBase>>(
            &data_->receiver, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::DataPipeGetter_Clone_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};







}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_DATA_PIPE_GETTER_MOJOM_PARAMS_DATA_H_