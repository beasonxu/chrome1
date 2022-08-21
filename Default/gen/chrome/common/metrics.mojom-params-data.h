// chrome/common/metrics.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_COMMON_METRICS_MOJOM_PARAMS_DATA_H_
#define CHROME_COMMON_METRICS_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace chrome {
namespace mojom {
namespace internal {

class ValidationContext;
class  MetricsService_IsMetricsAndCrashReportingEnabled_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<MetricsService_IsMetricsAndCrashReportingEnabled_Params_Data>;

  MetricsService_IsMetricsAndCrashReportingEnabled_Params_Data();
  ~MetricsService_IsMetricsAndCrashReportingEnabled_Params_Data() = delete;
};
static_assert(sizeof(MetricsService_IsMetricsAndCrashReportingEnabled_Params_Data) == 8,
              "Bad sizeof(MetricsService_IsMetricsAndCrashReportingEnabled_Params_Data)");
class  MetricsService_IsMetricsAndCrashReportingEnabled_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t result : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<MetricsService_IsMetricsAndCrashReportingEnabled_ResponseParams_Data>;

  MetricsService_IsMetricsAndCrashReportingEnabled_ResponseParams_Data();
  ~MetricsService_IsMetricsAndCrashReportingEnabled_ResponseParams_Data() = delete;
};
static_assert(sizeof(MetricsService_IsMetricsAndCrashReportingEnabled_ResponseParams_Data) == 16,
              "Bad sizeof(MetricsService_IsMetricsAndCrashReportingEnabled_ResponseParams_Data)");

}  // namespace internal


class MetricsService_IsMetricsAndCrashReportingEnabled_ParamsDataView {
 public:
  MetricsService_IsMetricsAndCrashReportingEnabled_ParamsDataView() = default;

  MetricsService_IsMetricsAndCrashReportingEnabled_ParamsDataView(
      internal::MetricsService_IsMetricsAndCrashReportingEnabled_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::MetricsService_IsMetricsAndCrashReportingEnabled_Params_Data* data_ = nullptr;
};



class MetricsService_IsMetricsAndCrashReportingEnabled_ResponseParamsDataView {
 public:
  MetricsService_IsMetricsAndCrashReportingEnabled_ResponseParamsDataView() = default;

  MetricsService_IsMetricsAndCrashReportingEnabled_ResponseParamsDataView(
      internal::MetricsService_IsMetricsAndCrashReportingEnabled_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool result() const {
    return data_->result;
  }
 private:
  internal::MetricsService_IsMetricsAndCrashReportingEnabled_ResponseParams_Data* data_ = nullptr;
};





}  // namespace mojom
}  // namespace chrome

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // CHROME_COMMON_METRICS_MOJOM_PARAMS_DATA_H_