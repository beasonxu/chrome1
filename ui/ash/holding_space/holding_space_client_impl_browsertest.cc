// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/ash/holding_space/holding_space_client_impl.h"

#include <string>

#include "ash/constants/ash_features.h"
#include "ash/public/cpp/holding_space/holding_space_controller.h"
#include "ash/public/cpp/holding_space/holding_space_image.h"
#include "ash/public/cpp/holding_space/holding_space_item.h"
#include "ash/public/cpp/holding_space/holding_space_metrics.h"
#include "ash/public/cpp/holding_space/holding_space_model.h"
#include "ash/public/cpp/holding_space/holding_space_util.h"
#include "base/callback_helpers.h"
#include "base/files/file_path.h"
#include "base/files/file_util.h"
#include "base/path_service.h"
#include "base/run_loop.h"
#include "base/test/bind.h"
#include "base/unguessable_token.h"
#include "chrome/browser/ash/file_manager/path_util.h"
#include "chrome/browser/extensions/component_loader.h"
#include "chrome/browser/profiles/profile_manager.h"
#include "chrome/browser/ui/ash/holding_space/holding_space_browsertest_base.h"
#include "chrome/browser/ui/browser.h"
#include "chrome/test/base/in_process_browser_test.h"
#include "content/public/test/browser_test.h"
#include "storage/browser/file_system/external_mount_points.h"
#include "ui/gfx/image/image_skia.h"

