// third_party/blink/public/mojom/conversions/attribution_reporting_automation.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONVERSIONS_ATTRIBUTION_REPORTING_AUTOMATION_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONVERSIONS_ATTRIBUTION_REPORTING_AUTOMATION_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace blink {
namespace test {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AttributionReportingAutomation_Reset_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<AttributionReportingAutomation_Reset_Params_Data>;

  AttributionReportingAutomation_Reset_Params_Data();
  ~AttributionReportingAutomation_Reset_Params_Data() = delete;
};
static_assert(sizeof(AttributionReportingAutomation_Reset_Params_Data) == 8,
              "Bad sizeof(AttributionReportingAutomation_Reset_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) AttributionReportingAutomation_Reset_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t success : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<AttributionReportingAutomation_Reset_ResponseParams_Data>;

  AttributionReportingAutomation_Reset_ResponseParams_Data();
  ~AttributionReportingAutomation_Reset_ResponseParams_Data() = delete;
};
static_assert(sizeof(AttributionReportingAutomation_Reset_ResponseParams_Data) == 16,
              "Bad sizeof(AttributionReportingAutomation_Reset_ResponseParams_Data)");

}  // namespace internal


class AttributionReportingAutomation_Reset_ParamsDataView {
 public:
  AttributionReportingAutomation_Reset_ParamsDataView() = default;

  AttributionReportingAutomation_Reset_ParamsDataView(
      internal::AttributionReportingAutomation_Reset_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::AttributionReportingAutomation_Reset_Params_Data* data_ = nullptr;
};



class AttributionReportingAutomation_Reset_ResponseParamsDataView {
 public:
  AttributionReportingAutomation_Reset_ResponseParamsDataView() = default;

  AttributionReportingAutomation_Reset_ResponseParamsDataView(
      internal::AttributionReportingAutomation_Reset_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool success() const {
    return data_->success;
  }
 private:
  internal::AttributionReportingAutomation_Reset_ResponseParams_Data* data_ = nullptr;
};





}  // namespace mojom
}  // namespace test
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONVERSIONS_ATTRIBUTION_REPORTING_AUTOMATION_MOJOM_PARAMS_DATA_H_