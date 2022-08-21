// chrome/browser/ui/webui/internals/user_education/user_education_internals.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_INTERNALS_USER_EDUCATION_USER_EDUCATION_INTERNALS_MOJOM_PARAMS_DATA_H_
#define CHROME_BROWSER_UI_WEBUI_INTERNALS_USER_EDUCATION_USER_EDUCATION_INTERNALS_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace mojom {
namespace user_education_internals {
namespace internal {

class ValidationContext;
class  UserEducationInternalsPageHandler_GetTutorials_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<UserEducationInternalsPageHandler_GetTutorials_Params_Data>;

  UserEducationInternalsPageHandler_GetTutorials_Params_Data();
  ~UserEducationInternalsPageHandler_GetTutorials_Params_Data() = delete;
};
static_assert(sizeof(UserEducationInternalsPageHandler_GetTutorials_Params_Data) == 8,
              "Bad sizeof(UserEducationInternalsPageHandler_GetTutorials_Params_Data)");
class  UserEducationInternalsPageHandler_GetTutorials_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> tutorial_ids;

 private:
  friend class mojo::internal::MessageFragment<UserEducationInternalsPageHandler_GetTutorials_ResponseParams_Data>;

  UserEducationInternalsPageHandler_GetTutorials_ResponseParams_Data();
  ~UserEducationInternalsPageHandler_GetTutorials_ResponseParams_Data() = delete;
};
static_assert(sizeof(UserEducationInternalsPageHandler_GetTutorials_ResponseParams_Data) == 16,
              "Bad sizeof(UserEducationInternalsPageHandler_GetTutorials_ResponseParams_Data)");
class  UserEducationInternalsPageHandler_StartTutorial_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> tutorial_id;

 private:
  friend class mojo::internal::MessageFragment<UserEducationInternalsPageHandler_StartTutorial_Params_Data>;

  UserEducationInternalsPageHandler_StartTutorial_Params_Data();
  ~UserEducationInternalsPageHandler_StartTutorial_Params_Data() = delete;
};
static_assert(sizeof(UserEducationInternalsPageHandler_StartTutorial_Params_Data) == 16,
              "Bad sizeof(UserEducationInternalsPageHandler_StartTutorial_Params_Data)");
class  UserEducationInternalsPageHandler_GetFeaturePromos_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<UserEducationInternalsPageHandler_GetFeaturePromos_Params_Data>;

  UserEducationInternalsPageHandler_GetFeaturePromos_Params_Data();
  ~UserEducationInternalsPageHandler_GetFeaturePromos_Params_Data() = delete;
};
static_assert(sizeof(UserEducationInternalsPageHandler_GetFeaturePromos_Params_Data) == 8,
              "Bad sizeof(UserEducationInternalsPageHandler_GetFeaturePromos_Params_Data)");
class  UserEducationInternalsPageHandler_GetFeaturePromos_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::FeaturePromoDemoPageInfo_Data>>> feature_promos;

 private:
  friend class mojo::internal::MessageFragment<UserEducationInternalsPageHandler_GetFeaturePromos_ResponseParams_Data>;

  UserEducationInternalsPageHandler_GetFeaturePromos_ResponseParams_Data();
  ~UserEducationInternalsPageHandler_GetFeaturePromos_ResponseParams_Data() = delete;
};
static_assert(sizeof(UserEducationInternalsPageHandler_GetFeaturePromos_ResponseParams_Data) == 16,
              "Bad sizeof(UserEducationInternalsPageHandler_GetFeaturePromos_ResponseParams_Data)");
class  UserEducationInternalsPageHandler_ShowFeaturePromo_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> title;

 private:
  friend class mojo::internal::MessageFragment<UserEducationInternalsPageHandler_ShowFeaturePromo_Params_Data>;

  UserEducationInternalsPageHandler_ShowFeaturePromo_Params_Data();
  ~UserEducationInternalsPageHandler_ShowFeaturePromo_Params_Data() = delete;
};
static_assert(sizeof(UserEducationInternalsPageHandler_ShowFeaturePromo_Params_Data) == 16,
              "Bad sizeof(UserEducationInternalsPageHandler_ShowFeaturePromo_Params_Data)");
class  UserEducationInternalsPageHandler_ShowFeaturePromo_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  friend class mojo::internal::MessageFragment<UserEducationInternalsPageHandler_ShowFeaturePromo_ResponseParams_Data>;

  UserEducationInternalsPageHandler_ShowFeaturePromo_ResponseParams_Data();
  ~UserEducationInternalsPageHandler_ShowFeaturePromo_ResponseParams_Data() = delete;
};
static_assert(sizeof(UserEducationInternalsPageHandler_ShowFeaturePromo_ResponseParams_Data) == 16,
              "Bad sizeof(UserEducationInternalsPageHandler_ShowFeaturePromo_ResponseParams_Data)");

}  // namespace internal


class UserEducationInternalsPageHandler_GetTutorials_ParamsDataView {
 public:
  UserEducationInternalsPageHandler_GetTutorials_ParamsDataView() = default;

