// content/services/auction_worklet/public/mojom/seller_worklet.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_SERVICES_AUCTION_WORKLET_PUBLIC_MOJOM_SELLER_WORKLET_MOJOM_TEST_UTILS_H_
#define CONTENT_SERVICES_AUCTION_WORKLET_PUBLIC_MOJOM_SELLER_WORKLET_MOJOM_TEST_UTILS_H_

#include "content/services/auction_worklet/public/mojom/seller_worklet.mojom.h"
#include "content/common/content_export.h"


namespace auction_worklet {
namespace mojom {


class CONTENT_EXPORT SellerWorkletInterceptorForTesting : public SellerWorklet {
  virtual SellerWorklet* GetForwardingInterface() = 0;
  void ScoreAd(const std::string& ad_metadata_json, double bid, const ::blink::AuctionConfig::NonSharedParams& auction_ad_config_non_shared_params, ComponentAuctionOtherSellerPtr browser_signals_other_seller, const ::url::Origin& browser_signal_interest_group_owner, const ::GURL& browser_signal_render_url, const std::vector<::GURL>& browser_signal_ad_component_render_urls, uint32_t browser_signal_bidding_duration_msecs, absl::optional<::base::TimeDelta> seller_timeout, uint64_t trace_id, ScoreAdCallback callback) override;
  void SendPendingSignalsRequests() override;
  void ReportResult(const ::blink::AuctionConfig::NonSharedParams& auction_ad_config_non_shared_params, ComponentAuctionOtherSellerPtr browser_signals_other_seller, const ::url::Origin& browser_signal_interest_group_owner, const ::GURL& browser_signal_render_url, double browser_signal_bid, double browser_signal_desirability, double browser_signal_highest_scoring_other_bid, ComponentAuctionReportResultParamsPtr browser_signals_component_auction_report_result_params, uint32_t scoring_signals_data_version, bool has_scoring_signals_data_version, uint64_t trace_id, ReportResultCallback callback) override;
  void ConnectDevToolsAgent(::mojo::PendingAssociatedReceiver<::blink::mojom::DevToolsAgent> agent) override;
};
class CONTENT_EXPORT SellerWorkletAsyncWaiter {
 public:
  explicit SellerWorkletAsyncWaiter(SellerWorklet* proxy);

  SellerWorkletAsyncWaiter(const SellerWorkletAsyncWaiter&) = delete;
  SellerWorkletAsyncWaiter& operator=(const SellerWorkletAsyncWaiter&) = delete;

  ~SellerWorkletAsyncWaiter();
  void ScoreAd(
      const std::string& ad_metadata_json, double bid, const ::blink::AuctionConfig::NonSharedParams& auction_ad_config_non_shared_params, ComponentAuctionOtherSellerPtr browser_signals_other_seller, const ::url::Origin& browser_signal_interest_group_owner, const ::GURL& browser_signal_render_url, const std::vector<::GURL>& browser_signal_ad_component_render_urls, uint32_t browser_signal_bidding_duration_msecs, absl::optional<::base::TimeDelta> seller_timeout, uint64_t trace_id, double* out_score, ComponentAuctionModifiedBidParamsPtr* out_component_auction_modified_bid_params, uint32_t* out_scoring_signals_data_version, bool* out_has_scoring_signals_data_version, absl::optional<::GURL>* out_debug_loss_report_url, absl::optional<::GURL>* out_debug_win_report_url, std::vector<::auction_worklet::mojom::PrivateAggregationRequestPtr>* out_pa_requests, std::vector<std::string>* out_errors);
  void ReportResult(
      const ::blink::AuctionConfig::NonSharedParams& auction_ad_config_non_shared_params, ComponentAuctionOtherSellerPtr browser_signals_other_seller, const ::url::Origin& browser_signal_interest_group_owner, const ::GURL& browser_signal_render_url, double browser_signal_bid, double browser_signal_desirability, double browser_signal_highest_scoring_other_bid, ComponentAuctionReportResultParamsPtr browser_signals_component_auction_report_result_params, uint32_t scoring_signals_data_version, bool has_scoring_signals_data_version, uint64_t trace_id, absl::optional<std::string>* out_signals_for_winner, absl::optional<::GURL>* out_report_url, base::flat_map<std::string, ::GURL>* out_ad_beacon_map, std::vector<::auction_worklet::mojom::PrivateAggregationRequestPtr>* out_pa_requests, std::vector<std::string>* out_error_msgs);

 private:
  SellerWorklet* const proxy_;
};




}  // namespace mojom
}  // namespace auction_worklet

#endif  // CONTENT_SERVICES_AUCTION_WORKLET_PUBLIC_MOJOM_SELLER_WORKLET_MOJOM_TEST_UTILS_H_