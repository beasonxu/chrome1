// services/viz/privileged/mojom/compositing/layered_window_updater.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_VIZ_PRIVILEGED_MOJOM_COMPOSITING_LAYERED_WINDOW_UPDATER_MOJOM_PARAMS_DATA_H_
#define SERVICES_VIZ_PRIVILEGED_MOJOM_COMPOSITING_LAYERED_WINDOW_UPDATER_MOJOM_PARAMS_DATA_H_

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
class  LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> pixel_size;
  mojo::internal::Pointer<::mojo_base::mojom::internal::UnsafeSharedMemoryRegion_Data> region;

 private:
  friend class mojo::internal::MessageFragment<LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data>;

  LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data();
  ~LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data() = delete;
};
static_assert(sizeof(LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data) == 24,
              "Bad sizeof(LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data)");
class  LayeredWindowUpdater_Draw_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<LayeredWindowUpdater_Draw_Params_Data>;

  LayeredWindowUpdater_Draw_Params_Data();
  ~LayeredWindowUpdater_Draw_Params_Data() = delete;
};
static_assert(sizeof(LayeredWindowUpdater_Draw_Params_Data) == 8,
              "Bad sizeof(LayeredWindowUpdater_Draw_Params_Data)");
class  LayeredWindowUpdater_Draw_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<LayeredWindowUpdater_Draw_ResponseParams_Data>;

  LayeredWindowUpdater_Draw_ResponseParams_Data();
  ~LayeredWindowUpdater_Draw_ResponseParams_Data() = delete;
};
static_assert(sizeof(LayeredWindowUpdater_Draw_ResponseParams_Data) == 8,
              "Bad sizeof(LayeredWindowUpdater_Draw_ResponseParams_Data)");

}  // namespace internal


class LayeredWindowUpdater_OnAllocatedSharedMemory_ParamsDataView {
 public:
  LayeredWindowUpdater_OnAllocatedSharedMemory_ParamsDataView() = default;

  LayeredWindowUpdater_OnAllocatedSharedMemory_ParamsDataView(
      internal::LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetPixelSizeDataView(
      ::gfx::mojom::SizeDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadPixelSize(UserType* output) {
    
    auto* pointer = data_->pixel_size.Get();
    return mojo::internal::Deserialize<::gfx::mojom::SizeDataView>(
        pointer, output, message_);
  }
  inline void GetRegionDataView(
      ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadRegion(UserType* output) {
    
    auto* pointer = data_->region.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::UnsafeSharedMemoryRegionDataView>(
        pointer, output, message_);
  }
 private:
  internal::LayeredWindowUpdater_OnAllocatedSharedMemory_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class LayeredWindowUpdater_Draw_ParamsDataView {
 public:
  LayeredWindowUpdater_Draw_ParamsDataView() = default;

  LayeredWindowUpdater_Draw_ParamsDataView(
      internal::LayeredWindowUpdater_Draw_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LayeredWindowUpdater_Draw_Params_Data* data_ = nullptr;
};



class LayeredWindowUpdater_Draw_ResponseParamsDataView {
 public:
  LayeredWindowUpdater_Draw_ResponseParamsDataView() = default;

  LayeredWindowUpdater_Draw_ResponseParamsDataView(
      internal::LayeredWindowUpdater_Draw_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::LayeredWindowUpdater_Draw_ResponseParams_Data* data_ = nullptr;
};


inline void LayeredWindowUpdater_OnAllocatedSharedMemory_ParamsDataView::GetPixelSizeDataView(
    ::gfx::mojom::SizeDataView* output) {
  auto pointer = data_->pixel_size.Get();
  *output = ::gfx::mojom::SizeDataView(pointer, message_);
}
inline void LayeredWindowUpdater_OnAllocatedSharedMemory_ParamsDataView::GetRegionDataView(
    ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView* output) {
  auto pointer = data_->region.Get();
  *output = ::mojo_base::mojom::UnsafeSharedMemoryRegionDataView(pointer, message_);
}





}  // namespace mojom
}  // namespace viz

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // SERVICES_VIZ_PRIVILEGED_MOJOM_COMPOSITING_LAYERED_WINDOW_UPDATER_MOJOM_PARAMS_DATA_H_