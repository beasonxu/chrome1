// content/common/histogram_fetcher.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_PARAMS_DATA_H_
#define CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ChildHistogramFetcherFactory_CreateFetcher_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::WritableSharedMemoryRegion_Data> shared_memory;
  mojo::internal::Handle_Data child_histogram_fetcher;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<ChildHistogramFetcherFactory_CreateFetcher_Params_Data>;

  ChildHistogramFetcherFactory_CreateFetcher_Params_Data();
  ~ChildHistogramFetcherFactory_CreateFetcher_Params_Data() = delete;
};
static_assert(sizeof(ChildHistogramFetcherFactory_CreateFetcher_Params_Data) == 24,
              "Bad sizeof(ChildHistogramFetcherFactory_CreateFetcher_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data>;

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data();
  ~ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data() = delete;
};
static_assert(sizeof(ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data) == 8,
              "Bad sizeof(ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_CONTENT_EXPORT) ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> deltas;

 private:
  friend class mojo::internal::MessageFragment<ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data>;

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data();
  ~ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data() = delete;
};
static_assert(sizeof(ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data) == 16,
              "Bad sizeof(ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data)");

}  // namespace internal


class ChildHistogramFetcherFactory_CreateFetcher_ParamsDataView {
 public:
  ChildHistogramFetcherFactory_CreateFetcher_ParamsDataView() = default;

  ChildHistogramFetcherFactory_CreateFetcher_ParamsDataView(
      internal::ChildHistogramFetcherFactory_CreateFetcher_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetSharedMemoryDataView(
      ::mojo_base::mojom::WritableSharedMemoryRegionDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadSharedMemory(UserType* output) {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::mojo_base::mojom::WritableSharedMemoryRegionDataView, UserType>(),
    "Attempting to read the optional `shared_memory` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadSharedMemory` instead "
    "of `ReadSharedMemory if you're fine with null values being "
    "silently ignored in this case.");
    auto* pointer = data_->shared_memory.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::WritableSharedMemoryRegionDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  UserType TakeChildHistogramFetcher() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfaceRequestDataView<::content::mojom::ChildHistogramFetcherInterfaceBase>>(
            &data_->child_histogram_fetcher, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::ChildHistogramFetcherFactory_CreateFetcher_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class ChildHistogramFetcher_GetChildNonPersistentHistogramData_ParamsDataView {
 public:
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ParamsDataView() = default;

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ParamsDataView(
      internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_Params_Data* data_ = nullptr;
};



class ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParamsDataView {
 public:
  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParamsDataView() = default;

  ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParamsDataView(
      internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetDeltasDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadDeltas(UserType* output) {
    
    auto* pointer = data_->deltas.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, message_);
  }
 private:
  internal::ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void ChildHistogramFetcherFactory_CreateFetcher_ParamsDataView::GetSharedMemoryDataView(
    ::mojo_base::mojom::WritableSharedMemoryRegionDataView* output) {
  auto pointer = data_->shared_memory.Get();
  *output = ::mojo_base::mojom::WritableSharedMemoryRegionDataView(pointer, message_);
}




inline void ChildHistogramFetcher_GetChildNonPersistentHistogramData_ResponseParamsDataView::GetDeltasDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->deltas.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, message_);
}

}  // namespace mojom
}  // namespace content

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // CONTENT_COMMON_HISTOGRAM_FETCHER_MOJOM_PARAMS_DATA_H_