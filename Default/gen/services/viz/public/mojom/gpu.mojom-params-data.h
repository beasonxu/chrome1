// services/viz/public/mojom/gpu.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PUBLIC_MOJOM_GPU_MOJOM_PARAMS_DATA_H_
#define SERVICES_VIZ_PUBLIC_MOJOM_GPU_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace viz {
namespace mojom {
namespace internal {

class ValidationContext;
class  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::GpuMemoryBufferId_Data> id;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> size;
  int32_t format;
  int32_t usage;

 private:
  friend class mojo::internal::MessageFragment<GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data>;

  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data();
  ~GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data() = delete;
};
static_assert(sizeof(GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data) == 32,
              "Bad sizeof(GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data)");
class  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::GpuMemoryBufferHandle_Data> buffer_handle;

 private:
  friend class mojo::internal::MessageFragment<GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data>;

  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data();
  ~GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data() = delete;
};
static_assert(sizeof(GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data) == 16,
              "Bad sizeof(GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data)");
class  GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::GpuMemoryBufferId_Data> id;
  mojo::internal::Pointer<::gpu::mojom::internal::SyncToken_Data> sync_token;

 private:
  friend class mojo::internal::MessageFragment<GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data>;

  GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data();
  ~GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data() = delete;
};
static_assert(sizeof(GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data) == 24,
              "Bad sizeof(GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data)");
class  GpuMemoryBufferFactory_CopyGpuMemoryBuffer_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::GpuMemoryBufferHandle_Data> buffer_handle;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnsafeSharedMemoryRegion_Data> shared_memory;

 private:
  friend class mojo::internal::MessageFragment<GpuMemoryBufferFactory_CopyGpuMemoryBuffer_Params_Data>;

  GpuMemoryBufferFactory_CopyGpuMemoryBuffer_Params_Data();
  ~GpuMemoryBufferFactory_CopyGpuMemoryBuffer_Params_Data() = delete;
};
static_assert(sizeof(GpuMemoryBufferFactory_CopyGpuMemoryBuffer_Params_Data) == 24,
              "Bad sizeof(GpuMemoryBufferFactory_CopyGpuMemoryBuffer_Params_Data)");
class  GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ResponseParams_Data>;

  GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ResponseParams_Data();
  ~GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ResponseParams_Data() = delete;
};
static_assert(sizeof(GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ResponseParams_Data) == 16,
              "Bad sizeof(GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ResponseParams_Data)");
class  Gpu_CreateGpuMemoryBufferFactory_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data receiver;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<Gpu_CreateGpuMemoryBufferFactory_Params_Data>;

  Gpu_CreateGpuMemoryBufferFactory_Params_Data();
  ~Gpu_CreateGpuMemoryBufferFactory_Params_Data() = delete;
};
static_assert(sizeof(Gpu_CreateGpuMemoryBufferFactory_Params_Data) == 16,
              "Bad sizeof(Gpu_CreateGpuMemoryBufferFactory_Params_Data)");
class  Gpu_EstablishGpuChannel_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<Gpu_EstablishGpuChannel_Params_Data>;

  Gpu_EstablishGpuChannel_Params_Data();
  ~Gpu_EstablishGpuChannel_Params_Data() = delete;
};
static_assert(sizeof(Gpu_EstablishGpuChannel_Params_Data) == 8,
              "Bad sizeof(Gpu_EstablishGpuChannel_Params_Data)");
class  Gpu_EstablishGpuChannel_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t client_id;
  mojo::internal::Handle_Data channel_handle;
  mojo::internal::Pointer<::gpu::mojom::internal::GpuInfo_Data> gpu_info;
  mojo::internal::Pointer<::gpu::mojom::internal::GpuFeatureInfo_Data> gpu_feature_info;

 private:
  friend class mojo::internal::MessageFragment<Gpu_EstablishGpuChannel_ResponseParams_Data>;

  Gpu_EstablishGpuChannel_ResponseParams_Data();
  ~Gpu_EstablishGpuChannel_ResponseParams_Data() = delete;
};
static_assert(sizeof(Gpu_EstablishGpuChannel_ResponseParams_Data) == 32,
              "Bad sizeof(Gpu_EstablishGpuChannel_ResponseParams_Data)");
class  Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Handle_Data vea_provider;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data>;

  Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data();
  ~Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data() = delete;
};
static_assert(sizeof(Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data) == 16,
              "Bad sizeof(Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data)");

}  // namespace internal


class GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ParamsDataView {
 public:
  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ParamsDataView() = default;

  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ParamsDataView(
      internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::gfx::mojom::GpuMemoryBufferIdDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadId(UserType* output) {
    
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::gfx::mojom::GpuMemoryBufferIdDataView>(
        pointer, output, message_);
  }
  inline void GetSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSize(UserType* output) {
    
    auto* pointer = data_->size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  [[nodiscard]] bool ReadFormat(UserType* output) const {
    auto data_value = data_->format;
    return mojo::internal::Deserialize<::gfx::mojom::BufferFormat>(
        data_value, output);
  }
  ::gfx::mojom::BufferFormat format() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::gfx::mojom::BufferFormat>(data_->format));
  }
  template <typename UserType>
  [[nodiscard]] bool ReadUsage(UserType* output) const {
    auto data_value = data_->usage;
    return mojo::internal::Deserialize<::gfx::mojom::BufferUsage>(
        data_value, output);
  }
  ::gfx::mojom::BufferUsage usage() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::gfx::mojom::BufferUsage>(data_->usage));
  }
 private:
  internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParamsDataView {
 public:
  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParamsDataView() = default;

  GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParamsDataView(
      internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetBufferHandleDataView(
      ::gfx::mojom::GpuMemoryBufferHandleDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadBufferHandle(UserType* output) {
    
    auto* pointer = data_->buffer_handle.Get();
    return mojo::internal::Deserialize<::gfx::mojom::GpuMemoryBufferHandleDataView>(
        pointer, output, message_);
  }
 private:
  internal::GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_ParamsDataView {
 public:
  GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_ParamsDataView() = default;

  GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_ParamsDataView(
      internal::GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetIdDataView(
      ::gfx::mojom::GpuMemoryBufferIdDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadId(UserType* output) {
    
    auto* pointer = data_->id.Get();
    return mojo::internal::Deserialize<::gfx::mojom::GpuMemoryBufferIdDataView>(
        pointer, output, message_);
  }
  inline void GetSyncTokenDataView(
      ::gpu::mojom::SyncTokenDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSyncToken(UserType* output) {
    
    auto* pointer = data_->sync_token.Get();
    return mojo::internal::Deserialize<::gpu::mojom::SyncTokenDataView>(
        pointer, output, message_);
  }
 private:
  internal::GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ParamsDataView {
 public:
  GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ParamsDataView() = default;

  GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ParamsDataView(
      internal::GpuMemoryBufferFactory_CopyGpuMemoryBuffer_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetBufferHandleDataView(
      ::gfx::mojom::GpuMemoryBufferHandleDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadBufferHandle(UserType* output) {
    
    auto* pointer = data_->buffer_handle.Get();
    return mojo::internal::Deserialize<::gfx::mojom::GpuMemoryBufferHandleDataView>(
        pointer, output, message_);
  }
  inline void GetSharedMemoryDataView(
      ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSharedMemory(UserType* output) {
    
    auto* pointer = data_->shared_memory.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnsafeSharedMemoryRegionDataView>(
        pointer, output, message_);
  }
 private:
  internal::GpuMemoryBufferFactory_CopyGpuMemoryBuffer_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ResponseParamsDataView {
 public:
  GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ResponseParamsDataView() = default;

  GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ResponseParamsDataView(
      internal::GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ResponseParams_Data* data_ = nullptr;
};



class Gpu_CreateGpuMemoryBufferFactory_ParamsDataView {
 public:
  Gpu_CreateGpuMemoryBufferFactory_ParamsDataView() = default;

  Gpu_CreateGpuMemoryBufferFactory_ParamsDataView(
      internal::Gpu_CreateGpuMemoryBufferFactory_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeReceiver() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::viz::mojom::GpuMemoryBufferFactoryInterfaceBase>>(
            &data_->receiver, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Gpu_CreateGpuMemoryBufferFactory_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class Gpu_EstablishGpuChannel_ParamsDataView {
 public:
  Gpu_EstablishGpuChannel_ParamsDataView() = default;

  Gpu_EstablishGpuChannel_ParamsDataView(
      internal::Gpu_EstablishGpuChannel_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::Gpu_EstablishGpuChannel_Params_Data* data_ = nullptr;
};



class Gpu_EstablishGpuChannel_ResponseParamsDataView {
 public:
  Gpu_EstablishGpuChannel_ResponseParamsDataView() = default;

  Gpu_EstablishGpuChannel_ResponseParamsDataView(
      internal::Gpu_EstablishGpuChannel_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  int32_t client_id() const {
    return data_->client_id;
  }
  mojo::ScopedMessagePipeHandle TakeChannelHandle() {
    mojo::ScopedMessagePipeHandle result;
    bool ret =
        mojo::internal::Deserialize<mojo::ScopedMessagePipeHandle>(
            &data_->channel_handle, &result, message_);
    DCHECK(ret);
    return result;
  }
  inline void GetGpuInfoDataView(
      ::gpu::mojom::GpuInfoDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadGpuInfo(UserType* output) {
    
    auto* pointer = data_->gpu_info.Get();
    return mojo::internal::Deserialize<::gpu::mojom::GpuInfoDataView>(
        pointer, output, message_);
  }
  inline void GetGpuFeatureInfoDataView(
      ::gpu::mojom::GpuFeatureInfoDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadGpuFeatureInfo(UserType* output) {
    
    auto* pointer = data_->gpu_feature_info.Get();
    return mojo::internal::Deserialize<::gpu::mojom::GpuFeatureInfoDataView>(
        pointer, output, message_);
  }
 private:
  internal::Gpu_EstablishGpuChannel_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class Gpu_CreateVideoEncodeAcceleratorProvider_ParamsDataView {
 public:
  Gpu_CreateVideoEncodeAcceleratorProvider_ParamsDataView() = default;

  Gpu_CreateVideoEncodeAcceleratorProvider_ParamsDataView(
      internal::Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeVeaProvider() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::media::mojom::VideoEncodeAcceleratorProviderInterfaceBase>>(
            &data_->vea_provider, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::Gpu_CreateVideoEncodeAcceleratorProvider_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ParamsDataView::GetIdDataView(
    ::gfx::mojom::GpuMemoryBufferIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::gfx::mojom::GpuMemoryBufferIdDataView(pointer, message_);
}
inline void GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ParamsDataView::GetSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, message_);
}


inline void GpuMemoryBufferFactory_CreateGpuMemoryBuffer_ResponseParamsDataView::GetBufferHandleDataView(
    ::gfx::mojom::GpuMemoryBufferHandleDataView* output) {
  auto pointer = data_->buffer_handle.Get();
  *output = ::gfx::mojom::GpuMemoryBufferHandleDataView(pointer, message_);
}


inline void GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_ParamsDataView::GetIdDataView(
    ::gfx::mojom::GpuMemoryBufferIdDataView* output) {
  auto pointer = data_->id.Get();
  *output = ::gfx::mojom::GpuMemoryBufferIdDataView(pointer, message_);
}
inline void GpuMemoryBufferFactory_DestroyGpuMemoryBuffer_ParamsDataView::GetSyncTokenDataView(
    ::gpu::mojom::SyncTokenDataView* output) {
  auto pointer = data_->sync_token.Get();
  *output = ::gpu::mojom::SyncTokenDataView(pointer, message_);
}


inline void GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ParamsDataView::GetBufferHandleDataView(
    ::gfx::mojom::GpuMemoryBufferHandleDataView* output) {
  auto pointer = data_->buffer_handle.Get();
  *output = ::gfx::mojom::GpuMemoryBufferHandleDataView(pointer, message_);
}
inline void GpuMemoryBufferFactory_CopyGpuMemoryBuffer_ParamsDataView::GetSharedMemoryDataView(
    ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output) {
  auto pointer = data_->shared_memory.Get();
  *output = ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView(pointer, message_);
}








inline void Gpu_EstablishGpuChannel_ResponseParamsDataView::GetGpuInfoDataView(
    ::gpu::mojom::GpuInfoDataView* output) {
  auto pointer = data_->gpu_info.Get();
  *output = ::gpu::mojom::GpuInfoDataView(pointer, message_);
}
inline void Gpu_EstablishGpuChannel_ResponseParamsDataView::GetGpuFeatureInfoDataView(
    ::gpu::mojom::GpuFeatureInfoDataView* output) {
  auto pointer = data_->gpu_feature_info.Get();
  *output = ::gpu::mojom::GpuFeatureInfoDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // SERVICES_VIZ_PUBLIC_MOJOM_GPU_MOJOM_PARAMS_DATA_H_