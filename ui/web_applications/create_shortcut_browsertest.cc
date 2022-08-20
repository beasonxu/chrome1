// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/files/file_path.h"
#include "base/memory/scoped_refptr.h"
#include "base/path_service.h"
#include "base/run_loop.h"
#include "base/test/metrics/histogram_tester.h"
#include "base/test/metrics/user_action_tester.h"
#include "chrome/app/chrome_command_ids.h"
#include "chrome/browser/banners/test_app_banner_manager_desktop.h"
#include "chrome/browser/extensions/chrome_test_extension_loader.h"
#include "chrome/browser/ui/browser.h"
#include "chrome/browser/ui/browser_commands.h"
#include "chrome/browser/ui/browser_dialogs.h"
#include "chrome/browser/ui/tabs/tab_strip_model.h"
#include "chrome/browser/ui/web_applications/test/web_app_browsertest_util.h"
#include "chrome/browser/ui/web_applications/web_app_controller_browsertest.h"
#include "chrome/browser/web_applications/test/web_app_test_observers.h"
#include "chrome/browser/web_applications/user_display_mode.h"
#include "chrome/browser/web_applications/web_app_command_manager.h"
#include "chrome/browser/web_applications/web_app_constants.h"
#include "chrome/browser/web_applications/web_app_id.h"
#include "chrome/browser/web_applications/web_app_prefs_utils.h"
#include "chrome/browser/web_applications/web_app_provider.h"
#include "chrome/browser/web_applications/web_app_registrar.h"
#include "chrome/browser/web_applications/web_app_sync_bridge.h"
#include "chrome/common/chrome_paths.h"
#include "content/public/test/browser_test.h"
#include "content/public/test/browser_test_utils.h"
#include "extensions/common/extension.h"
#include "url/gurl.h"

namespace {

std::string LoadExtension(Profile* profile, const base::FilePath& path) {
  extensions::ChromeTestExtensionLoader loader(profile);
  scoped_refptr<const extensions::Extension> extension =
      loader.LoadExtension(path);
  EXPECT_TRUE(extension);
  return extension->id();
}

}  // namespace

namespace web_app {

class CreateShortcutBrowserTest : public WebAppControllerBrowserTest {
 public:
  AppId InstallShortcutAppForCurrentUrl(bool open_as_window = false) {
    chrome::SetAutoAcceptWebAppDialogForTesting(true, open_as_window);
    WebAppTestInstallObserver observer(profile());
    observer.BeginListening();
    CHECK(chrome::ExecuteCommand(browser(), IDC_CREATE_SHORTCUT));
    AppId app_id = observer.Wait();
    chrome::SetAutoAcceptWebAppDialogForTesting(false, false);
    return app_id;
  }

  WebAppRegistrar& registrar() {
    auto* provider = WebAppProvider::GetForTest(profile());
    CHECK(provider);
    return provider->registrar();
  }

