// media/mojo/mojom/cdm_service.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_CDM_SERVICE_MOJOM_PARAMS_DATA_H_
#define MEDIA_MOJO_MOJOM_CDM_SERVICE_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace media {
namespace mojom {
namespace internal {

class ValidationContext;
class  CdmService_CreateCdmFactory_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data factory;
  mojo::internal::Interface_Data frame_interfaces;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<CdmService_CreateCdmFactory_Params_Data>;

  CdmService_CreateCdmFactory_Params_Data();
  ~CdmService_CreateCdmFactory_Params_Data() = delete;
};
static_assert(sizeof(CdmService_CreateCdmFactory_Params_Data) == 24,
              "Bad sizeof(CdmService_CreateCdmFactory_Params_Data)");
class  CdmServiceBroker_GetService_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::FilePath_Data> cdm_path;
  mojo::internal::Handle_Data receiver;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<CdmServiceBroker_GetService_Params_Data>;

  CdmServiceBroker_GetService_Params_Data();
  ~CdmServiceBroker_GetService_Params_Data() = delete;
};
static_assert(sizeof(CdmServiceBroker_GetService_Params_Data) == 24,
              "Bad sizeof(CdmServiceBroker_GetService_Params_Data)");

}  // namespace internal


class CdmService_CreateCdmFactory_ParamsDataView {
 public:
  CdmService_CreateCdmFactory_ParamsDataView() = default;

  CdmService_CreateCdmFactory_ParamsDataView(
      internal::CdmService_CreateCdmFactory_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeFactory() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::media::mojom::CdmFactoryInterfaceBase>>(
            &data_->factory, &result, message_);
    DCHECK(ret);
    return result;
  }
  template <typename UserType>
  UserType TakeFrameInterfaces() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::media::mojom::FrameInterfaceFactoryInterfaceBase>>(
            &data_->frame_interfaces, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CdmService_CreateCdmFactory_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class CdmServiceBroker_GetService_ParamsDataView {
 public:
  CdmServiceBroker_GetService_ParamsDataView() = default;

  CdmServiceBroker_GetService_ParamsDataView(
      internal::CdmServiceBroker_GetService_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetCdmPathDataView(
      ::mojo_base::mojom::FilePathDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadCdmPath(UserType* output) {
    
    auto* pointer = data_->cdm_path.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::FilePathDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::media::mojom::CdmServiceInterfaceBase>>(
            &data_->receiver, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::CdmServiceBroker_GetService_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};




inline void CdmServiceBroker_GetService_ParamsDataView::GetCdmPathDataView(
    ::mojo_base::mojom::FilePathDataView* output) {
  auto pointer = data_->cdm_path.Get();
  *output = ::mojo_base::mojom::FilePathDataView(pointer, message_);
}

}  // namespace mojom
}  // namespace media

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // MEDIA_MOJO_MOJOM_CDM_SERVICE_MOJOM_PARAMS_DATA_H_