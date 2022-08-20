// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/views/select_file_dialog_extension.h"

#include <memory>

#include "ash/constants/ash_features.h"
#include "ash/constants/ash_pref_names.h"
#include "ash/public/cpp/keyboard/keyboard_switches.h"
#include "ash/public/cpp/style/color_provider.h"
#include "ash/public/cpp/style/dark_light_mode_controller.h"
#include "ash/public/cpp/style/scoped_light_mode_as_default.h"
#include "ash/public/cpp/test/shell_test_api.h"
#include "base/callback_helpers.h"
#include "base/files/file_util.h"
#include "base/files/scoped_temp_dir.h"
#include "base/logging.h"
#include "base/path_service.h"
#include "base/run_loop.h"
#include "base/strings/utf_string_conversions.h"
#include "base/test/scoped_feature_list.h"
#include "base/threading/platform_thread.h"
#include "base/threading/thread_restrictions.h"
#include "build/build_config.h"
#include "chrome/browser/ash/file_manager/file_manager_test_util.h"
#include "chrome/browser/ash/file_manager/volume_manager.h"
#include "chrome/browser/extensions/extension_browsertest.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/ui/ash/keyboard/chrome_keyboard_controller_client.h"
#include "chrome/browser/ui/browser.h"
#include "chrome/browser/ui/browser_navigator.h"
#include "chrome/browser/ui/browser_navigator_params.h"
#include "chrome/browser/ui/browser_window.h"
#include "chrome/common/chrome_paths.h"
#include "chrome/common/pref_names.h"
#include "chrome/test/base/chrome_test_utils.h"
#include "chrome/test/base/ui_test_utils.h"
#include "chromeos/constants/chromeos_features.h"
#include "chromeos/ui/base/window_properties.h"
#include "components/prefs/pref_service.h"
#include "content/public/browser/render_frame_host.h"
#include "content/public/browser/render_view_host.h"
#include "content/public/test/browser_test.h"
#include "content/public/test/browser_test_utils.h"
#include "content/public/test/test_utils.h"
#include "extensions/browser/extension_registry.h"
#include "extensions/browser/extension_registry_factory.h"
#include "extensions/browser/process_manager.h"
#include "extensions/test/extension_background_page_waiter.h"
#include "extensions/test/extension_test_message_listener.h"
#include "net/test/embedded_test_server/embedded_test_server.h"
#include "ui/aura/window.h"
#include "ui/gfx/color_palette.h"
#include "ui/shell_dialogs/select_file_dialog.h"
#include "ui/shell_dialogs/select_file_policy.h"
#include "ui/shell_dialogs/selected_file_info.h"

namespace {

class KeyboardVisibleWaiter : public ChromeKeyboardControllerClient::Observer {
 public:
  KeyboardVisibleWaiter() {
    ChromeKeyboardControllerClient::Get()->AddObserver(this);
  }
  ~KeyboardVisibleWaiter() override {
    ChromeKeyboardControllerClient::Get()->RemoveObserver(this);
  }

  void Wait() { run_loop_.Run(); }

  // ChromeKeyboardControllerClient::Observer
  void OnKeyboardVisibilityChanged(bool visible) override {
    if (visible)
      run_loop_.QuitWhenIdle();
  }

 private:
  base::RunLoop run_loop_;
};

}  // namespace

class MockSelectFileDialogListener : public ui::SelectFileDialog::Listener {
 public:
  MockSelectFileDialogListener()
      : file_selected_(false), canceled_(false), params_(nullptr) {}

  MockSelectFileDialogListener(const MockSelectFileDialogListener&) = delete;
  MockSelectFileDialogListener& operator=(const MockSelectFileDialogListener&) =
      delete;

  bool file_selected() const { return file_selected_; }
  bool canceled() const { return canceled_; }
  base::FilePath path() const { return path_; }
  void* params() const { return params_; }

