// components/autofill/core/common/mojom/autofill_types.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_AUTOFILL_CORE_COMMON_MOJOM_AUTOFILL_TYPES_MOJOM_FORWARD_H_
#define COMPONENTS_AUTOFILL_CORE_COMMON_MOJOM_AUTOFILL_TYPES_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"




#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"






namespace autofill {
namespace mojom {
class FrameTokenDataView;

class FrameTokenWithPredecessorDataView;

class FormRendererIdDataView;

class FieldRendererIdDataView;

class SelectOptionDataView;

class SectionAutocompleteDataView;

class SectionFieldIdentifierDataView;

class SectionDataView;

class FormFieldDataDataView;

class ButtonTitleInfoDataView;

class FormDataDataView;

class FormFieldDataPredictionsDataView;

class FormDataPredictionsDataView;

class PasswordAndMetadataDataView;

class PasswordFormFillDataDataView;

class PasswordFormGenerationDataDataView;

class PasswordGenerationUIDataDataView;

class ParsingResultDataView;

class TouchToFillEligibleDataView;

class SectionPrefixDataView;

enum class SubmissionIndicatorEvent : int32_t;

enum class SubmissionSource : int32_t;

enum class FocusedFieldType : int32_t;

enum class ButtonTitleType : int32_t;

enum class SubmissionReadinessState : int32_t;

enum class AutofillState : int32_t;

enum class RendererFormDataAction : int32_t;

enum class FormFieldData_CheckStatus : int32_t;

enum class FormFieldData_RoleAttribute : int32_t;

enum class FormFieldData_LabelSource : int32_t;
class FrameToken;
using FrameTokenPtr = mojo::StructPtr<FrameToken>;

class FrameTokenWithPredecessor;
using FrameTokenWithPredecessorPtr = mojo::StructPtr<FrameTokenWithPredecessor>;

class FormRendererId;
using FormRendererIdPtr = mojo::InlinedStructPtr<FormRendererId>;

class FieldRendererId;
using FieldRendererIdPtr = mojo::InlinedStructPtr<FieldRendererId>;

class SelectOption;
using SelectOptionPtr = mojo::StructPtr<SelectOption>;

class SectionAutocomplete;
using SectionAutocompletePtr = mojo::InlinedStructPtr<SectionAutocomplete>;

class SectionFieldIdentifier;
using SectionFieldIdentifierPtr = mojo::StructPtr<SectionFieldIdentifier>;

class Section;
using SectionPtr = mojo::StructPtr<Section>;

class FormFieldData;
using FormFieldDataPtr = mojo::StructPtr<FormFieldData>;

class ButtonTitleInfo;
using ButtonTitleInfoPtr = mojo::StructPtr<ButtonTitleInfo>;

class FormData;
using FormDataPtr = mojo::StructPtr<FormData>;

class FormFieldDataPredictions;
using FormFieldDataPredictionsPtr = mojo::StructPtr<FormFieldDataPredictions>;

class FormDataPredictions;
using FormDataPredictionsPtr = mojo::StructPtr<FormDataPredictions>;

class PasswordAndMetadata;
using PasswordAndMetadataPtr = mojo::StructPtr<PasswordAndMetadata>;

class PasswordFormFillData;
using PasswordFormFillDataPtr = mojo::StructPtr<PasswordFormFillData>;

class PasswordFormGenerationData;
using PasswordFormGenerationDataPtr = mojo::StructPtr<PasswordFormGenerationData>;

class PasswordGenerationUIData;
using PasswordGenerationUIDataPtr = mojo::StructPtr<PasswordGenerationUIData>;

class ParsingResult;
using ParsingResultPtr = mojo::StructPtr<ParsingResult>;

class TouchToFillEligible;
using TouchToFillEligiblePtr = mojo::InlinedStructPtr<TouchToFillEligible>;

class SectionPrefix;

using SectionPrefixPtr = mojo::StructPtr<SectionPrefix>;




}  // namespace mojom
}  // namespace autofill

#endif  // COMPONENTS_AUTOFILL_CORE_COMMON_MOJOM_AUTOFILL_TYPES_MOJOM_FORWARD_H_