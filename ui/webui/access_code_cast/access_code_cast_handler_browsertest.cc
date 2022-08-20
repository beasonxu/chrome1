// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/test/media_router/access_code_cast/access_code_cast_integration_browsertest.h"

#if BUILDFLAG(IS_WIN)
#include "base/win/windows_version.h"
#endif
#include "chrome/browser/media/router/discovery/access_code/access_code_cast_constants.h"
#include "components/sessions/content/session_tab_helper.h"
#include "testing/gtest/include/gtest/gtest.h"

namespace media_router {

class AccessCodeCastHandlerBrowserTest
    : public AccessCodeCastIntegrationBrowserTest {};

// TODO(b/235275754): Add a case for when the network is connected and we
// surface a server error.
IN_PROC_BROWSER_TEST_F(AccessCodeCastHandlerBrowserTest,
                       ExpectNetworkErrorWhenNoNetwork) {
#if BUILDFLAG(IS_WIN)
  // TODO(b/235896651): This test sometimes timesout on win10.
  if (base::win::GetVersion() >= base::win::Version::WIN10)
    GTEST_SKIP() << "This test is flaky on win10";
#endif

  EnableAccessCodeCasting();

  // This tests that if the network is not present (we are not connected to the
  // internet), we will see a server error in the access code dialog box.
  SetUpPrimaryAccountWithHostedDomain(signin::ConsentLevel::kSync,
                                      browser()->profile());

  auto* dialog_contents = ShowDialog();
  SetAccessCode("abcdef", dialog_contents);
  PressSubmit(dialog_contents);

  // This error code corresponds to
  // ErrorMessage.NETWORK::AddSinkResultCode.SERVER_ERROR
  EXPECT_EQ(3, WaitForAddSinkErrorCode(dialog_contents));
  CloseDialog(dialog_contents);
}

IN_PROC_BROWSER_TEST_F(AccessCodeCastHandlerBrowserTest,
                       ReturnSuccessfulResponse) {
#if BUILDFLAG(IS_WIN)
  // TODO(b/235896651): This test sometimes timesout on win10.
  if (base::win::GetVersion() >= base::win::Version::WIN10)
    GTEST_SKIP() << "This test is flaky on win10";
#endif

  const char kEndpointResponseSuccess[] =
      R"({
      "device": {
        "displayName": "test_device",
        "id": "1234",
        "deviceCapabilities": {
          "videoOut": true,
          "videoIn": true,
          "audioOut": true,
          "audioIn": true,
          "devMode": true
        },
        "networkInfo": {
          "hostName": "GoogleNet",
          "port": "666",
          "ipV4Address": "192.0.2.146",
          "ipV6Address": "2001:0db8:85a3:0000:0000:8a2e:0370:7334"
        }
      }
    })";

  // Mock a successful fetch from our server.
  SetEndpointFetcherMockResponse(kEndpointResponseSuccess, net::HTTP_OK,
                                 net::OK);

  // Simulate a successful opening of the channel.
  SetMockOpenChannelCallbackResponse(true);

  EnableAccessCodeCasting();

  SetUpPrimaryAccountWithHostedDomain(signin::ConsentLevel::kSync,
                                      browser()->profile());

  auto* dialog_contents = ShowDialog();
  SetAccessCode("abcdef", dialog_contents);
  ExpectStartRouteCallFromTabMirroring(
      "cast:<1234>",
      MediaSource::ForTab(
          sessions::SessionTabHelper::IdForTab(web_contents()).id())
          .id(),
      web_contents());

  PressSubmitAndWaitForClose(dialog_contents);
}

IN_PROC_BROWSER_TEST_F(AccessCodeCastHandlerBrowserTest,
                       ExpectGenericErrorWhenNoSync) {
#if BUILDFLAG(IS_WIN)
  // TODO(b/235896651): This test sometimes timesout on win10.
  if (base::win::GetVersion() >= base::win::Version::WIN10)
    GTEST_SKIP() << "This test is flaky on win10";
#endif

  EnableAccessCodeCasting();

  // This tests that an account that does not have Sync enabled will throw a
  // generic error.
  SetUpPrimaryAccountWithHostedDomain(signin::ConsentLevel::kSignin,
                                      browser()->profile());

  auto* dialog_contents = ShowDialog();
  SetAccessCode("abcdef", dialog_contents);
  PressSubmit(dialog_contents);

  // This error code corresponds to
  // ErrorMessage.GENERIC::AddSinkResultCode.PROFILE_SYNC_ERROR
  EXPECT_EQ(1, WaitForAddSinkErrorCode(dialog_contents));
  CloseDialog(dialog_contents);
}

}  // namespace media_router