namespace ash {

namespace {

// File paths for test data.
constexpr char kTestDataDir[] = "chrome/test/data/chromeos/file_manager/";
constexpr char kImageFilePath[] = "image.png";
constexpr char kTextFilePath[] = "text.txt";

// Helpers ---------------------------------------------------------------------

// Creates an empty holding space image.
std::unique_ptr<HoldingSpaceImage> CreateTestHoldingSpaceImage(
    HoldingSpaceItem::Type type,
    const base::FilePath& file_path) {
  return std::make_unique<HoldingSpaceImage>(
      holding_space_util::GetMaxImageSizeForType(type), file_path,
      /*async_bitmap_resolver=*/base::DoNothing());
}

// Copies the file for the `relative_path` in the test data directory to
// downloads directory, and returns the path to the copy.
base::FilePath TestFile(Profile* profile, const std::string& relative_path) {
  base::FilePath source_root;
  EXPECT_TRUE(base::PathService::Get(base::DIR_SOURCE_ROOT, &source_root));
  const base::FilePath source_file =
      source_root.AppendASCII(kTestDataDir).AppendASCII(relative_path);

  base::FilePath target_dir;
  if (!storage::ExternalMountPoints::GetSystemInstance()->GetRegisteredPath(
          file_manager::util::GetDownloadsMountPointName(profile),
          &target_dir)) {
    ADD_FAILURE() << "Failed to get downloads mount point";
    return base::FilePath();
  }

  const base::FilePath target_path = target_dir.Append(source_file.BaseName());
  base::ScopedAllowBlockingForTesting allow_blocking;
  if (!base::CopyFile(source_file, target_path)) {
    ADD_FAILURE() << "Failed to create file.";
    return base::FilePath();
  }

  return target_path;
}

}  // namespace

// Tests -----------------------------------------------------------------------

using HoldingSpaceClientImplTest = HoldingSpaceBrowserTestBase;

// Verifies that `HoldingSpaceClient::AddDiagnosticsLog()` works as intended.
IN_PROC_BROWSER_TEST_F(HoldingSpaceClientImplTest, AddDiagnosticsLog) {
  ASSERT_TRUE(HoldingSpaceController::Get());

  auto* holding_space_client = HoldingSpaceController::Get()->client();
  ASSERT_TRUE(holding_space_client);
  auto* holding_space_model = HoldingSpaceController::Get()->model();
  ASSERT_TRUE(holding_space_model);

  // Create a diagnostics log item and verify that it is in the holding space.

  ASSERT_EQ(0u, holding_space_model->items().size());
  base::FilePath log_path = TestFile(GetProfile(), kTextFilePath);
  holding_space_client->AddDiagnosticsLog(log_path);
  ASSERT_EQ(1u, holding_space_model->items().size());
  HoldingSpaceItem* diagnostics_log_item =
      holding_space_model->items()[0].get();
  EXPECT_EQ(diagnostics_log_item->type(),
            HoldingSpaceItem::Type::kDiagnosticsLog);
  EXPECT_EQ(diagnostics_log_item->file_path(), log_path);
}

// Verifies that `HoldingSpaceClient::CopyImageToClipboard()` works as intended
// when attempting to copy both image backed and non-image backed holding space
// items.
IN_PROC_BROWSER_TEST_F(HoldingSpaceClientImplTest, CopyImageToClipboard) {
  ASSERT_TRUE(HoldingSpaceController::Get());

  auto* holding_space_client = HoldingSpaceController::Get()->client();
  ASSERT_TRUE(holding_space_client);

  {
    // Create a holding space item backed by a non-image file.
    auto* holding_space_item =
        AddItem(GetProfile(), HoldingSpaceItem::Type::kDownload,
                TestFile(GetProfile(), kTextFilePath));

    // We expect `HoldingSpaceClient::CopyImageToClipboard()` to fail when the
    // backing file for `holding_space_item` is not an image file.
    base::RunLoop run_loop;
    holding_space_client->CopyImageToClipboard(
        *holding_space_item,
        base::BindLambdaForTesting([&run_loop](bool success) {
          EXPECT_FALSE(success);
          run_loop.Quit();
        }));
    run_loop.Run();
  }

  {
    // Create a holding space item backed by an image file.
    auto* holding_space_item =
        AddItem(GetProfile(), HoldingSpaceItem::Type::kDownload,
                TestFile(GetProfile(), kImageFilePath));

    // We expect `HoldingSpaceClient::CopyImageToClipboard()` to succeed when
    // the backing file for `holding_space_item` is an image file.
    base::RunLoop run_loop;
    holding_space_client->CopyImageToClipboard(
        *holding_space_item,
        base::BindLambdaForTesting([&run_loop](bool success) {
          EXPECT_TRUE(success);
          run_loop.Quit();
        }));
    run_loop.Run();
  }
}

// Verifies that `HoldingSpaceClient::OpenDownloads()` works as intended.
IN_PROC_BROWSER_TEST_F(HoldingSpaceClientImplTest, OpenDownloads) {
  ASSERT_TRUE(HoldingSpaceController::Get());

  auto* holding_space_client = HoldingSpaceController::Get()->client();
  ASSERT_TRUE(holding_space_client);

  // We expect `HoldingSpaceClient::OpenDownloads()` to succeed.
  base::RunLoop run_loop;
  holding_space_client->OpenDownloads(
      base::BindLambdaForTesting([&run_loop](bool success) {
        EXPECT_TRUE(success);
        run_loop.Quit();
      }));
  run_loop.Run();
}

// Verifies that `HoldingSpaceClient::OpenMyFiles()` works as intended.
IN_PROC_BROWSER_TEST_F(HoldingSpaceClientImplTest, OpenMyFiles) {
  ASSERT_TRUE(HoldingSpaceController::Get());

  auto* holding_space_client = HoldingSpaceController::Get()->client();
  ASSERT_TRUE(holding_space_client);

  // We expect `HoldingSpaceClient::OpenMyFiles()` to succeed.
  base::RunLoop run_loop;
  holding_space_client->OpenMyFiles(
      base::BindLambdaForTesting([&run_loop](bool success) {
        EXPECT_TRUE(success);
        run_loop.Quit();
      }));
  run_loop.Run();
}

// Verifies that `HoldingSpaceClient::OpenItems()` works as intended when
// attempting to open holding space items backed by both non-existing and
// existing files.
IN_PROC_BROWSER_TEST_F(HoldingSpaceClientImplTest, OpenItems) {
  ASSERT_TRUE(HoldingSpaceController::Get());

  auto* holding_space_client = HoldingSpaceController::Get()->client();
  ASSERT_TRUE(holding_space_client);

  if (ash::features::IsFileManagerSwaEnabled()) {
    // OpenItems() depends on the Files app. Install the Files SWA.
    WaitForTestSystemAppInstall();
  }

  // Verify no failures have yet been recorded.
  base::HistogramTester histogram_tester;
  histogram_tester.ExpectTotalCount("HoldingSpace.Item.FailureToLaunch", 0);
  histogram_tester.ExpectTotalCount(
      "HoldingSpace.Item.FailureToLaunch.Extension", 0);

  {
    // Create a holding space item backed by a non-existing file.
    auto holding_space_item = HoldingSpaceItem::CreateFileBackedItem(
        HoldingSpaceItem::Type::kDownload, base::FilePath("foo.pdf"),
        GURL("filesystem:fake"), base::BindOnce(&CreateTestHoldingSpaceImage));

    // We expect `HoldingSpaceClient::OpenItems()` to fail when the backing file
    // for `holding_space_item` does not exist.
    base::RunLoop run_loop;
    holding_space_client->OpenItems(
        {holding_space_item.get()},
        base::BindLambdaForTesting([&](bool success) {
          EXPECT_FALSE(success);

          // Verify the failure has been recorded.
          histogram_tester.ExpectBucketCount(
              "HoldingSpace.Item.FailureToLaunch", holding_space_item->type(),
              1);
          histogram_tester.ExpectBucketCount(
              "HoldingSpace.Item.FailureToLaunch.Extension",
              holding_space_metrics::FilePathToExtension(
                  holding_space_item->file_path()),
              1);

          run_loop.Quit();
        }));
    run_loop.Run();
  }

  {
    // Create a holding space item backed by a newly created txt file.
    HoldingSpaceItem* holding_space_item = AddPinnedFile();

    // We expect `HoldingSpaceClient::OpenItems()` to succeed when the backing
    // file for `holding_space_item` exists.
    base::RunLoop run_loop;
    holding_space_client->OpenItems(
        {holding_space_item},
        base::BindLambdaForTesting([&run_loop](bool success) {
          EXPECT_TRUE(success);
          run_loop.Quit();
        }));
    run_loop.Run();
  }

  // Verify that only the expected failure was recorded.
  histogram_tester.ExpectTotalCount("HoldingSpace.Item.FailureToLaunch", 1);
  histogram_tester.ExpectTotalCount(
      "HoldingSpace.Item.FailureToLaunch.Extension", 1);
}

// Verifies that `HoldingSpaceClient::ShowItemInFolder()` works as intended when
// attempting to open holding space items backed by both non-existing and
// existing files.
IN_PROC_BROWSER_TEST_F(HoldingSpaceClientImplTest, ShowItemInFolder) {
  ASSERT_TRUE(HoldingSpaceController::Get());

  auto* holding_space_client = HoldingSpaceController::Get()->client();
  ASSERT_TRUE(holding_space_client);

  {
    // Create a holding space item backed by a non-existing file.
    auto holding_space_item = HoldingSpaceItem::CreateFileBackedItem(
        HoldingSpaceItem::Type::kDownload, base::FilePath("foo"),
        GURL("filesystem:fake"), base::BindOnce(&CreateTestHoldingSpaceImage));

    // We expect `HoldingSpaceClient::ShowItemInFolder()` to fail when the
    // backing file for `holding_space_item` does not exist.
    base::RunLoop run_loop;
    holding_space_client->ShowItemInFolder(
        *holding_space_item,
        base::BindLambdaForTesting([&run_loop](bool success) {
          EXPECT_FALSE(success);
          run_loop.Quit();
        }));
    run_loop.Run();
  }

  {
    // Create a holding space item backed by a newly created txt file.
    HoldingSpaceItem* holding_space_item = AddPinnedFile();

    // We expect `HoldingSpaceClient::ShowItemInFolder()` to succeed when the
    // backing file for `holding_space_item` exists.
    base::RunLoop run_loop;
    holding_space_client->ShowItemInFolder(
        *holding_space_item,
        base::BindLambdaForTesting([&run_loop](bool success) {
          EXPECT_TRUE(success);
          run_loop.Quit();
        }));
    run_loop.Run();
  }
}

// Verifies that `HoldingSpaceClient::PinItems()` works as intended.
IN_PROC_BROWSER_TEST_F(HoldingSpaceClientImplTest, PinItems) {
  ASSERT_TRUE(HoldingSpaceController::Get());

  auto* holding_space_client = HoldingSpaceController::Get()->client();
  auto* holding_space_model = HoldingSpaceController::Get()->model();
  ASSERT_TRUE(holding_space_client && holding_space_model);

  // Create a download holding space item.
  HoldingSpaceItem* download_item = AddDownloadFile();
  ASSERT_EQ(1u, holding_space_model->items().size());

  // Attempt to pin the download holding space item.
  holding_space_client->PinItems({download_item});
  ASSERT_EQ(2u, holding_space_model->items().size());

  // The pinned holding space item should have type `kPinnedFile` but share the
  // same text and file path as the original download holding space item.
  HoldingSpaceItem* pinned_file_item = holding_space_model->items()[1].get();
  EXPECT_EQ(pinned_file_item->type(), HoldingSpaceItem::Type::kPinnedFile);
  EXPECT_EQ(download_item->GetText(), pinned_file_item->GetText());
  EXPECT_EQ(download_item->file_path(), pinned_file_item->file_path());
}

// Verifies that `HoldingSpaceClient::UnpinItems()` works as intended.
IN_PROC_BROWSER_TEST_F(HoldingSpaceClientImplTest, UnpinItems) {
  ASSERT_TRUE(HoldingSpaceController::Get());

  auto* holding_space_client = HoldingSpaceController::Get()->client();
  auto* holding_space_model = HoldingSpaceController::Get()->model();
  ASSERT_TRUE(holding_space_client && holding_space_model);

  // Create a pinned file holding space item.
  HoldingSpaceItem* pinned_file_item = AddPinnedFile();
  ASSERT_EQ(1u, holding_space_model->items().size());

  // Attempt to unpin the pinned file holding space item.
  holding_space_client->UnpinItems({pinned_file_item});
  ASSERT_EQ(0u, holding_space_model->items().size());
}

}  // namespace ash
