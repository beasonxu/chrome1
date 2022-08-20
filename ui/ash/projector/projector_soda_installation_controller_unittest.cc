// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "projector_soda_installation_controller.h"
#include "ash/constants/ash_features.h"
#include "ash/constants/ash_pref_names.h"
#include "ash/public/cpp/locale_update_controller.h"
#include "ash/public/cpp/projector/projector_controller.h"
#include "ash/public/cpp/projector/projector_new_screencast_precondition.h"
#include "ash/public/cpp/test/mock_projector_client.h"
#include "ash/webui/projector_app/test/mock_app_client.h"
#include "base/bind.h"
#include "base/test/scoped_feature_list.h"
#include "chrome/browser/browser_process.h"
#include "chrome/browser/profiles/profile.h"
#include "chrome/browser/profiles/profile_manager.h"
#include "chrome/test/base/chrome_ash_test_base.h"
#include "chrome/test/base/testing_browser_process.h"
#include "chrome/test/base/testing_profile_manager.h"
#include "components/prefs/pref_service.h"
#include "components/soda/constants.h"
#include "components/soda/soda_installer.h"
#include "testing/gmock/include/gmock/gmock.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace ash {

namespace {

inline void SetLocale(const std::string& locale) {
  g_browser_process->SetApplicationLocale(locale);
  LocaleUpdateController::Get()->OnLocaleChanged();
}

// A mocked version instance of SodaInstaller for testing purposes.
class MockSodaInstaller : public speech::SodaInstaller {
 public:
  MockSodaInstaller() = default;
  MockSodaInstaller(const MockSodaInstaller&) = delete;
  MockSodaInstaller& operator=(const MockSodaInstaller&) = delete;
  ~MockSodaInstaller() override = default;

  MOCK_CONST_METHOD0(GetSodaBinaryPath, base::FilePath());
  MOCK_CONST_METHOD1(GetLanguagePath, base::FilePath(const std::string&));
  MOCK_METHOD2(InstallLanguage, void(const std::string&, PrefService*));
  MOCK_CONST_METHOD0(GetAvailableLanguages, std::vector<std::string>());
  MOCK_METHOD1(InstallSoda, void(PrefService*));
  MOCK_METHOD1(UninstallSoda, void(PrefService*));
};

const char kEnglishLocale[] = "en-US";
const char kNonEnglishLocale[] = "fr";

}  // namespace

class ProjectorSodaInstallationControllerTest : public ChromeAshTestBase {
 public:
  ProjectorSodaInstallationControllerTest() {
    scoped_feature_list_.InitWithFeatures(
        {
            features::kOnDeviceSpeechRecognition,
            features::kProjector,
        },
        {});
  }
  ProjectorSodaInstallationControllerTest(
      const ProjectorSodaInstallationControllerTest&) = delete;
  ProjectorSodaInstallationControllerTest& operator=(
      const ProjectorSodaInstallationControllerTest&) = delete;
  ~ProjectorSodaInstallationControllerTest() override = default;

  // ChromeAshTestBase:
  void SetUp() override {
    ChromeAshTestBase::SetUp();

    ASSERT_TRUE(testing_profile_manager_.SetUp());
    testing_profile_ = ProfileManager::GetPrimaryUserProfile();

    soda_installer_ = std::make_unique<MockSodaInstaller>();
    ON_CALL(*soda_installer(), GetAvailableLanguages)
        .WillByDefault(
            testing::Return(std::vector<std::string>({kEnglishLocale})));

    mock_client_ = std::make_unique<MockProjectorClient>();
    projector_controller().SetClient(mock_client_.get());
    mock_app_client_ = std::make_unique<MockAppClient>();

    SetLocale(kEnglishLocale);

    soda_installation_controller_ =
        std::make_unique<ProjectorSodaInstallationController>(
            mock_app_client_.get(), &projector_controller());
  }

  void TearDown() override {
    soda_installation_controller_.reset();
    mock_app_client_.reset();
    mock_client_.reset();
    soda_installer_.reset();

    ChromeAshTestBase::TearDown();
  }

  MockAppClient& app_client() { return *mock_app_client_; }
  MockProjectorClient& projector_client() { return *mock_client_; }
  ProjectorController& projector_controller() {
    return *ProjectorController::Get();
  }

  ProjectorSodaInstallationController* soda_installation_controller() {
    return soda_installation_controller_.get();
  }

  MockSodaInstaller* soda_installer() { return soda_installer_.get(); }
  speech::LanguageCode en_us() { return speech::LanguageCode::kEnUs; }
  speech::LanguageCode fr_fr() { return speech::LanguageCode::kFrFr; }

 private:
  Profile* testing_profile_ = nullptr;

  TestingProfileManager testing_profile_manager_{
      TestingBrowserProcess::GetGlobal()};

  std::unique_ptr<MockSodaInstaller> soda_installer_;
  std::unique_ptr<MockProjectorClient> mock_client_;
  std::unique_ptr<MockAppClient> mock_app_client_;

  std::unique_ptr<ProjectorSodaInstallationController>
      soda_installation_controller_;
  base::test::ScopedFeatureList scoped_feature_list_;
};

TEST_F(ProjectorSodaInstallationControllerTest, ShouldDownloadSoda) {
  EXPECT_TRUE(soda_installation_controller()->ShouldDownloadSoda(en_us()));

  // Other languages other than English are not currently supported.
  EXPECT_FALSE(soda_installation_controller()->ShouldDownloadSoda(fr_fr()));
}

