// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/views/side_panel/customize_chrome/customize_chrome_side_panel_controller.h"

#include "base/test/scoped_feature_list.h"
#include "chrome/browser/ui/ui_features.h"
#include "chrome/browser/ui/views/side_panel/side_panel_registry.h"
#include "chrome/test/base/testing_profile.h"
#include "components/search/ntp_features.h"
#include "content/public/test/browser_task_environment.h"
#include "content/public/test/test_renderer_host.h"
#include "content/public/test/web_contents_tester.h"
#include "testing/gtest/include/gtest/gtest.h"

class CustomizeChromeSidePanelControllerTest : public testing::Test {
 public:
  // testing::Test:
  void SetUp() override {
    testing::Test::SetUp();
    scoped_feature_list_.InitWithFeatures(
        {ntp_features::kCustomizeChromeSidePanel, features::kUnifiedSidePanel},
        {});
    web_contents_ =
        content::WebContentsTester::CreateTestWebContents(&profile_, nullptr);
  }

 protected:
  content::WebContents* get_web_contents() { return web_contents_.get(); }

 private:
  content::BrowserTaskEnvironment task_environment_;
  content::RenderViewHostTestEnabler rvh_enabler_;
  TestingProfile profile_;
  std::unique_ptr<content::WebContents> web_contents_;
  base::test::ScopedFeatureList scoped_feature_list_;
};

TEST_F(CustomizeChromeSidePanelControllerTest, RegisterCustomizeChromeEntry) {
  // When CreateAndRegisterEntry() is called, the current tabs side
  // panel registry should contain a kCustomizeChromeEntry.
  CustomizeChromeSidePanelController side_panel_controller;
  content::WebContents* web_contents = get_web_contents();
  side_panel_controller.CreateAndRegisterEntry(web_contents);
  auto* registry = SidePanelRegistry::Get(web_contents);
  EXPECT_EQ(registry->GetEntryForId(SidePanelEntry::Id::kCustomizeChrome)->id(),
            SidePanelEntry::Id::kCustomizeChrome);
}

TEST_F(CustomizeChromeSidePanelControllerTest, DeregisterCustomizeChromeEntry) {
  // When Deregister() is called, there should be no side panel entry
  // in the registry.
  CustomizeChromeSidePanelController side_panel_controller;
  content::WebContents* web_contents = get_web_contents();
  side_panel_controller.CreateAndRegisterEntry(web_contents);
  auto* registry = SidePanelRegistry::Get(web_contents);
  EXPECT_EQ(registry->GetEntryForId(SidePanelEntry::Id::kCustomizeChrome)->id(),
            SidePanelEntry::Id::kCustomizeChrome);
  side_panel_controller.DeregisterEntry(web_contents);
  EXPECT_EQ(registry->GetEntryForId(SidePanelEntry::Id::kCustomizeChrome),
            nullptr);
}

TEST_F(CustomizeChromeSidePanelControllerTest, CreateAndRegisterMultipleTimes) {
  // When CreateAndRegisterEntry() is called multiple times, only
  // one entry should be added to the registry.
  CustomizeChromeSidePanelController side_panel_controller;
  content::WebContents* web_contents = get_web_contents();
  side_panel_controller.CreateAndRegisterEntry(web_contents);
  auto* registry = SidePanelRegistry::Get(web_contents);
  EXPECT_EQ(registry->GetEntryForId(SidePanelEntry::Id::kCustomizeChrome)->id(),
            SidePanelEntry::Id::kCustomizeChrome);
  side_panel_controller.CreateAndRegisterEntry(web_contents);
  EXPECT_EQ(registry->GetEntryForId(SidePanelEntry::Id::kCustomizeChrome)->id(),
            SidePanelEntry::Id::kCustomizeChrome);
  side_panel_controller.DeregisterEntry(web_contents);
  EXPECT_EQ(registry->GetEntryForId(SidePanelEntry::Id::kCustomizeChrome),
            nullptr);
}

TEST_F(CustomizeChromeSidePanelControllerTest,
       DeregisterEmptyCustomizeChromeEntry) {
  // When there is no customize chrome entry, calling deregister should
  // not crash.
  CustomizeChromeSidePanelController side_panel_controller;
  content::WebContents* web_contents = get_web_contents();
  side_panel_controller.DeregisterEntry(web_contents);
}
