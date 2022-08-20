// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_VIEWS_SIDE_PANEL_SIDE_PANEL_ENTRY_H_
#define CHROME_BROWSER_UI_VIEWS_SIDE_PANEL_SIDE_PANEL_ENTRY_H_

#include <map>
#include <memory>
#include <string>

#include "base/callback.h"
#include "base/observer_list.h"
#include "base/time/time.h"
#include "ui/base/models/image_model.h"
#include "ui/views/view.h"

class SidePanelEntryObserver;

// This class represents an entry inside the side panel. These are owned by
// a SidePanelRegistry (either a per-tab or a per-window registry).
class SidePanelEntry final {
 public:
  // Note this order matches that of the combobox options in the side panel.
  // If adding a new Id here, you must also update id_to_histogram_name_map
  // in side_panel_util.cc and SidePanelEntry in browser/histograms.xml.
  enum class Id {
    // Global Entries
    kReadingList,
    kBookmarks,
    kHistoryClusters,
    kReadAnything,
    kUserNote,
    kFeed,
    // Contextual Entries
    kSideSearch,
    kLens,
    kAssistant,
    kAboutThisSite,
    kCustomizeChrome
  };

  SidePanelEntry(Id id,
                 std::u16string name,
                 ui::ImageModel icon,
                 base::RepeatingCallback<std::unique_ptr<views::View>()>
                     create_content_callback);
  SidePanelEntry(const SidePanelEntry&) = delete;
  SidePanelEntry& operator=(const SidePanelEntry&) = delete;
  ~SidePanelEntry();

  // Creates the content to be shown inside the side panel when this entry is
  // shown.
  std::unique_ptr<views::View> GetContent();
  void CacheView(std::unique_ptr<views::View> view);
  void ClearCachedView();
  views::View* CachedView() {
    return content_view_ ? content_view_.get() : nullptr;
  }

  // Called when the entry has been shown/hidden in the side panel.
  void OnEntryShown();
  void OnEntryHidden();

  Id id() const { return id_; }
  const std::u16string& name() const { return name_; }
  const ui::ImageModel& icon() const { return icon_; }

  void AddObserver(SidePanelEntryObserver* observer);
  void RemoveObserver(SidePanelEntryObserver* observer);

  base::WeakPtr<SidePanelEntry> GetWeakPtr() {
    return weak_factory_.GetWeakPtr();
  }

 private:
  const Id id_;
  const std::u16string name_;
  const ui::ImageModel icon_;
  std::unique_ptr<views::View> content_view_;

  base::RepeatingCallback<std::unique_ptr<views::View>()>
      create_content_callback_;

  base::TimeTicks entry_shown_timestamp_;

  base::ObserverList<SidePanelEntryObserver> observers_;

  base::WeakPtrFactory<SidePanelEntry> weak_factory_{this};
};

#endif  // CHROME_BROWSER_UI_VIEWS_SIDE_PANEL_SIDE_PANEL_ENTRY_H_