TEST_F(ProjectorSodaInstallationControllerTest, IsSpeechRecognitionAvailable) {
  EXPECT_FALSE(soda_installation_controller()->IsSodaAvailable(en_us()));

  EXPECT_CALL(app_client(), OnSodaInstalled());
  speech::SodaInstaller::GetInstance()->NotifySodaInstalledForTesting();
  speech::SodaInstaller::GetInstance()->NotifySodaInstalledForTesting(en_us());
  EXPECT_TRUE(soda_installation_controller()->IsSodaAvailable(en_us()));
  EXPECT_FALSE(soda_installation_controller()->IsSodaAvailable(fr_fr()));
}

TEST_F(ProjectorSodaInstallationControllerTest, InstallSoda) {
  ProfileManager::GetPrimaryUserProfile()->GetPrefs()->SetBoolean(
      prefs::kProjectorCreationFlowEnabled, true);

  // Test case where SODA is already installed.
  soda_installation_controller()->InstallSoda(kEnglishLocale);

  EXPECT_CALL(app_client(), OnSodaInstalled());
  speech::SodaInstaller::GetInstance()->NotifySodaInstalledForTesting();
  speech::SodaInstaller::GetInstance()->NotifySodaInstalledForTesting(en_us());
}

TEST_F(ProjectorSodaInstallationControllerTest, OnSodaInstallProgress) {
  EXPECT_CALL(app_client(), OnSodaInstallProgress(50));
  speech::SodaInstaller::GetInstance()->NotifySodaProgressForTesting(50);
}

TEST_F(ProjectorSodaInstallationControllerTest, OnSodaInstallErrorUnspecified) {
  NewScreencastPrecondition soda_install_error(
      NewScreencastPreconditionState::kDisabled,
      {NewScreencastPreconditionReason::kSodaInstallationErrorUnspecified});
  EXPECT_CALL(app_client(), OnSodaInstallError());
  EXPECT_CALL(projector_client(),
              OnNewScreencastPreconditionChanged(soda_install_error));
  speech::SodaInstaller::GetInstance()->NotifySodaErrorForTesting(
      en_us(), speech::SodaInstaller::ErrorCode::kUnspecifiedError);
  EXPECT_EQ(projector_controller().GetNewScreencastPrecondition(),
            soda_install_error);
}

TEST_F(ProjectorSodaInstallationControllerTest, OnSodaInstallErrorNeedsReboot) {
  NewScreencastPrecondition soda_install_error(
      NewScreencastPreconditionState::kDisabled,
      {NewScreencastPreconditionReason::kSodaInstallationErrorNeedsReboot});
  EXPECT_CALL(app_client(), OnSodaInstallError());
  EXPECT_CALL(projector_client(),
              OnNewScreencastPreconditionChanged(soda_install_error));
  speech::SodaInstaller::GetInstance()->NotifySodaErrorForTesting(
      en_us(), speech::SodaInstaller::ErrorCode::kNeedsReboot);
  EXPECT_EQ(projector_controller().GetNewScreencastPrecondition(),
            soda_install_error);
}

// Prevents a regression to b/228899579.
TEST_F(ProjectorSodaInstallationControllerTest,
       OnLocaleChangedBeforeSodaInstall) {
  NewScreencastPrecondition locale_not_supported(
      NewScreencastPreconditionState::kDisabled,
      {NewScreencastPreconditionReason::kUserLocaleNotSupported});
  EXPECT_CALL(projector_client(),
              OnNewScreencastPreconditionChanged(locale_not_supported));

  // The locale changes to the user's preferences after sign in but before SODA
  // finishes installing.
  SetLocale(kNonEnglishLocale);
  speech::SodaInstaller::GetInstance()->NotifySodaInstalledForTesting();
  speech::SodaInstaller::GetInstance()->NotifySodaInstalledForTesting(en_us());
  EXPECT_TRUE(soda_installation_controller()->IsSodaAvailable(en_us()));
  EXPECT_FALSE(soda_installation_controller()->IsSodaAvailable(fr_fr()));

  EXPECT_EQ(projector_controller().GetNewScreencastPrecondition(),
            locale_not_supported);
}

// Prevents a regression to b/227626179.
TEST_F(ProjectorSodaInstallationControllerTest,
       OnLocaleChangedAfterSodaInstall) {
  ON_CALL(projector_client(), IsDriveFsMounted)
      .WillByDefault(testing::Return(true));
  EXPECT_CALL(projector_client(),
              OnNewScreencastPreconditionChanged(NewScreencastPrecondition(
                  NewScreencastPreconditionState::kEnabled, {})));

  speech::SodaInstaller::GetInstance()->NotifySodaInstalledForTesting();
  speech::SodaInstaller::GetInstance()->NotifySodaInstalledForTesting(en_us());
  EXPECT_TRUE(soda_installation_controller()->IsSodaAvailable(en_us()));
  EXPECT_FALSE(soda_installation_controller()->IsSodaAvailable(fr_fr()));

  NewScreencastPrecondition locale_not_supported(
      NewScreencastPreconditionState::kDisabled,
      {NewScreencastPreconditionReason::kUserLocaleNotSupported});

  EXPECT_CALL(projector_client(),
              OnNewScreencastPreconditionChanged(locale_not_supported));

  // The locale changes to the user's preferences after sign in but after SODA
  // finishes installing.
  SetLocale(kNonEnglishLocale);

  EXPECT_EQ(projector_controller().GetNewScreencastPrecondition(),
            locale_not_supported);
}

}  // namespace ash
