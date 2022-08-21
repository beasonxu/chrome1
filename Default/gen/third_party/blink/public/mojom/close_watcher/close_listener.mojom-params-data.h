// third_party/blink/public/mojom/close_watcher/close_listener.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLOSE_WATCHER_CLOSE_LISTENER_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLOSE_WATCHER_CLOSE_LISTENER_MOJOM_PARAMS_DATA_H_

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
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CloseListener_Signal_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<CloseListener_Signal_Params_Data>;

  CloseListener_Signal_Params_Data();
  ~CloseListener_Signal_Params_Data() = delete;
};
static_assert(sizeof(CloseListener_Signal_Params_Data) == 8,
              "Bad sizeof(CloseListener_Signal_Params_Data)");

}  // namespace internal


class CloseListener_Signal_ParamsDataView {
 public:
  CloseListener_Signal_ParamsDataView() = default;

  CloseListener_Signal_ParamsDataView(
      internal::CloseListener_Signal_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CloseListener_Signal_Params_Data* data_ = nullptr;
};



}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLOSE_WATCHER_CLOSE_LISTENER_MOJOM_PARAMS_DATA_H_