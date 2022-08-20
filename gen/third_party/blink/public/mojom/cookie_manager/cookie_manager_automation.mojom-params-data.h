// third_party/blink/public/mojom/cookie_manager/cookie_manager_automation.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_MANAGER_COOKIE_MANAGER_AUTOMATION_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_MANAGER_COOKIE_MANAGER_AUTOMATION_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace blink {
namespace test {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CookieManagerAutomation_DeleteAllCookies_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<CookieManagerAutomation_DeleteAllCookies_Params_Data>;

  CookieManagerAutomation_DeleteAllCookies_Params_Data();
  ~CookieManagerAutomation_DeleteAllCookies_Params_Data() = delete;
};
static_assert(sizeof(CookieManagerAutomation_DeleteAllCookies_Params_Data) == 8,
              "Bad sizeof(CookieManagerAutomation_DeleteAllCookies_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) CookieManagerAutomation_DeleteAllCookies_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<CookieManagerAutomation_DeleteAllCookies_ResponseParams_Data>;

  CookieManagerAutomation_DeleteAllCookies_ResponseParams_Data();
  ~CookieManagerAutomation_DeleteAllCookies_ResponseParams_Data() = delete;
};
static_assert(sizeof(CookieManagerAutomation_DeleteAllCookies_ResponseParams_Data) == 8,
              "Bad sizeof(CookieManagerAutomation_DeleteAllCookies_ResponseParams_Data)");

}  // namespace internal


class CookieManagerAutomation_DeleteAllCookies_ParamsDataView {
 public:
  CookieManagerAutomation_DeleteAllCookies_ParamsDataView() = default;

  CookieManagerAutomation_DeleteAllCookies_ParamsDataView(
      internal::CookieManagerAutomation_DeleteAllCookies_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CookieManagerAutomation_DeleteAllCookies_Params_Data* data_ = nullptr;
};



class CookieManagerAutomation_DeleteAllCookies_ResponseParamsDataView {
 public:
  CookieManagerAutomation_DeleteAllCookies_ResponseParamsDataView() = default;

  CookieManagerAutomation_DeleteAllCookies_ResponseParamsDataView(
      internal::CookieManagerAutomation_DeleteAllCookies_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::CookieManagerAutomation_DeleteAllCookies_ResponseParams_Data* data_ = nullptr;
};





}  // namespace mojom
}  // namespace test
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_COOKIE_MANAGER_COOKIE_MANAGER_AUTOMATION_MOJOM_PARAMS_DATA_H_