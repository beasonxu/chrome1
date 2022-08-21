// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// GENERATED FROM THE SCHEMA DEFINITION AND DESCRIPTION IN
//   field_trial_testing_config_schema.json
//   fieldtrial_testing_config.json
// DO NOT EDIT.

#include "fieldtrial_testing_config.h"

namespace variations {


const char* const array_kFieldTrialConfig_enable_features_318[] = {
      "WebViewUseMetricsUploadService",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_347[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_347[] = {
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_283[] = {
    {
      "WebViewUseMetricsUploadService",
      array_kFieldTrialConfig_platforms_347,
      1,
      array_kFieldTrialConfig_form_factors_347,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_318,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_317[] = {
      "WebViewThreadSafeMedia",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_346[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_346[] = {
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_282[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_346,
      1,
      array_kFieldTrialConfig_form_factors_346,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_317,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_316[] = {
      "WebViewNewInvalidateHeuristic",
      "WebViewSurfaceControl",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_345[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_345[] = {
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_281[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_345,
      1,
      array_kFieldTrialConfig_form_factors_345,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_316,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_315[] = {
      "WebViewRecordAppDataDirectorySize",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_344[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_344[] = {
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_280[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_344,
      1,
      array_kFieldTrialConfig_form_factors_344,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_315,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_37[] = {
      "WebViewEmptyComponentLoaderPolicy",
};
const char* const array_kFieldTrialConfig_enable_features_314[] = {
      "WebViewOriginTrials",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_343[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_343[] = {
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_279[] = {
    {
      "EnabledOnlyOriginTrials",
      array_kFieldTrialConfig_platforms_343,
      1,
      array_kFieldTrialConfig_form_factors_343,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_314,
      1,
      array_kFieldTrialConfig_disable_features_37,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_313[] = {
      "WebViewMeasureScreenCoverage",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_342[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_342[] = {
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_278[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_342,
      1,
      array_kFieldTrialConfig_form_factors_342,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_313,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_36[] = {
      "WebUICodeCache",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_341[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_341[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const char* const array_kFieldTrialConfig_enable_features_312[] = {
      "WebUICodeCache",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_340[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_340[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_277[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_340,
      3,
      array_kFieldTrialConfig_form_factors_340,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_312,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Disabled",
      array_kFieldTrialConfig_platforms_341,
      3,
      array_kFieldTrialConfig_form_factors_341,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_36,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_311[] = {
      "LowLatencyVideoRendererAlgorithm",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_136[] = {
      {
        "max_post_decode_queue_size",
        "10",
      },
      {
        "reduce_steady_state_queue_size_threshold",
        "20",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_339[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_339[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_276[] = {
    {
      "min_pacing:0ms,max_decode_queue_size:8,",
      array_kFieldTrialConfig_platforms_339,
      3,
      array_kFieldTrialConfig_form_factors_339,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_136,
      2,
      array_kFieldTrialConfig_enable_features_311,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_338[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_338[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_275[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_338,
      2,
      array_kFieldTrialConfig_form_factors_338,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_337[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_337[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_274[] = {
    {
      "2_V1",
      array_kFieldTrialConfig_platforms_337,
      3,
      array_kFieldTrialConfig_form_factors_337,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_336[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_336[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_273[] = {
    {
      "Enabled,max_queue_time:75ms,_V4",
      array_kFieldTrialConfig_platforms_336,
      2,
      array_kFieldTrialConfig_form_factors_336,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_335[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_335[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_272[] = {
    {
      "max:0,_pt2_V2",
      array_kFieldTrialConfig_platforms_335,
      3,
      array_kFieldTrialConfig_form_factors_335,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_334[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_334[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_271[] = {
    {
      "arm:SyncDecoding,_Beta",
      array_kFieldTrialConfig_platforms_334,
      3,
      array_kFieldTrialConfig_form_factors_334,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_310[] = {
      "WebRTC-Dav1dDecoder",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_333[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_333[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_270[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_333,
      2,
      array_kFieldTrialConfig_form_factors_333,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_310,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_332[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_332[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_269[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_332,
      2,
      array_kFieldTrialConfig_form_factors_332,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_331[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_331[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_268[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_331,
      1,
      array_kFieldTrialConfig_form_factors_331,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_330[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_330[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_267[] = {
    {
      "enable_stable_playout_delay:true,reinit_after_expands:1000",
      array_kFieldTrialConfig_platforms_330,
      3,
      array_kFieldTrialConfig_form_factors_330,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_309[] = {
      "WebOtpBackendAuto",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_329[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_329[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_266[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_329,
      2,
      array_kFieldTrialConfig_form_factors_329,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_309,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_308[] = {
      "WebFeed",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_135[] = {
      {
        "intro_style",
        "IPH",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_328[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_328[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_265[] = {
    {
      "Enabled_Grouped_IphIntro_20210831",
      array_kFieldTrialConfig_platforms_328,
      1,
      array_kFieldTrialConfig_form_factors_328,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_135,
      1,
      array_kFieldTrialConfig_enable_features_308,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_35[] = {
      "SkipServiceWorkerCheckAll",
};
const char* const array_kFieldTrialConfig_enable_features_307[] = {
      "SkipServiceWorkerCheckInstallOnly",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_327[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_327[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_disable_features_34[] = {
      "SkipServiceWorkerCheckInstallOnly",
};
const char* const array_kFieldTrialConfig_enable_features_306[] = {
      "SkipServiceWorkerCheckAll",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_326[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_326[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_264[] = {
    {
      "Enabled_SkipAllServiceWorkerChecks_20220513",
      array_kFieldTrialConfig_platforms_326,
      1,
      array_kFieldTrialConfig_form_factors_326,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_306,
      1,
      array_kFieldTrialConfig_disable_features_34,
      1,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled_SkipServiceWorkerChecksInstallOnly",
      array_kFieldTrialConfig_platforms_327,
      1,
      array_kFieldTrialConfig_form_factors_327,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_307,
      1,
      array_kFieldTrialConfig_disable_features_35,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_305[] = {
      "Vulkan",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_134[] = {
      {
        "BlockListByBoard",
        "RM67*|RM68*|k68*|mt6*|oppo67*|oppo68*|QM215|rk30sdk|secret|maltose|rosemary|HLTE322E*|lisbon|lancelot|Infinix-X695|g2062upt_v1_gd_sh2_gq_eea_r|cannong|TECNO-CG8",
      },
      {
        "disable_by_gl_driver",
        "324.0|331.0|334.0|378.0|415.0|420.0|444.0",
      },
      {
        "disable_by_gl_renderer",
        "*Mali-G72*|*Mali-G?? M*",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_325[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_325[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_263[] = {
    {
      "Vulkan",
      array_kFieldTrialConfig_platforms_325,
      1,
      array_kFieldTrialConfig_form_factors_325,
      0,
      absl::nullopt,
      "10.0.0",
      array_kFieldTrialConfig_params_134,
      3,
      array_kFieldTrialConfig_enable_features_305,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_304[] = {
      "VisualFeaturesInCsppPings",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_324[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_324[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_262[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_324,
      1,
      array_kFieldTrialConfig_form_factors_324,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_304,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_303[] = {
      "VideoTutorials",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_133[] = {
      {
        "base_url",
        "https://chromeupboarding-pa.googleapis.com",
      },
      {
        "default_locale",
        "en",
      },
      {
        "enable_share",
        "true",
      },
      {
        "experiment_tag",
        "",
      },
      {
        "fetch_frequency",
        "15",
      },
      {
        "use_animated_gif_url",
        "true",
      },
      {
        "use_animated_gif_url_for_summary_card",
        "false",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_323[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_323[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_261[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_323,
      1,
      array_kFieldTrialConfig_form_factors_323,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_133,
      7,
      array_kFieldTrialConfig_enable_features_303,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_302[] = {
      "VerifyDidCommitParams",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_132[] = {
      {
        "gesture",
        "true",
      },
      {
        "http_status_code",
        "true",
      },
      {
        "intended_as_new_entry",
        "true",
      },
      {
        "is_overriding_user_agent",
        "true",
      },
      {
        "method",
        "true",
      },
      {
        "origin",
        "true",
      },
      {
        "post_id",
        "true",
      },
      {
        "should_replace_current_entry",
        "false",
      },
      {
        "should_update_history",
        "true",
      },
      {
        "url",
        "true",
      },
      {
        "url_is_unreachable",
        "false",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_322[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_322[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const char* const array_kFieldTrialConfig_enable_features_301[] = {
      "VerifyDidCommitParams",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_131[] = {
      {
        "gesture",
        "true",
      },
      {
        "http_status_code",
        "true",
      },
      {
        "intended_as_new_entry",
        "true",
      },
      {
        "is_overriding_user_agent",
        "true",
      },
      {
        "method",
        "true",
      },
      {
        "origin",
        "true",
      },
      {
        "post_id",
        "true",
      },
      {
        "should_replace_current_entry",
        "false",
      },
      {
        "should_update_history",
        "true",
      },
      {
        "url",
        "true",
      },
      {
        "url_is_unreachable",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_321[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_321[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const char* const array_kFieldTrialConfig_enable_features_300[] = {
      "VerifyDidCommitParams",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_130[] = {
      {
        "gesture",
        "true",
      },
      {
        "http_status_code",
        "true",
      },
      {
        "intended_as_new_entry",
        "true",
      },
      {
        "is_overriding_user_agent",
        "true",
      },
      {
        "method",
        "true",
      },
      {
        "origin",
        "true",
      },
      {
        "post_id",
        "true",
      },
      {
        "should_replace_current_entry",
        "true",
      },
      {
        "should_update_history",
        "true",
      },
      {
        "url",
        "true",
      },
      {
        "url_is_unreachable",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_320[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_320[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_260[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_320,
      3,
      array_kFieldTrialConfig_form_factors_320,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_130,
      11,
      array_kFieldTrialConfig_enable_features_300,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "EnabledWithoutShouldReplace",
      array_kFieldTrialConfig_platforms_321,
      3,
      array_kFieldTrialConfig_form_factors_321,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_131,
      11,
      array_kFieldTrialConfig_enable_features_301,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "EnabledWithoutShouldReplaceAndURLIsUnreachable",
      array_kFieldTrialConfig_platforms_322,
      3,
      array_kFieldTrialConfig_form_factors_322,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_132,
      11,
      array_kFieldTrialConfig_enable_features_302,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_299[] = {
      "V8VirtualMemoryCage",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_319[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_319[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_259[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_319,
      1,
      array_kFieldTrialConfig_form_factors_319,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_299,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_298[] = {
      "V8SlowHistogramsSparkplugAndroid",
      "V8Sparkplug",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_318[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_318[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const char* const array_kFieldTrialConfig_disable_features_33[] = {
      "V8SlowHistogramsSparkplugAndroid",
      "V8Sparkplug",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_317[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_317[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_316[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_316[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_258[] = {
    {
      "DefaultX",
      array_kFieldTrialConfig_platforms_316,
      3,
      array_kFieldTrialConfig_form_factors_316,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Disabled",
      array_kFieldTrialConfig_platforms_317,
      3,
      array_kFieldTrialConfig_form_factors_317,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_33,
      2,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_318,
      3,
      array_kFieldTrialConfig_form_factors_318,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_298,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_297[] = {
      "V8SlowHistograms",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_315[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_315[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_disable_features_32[] = {
      "V8SlowHistograms",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_314[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_314[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_257[] = {
    {
      "Control",
      array_kFieldTrialConfig_platforms_314,
      1,
      array_kFieldTrialConfig_form_factors_314,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_32,
      1,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_315,
      1,
      array_kFieldTrialConfig_form_factors_315,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_297,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_296[] = {
      "V8ScriptAblation",
      "V8SlowHistogramsScriptAblation",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_129[] = {
      {
        "V8ScriptDelayOnceMs",
        "50",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_313[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_313[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_disable_features_31[] = {
      "V8ScriptAblation",
      "V8SlowHistogramsScriptAblation",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_312[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_312[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_256[] = {
    {
      "Control",
      array_kFieldTrialConfig_platforms_312,
      1,
      array_kFieldTrialConfig_form_factors_312,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_31,
      2,
      NULL,
      NULL,
      0,
    },
    {
      "DelayOnce50ms",
      array_kFieldTrialConfig_platforms_313,
      1,
      array_kFieldTrialConfig_form_factors_313,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_129,
      1,
      array_kFieldTrialConfig_enable_features_296,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_311[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_311[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const char* const array_kFieldTrialConfig_enable_features_295[] = {
      "V8CompactMaps",
      "V8UseMapSpace",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_310[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_310[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const char* const array_kFieldTrialConfig_disable_features_30[] = {
      "V8CompactMaps",
      "V8UseMapSpace",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_309[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_309[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_255[] = {
    {
      "CompactInOldSpace_V1",
      array_kFieldTrialConfig_platforms_309,
      3,
      array_kFieldTrialConfig_form_factors_309,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_30,
      2,
      NULL,
      NULL,
      0,
    },
    {
      "CompactInMapSpace_V1",
      array_kFieldTrialConfig_platforms_310,
      3,
      array_kFieldTrialConfig_form_factors_310,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_295,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Control_V1",
      array_kFieldTrialConfig_platforms_311,
      3,
      array_kFieldTrialConfig_form_factors_311,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_29[] = {
      "V8FlushBaselineCode",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_308[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_308[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const char* const array_kFieldTrialConfig_enable_features_294[] = {
      "V8FlushBaselineCode",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_307[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_307[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_254[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_307,
      3,
      array_kFieldTrialConfig_form_factors_307,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_294,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Disabled",
      array_kFieldTrialConfig_platforms_308,
      3,
      array_kFieldTrialConfig_form_factors_308,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_29,
      1,
      NULL,
      NULL,
      0,
    },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_306[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_306[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_293[] = {
      "V8CrashOnEvacuationFailure",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_305[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_305[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_253[] = {
    {
      "CrashOnEvacuationFailure",
      array_kFieldTrialConfig_platforms_305,
      1,
      array_kFieldTrialConfig_form_factors_305,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_293,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Default",
      array_kFieldTrialConfig_platforms_306,
      1,
      array_kFieldTrialConfig_form_factors_306,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_28[] = {
      "V8ConcurrentSparkplug",
};
const char* const array_kFieldTrialConfig_enable_features_292[] = {
      "V8Sparkplug",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_304[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_304[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const char* const array_kFieldTrialConfig_enable_features_291[] = {
      "V8ConcurrentSparkplug",
      "V8Sparkplug",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_128[] = {
      {
        "V8ConcurrentSparkplugMaxThreads",
        "0",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_303[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_303[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const char* const array_kFieldTrialConfig_enable_features_290[] = {
      "V8ConcurrentSparkplug",
      "V8Sparkplug",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_127[] = {
      {
        "V8ConcurrentSparkplugMaxThreads",
        "2",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_302[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_302[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const char* const array_kFieldTrialConfig_disable_features_27[] = {
      "V8ConcurrentSparkplug",
      "V8Sparkplug",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_301[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_301[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const char* const array_kFieldTrialConfig_enable_features_289[] = {
      "V8ConcurrentSparkplug",
      "V8Sparkplug",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_126[] = {
      {
        "V8ConcurrentSparkplugMaxThreads",
        "1",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_300[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_300[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_252[] = {
    {
      "1Thread",
      array_kFieldTrialConfig_platforms_300,
      3,
      array_kFieldTrialConfig_form_factors_300,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_126,
      1,
      array_kFieldTrialConfig_enable_features_289,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Control",
      array_kFieldTrialConfig_platforms_301,
      3,
      array_kFieldTrialConfig_form_factors_301,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_27,
      2,
      NULL,
      NULL,
      0,
    },
    {
      "2Threads",
      array_kFieldTrialConfig_platforms_302,
      3,
      array_kFieldTrialConfig_form_factors_302,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_127,
      1,
      array_kFieldTrialConfig_enable_features_290,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "ManyThreads",
      array_kFieldTrialConfig_platforms_303,
      3,
      array_kFieldTrialConfig_form_factors_303,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_128,
      1,
      array_kFieldTrialConfig_enable_features_291,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "WithSparkplug",
      array_kFieldTrialConfig_platforms_304,
      3,
      array_kFieldTrialConfig_form_factors_304,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_292,
      1,
      array_kFieldTrialConfig_disable_features_28,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_288[] = {
      "UserMediaCaptureOnFocus",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_299[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_299[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_251[] = {
    {
      "UserMediaCaptureOnFocus",
      array_kFieldTrialConfig_platforms_299,
      2,
      array_kFieldTrialConfig_form_factors_299,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_288,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_287[] = {
      "UserAgentOverrideExperiment",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_298[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_298[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_250[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_298,
      3,
      array_kFieldTrialConfig_form_factors_298,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_287,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_286[] = {
      "UseSyncInvalidations",
      "UseSyncInvalidationsForWalletAndOffer",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_297[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_297[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_249[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_297,
      1,
      array_kFieldTrialConfig_form_factors_297,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_286,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_285[] = {
      "UseHtmlAttributeNameLookup",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_296[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_296[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_248[] = {
    {
      "UseHtmlAttributeNameLookup",
      array_kFieldTrialConfig_platforms_296,
      2,
      array_kFieldTrialConfig_form_factors_296,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_285,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_284[] = {
      "UseGetrandomForRandBytes",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_295[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_295[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_247[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_295,
      1,
      array_kFieldTrialConfig_form_factors_295,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_284,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_283[] = {
      "UnifiedPasswordManagerAndroid",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_125[] = {
      {
        "min_gms_core_version_no_dots",
        "222612000",
      },
      {
        "stage",
        "0",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_294[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_294[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_246[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_294,
      1,
      array_kFieldTrialConfig_form_factors_294,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_125,
      2,
      array_kFieldTrialConfig_enable_features_283,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_282[] = {
      "UMAPseudoMetricsEffect",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_124[] = {
      {
        "multiplicative_factor",
        "1.05",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_293[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_293[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_245[] = {
    {
      "BigEffect_01",
      array_kFieldTrialConfig_platforms_293,
      1,
      array_kFieldTrialConfig_form_factors_293,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_124,
      1,
      array_kFieldTrialConfig_enable_features_282,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_281[] = {
      "UMANonUniformityLogNormal",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_123[] = {
      {
        "delta",
        "0.01",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_292[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_292[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_244[] = {
    {
      "group_01",
      array_kFieldTrialConfig_platforms_292,
      3,
      array_kFieldTrialConfig_form_factors_292,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_123,
      1,
      array_kFieldTrialConfig_enable_features_281,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_280[] = {
      "TrustTokens",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_122[] = {
      {
        "PlatformProvidedTrustTokenIssuance",
        "true",
      },
      {
        "TrustTokenOperationsRequiringOriginTrial",
        "all-operations-require-origin-trial",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_291[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_291[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_243[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_291,
      1,
      array_kFieldTrialConfig_form_factors_291,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_122,
      2,
      array_kFieldTrialConfig_enable_features_280,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_279[] = {
      "TouchToFillPasswordSubmission",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_290[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_290[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_242[] = {
    {
      "RegularLaunch_20220426",
      array_kFieldTrialConfig_platforms_290,
      1,
      array_kFieldTrialConfig_form_factors_290,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_279,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_278[] = {
      "ToolbarPhoneOptimizations",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_289[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_289[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_241[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_289,
      1,
      array_kFieldTrialConfig_form_factors_289,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_278,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_277[] = {
      "TimedHTMLParserBudget",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_121[] = {
      {
        "default-parser-budget",
        "20ms",
      },
      {
        "long-parser-budget",
        "500ms",
      },
      {
        "num-yields-with-default-budget",
        "2",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_288[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_288[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_240[] = {
    {
      "20x500x2",
      array_kFieldTrialConfig_platforms_288,
      3,
      array_kFieldTrialConfig_form_factors_288,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_121,
      3,
      array_kFieldTrialConfig_enable_features_277,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_276[] = {
      "ThreadingOptimizationsOnIO",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_287[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_287[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_239[] = {
    {
      "Enabled_20220119",
      array_kFieldTrialConfig_platforms_287,
      3,
      array_kFieldTrialConfig_form_factors_287,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_276,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_275[] = {
      "ThreadedPreloadScanner",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_120[] = {
      {
        "preload-processing-mode",
        "immediate",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_286[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_286[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_238[] = {
    {
      "Immediate",
      array_kFieldTrialConfig_platforms_286,
      3,
      array_kFieldTrialConfig_form_factors_286,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_120,
      1,
      array_kFieldTrialConfig_enable_features_275,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_274[] = {
      "TailoredSecurityIntegration",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_285[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_285[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_237[] = {
    {
      "Enabled_20220302",
      array_kFieldTrialConfig_platforms_285,
      1,
      array_kFieldTrialConfig_form_factors_285,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_274,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_273[] = {
      "TabStripImprovements",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_119[] = {
      {
        "min_tab_width",
        "108.0",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_284[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_284[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_236[] = {
    {
      "EnabledWithShortTabWidth_20220719",
      array_kFieldTrialConfig_platforms_284,
      1,
      array_kFieldTrialConfig_form_factors_284,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_119,
      1,
      array_kFieldTrialConfig_enable_features_273,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_272[] = {
      "WebViewSynthesizePageLoadOnlyOnInitialMainDocumentAccess",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_283[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_283[] = {
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_235[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_283,
      1,
      array_kFieldTrialConfig_form_factors_283,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_272,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_271[] = {
      "SyncTrustedVaultPassphrasePromo",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_282[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_282[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_234[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_282,
      1,
      array_kFieldTrialConfig_form_factors_282,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_271,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_26[] = {
      "SyncAndroidPromosWithAlternativeTitle",
};
const char* const array_kFieldTrialConfig_enable_features_270[] = {
      "SyncAndroidPromosWithIllustration",
      "SyncAndroidPromosWithSingleButton",
      "SyncAndroidPromosWithTitle",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_281[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_281[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_233[] = {
    {
      "EnabledWithSingleButtonIllustrationAndTitle",
      array_kFieldTrialConfig_platforms_281,
      1,
      array_kFieldTrialConfig_form_factors_281,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_270,
      3,
      array_kFieldTrialConfig_disable_features_26,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_269[] = {
      "SurfaceSyncThrottling",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_280[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_280[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_232[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_280,
      3,
      array_kFieldTrialConfig_form_factors_280,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_269,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_268[] = {
      "SuppressToolbarCaptures",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_279[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_279[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_231[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_279,
      1,
      array_kFieldTrialConfig_form_factors_279,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_268,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_267[] = {
      "SuggestionAnswerColorReverse",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_118[] = {
      {
        "omnibox_answer_color_reversal_countries",
        "zh-CN,zh-TW,ja-JP,ko-KR",
      },
      {
        "omnibox_answer_color_reversal_finance_only",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_278[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_278[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_230[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_278,
      1,
      array_kFieldTrialConfig_form_factors_278,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_118,
      2,
      array_kFieldTrialConfig_enable_features_267,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_266[] = {
      "SubstringSetTreeForAttributeBuckets",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_277[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_277[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_229[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_277,
      1,
      array_kFieldTrialConfig_form_factors_277,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_266,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_265[] = {
      "SplitCompositorTask",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_276[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_276[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_228[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_276,
      1,
      array_kFieldTrialConfig_form_factors_276,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_265,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_264[] = {
      "AppendFrameOriginToNetworkIsolationKey",
      "SplitCacheByNetworkIsolationKey",
      "UseRegistrableDomainInNetworkIsolationKey",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_275[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_275[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_227[] = {
    {
      "Experiment_Triple_Key_20201001",
      array_kFieldTrialConfig_platforms_275,
      3,
      array_kFieldTrialConfig_form_factors_275,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_264,
      3,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_25[] = {
      "EnableAutomaticSnooze",
};
const char* const array_kFieldTrialConfig_enable_features_263[] = {
      "IPH_DownloadHome",
      "IPH_Snooze",
      "IPH_TabSwitcherButton",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_117[] = {
      {
        "IPH_DownloadHome_availability",
        ">=14",
      },
      {
        "IPH_DownloadHome_event_1",
        "name:download_completed;comparator:>=1;window:90;storage:360",
      },
      {
        "IPH_DownloadHome_event_trigger",
        "name:download_home_iph_trigger;comparator:==0;window:90;storage:360",
      },
      {
        "IPH_DownloadHome_event_used",
        "name:download_home_opened;comparator:==0;window:90;storage:360",
      },
      {
        "IPH_DownloadHome_session_rate",
        "==0",
      },
      {
        "IPH_TabSwitcherButton_availability",
        ">=14",
      },
      {
        "IPH_TabSwitcherButton_event_trigger",
        "name:tab_switcher_iph_triggered;comparator:==0;window:90;storage:90",
      },
      {
        "IPH_TabSwitcherButton_event_used",
        "name:tab_switcher_button_clicked;comparator:==0;window:14;storage:90",
      },
      {
        "IPH_TabSwitcherButton_session_rate",
        "<1",
      },
      {
        "snooze_params",
        "max_limit:3,snooze_interval:7",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_274[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_274[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_226[] = {
    {
      "Enabled_Snooze_1_week_20211208",
      array_kFieldTrialConfig_platforms_274,
      1,
      array_kFieldTrialConfig_form_factors_274,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_117,
      10,
      array_kFieldTrialConfig_enable_features_263,
      3,
      array_kFieldTrialConfig_disable_features_25,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_262[] = {
      "SmallerFontCache",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_273[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_273[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_225[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_273,
      3,
      array_kFieldTrialConfig_form_factors_273,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_262,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_261[] = {
      "ShowScrollableMVTOnNTPAndroid",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_272[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_272[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_224[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_272,
      1,
      array_kFieldTrialConfig_form_factors_272,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_261,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_260[] = {
      "PreemptiveLinkToTextGeneration",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_116[] = {
      {
        "TimeoutLengthMs",
        "120",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_271[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_271[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_223[] = {
    {
      "Enabled_120",
      array_kFieldTrialConfig_platforms_271,
      1,
      array_kFieldTrialConfig_form_factors_271,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_116,
      1,
      array_kFieldTrialConfig_enable_features_260,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_259[] = {
      "SharedHighlightingRefinedBlocklist",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_270[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_270[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_222[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_270,
      1,
      array_kFieldTrialConfig_form_factors_270,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_259,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_258[] = {
      "IPH_SharedHighlightingBuilder",
      "IPH_SharedHighlightingReceiver",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_115[] = {
      {
        "availability",
        "any",
      },
      {
        "event_1",
        "name:iph_shared_highlighting_receiver_trigger;comparator:==0;window:7;storage:360",
      },
      {
        "event_trigger",
        "name:iph_shared_highlighting_receiver_trigger;comparator:<5;window:360;storage:360",
      },
      {
        "event_used",
        "name:iph_shared_highlighting_used;comparator:<2;window:360;storage:360",
      },
      {
        "session_rate",
        "any",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_269[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_269[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_221[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_269,
      1,
      array_kFieldTrialConfig_form_factors_269,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_115,
      5,
      array_kFieldTrialConfig_enable_features_258,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_257[] = {
      "ShareCrowButton",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_114[] = {
      {
        "availability",
        "any",
      },
      {
        "event_trigger",
        "name:crow_tab_menu_item_iph_triggered;comparator:<3;window:7;storage:7",
      },
      {
        "event_used",
        "name:crow_tab_menu_item_clicked;comparator:any;window:360;storage:360",
      },
      {
        "min-days-visited",
        "0",
      },
      {
        "min-total-visits",
        "0",
      },
      {
        "num-history-lookback-days",
        "0",
      },
      {
        "session_rate",
        "any",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_268[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_268[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_220[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_268,
      1,
      array_kFieldTrialConfig_form_factors_268,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_114,
      7,
      array_kFieldTrialConfig_enable_features_257,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_256[] = {
      "ShareButtonInTopToolbar",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_113[] = {
      {
        "minimum_width",
        "360",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_267[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_267[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_219[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_267,
      1,
      array_kFieldTrialConfig_form_factors_267,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_113,
      1,
      array_kFieldTrialConfig_enable_features_256,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_255[] = {
      "ServiceWorkerStorageControlOnIOThread",
      "ServiceWorkerStorageControlResponseQueue",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_266[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_266[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_218[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_266,
      1,
      array_kFieldTrialConfig_form_factors_266,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_255,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_254[] = {
      "SendTabToSelfV2",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_265[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_265[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_217[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_265,
      1,
      array_kFieldTrialConfig_form_factors_265,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_254,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_253[] = {
      "SegmentationStructuredMetrics",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_112[] = {
      {
        "segment_ids_allowed_for_reporting",
        "4,5,6,10,11,12,16",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_264[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_264[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_216[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_264,
      1,
      array_kFieldTrialConfig_form_factors_264,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_112,
      1,
      array_kFieldTrialConfig_enable_features_253,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_252[] = {
      "SearchResumptionModuleAndroid",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_111[] = {
      {
        "use_new_service",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_263[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_263[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_215[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_263,
      1,
      array_kFieldTrialConfig_form_factors_263,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_111,
      1,
      array_kFieldTrialConfig_enable_features_252,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_251[] = {
      "ScrollUnification",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_262[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_262[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_214[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_262,
      1,
      array_kFieldTrialConfig_form_factors_262,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_251,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_250[] = {
      "SafeBrowsingDelayedWarnings",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_261[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_261[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_213[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_261,
      1,
      array_kFieldTrialConfig_form_factors_261,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_250,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_249[] = {
      "SafeBrowsingCsbrrWithToken",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_260[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_260[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_212[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_260,
      3,
      array_kFieldTrialConfig_form_factors_260,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_249,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_248[] = {
      "ClientSideDetectionTag",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_110[] = {
      {
        "reporter_omaha_tag",
        "28.3",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_259[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_259[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_211[] = {
    {
      "Enabled_28_3_20220721",
      array_kFieldTrialConfig_platforms_259,
      1,
      array_kFieldTrialConfig_form_factors_259,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_110,
      1,
      array_kFieldTrialConfig_enable_features_248,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_247[] = {
      "RevokeNotificationsPermissionIfDisabledOnAppLevel",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_258[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_258[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_210[] = {
    {
      "Enabled_2",
      array_kFieldTrialConfig_platforms_258,
      1,
      array_kFieldTrialConfig_form_factors_258,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_247,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_246[] = {
      "ReportFCPOnlyOnSuccessfulCommit",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_257[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_257[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_209[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_257,
      1,
      array_kFieldTrialConfig_form_factors_257,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_246,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_109[] = {
      {
        "sendingThreshold",
        "1.0",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_256[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_256[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_208[] = {
    {
      "ShowAndPossiblySend",
      array_kFieldTrialConfig_platforms_256,
      1,
      array_kFieldTrialConfig_form_factors_256,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_109,
      1,
      NULL,
      0,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_245[] = {
      "AlwaysAbandonScheduledTask",
      "RemoveCanceledTasksInTaskQueue2",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_255[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_255[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_207[] = {
    {
      "RemoveCanceledTasksInTaskQueue2",
      array_kFieldTrialConfig_platforms_255,
      1,
      array_kFieldTrialConfig_form_factors_255,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_245,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_24[] = {
      "RelatedSearchesAlternateUx",
      "RelatedSearchesSimplifiedUx",
};
const char* const array_kFieldTrialConfig_enable_features_244[] = {
      "RelatedSearches",
      "RelatedSearchesInBar",
      "RelatedSearchesUi",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_108[] = {
      {
        "default_query_chip",
        "true",
      },
      {
        "default_query_max_width_sp",
        "115",
      },
      {
        "language_allowlist",
        "en",
      },
      {
        "needs_content",
        "true",
      },
      {
        "needs_url",
        "true",
      },
      {
        "stamp",
        "1Rs",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_254[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_254[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_206[] = {
    {
      "MVP_20210915",
      array_kFieldTrialConfig_platforms_254,
      1,
      array_kFieldTrialConfig_form_factors_254,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_108,
      6,
      array_kFieldTrialConfig_enable_features_244,
      3,
      array_kFieldTrialConfig_disable_features_24,
      2,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_243[] = {
      "ReduceUserAgentPlatformOsCpu",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_107[] = {
      {
        "all_except_legacy_windows_platform",
        "true",
      },
      {
        "legacy_windows_platform",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_253[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_253[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_205[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_253,
      2,
      array_kFieldTrialConfig_form_factors_253,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_107,
      2,
      array_kFieldTrialConfig_enable_features_243,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_242[] = {
      "ReduceUserAgentMinorVersion",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_106[] = {
      {
        "build_version",
        "0",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_252[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_252[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_204[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_252,
      2,
      array_kFieldTrialConfig_form_factors_252,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_106,
      1,
      array_kFieldTrialConfig_enable_features_242,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_241[] = {
      "ReduceOpsTaskSplitting",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_251[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_251[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_203[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_251,
      3,
      array_kFieldTrialConfig_form_factors_251,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_241,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_240[] = {
      "ReadWritePasswordNotesBackupField",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_250[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_250[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_202[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_250,
      2,
      array_kFieldTrialConfig_form_factors_250,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_240,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_239[] = {
      "ReadLaterReminderNotification",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_249[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_249[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_201[] = {
    {
      "Enabled_20220208",
      array_kFieldTrialConfig_platforms_249,
      1,
      array_kFieldTrialConfig_form_factors_249,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_239,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_23[] = {
      "RawDraw",
};
const char* const array_kFieldTrialConfig_enable_features_238[] = {
      "EnableDrDc",
      "EnableDrDcVulkan",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_248[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_248[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_200[] = {
    {
      "DrDc",
      array_kFieldTrialConfig_platforms_248,
      1,
      array_kFieldTrialConfig_form_factors_248,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_238,
      2,
      array_kFieldTrialConfig_disable_features_23,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_22[] = {
      "QueryTilesEnableQueryEditing",
      "QueryTilesInOmnibox",
};
const char* const array_kFieldTrialConfig_enable_features_237[] = {
      "QueryTiles",
      "QueryTilesInNTP",
      "QueryTilesLocalOrdering",
      "QueryTilesRemoveTrendingAfterInactivity",
      "QueryTilesSegmentation",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_105[] = {
      {
        "base_url",
        "https://chromeupboarding-pa.googleapis.com",
      },
      {
        "behavioural_targeting",
        "model_comparison",
      },
      {
        "experiment_tag",
        "{maxLevels : 1, enableTrending : true, maxTrendingQueries : 8}",
      },
      {
        "image_prefetch_mode",
        "top",
      },
      {
        "is_unmetered_network_required",
        "false",
      },
      {
        "max_trending_tile_impressions",
        "1",
      },
      {
        "most_visited_max_rows_normal_screen",
        "1",
      },
      {
        "most_visited_max_rows_small_screen",
        "1",
      },
      {
        "mv_tile_click_threshold",
        "1",
      },
      {
        "small_screen_height_threshold_dp",
        "700",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_247[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_247[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_disable_features_21[] = {
      "QueryTilesEnableQueryEditing",
      "QueryTilesInOmnibox",
};
const char* const array_kFieldTrialConfig_enable_features_236[] = {
      "QueryTiles",
      "QueryTilesInNTP",
      "QueryTilesLocalOrdering",
      "QueryTilesRemoveTrendingAfterInactivity",
      "QueryTilesSegmentation",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_104[] = {
      {
        "base_url",
        "https://chromeupboarding-pa.googleapis.com",
      },
      {
        "experiment_tag",
        "{maxLevels : 1, rankTiles : true, enableTrending : true, maxTrendingQueries : 8, disableEntityTranslation: true}",
      },
      {
        "image_prefetch_mode",
        "top",
      },
      {
        "is_unmetered_network_required",
        "false",
      },
      {
        "max_trending_tile_impressions",
        "1",
      },
      {
        "most_visited_max_rows_normal_screen",
        "1",
      },
      {
        "most_visited_max_rows_small_screen",
        "1",
      },
      {
        "mv_tile_click_threshold",
        "1",
      },
      {
        "small_screen_height_threshold_dp",
        "700",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_246[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_246[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_199[] = {
    {
      "EnabledExploreAndServerRankingAndRawTrendingSegmentation2",
      array_kFieldTrialConfig_platforms_246,
      1,
      array_kFieldTrialConfig_form_factors_246,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_104,
      9,
      array_kFieldTrialConfig_enable_features_236,
      5,
      array_kFieldTrialConfig_disable_features_21,
      2,
      NULL,
      NULL,
      0,
    },
    {
      "EnabledExploreAndTrendingSegmentation2",
      array_kFieldTrialConfig_platforms_247,
      1,
      array_kFieldTrialConfig_form_factors_247,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_105,
      10,
      array_kFieldTrialConfig_enable_features_237,
      5,
      array_kFieldTrialConfig_disable_features_22,
      2,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_235[] = {
      "QuicDoesNotUseFeatures",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_103[] = {
      {
        "channel",
        "F",
      },
      {
        "epoch",
        "30000000",
      },
      {
        "retransmittable_on_wire_timeout_milliseconds",
        "200",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_245[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_245[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_198[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_245,
      3,
      array_kFieldTrialConfig_form_factors_245,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_103,
      3,
      array_kFieldTrialConfig_enable_features_235,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_234[] = {
      "PushMessagingDisallowSenderIDs",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_244[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_244[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_197[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_244,
      1,
      array_kFieldTrialConfig_form_factors_244,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_234,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_233[] = {
      "PurgeRendererMemoryWhenBackgrounded",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_243[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_243[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_196[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_243,
      1,
      array_kFieldTrialConfig_form_factors_243,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_233,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_232[] = {
      "BrowsingTopics",
      "FencedFrames",
      "NoncedPartitionedCookies",
      "PrivacySandboxAdsAPIs",
      "PrivacySandboxSettings3",
      "SharedStorageAPI",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_102[] = {
      {
        "implementation_type",
        "shadow_dom",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_242[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_242[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_195[] = {
    {
      "Enabled_Notice_ShadowDOM_20220505_Android",
      array_kFieldTrialConfig_platforms_242,
      1,
      array_kFieldTrialConfig_form_factors_242,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_102,
      1,
      array_kFieldTrialConfig_enable_features_232,
      6,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_231[] = {
      "IsolatePrerenders",
      "IsolatePrerendersMustProbeOrigin",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_101[] = {
      {
        "dns_canary_url",
        "http://dns-tunnel-check.googlezip.net/connect",
      },
      {
        "do_no_state_prefetch",
        "false",
      },
      {
        "ineligible_decoy_request_probability",
        "1",
      },
      {
        "lite_mode_only",
        "false",
      },
      {
        "max_srp_prefetches",
        "5",
      },
      {
        "max_subresource_count_per_prerender",
        "0",
      },
      {
        "start_spare_renderer",
        "true",
      },
      {
        "tls_canary_url",
        "http://tls-tunnel-check.googlezip.net/connect",
      },
      {
        "use_speculation_rules",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_241[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_241[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_194[] = {
    {
      "Prefetch_2_20220214",
      array_kFieldTrialConfig_platforms_241,
      1,
      array_kFieldTrialConfig_form_factors_241,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_101,
      9,
      array_kFieldTrialConfig_enable_features_231,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_230[] = {
      "NetworkTimeServiceQuerying",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_100[] = {
      {
        "ClockDriftSamples",
        "0",
      },
      {
        "FetchBehavior",
        "background-and-on-demand",
      },
      {
        "RandomQueryProbability",
        "0.0394",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_240[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_240[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_229[] = {
      "NetworkTimeServiceQuerying",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_99[] = {
      {
        "ClockDriftSampleDistance",
        "2s",
      },
      {
        "ClockDriftSamples",
        "2",
      },
      {
        "FetchBehavior",
        "background-and-on-demand",
      },
      {
        "RandomQueryProbability",
        "0.0394",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_239[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_239[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_193[] = {
    {
      "DriftEnabled",
      array_kFieldTrialConfig_platforms_239,
      1,
      array_kFieldTrialConfig_form_factors_239,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_99,
      4,
      array_kFieldTrialConfig_enable_features_229,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_240,
      1,
      array_kFieldTrialConfig_form_factors_240,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_100,
      3,
      array_kFieldTrialConfig_enable_features_230,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_228[] = {
      "IPH_PriceDropNTP",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_98[] = {
      {
        "availability",
        ">=0",
      },
      {
        "event_trigger",
        "name:price_drop_ntp_iph_triggered;comparator:==0;window:365;storage:365",
      },
      {
        "event_used",
        "name:tab_switcher_button_clicked;comparator:any;window:365;storage:365",
      },
      {
        "session_rate",
        "<1",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_238[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_238[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_192[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_238,
      1,
      array_kFieldTrialConfig_form_factors_238,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_98,
      4,
      array_kFieldTrialConfig_enable_features_228,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_227[] = {
      "PreloadCookies",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_237[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_237[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_191[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_237,
      2,
      array_kFieldTrialConfig_form_factors_237,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_227,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_226[] = {
      "PrefetchFontLookupTables",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_236[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_236[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_190[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_236,
      3,
      array_kFieldTrialConfig_form_factors_236,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_226,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_225[] = {
      "PrecompileInlineScripts",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_97[] = {
      {
        "compile-strategy",
        "first-script-lazy",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_235[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_235[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_189[] = {
    {
      "FirstScriptLazy_20220609",
      array_kFieldTrialConfig_platforms_235,
      3,
      array_kFieldTrialConfig_form_factors_235,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_97,
      1,
      array_kFieldTrialConfig_enable_features_225,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_224[] = {
      "PlatformHEVCDecoderSupport",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_234[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_234[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_188[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_234,
      1,
      array_kFieldTrialConfig_form_factors_234,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_224,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_223[] = {
      "SlidingWindowForDroppedFrameCounter",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_96[] = {
      {
        "seconds",
        "20",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_233[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_233[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_222[] = {
      "SlidingWindowForDroppedFrameCounter",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_95[] = {
      {
        "seconds",
        "15",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_232[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_232[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_221[] = {
      "SlidingWindowForDroppedFrameCounter",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_94[] = {
      {
        "seconds",
        "10",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_231[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_231[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_220[] = {
      "SlidingWindowForDroppedFrameCounter",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_93[] = {
      {
        "seconds",
        "8",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_230[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_230[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_219[] = {
      "SlidingWindowForDroppedFrameCounter",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_92[] = {
      {
        "seconds",
        "5",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_229[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_229[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_218[] = {
      "SlidingWindowForDroppedFrameCounter",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_91[] = {
      {
        "seconds",
        "2",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_228[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_228[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_187[] = {
    {
      "TwoSecondWindow",
      array_kFieldTrialConfig_platforms_228,
      1,
      array_kFieldTrialConfig_form_factors_228,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_91,
      1,
      array_kFieldTrialConfig_enable_features_218,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "FiveSecondWindow",
      array_kFieldTrialConfig_platforms_229,
      1,
      array_kFieldTrialConfig_form_factors_229,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_92,
      1,
      array_kFieldTrialConfig_enable_features_219,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "EightSecondWindow",
      array_kFieldTrialConfig_platforms_230,
      1,
      array_kFieldTrialConfig_form_factors_230,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_93,
      1,
      array_kFieldTrialConfig_enable_features_220,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "TenSecondWindow",
      array_kFieldTrialConfig_platforms_231,
      1,
      array_kFieldTrialConfig_form_factors_231,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_94,
      1,
      array_kFieldTrialConfig_enable_features_221,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "FifteenSecondWindow",
      array_kFieldTrialConfig_platforms_232,
      1,
      array_kFieldTrialConfig_form_factors_232,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_95,
      1,
      array_kFieldTrialConfig_enable_features_222,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "TwentySecondWindow",
      array_kFieldTrialConfig_platforms_233,
      1,
      array_kFieldTrialConfig_form_factors_233,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_96,
      1,
      array_kFieldTrialConfig_enable_features_223,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_217[] = {
      "Path2DPaintCache",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_227[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_227[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_186[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_227,
      2,
      array_kFieldTrialConfig_form_factors_227,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_217,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_216[] = {
      "PasswordDomainCapabilitiesFetching",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_90[] = {
      {
        "live_experiment",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_226[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_226[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_185[] = {
    {
      "Enabled_20220217",
      array_kFieldTrialConfig_platforms_226,
      1,
      array_kFieldTrialConfig_form_factors_226,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_90,
      1,
      array_kFieldTrialConfig_enable_features_216,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_215[] = {
      "PasswordChangeInSettings",
      "PasswordScriptsFetching",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_225[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_225[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_184[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_225,
      1,
      array_kFieldTrialConfig_form_factors_225,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_215,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_214[] = {
      "PartitionedCookies",
      "PartitionedCookiesBypassOriginTrial",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_224[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_224[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_183[] = {
    {
      "Test",
      array_kFieldTrialConfig_platforms_224,
      1,
      array_kFieldTrialConfig_form_factors_224,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_214,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_213[] = {
      "PartitionConnectionsByNetworkIsolationKey",
      "PartitionDomainReliabilityByNetworkIsolationKey",
      "PartitionExpectCTStateByNetworkIsolationKey",
      "PartitionHttpServerPropertiesByNetworkIsolationKey",
      "PartitionNelAndReportingByNetworkIsolationKey",
      "PartitionSSLSessionsByNetworkIsolationKey",
      "SplitHostCacheByNetworkIsolationKey",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_223[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_223[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const char* const array_kFieldTrialConfig_enable_features_212[] = {
      "ForceIsolationInfoFrameOriginToTopLevelFrame",
      "PartitionConnectionsByNetworkIsolationKey",
      "PartitionDomainReliabilityByNetworkIsolationKey",
      "PartitionExpectCTStateByNetworkIsolationKey",
      "PartitionHttpServerPropertiesByNetworkIsolationKey",
      "PartitionNelAndReportingByNetworkIsolationKey",
      "PartitionSSLSessionsByNetworkIsolationKey",
      "SplitHostCacheByNetworkIsolationKey",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_222[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_222[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_182[] = {
    {
      "enabled3_doublekey",
      array_kFieldTrialConfig_platforms_222,
      2,
      array_kFieldTrialConfig_form_factors_222,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_212,
      8,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "enabled3_triplekey",
      array_kFieldTrialConfig_platforms_223,
      2,
      array_kFieldTrialConfig_form_factors_223,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_213,
      7,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_211[] = {
      "PartitionAllocSortActiveSlotSpans",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_221[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_221[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_181[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_221,
      1,
      array_kFieldTrialConfig_form_factors_221,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_211,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_20[] = {
      "PartitionAllocLargeThreadCacheSize",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_220[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_220[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_180[] = {
    {
      "Disabled",
      array_kFieldTrialConfig_platforms_220,
      3,
      array_kFieldTrialConfig_form_factors_220,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_20,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_210[] = {
      "PartitionAllocBackupRefPtr",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_89[] = {
      {
        "brp-mode",
        "enabled",
      },
      {
        "enabled-processes",
        "non-renderer",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_219[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_219[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_179[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_219,
      3,
      array_kFieldTrialConfig_form_factors_219,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_89,
      2,
      array_kFieldTrialConfig_enable_features_210,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_209[] = {
      "CCTResizableForThirdParties",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_88[] = {
      {
        "default_policy",
        "use-denylist",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_218[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_218[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_178[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_218,
      1,
      array_kFieldTrialConfig_form_factors_218,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_88,
      1,
      array_kFieldTrialConfig_enable_features_209,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_208[] = {
      "DelayParkingImages",
      "ParkableImagesToDisk",
      "UseParkableImageSegmentReader",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_217[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_217[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_177[] = {
    {
      "Both_V4",
      array_kFieldTrialConfig_platforms_217,
      1,
      array_kFieldTrialConfig_form_factors_217,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_208,
      3,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_207[] = {
      "PaintPreviewShowOnStartup",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_87[] = {
      {
        "allow_srp",
        "false",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_216[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_216[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_176[] = {
    {
      "Enabled_NoSrp_20220719",
      array_kFieldTrialConfig_platforms_216,
      1,
      array_kFieldTrialConfig_form_factors_216,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_87,
      1,
      array_kFieldTrialConfig_enable_features_207,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_206[] = {
      "PaintHoldingCrossOrigin",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_215[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_215[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_175[] = {
    {
      "Enabled_20211028",
      array_kFieldTrialConfig_platforms_215,
      3,
      array_kFieldTrialConfig_form_factors_215,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_206,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_205[] = {
      "IPH_PageInfo",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_86[] = {
      {
        "availability",
        ">=0",
      },
      {
        "event_1",
        "name:permission_request_shown;comparator:>=3;window:90;storage:90",
      },
      {
        "event_trigger",
        "name:page_info_iph_triggered;comparator:==0;window:90;storage:90",
      },
      {
        "event_used",
        "name:page_info_opened;comparator:==0;window:90;storage:90",
      },
      {
        "session_rate",
        "<1",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_214[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_214[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_174[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_214,
      1,
      array_kFieldTrialConfig_form_factors_214,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_86,
      5,
      array_kFieldTrialConfig_enable_features_205,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_204[] = {
      "PageInfoHistory",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_213[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_213[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_173[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_213,
      2,
      array_kFieldTrialConfig_form_factors_213,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_204,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_203[] = {
      "PageInfoDiscoverability",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_85[] = {
      {
        "PermissionIconTimeoutMs",
        "3000",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_212[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_212[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_172[] = {
    {
      "Enabled3000_20220325",
      array_kFieldTrialConfig_platforms_212,
      1,
      array_kFieldTrialConfig_form_factors_212,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_85,
      1,
      array_kFieldTrialConfig_enable_features_203,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_202[] = {
      "PageInfoAboutThisSiteMoreInfo",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_211[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_211[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_171[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_211,
      1,
      array_kFieldTrialConfig_form_factors_211,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_202,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_201[] = {
      "EnableOverlayPrioritization",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_210[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_210[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_170[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_210,
      3,
      array_kFieldTrialConfig_form_factors_210,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_201,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_19[] = {
      "AdaptiveButtonInTopToolbar",
};
const char* const array_kFieldTrialConfig_enable_features_200[] = {
      "AdaptiveButtonInTopToolbarCustomizationV2",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_84[] = {
      {
        "default_segment",
        "new-tab",
      },
      {
        "disable_ui",
        "false",
      },
      {
        "ignore_segmentation_results",
        "false",
      },
      {
        "min_version_adaptive",
        "3",
      },
      {
        "segment_selection_ttl_days",
        "56",
      },
      {
        "show_ui_only_after_ready",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_209[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_209[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_169[] = {
    {
      "Segmentation_Auto_Finale_20220418",
      array_kFieldTrialConfig_platforms_209,
      1,
      array_kFieldTrialConfig_form_factors_209,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_84,
      6,
      array_kFieldTrialConfig_enable_features_200,
      1,
      array_kFieldTrialConfig_disable_features_19,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_199[] = {
      "OptimizeNetworkBuffers2",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_83[] = {
      {
        "bytes_read_limit",
        "65536",
      },
      {
        "filter_source_stream_buffer_size",
        "65536",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_208[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_208[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_168[] = {
    {
      "64KB_20220629",
      array_kFieldTrialConfig_platforms_208,
      2,
      array_kFieldTrialConfig_form_factors_208,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_83,
      2,
      array_kFieldTrialConfig_enable_features_199,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_198[] = {
      "OptimizeLayoutsForPullRefresh",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_207[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_207[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_167[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_207,
      1,
      array_kFieldTrialConfig_form_factors_207,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_198,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_197[] = {
      "CacheDeprecatedSystemLocationSetting",
      "OptimizeGeolocationHeaderGeneration",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_206[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_206[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_166[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_206,
      1,
      array_kFieldTrialConfig_form_factors_206,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_197,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_196[] = {
      "OptimizeDataUrls",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_205[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_205[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_165[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_205,
      3,
      array_kFieldTrialConfig_form_factors_205,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_196,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_195[] = {
      "OnDemandAccessibilityEvents",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_204[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_204[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_164[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_204,
      1,
      array_kFieldTrialConfig_form_factors_204,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_195,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_18[] = {
      "OmniboxTriggerForPrerender2",
};
const char* const array_kFieldTrialConfig_enable_features_194[] = {
      "SupportSearchSuggestionForPrerender2",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_203[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_203[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_disable_features_17[] = {
      "OmniboxTriggerForNoStatePrefetch",
      "OmniboxTriggerForPrerender2",
      "SupportSearchSuggestionForPrerender2",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_202[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_202[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_disable_features_16[] = {
      "OmniboxTriggerForPrerender2",
      "SupportSearchSuggestionForPrerender2",
};
const char* const array_kFieldTrialConfig_enable_features_193[] = {
      "OmniboxTriggerForNoStatePrefetch",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_201[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_201[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_disable_features_15[] = {
      "OmniboxTriggerForNoStatePrefetch",
      "SupportSearchSuggestionForPrerender2",
};
const char* const array_kFieldTrialConfig_enable_features_192[] = {
      "OmniboxTriggerForPrerender2",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_200[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_200[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_disable_features_14[] = {
      "OmniboxTriggerForNoStatePrefetch",
};
const char* const array_kFieldTrialConfig_enable_features_191[] = {
      "OmniboxTriggerForPrerender2",
      "SupportSearchSuggestionForPrerender2",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_199[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_199[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_163[] = {
    {
      "EnabledPrerenderDUIAndDSE_20220419",
      array_kFieldTrialConfig_platforms_199,
      1,
      array_kFieldTrialConfig_form_factors_199,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_191,
      2,
      array_kFieldTrialConfig_disable_features_14,
      1,
      NULL,
      NULL,
      0,
    },
    {
      "EnabledPrerenderDUI_20220419",
      array_kFieldTrialConfig_platforms_200,
      1,
      array_kFieldTrialConfig_form_factors_200,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_192,
      1,
      array_kFieldTrialConfig_disable_features_15,
      2,
      NULL,
      NULL,
      0,
    },
    {
      "EnabledPrefetchDUIControl_20220419",
      array_kFieldTrialConfig_platforms_201,
      1,
      array_kFieldTrialConfig_form_factors_201,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_193,
      1,
      array_kFieldTrialConfig_disable_features_16,
      2,
      NULL,
      NULL,
      0,
    },
    {
      "DisabledDUI_20220419",
      array_kFieldTrialConfig_platforms_202,
      1,
      array_kFieldTrialConfig_form_factors_202,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_17,
      3,
      NULL,
      NULL,
      0,
    },
    {
      "EnabledPrerenderDSE_20220419",
      array_kFieldTrialConfig_platforms_203,
      1,
      array_kFieldTrialConfig_form_factors_203,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_194,
      1,
      array_kFieldTrialConfig_disable_features_18,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_190[] = {
      "OmniboxReportSearchboxStats",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_198[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_198[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_162[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_198,
      1,
      array_kFieldTrialConfig_form_factors_198,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_190,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_13[] = {
      "UseSharedInstanceForZeroSuggestPrefetching",
};
const char* const array_kFieldTrialConfig_enable_features_189[] = {
      "AndroidAuxiliarySearch",
      "OmniboxDynamicMaxAutocomplete",
      "OmniboxFocusTriggersSRPZeroSuggest",
      "OmniboxLocalZeroSuggestAgeThreshold",
      "OmniboxMaxURLMatches",
      "OmniboxRetainSuggestionsWithHeaders",
      "OmniboxUIExperimentMaxAutocompleteMatches",
      "ZeroSuggestPrefetching",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_82[] = {
      {
        "OmniboxDynamicMaxAutocompleteIncreasedLimit",
        "15",
      },
      {
        "OmniboxLocalZeroSuggestAgeThreshold",
        "90",
      },
      {
        "OmniboxMaxURLMatches",
        "8",
      },
      {
        "UIMaxAutocompleteMatches",
        "10",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_197[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_197[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_161[] = {
    {
      "AndroidExperiments",
      array_kFieldTrialConfig_platforms_197,
      1,
      array_kFieldTrialConfig_form_factors_197,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_82,
      4,
      array_kFieldTrialConfig_enable_features_189,
      8,
      array_kFieldTrialConfig_disable_features_13,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_12[] = {
      "OffsetParentNewSpecBehavior",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_196[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_196[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_160[] = {
    {
      "Disabled",
      array_kFieldTrialConfig_platforms_196,
      1,
      array_kFieldTrialConfig_form_factors_196,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_12,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_188[] = {
      "NoWakeUpsForCanceledTasks",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_195[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_195[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_159[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_195,
      1,
      array_kFieldTrialConfig_form_factors_195,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_188,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_187[] = {
      "NewSigninRequestHeaderCheckOrder",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_194[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_194[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_158[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_194,
      1,
      array_kFieldTrialConfig_form_factors_194,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_187,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_186[] = {
      "MojoInlineMessagePayloads",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_193[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_193[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_157[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_193,
      1,
      array_kFieldTrialConfig_form_factors_193,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_186,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_185[] = {
      "MessagePumpEpoll",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_192[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_192[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_156[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_192,
      1,
      array_kFieldTrialConfig_form_factors_192,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_185,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_184[] = {
      "MaxUnthrottledTimeoutNestingLevel",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_81[] = {
      {
        "nesting",
        "100",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_191[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_191[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_155[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_191,
      3,
      array_kFieldTrialConfig_form_factors_191,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_81,
      1,
      array_kFieldTrialConfig_enable_features_184,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_183[] = {
      "LiteralBufferCreateStringWithEncoding",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_190[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_190[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_154[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_190,
      2,
      array_kFieldTrialConfig_form_factors_190,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_183,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_182[] = {
      "LightweightReactions",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_80[] = {
      {
        "should_load_reactions_on_demand",
        "false",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_189[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_189[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_181[] = {
      "LightweightReactions",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_79[] = {
      {
        "should_load_reactions_on_demand",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_188[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_188[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_153[] = {
    {
      "EnabledWithOnDemandReactions",
      array_kFieldTrialConfig_platforms_188,
      1,
      array_kFieldTrialConfig_form_factors_188,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_79,
      1,
      array_kFieldTrialConfig_enable_features_181,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "EnabledWithPreloadedReactions",
      array_kFieldTrialConfig_platforms_189,
      1,
      array_kFieldTrialConfig_form_factors_189,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_80,
      1,
      array_kFieldTrialConfig_enable_features_182,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_180[] = {
      "LeakSkiaEventTracerAtExit",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_187[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_187[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_152[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_187,
      1,
      array_kFieldTrialConfig_form_factors_187,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_180,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_179[] = {
      "LeakDetectionUnauthenticated",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_186[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_186[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_151[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_186,
      1,
      array_kFieldTrialConfig_form_factors_186,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_179,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_178[] = {
      "IPH_KeyboardAccessoryBarSwiping",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_78[] = {
      {
        "availability",
        "any",
      },
      {
        "event_trigger",
        "name:keyboard_accessory_bar_swiping_iph_trigger;comparator:<10;window:90;storage:360",
      },
      {
        "event_used",
        "name:keyboard_accessory_bar_swiped;comparator:<2;window:90;storage:360",
      },
      {
        "session_rate",
        "<1",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_185[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_185[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_150[] = {
    {
      "Swiping_IPH_Enabled",
      array_kFieldTrialConfig_platforms_185,
      1,
      array_kFieldTrialConfig_form_factors_185,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_78,
      4,
      array_kFieldTrialConfig_enable_features_178,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_177[] = {
      "AutofillEnableOffersInClankKeyboardAccessory",
      "IPH_KeyboardAccessoryPaymentOffer",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_77[] = {
      {
        "availability",
        "any",
      },
      {
        "event_trigger",
        "name:keyboard_accessory_payment_offer_iph_trigger;comparator:<3;window:90;storage:360",
      },
      {
        "event_used",
        "name:keyboard_accessory_payment_suggestion_accepted;comparator:<2;window:90;storage:360",
      },
      {
        "session_rate",
        "any",
      },
      {
        "session_rate_impact",
        "IPH_KeyboardAccessoryBarSwiping",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_184[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_184[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_149[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_184,
      1,
      array_kFieldTrialConfig_form_factors_184,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_77,
      5,
      array_kFieldTrialConfig_enable_features_177,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_176[] = {
      "IPH_KeyboardAccessoryPaymentFilling",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_76[] = {
      {
        "availability",
        "any",
      },
      {
        "event_trigger",
        "name:keyboard_accessory_payment_filling_iph_trigger;comparator:<10;window:90;storage:360",
      },
      {
        "event_used",
        "name:keyboard_accessory_payment_suggestion_accepted;comparator:<2;window:90;storage:360",
      },
      {
        "session_rate",
        "<1",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_183[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_183[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_148[] = {
    {
      "Payment_IPH_Enabled",
      array_kFieldTrialConfig_platforms_183,
      1,
      array_kFieldTrialConfig_form_factors_183,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_76,
      4,
      array_kFieldTrialConfig_enable_features_176,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_175[] = {
      "IPH_KeyboardAccessoryPasswordFilling",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_75[] = {
      {
        "availability",
        "any",
      },
      {
        "event_trigger",
        "name:keyboard_accessory_password_filling_iph_trigger;comparator:<10;window:90;storage:360",
      },
      {
        "event_used",
        "name:keyboard_accessory_password_suggestion_accepted;comparator:<2;window:90;storage:360",
      },
      {
        "session_rate",
        "<1",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_182[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_182[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_147[] = {
    {
      "Password_IPH_Enabled",
      array_kFieldTrialConfig_platforms_182,
      1,
      array_kFieldTrialConfig_form_factors_182,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_75,
      4,
      array_kFieldTrialConfig_enable_features_175,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_174[] = {
      "IPH_KeyboardAccessoryAddressFilling",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_74[] = {
      {
        "availability",
        "any",
      },
      {
        "event_trigger",
        "name:keyboard_accessory_address_filling_iph_trigger;comparator:<10;window:90;storage:360",
      },
      {
        "event_used",
        "name:keyboard_accessory_address_suggestion_accepted;comparator:<2;window:90;storage:360",
      },
      {
        "session_rate",
        "<1",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_181[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_181[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_146[] = {
    {
      "Address_IPH_Enabled",
      array_kFieldTrialConfig_platforms_181,
      1,
      array_kFieldTrialConfig_form_factors_181,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_74,
      4,
      array_kFieldTrialConfig_enable_features_174,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_173[] = {
      "IsVoiceSearchEnabledCache",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_180[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_180[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_145[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_180,
      1,
      array_kFieldTrialConfig_form_factors_180,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_173,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_172[] = {
      "InitialNavigationEntry",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_179[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_179[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_144[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_179,
      3,
      array_kFieldTrialConfig_form_factors_179,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_172,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_171[] = {
      "IncreasedCmdBufferParseSlice",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_178[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_178[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_143[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_178,
      3,
      array_kFieldTrialConfig_form_factors_178,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_171,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_170[] = {
      "IncognitoParamFilterEnabled",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_73[] = {
      {
        "experiment_identifier",
        "foo",
      },
      {
        "should_filter",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_177[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_177[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_142[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_177,
      1,
      array_kFieldTrialConfig_form_factors_177,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_73,
      2,
      array_kFieldTrialConfig_enable_features_170,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_169[] = {
      "IncognitoNtpRevamp",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_176[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_176[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_141[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_176,
      1,
      array_kFieldTrialConfig_form_factors_176,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_169,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_168[] = {
      "IncludeInitiallyInvisibleImagesInLCP",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_175[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_175[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_140[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_175,
      1,
      array_kFieldTrialConfig_form_factors_175,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_168,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_167[] = {
      "IncludeBackgroundSVGInLCP",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_174[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_174[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_139[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_174,
      1,
      array_kFieldTrialConfig_form_factors_174,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_167,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_166[] = {
      "InMemoryCodeCache",
      "NetworkServiceMemoryCache",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_173[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_173[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_138[] = {
    {
      "EnableBoth",
      array_kFieldTrialConfig_platforms_173,
      1,
      array_kFieldTrialConfig_form_factors_173,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_166,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_165[] = {
      "ImageControllerWaitOnlyForRunningTask",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_172[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_172[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_137[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_172,
      1,
      array_kFieldTrialConfig_form_factors_172,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_165,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_164[] = {
      "IgnoreSyncEncryptionKeysLongMissing",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_72[] = {
      {
        "MinGuResponsesToIgnoreKey",
        "2",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_171[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_171[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_136[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_171,
      1,
      array_kFieldTrialConfig_form_factors_171,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_72,
      1,
      array_kFieldTrialConfig_enable_features_164,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_163[] = {
      "IdentifiabilityStudy",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_71[] = {
      {
        "ActivelySampledFonts",
        "Arial,Helvetica,Times New Roman",
      },
      {
        "BlockWeights",
        "5202,37515,33617,35842,36929,33922,20441,31021,28500,34490,24343",
      },
      {
        "BlockedHashes",
        "44033,44289,286465,680961,681473,693249,693505,693761,694017,696065,880129,881409,881665,881921",
      },
      {
        "BlockedTypes",
        "13,25,28",
      },
      {
        "Blocks",
        "9129224;865032;8710152;8678920;9305096;8942088;8939784;1722309467823238416;3972031034286914064;2988159541422276624;8328626426974190352;9545333389081804304;13173218182366896400;12249551522105410064;18426709255769621264;789,681729;690945;9305096;1722309467823238416;3972031034286914064;2988159541422276624;12249551522105410064;789,695297;9304840;9585928;680705;9305352;3873813933275956760;18009598079355128088,691201;680449;690945;142593;8939784;9128968;865032;3158419467;1722309467823238416;11068226492212177680;7532279523433960728,680193;681729;692225;8939784;9304840;9216356244107974160;8328626426974190352;533,680193;9129224;679425;695297;8710152;7532279523433960728,681729;18009598079355128088,690689;679425;542977;201473;681217;3873813933275956760;7191660495369152024,142593;201217;680193;691713;681217;542977;9586184;8716040;3158419467;789,680705;642817;201473;838401;8678664;865032;9585928;9586184;9305096;7532279523433960728;533;7191660495369152024,681729;642817;542977;9585928;3873813933275956760;7532279523433960728;13014994009983628312",
      },
      {
        "EnableActiveSampling",
        "true",
      },
      {
        "Gen",
        "8",
      },
      {
        "ReidBlocks",
        "18009598079355128088,9223784233214641190;10735872651981970214",
      },
      {
        "ReidBlocksBits",
        "1,4",
      },
      {
        "ReidBlocksNoiseProbabilities",
        "0.01,0.01",
      },
      {
        "ReidBlocksSaltsRanges",
        "1000,1000000",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_170[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_170[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_135[] = {
    {
      "Reid_score_AND_Blocks_1_20211021",
      array_kFieldTrialConfig_platforms_170,
      2,
      array_kFieldTrialConfig_form_factors_170,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_71,
      11,
      array_kFieldTrialConfig_enable_features_163,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_11[] = {
      "RemoveMobileViewportDoubleTap",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_169[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_169[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_134[] = {
    {
      "Disabled",
      array_kFieldTrialConfig_platforms_169,
      2,
      array_kFieldTrialConfig_form_factors_169,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_11,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_162[] = {
      "Http2Grease",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_70[] = {
      {
        "http2_grease_settings",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_168[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_168[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_133[] = {
    {
      "Enabled6",
      array_kFieldTrialConfig_platforms_168,
      2,
      array_kFieldTrialConfig_form_factors_168,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_70,
      1,
      array_kFieldTrialConfig_enable_features_162,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_10[] = {
      "HTMLParamElementUrlSupport",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_167[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_167[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_132[] = {
    {
      "Disabled_20220615",
      array_kFieldTrialConfig_platforms_167,
      3,
      array_kFieldTrialConfig_form_factors_167,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_10,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_161[] = {
      "TabGridLayoutAndroid",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_69[] = {
      {
        "enable_tab_group_auto_creation",
        "false",
      },
      {
        "show_open_in_tab_group_menu_item_first",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_166[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_166[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_131[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_166,
      1,
      array_kFieldTrialConfig_form_factors_166,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_69,
      2,
      array_kFieldTrialConfig_enable_features_161,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_160[] = {
      "GridTabSwitcherForTablets",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_68[] = {
      {
        "delay_creation",
        "true",
      },
      {
        "enable_launch_polish",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_165[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_165[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_159[] = {
      "GridTabSwitcherForTablets",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_67[] = {
      {
        "delay_creation",
        "false",
      },
      {
        "enable_launch_polish",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_164[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_164[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_158[] = {
      "GridTabSwitcherForTablets",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_66[] = {
      {
        "delay_creation",
        "false",
      },
      {
        "enable_launch_polish",
        "false",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_163[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_163[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_130[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_163,
      1,
      array_kFieldTrialConfig_form_factors_163,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_66,
      2,
      array_kFieldTrialConfig_enable_features_158,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled_Polish",
      array_kFieldTrialConfig_platforms_164,
      1,
      array_kFieldTrialConfig_form_factors_164,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_67,
      2,
      array_kFieldTrialConfig_enable_features_159,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled_Polish_Delay",
      array_kFieldTrialConfig_platforms_165,
      1,
      array_kFieldTrialConfig_form_factors_165,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_68,
      2,
      array_kFieldTrialConfig_enable_features_160,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_157[] = {
      "TabGroupsContinuationAndroid",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_65[] = {
      {
        "enable_launch_bug_fix",
        "true",
      },
      {
        "enable_launch_polish",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_162[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_162[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_129[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_162,
      1,
      array_kFieldTrialConfig_form_factors_162,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_65,
      2,
      array_kFieldTrialConfig_enable_features_157,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_156[] = {
      "WakeUpStrategyFeature",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_64[] = {
      {
        "strategy",
        "greedy-wakeups",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_161[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_161[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_128[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_161,
      3,
      array_kFieldTrialConfig_form_factors_161,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_64,
      1,
      array_kFieldTrialConfig_enable_features_156,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_155[] = {
      "OmniboxFocusTriggersContextualWebZeroSuggest",
      "OmniboxMostVisitedTiles",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_160[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_160[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_127[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_160,
      1,
      array_kFieldTrialConfig_form_factors_160,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_155,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_154[] = {
      "GMSCoreEmoji",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_159[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_159[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_126[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_159,
      3,
      array_kFieldTrialConfig_form_factors_159,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_154,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_153[] = {
      "ForceGpuMainThreadToNormalPriorityDrDc",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_158[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_158[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_125[] = {
    {
      "ForceGpuMainThreadToNormalPriorityDrDc",
      array_kFieldTrialConfig_platforms_158,
      1,
      array_kFieldTrialConfig_form_factors_158,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_153,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_152[] = {
      "FirstPartySets",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_157[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_157[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_124[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_157,
      1,
      array_kFieldTrialConfig_form_factors_157,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_152,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_151[] = {
      "FillingAcrossAffiliatedWebsites",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_156[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_156[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_123[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_156,
      1,
      array_kFieldTrialConfig_form_factors_156,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_151,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_150[] = {
      "IPH_FeedSwipeRefresh",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_63[] = {
      {
        "availability",
        "any",
      },
      {
        "event_trigger",
        "name:pulltorefresh_triggered;comparator:==0;window:360;storage:360",
      },
      {
        "event_used",
        "name:feed_swipe_refresh_shown;comparator:==0;window:7;storage:360",
      },
      {
        "session_rate",
        "==0",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_155[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_155[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_122[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_155,
      1,
      array_kFieldTrialConfig_form_factors_155,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_63,
      4,
      array_kFieldTrialConfig_enable_features_150,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_149[] = {
      "FeedPositionAndroid",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_62[] = {
      {
        "pull_up_feed",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_154[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_154[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_148[] = {
      "FeedPositionAndroid",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_61[] = {
      {
        "push_down_feed_large",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_153[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_153[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_147[] = {
      "FeedPositionAndroid",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_60[] = {
      {
        "push_down_feed_small",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_152[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_152[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_121[] = {
    {
      "Enabled_Feed_Position_Push_Down_Small_1",
      array_kFieldTrialConfig_platforms_152,
      1,
      array_kFieldTrialConfig_form_factors_152,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_60,
      1,
      array_kFieldTrialConfig_enable_features_147,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled_Feed_Position_Push_Down_Large_1",
      array_kFieldTrialConfig_platforms_153,
      1,
      array_kFieldTrialConfig_form_factors_153,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_61,
      1,
      array_kFieldTrialConfig_enable_features_148,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled_Feed_Position_Pull_Up_1",
      array_kFieldTrialConfig_platforms_154,
      1,
      array_kFieldTrialConfig_form_factors_154,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_62,
      1,
      array_kFieldTrialConfig_enable_features_149,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_146[] = {
      "FeedLoadingPlaceholder",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_151[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_151[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_120[] = {
    {
      "Enabled_20211118",
      array_kFieldTrialConfig_platforms_151,
      1,
      array_kFieldTrialConfig_form_factors_151,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_146,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_145[] = {
      "FeatureNotificationGuide",
      "SegmentationModelLowEngagedUsers",
      "UseFeatureEngagementForUserTargeting",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_59[] = {
      {
        "IPH_LowUserEngagementDetector_availability",
        ">=3",
      },
      {
        "enable_feature_default_browser",
        "false",
      },
      {
        "enable_feature_incognito_tab",
        "true",
      },
      {
        "enable_feature_ntp_suggestion_card",
        "true",
      },
      {
        "enable_feature_sign_in",
        "false",
      },
      {
        "enable_feature_voice_search",
        "true",
      },
      {
        "feature_notification_repeat_count",
        "1",
      },
      {
        "feature_notification_tracking_only",
        "false",
      },
      {
        "notification_interval_days",
        "7",
      },
      {
        "segment_selection_ttl_days",
        "28",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_150[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_150[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_119[] = {
    {
      "Enabled_low_engaged_7_days",
      array_kFieldTrialConfig_platforms_150,
      1,
      array_kFieldTrialConfig_form_factors_150,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_59,
      10,
      array_kFieldTrialConfig_enable_features_145,
      3,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_144[] = {
      "ExploreSites",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_58[] = {
      {
        "denseVariation",
        "titleBottom",
      },
      {
        "mostLikelyVariation",
        "groupedIcon",
      },
      {
        "variation",
        "mostLikelyTile",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_149[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_149[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_118[] = {
    {
      "WithDenseBottom",
      array_kFieldTrialConfig_platforms_149,
      1,
      array_kFieldTrialConfig_form_factors_149,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_58,
      3,
      array_kFieldTrialConfig_enable_features_144,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_143[] = {
      "EarlyEstablishGpuChannel",
      "EstablishGpuChannelAsync",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_148[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_148[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_117[] = {
    {
      "AsyncEarly_20220617",
      array_kFieldTrialConfig_platforms_148,
      3,
      array_kFieldTrialConfig_form_factors_148,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_143,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_142[] = {
      "EnableSsePathForCopyLCharsX86",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_147[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_147[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_116[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_147,
      3,
      array_kFieldTrialConfig_form_factors_147,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_142,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_141[] = {
      "EnableCbdSignOut",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_146[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_146[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_115[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_146,
      1,
      array_kFieldTrialConfig_form_factors_146,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_141,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_140[] = {
      "ElementSuperRareData",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_145[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_145[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_114[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_145,
      1,
      array_kFieldTrialConfig_form_factors_145,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_140,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_139[] = {
      "EarlyExitOnNoopClassOrStyleChange",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_144[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_144[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_113[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_144,
      2,
      array_kFieldTrialConfig_form_factors_144,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_139,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_138[] = {
      "ContextMenuPopupStyle",
      "TouchDragAndContextMenu",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_57[] = {
      {
        "DragAndDropMovementThresholdDipParam",
        "60",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_143[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_143[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_112[] = {
    {
      "Enabled_MovementThreshold_60_20220802",
      array_kFieldTrialConfig_platforms_143,
      1,
      array_kFieldTrialConfig_form_factors_143,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_57,
      1,
      array_kFieldTrialConfig_enable_features_138,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_137[] = {
      "DownloadRange",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_142[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_142[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_111[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_142,
      1,
      array_kFieldTrialConfig_form_factors_142,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_137,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_136[] = {
      "DownloadLater",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_56[] = {
      {
        "show_date_time_picker",
        "false",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_141[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_141[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_135[] = {
      "DownloadLater",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_55[] = {
      {
        "show_date_time_picker",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_140[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_140[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_110[] = {
    {
      "EnabledWithDateTimePicker",
      array_kFieldTrialConfig_platforms_140,
      1,
      array_kFieldTrialConfig_form_factors_140,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_55,
      1,
      array_kFieldTrialConfig_enable_features_135,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "EnabledWithoutDateTimePicker",
      array_kFieldTrialConfig_platforms_141,
      1,
      array_kFieldTrialConfig_form_factors_141,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_56,
      1,
      array_kFieldTrialConfig_enable_features_136,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_134[] = {
      "DnsOverHttps",
      "DnsOverHttpsUpgrade",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_54[] = {
      {
        "DisabledProviders",
        "Quad9Secure",
      },
      {
        "ShowUi",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_139[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_139[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_109[] = {
    {
      "EnabledLaunch",
      array_kFieldTrialConfig_platforms_139,
      2,
      array_kFieldTrialConfig_form_factors_139,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_54,
      2,
      array_kFieldTrialConfig_enable_features_134,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_133[] = {
      "DohProviderCox",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_138[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_138[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_108[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_138,
      1,
      array_kFieldTrialConfig_form_factors_138,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_133,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_132[] = {
      "UseDnsHttpsSvcb",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_53[] = {
      {
        "UseDnsHttpsSvcbEnableInsecure",
        "true",
      },
      {
        "UseDnsHttpsSvcbHttpUpgrade",
        "true",
      },
      {
        "UseDnsHttpsSvcbInsecureExtraTimeMax",
        "50ms",
      },
      {
        "UseDnsHttpsSvcbInsecureExtraTimeMin",
        "5ms",
      },
      {
        "UseDnsHttpsSvcbInsecureExtraTimePercent",
        "20",
      },
      {
        "UseDnsHttpsSvcbSecureExtraTimeMax",
        "50ms",
      },
      {
        "UseDnsHttpsSvcbSecureExtraTimeMin",
        "5ms",
      },
      {
        "UseDnsHttpsSvcbSecureExtraTimePercent",
        "20",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_137[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_137[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_107[] = {
    {
      "UseDnsHttpsSvcb",
      array_kFieldTrialConfig_platforms_137,
      1,
      array_kFieldTrialConfig_form_factors_137,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_53,
      8,
      array_kFieldTrialConfig_enable_features_132,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_131[] = {
      "ReleaseDiscardableFreeListPages",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_136[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_136[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_106[] = {
    {
      "Enabled_V4",
      array_kFieldTrialConfig_platforms_136,
      1,
      array_kFieldTrialConfig_form_factors_136,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_131,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_130[] = {
      "DisableResourceScheduler",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_135[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_135[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_105[] = {
    {
      "Enabled_20220725",
      array_kFieldTrialConfig_platforms_135,
      1,
      array_kFieldTrialConfig_form_factors_135,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_130,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_9[] = {
      "EnableIPH",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_134[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_134[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_104[] = {
    {
      "Disabled",
      array_kFieldTrialConfig_platforms_134,
      1,
      array_kFieldTrialConfig_form_factors_134,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_9,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_129[] = {
      "DisableCompositedProgressBar",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_133[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_133[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_103[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_133,
      1,
      array_kFieldTrialConfig_form_factors_133,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_129,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_128[] = {
      "DifferentWorkQueueCapacities",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_52[] = {
      {
        "StackCapacity",
        "16",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_132[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_132[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_102[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_132,
      1,
      array_kFieldTrialConfig_form_factors_132,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_52,
      1,
      array_kFieldTrialConfig_enable_features_128,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_127[] = {
      "DexFixer",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_131[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_131[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_101[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_131,
      1,
      array_kFieldTrialConfig_form_factors_131,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_127,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_126[] = {
      "OmniboxAutocompleteStability",
      "OmniboxDocumentProviderDedupingOptimization",
      "OmniboxStrippedGurlOptimization",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_51[] = {
      {
        "AutocompleteStabilityAsyncProvidersFirst",
        "true",
      },
      {
        "AutocompleteStabilityDontCopyDoneProviders",
        "true",
      },
      {
        "AutocompleteStabilityPreserveDefaultAfterTransfer",
        "true",
      },
      {
        "AutocompleteStabilityPreserveDefaultForAsyncUpdates",
        "false",
      },
      {
        "AutocompleteStabilityPreserveDefaultForSyncUpdates",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_130[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_130[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_100[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_130,
      1,
      array_kFieldTrialConfig_form_factors_130,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_51,
      5,
      array_kFieldTrialConfig_enable_features_126,
      3,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_125[] = {
      "DeprioritizeDOMTimersDuringPageLoading",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_50[] = {
      {
        "DeprioritizeDOMTimersPhase",
        "ondomcontentloaded",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_129[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_129[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_99[] = {
    {
      "DeprioritizeTimersUntilDOMContentLoaded_20211112",
      array_kFieldTrialConfig_platforms_129,
      1,
      array_kFieldTrialConfig_form_factors_129,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_50,
      1,
      array_kFieldTrialConfig_enable_features_125,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_124[] = {
      "DelayToolbarUpdateOnLoadStarted",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_128[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_128[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_98[] = {
    {
      "Enabled_20220628",
      array_kFieldTrialConfig_platforms_128,
      1,
      array_kFieldTrialConfig_form_factors_128,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_124,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_123[] = {
      "DelayFirstWorkerWake",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_127[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_127[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_97[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_127,
      1,
      array_kFieldTrialConfig_form_factors_127,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_123,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_122[] = {
      "DelayFirstParkingOfStrings",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_126[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_126[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_96[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_126,
      1,
      array_kFieldTrialConfig_form_factors_126,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_122,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_121[] = {
      "DefaultPassthroughCommandDecoder",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_125[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_125[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_95[] = {
    {
      "Enabled_20220601",
      array_kFieldTrialConfig_platforms_125,
      1,
      array_kFieldTrialConfig_form_factors_125,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_121,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_120[] = {
      "DecodeScriptSourceOffThread",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_124[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_124[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_94[] = {
    {
      "Enabled_20220428",
      array_kFieldTrialConfig_platforms_124,
      3,
      array_kFieldTrialConfig_form_factors_124,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_120,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_119[] = {
      "CCTPackageNameRecording",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_123[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_123[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_93[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_123,
      1,
      array_kFieldTrialConfig_form_factors_123,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_119,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_118[] = {
      "CriticalPersistedTabData",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_122[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_122[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_92[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_122,
      1,
      array_kFieldTrialConfig_form_factors_122,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_118,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_117[] = {
      "CreateSafebrowsingOnStartup",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_121[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_121[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_91[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_121,
      1,
      array_kFieldTrialConfig_form_factors_121,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_117,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_8[] = {
      "ContextualTriggersSelectionSize",
};
const char* const array_kFieldTrialConfig_enable_features_116[] = {
      "ContextualTriggersSelectionHandles",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_120[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_120[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_90[] = {
    {
      "Handles_20220118",
      array_kFieldTrialConfig_platforms_120,
      1,
      array_kFieldTrialConfig_form_factors_120,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_116,
      1,
      array_kFieldTrialConfig_disable_features_8,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_115[] = {
      "ContextMenuGoogleLensChip",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_49[] = {
      {
        "disableOnIncognito",
        "true",
      },
      {
        "logUkm",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_119[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_119[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_89[] = {
    {
      "ShoppingChipEnabled1Percent_20210211",
      array_kFieldTrialConfig_platforms_119,
      1,
      array_kFieldTrialConfig_form_factors_119,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_49,
      2,
      array_kFieldTrialConfig_enable_features_115,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_114[] = {
      "ContentLanguagesInLanguagePicker",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_48[] = {
      {
        "disable_observers",
        "false",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_118[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_118[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_113[] = {
      "ContentLanguagesInLanguagePicker",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_47[] = {
      {
        "disable_observers",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_117[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_117[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_88[] = {
    {
      "EnabledWithoutObservers",
      array_kFieldTrialConfig_platforms_117,
      1,
      array_kFieldTrialConfig_form_factors_117,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_47,
      1,
      array_kFieldTrialConfig_enable_features_113,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "EnabledWithObservers",
      array_kFieldTrialConfig_platforms_118,
      1,
      array_kFieldTrialConfig_form_factors_118,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_48,
      1,
      array_kFieldTrialConfig_enable_features_114,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_112[] = {
      "ContentCaptureTriggeringForExperiment",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_116[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_116[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_87[] = {
    {
      "EnableExperiment",
      array_kFieldTrialConfig_platforms_116,
      3,
      array_kFieldTrialConfig_form_factors_116,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_112,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_111[] = {
      "CompositeBGColorAnimation",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_115[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_115[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_86[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_115,
      3,
      array_kFieldTrialConfig_form_factors_115,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_111,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_7[] = {
      "IPH_PageInfoStoreInfo",
};
const char* const array_kFieldTrialConfig_enable_features_110[] = {
      "CommerceMerchantViewer",
      "PageInfoStoreInfo",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_46[] = {
      {
        "trust_signals_message_disabled",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_114[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_114[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_85[] = {
    {
      "EnabledPageInfoOnly_20220629",
      array_kFieldTrialConfig_platforms_114,
      1,
      array_kFieldTrialConfig_form_factors_114,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_46,
      1,
      array_kFieldTrialConfig_enable_features_110,
      2,
      array_kFieldTrialConfig_disable_features_7,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_109[] = {
      "CommerceHintAndroid",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_113[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_113[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_84[] = {
    {
      "enabled_commerce_hint_20220623",
      array_kFieldTrialConfig_platforms_113,
      1,
      array_kFieldTrialConfig_form_factors_113,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_109,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_108[] = {
      "BookmarksImprovedSaveFlow",
      "BookmarksRefresh",
      "CommercePriceTracking",
      "OptimizationGuidePushNotifications",
      "ReadLater",
      "ShoppingList",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_45[] = {
      {
        "autodismiss_enabled",
        "true",
      },
      {
        "bookmark_compact_visuals_enabled",
        "true",
      },
      {
        "bookmark_in_app_menu",
        "true",
      },
      {
        "bookmark_visuals_enabled",
        "true",
      },
      {
        "enable_persisted_tab_data_maintenance",
        "true",
      },
      {
        "enable_price_notification",
        "true",
      },
      {
        "enable_price_tracking",
        "true",
      },
      {
        "price_tracking_with_optimization_guide",
        "true",
      },
      {
        "use_root_bookmark_as_default",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_112[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_112[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_107[] = {
      "CommercePriceTracking",
      "ReadLater",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_44[] = {
      {
        "enable_persisted_tab_data_maintenance",
        "true",
      },
      {
        "enable_price_tracking",
        "true",
      },
      {
        "price_tracking_with_optimization_guide",
        "true",
      },
      {
        "use_root_bookmark_as_default",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_111[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_111[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_106[] = {
      "BookmarksImprovedSaveFlow",
      "ReadLater",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_43[] = {
      {
        "allow_bookmark_type_swapping",
        "true",
      },
      {
        "autodismiss_enabled",
        "true",
      },
      {
        "use_root_bookmark_as_default",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_110[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_110[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_105[] = {
      "BookmarksImprovedSaveFlow",
      "ReadLater",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_42[] = {
      {
        "allow_bookmark_type_swapping",
        "true",
      },
      {
        "autodismiss_enabled",
        "true",
      },
      {
        "use_root_bookmark_as_default",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_109[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_109[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_104[] = {
      "ReadLater",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_41[] = {
      {
        "use_root_bookmark_as_default",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_108[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_108[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_103[] = {
      "ReadLater",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_40[] = {
      {
        "use_root_bookmark_as_default",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_107[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_107[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_102[] = {
      "ReadLater",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_39[] = {
      {
        "use_cct",
        "false",
      },
      {
        "use_root_bookmark_as_default",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_106[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_106[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_101[] = {
      "ReadLater",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_38[] = {
      {
        "use_cct",
        "false",
      },
      {
        "use_root_bookmark_as_default",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_105[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_105[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_100[] = {
      "ReadLater",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_37[] = {
      {
        "use_root_bookmark_as_default",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_104[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_104[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_99[] = {
      "ReadLater",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_36[] = {
      {
        "use_root_bookmark_as_default",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_103[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_103[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_98[] = {
      "ReadLater",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_35[] = {
      {
        "use_root_bookmark_as_default",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_102[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_102[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_97[] = {
      "ReadLater",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_34[] = {
      {
        "use_root_bookmark_as_default",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_101[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_101[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_96[] = {
      "BookmarksImprovedSaveFlow",
      "BookmarksRefresh",
      "CommercePriceTracking",
      "OptimizationGuidePushNotifications",
      "ReadLater",
      "ShoppingList",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_33[] = {
      {
        "allow_bookmark_type_swapping",
        "true",
      },
      {
        "autodismiss_enabled",
        "true",
      },
      {
        "bookmark_compact_visuals_enabled",
        "true",
      },
      {
        "bookmark_in_app_menu",
        "true",
      },
      {
        "bookmark_visuals_enabled",
        "true",
      },
      {
        "enable_persisted_tab_data_maintenance",
        "true",
      },
      {
        "enable_price_notification",
        "true",
      },
      {
        "enable_price_tracking",
        "true",
      },
      {
        "price_tracking_with_optimization_guide",
        "true",
      },
      {
        "use_root_bookmark_as_default",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_100[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_100[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_83[] = {
    {
      "Dogfood",
      array_kFieldTrialConfig_platforms_100,
      1,
      array_kFieldTrialConfig_form_factors_100,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_33,
      10,
      array_kFieldTrialConfig_enable_features_96,
      6,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Default__non_US_M100_B_v3",
      array_kFieldTrialConfig_platforms_101,
      1,
      array_kFieldTrialConfig_form_factors_101,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_34,
      1,
      array_kFieldTrialConfig_enable_features_97,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Default__non_US_M100_C_v3",
      array_kFieldTrialConfig_platforms_102,
      1,
      array_kFieldTrialConfig_form_factors_102,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_35,
      1,
      array_kFieldTrialConfig_enable_features_98,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "ReadLater_CCT_non_US__Control_M100_B_v3",
      array_kFieldTrialConfig_platforms_103,
      1,
      array_kFieldTrialConfig_form_factors_103,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_36,
      1,
      array_kFieldTrialConfig_enable_features_99,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "ReadLater_CCT_non_US__Control_M100_C_v3",
      array_kFieldTrialConfig_platforms_104,
      1,
      array_kFieldTrialConfig_form_factors_104,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_37,
      1,
      array_kFieldTrialConfig_enable_features_100,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "ReadLater_CCT_non_US__NoCustomTab_M100_B_v3",
      array_kFieldTrialConfig_platforms_105,
      1,
      array_kFieldTrialConfig_form_factors_105,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_38,
      2,
      array_kFieldTrialConfig_enable_features_101,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "ReadLater_CCT_non_US__NoCustomTab_M100_C_v3",
      array_kFieldTrialConfig_platforms_106,
      1,
      array_kFieldTrialConfig_form_factors_106,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_39,
      2,
      array_kFieldTrialConfig_enable_features_102,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "ReadLater_SaveFlow_non_US__Control_M100_B_v3",
      array_kFieldTrialConfig_platforms_107,
      1,
      array_kFieldTrialConfig_form_factors_107,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_40,
      1,
      array_kFieldTrialConfig_enable_features_103,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "ReadLater_SaveFlow_non_US__Control_M100_C_v3",
      array_kFieldTrialConfig_platforms_108,
      1,
      array_kFieldTrialConfig_form_factors_108,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_41,
      1,
      array_kFieldTrialConfig_enable_features_104,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "ReadLater_SaveFlow_non_US__SemiIntegratedRedux_M100_B_v3",
      array_kFieldTrialConfig_platforms_109,
      1,
      array_kFieldTrialConfig_form_factors_109,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_42,
      3,
      array_kFieldTrialConfig_enable_features_105,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "ReadLater_SaveFlow_non_US__SemiIntegratedRedux_M100_C_v3",
      array_kFieldTrialConfig_platforms_110,
      1,
      array_kFieldTrialConfig_form_factors_110,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_43,
      3,
      array_kFieldTrialConfig_enable_features_106,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "WallE_US__Control_M100_A_v3",
      array_kFieldTrialConfig_platforms_111,
      1,
      array_kFieldTrialConfig_form_factors_111,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_44,
      4,
      array_kFieldTrialConfig_enable_features_107,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "WallE_US__ShoppingCompact_M100_A_v3",
      array_kFieldTrialConfig_platforms_112,
      1,
      array_kFieldTrialConfig_form_factors_112,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_45,
      9,
      array_kFieldTrialConfig_enable_features_108,
      6,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_95[] = {
      "AppLanguagePrompt",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_99[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_99[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_82[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_99,
      1,
      array_kFieldTrialConfig_form_factors_99,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_95,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_94[] = {
      "FeedReliabilityLogging",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_98[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_98[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_81[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_98,
      1,
      array_kFieldTrialConfig_form_factors_98,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_94,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_93[] = {
      "StartSurfaceAndroid",
      "TabSwitcherOnReturn",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_32[] = {
      {
        "hide_switch_when_no_incognito_tabs",
        "true",
      },
      {
        "open_ntp_instead_of_start",
        "true",
      },
      {
        "show_last_active_tab_only",
        "true",
      },
      {
        "signin_promo_NTP_count_limit",
        "5",
      },
      {
        "signin_promo_NTP_reset_after_hours",
        "672",
      },
      {
        "signin_promo_NTP_since_first_time_shown_limit_hours",
        "336",
      },
      {
        "start_surface_variation",
        "single",
      },
      {
        "support_accessibility",
        "true",
      },
      {
        "tab_count_button_on_start_surface",
        "true",
      },
      {
        "tab_switcher_on_return_time_ms",
        "28800000",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_97[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_97[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_92[] = {
      "StartSurfaceAndroid",
      "TabSwitcherOnReturn",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_31[] = {
      {
        "behavioural_targeting",
        "feeds",
      },
      {
        "hide_switch_when_no_incognito_tabs",
        "true",
      },
      {
        "num_days_keep_show_start_at_startup",
        "4",
      },
      {
        "num_days_user_click_below_threshold",
        "1",
      },
      {
        "open_ntp_instead_of_start",
        "true",
      },
      {
        "show_last_active_tab_only",
        "true",
      },
      {
        "signin_promo_NTP_count_limit",
        "5",
      },
      {
        "signin_promo_NTP_reset_after_hours",
        "672",
      },
      {
        "signin_promo_NTP_since_first_time_shown_limit_hours",
        "336",
      },
      {
        "start_surface_variation",
        "single",
      },
      {
        "support_accessibility",
        "true",
      },
      {
        "tab_count_button_on_start_surface",
        "true",
      },
      {
        "tab_switcher_on_return_time_ms",
        "28800000",
      },
      {
        "user_clicks_threshold",
        "1",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_96[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_96[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_80[] = {
    {
      "CandidateB_FeedsShowLast7Days_8H",
      array_kFieldTrialConfig_platforms_96,
      1,
      array_kFieldTrialConfig_form_factors_96,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_31,
      14,
      array_kFieldTrialConfig_enable_features_92,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "CandidateB",
      array_kFieldTrialConfig_platforms_97,
      1,
      array_kFieldTrialConfig_form_factors_97,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_32,
      10,
      array_kFieldTrialConfig_enable_features_93,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_91[] = {
      "ChromeManagementPageAndroid",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_95[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_95[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_79[] = {
    {
      "ChromeManagementPageAndroid",
      array_kFieldTrialConfig_platforms_95,
      1,
      array_kFieldTrialConfig_form_factors_95,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_91,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_90[] = {
      "CCTClientDataHeader",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_30[] = {
      {
        "expected_version",
        "300000000",
      },
      {
        "header_value",
        "header value",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_94[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_94[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_78[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_94,
      1,
      array_kFieldTrialConfig_form_factors_94,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_30,
      2,
      array_kFieldTrialConfig_enable_features_90,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_89[] = {
      "CanvasOopRasterization",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_93[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_93[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_77[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_93,
      3,
      array_kFieldTrialConfig_form_factors_93,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_89,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_6[] = {
      "CacheTransparency",
};
const char* const array_kFieldTrialConfig_enable_features_88[] = {
      "PervasivePayloadsList",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_29[] = {
      {
        "pervasive-payloads",
        "1,http://127.0.0.1:4353/pervasive.js,87F6EE26BD9CFC440B4C805AAE79E0A5671F61C00B5E0AF54B8199EAF64AAAC3",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_92[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_92[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_87[] = {
      "CacheTransparency",
      "PervasivePayloadsList",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_28[] = {
      {
        "pervasive-payloads",
        "1,http://127.0.0.1:4353/pervasive.js,87F6EE26BD9CFC440B4C805AAE79E0A5671F61C00B5E0AF54B8199EAF64AAAC3",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_91[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_91[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_76[] = {
    {
      "CacheTransparencyEnabled",
      array_kFieldTrialConfig_platforms_91,
      1,
      array_kFieldTrialConfig_form_factors_91,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_28,
      1,
      array_kFieldTrialConfig_enable_features_87,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "InputPervasivePayloadsList",
      array_kFieldTrialConfig_platforms_92,
      1,
      array_kFieldTrialConfig_form_factors_92,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_29,
      1,
      array_kFieldTrialConfig_enable_features_88,
      1,
      array_kFieldTrialConfig_disable_features_6,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_86[] = {
      "CacheSiteIsolationMemoryThreshold",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_90[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_90[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_75[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_90,
      3,
      array_kFieldTrialConfig_form_factors_90,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_86,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_5[] = {
      "CacheInlineScriptCode",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_89[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_89[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_74[] = {
    {
      "Disabled_20220715",
      array_kFieldTrialConfig_platforms_89,
      2,
      array_kFieldTrialConfig_form_factors_89,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_5,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_4[] = {
      "CacheCodeOnIdle",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_88[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_88[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const char* const array_kFieldTrialConfig_enable_features_85[] = {
      "CacheCodeOnIdle",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_87[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_87[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_73[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_87,
      3,
      array_kFieldTrialConfig_form_factors_87,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_85,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Disabled",
      array_kFieldTrialConfig_platforms_88,
      3,
      array_kFieldTrialConfig_form_factors_88,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_4,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_84[] = {
      "PermissionPredictions",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_27[] = {
      {
        "holdback_chance",
        "0.3",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_86[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_86[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_72[] = {
    {
      "Enabled_20210901",
      array_kFieldTrialConfig_platforms_86,
      1,
      array_kFieldTrialConfig_form_factors_86,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_27,
      1,
      array_kFieldTrialConfig_enable_features_84,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_83[] = {
      "CCTNewDownloadTab",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_85[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_85[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_71[] = {
    {
      "Enabled_20220525",
      array_kFieldTrialConfig_platforms_85,
      1,
      array_kFieldTrialConfig_form_factors_85,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_83,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_82[] = {
      "ClearOmniboxFocusAfterNavigation",
      "PostTaskFocusTab",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_26[] = {
      {
        "clear_focus_asynchronously",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_84[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_84[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_70[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_84,
      1,
      array_kFieldTrialConfig_form_factors_84,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_26,
      1,
      array_kFieldTrialConfig_enable_features_82,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_81[] = {
      "PrioritizeCompositingAfterInput",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_83[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_83[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_69[] = {
    {
      "Enabled_20220523",
      array_kFieldTrialConfig_platforms_83,
      2,
      array_kFieldTrialConfig_form_factors_83,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_81,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_80[] = {
      "BiometricTouchToFill",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_82[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_82[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_68[] = {
    {
      "Enabled_20210616",
      array_kFieldTrialConfig_platforms_82,
      1,
      array_kFieldTrialConfig_form_factors_82,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_80,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_79[] = {
      "BatchSimpleURLLoader",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_25[] = {
      {
        "batching_enabled_traffic_annotation_hashes",
        "57144960,54845618",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_81[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_81[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const char* const array_kFieldTrialConfig_enable_features_78[] = {
      "BatchSimpleURLLoader",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_24[] = {
      {
        "batching_enabled_traffic_annotation_hashes",
        "727528,727478",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_80[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_80[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_67[] = {
    {
      "EnabledUmaUkm",
      array_kFieldTrialConfig_platforms_80,
      2,
      array_kFieldTrialConfig_form_factors_80,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_24,
      1,
      array_kFieldTrialConfig_enable_features_78,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "EnabledOtherComponents",
      array_kFieldTrialConfig_platforms_81,
      2,
      array_kFieldTrialConfig_form_factors_81,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_25,
      1,
      array_kFieldTrialConfig_enable_features_79,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_77[] = {
      "BatchImageDecoding",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_79[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_79[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_66[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_79,
      1,
      array_kFieldTrialConfig_form_factors_79,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_77,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_76[] = {
      "BatchFetchRequests",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_78[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_78[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_65[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_78,
      1,
      array_kFieldTrialConfig_form_factors_78,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_76,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_75[] = {
      "BackForwardCache_NoMemoryLimit_Trial",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_77[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_77[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_64[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_77,
      1,
      array_kFieldTrialConfig_form_factors_77,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_75,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_74[] = {
      "BackForwardCacheMemoryControls",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_23[] = {
      {
        "memory_threshold_for_back_forward_cache_in_mb",
        "1700",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_76[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_76[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_73[] = {
      "BackForwardCacheMemoryControls",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_22[] = {
      {
        "memory_threshold_for_back_forward_cache_in_mb",
        "1500",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_75[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_75[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_72[] = {
      "BackForwardCacheMemoryControls",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_21[] = {
      {
        "memory_threshold_for_back_forward_cache_in_mb",
        "1300",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_74[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_74[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_71[] = {
      "BackForwardCacheMemoryControls",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_20[] = {
      {
        "memory_threshold_for_back_forward_cache_in_mb",
        "1000",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_73[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_73[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_70[] = {
      "BackForwardCacheMemoryControls",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_19[] = {
      {
        "memory_threshold_for_back_forward_cache_in_mb",
        "1",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_72[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_72[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_63[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_72,
      1,
      array_kFieldTrialConfig_form_factors_72,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_19,
      1,
      array_kFieldTrialConfig_enable_features_70,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled_1000",
      array_kFieldTrialConfig_platforms_73,
      1,
      array_kFieldTrialConfig_form_factors_73,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_20,
      1,
      array_kFieldTrialConfig_enable_features_71,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled_1300",
      array_kFieldTrialConfig_platforms_74,
      1,
      array_kFieldTrialConfig_form_factors_74,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_21,
      1,
      array_kFieldTrialConfig_enable_features_72,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled_1500",
      array_kFieldTrialConfig_platforms_75,
      1,
      array_kFieldTrialConfig_form_factors_75,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_22,
      1,
      array_kFieldTrialConfig_enable_features_73,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled_1700",
      array_kFieldTrialConfig_platforms_76,
      1,
      array_kFieldTrialConfig_form_factors_76,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_23,
      1,
      array_kFieldTrialConfig_enable_features_74,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_69[] = {
      "BackForwardCacheTimeToLiveControl",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_18[] = {
      {
        "time_to_live_seconds",
        "600",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_71[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_71[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_62[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_71,
      1,
      array_kFieldTrialConfig_form_factors_71,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_18,
      1,
      array_kFieldTrialConfig_enable_features_69,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_68[] = {
      "BackForwardCacheEnabledForNonPluginEmbed",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_70[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_70[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_61[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_70,
      1,
      array_kFieldTrialConfig_form_factors_70,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_68,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_67[] = {
      "BackForwardCacheDedicatedWorker",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_69[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_69[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_60[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_69,
      1,
      array_kFieldTrialConfig_form_factors_69,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_67,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_66[] = {
      "BackForwardCacheAppBanner",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_68[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_68[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_59[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_68,
      1,
      array_kFieldTrialConfig_form_factors_68,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_66,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_65[] = {
      "BackForwardCache",
      "FreezeWhileKeepActive",
      "LoadingTasksUnfreezable",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_17[] = {
      {
        "TimeToLiveInBackForwardCacheInSeconds",
        "180",
      },
      {
        "allowed_websites",
        "",
      },
      {
        "cache_size",
        "6",
      },
      {
        "check_eligibility_after_pagehide",
        "true",
      },
      {
        "enable_same_site",
        "true",
      },
      {
        "file_system_api_supported",
        "true",
      },
      {
        "foreground_cache_size",
        "2",
      },
      {
        "grace_period_to_finish_loading_in_seconds",
        "60",
      },
      {
        "max_buffered_bytes",
        "200000",
      },
      {
        "max_buffered_bytes_per_process",
        "1024000",
      },
      {
        "supported_features",
        "MediaSessionImplOnServiceCreated",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_67[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_67[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_58[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_67,
      1,
      array_kFieldTrialConfig_form_factors_67,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_17,
      11,
      array_kFieldTrialConfig_enable_features_65,
      3,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_64[] = {
      "AvoidUnnecessaryBeforeUnloadCheckSync",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_66[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_66[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_57[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_66,
      2,
      array_kFieldTrialConfig_form_factors_66,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_64,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_3[] = {
      "AutomaticLazyFrameLoadingToAds",
      "AutomaticLazyFrameLoadingToEmbeds",
};
const char* const array_kFieldTrialConfig_enable_features_63[] = {
      "AutomaticLazyFrameLoadingToEmbedUrls",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_16[] = {
      {
        "allowed_websites",
        "https://www.youtube.com|/embed,https://www.google.com|/maps/embed",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_65[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_65[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_disable_features_2[] = {
      "AutomaticLazyFrameLoadingToEmbedUrls",
      "AutomaticLazyFrameLoadingToEmbeds",
};
const char* const array_kFieldTrialConfig_enable_features_62[] = {
      "AutomaticLazyFrameLoadingToAds",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_64[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_64[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_disable_features_1[] = {
      "AutomaticLazyFrameLoadingToAds",
};
const char* const array_kFieldTrialConfig_enable_features_61[] = {
      "AutomaticLazyFrameLoadingToEmbedUrls",
      "AutomaticLazyFrameLoadingToEmbeds",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_15[] = {
      {
        "allowed_websites",
        "https://www.youtube.com|/embed,https://www.google.com|/maps/embed",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_63[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_63[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_60[] = {
      "AutomaticLazyFrameLoadingToAds",
      "AutomaticLazyFrameLoadingToEmbedUrls",
      "AutomaticLazyFrameLoadingToEmbeds",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_14[] = {
      {
        "allowed_websites",
        "https://www.youtube.com|/embed,https://www.google.com|/maps/embed",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_62[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_62[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_56[] = {
    {
      "Enabled_All_20220418",
      array_kFieldTrialConfig_platforms_62,
      1,
      array_kFieldTrialConfig_form_factors_62,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_14,
      1,
      array_kFieldTrialConfig_enable_features_60,
      3,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled_LazyEmbeds_20220418",
      array_kFieldTrialConfig_platforms_63,
      1,
      array_kFieldTrialConfig_form_factors_63,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_15,
      1,
      array_kFieldTrialConfig_enable_features_61,
      2,
      array_kFieldTrialConfig_disable_features_1,
      1,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled_LazyAds_20220418",
      array_kFieldTrialConfig_platforms_64,
      1,
      array_kFieldTrialConfig_form_factors_64,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_62,
      1,
      array_kFieldTrialConfig_disable_features_2,
      2,
      NULL,
      NULL,
      0,
    },
    {
      "Control_20220418",
      array_kFieldTrialConfig_platforms_65,
      1,
      array_kFieldTrialConfig_form_factors_65,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_16,
      1,
      array_kFieldTrialConfig_enable_features_63,
      1,
      array_kFieldTrialConfig_disable_features_3,
      2,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_59[] = {
      "AutofillUpstreamAllowAdditionalEmailDomains",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_61[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_61[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_55[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_61,
      1,
      array_kFieldTrialConfig_form_factors_61,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_59,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_58[] = {
      "AutofillUpstream",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_60[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_60[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_54[] = {
    {
      "Enabled_20220124",
      array_kFieldTrialConfig_platforms_60,
      1,
      array_kFieldTrialConfig_form_factors_60,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_58,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_57[] = {
      "AutofillShadowDOM",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_59[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_59[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_53[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_59,
      2,
      array_kFieldTrialConfig_form_factors_59,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_57,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_56[] = {
      "AutofillServerTypeTakesPrecedence",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_58[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_58[] = {
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_52[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_58,
      2,
      array_kFieldTrialConfig_form_factors_58,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_56,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_55[] = {
      "AutofillServerTypeTakesPrecedence",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_57[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_57[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_51[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_57,
      1,
      array_kFieldTrialConfig_form_factors_57,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_55,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_54[] = {
      "AutofillSectionUponRedundantNameInfo",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_56[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_56[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_50[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_56,
      1,
      array_kFieldTrialConfig_form_factors_56,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_54,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_53[] = {
      "AutofillRetrieveOverallPredictionsFromCache",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_55[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_55[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_49[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_55,
      3,
      array_kFieldTrialConfig_form_factors_55,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_53,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_52[] = {
      "AutofillRemoveInvalidPhoneNumberOnImport",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_54[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_54[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_48[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_54,
      1,
      array_kFieldTrialConfig_form_factors_54,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_52,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_51[] = {
      "AutofillRemoveInaccessibleProfileValues",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_13[] = {
      {
        "remove_inaccessible_fields_on_startup",
        "false",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_53[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_53[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_47[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_53,
      1,
      array_kFieldTrialConfig_form_factors_53,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_13,
      1,
      array_kFieldTrialConfig_enable_features_51,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_50[] = {
      "AutofillRefillModifiedCreditCardExpirationDates",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_52[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_52[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_46[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_52,
      1,
      array_kFieldTrialConfig_form_factors_52,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_50,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_49[] = {
      "AutofillRationalizeStreetAddressAndAddressLine",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_51[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_51[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_45[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_51,
      2,
      array_kFieldTrialConfig_form_factors_51,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_49,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_48[] = {
      "AutofillProfileImportFromUnfocusableFields",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_50[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_50[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_44[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_50,
      1,
      array_kFieldTrialConfig_form_factors_50,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_48,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_47[] = {
      "AutofillPreventOverridingPrefilledValues",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_49[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_49[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_43[] = {
    {
      "Enabled2022-03-01",
      array_kFieldTrialConfig_platforms_49,
      2,
      array_kFieldTrialConfig_form_factors_49,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_47,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_46[] = {
      "AutofillParseMerchantPromoCodeFields",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_48[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_48[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_42[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_48,
      2,
      array_kFieldTrialConfig_form_factors_48,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_46,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_45[] = {
      "AutofillLabelAffixRemoval",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_47[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_47[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_41[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_47,
      3,
      array_kFieldTrialConfig_form_factors_47,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_45,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_44[] = {
      "AutofillKeyboardAccessory",
      "AutofillManualFallbackAndroid",
      "RecoverFromNeverSaveAndroid",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_46[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_46[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_40[] = {
    {
      "Enabled_Full_With_Recover_20201216",
      array_kFieldTrialConfig_platforms_46,
      1,
      array_kFieldTrialConfig_form_factors_46,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_44,
      3,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_43[] = {
      "AutofillFillCreditCardAsPerFormatString",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_45[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_45[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_39[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_45,
      1,
      array_kFieldTrialConfig_form_factors_45,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_43,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_42[] = {
      "AutofillFillAndImportFromMoreFields",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_44[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_44[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_38[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_44,
      1,
      array_kFieldTrialConfig_form_factors_44,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_42,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_41[] = {
      "AutofillEnforceDelaysInStrikeDatabase",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_43[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_43[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_37[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_43,
      1,
      array_kFieldTrialConfig_form_factors_43,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_41,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_40[] = {
      "AutofillEnableSupportForParsingWithSharedLabels",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_42[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_42[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_36[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_42,
      3,
      array_kFieldTrialConfig_form_factors_42,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_40,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_39[] = {
      "AutofillEnableSendingBcnInGetUploadDetails",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_41[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_41[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_35[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_41,
      2,
      array_kFieldTrialConfig_form_factors_41,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_39,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_38[] = {
      "AutofillEnableProfileDeduplication",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_40[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_40[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_34[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_40,
      2,
      array_kFieldTrialConfig_form_factors_40,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_38,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_37[] = {
      "AutofillEnableNameSurenameParsing",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_39[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_39[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_33[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_39,
      2,
      array_kFieldTrialConfig_form_factors_39,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_37,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_36[] = {
      "AutofillEnableMultiStepImports",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_12[] = {
      {
        "enable_multistep_complement",
        "false",
      },
      {
        "multistep_candidate_ttl",
        "5m",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_38[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_38[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_35[] = {
      "AutofillEnableMultiStepImports",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_11[] = {
      {
        "enable_multistep_complement",
        "true",
      },
      {
        "multistep_candidate_ttl",
        "5m",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_37[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_37[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_32[] = {
    {
      "Enabled_WithComplement",
      array_kFieldTrialConfig_platforms_37,
      1,
      array_kFieldTrialConfig_form_factors_37,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_11,
      2,
      array_kFieldTrialConfig_enable_features_35,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled_WithoutComplement",
      array_kFieldTrialConfig_platforms_38,
      1,
      array_kFieldTrialConfig_form_factors_38,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_12,
      2,
      array_kFieldTrialConfig_enable_features_36,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_34[] = {
      "AutofillEnableLabelPrecedenceForTurkishAddresses",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_36[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_36[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_31[] = {
    {
      "AutofillEnableLabelPrecedenceForTurkishAddresses",
      array_kFieldTrialConfig_platforms_36,
      1,
      array_kFieldTrialConfig_form_factors_36,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_34,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_33[] = {
      "AutofillEnableExtendedAddressFormats",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_35[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_35[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_30[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_35,
      1,
      array_kFieldTrialConfig_form_factors_35,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_33,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_32[] = {
      "AutofillEnableAugmentedPhoneCountryCode",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_34[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_34[] = {
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_29[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_34,
      2,
      array_kFieldTrialConfig_form_factors_34,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_32,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_31[] = {
      "AutofillEnableAugmentedPhoneCountryCode",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_33[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_33[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_28[] = {
    {
      "AutofillEnableAugmentedPhoneCountryCode",
      array_kFieldTrialConfig_platforms_33,
      1,
      array_kFieldTrialConfig_form_factors_33,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_31,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_30[] = {
      "AutofillConsiderVariationCountryCodeForPhoneNumbers",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_32[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_32[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_27[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_32,
      1,
      array_kFieldTrialConfig_form_factors_32,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_30,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_29[] = {
      "AutofillAssistantInCctTriggering",
      "AutofillAssistantUrlHeuristics",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_10[] = {
      {
        "json_parameters",
        "\n{\n  \"denylistedDomains\": [\"google.com\", \"facebook.com\", \"ampproject.org\",\n                        \"amazon.com\", \"pornhub.com\", \"xnxx.com\",\n                        \"xvideos.com\", \"twitter.com\", \"instagram.com\",\n                        \"craigslist.org\", \"yahoo.com\",\n                        \"googleadservices.com\", \"youtube.com\",\n                        \"zillow.com\", \"wikipedia.org\", \"xhamster.com\",\n                        \"pinterest.com\", \"reddit.com\", \"indeed.com\",\n                        \"dailymail.co.uk\", \"weather.com\", \"mlb.com\",\n                        \"live.com\", \"realtor.com\", \"trulia.com\",\n                        \"ca.gov\", \"pch.com\", \"paypal.com\", \"office.com\",\n                        \"espn.com\"],\n  \"heuristics\":[\n    {\n      \"intent\":\"SHOPPING_ASSISTED_CHECKOUT\",\n      \"conditionSet\":{\n        \"schemes\":[\"https\"],\n        \"urlMatches\":\"(?i)cart|trolley|basket|checkout|fulfil+ment|bag|shipping|pay|buy\"\n      }\n    },\n    {\n      \"intent\":\"SHOPPING_ASSISTED_CHECKOUT\",\n      \"conditionSet\":{\n        \"urlPrefix\":\"https://www.jegs.com/webapp/wcs/stores/servlet/OrderItemDisplay\"\n      }\n    }\n  ]\n}",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_31[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_31[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_26[] = {
    {
      "Enabled_20210611",
      array_kFieldTrialConfig_platforms_31,
      1,
      array_kFieldTrialConfig_form_factors_31,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_10,
      1,
      array_kFieldTrialConfig_enable_features_29,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_28[] = {
      "AutofillAssistantSignGetActionsRequests",
      "AutofillAssistantVerifyGetActionsResponses",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_30[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_30[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_25[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_30,
      1,
      array_kFieldTrialConfig_form_factors_30,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_28,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_27[] = {
      "AutofillAcrossIframes",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_29[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_29[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_24[] = {
    {
      "Enabled_20210922",
      array_kFieldTrialConfig_platforms_29,
      1,
      array_kFieldTrialConfig_form_factors_29,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_27,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_26[] = {
      "AutoDisableAccessibility",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_28[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_28[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_23[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_28,
      1,
      array_kFieldTrialConfig_form_factors_28,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_26,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features_0[] = {
      "AsyncGpuLatencyReporting",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_27[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_27[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_22[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_27,
      1,
      array_kFieldTrialConfig_form_factors_27,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features_0,
      1,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_25[] = {
      "AssistantConsentModal",
      "AssistantConsentV2",
      "AssistantIntentExperimentId",
      "OmniboxAssistantVoiceSearch",
      "VoiceSearchAudioCapturePolicy",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_9[] = {
      {
        "colorful_mic",
        "false",
      },
      {
        "count",
        "2",
      },
      {
        "enable_multi_account_check",
        "false",
      },
      {
        "experiment_id",
        "48113782",
      },
      {
        "min_agsa_version",
        "12.37",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_26[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_26[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_21[] = {
    {
      "ModalV2_20220310",
      array_kFieldTrialConfig_platforms_26,
      1,
      array_kFieldTrialConfig_form_factors_26,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_9,
      5,
      array_kFieldTrialConfig_enable_features_25,
      5,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_24[] = {
      "FeedCloseRefresh",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_8[] = {
      {
        "require_interaction",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_25[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_25[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_23[] = {
      "FeedCloseRefresh",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_24[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_24[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_20[] = {
    {
      "Open30",
      array_kFieldTrialConfig_platforms_24,
      1,
      array_kFieldTrialConfig_form_factors_24,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_23,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Interact30",
      array_kFieldTrialConfig_platforms_25,
      1,
      array_kFieldTrialConfig_form_factors_25,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_8,
      1,
      array_kFieldTrialConfig_enable_features_24,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_22[] = {
      "NotificationPermissionVariant",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_7[] = {
      {
        "always_show_rationale_before_requesting_permission",
        "true",
      },
      {
        "notification_permission_dialog_text_variant_2",
        "true",
      },
      {
        "permission_request_interval_days",
        "7",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_23[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_23[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_21[] = {
      "NotificationPermissionVariant",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_6[] = {
      {
        "always_show_rationale_before_requesting_permission",
        "true",
      },
      {
        "notification_permission_dialog_text_variant_2",
        "false",
      },
      {
        "permission_request_interval_days",
        "7",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_22[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_22[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_19[] = {
    {
      "RationaleShownAtFirstRequest",
      array_kFieldTrialConfig_platforms_22,
      1,
      array_kFieldTrialConfig_form_factors_22,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_6,
      3,
      array_kFieldTrialConfig_enable_features_21,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "TextVariant2",
      array_kFieldTrialConfig_platforms_23,
      1,
      array_kFieldTrialConfig_form_factors_23,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_7,
      3,
      array_kFieldTrialConfig_enable_features_22,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_20[] = {
      "EnablePerfettoSystemTracing",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_21[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_21[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_18[] = {
    {
      "EnablePerfettoSystemTracing",
      array_kFieldTrialConfig_platforms_21,
      3,
      array_kFieldTrialConfig_form_factors_21,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_20,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_19[] = {
      "SearchEnginePromo.ExistingDeviceVer2",
      "SearchEnginePromo.NewDeviceVer2",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_20[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_20[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_17[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_20,
      1,
      array_kFieldTrialConfig_form_factors_20,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_19,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_18[] = {
      "AndroidScrollOptimizations",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_19[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_19[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_16[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_19,
      1,
      array_kFieldTrialConfig_form_factors_19,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_18,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_17[] = {
      "AndroidMediaPickerSupport",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_18[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_18[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_15[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_18,
      1,
      array_kFieldTrialConfig_form_factors_18,
      0,
      absl::nullopt,
      "13.0.0",
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_17,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_16[] = {
      "AndroidPermissionsCache",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_17[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_17[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_14[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_17,
      1,
      array_kFieldTrialConfig_form_factors_17,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_16,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_15[] = {
      "MostRecentTabOnBackgroundCloseTab",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_16[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_16[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_13[] = {
    {
      "Enabled_20220518",
      array_kFieldTrialConfig_platforms_16,
      1,
      array_kFieldTrialConfig_form_factors_16,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_15,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_14[] = {
      "MessagesForAndroidInfrastructure",
      "MessagesForAndroidSaveCard",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_5[] = {
      {
        "autodismiss_duration_ms_SaveCard",
        "60000",
      },
      {
        "save_card_message_use_followup_button_text",
        "false",
      },
      {
        "save_card_message_use_gpay_icon",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_15[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_15[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_13[] = {
      "MessagesForAndroidInfrastructure",
      "MessagesForAndroidSaveCard",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_4[] = {
      {
        "autodismiss_duration_ms_SaveCard",
        "60000",
      },
      {
        "save_card_dialog_v2_enabled",
        "true",
      },
      {
        "save_card_message_use_followup_button_text",
        "false",
      },
      {
        "save_card_message_use_gpay_icon",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_14[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_14[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_12[] = {
    {
      "Enabled_60000_dialogV2_2022-04-18",
      array_kFieldTrialConfig_platforms_14,
      1,
      array_kFieldTrialConfig_form_factors_14,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_4,
      4,
      array_kFieldTrialConfig_enable_features_13,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Enabled_60000_dialogV1_2022-04-18",
      array_kFieldTrialConfig_platforms_15,
      1,
      array_kFieldTrialConfig_form_factors_15,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_5,
      3,
      array_kFieldTrialConfig_enable_features_14,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_12[] = {
      "InstallableAmbientBadgeMessage",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_13[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_13[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_11[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_13,
      1,
      array_kFieldTrialConfig_form_factors_13,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_12,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_11[] = {
      "PhotoPickerVideoSupport",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_3[] = {
      {
        "animate_thumbnails",
        "false",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_12[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_12[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_10[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_12,
      1,
      array_kFieldTrialConfig_form_factors_12,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_3,
      1,
      array_kFieldTrialConfig_enable_features_11,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_10[] = {
      "ChromeSurveyNextAndroid",
      "MessagesForAndroidChromeSurvey",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_2[] = {
      {
        "max-number",
        "100",
      },
      {
        "site-id",
        "78FakAwAN0tK1KeaPYj0PoiAHrrQ",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_11[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_11[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_9[] = {
    {
      "EnabledWithMessages_20210831",
      array_kFieldTrialConfig_platforms_11,
      1,
      array_kFieldTrialConfig_form_factors_11,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_2,
      2,
      array_kFieldTrialConfig_enable_features_10,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_9[] = {
      "FixedUmaSessionResumeOrder",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_10[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_10[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_8[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_10,
      1,
      array_kFieldTrialConfig_form_factors_10,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_9,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_8[] = {
      "Adpf",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_1[] = {
      {
        "AdpfTargetDurationMs",
        "9",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_9[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_9[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_7[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_9,
      2,
      array_kFieldTrialConfig_form_factors_9,
      0,
      absl::nullopt,
      "12.0.0",
      array_kFieldTrialConfig_params_1,
      1,
      array_kFieldTrialConfig_enable_features_8,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_7[] = {
      "ContextualSearchForceCaption",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_8[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_8[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_6[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_8,
      1,
      array_kFieldTrialConfig_form_factors_8,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_7,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_6[] = {
      "BulkTabRestore",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_7[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_7[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_5[] = {
    {
      "Enabled_20220518",
      array_kFieldTrialConfig_platforms_7,
      1,
      array_kFieldTrialConfig_form_factors_7,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_6,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_5[] = {
      "BackGestureRefactorAndroid",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params_0[] = {
      {
        "system_back",
        "false",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_6[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_6[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features_4[] = {
      "BackGestureRefactorAndroid",
};
const FieldTrialTestingExperimentParams array_kFieldTrialConfig_params[] = {
      {
        "system_back",
        "true",
      },
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_5[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_5[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_4[] = {
    {
      "EnabledWithSystemBack_2022_07_20",
      array_kFieldTrialConfig_platforms_5,
      1,
      array_kFieldTrialConfig_form_factors_5,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params,
      1,
      array_kFieldTrialConfig_enable_features_4,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "EnabledWithoutSystemBack_2022_07_20",
      array_kFieldTrialConfig_platforms_6,
      1,
      array_kFieldTrialConfig_form_factors_6,
      0,
      absl::nullopt,
      NULL,
      array_kFieldTrialConfig_params_0,
      1,
      array_kFieldTrialConfig_enable_features_5,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_3[] = {
      "AnchorElementInteraction",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_4[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_4[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_3[] = {
    {
      "Enabled_20220428",
      array_kFieldTrialConfig_platforms_4,
      1,
      array_kFieldTrialConfig_form_factors_4,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_3,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_2[] = {
      "AllowSyncOffForChildAccounts",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_3[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_3[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_2[] = {
    {
      "Enabled_448423144",
      array_kFieldTrialConfig_platforms_3,
      1,
      array_kFieldTrialConfig_form_factors_3,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_2,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_1[] = {
      "AllowHistoryDeletionForChildAccounts",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_2[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_2[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_1[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_2,
      1,
      array_kFieldTrialConfig_form_factors_2,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_1,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_enable_features_0[] = {
      "AlignWakeUps",
      "ExplicitHighResolutionTimerWin",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_1[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_1[] = {
      Study::PLATFORM_ANDROID,
      Study::PLATFORM_ANDROID_WEBLAYER,
      Study::PLATFORM_ANDROID_WEBVIEW,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments_0[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms_1,
      3,
      array_kFieldTrialConfig_form_factors_1,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features_0,
      2,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
};
const char* const array_kFieldTrialConfig_disable_features[] = {
      "ActivateMetricsReportingEnabledPolicyAndroid",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors_0[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms_0[] = {
      Study::PLATFORM_ANDROID,
};
const char* const array_kFieldTrialConfig_enable_features[] = {
      "ActivateMetricsReportingEnabledPolicyAndroid",
};
const Study::FormFactor array_kFieldTrialConfig_form_factors[] = {
};
const Study::Platform array_kFieldTrialConfig_platforms[] = {
      Study::PLATFORM_ANDROID,
};
const FieldTrialTestingExperiment array_kFieldTrialConfig_experiments[] = {
    {
      "Enabled",
      array_kFieldTrialConfig_platforms,
      1,
      array_kFieldTrialConfig_form_factors,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      array_kFieldTrialConfig_enable_features,
      1,
      NULL,
      0,
      NULL,
      NULL,
      0,
    },
    {
      "Control",
      array_kFieldTrialConfig_platforms_0,
      1,
      array_kFieldTrialConfig_form_factors_0,
      0,
      absl::nullopt,
      NULL,
      NULL,
      0,
      NULL,
      0,
      array_kFieldTrialConfig_disable_features,
      1,
      NULL,
      NULL,
      0,
    },
};
const FieldTrialTestingStudy array_kFieldTrialConfig_studies[] = {
  {
    "ActivateMetricsReportingEnabledPolicyAndroid",
    array_kFieldTrialConfig_experiments,
    2,
  },
  {
    "AlignWakeUps",
    array_kFieldTrialConfig_experiments_0,
    1,
  },
  {
    "AllowHistoryDeletionForChildAccounts",
    array_kFieldTrialConfig_experiments_1,
    1,
  },
  {
    "AllowSyncOffForChildAccounts",
    array_kFieldTrialConfig_experiments_2,
    1,
  },
  {
    "AnchorElementInteractionPreloader",
    array_kFieldTrialConfig_experiments_3,
    1,
  },
  {
    "AndroidBackPressRefactor",
    array_kFieldTrialConfig_experiments_4,
    2,
  },
  {
    "AndroidBulkTabRestore",
    array_kFieldTrialConfig_experiments_5,
    1,
  },
  {
    "AndroidContextualSearchForceCaption",
    array_kFieldTrialConfig_experiments_6,
    1,
  },
  {
    "AndroidDynamicPerformanceFramework",
    array_kFieldTrialConfig_experiments_7,
    1,
  },
  {
    "AndroidFixedUmaSessionResumeOrder",
    array_kFieldTrialConfig_experiments_8,
    1,
  },
  {
    "AndroidHatsNext",
    array_kFieldTrialConfig_experiments_9,
    1,
  },
  {
    "AndroidMediaPickerVideoSupport",
    array_kFieldTrialConfig_experiments_10,
    1,
  },
  {
    "AndroidMessagesPWAInstall",
    array_kFieldTrialConfig_experiments_11,
    1,
  },
  {
    "AndroidMessagesSaveCard",
    array_kFieldTrialConfig_experiments_12,
    2,
  },
  {
    "AndroidMostRecentTabOnBackgroundCloseTab",
    array_kFieldTrialConfig_experiments_13,
    1,
  },
  {
    "AndroidPermissionsCache",
    array_kFieldTrialConfig_experiments_14,
    1,
  },
  {
    "AndroidPhotoPickerComparison",
    array_kFieldTrialConfig_experiments_15,
    1,
  },
  {
    "AndroidScrollOptimizations",
    array_kFieldTrialConfig_experiments_16,
    1,
  },
  {
    "AndroidSearchEnginePromoV2",
    array_kFieldTrialConfig_experiments_17,
    1,
  },
  {
    "AndroidSystemTracing",
    array_kFieldTrialConfig_experiments_18,
    1,
  },
  {
    "AndroidTNotifications",
    array_kFieldTrialConfig_experiments_19,
    2,
  },
  {
    "AppCloseRefreshClankStudy",
    array_kFieldTrialConfig_experiments_20,
    2,
  },
  {
    "AssistantVoiceSearch",
    array_kFieldTrialConfig_experiments_21,
    1,
  },
  {
    "AsyncGpuLatencyReporting",
    array_kFieldTrialConfig_experiments_22,
    1,
  },
  {
    "AutoDisableAccessibility",
    array_kFieldTrialConfig_experiments_23,
    1,
  },
  {
    "AutofillAcrossIframes",
    array_kFieldTrialConfig_experiments_24,
    1,
  },
  {
    "AutofillAssistantCupVerification",
    array_kFieldTrialConfig_experiments_25,
    1,
  },
  {
    "AutofillAssistantInCCTTriggering",
    array_kFieldTrialConfig_experiments_26,
    1,
  },
  {
    "AutofillConsiderVariationCountryCodeForPhoneNumbers",
    array_kFieldTrialConfig_experiments_27,
    1,
  },
  {
    "AutofillEnableAugmentedPhoneCountryCode",
    array_kFieldTrialConfig_experiments_28,
    1,
  },
  {
    "AutofillEnableAugmentedPhoneCountryCodeOnWebView",
    array_kFieldTrialConfig_experiments_29,
    1,
  },
  {
    "AutofillEnableExtendedAddressFormats",
    array_kFieldTrialConfig_experiments_30,
    1,
  },
  {
    "AutofillEnableLabelPrecedenceForTurkishAddresses",
    array_kFieldTrialConfig_experiments_31,
    1,
  },
  {
    "AutofillEnableMultiStepImports",
    array_kFieldTrialConfig_experiments_32,
    2,
  },
  {
    "AutofillEnableNameSurenameParsing",
    array_kFieldTrialConfig_experiments_33,
    1,
  },
  {
    "AutofillEnableProfileDeduplication",
    array_kFieldTrialConfig_experiments_34,
    1,
  },
  {
    "AutofillEnableSendingBcnInGetUploadDetails",
    array_kFieldTrialConfig_experiments_35,
    1,
  },
  {
    "AutofillEnableSupportForParsingWithSharedLabels",
    array_kFieldTrialConfig_experiments_36,
    1,
  },
  {
    "AutofillEnforceDelaysInStrikeDatabase",
    array_kFieldTrialConfig_experiments_37,
    1,
  },
  {
    "AutofillFillAndImportFromMoreFields",
    array_kFieldTrialConfig_experiments_38,
    1,
  },
  {
    "AutofillFillCreditCardAsPerFormatString",
    array_kFieldTrialConfig_experiments_39,
    1,
  },
  {
    "AutofillKeyboardAccessory",
    array_kFieldTrialConfig_experiments_40,
    1,
  },
  {
    "AutofillLabelAffixRemoval",
    array_kFieldTrialConfig_experiments_41,
    1,
  },
  {
    "AutofillParseMerchantPromoCodeFields",
    array_kFieldTrialConfig_experiments_42,
    1,
  },
  {
    "AutofillPreventOverridingPrefilledFieldValue",
    array_kFieldTrialConfig_experiments_43,
    1,
  },
  {
    "AutofillProfileImportFromUnfocusableFields",
    array_kFieldTrialConfig_experiments_44,
    1,
  },
  {
    "AutofillRationalizeStreetAddressAndAddressLine",
    array_kFieldTrialConfig_experiments_45,
    1,
  },
  {
    "AutofillRefillModifiedCreditCardExpirationDates",
    array_kFieldTrialConfig_experiments_46,
    1,
  },
  {
    "AutofillRemoveInaccessibleProfileValues",
    array_kFieldTrialConfig_experiments_47,
    1,
  },
  {
    "AutofillRemoveInvalidPhoneNumberOnImport",
    array_kFieldTrialConfig_experiments_48,
    1,
  },
  {
    "AutofillRetrieveOverallPredictionsFromCache",
    array_kFieldTrialConfig_experiments_49,
    1,
  },
  {
    "AutofillSectionUponRedundantNameInfo",
    array_kFieldTrialConfig_experiments_50,
    1,
  },
  {
    "AutofillServerTypeTakesPrecedence",
    array_kFieldTrialConfig_experiments_51,
    1,
  },
  {
    "AutofillServerTypeTakesPrecedenceOnWebView",
    array_kFieldTrialConfig_experiments_52,
    1,
  },
  {
    "AutofillShadowDOM",
    array_kFieldTrialConfig_experiments_53,
    1,
  },
  {
    "AutofillUpstream",
    array_kFieldTrialConfig_experiments_54,
    1,
  },
  {
    "AutofillUpstreamAllowAdditionalEmailDomains",
    array_kFieldTrialConfig_experiments_55,
    1,
  },
  {
    "AutomaticLazyFrameLoading",
    array_kFieldTrialConfig_experiments_56,
    4,
  },
  {
    "AvoidUnnecessaryBeforeUnloadCheckSync",
    array_kFieldTrialConfig_experiments_57,
    1,
  },
  {
    "BackForwardCache",
    array_kFieldTrialConfig_experiments_58,
    1,
  },
  {
    "BackForwardCacheAppBanner",
    array_kFieldTrialConfig_experiments_59,
    1,
  },
  {
    "BackForwardCacheDedicatedWorker",
    array_kFieldTrialConfig_experiments_60,
    1,
  },
  {
    "BackForwardCacheEnabledForNonPluginEmbed",
    array_kFieldTrialConfig_experiments_61,
    1,
  },
  {
    "BackForwardCacheExtendTimeToLive",
    array_kFieldTrialConfig_experiments_62,
    1,
  },
  {
    "BackForwardCacheMemoryControls",
    array_kFieldTrialConfig_experiments_63,
    5,
  },
  {
    "BackForwardCache_NoMemoryLimit_Trial",
    array_kFieldTrialConfig_experiments_64,
    1,
  },
  {
    "BatchFetchRequests",
    array_kFieldTrialConfig_experiments_65,
    1,
  },
  {
    "BatchImageDecoding",
    array_kFieldTrialConfig_experiments_66,
    1,
  },
  {
    "BatchSimpleURLLoader",
    array_kFieldTrialConfig_experiments_67,
    2,
  },
  {
    "BiometricAuthPwdFillAndroid",
    array_kFieldTrialConfig_experiments_68,
    1,
  },
  {
    "BlinkSchedulerPrioritizeRenderingAfterInput",
    array_kFieldTrialConfig_experiments_69,
    1,
  },
  {
    "BreakupLongOmniboxTasks",
    array_kFieldTrialConfig_experiments_70,
    1,
  },
  {
    "CCTNewDownloadTab",
    array_kFieldTrialConfig_experiments_71,
    1,
  },
  {
    "CPSS",
    array_kFieldTrialConfig_experiments_72,
    1,
  },
  {
    "CacheCodeOnIdle",
    array_kFieldTrialConfig_experiments_73,
    2,
  },
  {
    "CacheInlineScriptCode",
    array_kFieldTrialConfig_experiments_74,
    1,
  },
  {
    "CacheSiteIsolationMemoryThreshold",
    array_kFieldTrialConfig_experiments_75,
    1,
  },
  {
    "CacheTransparency",
    array_kFieldTrialConfig_experiments_76,
    2,
  },
  {
    "CanvasOutOfProcessRasterization",
    array_kFieldTrialConfig_experiments_77,
    1,
  },
  {
    "CctClientDataHeader",
    array_kFieldTrialConfig_experiments_78,
    1,
  },
  {
    "ChromeManagementPageAndroid",
    array_kFieldTrialConfig_experiments_79,
    1,
  },
  {
    "ChromeStart",
    array_kFieldTrialConfig_experiments_80,
    2,
  },
  {
    "ClankAppFlowsLoggingStudy",
    array_kFieldTrialConfig_experiments_81,
    1,
  },
  {
    "ClankAppLanguagePrompt",
    array_kFieldTrialConfig_experiments_82,
    1,
  },
  {
    "Collections",
    array_kFieldTrialConfig_experiments_83,
    13,
  },
  {
    "CommerceHintAndroid",
    array_kFieldTrialConfig_experiments_84,
    1,
  },
  {
    "CommerceMerchantViewer",
    array_kFieldTrialConfig_experiments_85,
    1,
  },
  {
    "CompositeBGColorAnimationExp4",
    array_kFieldTrialConfig_experiments_86,
    1,
  },
  {
    "ContentCaptureExperiment",
    array_kFieldTrialConfig_experiments_87,
    1,
  },
  {
    "ContentLanguagesInLanguagePicker",
    array_kFieldTrialConfig_experiments_88,
    2,
  },
  {
    "ContextMenuGoogleLensChip",
    array_kFieldTrialConfig_experiments_89,
    1,
  },
  {
    "ContextualTriggers",
    array_kFieldTrialConfig_experiments_90,
    1,
  },
  {
    "CreateSafebrowsingOnStartup",
    array_kFieldTrialConfig_experiments_91,
    1,
  },
  {
    "CriticalPersistedTabDataV2",
    array_kFieldTrialConfig_experiments_92,
    1,
  },
  {
    "CustomTabSessionRecording",
    array_kFieldTrialConfig_experiments_93,
    1,
  },
  {
    "DecodeScriptSourceOffThread",
    array_kFieldTrialConfig_experiments_94,
    1,
  },
  {
    "DefaultPassthroughCommandDecoder",
    array_kFieldTrialConfig_experiments_95,
    1,
  },
  {
    "DelayFirstParkingOfStrings",
    array_kFieldTrialConfig_experiments_96,
    1,
  },
  {
    "DelayFirstWorkerWake",
    array_kFieldTrialConfig_experiments_97,
    1,
  },
  {
    "DelayToolbarUpdateOnLoadStarted",
    array_kFieldTrialConfig_experiments_98,
    1,
  },
  {
    "DeprioritizeTimersUntilDOMContentLoadedExperiment",
    array_kFieldTrialConfig_experiments_99,
    1,
  },
  {
    "DesktopOmniboxPostAutocompletion",
    array_kFieldTrialConfig_experiments_100,
    1,
  },
  {
    "DexFixer",
    array_kFieldTrialConfig_experiments_101,
    1,
  },
  {
    "DifferentWorkQueueCapacities",
    array_kFieldTrialConfig_experiments_102,
    1,
  },
  {
    "DisableCompositedProgressBar",
    array_kFieldTrialConfig_experiments_103,
    1,
  },
  {
    "DisableIPH",
    array_kFieldTrialConfig_experiments_104,
    1,
  },
  {
    "DisableResourceScheduler",
    array_kFieldTrialConfig_experiments_105,
    1,
  },
  {
    "DiscardableMemoryExperiments",
    array_kFieldTrialConfig_experiments_106,
    1,
  },
  {
    "DnsHttpsSvcbSchemeUpgrade",
    array_kFieldTrialConfig_experiments_107,
    1,
  },
  {
    "DnsOverHttpsCox",
    array_kFieldTrialConfig_experiments_108,
    1,
  },
  {
    "DnsOverHttpsUi",
    array_kFieldTrialConfig_experiments_109,
    1,
  },
  {
    "DownloadLater",
    array_kFieldTrialConfig_experiments_110,
    2,
  },
  {
    "DownloadRange",
    array_kFieldTrialConfig_experiments_111,
    1,
  },
  {
    "DragAndDropAndroid",
    array_kFieldTrialConfig_experiments_112,
    1,
  },
  {
    "EarlyExitOnNoopClassOrStyleChange",
    array_kFieldTrialConfig_experiments_113,
    1,
  },
  {
    "ElementSuperRareData",
    array_kFieldTrialConfig_experiments_114,
    1,
  },
  {
    "EnableCbdSignOut",
    array_kFieldTrialConfig_experiments_115,
    1,
  },
  {
    "EnableSsePathForCopyLCharsX86",
    array_kFieldTrialConfig_experiments_116,
    1,
  },
  {
    "EstablishGpuChannelAsync",
    array_kFieldTrialConfig_experiments_117,
    1,
  },
  {
    "ExploreSitesDense",
    array_kFieldTrialConfig_experiments_118,
    1,
  },
  {
    "FeatureNotificationGuide",
    array_kFieldTrialConfig_experiments_119,
    1,
  },
  {
    "FeedLoadingPlaceholderStudy",
    array_kFieldTrialConfig_experiments_120,
    1,
  },
  {
    "FeedPositionAndroid",
    array_kFieldTrialConfig_experiments_121,
    3,
  },
  {
    "FeedPullToRefreshIph",
    array_kFieldTrialConfig_experiments_122,
    1,
  },
  {
    "FillingAcrossAffiliatedWebsites",
    array_kFieldTrialConfig_experiments_123,
    1,
  },
  {
    "FirstPartySetsInitLatencyExperiment",
    array_kFieldTrialConfig_experiments_124,
    1,
  },
  {
    "ForceGpuMainThreadToNormalPriorityDrDc",
    array_kFieldTrialConfig_experiments_125,
    1,
  },
  {
    "GMSCoreEmoji",
    array_kFieldTrialConfig_experiments_126,
    1,
  },
  {
    "GoogleOnContent",
    array_kFieldTrialConfig_experiments_127,
    1,
  },
  {
    "GreedyWakeupsStrategy",
    array_kFieldTrialConfig_experiments_128,
    1,
  },
  {
    "GridAndGroupAndroidM5",
    array_kFieldTrialConfig_experiments_129,
    1,
  },
  {
    "GridTabSwitcherTablet",
    array_kFieldTrialConfig_experiments_130,
    3,
  },
  {
    "GroupAutoCreationAndroid",
    array_kFieldTrialConfig_experiments_131,
    1,
  },
  {
    "HTMLParamElementUrlSupport",
    array_kFieldTrialConfig_experiments_132,
    1,
  },
  {
    "HTTP2",
    array_kFieldTrialConfig_experiments_133,
    1,
  },
  {
    "HoldbackRemoveMobileViewportDoubleTap",
    array_kFieldTrialConfig_experiments_134,
    1,
  },
  {
    "IdentifiabilityStudy",
    array_kFieldTrialConfig_experiments_135,
    1,
  },
  {
    "IgnoreSyncEncryptionKeysLongMissing",
    array_kFieldTrialConfig_experiments_136,
    1,
  },
  {
    "ImageControllerWaitOnlyForRunningTask",
    array_kFieldTrialConfig_experiments_137,
    1,
  },
  {
    "InMemoryCache",
    array_kFieldTrialConfig_experiments_138,
    1,
  },
  {
    "IncludeBackgroundSVGInLCP",
    array_kFieldTrialConfig_experiments_139,
    1,
  },
  {
    "IncludeInitiallyInvisibleImagesInLCP",
    array_kFieldTrialConfig_experiments_140,
    1,
  },
  {
    "IncognitoNtpRevamp",
    array_kFieldTrialConfig_experiments_141,
    1,
  },
  {
    "IncognitoParamFilterExperimentv3",
    array_kFieldTrialConfig_experiments_142,
    1,
  },
  {
    "IncreasedCmdBufferParseSlice",
    array_kFieldTrialConfig_experiments_143,
    1,
  },
  {
    "InitialNavigationEntry",
    array_kFieldTrialConfig_experiments_144,
    1,
  },
  {
    "IsVoiceSearchEnabledCache",
    array_kFieldTrialConfig_experiments_145,
    1,
  },
  {
    "KeyboardAccessoryAddressIPH",
    array_kFieldTrialConfig_experiments_146,
    1,
  },
  {
    "KeyboardAccessoryPasswordIPH",
    array_kFieldTrialConfig_experiments_147,
    1,
  },
  {
    "KeyboardAccessoryPaymentIPH",
    array_kFieldTrialConfig_experiments_148,
    1,
  },
  {
    "KeyboardAccessoryPaymentOffer",
    array_kFieldTrialConfig_experiments_149,
    1,
  },
  {
    "KeyboardAccessorySwipingIPH",
    array_kFieldTrialConfig_experiments_150,
    1,
  },
  {
    "LeakDetectionUnauthenticated",
    array_kFieldTrialConfig_experiments_151,
    1,
  },
  {
    "LeakSkiaEventTracerAtExit",
    array_kFieldTrialConfig_experiments_152,
    1,
  },
  {
    "LightweightReactions",
    array_kFieldTrialConfig_experiments_153,
    2,
  },
  {
    "LiteralBufferCreateStringWithEncoding",
    array_kFieldTrialConfig_experiments_154,
    1,
  },
  {
    "MaxUnthrottledTimeoutNestingLevel",
    array_kFieldTrialConfig_experiments_155,
    1,
  },
  {
    "MessagePumpEpoll",
    array_kFieldTrialConfig_experiments_156,
    1,
  },
  {
    "MojoInlineMessagePayloads",
    array_kFieldTrialConfig_experiments_157,
    1,
  },
  {
    "NewSigninRequestHeaderCheckOrder",
    array_kFieldTrialConfig_experiments_158,
    1,
  },
  {
    "NoWakeUpsForCanceledTasks",
    array_kFieldTrialConfig_experiments_159,
    1,
  },
  {
    "OffsetParentNewSpecBehaviorKillswitch",
    array_kFieldTrialConfig_experiments_160,
    1,
  },
  {
    "OmniboxBundledExperimentV1",
    array_kFieldTrialConfig_experiments_161,
    1,
  },
  {
    "OmniboxLoggingMigration",
    array_kFieldTrialConfig_experiments_162,
    1,
  },
  {
    "OmniboxPrerender",
    array_kFieldTrialConfig_experiments_163,
    5,
  },
  {
    "OnDemandAT",
    array_kFieldTrialConfig_experiments_164,
    1,
  },
  {
    "OptimizeDataUrls",
    array_kFieldTrialConfig_experiments_165,
    1,
  },
  {
    "OptimizeGeolocationHeaderGeneration",
    array_kFieldTrialConfig_experiments_166,
    1,
  },
  {
    "OptimizeLayoutsForPullRefresh",
    array_kFieldTrialConfig_experiments_167,
    1,
  },
  {
    "OptimizeNetworkBuffers2",
    array_kFieldTrialConfig_experiments_168,
    1,
  },
  {
    "OptionalToolbarButton",
    array_kFieldTrialConfig_experiments_169,
    1,
  },
  {
    "OverlayPrioritizationExtended",
    array_kFieldTrialConfig_experiments_170,
    1,
  },
  {
    "PageInfoAboutThisSiteMoreInfo",
    array_kFieldTrialConfig_experiments_171,
    1,
  },
  {
    "PageInfoDiscoverabilityTimeout",
    array_kFieldTrialConfig_experiments_172,
    1,
  },
  {
    "PageInfoHistory",
    array_kFieldTrialConfig_experiments_173,
    1,
  },
  {
    "PageInfoIPH",
    array_kFieldTrialConfig_experiments_174,
    1,
  },
  {
    "PaintHoldingCrossOrigin",
    array_kFieldTrialConfig_experiments_175,
    1,
  },
  {
    "PaintPreviewShowOnStartup",
    array_kFieldTrialConfig_experiments_176,
    1,
  },
  {
    "ParkableImages",
    array_kFieldTrialConfig_experiments_177,
    1,
  },
  {
    "PartialCustomTabs3rdPartyPolicy",
    array_kFieldTrialConfig_experiments_178,
    1,
  },
  {
    "PartitionAllocBackupRefPtr",
    array_kFieldTrialConfig_experiments_179,
    1,
  },
  {
    "PartitionAllocLargeThreadCacheSizeAndroid",
    array_kFieldTrialConfig_experiments_180,
    1,
  },
  {
    "PartitionAllocSortActiveSlotSpans",
    array_kFieldTrialConfig_experiments_181,
    1,
  },
  {
    "PartitionNetworkStateByDoubleKey",
    array_kFieldTrialConfig_experiments_182,
    2,
  },
  {
    "PartitionedCookies",
    array_kFieldTrialConfig_experiments_183,
    1,
  },
  {
    "PasswordChangeAndroid",
    array_kFieldTrialConfig_experiments_184,
    1,
  },
  {
    "PasswordsCapabilitiesFetching",
    array_kFieldTrialConfig_experiments_185,
    1,
  },
  {
    "Path2DPaintCache",
    array_kFieldTrialConfig_experiments_186,
    1,
  },
  {
    "PercentDroppedFramesSlidingWindow",
    array_kFieldTrialConfig_experiments_187,
    6,
  },
  {
    "PlatformHEVCDecoderSupport",
    array_kFieldTrialConfig_experiments_188,
    1,
  },
  {
    "PrecompileInlineScripts",
    array_kFieldTrialConfig_experiments_189,
    1,
  },
  {
    "PrefetchFontLookupTables",
    array_kFieldTrialConfig_experiments_190,
    1,
  },
  {
    "PreloadCookies",
    array_kFieldTrialConfig_experiments_191,
    1,
  },
  {
    "PriceDropNtpIPH",
    array_kFieldTrialConfig_experiments_192,
    1,
  },
  {
    "PrivacyBudgetClockSkewMetrics",
    array_kFieldTrialConfig_experiments_193,
    2,
  },
  {
    "PrivacyPreservingPrefetchProxy",
    array_kFieldTrialConfig_experiments_194,
    1,
  },
  {
    "PrivacySandboxV3",
    array_kFieldTrialConfig_experiments_195,
    1,
  },
  {
    "PurgeRendererMemoryWhenBackgrounded",
    array_kFieldTrialConfig_experiments_196,
    1,
  },
  {
    "PushMessagingDisallowSenderIDs",
    array_kFieldTrialConfig_experiments_197,
    1,
  },
  {
    "QUIC",
    array_kFieldTrialConfig_experiments_198,
    1,
  },
  {
    "QueryTiles",
    array_kFieldTrialConfig_experiments_199,
    2,
  },
  {
    "RawDrawAndDrDc",
    array_kFieldTrialConfig_experiments_200,
    1,
  },
  {
    "ReadLaterReminderNotification",
    array_kFieldTrialConfig_experiments_201,
    1,
  },
  {
    "ReadWritePasswordNotesBackupField",
    array_kFieldTrialConfig_experiments_202,
    1,
  },
  {
    "ReduceOpsTaskSplitting",
    array_kFieldTrialConfig_experiments_203,
    1,
  },
  {
    "ReduceUserAgentMinorVersionStudy",
    array_kFieldTrialConfig_experiments_204,
    1,
  },
  {
    "ReduceUserAgentPlatformOsCpu",
    array_kFieldTrialConfig_experiments_205,
    1,
  },
  {
    "RelatedSearches",
    array_kFieldTrialConfig_experiments_206,
    1,
  },
  {
    "RemoveCanceledTasksInTaskQueue2",
    array_kFieldTrialConfig_experiments_207,
    1,
  },
  {
    "ReportCertificateErrors",
    array_kFieldTrialConfig_experiments_208,
    1,
  },
  {
    "ReportFCPOnlyOnSuccessfulCommit",
    array_kFieldTrialConfig_experiments_209,
    1,
  },
  {
    "RevokeNotificationsPermissionIfDisabledOnAppLevel",
    array_kFieldTrialConfig_experiments_210,
    1,
  },
  {
    "SafeBrowsingCSDAndroid",
    array_kFieldTrialConfig_experiments_211,
    1,
  },
  {
    "SafeBrowsingCsbrrWithToken",
    array_kFieldTrialConfig_experiments_212,
    1,
  },
  {
    "SafeBrowsingDelayedWarnings",
    array_kFieldTrialConfig_experiments_213,
    1,
  },
  {
    "ScrollUnification",
    array_kFieldTrialConfig_experiments_214,
    1,
  },
  {
    "SearchResumptionModuleAndroid",
    array_kFieldTrialConfig_experiments_215,
    1,
  },
  {
    "SegmentationStructuredMetrics",
    array_kFieldTrialConfig_experiments_216,
    1,
  },
  {
    "SendTabToSelfV2",
    array_kFieldTrialConfig_experiments_217,
    1,
  },
  {
    "ServiceWorkerStorageControl",
    array_kFieldTrialConfig_experiments_218,
    1,
  },
  {
    "ShareButtonInTopToolbar",
    array_kFieldTrialConfig_experiments_219,
    1,
  },
  {
    "ShareCrowButton",
    array_kFieldTrialConfig_experiments_220,
    1,
  },
  {
    "SharedHighlightingIphClank",
    array_kFieldTrialConfig_experiments_221,
    1,
  },
  {
    "SharedHighlightingRefinedBlocklist",
    array_kFieldTrialConfig_experiments_222,
    1,
  },
  {
    "SharedHighlightingTimeout",
    array_kFieldTrialConfig_experiments_223,
    1,
  },
  {
    "ShowScrollableMVTOnNTPAndroid",
    array_kFieldTrialConfig_experiments_224,
    1,
  },
  {
    "SmallerFontCache",
    array_kFieldTrialConfig_experiments_225,
    1,
  },
  {
    "SnoozeIPH",
    array_kFieldTrialConfig_experiments_226,
    1,
  },
  {
    "SplitCacheByNetworkIsolationKey",
    array_kFieldTrialConfig_experiments_227,
    1,
  },
  {
    "SplitCompositorTask",
    array_kFieldTrialConfig_experiments_228,
    1,
  },
  {
    "SubstringSetTreeForAttributeBuckets",
    array_kFieldTrialConfig_experiments_229,
    1,
  },
  {
    "SuggestionAnswerColorReverse",
    array_kFieldTrialConfig_experiments_230,
    1,
  },
  {
    "SuppressToolbarCaptures",
    array_kFieldTrialConfig_experiments_231,
    1,
  },
  {
    "SurfaceSyncThrottlingRelaunch",
    array_kFieldTrialConfig_experiments_232,
    1,
  },
  {
    "SyncAndroidPromosRevamp",
    array_kFieldTrialConfig_experiments_233,
    1,
  },
  {
    "SyncTrustedVaultPassphraseOptInUI",
    array_kFieldTrialConfig_experiments_234,
    1,
  },
  {
    "SynthesizePageLoadOnlyOnInitialMainDocumentAccess",
    array_kFieldTrialConfig_experiments_235,
    1,
  },
  {
    "TabStripImprovements",
    array_kFieldTrialConfig_experiments_236,
    1,
  },
  {
    "TailoredSecurityIntegrationAndroid",
    array_kFieldTrialConfig_experiments_237,
    1,
  },
  {
    "ThreadedPreloadScanner",
    array_kFieldTrialConfig_experiments_238,
    1,
  },
  {
    "ThreadingOptimizationsOnIO",
    array_kFieldTrialConfig_experiments_239,
    1,
  },
  {
    "TimedHTMLParserBudget",
    array_kFieldTrialConfig_experiments_240,
    1,
  },
  {
    "ToolbarPhoneOptimizations",
    array_kFieldTrialConfig_experiments_241,
    1,
  },
  {
    "TouchToFillPasswordSubmissionStudy",
    array_kFieldTrialConfig_experiments_242,
    1,
  },
  {
    "TrustTokenOriginTrial",
    array_kFieldTrialConfig_experiments_243,
    1,
  },
  {
    "UMA-NonUniformity-Trial-1-Percent",
    array_kFieldTrialConfig_experiments_244,
    1,
  },
  {
    "UMA-Pseudo-Metrics-Effect-Injection-25-Percent",
    array_kFieldTrialConfig_experiments_245,
    1,
  },
  {
    "UnifiedPasswordManagerAndroid",
    array_kFieldTrialConfig_experiments_246,
    1,
  },
  {
    "UseGetrandomForRandBytes",
    array_kFieldTrialConfig_experiments_247,
    1,
  },
  {
    "UseHtmlAttributeNameLookup",
    array_kFieldTrialConfig_experiments_248,
    1,
  },
  {
    "UseSyncInvalidations",
    array_kFieldTrialConfig_experiments_249,
    1,
  },
  {
    "UserAgentOverrideExperiment",
    array_kFieldTrialConfig_experiments_250,
    1,
  },
  {
    "UserMediaCaptureOnFocus",
    array_kFieldTrialConfig_experiments_251,
    1,
  },
  {
    "V8ConcurrentSparkplugAndroid",
    array_kFieldTrialConfig_experiments_252,
    5,
  },
  {
    "V8CrashOnEvacuationFailure",
    array_kFieldTrialConfig_experiments_253,
    2,
  },
  {
    "V8FlushBaselineCode",
    array_kFieldTrialConfig_experiments_254,
    2,
  },
  {
    "V8MapSpaceCompaction",
    array_kFieldTrialConfig_experiments_255,
    3,
  },
  {
    "V8ScriptAblation",
    array_kFieldTrialConfig_experiments_256,
    2,
  },
  {
    "V8SlowHistograms",
    array_kFieldTrialConfig_experiments_257,
    2,
  },
  {
    "V8Sparkplug-Android",
    array_kFieldTrialConfig_experiments_258,
    3,
  },
  {
    "V8VirtualMemoryCageAndroid",
    array_kFieldTrialConfig_experiments_259,
    1,
  },
  {
    "VerifyDidCommitParams",
    array_kFieldTrialConfig_experiments_260,
    3,
  },
  {
    "VideoTutorials",
    array_kFieldTrialConfig_experiments_261,
    1,
  },
  {
    "VisualFeaturesInCsppPings",
    array_kFieldTrialConfig_experiments_262,
    1,
  },
  {
    "Vulkan",
    array_kFieldTrialConfig_experiments_263,
    1,
  },
  {
    "WebApkServiceWorkerRemovalStudy",
    array_kFieldTrialConfig_experiments_264,
    2,
  },
  {
    "WebFeedsMVP",
    array_kFieldTrialConfig_experiments_265,
    1,
  },
  {
    "WebOtpBackendAuto",
    array_kFieldTrialConfig_experiments_266,
    1,
  },
  {
    "WebRTC-Audio-NetEqDecisionLogicConfig",
    array_kFieldTrialConfig_experiments_267,
    1,
  },
  {
    "WebRTC-Audio-OpusAvoidNoisePumpingDuringDtx",
    array_kFieldTrialConfig_experiments_268,
    1,
  },
  {
    "WebRTC-Bwe-ReceiverLimitCapsOnly",
    array_kFieldTrialConfig_experiments_269,
    1,
  },
  {
    "WebRTC-Dav1dDecoder",
    array_kFieldTrialConfig_experiments_270,
    1,
  },
  {
    "WebRTC-FrameBuffer3",
    array_kFieldTrialConfig_experiments_271,
    1,
  },
  {
    "WebRTC-PreStreamDecoders",
    array_kFieldTrialConfig_experiments_272,
    1,
  },
  {
    "WebRTC-SlackedTaskQueuePacedSender",
    array_kFieldTrialConfig_experiments_273,
    1,
  },
  {
    "WebRTC-VP8ConferenceTemporalLayers",
    array_kFieldTrialConfig_experiments_274,
    1,
  },
  {
    "WebRTC-Vp9ExternalRefCtrl",
    array_kFieldTrialConfig_experiments_275,
    1,
  },
  {
    "WebRTC-ZeroPlayoutDelay",
    array_kFieldTrialConfig_experiments_276,
    1,
  },
  {
    "WebUICodeCache",
    array_kFieldTrialConfig_experiments_277,
    2,
  },
  {
    "WebViewMeasureScreenCoverage",
    array_kFieldTrialConfig_experiments_278,
    1,
  },
  {
    "WebViewOriginTrials",
    array_kFieldTrialConfig_experiments_279,
    1,
  },
  {
    "WebViewRecordAppDataDirectorySize",
    array_kFieldTrialConfig_experiments_280,
    1,
  },
  {
    "WebViewSurfaceControl",
    array_kFieldTrialConfig_experiments_281,
    1,
  },
  {
    "WebViewThreadSafeMedia",
    array_kFieldTrialConfig_experiments_282,
    1,
  },
  {
    "WebViewUseMetricsUploadService",
    array_kFieldTrialConfig_experiments_283,
    1,
  },
};
const FieldTrialTestingConfig kFieldTrialConfig = {
  array_kFieldTrialConfig_studies,
  285,
};

}  // namespace variations
