// components/autofill/content/common/mojom/autofill_driver.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CONTENT_COMMON_MOJOM_AUTOFILL_DRIVER_MOJOM_TEST_UTILS_H_
#define COMPONENTS_AUTOFILL_CONTENT_COMMON_MOJOM_AUTOFILL_DRIVER_MOJOM_TEST_UTILS_H_

#include "components/autofill/content/common/mojom/autofill_driver.mojom.h"


namespace autofill {
namespace mojom {


class  AutofillDriverInterceptorForTesting : public AutofillDriver {
  virtual AutofillDriver* GetForwardingInterface() = 0;
  void SetFormToBeProbablySubmitted(const absl::optional<::autofill::FormData>& form) override;
  void FormsSeen(const std::vector<::autofill::FormData>& updated_forms, const std::vector<::autofill::FormRendererId>& removed_forms) override;
  void FormSubmitted(const ::autofill::FormData& form, bool known_success, ::autofill::mojom::SubmissionSource source) override;
  void TextFieldDidChange(const ::autofill::FormData& form, const ::autofill::FormFieldData& field, const ::gfx::RectF& bounding_box, ::base::TimeTicks timestamp) override;
  void TextFieldDidScroll(const ::autofill::FormData& form, const ::autofill::FormFieldData& field, const ::gfx::RectF& bounding_box) override;
  void SelectControlDidChange(const ::autofill::FormData& form, const ::autofill::FormFieldData& field, const ::gfx::RectF& bounding_box) override;
  void SelectFieldOptionsDidChange(const ::autofill::FormData& form) override;
  void AskForValuesToFill(const ::autofill::FormData& form, const ::autofill::FormFieldData& field, const ::gfx::RectF& bounding_box, int32_t query_id, bool autoselect_first_suggestion, ::autofill::TouchToFillEligible touch_to_fill_eligible) override;
  void HidePopup() override;
  void FocusNoLongerOnForm(bool had_interacted_form) override;
  void FocusOnFormField(const ::autofill::FormData& form, const ::autofill::FormFieldData& field, const ::gfx::RectF& bounding_box) override;
  void DidFillAutofillFormData(const ::autofill::FormData& form, ::base::TimeTicks timestamp) override;
  void DidPreviewAutofillFormData() override;
  void DidEndTextFieldEditing() override;
  void JavaScriptChangedAutofilledValue(const ::autofill::FormData& form, const ::autofill::FormFieldData& field, const ::std::u16string& old_value) override;
};
class  AutofillDriverAsyncWaiter {
 public:
  explicit AutofillDriverAsyncWaiter(AutofillDriver* proxy);

  AutofillDriverAsyncWaiter(const AutofillDriverAsyncWaiter&) = delete;
  AutofillDriverAsyncWaiter& operator=(const AutofillDriverAsyncWaiter&) = delete;

  ~AutofillDriverAsyncWaiter();

 private:
  AutofillDriver* const proxy_;
};


class  PasswordManagerDriverInterceptorForTesting : public PasswordManagerDriver {
  virtual PasswordManagerDriver* GetForwardingInterface() = 0;
  void PasswordFormsParsed(const std::vector<::autofill::FormData>& forms_data) override;
  void PasswordFormsRendered(const std::vector<::autofill::FormData>& visible_forms_data) override;
  void PasswordFormSubmitted(const ::autofill::FormData& form_data) override;
  void InformAboutUserInput(const ::autofill::FormData& form_data) override;
  void DynamicFormSubmission(::autofill::mojom::SubmissionIndicatorEvent submission_indication_event) override;
  void PasswordFormCleared(const ::autofill::FormData& form_data) override;
  void RecordSavePasswordProgress(const std::string& log) override;
  void UserModifiedPasswordField() override;
  void UserModifiedNonPasswordField(::autofill::FieldRendererId renderer_id, const ::std::u16string& field_name, const ::std::u16string& value) override;
  void ShowPasswordSuggestions(::base::i18n::TextDirection text_direction, const ::std::u16string& typed_username, int32_t options, const ::gfx::RectF& bounds) override;
  void ShowTouchToFill(::autofill::mojom::SubmissionReadinessState submission_readiness) override;
  void CheckSafeBrowsingReputation(const ::GURL& form_action, const ::GURL& frame_url) override;
  void FocusedInputChanged(::autofill::FieldRendererId focused_field_id, ::autofill::mojom::FocusedFieldType focused_field_type) override;
  void LogFirstFillingResult(::autofill::FormRendererId form_renderer_id, int32_t result) override;
};
class  PasswordManagerDriverAsyncWaiter {
 public:
  explicit PasswordManagerDriverAsyncWaiter(PasswordManagerDriver* proxy);

  PasswordManagerDriverAsyncWaiter(const PasswordManagerDriverAsyncWaiter&) = delete;
  PasswordManagerDriverAsyncWaiter& operator=(const PasswordManagerDriverAsyncWaiter&) = delete;

  ~PasswordManagerDriverAsyncWaiter();

 private:
  PasswordManagerDriver* const proxy_;
};


class  PasswordGenerationDriverInterceptorForTesting : public PasswordGenerationDriver {
  virtual PasswordGenerationDriver* GetForwardingInterface() = 0;
  void AutomaticGenerationAvailable(const ::autofill::password_generation::PasswordGenerationUIData& password_generation_ui_data) override;
  void ShowPasswordEditingPopup(const ::gfx::RectF& bounds, const ::autofill::FormData& form_data, ::autofill::FieldRendererId field_renderer_id, const ::std::u16string& password_value) override;
  void PasswordGenerationRejectedByTyping() override;
  void PresaveGeneratedPassword(const ::autofill::FormData& form_data, const ::std::u16string& password_value) override;
  void PasswordNoLongerGenerated(const ::autofill::FormData& form_data) override;
  void FrameWasScrolled() override;
  void GenerationElementLostFocus() override;
};
class  PasswordGenerationDriverAsyncWaiter {
 public:
  explicit PasswordGenerationDriverAsyncWaiter(PasswordGenerationDriver* proxy);

  PasswordGenerationDriverAsyncWaiter(const PasswordGenerationDriverAsyncWaiter&) = delete;
  PasswordGenerationDriverAsyncWaiter& operator=(const PasswordGenerationDriverAsyncWaiter&) = delete;

  ~PasswordGenerationDriverAsyncWaiter();

 private:
  PasswordGenerationDriver* const proxy_;
};




}  // namespace mojom
}  // namespace autofill

#endif  // COMPONENTS_AUTOFILL_CONTENT_COMMON_MOJOM_AUTOFILL_DRIVER_MOJOM_TEST_UTILS_H_