// chrome/browser/ui/webui/feed_internals/feed_internals.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_FEED_INTERNALS_FEED_INTERNALS_MOJOM_TEST_UTILS_H_
#define CHROME_BROWSER_UI_WEBUI_FEED_INTERNALS_FEED_INTERNALS_MOJOM_TEST_UTILS_H_

#include "chrome/browser/ui/webui/feed_internals/feed_internals.mojom.h"


namespace feed_internals {
namespace mojom {


class  PageHandlerInterceptorForTesting : public PageHandler {
  virtual PageHandler* GetForwardingInterface() = 0;
  void GetGeneralProperties(GetGeneralPropertiesCallback callback) override;
  void GetLastFetchProperties(GetLastFetchPropertiesCallback callback) override;
  void RefreshForYouFeed() override;
  void RefreshFollowingFeed() override;
  void RefreshWebFeedSuggestions() override;
  void GetFeedProcessScopeDump(GetFeedProcessScopeDumpCallback callback) override;
  void GetFeedHistograms(GetFeedHistogramsCallback callback) override;
  void OverrideFeedHost(const ::GURL& host) override;
  void OverrideDiscoverApiEndpoint(const ::GURL& endpoint_url) override;
  void OverrideFeedStreamData(const std::vector<uint8_t>& data) override;
  void SetWebFeedFollowIntroDebugEnabled(bool enabled) override;
  void SetUseFeedQueryRequests(bool use_legacy) override;
  void SetFollowingFeedOrder(FeedOrder order) override;
};
class  PageHandlerAsyncWaiter {
 public:
  explicit PageHandlerAsyncWaiter(PageHandler* proxy);

  PageHandlerAsyncWaiter(const PageHandlerAsyncWaiter&) = delete;
  PageHandlerAsyncWaiter& operator=(const PageHandlerAsyncWaiter&) = delete;

  ~PageHandlerAsyncWaiter();
  void GetGeneralProperties(
      PropertiesPtr* out_properties);
  void GetLastFetchProperties(
      LastFetchPropertiesPtr* out_properties);
  void GetFeedProcessScopeDump(
      std::string* out_dump);
  void GetFeedHistograms(
      std::string* out_log);

 private:
  PageHandler* const proxy_;
};




}  // namespace mojom
}  // namespace feed_internals

#endif  // CHROME_BROWSER_UI_WEBUI_FEED_INTERNALS_FEED_INTERNALS_MOJOM_TEST_UTILS_H_