  // ui::SelectFileDialog::Listener:
  void FileSelected(const base::FilePath& path,
                    int index,
                    void* params) override {
    file_selected_ = true;
    path_ = path;
    params_ = params;
    QuitMessageLoop();
  }
  void FileSelectedWithExtraInfo(const ui::SelectedFileInfo& selected_file_info,
                                 int index,
                                 void* params) override {
    FileSelected(selected_file_info.local_path, index, params);
  }
  void MultiFilesSelected(const std::vector<base::FilePath>& files,
                          void* params) override {
    QuitMessageLoop();
  }
  void FileSelectionCanceled(void* params) override {
    canceled_ = true;
    params_ = params;
    QuitMessageLoop();
  }

  void WaitForCalled() {
    message_loop_runner_ = new content::MessageLoopRunner();
    message_loop_runner_->Run();
  }

 private:
  void QuitMessageLoop() {
    if (message_loop_runner_.get())
      message_loop_runner_->Quit();
  }

  bool file_selected_;
  bool canceled_;
  base::FilePath path_;
  void* params_;
  scoped_refptr<content::MessageLoopRunner> message_loop_runner_;
};

// Enumerates possible app modes. We support extension mode (Chrome App)
// and System App (SWA) mode.
enum AppMode {
  EXTENSION_FILES_APP_MODE,
  SYSTEM_FILES_APP_MODE,
};

// Parametrization of tests. We run tests with various app modes, with and
// without filt type filter enabled, and in tablet mode and in regular mode.
struct TestMode {
  TestMode(AppMode app_mode, bool file_type_filter, bool tablet_mode)
      : app_mode(app_mode),
        file_type_filter(file_type_filter),
        tablet_mode(tablet_mode) {}

  static testing::internal::ParamGenerator<TestMode> SystemWebAppValues() {
    return ::testing::Values(TestMode(SYSTEM_FILES_APP_MODE, false, false),
                             TestMode(SYSTEM_FILES_APP_MODE, false, true),
                             TestMode(SYSTEM_FILES_APP_MODE, true, false),
                             TestMode(SYSTEM_FILES_APP_MODE, true, true));
  }

  static testing::internal::ParamGenerator<TestMode> LegacyValues() {
    return ::testing::Values(TestMode(EXTENSION_FILES_APP_MODE, false, false),
                             TestMode(EXTENSION_FILES_APP_MODE, false, true),
                             TestMode(EXTENSION_FILES_APP_MODE, true, false),
                             TestMode(EXTENSION_FILES_APP_MODE, true, true));
  }

  AppMode app_mode;
  bool file_type_filter;
  bool tablet_mode;
};

