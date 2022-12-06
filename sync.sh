#!/bin/bash

set -e

PRO_DIR="home/sxh/Downloads/temp/chrome1/chromeTemp1"
BASE_DIR="/home/sxh/Downloads/temp/source/kiwi/src"
RELEASE_DIR="${BASE_DIR}/out/Default"
APP_DIR="${PRO_DIR}/app"
LIB_DIR="${BASE_DIR}/out/Default/lib.java"
MODULES_DIR="${PRO_DIR}"

sync_chrome() {
  mkdir -p ${APP_DIR}/src/main/java
  mkdir -p ${APP_DIR}/libs
	local src_dir="${APP_DIR}/src/main/java"
  mkdir -p ${APP_DIR}/src/main
  mkdir -p ${APP_DIR}/src/main/res_gen
	local res_dir="${APP_DIR}/src/main"

   cp -r ${BASE_DIR}/android_webview/glue/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/js_sandbox/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/js_sandbox/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/nonembedded/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/support_library/boundary_interfaces/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/support_library/callback/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/support_library/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/test/embedded_test_server/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/test/shell/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/tools/automated_ui_tests/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/tools/automated_ui_tests/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/tools/system_webview_shell/apk/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/tools/system_webview_shell/layout_tests/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/tools/system_webview_shell/page_cycler/src/* ${src_dir}
   cp -r ${BASE_DIR}/android_webview/unittestjava/src/* ${src_dir}
   cp -r ${BASE_DIR}/base/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/base/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/base/android/jni_generator/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/base/test/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/base/test/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/build/android/bytecode/java* ${src_dir}
   cp -r ${BASE_DIR}/build/android/gtest_apk/java/src/* ${src_dir}
    cp -r ${BASE_DIR}/build/android/gyp/test/java* ${src_dir}
   cp -r ${BASE_DIR}/build/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/build/config/android/test/classpath_order/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/build/config/android/test/resource_overlay/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/autofill_assistant/guided_browsing/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/autofill_assistant/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/autofill_assistant/public/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/dev_ui/internal/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/dev_ui/public/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/keyboard_accessory/factory/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/keyboard_accessory/internal/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/keyboard_accessory/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/keyboard_accessory/public/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/start_surface/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/start_surface/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/tab_ui/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/tab_ui/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/tab_ui/public/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/features/vr/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/feed/core/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/feed/core/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/modules/cablev2_authenticator/public/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/modules/dev_ui/provider/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/modules/image_editor/provider/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/modules/stack_unwinder/internal/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/modules/stack_unwinder/provider/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/modules/stack_unwinder/public/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/modules/test_dummy/provider/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/modules/test_dummy/public/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/webapk/libs/client/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/webapk/libs/common/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/webapk/libs/runtime_library/javatests/apk_with_webapk_service/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/webapk/libs/runtime_library/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/webapk/libs/runtime_library/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/webapk/shell_apk/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/webapk/shell_apk/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/android/webapk/test/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/android/browserservices/intents/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/android/browserservices/metrics/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/android/browserservices/verification/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/android/crypto/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/android/examples/custom_tabs_client/src/java* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/android/examples/partner_browser_customizations_provider/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/android/lifecycle/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/android/messages/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/android/metrics/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/android/webapps/launchpad/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/back_press/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/banners/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/bluetooth/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/browser_controls/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/commerce/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/commerce/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/commerce/merchant_viewer/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/commerce/merchant_viewer/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/commerce/price_tracking/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/commerce/price_tracking/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/commerce/shopping_list/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/commerce/subscriptions/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/commerce/subscriptions/test/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/consent_auditor/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/content_creation/notes/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/content_creation/notes/internal/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/content_creation/reactions/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/content_creation/reactions/internal/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/contextmenu/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/continuous_search/android/java/src/* ${src_dir}
   #cp -r ${BASE_DIR}/chrome/browser/continuous_search/android/javatests
   cp -r ${BASE_DIR}/chrome/browser/continuous_search/internal/android/java/src/* ${src_dir}
 #  cp -r ${BASE_DIR}/chrome/browser/continuous_search/internal/android/junit",
   cp -r ${BASE_DIR}/chrome/browser/dependency_injection/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/device/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/device_reauth/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/download/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/download/internal/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/endpoint_fetcher/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/engagement/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/enterprise/util/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/feature_engagement/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/feature_guide/notifications/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/feed/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/feedback/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/first_run/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/flags/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/fullscreen/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/gsa/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/history_clusters/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/image_descriptions/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/image_editor/public/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/incognito/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/incognito/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/language/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/lens/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/loading_modal/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/loading_modal/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/locale/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/metrics_settings/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/notifications/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/notifications/chime/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/offline_pages/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/omaha/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/optimization_guide/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/optimization_guide/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/page_annotations/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/page_annotations/test/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/paint_preview/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/paint_preview/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/partnerbookmarks/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/partnercustomizations/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/password_check/android/internal/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/password_check/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/password_check/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/password_edit_dialog/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/password_entry_edit/android/internal/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/password_entry_edit/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/password_manager/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/payments/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/performance_hints/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/policy/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/preferences/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/prefetch/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/privacy/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/privacy/settings/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/privacy_review/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/privacy_sandbox/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/privacy_sandbox/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/profiles/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/safe_browsing/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/safe_browsing/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/safety_check/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/safety_check/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/search_engines/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/segmentation_platform/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/selection/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/settings/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/share/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/share/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/signin/services/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/sync/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/sync/test/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/tab/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/tab_group/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/tabmodel/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/tabmodel/internal/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/tabpersistence/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/test_dummy/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/test_dummy/internal/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/thumbnail/generator/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/touch_to_fill/android/internal/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/touch_to_fill/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/touch_to_fill/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/appmenu/internal/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/appmenu/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/appmenu/test/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/autofill/internal/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/default_browser_promo/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/favicon/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/layouts/glue/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/layouts/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/layouts/test/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/layouts/third_party/float_property/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/logo/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/management/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/multiwindow/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/native_page/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/night_mode/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/omnibox/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/page_info/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/quickactionsearchwidget/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/searchactivityutils/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/signin/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/theme/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/toolbar/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/webid/internal/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/android/webid/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/ui/messages/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/uid/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/uid/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/usb/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/user_education/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/util/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/video_tutorials/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/video_tutorials/internal/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/webapps/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/webauthn/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/browser/xsurface/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/test/android/browsertests_apk/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/test/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/test/android/test_support/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/test/android/test_trusted_web_activity/src/* ${src_dir}
   cp -r ${BASE_DIR}/chrome/test/chromedriver/test/webview_shell/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/about_ui/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/android_autofill/browser/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/android_autofill/browser/test_support/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/autofill/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/autofill_assistant/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/autofill_assistant/android/public/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/autofill_assistant/guided_browsing/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/background_task_scheduler/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/background_task_scheduler/internal/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/background_task_scheduler/internal/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/bookmarks/common/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/accessibility/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/banners/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/bottomsheet/android/internal/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/bottomsheet/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/bottomsheet/android/test/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/client_certificate/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/contacts_picker/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/display_cutout/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/http_auth/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/media/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/modaldialog/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/notifications/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/photo_picker/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/settings/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/settings/android/widget/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/share/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/site_settings/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/site_settings/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/sms/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/styles/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/test/android/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/util/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/webshare/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/widget/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/browser_ui/widget/android/test/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/commerce/core/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/component_updater/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/content_capture/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/content_capture/android/test_support/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/content_creation/notes/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/content_creation/reactions/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/content_settings/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/crash/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/crash/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/cronet/android/api/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/cronet/android/fake/java* ${src_dir}
   cp -r ${BASE_DIR}/components/cronet/android/fake/javatests* ${src_dir}
   cp -r ${BASE_DIR}/components/cronet/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/cronet/android/sample/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/cronet/android/sample/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/cronet/android/test/javaperftests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/cronet/android/test/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/cronet/android/test/smoketests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/cronet/android/test/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/dom_distiller/content/browser/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/dom_distiller/core/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/download/internal/background_service/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/download/internal/common/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/download/network/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/embedder_support/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/embedder_support/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/embedder_support/android/metrics/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/embedder_support/android/native_java_unittests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/external_intents/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/external_intents/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/externalauth/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/favicon/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/feature_engagement/internal/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/feature_engagement/public/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/find_in_page/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/gcm_driver/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/gcm_driver/instance_id/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/gcm_driver/instance_id/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/heap_profiling/multi_process/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/image_fetcher/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/infobars/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/installedapp/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/javascript_dialogs/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/language/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/location/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/media_router/browser/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/media_router/browser/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/media_router/test/android/cast_emulator/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/messages/android/internal/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/messages/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/messages/android/test/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/minidump_uploader/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/minidump_uploader/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/module_installer/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/navigation_interception/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/offline_items_collection/core/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/offline_items_collection/core/android/native_java_unittests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/omnibox/browser/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/omnibox/browser/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/page_info/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/paint_preview/browser/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/paint_preview/player/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/paint_preview/player/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/payments/content/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/payments/content/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/permissions/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/policy/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/policy/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/prefs/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/query_tiles/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/safe_browsing/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/search_engines/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/security_interstitials/content/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/security_state/content/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/segmentation_platform/content/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/segmentation_platform/internal/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/segmentation_platform/public/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/signin/public/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/site_engagement/content/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/spellcheck/browser/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/strictmode/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/strictmode/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/subresource_filter/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/sync/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/test/android/browsertests_apk/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/thin_webview/internal/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/thin_webview/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/translate/content/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/ukm/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/url_formatter/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/url_formatter/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/user_prefs/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/variations/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/version_info/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/viz/common/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/viz/service/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/webapk/android/libs/client/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/webapk/android/libs/common/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/webapps/browser/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/webauthn/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/webrtc/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/components/webxr/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/content/public/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/content/public/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/content/public/test/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/content/shell/android/browsertests/src/* ${src_dir}
   cp -r ${BASE_DIR}/content/shell/android/browsertests_apk/src/* ${src_dir}
   cp -r ${BASE_DIR}/content/shell/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/content/shell/android/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/content/shell/android/shell_apk/src/* ${src_dir}
   cp -r ${BASE_DIR}/device/bluetooth/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/device/bluetooth/test/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/device/gamepad/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/device/vr/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/media/base/android/java/src/* ${src_dir}
#   cp -r ${BASE_DIR}/media/base/android/java/src/test"
   cp -r ${BASE_DIR}/media/capture/content/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/media/capture/video/android/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/media/midi/java/src/* ${src_dir}
   cp -r ${BASE_DIR}/mojo/public/java/base/src/* ${src_dir}
   cp -r ${BASE_DIR}/mojo/public/java/bindings/src/* ${src_dir}
   cp -r ${BASE_DIR}/mojo/public/java/system/javatests/src/* ${src_dir}
   cp -r ${BASE_DIR}/mojo/public/java/system/src/* ${src_dir}
   cp -r ${BASE_DIR}/net/android/java/src/* ${src_dir}

  #new line

  cp -r ${BASE_DIR}/printing/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/data_decoder/public/cpp/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/device/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/device/battery/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/device/generic_sensor/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/device/geolocation/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/device/nfc/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/device/public/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/device/screen_orientation/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/device/time_zone_monitor/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/device/usb/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/device/vibration/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/device/wake_lock/power_save_blocker/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/media_session/public/cpp/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/service_manager/public/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/shape_detection/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/shape_detection/android/javatests/src/* ${src_dir}
  cp -r ${BASE_DIR}/services/tracing/android/test/src/* ${src_dir}
  cp -r ${BASE_DIR}/testing/android/broker/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/testing/android/native_test/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/testing/android/reporter/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/android_deps/local_modifications/preconditions/javatests/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/android_deps/util/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/android_media/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/android_provider/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/android_support_test_runner/exposed-instrumentation-api-provided/src/main/java/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/android_support_test_runner/exposed-instrumentation-api-publish/src/main/java/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/android_support_test_runner/rules/src/main/java/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/android_support_test_runner/runner/src/main/java/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/android_swipe_refresh/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/angle/src/tests/test_utils/runner/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/gif_player/src/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/glide/gif_encoder/java/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/mockito/src/src/main/java/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/mockito/src/subprojects/android/src/main/java/* ${src_dir}
  cp -r ${BASE_DIR}/third_party/robolectric/custom_asynctask/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/tools/android/audio_focus_grabber/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/tools/android/customtabs_benchmark/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/tools/android/errorprone_plugin/src/* ${src_dir}
  cp -r ${BASE_DIR}/tools/android/errorprone_plugin/test/src/* ${src_dir}
  cp -r ${BASE_DIR}/tools/android/kerberos/SpnegoAuthenticator/src/* ${src_dir}
  cp -r ${BASE_DIR}/tools/android/memconsumer/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/tools/android/push_apps_to_background/src/* ${src_dir}
  cp -r ${BASE_DIR}/ui/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/ui/android/javatests/src/* ${src_dir}
  cp -r ${BASE_DIR}/url/android/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/url/android/javatests/src/* ${src_dir}
  cp -r ${BASE_DIR}/url/android/test/java/src/* ${src_dir}
  cp -r ${BASE_DIR}/weblayer/browser/android/javatests/src/* ${src_dir}
  cp -r ${BASE_DIR}/weblayer/browser/java/* ${src_dir}
  cp -r ${BASE_DIR}/weblayer/public/java/* ${src_dir}
  cp -r ${BASE_DIR}/weblayer/public/javatests/* ${src_dir}
  cp -r ${BASE_DIR}/weblayer/public/javatestutil/* ${src_dir}
  cp -r ${BASE_DIR}/weblayer/shell/android/browsertests_apk/src/* ${src_dir}
  cp -r ${BASE_DIR}/weblayer/shell/android/shell_apk/src/* ${src_dir}

  #new line
  #cp -r ${RELEASE_DIR}/gen/android_webview/android_webview_product_config_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/browser_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/common_aidl_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/common_crash_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/common_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/common_platform_services_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/common_variations_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/glue/glue_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/js_sandbox/javatests/webview_js_sandbox_test_app_test_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/js_sandbox/js_sandbox_aidl_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/js_sandbox/js_sandbox_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/js_sandbox/js_sandbox_service_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/nonembedded/devui_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/nonembedded/nonembedded_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/nonembedded/services_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/nonembedded/util_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/platform_service_bridge_upstream_implementation_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/proto/aw_variations_seed_proto_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/proto/metrics_bridge_records_proto_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/support_library/boundary_interfaces/boundary_interface_example_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/support_library/boundary_interfaces/boundary_interface_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/support_library/callback/callback_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/support_library/support_lib_glue_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/system_webview_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/system_webview_no_weblayer_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/test/android_webview_junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/test/android_webview_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/test/android_webview_unittests_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/test/embedded_test_server/aw_net_java_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/test/embedded_test_server/aw_net_test_support_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/test/webview_instrumentation_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/test/webview_instrumentation_test_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/test/webview_instrumentation_test_mock_services_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/test/webview_instrumentation_test_utils_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/tools/automated_ui_tests/webview_ui_test_app_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/tools/automated_ui_tests/webview_ui_test_app_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/tools/automated_ui_tests/webview_ui_test_app_test_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/tools/system_webview_shell/system_webview_shell_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/tools/system_webview_shell/system_webview_shell_apk_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/tools/system_webview_shell/system_webview_shell_layout_test_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/tools/system_webview_shell/system_webview_shell_page_cycler_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/android_webview/trichrome_webview_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/base/android/jni_generator/jni_processor/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/base/android/jni_generator/jni_sample_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/base/android/jni_generator/sample_jni_apk/generated_java/input_srcjars/* ${src_dir}
  #cp -r ${RELEASE_DIR}/gen/base/base_i18n_perftests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/base/base_java/generated_java/input_srcjars/* ${src_dir}
 # cp -r ${RELEASE_DIR}/gen/base/base_java_process_launcher_test_support/generated_java/input_srcjars/* ${src_dir}
  #cp -r ${RELEASE_DIR}/gen/base/base_java_test_support/generated_java/input_srcjars/* ${src_dir}
  #cp -r ${RELEASE_DIR}/gen/base/base_java_unittest_support/generated_java/input_srcjars/* ${src_dir}
  #cp -r ${RELEASE_DIR}/gen/base/base_javatests/generated_java/input_srcjars/* ${src_dir}
  #cp -r ${RELEASE_DIR}/gen/base/base_junit_test_support/generated_java/input_srcjars/* ${src_dir}
  #cp -r ${RELEASE_DIR}/gen/base/base_junit_tests/generated_java/input_srcjars/* ${src_dir}
  #cp -r ${RELEASE_DIR}/gen/base/base_perftests__apk/generated_java/input_srcjars/* ${src_dir}
  #cp -r ${RELEASE_DIR}/gen/base/base_profiler_test_support_java/generated_java/input_srcjars/* ${src_dir}
  #cp -r ${RELEASE_DIR}/gen/base/base_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/base/jni_java/generated_java/input_srcjars/* ${src_dir}
  #cp -r ${RELEASE_DIR}/gen/base/test/test_support_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/build/android/build_java/generated_java/input_srcjars/* ${src_dir}
  #cp -r ${RELEASE_DIR}/gen/build/android/build_junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/bytecode/bytecode_processor/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/bytecode/bytecode_processor_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/bytecode/fragment_activity_replacer/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/bytecode/fragment_activity_replacer_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/bytecode/fragment_activity_replacer_single_androidx/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/bytecode/trace_event_adder/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/bytecode/trace_event_adder_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/gtest_apk/native_test_instrumentation_test_runner_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/gyp/test/hello_world/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/gyp/test/hello_world_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/test/nocompile_gn/default_locale_lint_test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/test/nocompile_gn/default_locale_lint_test_test_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/test/nocompile_gn/new_api_lint_test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/test/nocompile_gn/new_api_lint_test_test_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/android/unused_resources/unused_resources/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/config/android/test/classpath_order/a1_dependency_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/config/android/test/classpath_order/a2_master_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/config/android/test/classpath_order/java/src",
#  cp -r ${RELEASE_DIR}/gen/build/config/android/test/classpath_order/junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/config/android/test/classpath_order/z1_master_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/config/android/test/classpath_order/z2_dependency_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/build/config/android/test/resource_overlay/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/cc/base/cc_base_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/cc/cc_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/cc/cc_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/cc/cc_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/cc/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/app_hooks_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/base_module_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/base_monochrome_module_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/browser_java_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_bundle_smoke_test_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_public_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_public_test_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_public_test_vr_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_public_unit_test_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_smoke_test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_test_ar_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_test_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_test_util_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_test_vr_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_test_xr_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_unit_test_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/chrome_unit_test_util_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/features/android_library_factory/a_factory2_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/features/android_library_factory/a_impl_factory1_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/features/android_library_factory/junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/features/android_library_factory/z_factory1_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/features/android_library_factory/z_impl_factory2_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/features/autofill_assistant/autofill_assistant_java_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/features/autofill_assistant/guided_browsing/test_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/features/autofill_assistant/test_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/features/dev_ui/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/features/dev_ui/public/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/features/keyboard_accessory/factory/internal_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/features/keyboard_accessory/factory/public_java/chrome/android/features/keyboard_accessory/factory/java/src/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/features/keyboard_accessory/factory/public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/features/keyboard_accessory/internal/internal_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/features/keyboard_accessory/keyboard_accessory_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/features/keyboard_accessory/public/public_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/features/keyboard_accessory/test_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/features/start_surface/public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/features/tab_ui/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/features/tab_ui/module_desc_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/features/tab_ui/public/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/features/vr/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/modules/cablev2_authenticator/public/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/modules/dev_ui/provider/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/modules/image_editor/provider/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/modules/stack_unwinder/internal/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/modules/stack_unwinder/provider/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/modules/stack_unwinder/public/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/modules/test_dummy/provider/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/modules/test_dummy/public/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/monochrome_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/monochrome_public_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/monochrome_public_test_ar_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/trichrome_library_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/update_proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/usage_stats_proto_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/vr_test_module_desc_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/libs/client/client_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/libs/client/webapk_client_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/libs/common/common_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/libs/common/splash_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/libs/runtime_library/javatests/apk_with_webapk_service/apk_with_webapk_service/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/libs/runtime_library/runtime_library_for_tests_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/libs/runtime_library/runtime_library_javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/libs/runtime_library/webapk_service_aidl_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/compiled_in_runtime_library_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/h2o_j_unit_webapk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/h2o_j_unit_webapk_generated_webapk_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/h2o_j_unit_webapk_generated_webapk_with_service_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/javatests/dex_optimizer/dex_optimizer_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/javatests_webapk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/javatests_webapk_generated_webapk_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/javatests_webapk_generated_webapk_with_service_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/maps_go_webapk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/maps_go_webapk_generated_webapk_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/maps_go_webapk_generated_webapk_with_service_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/shell_apk_javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/uiautomator_maps_go_webapk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/uiautomator_maps_go_webapk_generated_webapk_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/uiautomator_maps_go_webapk_generated_webapk_with_service_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/unbound_webapk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/unbound_webapk_generated_webapk_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/unbound_webapk_generated_webapk_with_service_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/webapk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/webapk_chromeos/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/webapk_chromeos_generated_webapk_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/webapk_chromeos_generated_webapk_with_service_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/webapk_generated_webapk_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/webapk_generated_webapk_with_service_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/webapk_shell_apk_h2o_junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/shell_apk/webapk_shell_apk_junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/android/webapk/test/junit_test_support/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/browserservices/constants/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/browserservices/intents/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/browserservices/metrics/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/browserservices/verification/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/browserservices/verification/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/browserservices/verification/junit_test_support/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/crypto/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/examples/custom_tabs_client/custom_tabs_client_example_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/examples/partner_browser_customizations_provider/partner_browser_customizations_example_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/lifecycle/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/messages/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/metrics/ukm_java_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/metrics/ukm_javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/vr/vr_android_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/webapps/launchpad/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/android/webapps/launchpad/junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/back_press/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/back_press/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/banners/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/banners/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/bluetooth/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/browser_controls/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/commerce/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/commerce/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/commerce/merchant_viewer/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/commerce/merchant_viewer/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/commerce/merchant_viewer/optimization_guide_protos_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/commerce/price_tracking/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/commerce/price_tracking/proto/proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/commerce/shopping_list/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/commerce/subscriptions/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/consent_auditor/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/content_creation/notes/android/factory_java/chrome/browser/content_creation/notes/internal/android/java/src/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/content_creation/notes/android/factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/content_creation/notes/android/public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/content_creation/notes/internal/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/content_creation/notes/internal/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/content_creation/reactions/android/factory_java/chrome/browser/content_creation/reactions/internal/android/java/src/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/content_creation/reactions/android/factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/content_creation/reactions/android/public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/content_creation/reactions/internal/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/contextmenu/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/continuous_search/data_structures_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/continuous_search/internal/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/continuous_search/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/continuous_search/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/dependency_injection/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/device/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/device_reauth/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/download/android/download_java_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/download/android/factory_java/chrome/browser/download/internal/android/java/src/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/download/android/factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/download/android/file_provider_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/download/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/download/android/junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/download/internal/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/download/internal/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/endpoint_fetcher/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/engagement/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/enterprise/util/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/enterprise/util/test_support_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/feature_engagement/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/feature_guide/notifications/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/feed/android/hooks_public_impl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/feed/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/feed/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/feedback/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/first_run/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/flags/flags_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/flags/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/flags/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/fullscreen/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/gsa/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/history_clusters/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/image_descriptions/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/image_descriptions/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/image_editor/public/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/incognito/incognito_java_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/incognito/incognito_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/incognito/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/language/android/base_module_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/language/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/language/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/lens/delegate_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/lens/delegate_public_impl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/lens/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/lens/util_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/loading_modal/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/loading_modal/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/locale/delegate_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/locale/delegate_public_impl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/locale/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/locale/util_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/metrics_settings/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/notifications/chime/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/notifications/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/notifications/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/notifications/junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/offline_pages/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/omaha/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/optimization_guide/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/optimization_guide/android/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/optimization_guide/android/native_java_unittests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/page_annotations/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/page_annotations/test/android/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/paint_preview/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/paint_preview/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/partnerbookmarks/delegate_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/partnerbookmarks/delegate_public_impl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/partnercustomizations/delegate_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/partnercustomizations/delegate_public_impl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/partnercustomizations/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/partnercustomizations/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/partnercustomizations/test_support_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_check/android/internal/internal_factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_check/android/internal/internal_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_check/android/internal/internal_ui_factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_check/android/internal/public_factory_java/chrome/browser/password_check/android/internal/java/src/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_check/android/internal/public_factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_check/android/internal/public_ui_factory_java/chrome/browser/password_check/android/internal/java/src/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_check/android/internal/public_ui_factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_check/android/password_check_java_enums/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_check/android/password_check_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_check/android/public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_check/android/public_ui_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_check/android/test_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_edit_dialog/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_edit_dialog/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_entry_edit/android/factory_java/chrome/browser/password_entry_edit/android/internal/java/src/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_entry_edit/android/factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_entry_edit/android/internal/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_entry_edit/android/internal/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_entry_edit/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_manager/android/android_backend_java_enums/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_manager/android/backend_interface_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_manager/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_manager/android/password_manager_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_manager/android/password_manager_resource_provider_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_manager/android/public_impl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/password_manager/android/settings_interface_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/payments/android/junit_test_support/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/performance_hints/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/policy/android/delegate_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/policy/android/delegate_public_impl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/policy/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/policy/android/util_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/power_bookmarks/proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/preferences/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/preferences/preferences_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/prefetch/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/prefetch/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/privacy/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/privacy_review/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/privacy_sandbox/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/privacy_sandbox/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/profiles/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/safe_browsing/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/safe_browsing/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/safety_check/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/safety_check/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/search_engines/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/segmentation_platform/factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/selection/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/settings/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/settings/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/settings/test_support_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/share/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/signin/services/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/signin/services/android/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/subresource_filter/subresource_filter_java_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/subresource_filter/subresource_filter_javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/sync/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/sync/test/android/test_support_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/tab/critical_persisted_tab_data_flatbuffer_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/tab/critical_persisted_tab_data_proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/tab/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/tab_group/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/tabmodel/factory_java/chrome/browser/tabmodel/internal/android/java/src/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/tabmodel/factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/tabmodel/internal/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/tabmodel/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/tabpersistence/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/test_dummy/internal/base_module_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/test_dummy/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/thumbnail/generator/generator_java_test_support/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/thumbnail/generator/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/thumbnail/generator/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/thumbnail/generator/proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/touch_to_fill/android/internal/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/touch_to_fill/android/internal/resource_provider_public_impl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/touch_to_fill/android/public_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/touch_to_fill/android/test_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/touch_to_fill/android/touch_to_fill_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/appmenu/factory_java/chrome/browser/ui/android/appmenu/internal/java/src/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/appmenu/factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/appmenu/internal/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/appmenu/internal/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/appmenu/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/appmenu/test/test_support_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/autofill/internal/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/default_browser_promo/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/favicon/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/layouts/glue/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/layouts/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/layouts/test/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/layouts/third_party/float_property/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/logo/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/logo/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/management/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/multiwindow/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/multiwindow/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/native_page/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/night_mode/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/night_mode/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/night_mode/night_mode_java_test_support/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/omnibox/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/omnibox/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/omnibox/partner_location_descriptor_proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/omnibox/util_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/page_info/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/quickactionsearchwidget/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/quickactionsearchwidget/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/searchactivityutils/constants_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/searchactivityutils/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/searchactivityutils/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/signin/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/signin/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/theme/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/toolbar/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/toolbar/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/webid/internal/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/webid/internal/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/android/webid/public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/messages/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/ui/messages/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/uid/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/uid/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/usb/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/user_education/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/user_education/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/util/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/util/junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/version/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/version/templates/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/video_tutorials/factory_java/chrome/browser/video_tutorials/internal/android/java/src/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/video_tutorials/factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/video_tutorials/internal/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/video_tutorials/internal/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/video_tutorials/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/video_tutorials/test_support_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/vr/vr_common_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/vr/vr_common_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/browser/vr/vr_pixeltests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/webapps/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/webauthn/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/chrome/browser/xsurface/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android/chrome_java_integration_only_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android/chrome_java_test_feed_test__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android/chrome_java_test_pagecontroller/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android/chrome_java_test_pagecontroller_codelab__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android/chrome_java_test_pagecontroller_junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android/chrome_java_test_pagecontroller_tests__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android/chrome_java_test_support_common/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android/chrome_java_test_wpr_tests__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android/chrome_public_test_support/chrome_public_test_support_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android/chrome_webapk_integration_tests__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android/test_trusted_web_activity/test_trusted_web_activity_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android_browsertests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android_browsertests_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/android_sync_integration_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/chrome_app_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/chromedriver/test/webview_shell/chromedriver_webview_shell_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/sync_integration_test_support_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/test_support_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/chrome/test/unit_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/about_ui/android/aboutui_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/android_autofill/browser/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/android_autofill/browser/test_support/component_autofill_provider_java_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/autofill/android/autofill_features_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/autofill/android/main_autofill_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/autofill/android/payments_autofill_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/autofill/android/prefeditor_autofill_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/autofill/core/common/mojom/mojo_types_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/autofill_assistant/android/autofill_assistant_public_impl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/autofill_assistant/android/autofill_assistant_public_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/autofill_assistant/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/autofill_assistant/android/public_dependencies_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/autofill_assistant/android/public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/autofill_assistant/browser/proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/autofill_assistant/browser/public/proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/autofill_assistant/content/common/proto/proto_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/autofill_assistant/guided_browsing/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/background_task_scheduler/background_task_scheduler_task_ids_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/background_task_scheduler/components_background_task_scheduler_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/background_task_scheduler/factory_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/background_task_scheduler/internal/background_task_scheduler_javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/background_task_scheduler/internal/internal_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/background_task_scheduler/internal/native_task_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/background_task_scheduler/internal/proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/background_task_scheduler/public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/bookmarks/common/android/bookmarks_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/accessibility/android/constants_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/accessibility/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/banners/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/bottomsheet/android/factory_java/components/browser_ui/bottomsheet/android/internal/java/src/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/bottomsheet/android/factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/bottomsheet/android/internal/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/browser_ui/bottomsheet/android/internal/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/browser_ui/bottomsheet/android/internal/junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/bottomsheet/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/bottomsheet/android/manager_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/browser_ui/bottomsheet/android/test/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/client_certificate/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/contacts_picker/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/browser_ui/contacts_picker/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/display_cutout/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/http_auth/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/media/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/modaldialog/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/browser_ui/modaldialog/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/notifications/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/browser_ui/notifications/android/test_support_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/photo_picker/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/browser_ui/photo_picker/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/settings/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/share/android/constants_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/share/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/browser_ui/share/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/site_settings/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/browser_ui/site_settings/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/sms/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/styles/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/browser_ui/test/android/test_support_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/util/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/webshare/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/browser_ui/widget/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/browser_ui/widget/android/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/browser_ui/widget/android/test_support_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cast_streaming/browser/e2e_tests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/commerce/core/android/core_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/commerce/core/proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/component_updater/android/background_task_update_scheduler_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/component_updater/android/component_provider_service_aidl_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/component_updater/android/embedded_component_loader_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/components_browsertests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/components_browsertests_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/components_junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/components_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/components_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/content_capture/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/content_capture/android/test_support/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/content_creation/notes/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/content_creation/reactions/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/content_creation/reactions/android/reaction_types_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/content_settings/android/content_settings_enums_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/content_settings/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/content_settings/core/common/mojo_bindings_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/crash/android/anr_collector_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/crash/android/anr_data_proto_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/crash/android/handler_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/crash/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/crash/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_api_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_common_javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_fake_javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_impl_common_base_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_impl_fake_base_java/generated_java/input_srcjars/* ${src_dir}
#  开始
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_impl_java_util_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_impl_native_base_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_impl_platform_base_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_perf_test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_sample_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_sample_apk_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_sample_test_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_smoketests_missing_native_library_instrumentation_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_smoketests_platform_only_instrumentation_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_test_apk_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_test_instrumentation_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_tests_android__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_unittests_android__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/cronet/android/cronet_urlconnection_impl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/cronet/android/templates/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/device_reauth/device_reauth_java_enums/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/digital_asset_links/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/digital_goods/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/dom_distiller/content/browser/android/dom_distiller_content_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/dom_distiller/core/android/dom_distiller_core_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/dom_distiller/core/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/download/internal/background_service/internal_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/download/internal/common/internal_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/download/network/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/download/network/network_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/download/public/common/public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/download/public/task/public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/application_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/browser_context_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/components_embedder_support_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/content_view_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/context_menu_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/embedder_support_javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/junit_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/metrics/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/native_java_unittests_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/simple_factory_key_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/util_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/view_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/web_contents_delegate_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/external_intents/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/external_intents/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/externalauth/android/google_delegate_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/externalauth/android/google_delegate_public_impl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/externalauth/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/favicon/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/feature_engagement/internal/internal_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/feature_engagement/public/public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/feed/core/proto/proto_java_v2/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/feed/core/v2/feedv2_core_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/find_in_page/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/gcm_driver/android/components_gcm_driver_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/gcm_driver/android/gcm_driver_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/gcm_driver/instance_id/android/instance_id_driver_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/gcm_driver/instance_id/android/instance_id_driver_test_support_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/gwp_asan/gwp_asan_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/heap_profiling/multi_process/heap_profiling_java_test_support/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/image_fetcher/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/infobars/android/infobar_android_enums_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/infobars/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/infobars/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/infobars/core/infobar_enums_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/installedapp/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/installedapp/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/javascript_dialogs/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/language/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/language/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/language/android/ulp_delegate_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/language/android/ulp_delegate_public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/location/android/location_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/location/android/settings_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/media_router/browser/android/cast_options_provider_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/media_router/browser/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/media_router/browser/android/test_support_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/media_router/test/android/cast_emulator/cast_emulator_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/media_router/test/android/media_router_test_support/media_router_test_support_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/messages/android/factory_java/components/messages/android/internal/java/src/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/messages/android/factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/messages/android/internal/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/messages/android/internal/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/messages/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/messages/android/manager_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/messages/android/test/test_support_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/metrics/metrics_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/metrics/metrics_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/minidump_uploader/minidump_uploader_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/minidump_uploader/minidump_uploader_java_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/minidump_uploader/minidump_uploader_javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/mirroring/mirroring_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/module_installer/android/module_installer_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/module_installer/android/module_installer_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/module_installer/android/module_interface_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/navigation_interception/android/navigation_interception_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/network_session_configurator/android/network_session_configurator_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/offline_items_collection/core/core_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/offline_items_collection/core/native_java_unittests_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/offline_pages/core/prefetch/offline_prefetch_proto_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/offline_pages/offline_pages_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/omnibox/browser/browser_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/omnibox/browser/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/omnibox/browser/test_util_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/optimization_guide/proto/optimization_guide_proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/page_info/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/page_info/android/page_info_action_enum_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/page_info/core/proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/paint_preview/browser/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/paint_preview/browser/paint_preview_browser_unit_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/paint_preview/common/paint_preview_common_unit_tests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/paint_preview/player/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/paint_preview/player/android/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/paint_preview/player/android/paint_preview_junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/paint_preview/player/android/player_java_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/paint_preview/renderer/paint_preview_renderer_unit_tests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/password_manager/core/browser/password_manager_java_enums/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/password_manager/core/common/password_manager_common_java_enums/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/payments/content/android/feature_list_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/payments/content/android/full_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/payments/content/android/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/payments/content/android/junit_test_support/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/payments/content/android/minimal_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/payments/content/android/service_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/payments/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/permissions/android/components_permissions_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/permissions/android/core_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/permissions/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/policy/android/components_policy_junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/policy/android/native_test_support_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/policy/android/policy_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/policy/android/policy_java_test_support/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/prefs/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/profile_metrics/browser_profile_type_enum_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/query_tiles/public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/query_tiles/query_tile_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/query_tiles/query_tiles_junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/query_tiles/test_support_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/safe_browsing/android/safe_browsing_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/schema_org/common/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/search_engines/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/security_interstitials/content/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/security_state/content/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/security_state/core/security_state_enums_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/segmentation_platform/content/content_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/segmentation_platform/internal/internal_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/segmentation_platform/public/proto/segmentation_platform_proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/segmentation_platform/public/public_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/send_tab_to_self/send_tab_to_self_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/services/filesystem/filesystem_service_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/services/filesystem/public/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/services/paint_preview_compositor/paint_preview_compositor_unit_tests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/shared_highlighting/core/common/shared_highlighting_android_enums_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/signin/core/browser/signin_enums_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/signin/public/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/signin/public/android/javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/signin/public/android/signin_java_test_support/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/site_engagement/content/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/spellcheck/browser/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/strictmode/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/strictmode/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/subresource_filter/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/sync/android/sync_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/sync/protocol/protocol_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/thin_webview/factory_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/thin_webview/internal/internal_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/thin_webview/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/tracing/tracing_perftests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/translate/content/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/translate/content/android/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/translate/content/android/translate_android_enums_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/translate/core/common/translate_infobar_event_enum_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/ukm/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/ukm/ukm_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/url_formatter/android/url_formatter_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/url_formatter/android/url_formatter_javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/user_prefs/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/variations/android/components_variations_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/variations/android/variations_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/variations/proto/proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/variations/variations_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/variations/variations_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/version_info/android/java* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/version_info/android/version_constants_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/viz/common/common_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/viz/service/service_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/viz/viz_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/viz/viz_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/viz/viz_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/webapk/android/libs/client/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/webapk/android/libs/common/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/webapps/browser/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/webapps/common/android/webapk_install_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/webauthn/android/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/components/webauthn/android/test_support_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/webrtc/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/webrtc/components_webrtc_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/webxr/android/ar_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/webxr/android/ar_java_base/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/webxr/android/ar_java_interfaces/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/components/webxr/android/webxr_android_enums_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/content/public/android/content_full_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/content/public/android/content_javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/content/public/android/content_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/content/public/android/content_main_dex_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/content/public/common/common_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/content/public/common/trust_tokens_mojo_bindings_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/content/public/test/android/android_test_message_pump_support_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/content/public/test/android/content_java_test_support/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/content/shell/android/content_shell_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/content/shell/android/content_shell_apk_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/content/shell/android/content_shell_browsertests_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/content/shell/android/content_shell_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/content/shell/android/content_shell_test_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/content/shell/android/content_shell_test_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/content/test/content_browsertests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/content/test/content_browsertests_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/content/test/content_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/content/test/content_unittests_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/courgette/courgette_fuzz__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/courgette/courgette_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/crypto/crypto_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/device/bluetooth/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/device/bluetooth_test_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/device/device_junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/device/device_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/device/gamepad/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/device/vr/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/gin/gin_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/google_apis/gcm/gcm_unit_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/google_apis/google_apis_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/gpu/command_buffer_perftests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/gpu/config/config_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/gpu/gl_tests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/gpu/gpu_benchmark__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/gpu/gpu_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/gpu/gpu_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/gpu/ipc/common/gpu_preferences_interface_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/gpu/ipc/common/interfaces_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/gpu/ipc/common/vulkan_interface_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/gpu/vulkan/android/vk_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/gpu/vulkan/vulkan_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ipc/ipc_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ipc/ipc_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/media/audio_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/base/android/display_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/media/base/android/media_base_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/base/android/media_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/media/capture/capture_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/capture/content/android/screen_capture_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/capture/mojom/video_capture_buffer_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/capture/mojom/video_capture_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/capture/mojom/video_capture_types_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/capture/video/android/capture_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/media/cast/cast_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/media/gpu/video_decode_accelerator_unittest__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/media/learning/mojo/media_learning_mojo_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/learning/mojo/public/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/media/media_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/media/media_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/midi/midi_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/media/midi/midi_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/media/mojo/media_mojo_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/mojo/mojom/audio_data_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/mojo/mojom/encryption_pattern_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/mojo/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/mojo/mojom/stable/native_pixmap_handle_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/media/mojo/mojom/stable/stable_video_decoder_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/media/remoting/media_remoting_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/mojo/mojo_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/mojo/mojo_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/mojo/public/interfaces/bindings/tests/echo_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/mojo/public/interfaces/bindings/tests/test_deserializer_interface_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/mojo/public/interfaces/bindings/tests/test_interfaces_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/mojo/public/interfaces/bindings/tests/test_mojom_import2_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/mojo/public/interfaces/bindings/tests/test_mojom_import_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/mojo/public/interfaces/bindings/tests/test_mojom_import_wrapper_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/mojo/public/interfaces/bindings/tests/test_mojom_import_wrapper_wrapper_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/mojo/public/java/base_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/mojo/public/java/bindings_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/mojo/public/java/system/mojo_javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/mojo/public/java/system/mojo_test_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/mojo/public/java/system/system_impl_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/mojo/public/java/system/test_support_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/mojo/public/java/system_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/mojo/public/mojom/base/base_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/net/android/embedded_test_server_aidl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/net/android/net_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/net/android/net_java_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/net/android/net_java_test_support_provider/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/net/android/net_javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/net/android/net_junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/net/android/net_test_support_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/net/android/net_thread_stats_uid_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/net/base/features_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/net/net_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/net/net_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/printing/printing_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/printing/printing_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/sandbox/policy/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/data_decoder/public/cpp/android/safe_json_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/data_decoder/public/mojom/mojom_resource_snapshot_for_web_bundle_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/battery/android/battery_monitor_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/generic_sensor/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/geolocation/geolocation_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/nfc/android/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/public/java/device_feature_list_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/public/java/geolocation_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/services/device/public/java/geolocation_java_test_support/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/public/java/nfc_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/public/mojom/generic_sensor_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/public/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/public/mojom/usb_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/screen_orientation/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/time_zone_monitor/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/usb/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/vibration/android/vibration_manager_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/device/wake_lock/power_save_blocker/java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/media_session/public/cpp/android/media_session_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/media_session/public/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/network/public/features_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/network/public/mojom/cookies_mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/network/public/mojom/mojom_ip_address_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/network/public/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/network/public/mojom/mojom_network_isolation_key_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/network/public/mojom/mojom_network_param_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/network/public/mojom/mojom_proxy_config_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/network/public/mojom/mojom_schemeful_site_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/network/public/mojom/url_loader_base_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/network/public/mojom/websocket_mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/proxy_resolver/public/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/service_manager/public/java/service_manager_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/service_manager/public/mojom/constants_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/service_manager/public/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/services/service_manager/tests/service_manager_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/services/services_javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/services/services_junit_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/services/services_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/services/services_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/shape_detection/public/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/shape_detection/shape_detection_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/services/test/echo/public/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/services/tracing/tracing_test_helper_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/viz/public/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/services/viz/public/mojom/resource_format_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/skia/public/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/skia/skia_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/sql/sql_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/storage/storage_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/testing/android/broker/broker_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/testing/android/native_test/native_main_runner_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/testing/android/native_test/native_test_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/testing/android/reporter/reporter_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/abseil-cpp/absl_hardening_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/abseil-cpp/absl_tests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/android_deps/chromium_play_services_availability_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/android_deps/chromium_play_services_availability_shadows_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/android_deps/local_modifications/preconditions/javatests/javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/android_media/android_media_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/android_provider/android_provider_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/android_support_test_runner/exposed_instrumentation_api_publish_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/android_support_test_runner/rules_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/android_support_test_runner/runner_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/android_swipe_refresh/android_swipe_refresh_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/angle/angle_agi_chromium_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/angle/angle_chromium_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/angle/src/tests/angle_end2end_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/angle/src/tests/angle_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/angle/src/tests/angle_system_info_test__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/angle/src/tests/angle_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/angle/src/tests/angle_white_box_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/angle/src/tests/angle_white_box_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/angle/src/tests/native_test_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/angle/src/tests/test_utils_unittest_helper__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/blink/common/blink_common_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/blink_headers_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/common/common_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/mojom/android_mojo_bindings_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/mojom/authenticator_test_mojo_bindings_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/mojom/color_scheme_mojo_bindings_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/mojom/gpu/gpu_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/mojom/mojom_core_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/mojom/mojom_mhtml_load_result_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/mojom/mojom_platform_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/mojom/script_type_mojo_bindings_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/mojom/service_worker/storage_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/mojom/tokens/tokens_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/mojom/usb/usb_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/blink/public/mojom/web_feature_mojo_bindings_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/blink/renderer/controller/blink_perf_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/blink/renderer/controller/blink_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/blink/renderer/platform/blink_fuzzer_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/blink/renderer/platform/blink_platform_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/blink/renderer/platform/blink_platform_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/blink/renderer/platform/heap/blink_heap_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/blink/renderer/platform/heap/blink_heap_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/blink/renderer/platform/wtf/wtf_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/boringssl/boringssl_crypto_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/boringssl/boringssl_ssl_tests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/catapult/devil/empty_system_webview_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/catapult/tracing/tracing/histogram_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/ced/ced_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/crc32c/crc32c_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/flatbuffers/flatbuffers_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/gif_player/gif_player_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/glide/gif_encoder/gif_encoder_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/gvr-android-keyboard/kb_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/ipcz/src/ipcz_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/libaddressinput/libaddressinput_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/libjingle_xmpp/libjingle_xmpp_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/libjpeg_turbo/libjpeg_turbo_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/libphonenumber/libphonenumber_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/liburlpattern/liburlpattern_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/metrics_proto/metrics_proto_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/mockito/mockito_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/one_euro_filter/one_euro_filter_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/opus/opus_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/opus/test_opus_api__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/opus/test_opus_decode__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/opus/test_opus_encode__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/opus/test_opus_padding__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/perfetto/perfetto_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/perfetto/trace_processor_minimal_smoke_tests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/pffft/pffft_unittest__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/vulkan-deps/spirv-tools/src/spvtools_test__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/third_party/webrtc_overrides/webrtc_overrides_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/third_party/zlib/zlib_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/tools/android/audio_focus_grabber/audio_focus_grabber_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/tools/android/customtabs_benchmark/customtabs_benchmark_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/tools/android/errorprone_plugin/errorprone_plugin/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/tools/android/kerberos/SpnegoAuthenticator/spnego_authenticator_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/tools/android/memconsumer/memconsumer_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/tools/android/push_apps_to_background/push_apps_to_background_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/accessibility/accessibility_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/accessibility/accessibility_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/android/clipboard_java_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/android/ui_android_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/android/ui_java_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/android/ui_javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/android/ui_junit_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/android/ui_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/android/ui_no_recycler_view_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/android/ui_recycler_view_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/android/ui_utils_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/base/cursor/mojom/cursor_type_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/base/cursor/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/base/dragdrop/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/base/feature_list_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/base/features_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/base/ime/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/base/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/base/ui_base_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/color/color_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/compositor/compositor_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/display/display_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/display/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/events/events_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/events/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/gfx/geometry/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/gfx/gfx_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/gfx/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/gfx/mojom/native_handle_types_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/gfx/range/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/gl/gl_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/gl/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/latency/latency_unittests__apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/ui/latency/mojom/mojom_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/native_theme/native_theme_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/shell_dialogs/shell_dialogs_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/snapshot/snapshot_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/ui/touch_selection/ui_touch_selection_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/url/gurl_android_test_helper_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/url/gurl_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/url/gurl_javatests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/url/gurl_junit_shadows/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/url/gurl_junit_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/url/gurl_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/url/mojom/url_mojom_gurl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/url/mojom/url_mojom_origin_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/url/mojom/url_mojom_scheme_host_port_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/url/origin_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/url/url_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/url/url_perftests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/url/url_unittests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/browser/android/javatests/weblayer_bundle_test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/browser/android/javatests/weblayer_instrumentation_test_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/browser/android/javatests/weblayer_instrumentation_test_with_chrome_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/browser/android/javatests/weblayer_java_private_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/browser/android/javatests/weblayer_java_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/browser/android/javatests/weblayer_java_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/browser/android/javatests/weblayer_private_instrumentation_test_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/browser/android/javatests/weblayer_private_java_tests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/browser/android/javatests/weblayer_support_instrumentation_test_apk__test_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/weblayer/browser/java/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/weblayer/browser/java/base_module_interfaces_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/weblayer/browser/java/base_module_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/weblayer/browser/java/gms_bridge_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/weblayer/browser/java/gms_bridge_upstream_impl_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/weblayer/browser/java/interfaces_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/weblayer/browser/java/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/browser/java/junit_test_support/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/browser/java/test_interfaces_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/browser/java/test_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/browser/java/weblayer_junit_tests/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/weblayer/public/java/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/weblayer/public/java/java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/public/javatests/weblayer_public_javatests/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/public/javatestutil/test_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/weblayer/shell/android/weblayer_shell_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/weblayer/shell/android/weblayer_shell_java/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/weblayer/shell/android/weblayer_shell_system_webview_apk/generated_java/input_srcjars/* ${src_dir}
  cp -r ${RELEASE_DIR}/gen/weblayer/shell/android/weblayer_support_apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/test/weblayer_browsertests__apk/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/test/weblayer_browsertests_java/generated_java/input_srcjars/* ${src_dir}
#  cp -r ${RELEASE_DIR}/gen/weblayer/test/weblayer_unittests__apk/generated_java/input_srcjars/* ${src_dir}


  cp -r ${BASE_DIR}//chrome/android/java/res_base \
        ${BASE_DIR}/chrome/android/java/res_chromium \
        ${BASE_DIR}/chrome/android/java/res_chromium_base \
        ${BASE_DIR}/chrome/android/java/res_vr \
        ${BASE_DIR}/chrome/android/java/res_template \
        "$res_dir"

  	cp "${RELEASE_DIR}/gen/chrome/android/chrome_public_apk/AndroidManifest.xml" \
		"${APP_DIR}/src/main"
}

sync_base_res() {
    mkdir -p ${MODULES_DIR}/base_res
#    mkdir -p ${MODULES_DIR}/base_res/xml
    local base_res_dir="${MODULES_DIR}/base_res"
    cp -r ${BASE_DIR}//chrome/android/java/res \
          ${RELEASE_DIR}/gen/components/browser_ui/strings/android/browser_ui_strings_grd_grit_output/* \
          ${RELEASE_DIR}/gen/components/strings/java/res/* \
          ${RELEASE_DIR}/gen/chrome/browser/password_check/android/internal/java_strings_grd_grit_output/* \
          ${RELEASE_DIR}/gen/chrome/android/features/keyboard_accessory/internal/java_strings_grd_grit_output/* \
          ${RELEASE_DIR}/gen/chrome/android/features/tab_ui/java_strings_grd_grit_output/* \
          ${RELEASE_DIR}/gen/chrome/browser/touch_to_fill/android/internal/java_strings_grd_grit_output/* \
          ${BASE_DIR}/components/blocked_content/android/res/* \
          ${RELEASE_DIR}/gen/chrome/java/res/* \
          ${RELEASE_DIR}/gen/components/webapps/browser/android/webapps_strings_grd_grit_output/* \
          ${RELEASE_DIR}/gen/chrome/app/policy/android/* \
          ${RELEASE_DIR}/gen/components/permissions/android/permissions_strings_grd_grit_output/* \
          "$base_res_dir"
          #先解压压缩包
     # cp -r ${RELEASE_DIR}/resource_zips/chrome/android/ui_locale_string_resources/* "$base_res_dir"
}

sync_base() {
    mkdir -p ${MODULES_DIR}/base/src/main/res
    local base_res_dir="${MODULES_DIR}/base/src/main/res"
    cp -r ${RELEASE_DIR}/gen/chrome/android/templates/chrome_version_xml/res/* \
          "$base_res_dir"
}

sync_assets() {
	local asset_dir="${APP_DIR}/src/main/assets"
	mkdir -p "$asset_dir"
	mkdir -p "${asset_dir}/locales"

	#cp ${RELEASE_DIR}/*.dat \
	cp ${RELEASE_DIR}/gen/chrome/android/chrome_apk_paks/*.pak \
		"$asset_dir"

	cp ${RELEASE_DIR}/gen/chrome/android/chrome_apk_paks/locales/*.pak \
		"${asset_dir}/locales"
	cp ${RELEASE_DIR}/snapshot_blob.bin "$asset_dir"/snapshot_blob_32.bin
}

sync_aidl() {
    mkdir -p ${APP_DIR}/src/main/aidl
    mkdir -p ${APP_DIR}/src/main/aidl/com/google/vr/keyboard
	  local aidl_dir="${APP_DIR}/src/main/aidl"

    cp -r ${BASE_DIR}//third_party/gvr-android-keyboard/com/google/vr/keyboard/IGvrKeyboardLoader.aidl \
          ${APP_DIR}/src/main/aidl/com/google/vr/keyboard

    local runtime_library_aidl="${APP_DIR}/src/main/aidl/org/chromium/webapk/lib/runtime_library"
    mkdir -p "$runtime_library_aidl"
    mv -f ${APP_DIR}/src/main/java/org/chromium/webapk/lib/runtime_library/*.aidl \
		  "$runtime_library_aidl"

}

sync_ui() {
	mkdir -p ${MODULES_DIR}/ui/src/main/res
cp -r ${BASE_DIR}//ui/android/java/res/* \
		${RELEASE_DIR}/gen/ui/android/ui_strings_grd_grit_output/* \
		${RELEASE_DIR}/gen/chrome/browser/ui/android/strings/ui_strings_grd_grit_output/* \
		"${MODULES_DIR}/ui/src/main/res"
}

sync_components(){
  mkdir -p ${MODULES_DIR}/components/autofill/src/main/res
  cp -r ${BASE_DIR}//components/autofill/android/java/res/* \
        ${RELEASE_DIR}/gen/components/autofill/android/autofill_strings_grd_grit_output/* \
        ${MODULES_DIR}/components/autofill/src/main/res

  mkdir -p ${MODULES_DIR}/components/embedder_support/src/main/res
  cp -r ${BASE_DIR}//components/embedder_support/android/java/res/* \
        ${MODULES_DIR}/components/embedder_support/src/main/res

  mkdir -p ${MODULES_DIR}/components/messages/src/main/res
  cp -r ${BASE_DIR}//components/messages/android/java/res/* \
        ${MODULES_DIR}/components/messages/src/main/res

  mkdir -p ${MODULES_DIR}/components/browser_ui_widget/src/main/res
  cp -r ${BASE_DIR}//components/browser_ui/widget/android/java/res/* \
        ${MODULES_DIR}/components/browser_ui_widget/src/main/res

  mkdir -p ${MODULES_DIR}/components/browser_ui_styles/src/main/res
  cp -r ${BASE_DIR}//components/browser_ui/styles/android/java/res/* \
        ${BASE_DIR}/components/browser_ui/styles/android/java/res-arcore/* \
        ${MODULES_DIR}/components/browser_ui_styles/src/main/res

  mkdir -p ${MODULES_DIR}/components/browser_ui_settings/src/main/res
  cp -r ${BASE_DIR}//components/browser_ui/settings/android/java/res/* \
        ${MODULES_DIR}/components/browser_ui_settings/src/main/res

  mkdir -p ${MODULES_DIR}/components/infobars/src/main/res
  cp -r ${BASE_DIR}//components/infobars/android/res/* \
        ${MODULES_DIR}/components/infobars/src/main/res

  mkdir -p ${MODULES_DIR}/components/permissions/src/main/res
  cp -r ${BASE_DIR}//components/permissions/android/res/* \
        ${MODULES_DIR}/components/permissions/src/main/res

  mkdir -p ${MODULES_DIR}/components/browser_ui_modaldialog/src/main/res
  cp -r ${BASE_DIR}//components/browser_ui/modaldialog/android/java/res/* \
        ${MODULES_DIR}/components/browser_ui_modaldialog/src/main/res

  mkdir -p ${MODULES_DIR}/components/omnibox/src/main/res
  cp -r ${BASE_DIR}//components/omnibox/browser/android/java/res/* \
        ${MODULES_DIR}/components/omnibox/src/main/res

  mkdir -p ${MODULES_DIR}/components/payments/src/main/res
  cp -r ${BASE_DIR}//components/payments/content/android/java/res/* \
        ${MODULES_DIR}/components/payments/src/main/res

  #mkdir -p ${MODULES_DIR}/components/payments/src/main/google_pay_res
  #cp -r ${BASE_DIR}//components/payments/content/android/google_pay_res/* \
   #     ${MODULES_DIR}/components/payments/src/main/google_pay_res

  mkdir -p ${MODULES_DIR}/components/browser_ui_contacts_picker/src/main/res
  cp -r ${BASE_DIR}//components/browser_ui/contacts_picker/android/java/res/* \
        ${MODULES_DIR}/components/browser_ui_contacts_picker/src/main/res

  mkdir -p ${MODULES_DIR}/components/page_info/src/main/res
  cp -r ${BASE_DIR}//components/page_info/android/java/res/* \
        ${MODULES_DIR}/components/page_info/src/main/res

  mkdir -p ${MODULES_DIR}/components/translate/src/main/res
  cp -r ${BASE_DIR}//components/translate/content/android/java/res/* \
        ${MODULES_DIR}/components/translate/src/main/res

  mkdir -p ${MODULES_DIR}/components/find_in_page/src/main/res
  cp -r ${BASE_DIR}//components/find_in_page/android/java/res/* \
        ${MODULES_DIR}/components/find_in_page/src/main/res

  mkdir -p ${MODULES_DIR}/components/media_router/src/main/res
  cp -r ${BASE_DIR}//components/media_router/browser/android/java/res/* \
        ${RELEASE_DIR}/gen/components/media_router/browser/android/java_strings_grd_grit_output/* \
        ${MODULES_DIR}/components/media_router/src/main/res

  mkdir -p ${MODULES_DIR}/components/subresource_filter/src/main/res
  cp -r ${BASE_DIR}//components/subresource_filter/android/java/res/* \
        ${MODULES_DIR}/components/subresource_filter/src/main/res

  mkdir -p ${MODULES_DIR}/components/embedder_support/src/main/res
  cp -r ${RELEASE_DIR}/gen/components/embedder_support/android/web_contents_delegate_strings_grd_grit_output/* \
        ${MODULES_DIR}/components/embedder_support/src/main/res

  mkdir -p ${MODULES_DIR}/components/browser_ui_site_settings/src/main/res
  cp -r ${BASE_DIR}//components/browser_ui/site_settings/android/java/res/* \
        ${MODULES_DIR}/components/browser_ui_site_settings/src/main/res

  mkdir -p ${MODULES_DIR}/components/javascript_dialogs/src/main/res
  cp -r ${BASE_DIR}//components/javascript_dialogs/android/java/res/* \
        ${RELEASE_DIR}/gen/components/javascript_dialogs/android/javascript_dialogs_strings_grd_grit_output/* \
        ${MODULES_DIR}/components/javascript_dialogs/src/main/res

  mkdir -p ${MODULES_DIR}/components/browser_ui_photo_picker/src/main/res
  cp -r ${BASE_DIR}//components/browser_ui/photo_picker/android/java/res/* \
        ${MODULES_DIR}/components/browser_ui_photo_picker/src/main/res

  mkdir -p ${MODULES_DIR}/components/browser_ui_media/src/main/res
  cp -r ${BASE_DIR}//components/browser_ui/media/android/java/res/* \
        ${MODULES_DIR}/components/browser_ui_media/src/main/res

  mkdir -p ${MODULES_DIR}/components/webrtc/src/main/res
  cp -r ${BASE_DIR}//components/webrtc/android/java/res/* \
        ${MODULES_DIR}/components/webrtc/src/main/res

  mkdir -p ${MODULES_DIR}/components/browser_ui_http_auth/src/main/res
  cp -r ${BASE_DIR}//components/browser_ui/http_auth/android/java/res/* \
        ${MODULES_DIR}/components/browser_ui_http_auth/src/main/res

  mkdir -p ${MODULES_DIR}/components/browser_ui_share/src/main/res
  cp -r ${BASE_DIR}//components/browser_ui/share/android/java/res/* \
        ${MODULES_DIR}/components/browser_ui_share/src/main/res

  mkdir -p ${MODULES_DIR}/components/browser_ui_bottomsheet/src/main/res
  cp -r ${BASE_DIR}//components/browser_ui/bottomsheet/android/java/res/* \
        ${MODULES_DIR}/components/browser_ui_bottomsheet/src/main/res

  mkdir -p ${MODULES_DIR}/components/webapk_lib_common/src/main/res
  cp -r ${BASE_DIR}//components/webapk/android/libs/common/res_splash/* \
        ${MODULES_DIR}/components/webapk_lib_common/src/main/res

  mkdir -p ${MODULES_DIR}/components/webapps/src/main/res
  cp -r ${BASE_DIR}//components/webapps/browser/android/java/res/* \
        ${MODULES_DIR}/components/webapps/src/main/res
}

sync_browser(){
  #mkdir -p ${MODULES_DIR}/browser/autofill_assistant/src/main/res
 # cp -r ${BASE_DIR}//chrome/android/features/autofill_assistant/java/res/* \
  #      ${BASE_DIR}/chrome/android/features/autofill_assistant/java/res_poodle/* \
   #     ${MODULES_DIR}/browser/autofill_assistant/src/main/res

  mkdir -p ${MODULES_DIR}/browser/keyboard_accessory/src/main/res
  cp -r ${BASE_DIR}//chrome/android/features/keyboard_accessory/internal/java/res/* \
        ${MODULES_DIR}/browser/keyboard_accessory/src/main/res

  mkdir -p ${MODULES_DIR}/browser/feed/src/main/res
  cp -r ${BASE_DIR}//chrome/android/feed/core/java/res/* \
        ${MODULES_DIR}/browser/feed/src/main/res

  mkdir -p ${MODULES_DIR}/browser/ui_favicon/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/ui/android/favicon/java/res/* \
        ${MODULES_DIR}/browser/ui_favicon/src/main/res

  mkdir -p ${MODULES_DIR}/browser/share/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/share/android/java/res/* \
        ${MODULES_DIR}/browser/share/src/main/res

  mkdir -p ${MODULES_DIR}/browser/video_tutorials/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/video_tutorials/android/java/res/* \
        ${MODULES_DIR}/browser/video_tutorials/src/main/res

  mkdir -p ${MODULES_DIR}/browser/download/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/download/android/java/res/* \
        ${MODULES_DIR}/browser/download/src/main/res

  mkdir -p ${MODULES_DIR}/browser/feedback/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/feedback/android/java/res/* \
        ${MODULES_DIR}/browser/feedback/src/main/res

  mkdir -p ${MODULES_DIR}/browser/password_check/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/password_check/android/java/res/* \
        ${MODULES_DIR}/browser/password_check/src/main/res

  mkdir -p ${MODULES_DIR}/browser/image_descriptions/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/image_descriptions/android/java/res/* \
        ${MODULES_DIR}/browser/image_descriptions/src/main/res

  mkdir -p ${MODULES_DIR}/browser/user_education/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/user_education/java/res/* \
        ${MODULES_DIR}/browser/user_education/src/main/res

  mkdir -p ${MODULES_DIR}/browser/touch_to_fill/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/touch_to_fill/android/internal/java/res/* \
        ${MODULES_DIR}/browser/touch_to_fill/src/main/res

  mkdir -p ${MODULES_DIR}/browser/safety_check/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/safety_check/android/java/res/* \
        ${MODULES_DIR}/browser/safety_check/src/main/res

  mkdir -p ${MODULES_DIR}/browser/password_check_internal/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/password_check/android/internal/java/res/* \
        ${MODULES_DIR}/browser/password_check_internal/src/main/res

   mkdir -p ${MODULES_DIR}/browser/password_check_internal/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/password_check/android/internal/java/res/* \
        ${MODULES_DIR}/browser/password_check_internal/src/main/res

   mkdir -p ${MODULES_DIR}/browser/video_tutorials/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/video_tutorials/internal/android/java/res/* \
        ${MODULES_DIR}/browser/video_tutorials/src/main/res

     mkdir -p ${MODULES_DIR}/browser/privacy_secure_dns/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/privacy/java/res/* \
        ${MODULES_DIR}/browser/privacy_secure_dns/src/main/res

  mkdir -p ${MODULES_DIR}/browser/ui_appmenu_internal/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/ui/android/appmenu/internal/java/res/* \
        ${MODULES_DIR}/browser/ui_appmenu_internal/src/main/res

  mkdir -p ${MODULES_DIR}/browser/ui_appmenu/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/ui/android/appmenu/java/res/* \
        ${MODULES_DIR}/browser/ui_appmenu/src/main/res

  mkdir -p ${MODULES_DIR}/browser/ui_appmenu/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/ui/android/appmenu/java/res/* \
        ${MODULES_DIR}/browser/ui_appmenu/src/main/res

  mkdir -p ${MODULES_DIR}/browser/safe_browsing_settings/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/safe_browsing/android/java/res/* \
        ${MODULES_DIR}/browser/safe_browsing_settings/src/main/res

  mkdir -p ${MODULES_DIR}/browser/theme/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/ui/android/theme/java/res/* \
        ${MODULES_DIR}/browser/theme/src/main/res

  mkdir -p ${MODULES_DIR}/browser/toolbar/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/ui/android/toolbar/java/res/* \
        ${MODULES_DIR}/browser/toolbar/src/main/res

  mkdir -p ${MODULES_DIR}/browser/language/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/language/android/java/res/* \
        ${MODULES_DIR}/browser/language/src/main/res

  mkdir -p ${MODULES_DIR}/browser/download_home/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/download/internal/android/java/res/* \
        ${MODULES_DIR}/browser/download_home/src/main/res

  mkdir -p ${MODULES_DIR}/browser/signin_services/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/signin/services/android/java/res/* \
        ${MODULES_DIR}/browser/signin_services/src/main/res

  #mkdir -p ${MODULES_DIR}/browser/signin_ui/src/main/res
  #cp -r ${BASE_DIR}//chrome/browser/signin/ui/android/java/res/* \
   #     ${MODULES_DIR}/browser/signin_ui/src/main/res

   mkdir -p ${MODULES_DIR}/browser/incognito_interstitial/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/incognito/android/java/res/* \
        ${MODULES_DIR}/browser/incognito_interstitial/src/main/res

  # mkdir -p ${MODULES_DIR}/browser/continuous_search/src/main/res
  #cp -r ${BASE_DIR}//chrome/browser/continuous_search/android/java/res/* \
   #     ${MODULES_DIR}/browser/continuous_search/src/main/res

   mkdir -p ${MODULES_DIR}/browser/password_entry_edit/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/password_entry_edit/android/java/res/* \
        ${MODULES_DIR}/browser/password_entry_edit/src/main/res

   #mkdir -p ${MODULES_DIR}/browser/webapps/src/main/res
  #cp -r ${BASE_DIR}//chrome/browser/webapps/android/java/res/* \
   #     ${MODULES_DIR}/browser/webapps/src/main/res

   mkdir -p ${MODULES_DIR}/browser/privacy_sandbox/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/privacy_sandbox/android/java/res/* \
        ${MODULES_DIR}/browser/privacy_sandbox/src/main/res
}

sync_surface() {
       mkdir -p ${MODULES_DIR}/chrome_start_surface/src/main/res
       cp -r ${BASE_DIR}//chrome/android/features/start_surface/java/res/* \
	       ${MODULES_DIR}/chrome_start_surface/src/main/res
}

sync_splash() {
       mkdir -p ${MODULES_DIR}/splash/src/main/res
       cp -r ${BASE_DIR}//chrome/android/webapk/libs/common/res_splash/* \
	       "${MODULES_DIR}/splash/src/main/res"
}

sync_third_party() {
  #mkdir -p ${MODULES_DIR}/third_party/data_chart/src/main/res
  #cp -r ${BASE_DIR}//third_party/android_data_chart/java/res/* \
  #     ${MODULES_DIR}/third_party/data_chart/src/main/res

  mkdir -p ${MODULES_DIR}/third_party/android_media/src/main/res
  cp -r ${BASE_DIR}//third_party/android_media/java/res/* \
        ${MODULES_DIR}/third_party/android_media/src/main/res
}

sync_content(){
  mkdir -p ${MODULES_DIR}/content/src/main/res
  cp -r ${BASE_DIR}//content/public/android/java/res/* \
        ${RELEASE_DIR}/gen/content/public/android/content_strings_grd_grit_output/* \
        ${MODULES_DIR}/content/src/main/res
}

sync_messages(){
  mkdir -p ${MODULES_DIR}/browser/ui_messages/src/main/res
  cp -r ${BASE_DIR}//chrome/browser/ui/messages/android/java/res/* \
        ${MODULES_DIR}/browser/ui_messages/src/main/res
}

sync_chrome_tab_ui(){
  mkdir -p ${MODULES_DIR}/chrome_tab_ui/src/main/res
  cp -r ${BASE_DIR}//chrome/android/features/tab_ui/java/res/* \
        ${MODULES_DIR}/chrome_tab_ui/src/main/res
}

sync_chrome_vr(){
#不清楚是不是生成脚本有问题，未生成该文件，之前的编译目录中有这个文件
  mkdir -p ${MODULES_DIR}/chrome_vr/src/main/res
  cp -r ${BASE_DIR}//chrome/android/features/vr/java/res/* \
        ${MODULES_DIR}/chrome_vr/src/main/res
}

sync_media(){
  mkdir -p ${MODULES_DIR}/media/src/main/res
  cp -r ${BASE_DIR}//media/base/android/java/res/* \
        ${MODULES_DIR}/media/src/main/res
}

sync_libs() {
	mkdir -p "${APP_DIR}/libs"
	mkdir -p "${APP_DIR}/libs/ui/android"
	mkdir -p "${APP_DIR}/libs/components/browser_ui/photo_picker/android"
	mkdir -p "${APP_DIR}/libs/url"
	mkdir -p "${APP_DIR}/libs/third_party/gif_player"
	cp ${LIB_DIR}/components/browser_ui/photo_picker/android/java.jar "${APP_DIR}/libs/components/browser_ui/photo_picker/android/"
	cp ${LIB_DIR}/third_party/gif_player/gif_player_java.jar "${APP_DIR}/libs/third_party/gif_player/"
	cp ${LIB_DIR}/ui/android/ui_no_recycler_view_java.jar "${APP_DIR}/libs/ui/android/"
	cp ${LIB_DIR}/url/gurl_java.jar "${APP_DIR}/libs/url/"
#	cp ${BASE_DIR}/third_party/google_android_play_core/*.aar \
#    "${APP_DIR}/libs"
}


clean_project() {
	rm -rf ${APP_DIR}/src/main/java/org/org \
		${APP_DIR}/src/main/java/org/src \
		${APP_DIR}/src/main/java/org/com \
		${APP_DIR}/src/main/java/org/templates \
		${APP_DIR}/src/main/java/com/google/protobuf \
		${APP_DIR}/src/main/java/org/chromium/chrome/browser/MonochromeApplication.java \
		${APP_DIR}/src/main/java/org/chromium/chrome/browser/base/SplitMonochromeApplication.java \
		${APP_DIR}/src/main/java/org/chromium/chrome/browser/preferences/password/PasswordEntryEditorPreference.java \
		${APP_DIR}/src/main/java/org/chromium/components/module_installer/builder/ModuleInterfaceProcessor.java \
		${APP_DIR}/src/main/java/org/chromium/components/embedder_support/media \
		${APP_DIR}/src/main/java/org/chromium/chrome/browser/offlinepages/evaluation \
		${APP_DIR}/src/main/java/src/main/java/org/chromium/chrome/browser/feed/library/common/testing \
		${APP_DIR}/src/main/java/org/chromium/chrome/browser/feed/library/common/time/testing \
		${APP_DIR}/src/main/java/org/chromium/chrome/browser/feed/library/feedstore/testing \
		${APP_DIR}/src/main/java/org/chromium/chrome/browser/feed/library/hostimpl/storage/testing \
		${APP_DIR}/src/main/java/org/chromium/chrome/browser/feed/library/piet/testing \
		${APP_DIR}/src/main/java/org/chromium/chrome/browser/feed/library/basicstream/internal/drivers/testing \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/feed/library/api/internal/common/testing \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/video_tutorials/test \
    ${APP_DIR}/src/main/java/org/chromium/chrome/modules/test_dummy \
    ${APP_DIR}/src/main/java/org/chromium/components/feed/core/proto/libraries/testing \
    ${APP_DIR}/src/main/java/org/chromium/blink/test \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/feed/library/testing \
    ${APP_DIR}/src/main/java/org/chromium/components/crash/browser/CrashpadMain.java \
    ${APP_DIR}/src/main/java/org/chromium/components/embedder_support/view/ContentViewRenderView.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/offlinepages/downloads/OfflinePageNotificationBridge.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/password_check/PasswordCheckPreference.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/thumbnail/generator/ThumbnailMediaParserBridge.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/vr/AndroidUiGestureTarget.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/vr/AndroidVSyncHelper.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/vr/VrShell.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/vr/VrCoreInstallUtils.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/vr/VrInputConnection.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/vr/VrShellDelegate.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/vr/VrFirstRunActivity.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/vr/VrInputConnection.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/vr/VrUiWidgetFactory.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/vr/VrDelegateImpl.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/vr/VrIntentDelegateImpl.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/vr/VrDelegateProviderImpl.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/download/home/StubbedOfflineContentProvider.java \
    ${APP_DIR}/src/main/java/org/chromium/chrome/browser/download/home/StubbedProvider.java \
		${APP_DIR}/src/main/java/{src,test,templates}

	# local feed_dir="${APP_DIR}/src/main/java/com/google/android/libraries/feed"
	# find "$feed_dir" -regextype "posix-egrep" -regex ".*/(testing|test_data|res)" -type d -print0 | \
	# 	xargs -0 rm -rf

	# find "$feed_dir" -regextype "posix-egrep" -regex ".*/AndroidManifest.xml" -type f -print0 | \
	# 	xargs -0 rm -f

  #.*Test.*\.java|.*test.*\.java|.*Test\.java|.*test\.java|"
	local del_files="|DEPS|DIR_METADATA|LAYOUT_OWNERS|README|OWNERS|COPYING|BUILD|LICENSE|README.chromium|*\.template|*\.tmpl|R\.java|.*\.stamp|.*stamp\.d|.*\.py|.*\.flags|.*\.gn|.*Test\.java|.*test\.java|"
	find "$PRO_DIR" -not \( -name 'JniStaticTestMocker.java' -or -name 'MockedInTests.java' -or -name 'EditorObserverForTest.java' \
	  -or -name 'PaymentUiServiceTestInterface.java' -or -name 'FlushForTesting.java' -or -name 'NetworkServiceTest.java' -or -name 'HitTestRegionList.java' \
	  -or -name 'HitTestRegion.java' -or -name 'AttestationConveyancePreference.java' -or -name 'NetworkServiceTest_Internal.java' \) \
	 -regextype "posix-egrep" -regex ".*/(${del_files})" -type f -print0 | \
		xargs -0 rm -f

	local langs="af|am|as|ar|az|b\+sr\+Latn|be|bn|bs|bg|ca|cs|da|de|el|en-rGB|en-rUS|es|es-rUS|et|eu|fa|fi|fr|fr-rCA|gl|gu|hdpi|hi|hr|hu|hy|in|is|it|iw"
	langs="$langs|ja|ka|kk|km|ko|kn|ky|lo|lt|lv|mk|ml|mn|mr|ms|my|ne|nb|nl|or|pa|pl|pt-rBR|pt-rPT|si|sq|ro|ru|sk|sl|sr|sv|sw|ta|te|th|tl|tr|ur|uk|uz|vi|zu|zh-rHK|zh-rTW|"
	find "$PRO_DIR" -regextype "posix-egrep" -regex ".*values-($langs)" -print0 | xargs -0 rm -rf

#	find "${PRO_DIR}/libraries_res" -regextype "posix-egrep" -regex ".*/app_icon\.png" -type f -print0 | xargs -0 rm -f

#	local aidls
#	aidls=$(find "${APP_DIR}/src/main/aidl" -name "*.aidl" -type f)
#	local j_file;
#	for aidl in $aidls; do
#		j_file="$(basename "$aidl" ".aidl")"
#		find "${APP_DIR}/src/main/java" -name "${j_file}.java" -type f -print0 | xargs -0 rm -f
#	done

	local empty_dirs;
	while :; do
		empty_dirs="$(find "$PRO_DIR" -type d -empty)"
		if [ -n "$empty_dirs" ]; then
			echo "$empty_dirs" | xargs rm -rf
		else
			break
		fi
	done
}

do_sync() {
	rm -rf "$PRO_DIR"
  sync_chrome
  sync_assets
  sync_messages
  sync_aidl
  sync_ui
  sync_components
  sync_chrome_tab_ui
  sync_browser
  sync_third_party
  sync_content
  sync_surface
  sync_base_res
  sync_base
  sync_splash
  sync_libs
  sync_chrome_vr
  #sync_third_party_res
  sync_media
	clean_project
	# NativeLibraries

}

do_sync
