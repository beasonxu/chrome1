// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/types_input.h"

#include "base/memory/ptr_util.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_input.h"

namespace autofill_assistant {

namespace internal {

template <typename T>
std::unique_ptr<base::Value> ToValue(const T& value) {
  return ToValueImpl(value, static_cast<T*>(nullptr));
}

}  // namespace internal

namespace input {

std::unique_ptr<TouchPoint> TouchPoint::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("TouchPoint");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<TouchPoint> result(new TouchPoint());
  errors->Push();
  errors->SetName("TouchPoint");
  const base::Value* x_value = value.FindKey("x");
  if (x_value) {
    errors->SetName("x");
    result->x_ = internal::FromValue<double>::Parse(*x_value, errors);
  } else {
    errors->AddError("required property missing: x");
  }
  const base::Value* y_value = value.FindKey("y");
  if (y_value) {
    errors->SetName("y");
    result->y_ = internal::FromValue<double>::Parse(*y_value, errors);
  } else {
    errors->AddError("required property missing: y");
  }
  const base::Value* radiusx_value = value.FindKey("radiusX");
  if (radiusx_value) {
    errors->SetName("radiusX");
    result->radiusx_ = internal::FromValue<double>::Parse(*radiusx_value, errors);
  }
  const base::Value* radiusy_value = value.FindKey("radiusY");
  if (radiusy_value) {
    errors->SetName("radiusY");
    result->radiusy_ = internal::FromValue<double>::Parse(*radiusy_value, errors);
  }
  const base::Value* rotation_angle_value = value.FindKey("rotationAngle");
  if (rotation_angle_value) {
    errors->SetName("rotationAngle");
    result->rotation_angle_ = internal::FromValue<double>::Parse(*rotation_angle_value, errors);
  }
  const base::Value* force_value = value.FindKey("force");
  if (force_value) {
    errors->SetName("force");
    result->force_ = internal::FromValue<double>::Parse(*force_value, errors);
  }
  const base::Value* tangential_pressure_value = value.FindKey("tangentialPressure");
  if (tangential_pressure_value) {
    errors->SetName("tangentialPressure");
    result->tangential_pressure_ = internal::FromValue<double>::Parse(*tangential_pressure_value, errors);
  }
  const base::Value* tiltx_value = value.FindKey("tiltX");
  if (tiltx_value) {
    errors->SetName("tiltX");
    result->tiltx_ = internal::FromValue<int>::Parse(*tiltx_value, errors);
  }
  const base::Value* tilty_value = value.FindKey("tiltY");
  if (tilty_value) {
    errors->SetName("tiltY");
    result->tilty_ = internal::FromValue<int>::Parse(*tilty_value, errors);
  }
  const base::Value* twist_value = value.FindKey("twist");
  if (twist_value) {
    errors->SetName("twist");
    result->twist_ = internal::FromValue<int>::Parse(*twist_value, errors);
  }
  const base::Value* id_value = value.FindKey("id");
  if (id_value) {
    errors->SetName("id");
    result->id_ = internal::FromValue<double>::Parse(*id_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> TouchPoint::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("x", internal::ToValue(x_));
  result->Set("y", internal::ToValue(y_));
  if (radiusx_)
    result->Set("radiusX", internal::ToValue(radiusx_.value()));
  if (radiusy_)
    result->Set("radiusY", internal::ToValue(radiusy_.value()));
  if (rotation_angle_)
    result->Set("rotationAngle", internal::ToValue(rotation_angle_.value()));
  if (force_)
    result->Set("force", internal::ToValue(force_.value()));
  if (tangential_pressure_)
    result->Set("tangentialPressure", internal::ToValue(tangential_pressure_.value()));
  if (tiltx_)
    result->Set("tiltX", internal::ToValue(tiltx_.value()));
  if (tilty_)
    result->Set("tiltY", internal::ToValue(tilty_.value()));
  if (twist_)
    result->Set("twist", internal::ToValue(twist_.value()));
  if (id_)
    result->Set("id", internal::ToValue(id_.value()));
  return std::move(result);
}

std::unique_ptr<TouchPoint> TouchPoint::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<TouchPoint> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DragDataItem> DragDataItem::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DragDataItem");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DragDataItem> result(new DragDataItem());
  errors->Push();
  errors->SetName("DragDataItem");
  const base::Value* mime_type_value = value.FindKey("mimeType");
  if (mime_type_value) {
    errors->SetName("mimeType");
    result->mime_type_ = internal::FromValue<std::string>::Parse(*mime_type_value, errors);
  } else {
    errors->AddError("required property missing: mimeType");
  }
  const base::Value* data_value = value.FindKey("data");
  if (data_value) {
    errors->SetName("data");
    result->data_ = internal::FromValue<std::string>::Parse(*data_value, errors);
  } else {
    errors->AddError("required property missing: data");
  }
  const base::Value* title_value = value.FindKey("title");
  if (title_value) {
    errors->SetName("title");
    result->title_ = internal::FromValue<std::string>::Parse(*title_value, errors);
  }
  const base::Value* baseurl_value = value.FindKey("baseURL");
  if (baseurl_value) {
    errors->SetName("baseURL");
    result->baseurl_ = internal::FromValue<std::string>::Parse(*baseurl_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DragDataItem::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("mimeType", internal::ToValue(mime_type_));
  result->Set("data", internal::ToValue(data_));
  if (title_)
    result->Set("title", internal::ToValue(title_.value()));
  if (baseurl_)
    result->Set("baseURL", internal::ToValue(baseurl_.value()));
  return std::move(result);
}

std::unique_ptr<DragDataItem> DragDataItem::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DragDataItem> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DragData> DragData::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DragData");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DragData> result(new DragData());
  errors->Push();
  errors->SetName("DragData");
  const base::Value* items_value = value.FindKey("items");
  if (items_value) {
    errors->SetName("items");
    result->items_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::input::DragDataItem>>>::Parse(*items_value, errors);
  } else {
    errors->AddError("required property missing: items");
  }
  const base::Value* files_value = value.FindKey("files");
  if (files_value) {
    errors->SetName("files");
    result->files_ = internal::FromValue<std::vector<std::string>>::Parse(*files_value, errors);
  }
  const base::Value* drag_operations_mask_value = value.FindKey("dragOperationsMask");
  if (drag_operations_mask_value) {
    errors->SetName("dragOperationsMask");
    result->drag_operations_mask_ = internal::FromValue<int>::Parse(*drag_operations_mask_value, errors);
  } else {
    errors->AddError("required property missing: dragOperationsMask");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DragData::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("items", internal::ToValue(items_));
  if (files_)
    result->Set("files", internal::ToValue(files_.value()));
  result->Set("dragOperationsMask", internal::ToValue(drag_operations_mask_));
  return std::move(result);
}

std::unique_ptr<DragData> DragData::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DragData> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DispatchDragEventParams> DispatchDragEventParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DispatchDragEventParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DispatchDragEventParams> result(new DispatchDragEventParams());
  errors->Push();
  errors->SetName("DispatchDragEventParams");
  const base::Value* type_value = value.FindKey("type");
  if (type_value) {
    errors->SetName("type");
    result->type_ = internal::FromValue<::autofill_assistant::input::DispatchDragEventType>::Parse(*type_value, errors);
  } else {
    errors->AddError("required property missing: type");
  }
  const base::Value* x_value = value.FindKey("x");
  if (x_value) {
    errors->SetName("x");
    result->x_ = internal::FromValue<double>::Parse(*x_value, errors);
  } else {
    errors->AddError("required property missing: x");
  }
  const base::Value* y_value = value.FindKey("y");
  if (y_value) {
    errors->SetName("y");
    result->y_ = internal::FromValue<double>::Parse(*y_value, errors);
  } else {
    errors->AddError("required property missing: y");
  }
  const base::Value* data_value = value.FindKey("data");
  if (data_value) {
    errors->SetName("data");
    result->data_ = internal::FromValue<::autofill_assistant::input::DragData>::Parse(*data_value, errors);
  } else {
    errors->AddError("required property missing: data");
  }
  const base::Value* modifiers_value = value.FindKey("modifiers");
  if (modifiers_value) {
    errors->SetName("modifiers");
    result->modifiers_ = internal::FromValue<int>::Parse(*modifiers_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DispatchDragEventParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("type", internal::ToValue(type_));
  result->Set("x", internal::ToValue(x_));
  result->Set("y", internal::ToValue(y_));
  result->Set("data", internal::ToValue(*data_));
  if (modifiers_)
    result->Set("modifiers", internal::ToValue(modifiers_.value()));
  return std::move(result);
}

std::unique_ptr<DispatchDragEventParams> DispatchDragEventParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DispatchDragEventParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DispatchDragEventResult> DispatchDragEventResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DispatchDragEventResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DispatchDragEventResult> result(new DispatchDragEventResult());
  errors->Push();
  errors->SetName("DispatchDragEventResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DispatchDragEventResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<DispatchDragEventResult> DispatchDragEventResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DispatchDragEventResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DispatchKeyEventParams> DispatchKeyEventParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DispatchKeyEventParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DispatchKeyEventParams> result(new DispatchKeyEventParams());
  errors->Push();
  errors->SetName("DispatchKeyEventParams");
  const base::Value* type_value = value.FindKey("type");
  if (type_value) {
    errors->SetName("type");
    result->type_ = internal::FromValue<::autofill_assistant::input::DispatchKeyEventType>::Parse(*type_value, errors);
  } else {
    errors->AddError("required property missing: type");
  }
  const base::Value* modifiers_value = value.FindKey("modifiers");
  if (modifiers_value) {
    errors->SetName("modifiers");
    result->modifiers_ = internal::FromValue<int>::Parse(*modifiers_value, errors);
  }
  const base::Value* timestamp_value = value.FindKey("timestamp");
  if (timestamp_value) {
    errors->SetName("timestamp");
    result->timestamp_ = internal::FromValue<double>::Parse(*timestamp_value, errors);
  }
  const base::Value* text_value = value.FindKey("text");
  if (text_value) {
    errors->SetName("text");
    result->text_ = internal::FromValue<std::string>::Parse(*text_value, errors);
  }
  const base::Value* unmodified_text_value = value.FindKey("unmodifiedText");
  if (unmodified_text_value) {
    errors->SetName("unmodifiedText");
    result->unmodified_text_ = internal::FromValue<std::string>::Parse(*unmodified_text_value, errors);
  }
  const base::Value* key_identifier_value = value.FindKey("keyIdentifier");
  if (key_identifier_value) {
    errors->SetName("keyIdentifier");
    result->key_identifier_ = internal::FromValue<std::string>::Parse(*key_identifier_value, errors);
  }
  const base::Value* code_value = value.FindKey("code");
  if (code_value) {
    errors->SetName("code");
    result->code_ = internal::FromValue<std::string>::Parse(*code_value, errors);
  }
  const base::Value* key_value = value.FindKey("key");
  if (key_value) {
    errors->SetName("key");
    result->key_ = internal::FromValue<std::string>::Parse(*key_value, errors);
  }
  const base::Value* windows_virtual_key_code_value = value.FindKey("windowsVirtualKeyCode");
  if (windows_virtual_key_code_value) {
    errors->SetName("windowsVirtualKeyCode");
    result->windows_virtual_key_code_ = internal::FromValue<int>::Parse(*windows_virtual_key_code_value, errors);
  }
  const base::Value* native_virtual_key_code_value = value.FindKey("nativeVirtualKeyCode");
  if (native_virtual_key_code_value) {
    errors->SetName("nativeVirtualKeyCode");
    result->native_virtual_key_code_ = internal::FromValue<int>::Parse(*native_virtual_key_code_value, errors);
  }
  const base::Value* auto_repeat_value = value.FindKey("autoRepeat");
  if (auto_repeat_value) {
    errors->SetName("autoRepeat");
    result->auto_repeat_ = internal::FromValue<bool>::Parse(*auto_repeat_value, errors);
  }
  const base::Value* is_keypad_value = value.FindKey("isKeypad");
  if (is_keypad_value) {
    errors->SetName("isKeypad");
    result->is_keypad_ = internal::FromValue<bool>::Parse(*is_keypad_value, errors);
  }
  const base::Value* is_system_key_value = value.FindKey("isSystemKey");
  if (is_system_key_value) {
    errors->SetName("isSystemKey");
    result->is_system_key_ = internal::FromValue<bool>::Parse(*is_system_key_value, errors);
  }
  const base::Value* location_value = value.FindKey("location");
  if (location_value) {
    errors->SetName("location");
    result->location_ = internal::FromValue<int>::Parse(*location_value, errors);
  }
  const base::Value* commands_value = value.FindKey("commands");
  if (commands_value) {
    errors->SetName("commands");
    result->commands_ = internal::FromValue<std::vector<std::string>>::Parse(*commands_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DispatchKeyEventParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("type", internal::ToValue(type_));
  if (modifiers_)
    result->Set("modifiers", internal::ToValue(modifiers_.value()));
  if (timestamp_)
    result->Set("timestamp", internal::ToValue(timestamp_.value()));
  if (text_)
    result->Set("text", internal::ToValue(text_.value()));
  if (unmodified_text_)
    result->Set("unmodifiedText", internal::ToValue(unmodified_text_.value()));
  if (key_identifier_)
    result->Set("keyIdentifier", internal::ToValue(key_identifier_.value()));
  if (code_)
    result->Set("code", internal::ToValue(code_.value()));
  if (key_)
    result->Set("key", internal::ToValue(key_.value()));
  if (windows_virtual_key_code_)
    result->Set("windowsVirtualKeyCode", internal::ToValue(windows_virtual_key_code_.value()));
  if (native_virtual_key_code_)
    result->Set("nativeVirtualKeyCode", internal::ToValue(native_virtual_key_code_.value()));
  if (auto_repeat_)
    result->Set("autoRepeat", internal::ToValue(auto_repeat_.value()));
  if (is_keypad_)
    result->Set("isKeypad", internal::ToValue(is_keypad_.value()));
  if (is_system_key_)
    result->Set("isSystemKey", internal::ToValue(is_system_key_.value()));
  if (location_)
    result->Set("location", internal::ToValue(location_.value()));
  if (commands_)
    result->Set("commands", internal::ToValue(commands_.value()));
  return std::move(result);
}

std::unique_ptr<DispatchKeyEventParams> DispatchKeyEventParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DispatchKeyEventParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DispatchKeyEventResult> DispatchKeyEventResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DispatchKeyEventResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DispatchKeyEventResult> result(new DispatchKeyEventResult());
  errors->Push();
  errors->SetName("DispatchKeyEventResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DispatchKeyEventResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<DispatchKeyEventResult> DispatchKeyEventResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DispatchKeyEventResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<InsertTextParams> InsertTextParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("InsertTextParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<InsertTextParams> result(new InsertTextParams());
  errors->Push();
  errors->SetName("InsertTextParams");
  const base::Value* text_value = value.FindKey("text");
  if (text_value) {
    errors->SetName("text");
    result->text_ = internal::FromValue<std::string>::Parse(*text_value, errors);
  } else {
    errors->AddError("required property missing: text");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> InsertTextParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("text", internal::ToValue(text_));
  return std::move(result);
}

std::unique_ptr<InsertTextParams> InsertTextParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<InsertTextParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<InsertTextResult> InsertTextResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("InsertTextResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<InsertTextResult> result(new InsertTextResult());
  errors->Push();
  errors->SetName("InsertTextResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> InsertTextResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<InsertTextResult> InsertTextResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<InsertTextResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ImeSetCompositionParams> ImeSetCompositionParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ImeSetCompositionParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ImeSetCompositionParams> result(new ImeSetCompositionParams());
  errors->Push();
  errors->SetName("ImeSetCompositionParams");
  const base::Value* text_value = value.FindKey("text");
  if (text_value) {
    errors->SetName("text");
    result->text_ = internal::FromValue<std::string>::Parse(*text_value, errors);
  } else {
    errors->AddError("required property missing: text");
  }
  const base::Value* selection_start_value = value.FindKey("selectionStart");
  if (selection_start_value) {
    errors->SetName("selectionStart");
    result->selection_start_ = internal::FromValue<int>::Parse(*selection_start_value, errors);
  } else {
    errors->AddError("required property missing: selectionStart");
  }
  const base::Value* selection_end_value = value.FindKey("selectionEnd");
  if (selection_end_value) {
    errors->SetName("selectionEnd");
    result->selection_end_ = internal::FromValue<int>::Parse(*selection_end_value, errors);
  } else {
    errors->AddError("required property missing: selectionEnd");
  }
  const base::Value* replacement_start_value = value.FindKey("replacementStart");
  if (replacement_start_value) {
    errors->SetName("replacementStart");
    result->replacement_start_ = internal::FromValue<int>::Parse(*replacement_start_value, errors);
  }
  const base::Value* replacement_end_value = value.FindKey("replacementEnd");
  if (replacement_end_value) {
    errors->SetName("replacementEnd");
    result->replacement_end_ = internal::FromValue<int>::Parse(*replacement_end_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ImeSetCompositionParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("text", internal::ToValue(text_));
  result->Set("selectionStart", internal::ToValue(selection_start_));
  result->Set("selectionEnd", internal::ToValue(selection_end_));
  if (replacement_start_)
    result->Set("replacementStart", internal::ToValue(replacement_start_.value()));
  if (replacement_end_)
    result->Set("replacementEnd", internal::ToValue(replacement_end_.value()));
  return std::move(result);
}

std::unique_ptr<ImeSetCompositionParams> ImeSetCompositionParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ImeSetCompositionParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<ImeSetCompositionResult> ImeSetCompositionResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("ImeSetCompositionResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<ImeSetCompositionResult> result(new ImeSetCompositionResult());
  errors->Push();
  errors->SetName("ImeSetCompositionResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> ImeSetCompositionResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<ImeSetCompositionResult> ImeSetCompositionResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<ImeSetCompositionResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DispatchMouseEventParams> DispatchMouseEventParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DispatchMouseEventParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DispatchMouseEventParams> result(new DispatchMouseEventParams());
  errors->Push();
  errors->SetName("DispatchMouseEventParams");
  const base::Value* type_value = value.FindKey("type");
  if (type_value) {
    errors->SetName("type");
    result->type_ = internal::FromValue<::autofill_assistant::input::DispatchMouseEventType>::Parse(*type_value, errors);
  } else {
    errors->AddError("required property missing: type");
  }
  const base::Value* x_value = value.FindKey("x");
  if (x_value) {
    errors->SetName("x");
    result->x_ = internal::FromValue<double>::Parse(*x_value, errors);
  } else {
    errors->AddError("required property missing: x");
  }
  const base::Value* y_value = value.FindKey("y");
  if (y_value) {
    errors->SetName("y");
    result->y_ = internal::FromValue<double>::Parse(*y_value, errors);
  } else {
    errors->AddError("required property missing: y");
  }
  const base::Value* modifiers_value = value.FindKey("modifiers");
  if (modifiers_value) {
    errors->SetName("modifiers");
    result->modifiers_ = internal::FromValue<int>::Parse(*modifiers_value, errors);
  }
  const base::Value* timestamp_value = value.FindKey("timestamp");
  if (timestamp_value) {
    errors->SetName("timestamp");
    result->timestamp_ = internal::FromValue<double>::Parse(*timestamp_value, errors);
  }
  const base::Value* button_value = value.FindKey("button");
  if (button_value) {
    errors->SetName("button");
    result->button_ = internal::FromValue<::autofill_assistant::input::MouseButton>::Parse(*button_value, errors);
  }
  const base::Value* buttons_value = value.FindKey("buttons");
  if (buttons_value) {
    errors->SetName("buttons");
    result->buttons_ = internal::FromValue<int>::Parse(*buttons_value, errors);
  }
  const base::Value* click_count_value = value.FindKey("clickCount");
  if (click_count_value) {
    errors->SetName("clickCount");
    result->click_count_ = internal::FromValue<int>::Parse(*click_count_value, errors);
  }
  const base::Value* force_value = value.FindKey("force");
  if (force_value) {
    errors->SetName("force");
    result->force_ = internal::FromValue<double>::Parse(*force_value, errors);
  }
  const base::Value* tangential_pressure_value = value.FindKey("tangentialPressure");
  if (tangential_pressure_value) {
    errors->SetName("tangentialPressure");
    result->tangential_pressure_ = internal::FromValue<double>::Parse(*tangential_pressure_value, errors);
  }
  const base::Value* tiltx_value = value.FindKey("tiltX");
  if (tiltx_value) {
    errors->SetName("tiltX");
    result->tiltx_ = internal::FromValue<int>::Parse(*tiltx_value, errors);
  }
  const base::Value* tilty_value = value.FindKey("tiltY");
  if (tilty_value) {
    errors->SetName("tiltY");
    result->tilty_ = internal::FromValue<int>::Parse(*tilty_value, errors);
  }
  const base::Value* twist_value = value.FindKey("twist");
  if (twist_value) {
    errors->SetName("twist");
    result->twist_ = internal::FromValue<int>::Parse(*twist_value, errors);
  }
  const base::Value* deltax_value = value.FindKey("deltaX");
  if (deltax_value) {
    errors->SetName("deltaX");
    result->deltax_ = internal::FromValue<double>::Parse(*deltax_value, errors);
  }
  const base::Value* deltay_value = value.FindKey("deltaY");
  if (deltay_value) {
    errors->SetName("deltaY");
    result->deltay_ = internal::FromValue<double>::Parse(*deltay_value, errors);
  }
  const base::Value* pointer_type_value = value.FindKey("pointerType");
  if (pointer_type_value) {
    errors->SetName("pointerType");
    result->pointer_type_ = internal::FromValue<::autofill_assistant::input::DispatchMouseEventPointerType>::Parse(*pointer_type_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DispatchMouseEventParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("type", internal::ToValue(type_));
  result->Set("x", internal::ToValue(x_));
  result->Set("y", internal::ToValue(y_));
  if (modifiers_)
    result->Set("modifiers", internal::ToValue(modifiers_.value()));
  if (timestamp_)
    result->Set("timestamp", internal::ToValue(timestamp_.value()));
  if (button_)
    result->Set("button", internal::ToValue(button_.value()));
  if (buttons_)
    result->Set("buttons", internal::ToValue(buttons_.value()));
  if (click_count_)
    result->Set("clickCount", internal::ToValue(click_count_.value()));
  if (force_)
    result->Set("force", internal::ToValue(force_.value()));
  if (tangential_pressure_)
    result->Set("tangentialPressure", internal::ToValue(tangential_pressure_.value()));
  if (tiltx_)
    result->Set("tiltX", internal::ToValue(tiltx_.value()));
  if (tilty_)
    result->Set("tiltY", internal::ToValue(tilty_.value()));
  if (twist_)
    result->Set("twist", internal::ToValue(twist_.value()));
  if (deltax_)
    result->Set("deltaX", internal::ToValue(deltax_.value()));
  if (deltay_)
    result->Set("deltaY", internal::ToValue(deltay_.value()));
  if (pointer_type_)
    result->Set("pointerType", internal::ToValue(pointer_type_.value()));
  return std::move(result);
}

std::unique_ptr<DispatchMouseEventParams> DispatchMouseEventParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DispatchMouseEventParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DispatchMouseEventResult> DispatchMouseEventResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DispatchMouseEventResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DispatchMouseEventResult> result(new DispatchMouseEventResult());
  errors->Push();
  errors->SetName("DispatchMouseEventResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DispatchMouseEventResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<DispatchMouseEventResult> DispatchMouseEventResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DispatchMouseEventResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DispatchTouchEventParams> DispatchTouchEventParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DispatchTouchEventParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DispatchTouchEventParams> result(new DispatchTouchEventParams());
  errors->Push();
  errors->SetName("DispatchTouchEventParams");
  const base::Value* type_value = value.FindKey("type");
  if (type_value) {
    errors->SetName("type");
    result->type_ = internal::FromValue<::autofill_assistant::input::DispatchTouchEventType>::Parse(*type_value, errors);
  } else {
    errors->AddError("required property missing: type");
  }
  const base::Value* touch_points_value = value.FindKey("touchPoints");
  if (touch_points_value) {
    errors->SetName("touchPoints");
    result->touch_points_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::input::TouchPoint>>>::Parse(*touch_points_value, errors);
  } else {
    errors->AddError("required property missing: touchPoints");
  }
  const base::Value* modifiers_value = value.FindKey("modifiers");
  if (modifiers_value) {
    errors->SetName("modifiers");
    result->modifiers_ = internal::FromValue<int>::Parse(*modifiers_value, errors);
  }
  const base::Value* timestamp_value = value.FindKey("timestamp");
  if (timestamp_value) {
    errors->SetName("timestamp");
    result->timestamp_ = internal::FromValue<double>::Parse(*timestamp_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DispatchTouchEventParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("type", internal::ToValue(type_));
  result->Set("touchPoints", internal::ToValue(touch_points_));
  if (modifiers_)
    result->Set("modifiers", internal::ToValue(modifiers_.value()));
  if (timestamp_)
    result->Set("timestamp", internal::ToValue(timestamp_.value()));
  return std::move(result);
}

std::unique_ptr<DispatchTouchEventParams> DispatchTouchEventParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DispatchTouchEventParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DispatchTouchEventResult> DispatchTouchEventResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DispatchTouchEventResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DispatchTouchEventResult> result(new DispatchTouchEventResult());
  errors->Push();
  errors->SetName("DispatchTouchEventResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DispatchTouchEventResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<DispatchTouchEventResult> DispatchTouchEventResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DispatchTouchEventResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<EmulateTouchFromMouseEventParams> EmulateTouchFromMouseEventParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("EmulateTouchFromMouseEventParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<EmulateTouchFromMouseEventParams> result(new EmulateTouchFromMouseEventParams());
  errors->Push();
  errors->SetName("EmulateTouchFromMouseEventParams");
  const base::Value* type_value = value.FindKey("type");
  if (type_value) {
    errors->SetName("type");
    result->type_ = internal::FromValue<::autofill_assistant::input::EmulateTouchFromMouseEventType>::Parse(*type_value, errors);
  } else {
    errors->AddError("required property missing: type");
  }
  const base::Value* x_value = value.FindKey("x");
  if (x_value) {
    errors->SetName("x");
    result->x_ = internal::FromValue<int>::Parse(*x_value, errors);
  } else {
    errors->AddError("required property missing: x");
  }
  const base::Value* y_value = value.FindKey("y");
  if (y_value) {
    errors->SetName("y");
    result->y_ = internal::FromValue<int>::Parse(*y_value, errors);
  } else {
    errors->AddError("required property missing: y");
  }
  const base::Value* button_value = value.FindKey("button");
  if (button_value) {
    errors->SetName("button");
    result->button_ = internal::FromValue<::autofill_assistant::input::MouseButton>::Parse(*button_value, errors);
  } else {
    errors->AddError("required property missing: button");
  }
  const base::Value* timestamp_value = value.FindKey("timestamp");
  if (timestamp_value) {
    errors->SetName("timestamp");
    result->timestamp_ = internal::FromValue<double>::Parse(*timestamp_value, errors);
  }
  const base::Value* deltax_value = value.FindKey("deltaX");
  if (deltax_value) {
    errors->SetName("deltaX");
    result->deltax_ = internal::FromValue<double>::Parse(*deltax_value, errors);
  }
  const base::Value* deltay_value = value.FindKey("deltaY");
  if (deltay_value) {
    errors->SetName("deltaY");
    result->deltay_ = internal::FromValue<double>::Parse(*deltay_value, errors);
  }
  const base::Value* modifiers_value = value.FindKey("modifiers");
  if (modifiers_value) {
    errors->SetName("modifiers");
    result->modifiers_ = internal::FromValue<int>::Parse(*modifiers_value, errors);
  }
  const base::Value* click_count_value = value.FindKey("clickCount");
  if (click_count_value) {
    errors->SetName("clickCount");
    result->click_count_ = internal::FromValue<int>::Parse(*click_count_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> EmulateTouchFromMouseEventParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("type", internal::ToValue(type_));
  result->Set("x", internal::ToValue(x_));
  result->Set("y", internal::ToValue(y_));
  result->Set("button", internal::ToValue(button_));
  if (timestamp_)
    result->Set("timestamp", internal::ToValue(timestamp_.value()));
  if (deltax_)
    result->Set("deltaX", internal::ToValue(deltax_.value()));
  if (deltay_)
    result->Set("deltaY", internal::ToValue(deltay_.value()));
  if (modifiers_)
    result->Set("modifiers", internal::ToValue(modifiers_.value()));
  if (click_count_)
    result->Set("clickCount", internal::ToValue(click_count_.value()));
  return std::move(result);
}

std::unique_ptr<EmulateTouchFromMouseEventParams> EmulateTouchFromMouseEventParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<EmulateTouchFromMouseEventParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<EmulateTouchFromMouseEventResult> EmulateTouchFromMouseEventResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("EmulateTouchFromMouseEventResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<EmulateTouchFromMouseEventResult> result(new EmulateTouchFromMouseEventResult());
  errors->Push();
  errors->SetName("EmulateTouchFromMouseEventResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> EmulateTouchFromMouseEventResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<EmulateTouchFromMouseEventResult> EmulateTouchFromMouseEventResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<EmulateTouchFromMouseEventResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetIgnoreInputEventsParams> SetIgnoreInputEventsParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetIgnoreInputEventsParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetIgnoreInputEventsParams> result(new SetIgnoreInputEventsParams());
  errors->Push();
  errors->SetName("SetIgnoreInputEventsParams");
  const base::Value* ignore_value = value.FindKey("ignore");
  if (ignore_value) {
    errors->SetName("ignore");
    result->ignore_ = internal::FromValue<bool>::Parse(*ignore_value, errors);
  } else {
    errors->AddError("required property missing: ignore");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetIgnoreInputEventsParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("ignore", internal::ToValue(ignore_));
  return std::move(result);
}

std::unique_ptr<SetIgnoreInputEventsParams> SetIgnoreInputEventsParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetIgnoreInputEventsParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetIgnoreInputEventsResult> SetIgnoreInputEventsResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetIgnoreInputEventsResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetIgnoreInputEventsResult> result(new SetIgnoreInputEventsResult());
  errors->Push();
  errors->SetName("SetIgnoreInputEventsResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetIgnoreInputEventsResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetIgnoreInputEventsResult> SetIgnoreInputEventsResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetIgnoreInputEventsResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetInterceptDragsParams> SetInterceptDragsParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetInterceptDragsParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetInterceptDragsParams> result(new SetInterceptDragsParams());
  errors->Push();
  errors->SetName("SetInterceptDragsParams");
  const base::Value* enabled_value = value.FindKey("enabled");
  if (enabled_value) {
    errors->SetName("enabled");
    result->enabled_ = internal::FromValue<bool>::Parse(*enabled_value, errors);
  } else {
    errors->AddError("required property missing: enabled");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetInterceptDragsParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("enabled", internal::ToValue(enabled_));
  return std::move(result);
}

std::unique_ptr<SetInterceptDragsParams> SetInterceptDragsParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetInterceptDragsParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SetInterceptDragsResult> SetInterceptDragsResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SetInterceptDragsResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SetInterceptDragsResult> result(new SetInterceptDragsResult());
  errors->Push();
  errors->SetName("SetInterceptDragsResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SetInterceptDragsResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SetInterceptDragsResult> SetInterceptDragsResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SetInterceptDragsResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SynthesizePinchGestureParams> SynthesizePinchGestureParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SynthesizePinchGestureParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SynthesizePinchGestureParams> result(new SynthesizePinchGestureParams());
  errors->Push();
  errors->SetName("SynthesizePinchGestureParams");
  const base::Value* x_value = value.FindKey("x");
  if (x_value) {
    errors->SetName("x");
    result->x_ = internal::FromValue<double>::Parse(*x_value, errors);
  } else {
    errors->AddError("required property missing: x");
  }
  const base::Value* y_value = value.FindKey("y");
  if (y_value) {
    errors->SetName("y");
    result->y_ = internal::FromValue<double>::Parse(*y_value, errors);
  } else {
    errors->AddError("required property missing: y");
  }
  const base::Value* scale_factor_value = value.FindKey("scaleFactor");
  if (scale_factor_value) {
    errors->SetName("scaleFactor");
    result->scale_factor_ = internal::FromValue<double>::Parse(*scale_factor_value, errors);
  } else {
    errors->AddError("required property missing: scaleFactor");
  }
  const base::Value* relative_speed_value = value.FindKey("relativeSpeed");
  if (relative_speed_value) {
    errors->SetName("relativeSpeed");
    result->relative_speed_ = internal::FromValue<int>::Parse(*relative_speed_value, errors);
  }
  const base::Value* gesture_source_type_value = value.FindKey("gestureSourceType");
  if (gesture_source_type_value) {
    errors->SetName("gestureSourceType");
    result->gesture_source_type_ = internal::FromValue<::autofill_assistant::input::GestureSourceType>::Parse(*gesture_source_type_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SynthesizePinchGestureParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("x", internal::ToValue(x_));
  result->Set("y", internal::ToValue(y_));
  result->Set("scaleFactor", internal::ToValue(scale_factor_));
  if (relative_speed_)
    result->Set("relativeSpeed", internal::ToValue(relative_speed_.value()));
  if (gesture_source_type_)
    result->Set("gestureSourceType", internal::ToValue(gesture_source_type_.value()));
  return std::move(result);
}

std::unique_ptr<SynthesizePinchGestureParams> SynthesizePinchGestureParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SynthesizePinchGestureParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SynthesizePinchGestureResult> SynthesizePinchGestureResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SynthesizePinchGestureResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SynthesizePinchGestureResult> result(new SynthesizePinchGestureResult());
  errors->Push();
  errors->SetName("SynthesizePinchGestureResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SynthesizePinchGestureResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SynthesizePinchGestureResult> SynthesizePinchGestureResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SynthesizePinchGestureResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SynthesizeScrollGestureParams> SynthesizeScrollGestureParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SynthesizeScrollGestureParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SynthesizeScrollGestureParams> result(new SynthesizeScrollGestureParams());
  errors->Push();
  errors->SetName("SynthesizeScrollGestureParams");
  const base::Value* x_value = value.FindKey("x");
  if (x_value) {
    errors->SetName("x");
    result->x_ = internal::FromValue<double>::Parse(*x_value, errors);
  } else {
    errors->AddError("required property missing: x");
  }
  const base::Value* y_value = value.FindKey("y");
  if (y_value) {
    errors->SetName("y");
    result->y_ = internal::FromValue<double>::Parse(*y_value, errors);
  } else {
    errors->AddError("required property missing: y");
  }
  const base::Value* x_distance_value = value.FindKey("xDistance");
  if (x_distance_value) {
    errors->SetName("xDistance");
    result->x_distance_ = internal::FromValue<double>::Parse(*x_distance_value, errors);
  }
  const base::Value* y_distance_value = value.FindKey("yDistance");
  if (y_distance_value) {
    errors->SetName("yDistance");
    result->y_distance_ = internal::FromValue<double>::Parse(*y_distance_value, errors);
  }
  const base::Value* x_overscroll_value = value.FindKey("xOverscroll");
  if (x_overscroll_value) {
    errors->SetName("xOverscroll");
    result->x_overscroll_ = internal::FromValue<double>::Parse(*x_overscroll_value, errors);
  }
  const base::Value* y_overscroll_value = value.FindKey("yOverscroll");
  if (y_overscroll_value) {
    errors->SetName("yOverscroll");
    result->y_overscroll_ = internal::FromValue<double>::Parse(*y_overscroll_value, errors);
  }
  const base::Value* prevent_fling_value = value.FindKey("preventFling");
  if (prevent_fling_value) {
    errors->SetName("preventFling");
    result->prevent_fling_ = internal::FromValue<bool>::Parse(*prevent_fling_value, errors);
  }
  const base::Value* speed_value = value.FindKey("speed");
  if (speed_value) {
    errors->SetName("speed");
    result->speed_ = internal::FromValue<int>::Parse(*speed_value, errors);
  }
  const base::Value* gesture_source_type_value = value.FindKey("gestureSourceType");
  if (gesture_source_type_value) {
    errors->SetName("gestureSourceType");
    result->gesture_source_type_ = internal::FromValue<::autofill_assistant::input::GestureSourceType>::Parse(*gesture_source_type_value, errors);
  }
  const base::Value* repeat_count_value = value.FindKey("repeatCount");
  if (repeat_count_value) {
    errors->SetName("repeatCount");
    result->repeat_count_ = internal::FromValue<int>::Parse(*repeat_count_value, errors);
  }
  const base::Value* repeat_delay_ms_value = value.FindKey("repeatDelayMs");
  if (repeat_delay_ms_value) {
    errors->SetName("repeatDelayMs");
    result->repeat_delay_ms_ = internal::FromValue<int>::Parse(*repeat_delay_ms_value, errors);
  }
  const base::Value* interaction_marker_name_value = value.FindKey("interactionMarkerName");
  if (interaction_marker_name_value) {
    errors->SetName("interactionMarkerName");
    result->interaction_marker_name_ = internal::FromValue<std::string>::Parse(*interaction_marker_name_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SynthesizeScrollGestureParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("x", internal::ToValue(x_));
  result->Set("y", internal::ToValue(y_));
  if (x_distance_)
    result->Set("xDistance", internal::ToValue(x_distance_.value()));
  if (y_distance_)
    result->Set("yDistance", internal::ToValue(y_distance_.value()));
  if (x_overscroll_)
    result->Set("xOverscroll", internal::ToValue(x_overscroll_.value()));
  if (y_overscroll_)
    result->Set("yOverscroll", internal::ToValue(y_overscroll_.value()));
  if (prevent_fling_)
    result->Set("preventFling", internal::ToValue(prevent_fling_.value()));
  if (speed_)
    result->Set("speed", internal::ToValue(speed_.value()));
  if (gesture_source_type_)
    result->Set("gestureSourceType", internal::ToValue(gesture_source_type_.value()));
  if (repeat_count_)
    result->Set("repeatCount", internal::ToValue(repeat_count_.value()));
  if (repeat_delay_ms_)
    result->Set("repeatDelayMs", internal::ToValue(repeat_delay_ms_.value()));
  if (interaction_marker_name_)
    result->Set("interactionMarkerName", internal::ToValue(interaction_marker_name_.value()));
  return std::move(result);
}

std::unique_ptr<SynthesizeScrollGestureParams> SynthesizeScrollGestureParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SynthesizeScrollGestureParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SynthesizeScrollGestureResult> SynthesizeScrollGestureResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SynthesizeScrollGestureResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SynthesizeScrollGestureResult> result(new SynthesizeScrollGestureResult());
  errors->Push();
  errors->SetName("SynthesizeScrollGestureResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SynthesizeScrollGestureResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SynthesizeScrollGestureResult> SynthesizeScrollGestureResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SynthesizeScrollGestureResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SynthesizeTapGestureParams> SynthesizeTapGestureParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SynthesizeTapGestureParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SynthesizeTapGestureParams> result(new SynthesizeTapGestureParams());
  errors->Push();
  errors->SetName("SynthesizeTapGestureParams");
  const base::Value* x_value = value.FindKey("x");
  if (x_value) {
    errors->SetName("x");
    result->x_ = internal::FromValue<double>::Parse(*x_value, errors);
  } else {
    errors->AddError("required property missing: x");
  }
  const base::Value* y_value = value.FindKey("y");
  if (y_value) {
    errors->SetName("y");
    result->y_ = internal::FromValue<double>::Parse(*y_value, errors);
  } else {
    errors->AddError("required property missing: y");
  }
  const base::Value* duration_value = value.FindKey("duration");
  if (duration_value) {
    errors->SetName("duration");
    result->duration_ = internal::FromValue<int>::Parse(*duration_value, errors);
  }
  const base::Value* tap_count_value = value.FindKey("tapCount");
  if (tap_count_value) {
    errors->SetName("tapCount");
    result->tap_count_ = internal::FromValue<int>::Parse(*tap_count_value, errors);
  }
  const base::Value* gesture_source_type_value = value.FindKey("gestureSourceType");
  if (gesture_source_type_value) {
    errors->SetName("gestureSourceType");
    result->gesture_source_type_ = internal::FromValue<::autofill_assistant::input::GestureSourceType>::Parse(*gesture_source_type_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SynthesizeTapGestureParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("x", internal::ToValue(x_));
  result->Set("y", internal::ToValue(y_));
  if (duration_)
    result->Set("duration", internal::ToValue(duration_.value()));
  if (tap_count_)
    result->Set("tapCount", internal::ToValue(tap_count_.value()));
  if (gesture_source_type_)
    result->Set("gestureSourceType", internal::ToValue(gesture_source_type_.value()));
  return std::move(result);
}

std::unique_ptr<SynthesizeTapGestureParams> SynthesizeTapGestureParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SynthesizeTapGestureParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<SynthesizeTapGestureResult> SynthesizeTapGestureResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("SynthesizeTapGestureResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<SynthesizeTapGestureResult> result(new SynthesizeTapGestureResult());
  errors->Push();
  errors->SetName("SynthesizeTapGestureResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> SynthesizeTapGestureResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<SynthesizeTapGestureResult> SynthesizeTapGestureResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<SynthesizeTapGestureResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DragInterceptedParams> DragInterceptedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DragInterceptedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DragInterceptedParams> result(new DragInterceptedParams());
  errors->Push();
  errors->SetName("DragInterceptedParams");
  const base::Value* data_value = value.FindKey("data");
  if (data_value) {
    errors->SetName("data");
    result->data_ = internal::FromValue<::autofill_assistant::input::DragData>::Parse(*data_value, errors);
  } else {
    errors->AddError("required property missing: data");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DragInterceptedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("data", internal::ToValue(*data_));
  return std::move(result);
}

std::unique_ptr<DragInterceptedParams> DragInterceptedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DragInterceptedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


}  // namespace input
}  // namespace autofill_assistant