// TODO(b/194969976): Print human readable test names instead TestName/1, etc.
class BaseSelectFileDialogExtensionBrowserTest
    : public extensions::ExtensionBrowserTest,
      public testing::WithParamInterface<TestMode> {
 public:
  BaseSelectFileDialogExtensionBrowserTest() {
    use_file_type_filter_ = GetParam().file_type_filter;
  }

  enum DialogButtonType {
    DIALOG_BTN_OK,
    DIALOG_BTN_CANCEL
  };

  void SetUp() override {
    // Create the dialog wrapper and listener objects.
    listener_ = std::make_unique<MockSelectFileDialogListener>();
    dialog_ = new SelectFileDialogExtension(listener_.get(), nullptr);

    // One mount point will be needed. Files app looks for the "Downloads"
    // volume mount point by default, so use that.
    base::FilePath tmp_path;
    base::PathService::Get(base::DIR_TEMP, &tmp_path);
    ASSERT_TRUE(tmp_dir_.CreateUniqueTempDirUnderPath(tmp_path));
    downloads_dir_ =
        tmp_dir_.GetPath().AppendASCII("My Files").AppendASCII("Downloads");
    base::CreateDirectory(downloads_dir_);

    // Must run after our setup because it actually runs the test.
    extensions::ExtensionBrowserTest::SetUp();
  }

  void SetUpCommandLine(base::CommandLine* command_line) override {
    if (GetParam().app_mode == SYSTEM_FILES_APP_MODE) {
      feature_list_.InitWithFeatures({chromeos::features::kFilesSWA}, {});
    } else {
      feature_list_.InitWithFeatures({}, {chromeos::features::kFilesSWA});
    }
    extensions::ExtensionBrowserTest::SetUpCommandLine(command_line);
  }

  void SetUpOnMainThread() override {
    extensions::ExtensionBrowserTest::SetUpOnMainThread();
    CHECK(profile());

    // Create a file system mount point for the "Downloads" directory.
    EXPECT_TRUE(
        file_manager::VolumeManager::Get(profile())
            ->RegisterDownloadsDirectoryForTesting(downloads_dir_.DirName()));
    profile()->GetPrefs()->SetFilePath(prefs::kDownloadDefaultDirectory,
                                       downloads_dir_);

    // The test resources are setup: enable and add default ChromeOS component
    // extensions now and not before: crbug.com/831074, crbug.com/804413.
    file_manager::test::AddDefaultComponentExtensionsOnMainThread(profile());

    if (GetParam().app_mode == EXTENSION_FILES_APP_MODE) {
      // Ensure the Files app background page has shut down. These tests should
      // ensure launching without the background page functions correctly.
      extensions::ProcessManager::SetEventPageIdleTimeForTesting(1);
      extensions::ProcessManager::SetEventPageSuspendingTimeForTesting(1);
      const auto* extension =
          extensions::ExtensionRegistryFactory::GetForBrowserContext(profile())
              ->GetExtensionById(extension_misc::kFilesManagerAppId,
                                 extensions::ExtensionRegistry::ENABLED);
      extensions::ExtensionBackgroundPageWaiter(profile(), *extension)
          .WaitForBackgroundClosed();
    }
  }

  void TearDown() override {
    extensions::ExtensionBrowserTest::TearDown();

    // Delete the dialogs first since they hold a pointer to their listener.
    dialog_.reset();
    listener_.reset();
    second_dialog_.reset();
    second_listener_.reset();
  }

  void CheckJavascriptErrors() {
    content::RenderFrameHost* host = dialog_->GetPrimaryMainFrame();
    base::Value value =
        content::ExecuteScriptAndGetValue(host, "window.JSErrorCount");
    int js_error_count = value.GetInt();
    ASSERT_EQ(0, js_error_count);
  }

  void ClickElement(const std::string& selector) {
    content::RenderFrameHost* frame_host = dialog_->GetPrimaryMainFrame();

    auto* web_contents = content::WebContents::FromRenderFrameHost(frame_host);
    CHECK(web_contents);

    int x;
    ASSERT_TRUE(content::ExecuteScriptAndExtractInt(
        web_contents,
        "var bounds = document.querySelector('" + selector +
            "').getBoundingClientRect();"
            "domAutomationController.send("
            "    Math.floor(bounds.left + bounds.width / 2));",
        &x));

    int y;
    ASSERT_TRUE(content::ExecuteScriptAndExtractInt(
        web_contents,
        "var bounds = document.querySelector('" + selector +
            "').getBoundingClientRect();"
            "domAutomationController.send("
            "    Math.floor(bounds.top + bounds.height / 2));",
        &y));

    LOG(INFO) << "ClickElement " << selector << " (" << x << "," << y << ")";
    constexpr auto kButton = blink::WebMouseEvent::Button::kLeft;
    content::SimulateMouseClickAt(web_contents, 0, kButton, gfx::Point(x, y));
  }

  void OpenDialog(ui::SelectFileDialog::Type dialog_type,
                  const base::FilePath& file_path,
                  const gfx::NativeWindow& owning_window,
                  const std::string& additional_message) {
    if (GetParam().tablet_mode) {
      ash::ShellTestApi().SetTabletModeEnabledForTest(true);
    }
    // Open the file dialog: Files app will signal that it is loaded via the
    // "ready" chrome.test.sendMessage().
    ExtensionTestMessageListener init_listener("ready");

    std::unique_ptr<ExtensionTestMessageListener> additional_listener;
    if (!additional_message.empty()) {
      additional_listener =
          std::make_unique<ExtensionTestMessageListener>(additional_message);
    }

    std::u16string title;
    // Include a file type filter. This triggers additional functionality within
    // the Files app.
    ui::SelectFileDialog::FileTypeInfo file_types;
    file_types.extensions = {{"html"}};
    const ui::SelectFileDialog::FileTypeInfo* file_types_ptr =
        UseFileTypeFilter() ? &file_types : nullptr;

    dialog_->SelectFile(dialog_type, title, file_path, file_types_ptr, 0,
                        FILE_PATH_LITERAL(""), owning_window, /*params=*/this);
    LOG(INFO) << "Waiting for JavaScript ready message.";
    ASSERT_TRUE(init_listener.WaitUntilSatisfied());

    if (additional_listener.get()) {
      LOG(INFO) << "Waiting for JavaScript " << additional_message
                << " message.";
      ASSERT_TRUE(additional_listener->WaitUntilSatisfied());
    }

    // Dialog should be running now.
    ASSERT_TRUE(dialog_->IsRunning(owning_window));

    ASSERT_NO_FATAL_FAILURE(CheckJavascriptErrors());
  }

  bool OpenDialogIsResizable() const {
    return dialog_->IsResizeable();  // See crrev.com/600185.
  }

  void TryOpeningSecondDialog(const gfx::NativeWindow& owning_window) {
    second_listener_ = std::make_unique<MockSelectFileDialogListener>();
    second_dialog_ =
        new SelectFileDialogExtension(second_listener_.get(), nullptr);

    // The dialog type is not relevant for this test but is required: use the
    // open file dialog type.
    second_dialog_->SelectFile(
        ui::SelectFileDialog::SELECT_OPEN_FILE, std::u16string() /* title */,
        base::FilePath() /* default_path */, nullptr /* file_types */,
        0 /* file_type_index */, FILE_PATH_LITERAL("") /* default_extension */,
        owning_window, this /* params */);
  }

  void ClickJsButton(content::RenderFrameHost* frame_host,
                     DialogButtonType button_type) {
    std::string button_class =
        (button_type == DIALOG_BTN_OK) ? ".button-panel .ok" :
                                         ".button-panel .cancel";
    std::u16string script = base::ASCIIToUTF16(
        "console.log(\'Test JavaScript injected.\');"
        "document.querySelector(\'" +
        button_class + "\').click();");
    // The file selection handler code closes the dialog but does not return
    // control to JavaScript, so do not wait for the script return value.
    frame_host->ExecuteJavaScriptForTests(script, base::NullCallback());
  }

  void CloseDialog(DialogButtonType button_type,
                   const gfx::NativeWindow& owning_window) {
    // Inject JavaScript into the dialog to click the dialog |button_type|.
    content::RenderFrameHost* frame_host = dialog_->GetPrimaryMainFrame();

    ClickJsButton(frame_host, button_type);

    // Instead, wait for Listener notification that the window has closed.
    LOG(INFO) << "Waiting for window close notification.";
    listener_->WaitForCalled();

    // Dialog no longer believes it is running.
    if (owning_window)
      ASSERT_FALSE(dialog_->IsRunning(owning_window));
  }

  bool UseFileTypeFilter() { return use_file_type_filter_; }

  base::ScopedTempDir tmp_dir_;
  base::FilePath downloads_dir_;

  std::unique_ptr<MockSelectFileDialogListener> listener_;
  scoped_refptr<SelectFileDialogExtension> dialog_;

  std::unique_ptr<MockSelectFileDialogListener> second_listener_;
  scoped_refptr<SelectFileDialogExtension> second_dialog_;

  bool use_file_type_filter_;

  base::test::ScopedFeatureList feature_list_;
};

