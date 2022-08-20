// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/browser/ui/passwords/password_manager_navigation_throttle.h"

#include "base/metrics/histogram_macros.h"
#include "components/password_manager/core/browser/manage_passwords_referrer.h"
#include "components/password_manager/core/browser/password_manager_constants.h"
#include "content/public/browser/browser_context.h"
#include "content/public/browser/navigation_handle.h"
#include "content/public/browser/page_navigator.h"
#include "content/public/browser/storage_partition.h"
#include "content/public/browser/web_contents.h"
#include "content/public/browser/web_contents_user_data.h"
#include "ui/base/page_transition_types.h"
#include "url/gurl.h"
#include "url/origin.h"

#if BUILDFLAG(IS_ANDROID)
#include "chrome/browser/password_manager/android/password_manager_launcher_android.h"
#endif

namespace {

using content::NavigationHandle;
using content::NavigationThrottle;
using content::WebContents;

#if !BUILDFLAG(IS_ANDROID)
constexpr char kChromeUIPasswordsURL[] = "chrome:/settings/passwords";
#endif

bool IsTriggeredOnGoogleOwnedUI(NavigationHandle* handle) {
  // Only cover cases when the user clicked on a link.
  if (!ui::PageTransitionCoreTypeIs(handle->GetPageTransition(),
                                    ui::PAGE_TRANSITION_LINK))
    return false;

  // Referrer origin and target URL must match.
  if (handle->GetURL() != GURL(password_manager::kManageMyPasswordsURL))
    return false;

  url::Origin origin = handle->GetInitiatorOrigin().value_or(url::Origin());
  if (origin != url::Origin::Create(GURL(password_manager::kReferrerURL)) &&
      origin !=
          url::Origin::Create(GURL(password_manager::kTestingReferrerURL)))
    return false;

  return true;
}

}  // namespace

PasswordManagerNavigationThrottle::PasswordManagerNavigationThrottle(
    NavigationHandle* handle)
    : NavigationThrottle(handle) {}

PasswordManagerNavigationThrottle::~PasswordManagerNavigationThrottle() =
    default;

// static
std::unique_ptr<PasswordManagerNavigationThrottle>
PasswordManagerNavigationThrottle::MaybeCreateThrottleFor(
    NavigationHandle* handle) {
  // Don't handle navigations in subframes or main frames that are in a nested
  // frame tree (e.g. portals, fenced frames)
  if (!handle->GetParentFrameOrOuterDocument() &&
      IsTriggeredOnGoogleOwnedUI(handle)) {
    return std::make_unique<PasswordManagerNavigationThrottle>(handle);
  }

  return nullptr;
}

NavigationThrottle::ThrottleCheckResult
PasswordManagerNavigationThrottle::WillStartRequest() {
  WebContents* web_contents = navigation_handle()->GetWebContents();
  if (!web_contents)
    return NavigationThrottle::PROCEED;

#if BUILDFLAG(IS_ANDROID)
  password_manager_launcher::ShowPasswordSettings(
      web_contents,
      password_manager::ManagePasswordsReferrer::kPasswordsGoogleWebsite);
#else
  content::OpenURLParams params =
      content::OpenURLParams::FromNavigationHandle(navigation_handle());
  params.url = GURL(kChromeUIPasswordsURL);
  params.transition = ui::PAGE_TRANSITION_CLIENT_REDIRECT;

  base::SequencedTaskRunnerHandle::Get()->PostTask(
      FROM_HERE, base::BindOnce(
                     [](base::WeakPtr<content::WebContents> web_contents,
                        const content::OpenURLParams& params) {
                       if (!web_contents)
                         return;
                       web_contents->OpenURL(params);
                     },
                     web_contents->GetWeakPtr(), std::move(params)));
  UMA_HISTOGRAM_ENUMERATION(
      "PasswordManager.ManagePasswordsReferrer",
      password_manager::ManagePasswordsReferrer::kPasswordsGoogleWebsite);
#endif
  return NavigationThrottle::CANCEL_AND_IGNORE;
}

const char* PasswordManagerNavigationThrottle::GetNameForLogging() {
  return "PasswordManagerNavigationThrottle";
}
