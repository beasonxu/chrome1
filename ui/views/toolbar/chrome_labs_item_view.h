// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_VIEWS_TOOLBAR_CHROME_LABS_ITEM_VIEW_H_
#define CHROME_BROWSER_UI_VIEWS_TOOLBAR_CHROME_LABS_ITEM_VIEW_H_

#include "base/callback.h"
#include "base/memory/raw_ptr.h"
#include "ui/base/metadata/metadata_header_macros.h"
#include "ui/views/view.h"

class Browser;
struct LabInfo;

namespace flags_ui {
struct FeatureEntry;
}

namespace user_education {
class NewBadgeLabel;
}

namespace views {
class Combobox;
class MdTextButton;
}  // namespace views

class ChromeLabsItemView : public views::View {
 public:
  METADATA_HEADER(ChromeLabsItemView);
  // TODO(elainechien): Have the mediator extract all LabInfo so that views do
  // not need to have ChromeLabsModel structures in their dependencies.
  ChromeLabsItemView(
      const LabInfo& lab,
      int default_index,
      const flags_ui::FeatureEntry* feature_entry,
      base::RepeatingCallback<void(ChromeLabsItemView* item_view)>
          combobox_callback,
      Browser* browser);

  ~ChromeLabsItemView() override;

  absl::optional<size_t> GetSelectedIndex() const;

  void ShowNewBadge();

  views::Combobox* GetLabStateComboboxForTesting() {
    return lab_state_combobox_;
  }

  views::MdTextButton* GetFeedbackButtonForTesting() {
    return feedback_button_;
  }

  user_education::NewBadgeLabel* GetNewBadgeForTesting() {
    return experiment_name_;
  }

  const flags_ui::FeatureEntry* GetFeatureEntry();

 private:
  raw_ptr<user_education::NewBadgeLabel> experiment_name_;

  // Combobox with selected state of the lab.
  views::Combobox* lab_state_combobox_;

  raw_ptr<const flags_ui::FeatureEntry> feature_entry_;

  views::MdTextButton* feedback_button_;

  base::RepeatingClosureList combobox_callback_list_;
};

#endif  // CHROME_BROWSER_UI_VIEWS_TOOLBAR_CHROME_LABS_ITEM_VIEW_H_