// Tests FileDialog with and without file filter.
class SelectFileDialogExtensionBrowserTest
    : public BaseSelectFileDialogExtensionBrowserTest {};

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionBrowserTest, CreateAndDestroy) {
  // The browser window must exist for us to test dialog's parent window.
  gfx::NativeWindow owning_window = browser()->window()->GetNativeWindow();
  ASSERT_NE(nullptr, owning_window);

  // Before we call SelectFile, the dialog should not be running/visible.
  ASSERT_FALSE(dialog_->IsRunning(owning_window));
}

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionBrowserTest, DestroyListener) {
  // Some users of SelectFileDialog destroy their listener before cleaning
  // up the dialog.  Make sure we don't crash.
  dialog_->ListenerDestroyed();
  listener_.reset();
}

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionBrowserTest, DestroyListener2) {
  gfx::NativeWindow owning_window = browser()->window()->GetNativeWindow();
  ASSERT_NE(nullptr, owning_window);

  // Open the file dialog on the default path.
  ASSERT_NO_FATAL_FAILURE(OpenDialog(ui::SelectFileDialog::SELECT_OPEN_FILE,
                                     base::FilePath(), owning_window, ""));

  // Get the Files app WebContents/Framehost, before deleting the dialog_.
  content::RenderFrameHost* frame_host = dialog_->GetPrimaryMainFrame();

  // Some users of SelectFileDialog destroy their listener before cleaning
  // up the dialog, delete the `dialog_`, however the
  // SystemFilesAppDialogDelegate will still be alive with the Files app
  // WebContents.  Make sure we don't crash.
  dialog_->ListenerDestroyed();
  listener_.reset();
  dialog_.reset();

  // This will close the FrameHost/WebContents and will try to close the
  // `dialog_`.
  ClickJsButton(frame_host, DIALOG_BTN_CANCEL);

  base::RunLoop().RunUntilIdle();
}

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionBrowserTest, CanResize) {
  gfx::NativeWindow owning_window = browser()->window()->GetNativeWindow();
  ASSERT_NE(nullptr, owning_window);

  // Open the file dialog on the default path.
  ASSERT_NO_FATAL_FAILURE(OpenDialog(ui::SelectFileDialog::SELECT_OPEN_FILE,
                                     base::FilePath(), owning_window, ""));

  // The dialog should be resizable.
  ASSERT_EQ(!GetParam().tablet_mode, OpenDialogIsResizable());
}


IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionBrowserTest,
                       SelectFileAndCancel) {
  gfx::NativeWindow owning_window = browser()->window()->GetNativeWindow();
  ASSERT_NE(nullptr, owning_window);

  // Open the file dialog on the default path.
  ASSERT_NO_FATAL_FAILURE(OpenDialog(ui::SelectFileDialog::SELECT_OPEN_FILE,
                                     base::FilePath(), owning_window, ""));
  // Click the "Cancel" button.
  CloseDialog(DIALOG_BTN_CANCEL, owning_window);

  // Listener should have been informed of the cancellation.
  ASSERT_FALSE(listener_->file_selected());
  ASSERT_TRUE(listener_->canceled());
  ASSERT_EQ(this, listener_->params());
}

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionBrowserTest,
                       SelectFileAndOpen) {
  gfx::NativeWindow owning_window = browser()->window()->GetNativeWindow();
  ASSERT_NE(nullptr, owning_window);

  // Create an empty file to provide the file to open.
  const base::FilePath test_file =
      downloads_dir_.AppendASCII("file_manager_test.html");
  {
    base::ScopedAllowBlockingForTesting allow_io;
    FILE* fp = base::OpenFile(test_file, "w");
    ASSERT_TRUE(fp != nullptr);
    ASSERT_TRUE(base::CloseFile(fp));
  }

  // Open the file dialog, providing a path to the file to open so the dialog
  // will automatically select it.  Ensure the "Open" button is enabled by
  // waiting for notification from chrome.test.sendMessage().
  ASSERT_NO_FATAL_FAILURE(OpenDialog(ui::SelectFileDialog::SELECT_OPEN_FILE,
                                     test_file, owning_window, "dialog-ready"));
  // Click the "Open" button.
  CloseDialog(DIALOG_BTN_OK, owning_window);

  // Listener should have been informed that the file was opened.
  ASSERT_TRUE(listener_->file_selected());
  ASSERT_FALSE(listener_->canceled());
  ASSERT_EQ(test_file, listener_->path());
  ASSERT_EQ(this, listener_->params());
}

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionBrowserTest,
                       SelectFileAndSave) {
  gfx::NativeWindow owning_window = browser()->window()->GetNativeWindow();
  ASSERT_NE(nullptr, owning_window);

  // Open the file dialog to save a file, providing a suggested file path.
  // Ensure the "Save" button is enabled by waiting for notification from
  // chrome.test.sendMessage().
  const base::FilePath test_file =
      downloads_dir_.AppendASCII("file_manager_save.html");
  ASSERT_NO_FATAL_FAILURE(OpenDialog(ui::SelectFileDialog::SELECT_SAVEAS_FILE,
                                     test_file, owning_window, "dialog-ready"));
  // Click the "Save" button.
  CloseDialog(DIALOG_BTN_OK, owning_window);

  // Listener should have been informed that the file was saved.
  ASSERT_TRUE(listener_->file_selected());
  ASSERT_FALSE(listener_->canceled());
  ASSERT_EQ(test_file, listener_->path());
  ASSERT_EQ(this, listener_->params());
}

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionBrowserTest,
                       SelectFileVirtualKeyboard) {
  gfx::NativeWindow owning_window = browser()->window()->GetNativeWindow();
  ASSERT_NE(nullptr, owning_window);

  // Enable the virtual keyboard.
  ash::ShellTestApi().EnableVirtualKeyboard();

  auto* client = ChromeKeyboardControllerClient::Get();
  EXPECT_FALSE(client->is_keyboard_visible());

  // Open the file dialog to save a file, providing a suggested file path.
  // Ensure the "Save" button is enabled by waiting for notification from
  // chrome.test.sendMessage().
  const base::FilePath test_file =
      downloads_dir_.AppendASCII("file_manager_save.html");
  ASSERT_NO_FATAL_FAILURE(OpenDialog(ui::SelectFileDialog::SELECT_SAVEAS_FILE,
                                     test_file, owning_window, "dialog-ready"));

  // Click the dialog's filename input element.
  ASSERT_NO_FATAL_FAILURE(ClickElement("#filename-input-textbox"));

  // The virtual keyboard should be shown.
  KeyboardVisibleWaiter().Wait();
  EXPECT_TRUE(client->is_keyboard_visible());
}

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionBrowserTest,
                       OpenSingletonTabAndCancel) {
  gfx::NativeWindow owning_window = browser()->window()->GetNativeWindow();
  ASSERT_NE(nullptr, owning_window);

  // Open the file dialog on the default path.
  ASSERT_NO_FATAL_FAILURE(OpenDialog(ui::SelectFileDialog::SELECT_OPEN_FILE,
                                     base::FilePath(), owning_window, ""));

  // Open a singleton tab in background.
  NavigateParams p(browser(), GURL("http://www.google.com"),
                   ui::PAGE_TRANSITION_LINK);
  p.window_action = NavigateParams::SHOW_WINDOW;
  p.disposition = WindowOpenDisposition::SINGLETON_TAB;
  Navigate(&p);

  // Click the "Cancel" button.
  CloseDialog(DIALOG_BTN_CANCEL, owning_window);

  // Listener should have been informed of the cancellation.
  ASSERT_FALSE(listener_->file_selected());
  ASSERT_TRUE(listener_->canceled());
  ASSERT_EQ(this, listener_->params());
}

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionBrowserTest, OpenTwoDialogs) {
  gfx::NativeWindow owning_window = browser()->window()->GetNativeWindow();
  ASSERT_NE(nullptr, owning_window);

  // Open the file dialog on the default path.
  ASSERT_NO_FATAL_FAILURE(OpenDialog(ui::SelectFileDialog::SELECT_OPEN_FILE,
                                     base::FilePath(), owning_window, ""));

  // Requests to open a second file dialog should fail.
  TryOpeningSecondDialog(owning_window);
  ASSERT_FALSE(second_dialog_->IsRunning(owning_window));

  // Click the "Cancel" button.
  CloseDialog(DIALOG_BTN_CANCEL, owning_window);

  // Listener should have been informed of the cancellation.
  ASSERT_FALSE(listener_->file_selected());
  ASSERT_TRUE(listener_->canceled());
  ASSERT_EQ(this, listener_->params());
}

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionBrowserTest, FileInputElement) {
  gfx::NativeWindow owning_window = browser()->window()->GetNativeWindow();
  ASSERT_NE(nullptr, owning_window);

  // Start the embedded test server.
  base::FilePath source_dir;
  ASSERT_TRUE(base::PathService::Get(base::DIR_SOURCE_ROOT, &source_dir));
  auto test_data_dir = source_dir.AppendASCII("chrome")
                           .AppendASCII("test")
                           .AppendASCII("data")
                           .AppendASCII("chromeos")
                           .AppendASCII("file_manager");
  embedded_test_server()->ServeFilesFromDirectory(test_data_dir);
  ASSERT_TRUE(embedded_test_server()->Start());

  // Navigate the browser to the file input element test page.
  const GURL url = embedded_test_server()->GetURL("/file_input/element.html");
  ASSERT_TRUE(ui_test_utils::NavigateToURL(browser(), url));
  content::WebContents* web_contents =
      browser()->tab_strip_model()->GetActiveWebContents();
  ASSERT_EQ(url, web_contents->GetLastCommittedURL());

  // Create a listener for the file dialog's "ready" message.
  ExtensionTestMessageListener listener("ready");

  // Click the file <input> element to open the file dialog.
  constexpr auto kButton = blink::WebMouseEvent::Button::kLeft;
  content::SimulateMouseClickAt(web_contents, 0, kButton, gfx::Point(0, 0));

  // Wait for file dialog's "ready" message.
  EXPECT_TRUE(listener.WaitUntilSatisfied());
}

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionBrowserTest,
                       OpenDialogWithoutOwningWindow) {
  gfx::NativeWindow owning_window = nullptr;

  // Open the file dialog with no |owning_window|.
  ASSERT_NO_FATAL_FAILURE(OpenDialog(ui::SelectFileDialog::SELECT_OPEN_FILE,
                                     base::FilePath(), owning_window, ""));

  // Click the "Cancel" button.
  CloseDialog(DIALOG_BTN_CANCEL, owning_window);

  // Listener should have been informed of the cancellation.
  ASSERT_TRUE(listener_->canceled());
  ASSERT_EQ(this, listener_->params());
}

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionBrowserTest, MultipleOpenFile) {
  // No use-after-free when Browser::OpenFile is called multiple times.
  browser()->OpenFile();
  browser()->OpenFile();
}