  UserEducationInternalsPageHandler_GetTutorials_ParamsDataView(
      internal::UserEducationInternalsPageHandler_GetTutorials_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UserEducationInternalsPageHandler_GetTutorials_Params_Data* data_ = nullptr;
};



class UserEducationInternalsPageHandler_GetTutorials_ResponseParamsDataView {
 public:
  UserEducationInternalsPageHandler_GetTutorials_ResponseParamsDataView() = default;

  UserEducationInternalsPageHandler_GetTutorials_ResponseParamsDataView(
      internal::UserEducationInternalsPageHandler_GetTutorials_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTutorialIdsDataView(
      mojo::ArrayDataView<mojo::StringDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadTutorialIds(UserType* output) {
    
    auto* pointer = data_->tutorial_ids.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<mojo::StringDataView>>(
        pointer, output, message_);
  }
 private:
  internal::UserEducationInternalsPageHandler_GetTutorials_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class UserEducationInternalsPageHandler_StartTutorial_ParamsDataView {
 public:
  UserEducationInternalsPageHandler_StartTutorial_ParamsDataView() = default;

  UserEducationInternalsPageHandler_StartTutorial_ParamsDataView(
      internal::UserEducationInternalsPageHandler_StartTutorial_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTutorialIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadTutorialId(UserType* output) {
    
    auto* pointer = data_->tutorial_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::UserEducationInternalsPageHandler_StartTutorial_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class UserEducationInternalsPageHandler_GetFeaturePromos_ParamsDataView {
 public:
  UserEducationInternalsPageHandler_GetFeaturePromos_ParamsDataView() = default;

  UserEducationInternalsPageHandler_GetFeaturePromos_ParamsDataView(
      internal::UserEducationInternalsPageHandler_GetFeaturePromos_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::UserEducationInternalsPageHandler_GetFeaturePromos_Params_Data* data_ = nullptr;
};



class UserEducationInternalsPageHandler_GetFeaturePromos_ResponseParamsDataView {
 public:
  UserEducationInternalsPageHandler_GetFeaturePromos_ResponseParamsDataView() = default;

  UserEducationInternalsPageHandler_GetFeaturePromos_ResponseParamsDataView(
      internal::UserEducationInternalsPageHandler_GetFeaturePromos_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetFeaturePromosDataView(
      mojo::ArrayDataView<FeaturePromoDemoPageInfoDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadFeaturePromos(UserType* output) {
    
    auto* pointer = data_->feature_promos.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::mojom::user_education_internals::FeaturePromoDemoPageInfoDataView>>(
        pointer, output, message_);
  }
 private:
  internal::UserEducationInternalsPageHandler_GetFeaturePromos_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class UserEducationInternalsPageHandler_ShowFeaturePromo_ParamsDataView {
 public:
  UserEducationInternalsPageHandler_ShowFeaturePromo_ParamsDataView() = default;

  UserEducationInternalsPageHandler_ShowFeaturePromo_ParamsDataView(
      internal::UserEducationInternalsPageHandler_ShowFeaturePromo_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadTitle(UserType* output) {
    
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::UserEducationInternalsPageHandler_ShowFeaturePromo_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class UserEducationInternalsPageHandler_ShowFeaturePromo_ResponseParamsDataView {
 public:
  UserEducationInternalsPageHandler_ShowFeaturePromo_ResponseParamsDataView() = default;

  UserEducationInternalsPageHandler_ShowFeaturePromo_ResponseParamsDataView(
      internal::UserEducationInternalsPageHandler_ShowFeaturePromo_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadErrorMessage(UserType* output) {
    
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::UserEducationInternalsPageHandler_ShowFeaturePromo_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};




inline void UserEducationInternalsPageHandler_GetTutorials_ResponseParamsDataView::GetTutorialIdsDataView(
    mojo::ArrayDataView<mojo::StringDataView>* output) {
  auto pointer = data_->tutorial_ids.Get();
  *output = mojo::ArrayDataView<mojo::StringDataView>(pointer, message_);
}


inline void UserEducationInternalsPageHandler_StartTutorial_ParamsDataView::GetTutorialIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->tutorial_id.Get();
  *output = mojo::StringDataView(pointer, message_);
}




inline void UserEducationInternalsPageHandler_GetFeaturePromos_ResponseParamsDataView::GetFeaturePromosDataView(
    mojo::ArrayDataView<FeaturePromoDemoPageInfoDataView>* output) {
  auto pointer = data_->feature_promos.Get();
  *output = mojo::ArrayDataView<FeaturePromoDemoPageInfoDataView>(pointer, message_);
}


inline void UserEducationInternalsPageHandler_ShowFeaturePromo_ParamsDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void UserEducationInternalsPageHandler_ShowFeaturePromo_ResponseParamsDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, message_);
}

}  // namespace user_education_internals
}  // namespace mojom

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // CHROME_BROWSER_UI_WEBUI_INTERNALS_USER_EDUCATION_USER_EDUCATION_INTERNALS_MOJOM_PARAMS_DATA_H_