  WebAppSyncBridge& sync_bridge() {
    auto* provider = WebAppProvider::GetForTest(profile());
    CHECK(provider);
    return provider->sync_bridge();
  }
};

IN_PROC_BROWSER_TEST_F(CreateShortcutBrowserTest,
                       CreateShortcutForInstallableSite) {
  base::UserActionTester user_action_tester;
  NavigateToURLAndWait(browser(), GetInstallableAppURL());

  AppId app_id = InstallShortcutAppForCurrentUrl();
  EXPECT_EQ(registrar().GetAppShortName(app_id), GetInstallableAppName());
  // Shortcut apps to PWAs should launch in a tab.
  EXPECT_EQ(registrar().GetAppUserDisplayMode(app_id),
            UserDisplayMode::kBrowser);

  EXPECT_EQ(0, user_action_tester.GetActionCount("InstallWebAppFromMenu"));
  EXPECT_EQ(1, user_action_tester.GetActionCount("CreateShortcut"));
}

IN_PROC_BROWSER_TEST_F(CreateShortcutBrowserTest, InstallSourceRecorded) {
  ASSERT_TRUE(embedded_test_server()->Start());

  // LatestWebAppInstallSource should be correctly set and reported to UMA for
  // both installable and non-installable (shortcut) sites.
  for (const GURL& url :
       {GetInstallableAppURL(),
        embedded_test_server()->GetURL(
            "/web_apps/get_manifest.html?theme_color_only.json")}) {
    base::HistogramTester histogram_tester;
    NavigateToURLAndWait(browser(), url);
    AppId app_id = InstallShortcutAppForCurrentUrl();

    EXPECT_EQ(webapps::WebappInstallSource::MENU_CREATE_SHORTCUT,
              *registrar().GetAppInstallSourceForMetrics(app_id));
    histogram_tester.ExpectUniqueSample(
        "Webapp.Install.InstallEvent",
        static_cast<int>(webapps::WebappInstallSource::MENU_CREATE_SHORTCUT),
        1);
  }
}

IN_PROC_BROWSER_TEST_F(CreateShortcutBrowserTest,
                       CanInstallOverTabShortcutApp) {
  NavigateToURLAndWait(browser(), GetInstallableAppURL());
  InstallShortcutAppForCurrentUrl();

  Browser* new_browser =
      NavigateInNewWindowAndAwaitInstallabilityCheck(GetInstallableAppURL());

  EXPECT_EQ(GetAppMenuCommandState(IDC_CREATE_SHORTCUT, new_browser), kEnabled);
  EXPECT_EQ(GetAppMenuCommandState(IDC_INSTALL_PWA, new_browser), kEnabled);
  EXPECT_EQ(GetAppMenuCommandState(IDC_OPEN_IN_PWA_WINDOW, new_browser),
            kNotPresent);
}

IN_PROC_BROWSER_TEST_F(CreateShortcutBrowserTest,
                       CannotInstallOverWindowShortcutApp) {
  NavigateToURLAndWait(browser(), GetInstallableAppURL());
  AppId app_id = InstallShortcutAppForCurrentUrl();
  // Change launch container to open in window.
  sync_bridge().SetAppUserDisplayMode(app_id, UserDisplayMode::kStandalone,
                                      /*is_user_action=*/false);

  Browser* new_browser =
      NavigateInNewWindowAndAwaitInstallabilityCheck(GetInstallableAppURL());

  EXPECT_EQ(GetAppMenuCommandState(IDC_CREATE_SHORTCUT, new_browser), kEnabled);
  EXPECT_EQ(GetAppMenuCommandState(IDC_INSTALL_PWA, new_browser), kNotPresent);
  EXPECT_EQ(GetAppMenuCommandState(IDC_OPEN_IN_PWA_WINDOW, new_browser),
            kEnabled);
}

// Check that toolbar is not shown for shortcut apps within extensions pages.
// This simulates a case where the user has manually navigated to a page hosted
// within an extension, then added it as a shortcut app.
// Regression test for https://crbug.com/828233.
//
// TODO(crbug.com/1253234): Remove chrome-extension scheme for web apps.
IN_PROC_BROWSER_TEST_F(CreateShortcutBrowserTest,
                       ShouldShowCustomTabBarForExtensionPage) {
  // This involves the creation of a regular (non-app) extension with a popup
  // page, and the creation of a shortcut app created from the popup page URL
  // (allowing the extension's popup page to be loaded in a window).

  base::FilePath test_data_dir_;
  base::PathService::Get(chrome::DIR_TEST_DATA, &test_data_dir_);

  // Install the extension that has the popup page.
  std::string extension_id =
      LoadExtension(profile(), test_data_dir_.AppendASCII("extensions")
                                   .AppendASCII("ui")
                                   .AppendASCII("browser_action_popup"));
  base::RunLoop().RunUntilIdle();  // Ensure the extension is fully loaded.

  // Install the shortcut app that links to the extension's popup page.
  const GURL popup_url("chrome-extension://" + extension_id + "/popup.html");

  NavigateToURLAndWait(browser(), popup_url);

  // TODO(crbug.com/1253234): IDC_CREATE_SHORTCUT command must become disabled.
  ASSERT_TRUE(chrome::IsCommandEnabled(browser(), IDC_CREATE_SHORTCUT));

  const AppId app_id = InstallShortcutAppForCurrentUrl();
  Browser* const app_browser = LaunchWebAppBrowserAndWait(app_id);
  CHECK(app_browser);
  CHECK(app_browser != browser());

  // Navigate to the app's launch page; the toolbar should not be visible,
  // because extensions pages are secure.
  NavigateAndCheckForToolbar(app_browser, popup_url, false);
}

// Tests that Create Shortcut doesn't timeout on a page that has a delayed
// iframe load. Context: crbug.com/1046883
IN_PROC_BROWSER_TEST_F(CreateShortcutBrowserTest, WorksAfterDelayedIFrameLoad) {
  ASSERT_TRUE(embedded_test_server()->Start());
  NavigateToURLAndWait(browser(), embedded_test_server()->GetURL(
                                      "/favicon/page_with_favicon.html"));

  // Append an iframe and wait for it to finish loading.
  const char script[] = R"(
    const iframe = document.createElement('iframe');
    iframe.onload = _ => domAutomationController.send('success');
    iframe.srcdoc = 'inner page';
    document.body.appendChild(iframe);
  )";
  EXPECT_EQ(
      content::EvalJs(browser()->tab_strip_model()->GetActiveWebContents(),
                      script, content::EXECUTE_SCRIPT_USE_MANUAL_REPLY)
          .ExtractString(),
      "success");