INSTANTIATE_TEST_SUITE_P(Legacy,
                         SelectFileDialogExtensionBrowserTest,
                         TestMode::LegacyValues());
INSTANTIATE_TEST_SUITE_P(SystemWebApp,
                         SelectFileDialogExtensionBrowserTest,
                         TestMode::SystemWebAppValues());

// Tests that ash window has correct colors for GM2.
// TODO(adanilo) factor out the unnecessary override of Setup().
class SelectFileDialogExtensionFlagTest
    : public BaseSelectFileDialogExtensionBrowserTest {
  void SetUp() override {
    BaseSelectFileDialogExtensionBrowserTest::SetUp();
  }
};

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionFlagTest, DialogColoredTitle) {
  gfx::NativeWindow owning_window = browser()->window()->GetNativeWindow();
  ASSERT_NE(nullptr, owning_window);

  // Open the file dialog on the default path.
  ASSERT_NO_FATAL_FAILURE(OpenDialog(ui::SelectFileDialog::SELECT_OPEN_FILE,
                                     base::FilePath(), owning_window, ""));
  content::RenderFrameHost* frame_host = dialog_->GetPrimaryMainFrame();
  aura::Window* dialog_window =
      frame_host->GetNativeView()->GetToplevelWindow();
  auto* color_provider = ash::ColorProvider::Get();
  ash::ScopedLightModeAsDefault scoped_light_mode_as_default;
  EXPECT_EQ(dialog_window->GetProperty(chromeos::kFrameActiveColorKey),
            color_provider->GetActiveDialogTitleBarColor());
  EXPECT_EQ(dialog_window->GetProperty(chromeos::kFrameInactiveColorKey),
            color_provider->GetInactiveDialogTitleBarColor());

  CloseDialog(DIALOG_BTN_CANCEL, owning_window);
}

