// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_APP_LIST_SEARCH_RANKING_FILTERING_RANKER_H_
#define CHROME_BROWSER_UI_APP_LIST_SEARCH_RANKING_FILTERING_RANKER_H_

#include "chrome/browser/ui/app_list/search/ranking/ranker.h"

namespace app_list {

// A ranker that filters search results, with the main goal of preventing
// results from one provider filling up too much of the results list. This is
// intended to run after any other ranking has finished.
class FilteringRanker : public Ranker {
 public:
  FilteringRanker();
  ~FilteringRanker() override;

  FilteringRanker(const FilteringRanker&) = delete;
  FilteringRanker& operator=(const FilteringRanker&) = delete;

  // Ranker:
  void Start(const std::u16string& query,
             ResultsMap& results,
             CategoriesList& categories) override;
  void UpdateResultRanks(ResultsMap& results, ProviderType provider) override;

 private:
  std::u16string last_query_;
};

}  // namespace app_list

#endif  // CHROME_BROWSER_UI_APP_LIST_SEARCH_RANKING_FILTERING_RANKER_H_