  InstallShortcutAppForCurrentUrl();
}

// Tests that Create Shortcut on non-promotable sites still uses available
// manifest data.
IN_PROC_BROWSER_TEST_F(CreateShortcutBrowserTest,
                       UseNonPromotableManifestData) {
  ASSERT_TRUE(embedded_test_server()->Start());
  NavigateToURLAndWait(
      browser(), embedded_test_server()->GetURL(
                     "/web_apps/get_manifest.html?theme_color_only.json"));
  AppId app_id = InstallShortcutAppForCurrentUrl();
  EXPECT_EQ(registrar().GetAppThemeColor(app_id),
            SkColorSetRGB(0x12, 0x34, 0x56));
}

// Tests that Create Shortcut won't use manifest data that's invalid.
IN_PROC_BROWSER_TEST_F(CreateShortcutBrowserTest, IgnoreInvalidManifestData) {
  ASSERT_TRUE(embedded_test_server()->Start());
  GURL url = embedded_test_server()->GetURL(
      "/web_apps/get_manifest.html?invalid_start_url.json");
  NavigateToURLAndWait(browser(), url);
  AppId app_id = InstallShortcutAppForCurrentUrl();
  EXPECT_EQ(registrar().GetAppStartUrl(app_id), url);
}

IN_PROC_BROWSER_TEST_F(CreateShortcutBrowserTest,
                       CreateShortcutAgainOverwriteUserDisplayMode) {
  base::UserActionTester user_action_tester;
  NavigateToURLAndWait(browser(), GetInstallableAppURL());

  AppId app_id = InstallShortcutAppForCurrentUrl();
  EXPECT_EQ(registrar().GetAppShortName(app_id), GetInstallableAppName());
  // Shortcut apps to PWAs should launch in a tab.
  EXPECT_EQ(registrar().GetAppUserDisplayMode(app_id),
            UserDisplayMode::kBrowser);
  // TODO(crbug.com/1275945): We need to wait a bit longer for the
  // WebAppInstallTask to complete before starting another install.
  // Move the install/update/uninstall events out of
  // AppRegistrarObserver and into a WebAppInstallManagerObserver
  // interface so they can be guaranteed to fire after the
  // WebAppInstallTask's lifetime has ended.
  base::RunLoop().RunUntilIdle();

  InstallShortcutAppForCurrentUrl(/*open_as_window=*/true);
  // Re-install with enabling open_as_window should update user display mode.
  EXPECT_EQ(registrar().GetAppUserDisplayMode(app_id),
            UserDisplayMode::kStandalone);
}

IN_PROC_BROWSER_TEST_F(CreateShortcutBrowserTest, OpenShortcutWindowOnlyOnce) {
  base::UserActionTester user_action_tester;
  NavigateToURLAndWait(browser(), GetInstallableAppURL());

  WebAppTestInstallObserver observer(profile());
  // The "Create shortcut" call is executed twice, but the dialog
  // must be shown only once.
  ASSERT_TRUE(chrome::ExecuteCommand(browser(), IDC_CREATE_SHORTCUT));
  ASSERT_TRUE(chrome::ExecuteCommand(browser(), IDC_CREATE_SHORTCUT));

  EXPECT_EQ(1u, provider().command_manager().GetCommandCountForTesting());
}

}  // namespace web_app