INSTANTIATE_TEST_SUITE_P(Legacy,
                         SelectFileDialogExtensionFlagTest,
                         TestMode::LegacyValues());
INSTANTIATE_TEST_SUITE_P(SystemWebApp,
                         SelectFileDialogExtensionFlagTest,
                         TestMode::SystemWebAppValues());

class SelectFileDialogExtensionDarkLightModeEnabledTest
    : public BaseSelectFileDialogExtensionBrowserTest {
  void SetUpCommandLine(base::CommandLine* command_line) override {
    if (GetParam().app_mode == SYSTEM_FILES_APP_MODE) {
      feature_list_.InitWithFeatures(
          {chromeos::features::kFilesSWA, chromeos::features::kDarkLightMode},
          {});
    } else {
      feature_list_.InitWithFeatures({chromeos::features::kDarkLightMode},
                                     {chromeos::features::kFilesSWA});
    }
    extensions::ExtensionBrowserTest::SetUpCommandLine(command_line);
  }
};

IN_PROC_BROWSER_TEST_P(SelectFileDialogExtensionDarkLightModeEnabledTest,
                       ColorModeChange) {
  gfx::NativeWindow owning_window = browser()->window()->GetNativeWindow();
  ASSERT_NE(nullptr, owning_window);

  // Open the file dialog on the default path.
  ASSERT_NO_FATAL_FAILURE(OpenDialog(ui::SelectFileDialog::SELECT_OPEN_FILE,
                                     base::FilePath(), owning_window, ""));
  content::RenderFrameHost* frame_host = dialog_->GetPrimaryMainFrame();
  aura::Window* dialog_window =
      frame_host->GetNativeView()->GetToplevelWindow();

  auto* dark_light_mode_controller = ash::DarkLightModeController::Get();
  bool dark_mode_enabled = dark_light_mode_controller->IsDarkModeEnabled();
  SkColor initial_active_color =
      dialog_window->GetProperty(chromeos::kFrameActiveColorKey);
  SkColor initial_inactive_color =
      dialog_window->GetProperty(chromeos::kFrameInactiveColorKey);
  Profile* profile = chrome_test_utils::GetProfile(this);
  PrefService* prefs = profile->GetPrefs();

  // Switch the color mode.
  prefs->SetBoolean(ash::prefs::kDarkModeEnabled, !dark_mode_enabled);
  EXPECT_EQ(!dark_mode_enabled,
            dark_light_mode_controller->IsDarkModeEnabled());

  // Active and invactive colors in the other mode should be different from the
  // initial mode.
  EXPECT_NE(dialog_window->GetProperty(chromeos::kFrameActiveColorKey),
            initial_active_color);
  EXPECT_NE(dialog_window->GetProperty(chromeos::kFrameInactiveColorKey),
            initial_inactive_color);

  CloseDialog(DIALOG_BTN_CANCEL, owning_window);
}

INSTANTIATE_TEST_SUITE_P(Legacy,
                         SelectFileDialogExtensionDarkLightModeEnabledTest,
                         TestMode::LegacyValues());
INSTANTIATE_TEST_SUITE_P(SystemWebApp,
                         SelectFileDialogExtensionDarkLightModeEnabledTest,
                         TestMode::SystemWebAppValues());
