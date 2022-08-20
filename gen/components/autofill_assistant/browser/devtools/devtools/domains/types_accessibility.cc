// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_cc.template
// Modifications include namespace and path.

#include "components/autofill_assistant/browser/devtools/devtools/domains/types_accessibility.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/domains/types_security.h"

#include "base/memory/ptr_util.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_accessibility.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/type_conversions_security.h"

namespace autofill_assistant {

namespace internal {

template <typename T>
std::unique_ptr<base::Value> ToValue(const T& value) {
  return ToValueImpl(value, static_cast<T*>(nullptr));
}

}  // namespace internal

namespace accessibility {

std::unique_ptr<AXValueSource> AXValueSource::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("AXValueSource");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<AXValueSource> result(new AXValueSource());
  errors->Push();
  errors->SetName("AXValueSource");
  const base::Value* type_value = value.FindKey("type");
  if (type_value) {
    errors->SetName("type");
    result->type_ = internal::FromValue<::autofill_assistant::accessibility::AXValueSourceType>::Parse(*type_value, errors);
  } else {
    errors->AddError("required property missing: type");
  }
  const base::Value* value_value = value.FindKey("value");
  if (value_value) {
    errors->SetName("value");
    result->value_ = internal::FromValue<::autofill_assistant::accessibility::AXValue>::Parse(*value_value, errors);
  }
  const base::Value* attribute_value = value.FindKey("attribute");
  if (attribute_value) {
    errors->SetName("attribute");
    result->attribute_ = internal::FromValue<std::string>::Parse(*attribute_value, errors);
  }
  const base::Value* attribute_value_value = value.FindKey("attributeValue");
  if (attribute_value_value) {
    errors->SetName("attributeValue");
    result->attribute_value_ = internal::FromValue<::autofill_assistant::accessibility::AXValue>::Parse(*attribute_value_value, errors);
  }
  const base::Value* superseded_value = value.FindKey("superseded");
  if (superseded_value) {
    errors->SetName("superseded");
    result->superseded_ = internal::FromValue<bool>::Parse(*superseded_value, errors);
  }
  const base::Value* native_source_value = value.FindKey("nativeSource");
  if (native_source_value) {
    errors->SetName("nativeSource");
    result->native_source_ = internal::FromValue<::autofill_assistant::accessibility::AXValueNativeSourceType>::Parse(*native_source_value, errors);
  }
  const base::Value* native_source_value_value = value.FindKey("nativeSourceValue");
  if (native_source_value_value) {
    errors->SetName("nativeSourceValue");
    result->native_source_value_ = internal::FromValue<::autofill_assistant::accessibility::AXValue>::Parse(*native_source_value_value, errors);
  }
  const base::Value* invalid_value = value.FindKey("invalid");
  if (invalid_value) {
    errors->SetName("invalid");
    result->invalid_ = internal::FromValue<bool>::Parse(*invalid_value, errors);
  }
  const base::Value* invalid_reason_value = value.FindKey("invalidReason");
  if (invalid_reason_value) {
    errors->SetName("invalidReason");
    result->invalid_reason_ = internal::FromValue<std::string>::Parse(*invalid_reason_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> AXValueSource::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("type", internal::ToValue(type_));
  if (value_)
    result->Set("value", internal::ToValue(*value_.value()));
  if (attribute_)
    result->Set("attribute", internal::ToValue(attribute_.value()));
  if (attribute_value_)
    result->Set("attributeValue", internal::ToValue(*attribute_value_.value()));
  if (superseded_)
    result->Set("superseded", internal::ToValue(superseded_.value()));
  if (native_source_)
    result->Set("nativeSource", internal::ToValue(native_source_.value()));
  if (native_source_value_)
    result->Set("nativeSourceValue", internal::ToValue(*native_source_value_.value()));
  if (invalid_)
    result->Set("invalid", internal::ToValue(invalid_.value()));
  if (invalid_reason_)
    result->Set("invalidReason", internal::ToValue(invalid_reason_.value()));
  return std::move(result);
}

std::unique_ptr<AXValueSource> AXValueSource::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<AXValueSource> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<AXRelatedNode> AXRelatedNode::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("AXRelatedNode");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<AXRelatedNode> result(new AXRelatedNode());
  errors->Push();
  errors->SetName("AXRelatedNode");
  const base::Value* backenddom_node_id_value = value.FindKey("backendDOMNodeId");
  if (backenddom_node_id_value) {
    errors->SetName("backendDOMNodeId");
    result->backenddom_node_id_ = internal::FromValue<int>::Parse(*backenddom_node_id_value, errors);
  } else {
    errors->AddError("required property missing: backendDOMNodeId");
  }
  const base::Value* idref_value = value.FindKey("idref");
  if (idref_value) {
    errors->SetName("idref");
    result->idref_ = internal::FromValue<std::string>::Parse(*idref_value, errors);
  }
  const base::Value* text_value = value.FindKey("text");
  if (text_value) {
    errors->SetName("text");
    result->text_ = internal::FromValue<std::string>::Parse(*text_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> AXRelatedNode::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("backendDOMNodeId", internal::ToValue(backenddom_node_id_));
  if (idref_)
    result->Set("idref", internal::ToValue(idref_.value()));
  if (text_)
    result->Set("text", internal::ToValue(text_.value()));
  return std::move(result);
}

std::unique_ptr<AXRelatedNode> AXRelatedNode::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<AXRelatedNode> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<AXProperty> AXProperty::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("AXProperty");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<AXProperty> result(new AXProperty());
  errors->Push();
  errors->SetName("AXProperty");
  const base::Value* name_value = value.FindKey("name");
  if (name_value) {
    errors->SetName("name");
    result->name_ = internal::FromValue<::autofill_assistant::accessibility::AXPropertyName>::Parse(*name_value, errors);
  } else {
    errors->AddError("required property missing: name");
  }
  const base::Value* value_value = value.FindKey("value");
  if (value_value) {
    errors->SetName("value");
    result->value_ = internal::FromValue<::autofill_assistant::accessibility::AXValue>::Parse(*value_value, errors);
  } else {
    errors->AddError("required property missing: value");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> AXProperty::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("name", internal::ToValue(name_));
  result->Set("value", internal::ToValue(*value_));
  return std::move(result);
}

std::unique_ptr<AXProperty> AXProperty::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<AXProperty> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<AXValue> AXValue::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("AXValue");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<AXValue> result(new AXValue());
  errors->Push();
  errors->SetName("AXValue");
  const base::Value* type_value = value.FindKey("type");
  if (type_value) {
    errors->SetName("type");
    result->type_ = internal::FromValue<::autofill_assistant::accessibility::AXValueType>::Parse(*type_value, errors);
  } else {
    errors->AddError("required property missing: type");
  }
  const base::Value* value_value = value.FindKey("value");
  if (value_value) {
    errors->SetName("value");
    result->value_ = internal::FromValue<base::Value>::Parse(*value_value, errors);
  }
  const base::Value* related_nodes_value = value.FindKey("relatedNodes");
  if (related_nodes_value) {
    errors->SetName("relatedNodes");
    result->related_nodes_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::accessibility::AXRelatedNode>>>::Parse(*related_nodes_value, errors);
  }
  const base::Value* sources_value = value.FindKey("sources");
  if (sources_value) {
    errors->SetName("sources");
    result->sources_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::accessibility::AXValueSource>>>::Parse(*sources_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> AXValue::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("type", internal::ToValue(type_));
  if (value_)
    result->Set("value", internal::ToValue(*value_.value()));
  if (related_nodes_)
    result->Set("relatedNodes", internal::ToValue(related_nodes_.value()));
  if (sources_)
    result->Set("sources", internal::ToValue(sources_.value()));
  return std::move(result);
}

std::unique_ptr<AXValue> AXValue::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<AXValue> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<AXNode> AXNode::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("AXNode");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<AXNode> result(new AXNode());
  errors->Push();
  errors->SetName("AXNode");
  const base::Value* node_id_value = value.FindKey("nodeId");
  if (node_id_value) {
    errors->SetName("nodeId");
    result->node_id_ = internal::FromValue<std::string>::Parse(*node_id_value, errors);
  } else {
    errors->AddError("required property missing: nodeId");
  }
  const base::Value* ignored_value = value.FindKey("ignored");
  if (ignored_value) {
    errors->SetName("ignored");
    result->ignored_ = internal::FromValue<bool>::Parse(*ignored_value, errors);
  } else {
    errors->AddError("required property missing: ignored");
  }
  const base::Value* ignored_reasons_value = value.FindKey("ignoredReasons");
  if (ignored_reasons_value) {
    errors->SetName("ignoredReasons");
    result->ignored_reasons_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::accessibility::AXProperty>>>::Parse(*ignored_reasons_value, errors);
  }
  const base::Value* role_value = value.FindKey("role");
  if (role_value) {
    errors->SetName("role");
    result->role_ = internal::FromValue<::autofill_assistant::accessibility::AXValue>::Parse(*role_value, errors);
  }
  const base::Value* chrome_role_value = value.FindKey("chromeRole");
  if (chrome_role_value) {
    errors->SetName("chromeRole");
    result->chrome_role_ = internal::FromValue<::autofill_assistant::accessibility::AXValue>::Parse(*chrome_role_value, errors);
  }
  const base::Value* name_value = value.FindKey("name");
  if (name_value) {
    errors->SetName("name");
    result->name_ = internal::FromValue<::autofill_assistant::accessibility::AXValue>::Parse(*name_value, errors);
  }
  const base::Value* description_value = value.FindKey("description");
  if (description_value) {
    errors->SetName("description");
    result->description_ = internal::FromValue<::autofill_assistant::accessibility::AXValue>::Parse(*description_value, errors);
  }
  const base::Value* value_value = value.FindKey("value");
  if (value_value) {
    errors->SetName("value");
    result->value_ = internal::FromValue<::autofill_assistant::accessibility::AXValue>::Parse(*value_value, errors);
  }
  const base::Value* properties_value = value.FindKey("properties");
  if (properties_value) {
    errors->SetName("properties");
    result->properties_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::accessibility::AXProperty>>>::Parse(*properties_value, errors);
  }
  const base::Value* parent_id_value = value.FindKey("parentId");
  if (parent_id_value) {
    errors->SetName("parentId");
    result->parent_id_ = internal::FromValue<std::string>::Parse(*parent_id_value, errors);
  }
  const base::Value* child_ids_value = value.FindKey("childIds");
  if (child_ids_value) {
    errors->SetName("childIds");
    result->child_ids_ = internal::FromValue<std::vector<std::string>>::Parse(*child_ids_value, errors);
  }
  const base::Value* backenddom_node_id_value = value.FindKey("backendDOMNodeId");
  if (backenddom_node_id_value) {
    errors->SetName("backendDOMNodeId");
    result->backenddom_node_id_ = internal::FromValue<int>::Parse(*backenddom_node_id_value, errors);
  }
  const base::Value* frame_id_value = value.FindKey("frameId");
  if (frame_id_value) {
    errors->SetName("frameId");
    result->frame_id_ = internal::FromValue<std::string>::Parse(*frame_id_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> AXNode::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("nodeId", internal::ToValue(node_id_));
  result->Set("ignored", internal::ToValue(ignored_));
  if (ignored_reasons_)
    result->Set("ignoredReasons", internal::ToValue(ignored_reasons_.value()));
  if (role_)
    result->Set("role", internal::ToValue(*role_.value()));
  if (chrome_role_)
    result->Set("chromeRole", internal::ToValue(*chrome_role_.value()));
  if (name_)
    result->Set("name", internal::ToValue(*name_.value()));
  if (description_)
    result->Set("description", internal::ToValue(*description_.value()));
  if (value_)
    result->Set("value", internal::ToValue(*value_.value()));
  if (properties_)
    result->Set("properties", internal::ToValue(properties_.value()));
  if (parent_id_)
    result->Set("parentId", internal::ToValue(parent_id_.value()));
  if (child_ids_)
    result->Set("childIds", internal::ToValue(child_ids_.value()));
  if (backenddom_node_id_)
    result->Set("backendDOMNodeId", internal::ToValue(backenddom_node_id_.value()));
  if (frame_id_)
    result->Set("frameId", internal::ToValue(frame_id_.value()));
  return std::move(result);
}

std::unique_ptr<AXNode> AXNode::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<AXNode> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DisableParams> DisableParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DisableParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DisableParams> result(new DisableParams());
  errors->Push();
  errors->SetName("DisableParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DisableParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<DisableParams> DisableParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DisableParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<DisableResult> DisableResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("DisableResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<DisableResult> result(new DisableResult());
  errors->Push();
  errors->SetName("DisableResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> DisableResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<DisableResult> DisableResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<DisableResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<EnableParams> EnableParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("EnableParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<EnableParams> result(new EnableParams());
  errors->Push();
  errors->SetName("EnableParams");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> EnableParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<EnableParams> EnableParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<EnableParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<EnableResult> EnableResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("EnableResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<EnableResult> result(new EnableResult());
  errors->Push();
  errors->SetName("EnableResult");
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> EnableResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  return std::move(result);
}

std::unique_ptr<EnableResult> EnableResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<EnableResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetPartialAXTreeParams> GetPartialAXTreeParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetPartialAXTreeParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetPartialAXTreeParams> result(new GetPartialAXTreeParams());
  errors->Push();
  errors->SetName("GetPartialAXTreeParams");
  const base::Value* node_id_value = value.FindKey("nodeId");
  if (node_id_value) {
    errors->SetName("nodeId");
    result->node_id_ = internal::FromValue<int>::Parse(*node_id_value, errors);
  }
  const base::Value* backend_node_id_value = value.FindKey("backendNodeId");
  if (backend_node_id_value) {
    errors->SetName("backendNodeId");
    result->backend_node_id_ = internal::FromValue<int>::Parse(*backend_node_id_value, errors);
  }
  const base::Value* object_id_value = value.FindKey("objectId");
  if (object_id_value) {
    errors->SetName("objectId");
    result->object_id_ = internal::FromValue<std::string>::Parse(*object_id_value, errors);
  }
  const base::Value* fetch_relatives_value = value.FindKey("fetchRelatives");
  if (fetch_relatives_value) {
    errors->SetName("fetchRelatives");
    result->fetch_relatives_ = internal::FromValue<bool>::Parse(*fetch_relatives_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetPartialAXTreeParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  if (node_id_)
    result->Set("nodeId", internal::ToValue(node_id_.value()));
  if (backend_node_id_)
    result->Set("backendNodeId", internal::ToValue(backend_node_id_.value()));
  if (object_id_)
    result->Set("objectId", internal::ToValue(object_id_.value()));
  if (fetch_relatives_)
    result->Set("fetchRelatives", internal::ToValue(fetch_relatives_.value()));
  return std::move(result);
}

std::unique_ptr<GetPartialAXTreeParams> GetPartialAXTreeParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetPartialAXTreeParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetPartialAXTreeResult> GetPartialAXTreeResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetPartialAXTreeResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetPartialAXTreeResult> result(new GetPartialAXTreeResult());
  errors->Push();
  errors->SetName("GetPartialAXTreeResult");
  const base::Value* nodes_value = value.FindKey("nodes");
  if (nodes_value) {
    errors->SetName("nodes");
    result->nodes_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::accessibility::AXNode>>>::Parse(*nodes_value, errors);
  } else {
    errors->AddError("required property missing: nodes");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetPartialAXTreeResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("nodes", internal::ToValue(nodes_));
  return std::move(result);
}

std::unique_ptr<GetPartialAXTreeResult> GetPartialAXTreeResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetPartialAXTreeResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetFullAXTreeParams> GetFullAXTreeParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetFullAXTreeParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetFullAXTreeParams> result(new GetFullAXTreeParams());
  errors->Push();
  errors->SetName("GetFullAXTreeParams");
  const base::Value* depth_value = value.FindKey("depth");
  if (depth_value) {
    errors->SetName("depth");
    result->depth_ = internal::FromValue<int>::Parse(*depth_value, errors);
  }
  const base::Value* frame_id_value = value.FindKey("frameId");
  if (frame_id_value) {
    errors->SetName("frameId");
    result->frame_id_ = internal::FromValue<std::string>::Parse(*frame_id_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetFullAXTreeParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  if (depth_)
    result->Set("depth", internal::ToValue(depth_.value()));
  if (frame_id_)
    result->Set("frameId", internal::ToValue(frame_id_.value()));
  return std::move(result);
}

std::unique_ptr<GetFullAXTreeParams> GetFullAXTreeParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetFullAXTreeParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetFullAXTreeResult> GetFullAXTreeResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetFullAXTreeResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetFullAXTreeResult> result(new GetFullAXTreeResult());
  errors->Push();
  errors->SetName("GetFullAXTreeResult");
  const base::Value* nodes_value = value.FindKey("nodes");
  if (nodes_value) {
    errors->SetName("nodes");
    result->nodes_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::accessibility::AXNode>>>::Parse(*nodes_value, errors);
  } else {
    errors->AddError("required property missing: nodes");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetFullAXTreeResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("nodes", internal::ToValue(nodes_));
  return std::move(result);
}

std::unique_ptr<GetFullAXTreeResult> GetFullAXTreeResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetFullAXTreeResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetRootAXNodeParams> GetRootAXNodeParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetRootAXNodeParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetRootAXNodeParams> result(new GetRootAXNodeParams());
  errors->Push();
  errors->SetName("GetRootAXNodeParams");
  const base::Value* frame_id_value = value.FindKey("frameId");
  if (frame_id_value) {
    errors->SetName("frameId");
    result->frame_id_ = internal::FromValue<std::string>::Parse(*frame_id_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetRootAXNodeParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  if (frame_id_)
    result->Set("frameId", internal::ToValue(frame_id_.value()));
  return std::move(result);
}

std::unique_ptr<GetRootAXNodeParams> GetRootAXNodeParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetRootAXNodeParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetRootAXNodeResult> GetRootAXNodeResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetRootAXNodeResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetRootAXNodeResult> result(new GetRootAXNodeResult());
  errors->Push();
  errors->SetName("GetRootAXNodeResult");
  const base::Value* node_value = value.FindKey("node");
  if (node_value) {
    errors->SetName("node");
    result->node_ = internal::FromValue<::autofill_assistant::accessibility::AXNode>::Parse(*node_value, errors);
  } else {
    errors->AddError("required property missing: node");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetRootAXNodeResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("node", internal::ToValue(*node_));
  return std::move(result);
}

std::unique_ptr<GetRootAXNodeResult> GetRootAXNodeResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetRootAXNodeResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetAXNodeAndAncestorsParams> GetAXNodeAndAncestorsParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetAXNodeAndAncestorsParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetAXNodeAndAncestorsParams> result(new GetAXNodeAndAncestorsParams());
  errors->Push();
  errors->SetName("GetAXNodeAndAncestorsParams");
  const base::Value* node_id_value = value.FindKey("nodeId");
  if (node_id_value) {
    errors->SetName("nodeId");
    result->node_id_ = internal::FromValue<int>::Parse(*node_id_value, errors);
  }
  const base::Value* backend_node_id_value = value.FindKey("backendNodeId");
  if (backend_node_id_value) {
    errors->SetName("backendNodeId");
    result->backend_node_id_ = internal::FromValue<int>::Parse(*backend_node_id_value, errors);
  }
  const base::Value* object_id_value = value.FindKey("objectId");
  if (object_id_value) {
    errors->SetName("objectId");
    result->object_id_ = internal::FromValue<std::string>::Parse(*object_id_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetAXNodeAndAncestorsParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  if (node_id_)
    result->Set("nodeId", internal::ToValue(node_id_.value()));
  if (backend_node_id_)
    result->Set("backendNodeId", internal::ToValue(backend_node_id_.value()));
  if (object_id_)
    result->Set("objectId", internal::ToValue(object_id_.value()));
  return std::move(result);
}

std::unique_ptr<GetAXNodeAndAncestorsParams> GetAXNodeAndAncestorsParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetAXNodeAndAncestorsParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetAXNodeAndAncestorsResult> GetAXNodeAndAncestorsResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetAXNodeAndAncestorsResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetAXNodeAndAncestorsResult> result(new GetAXNodeAndAncestorsResult());
  errors->Push();
  errors->SetName("GetAXNodeAndAncestorsResult");
  const base::Value* nodes_value = value.FindKey("nodes");
  if (nodes_value) {
    errors->SetName("nodes");
    result->nodes_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::accessibility::AXNode>>>::Parse(*nodes_value, errors);
  } else {
    errors->AddError("required property missing: nodes");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetAXNodeAndAncestorsResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("nodes", internal::ToValue(nodes_));
  return std::move(result);
}

std::unique_ptr<GetAXNodeAndAncestorsResult> GetAXNodeAndAncestorsResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetAXNodeAndAncestorsResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetChildAXNodesParams> GetChildAXNodesParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetChildAXNodesParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetChildAXNodesParams> result(new GetChildAXNodesParams());
  errors->Push();
  errors->SetName("GetChildAXNodesParams");
  const base::Value* id_value = value.FindKey("id");
  if (id_value) {
    errors->SetName("id");
    result->id_ = internal::FromValue<std::string>::Parse(*id_value, errors);
  } else {
    errors->AddError("required property missing: id");
  }
  const base::Value* frame_id_value = value.FindKey("frameId");
  if (frame_id_value) {
    errors->SetName("frameId");
    result->frame_id_ = internal::FromValue<std::string>::Parse(*frame_id_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetChildAXNodesParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("id", internal::ToValue(id_));
  if (frame_id_)
    result->Set("frameId", internal::ToValue(frame_id_.value()));
  return std::move(result);
}

std::unique_ptr<GetChildAXNodesParams> GetChildAXNodesParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetChildAXNodesParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<GetChildAXNodesResult> GetChildAXNodesResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("GetChildAXNodesResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<GetChildAXNodesResult> result(new GetChildAXNodesResult());
  errors->Push();
  errors->SetName("GetChildAXNodesResult");
  const base::Value* nodes_value = value.FindKey("nodes");
  if (nodes_value) {
    errors->SetName("nodes");
    result->nodes_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::accessibility::AXNode>>>::Parse(*nodes_value, errors);
  } else {
    errors->AddError("required property missing: nodes");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> GetChildAXNodesResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("nodes", internal::ToValue(nodes_));
  return std::move(result);
}

std::unique_ptr<GetChildAXNodesResult> GetChildAXNodesResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<GetChildAXNodesResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<QueryAXTreeParams> QueryAXTreeParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("QueryAXTreeParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<QueryAXTreeParams> result(new QueryAXTreeParams());
  errors->Push();
  errors->SetName("QueryAXTreeParams");
  const base::Value* node_id_value = value.FindKey("nodeId");
  if (node_id_value) {
    errors->SetName("nodeId");
    result->node_id_ = internal::FromValue<int>::Parse(*node_id_value, errors);
  }
  const base::Value* backend_node_id_value = value.FindKey("backendNodeId");
  if (backend_node_id_value) {
    errors->SetName("backendNodeId");
    result->backend_node_id_ = internal::FromValue<int>::Parse(*backend_node_id_value, errors);
  }
  const base::Value* object_id_value = value.FindKey("objectId");
  if (object_id_value) {
    errors->SetName("objectId");
    result->object_id_ = internal::FromValue<std::string>::Parse(*object_id_value, errors);
  }
  const base::Value* accessible_name_value = value.FindKey("accessibleName");
  if (accessible_name_value) {
    errors->SetName("accessibleName");
    result->accessible_name_ = internal::FromValue<std::string>::Parse(*accessible_name_value, errors);
  }
  const base::Value* role_value = value.FindKey("role");
  if (role_value) {
    errors->SetName("role");
    result->role_ = internal::FromValue<std::string>::Parse(*role_value, errors);
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> QueryAXTreeParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  if (node_id_)
    result->Set("nodeId", internal::ToValue(node_id_.value()));
  if (backend_node_id_)
    result->Set("backendNodeId", internal::ToValue(backend_node_id_.value()));
  if (object_id_)
    result->Set("objectId", internal::ToValue(object_id_.value()));
  if (accessible_name_)
    result->Set("accessibleName", internal::ToValue(accessible_name_.value()));
  if (role_)
    result->Set("role", internal::ToValue(role_.value()));
  return std::move(result);
}

std::unique_ptr<QueryAXTreeParams> QueryAXTreeParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<QueryAXTreeParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<QueryAXTreeResult> QueryAXTreeResult::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("QueryAXTreeResult");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<QueryAXTreeResult> result(new QueryAXTreeResult());
  errors->Push();
  errors->SetName("QueryAXTreeResult");
  const base::Value* nodes_value = value.FindKey("nodes");
  if (nodes_value) {
    errors->SetName("nodes");
    result->nodes_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::accessibility::AXNode>>>::Parse(*nodes_value, errors);
  } else {
    errors->AddError("required property missing: nodes");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> QueryAXTreeResult::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("nodes", internal::ToValue(nodes_));
  return std::move(result);
}

std::unique_ptr<QueryAXTreeResult> QueryAXTreeResult::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<QueryAXTreeResult> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<LoadCompleteParams> LoadCompleteParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("LoadCompleteParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<LoadCompleteParams> result(new LoadCompleteParams());
  errors->Push();
  errors->SetName("LoadCompleteParams");
  const base::Value* root_value = value.FindKey("root");
  if (root_value) {
    errors->SetName("root");
    result->root_ = internal::FromValue<::autofill_assistant::accessibility::AXNode>::Parse(*root_value, errors);
  } else {
    errors->AddError("required property missing: root");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> LoadCompleteParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("root", internal::ToValue(*root_));
  return std::move(result);
}

std::unique_ptr<LoadCompleteParams> LoadCompleteParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<LoadCompleteParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


std::unique_ptr<NodesUpdatedParams> NodesUpdatedParams::Parse(const base::Value& value, ErrorReporter* errors) {
  errors->Push();
  errors->SetName("NodesUpdatedParams");
  if (!value.is_dict()) {
    errors->AddError("object expected");
    errors->Pop();
    return nullptr;
  }

  std::unique_ptr<NodesUpdatedParams> result(new NodesUpdatedParams());
  errors->Push();
  errors->SetName("NodesUpdatedParams");
  const base::Value* nodes_value = value.FindKey("nodes");
  if (nodes_value) {
    errors->SetName("nodes");
    result->nodes_ = internal::FromValue<std::vector<std::unique_ptr<::autofill_assistant::accessibility::AXNode>>>::Parse(*nodes_value, errors);
  } else {
    errors->AddError("required property missing: nodes");
  }
  errors->Pop();
  errors->Pop();
  if (errors->HasErrors())
    return nullptr;
  return result;
}

std::unique_ptr<base::Value> NodesUpdatedParams::Serialize() const {
  std::unique_ptr<base::DictionaryValue> result(new base::DictionaryValue());
  result->Set("nodes", internal::ToValue(nodes_));
  return std::move(result);
}

std::unique_ptr<NodesUpdatedParams> NodesUpdatedParams::Clone() const {
  ErrorReporter errors;
  std::unique_ptr<NodesUpdatedParams> result = Parse(*Serialize(), &errors);
  DCHECK(!errors.HasErrors());
  return result;
}


}  // namespace accessibility
}  // namespace autofill_assistant
