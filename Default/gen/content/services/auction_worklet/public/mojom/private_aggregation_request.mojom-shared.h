// content/services/auction_worklet/public/mojom/private_aggregation_request.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_SERVICES_AUCTION_WORKLET_PUBLIC_MOJOM_PRIVATE_AGGREGATION_REQUEST_MOJOM_SHARED_H_
#define CONTENT_SERVICES_AUCTION_WORKLET_PUBLIC_MOJOM_PRIVATE_AGGREGATION_REQUEST_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <iosfwd>
#include <type_traits>
#include <utility>
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "content/services/auction_worklet/public/mojom/private_aggregation_request.mojom-shared-internal.h"
#include "content/common/aggregatable_report.mojom-shared.h"



#include "base/component_export.h"




namespace auction_worklet {
namespace mojom {
class PrivateAggregationRequestDataView;



}  // namespace mojom
}  // namespace auction_worklet

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::auction_worklet::mojom::PrivateAggregationRequestDataView> {
  using Data = ::auction_worklet::mojom::internal::PrivateAggregationRequest_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

}  // namespace internal
}  // namespace mojo


namespace auction_worklet {
namespace mojom {


class PrivateAggregationRequestDataView {
 public:
  PrivateAggregationRequestDataView() = default;

  PrivateAggregationRequestDataView(
      internal::PrivateAggregationRequest_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetContributionDataView(
      ::content::mojom::AggregatableReportHistogramContributionDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadContribution(UserType* output) {
    
    auto* pointer = data_->contribution.Get();
    return mojo::internal::Deserialize<::content::mojom::AggregatableReportHistogramContributionDataView>(
        pointer, output, message_);
  }
  template <typename UserType>
  [[nodiscard]] bool ReadAggregationMode(UserType* output) const {
    auto data_value = data_->aggregation_mode;
    return mojo::internal::Deserialize<::content::mojom::AggregationServiceMode>(
        data_value, output);
  }
  ::content::mojom::AggregationServiceMode aggregation_mode() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::content::mojom::AggregationServiceMode>(data_->aggregation_mode));
  }
 private:
  internal::PrivateAggregationRequest_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace auction_worklet

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::auction_worklet::mojom::PrivateAggregationRequestDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::auction_worklet::mojom::PrivateAggregationRequestDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::auction_worklet::mojom::internal::PrivateAggregationRequest_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::contribution(input)) in_contribution = Traits::contribution(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->contribution)::BaseType> contribution_fragment(
            fragment.message());
    mojo::internal::Serialize<::content::mojom::AggregatableReportHistogramContributionDataView>(
        in_contribution, contribution_fragment);
    fragment->contribution.Set(
        contribution_fragment.is_null() ? nullptr : contribution_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->contribution.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null contribution in PrivateAggregationRequest struct");
    mojo::internal::Serialize<::content::mojom::AggregationServiceMode>(
        Traits::aggregation_mode(input), &fragment->aggregation_mode);
  }

  static bool Deserialize(::auction_worklet::mojom::internal::PrivateAggregationRequest_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::auction_worklet::mojom::PrivateAggregationRequestDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace auction_worklet {
namespace mojom {

inline void PrivateAggregationRequestDataView::GetContributionDataView(
    ::content::mojom::AggregatableReportHistogramContributionDataView* output) {
  auto pointer = data_->contribution.Get();
  *output = ::content::mojom::AggregatableReportHistogramContributionDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace auction_worklet

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // CONTENT_SERVICES_AUCTION_WORKLET_PUBLIC_MOJOM_PRIVATE_AGGREGATION_REQUEST_MOJOM_SHARED_H_