// components/no_state_prefetch/common/prerender_canceler.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_NO_STATE_PREFETCH_COMMON_PRERENDER_CANCELER_MOJOM_PARAMS_DATA_H_
#define COMPONENTS_NO_STATE_PREFETCH_COMMON_PRERENDER_CANCELER_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace prerender {
namespace mojom {
namespace internal {

class ValidationContext;
class  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data>;

  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data();
  ~PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data() = delete;
};
static_assert(sizeof(PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data) == 8,
              "Bad sizeof(PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data)");
class  PrerenderCanceler_CancelPrerenderForNoStatePrefetch_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<PrerenderCanceler_CancelPrerenderForNoStatePrefetch_Params_Data>;

  PrerenderCanceler_CancelPrerenderForNoStatePrefetch_Params_Data();
  ~PrerenderCanceler_CancelPrerenderForNoStatePrefetch_Params_Data() = delete;
};
static_assert(sizeof(PrerenderCanceler_CancelPrerenderForNoStatePrefetch_Params_Data) == 8,
              "Bad sizeof(PrerenderCanceler_CancelPrerenderForNoStatePrefetch_Params_Data)");

}  // namespace internal


class PrerenderCanceler_CancelPrerenderForUnsupportedScheme_ParamsDataView {
 public:
  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_ParamsDataView() = default;

  PrerenderCanceler_CancelPrerenderForUnsupportedScheme_ParamsDataView(
      internal::PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PrerenderCanceler_CancelPrerenderForUnsupportedScheme_Params_Data* data_ = nullptr;
};



class PrerenderCanceler_CancelPrerenderForNoStatePrefetch_ParamsDataView {
 public:
  PrerenderCanceler_CancelPrerenderForNoStatePrefetch_ParamsDataView() = default;

  PrerenderCanceler_CancelPrerenderForNoStatePrefetch_ParamsDataView(
      internal::PrerenderCanceler_CancelPrerenderForNoStatePrefetch_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PrerenderCanceler_CancelPrerenderForNoStatePrefetch_Params_Data* data_ = nullptr;
};





}  // namespace mojom
}  // namespace prerender

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // COMPONENTS_NO_STATE_PREFETCH_COMMON_PRERENDER_CANCELER_MOJOM_PARAMS_DATA_H_