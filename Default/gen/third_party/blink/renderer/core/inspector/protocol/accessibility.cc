// This file is generated by TypeBuilder_cpp.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/inspector/protocol/accessibility.h"

#include "third_party/blink/renderer/core/inspector/protocol/protocol.h"

#include "third_party/inspector_protocol/crdtp/cbor.h"
#include "third_party/inspector_protocol/crdtp/find_by_first.h"
#include "third_party/inspector_protocol/crdtp/span.h"

namespace blink {
namespace protocol {
namespace Accessibility {

using crdtp::DeserializerState;
using crdtp::ProtocolTypeTraits;

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Accessibility";
const char Metainfo::commandPrefix[] = "Accessibility.";
const char Metainfo::version[] = "1.3";


namespace AXValueTypeEnum {
const char Boolean[] = "boolean";
const char Tristate[] = "tristate";
const char BooleanOrUndefined[] = "booleanOrUndefined";
const char Idref[] = "idref";
const char IdrefList[] = "idrefList";
const char Integer[] = "integer";
const char Node[] = "node";
const char NodeList[] = "nodeList";
const char Number[] = "number";
const char String[] = "string";
const char ComputedString[] = "computedString";
const char Token[] = "token";
const char TokenList[] = "tokenList";
const char DomRelation[] = "domRelation";
const char Role[] = "role";
const char InternalRole[] = "internalRole";
const char ValueUndefined[] = "valueUndefined";
} // namespace AXValueTypeEnum


namespace AXValueSourceTypeEnum {
const char Attribute[] = "attribute";
const char Implicit[] = "implicit";
const char Style[] = "style";
const char Contents[] = "contents";
const char Placeholder[] = "placeholder";
const char RelatedElement[] = "relatedElement";
} // namespace AXValueSourceTypeEnum


namespace AXValueNativeSourceTypeEnum {
const char Description[] = "description";
const char Figcaption[] = "figcaption";
const char Label[] = "label";
const char Labelfor[] = "labelfor";
const char Labelwrapped[] = "labelwrapped";
const char Legend[] = "legend";
const char Rubyannotation[] = "rubyannotation";
const char Tablecaption[] = "tablecaption";
const char Title[] = "title";
const char Other[] = "other";
} // namespace AXValueNativeSourceTypeEnum


CRDTP_BEGIN_DESERIALIZER(AXValueSource)
    CRDTP_DESERIALIZE_FIELD_OPT("attribute", m_attribute),
    CRDTP_DESERIALIZE_FIELD_OPT("attributeValue", m_attributeValue),
    CRDTP_DESERIALIZE_FIELD_OPT("invalid", m_invalid),
    CRDTP_DESERIALIZE_FIELD_OPT("invalidReason", m_invalidReason),
    CRDTP_DESERIALIZE_FIELD_OPT("nativeSource", m_nativeSource),
    CRDTP_DESERIALIZE_FIELD_OPT("nativeSourceValue", m_nativeSourceValue),
    CRDTP_DESERIALIZE_FIELD_OPT("superseded", m_superseded),
    CRDTP_DESERIALIZE_FIELD("type", m_type),
    CRDTP_DESERIALIZE_FIELD_OPT("value", m_value),
CRDTP_END_DESERIALIZER()

CRDTP_BEGIN_SERIALIZER(AXValueSource)
    CRDTP_SERIALIZE_FIELD("type", m_type);
    CRDTP_SERIALIZE_FIELD("value", m_value);
    CRDTP_SERIALIZE_FIELD("attribute", m_attribute);
    CRDTP_SERIALIZE_FIELD("attributeValue", m_attributeValue);
    CRDTP_SERIALIZE_FIELD("superseded", m_superseded);
    CRDTP_SERIALIZE_FIELD("nativeSource", m_nativeSource);
    CRDTP_SERIALIZE_FIELD("nativeSourceValue", m_nativeSourceValue);
    CRDTP_SERIALIZE_FIELD("invalid", m_invalid);
    CRDTP_SERIALIZE_FIELD("invalidReason", m_invalidReason);
CRDTP_END_SERIALIZER();


CRDTP_BEGIN_DESERIALIZER(AXRelatedNode)
    CRDTP_DESERIALIZE_FIELD("backendDOMNodeId", m_backendDOMNodeId),
    CRDTP_DESERIALIZE_FIELD_OPT("idref", m_idref),
    CRDTP_DESERIALIZE_FIELD_OPT("text", m_text),
CRDTP_END_DESERIALIZER()

CRDTP_BEGIN_SERIALIZER(AXRelatedNode)
    CRDTP_SERIALIZE_FIELD("backendDOMNodeId", m_backendDOMNodeId);
    CRDTP_SERIALIZE_FIELD("idref", m_idref);
    CRDTP_SERIALIZE_FIELD("text", m_text);
CRDTP_END_SERIALIZER();


CRDTP_BEGIN_DESERIALIZER(AXProperty)
    CRDTP_DESERIALIZE_FIELD("name", m_name),
    CRDTP_DESERIALIZE_FIELD("value", m_value),
CRDTP_END_DESERIALIZER()

CRDTP_BEGIN_SERIALIZER(AXProperty)
    CRDTP_SERIALIZE_FIELD("name", m_name);
    CRDTP_SERIALIZE_FIELD("value", m_value);
CRDTP_END_SERIALIZER();


CRDTP_BEGIN_DESERIALIZER(AXValue)
    CRDTP_DESERIALIZE_FIELD_OPT("relatedNodes", m_relatedNodes),
    CRDTP_DESERIALIZE_FIELD_OPT("sources", m_sources),
    CRDTP_DESERIALIZE_FIELD("type", m_type),
    CRDTP_DESERIALIZE_FIELD_OPT("value", m_value),
CRDTP_END_DESERIALIZER()

CRDTP_BEGIN_SERIALIZER(AXValue)
    CRDTP_SERIALIZE_FIELD("type", m_type);
    CRDTP_SERIALIZE_FIELD("value", m_value);
    CRDTP_SERIALIZE_FIELD("relatedNodes", m_relatedNodes);
    CRDTP_SERIALIZE_FIELD("sources", m_sources);
CRDTP_END_SERIALIZER();


namespace AXPropertyNameEnum {
const char Busy[] = "busy";
const char Disabled[] = "disabled";
const char Editable[] = "editable";
const char Focusable[] = "focusable";
const char Focused[] = "focused";
const char Hidden[] = "hidden";
const char HiddenRoot[] = "hiddenRoot";
const char Invalid[] = "invalid";
const char Keyshortcuts[] = "keyshortcuts";
const char Settable[] = "settable";
const char Roledescription[] = "roledescription";
const char Live[] = "live";
const char Atomic[] = "atomic";
const char Relevant[] = "relevant";
const char Root[] = "root";
const char Autocomplete[] = "autocomplete";
const char HasPopup[] = "hasPopup";
const char Level[] = "level";
const char Multiselectable[] = "multiselectable";
const char Orientation[] = "orientation";
const char Multiline[] = "multiline";
const char Readonly[] = "readonly";
const char Required[] = "required";
const char Valuemin[] = "valuemin";
const char Valuemax[] = "valuemax";
const char Valuetext[] = "valuetext";
const char Checked[] = "checked";
const char Expanded[] = "expanded";
const char Modal[] = "modal";
const char Pressed[] = "pressed";
const char Selected[] = "selected";
const char Activedescendant[] = "activedescendant";
const char Controls[] = "controls";
const char Describedby[] = "describedby";
const char Details[] = "details";
const char Errormessage[] = "errormessage";
const char Flowto[] = "flowto";
const char Labelledby[] = "labelledby";
const char Owns[] = "owns";
} // namespace AXPropertyNameEnum


CRDTP_BEGIN_DESERIALIZER(AXNode)
    CRDTP_DESERIALIZE_FIELD_OPT("backendDOMNodeId", m_backendDOMNodeId),
    CRDTP_DESERIALIZE_FIELD_OPT("childIds", m_childIds),
    CRDTP_DESERIALIZE_FIELD_OPT("chromeRole", m_chromeRole),
    CRDTP_DESERIALIZE_FIELD_OPT("description", m_description),
    CRDTP_DESERIALIZE_FIELD_OPT("frameId", m_frameId),
    CRDTP_DESERIALIZE_FIELD("ignored", m_ignored),
    CRDTP_DESERIALIZE_FIELD_OPT("ignoredReasons", m_ignoredReasons),
    CRDTP_DESERIALIZE_FIELD_OPT("name", m_name),
    CRDTP_DESERIALIZE_FIELD("nodeId", m_nodeId),
    CRDTP_DESERIALIZE_FIELD_OPT("parentId", m_parentId),
    CRDTP_DESERIALIZE_FIELD_OPT("properties", m_properties),
    CRDTP_DESERIALIZE_FIELD_OPT("role", m_role),
    CRDTP_DESERIALIZE_FIELD_OPT("value", m_value),
CRDTP_END_DESERIALIZER()

CRDTP_BEGIN_SERIALIZER(AXNode)
    CRDTP_SERIALIZE_FIELD("nodeId", m_nodeId);
    CRDTP_SERIALIZE_FIELD("ignored", m_ignored);
    CRDTP_SERIALIZE_FIELD("ignoredReasons", m_ignoredReasons);
    CRDTP_SERIALIZE_FIELD("role", m_role);
    CRDTP_SERIALIZE_FIELD("chromeRole", m_chromeRole);
    CRDTP_SERIALIZE_FIELD("name", m_name);
    CRDTP_SERIALIZE_FIELD("description", m_description);
    CRDTP_SERIALIZE_FIELD("value", m_value);
    CRDTP_SERIALIZE_FIELD("properties", m_properties);
    CRDTP_SERIALIZE_FIELD("parentId", m_parentId);
    CRDTP_SERIALIZE_FIELD("childIds", m_childIds);
    CRDTP_SERIALIZE_FIELD("backendDOMNodeId", m_backendDOMNodeId);
    CRDTP_SERIALIZE_FIELD("frameId", m_frameId);
CRDTP_END_SERIALIZER();


// ------------- Enum values from params.


// ------------- Frontend notifications.

void Frontend::loadComplete(std::unique_ptr<protocol::Accessibility::AXNode> root)
{
    if (!frontend_channel_)
        return;
    crdtp::ObjectSerializer serializer;
    serializer.AddField(crdtp::MakeSpan("root"), root);
    frontend_channel_->SendProtocolNotification(crdtp::CreateNotification("Accessibility.loadComplete", serializer.Finish()));
}

void Frontend::nodesUpdated(std::unique_ptr<protocol::Array<protocol::Accessibility::AXNode>> nodes)
{
    if (!frontend_channel_)
        return;
    crdtp::ObjectSerializer serializer;
    serializer.AddField(crdtp::MakeSpan("nodes"), nodes);
    frontend_channel_->SendProtocolNotification(crdtp::CreateNotification("Accessibility.nodesUpdated", serializer.Finish()));
}

void Frontend::flush()
{
    frontend_channel_->FlushProtocolNotifications();
}

void Frontend::sendRawNotification(std::unique_ptr<Serializable> notification)
{
    frontend_channel_->SendProtocolNotification(std::move(notification));
}

// --------------------- Dispatcher.

class DomainDispatcherImpl : public protocol::DomainDispatcher {
public:
    DomainDispatcherImpl(FrontendChannel* frontendChannel, Backend* backend)
        : DomainDispatcher(frontendChannel)
        , m_backend(backend) {}
    ~DomainDispatcherImpl() override { }

    using CallHandler = void (DomainDispatcherImpl::*)(const crdtp::Dispatchable& dispatchable);

    std::function<void(const crdtp::Dispatchable&)> Dispatch(crdtp::span<uint8_t> command_name) override;

    void disable(const crdtp::Dispatchable& dispatchable);
    void enable(const crdtp::Dispatchable& dispatchable);
    void getPartialAXTree(const crdtp::Dispatchable& dispatchable);
    void getFullAXTree(const crdtp::Dispatchable& dispatchable);
    void getRootAXNode(const crdtp::Dispatchable& dispatchable);
    void getAXNodeAndAncestors(const crdtp::Dispatchable& dispatchable);
    void getChildAXNodes(const crdtp::Dispatchable& dispatchable);
    void queryAXTree(const crdtp::Dispatchable& dispatchable);
 protected:
    Backend* m_backend;
};

namespace {
// This helper method with a static map of command methods (instance methods
// of DomainDispatcherImpl declared just above) by their name is used immediately below,
// in the DomainDispatcherImpl::Dispatch method.
DomainDispatcherImpl::CallHandler CommandByName(crdtp::span<uint8_t> command_name) {
  static auto* commands = [](){
    auto* commands = new std::vector<std::pair<crdtp::span<uint8_t>,
                              DomainDispatcherImpl::CallHandler>>{
    {
          crdtp::SpanFrom("disable"),
          &DomainDispatcherImpl::disable
    },
    {
          crdtp::SpanFrom("enable"),
          &DomainDispatcherImpl::enable
    },
    {
          crdtp::SpanFrom("getAXNodeAndAncestors"),
          &DomainDispatcherImpl::getAXNodeAndAncestors
    },
    {
          crdtp::SpanFrom("getChildAXNodes"),
          &DomainDispatcherImpl::getChildAXNodes
    },
    {
          crdtp::SpanFrom("getFullAXTree"),
          &DomainDispatcherImpl::getFullAXTree
    },
    {
          crdtp::SpanFrom("getPartialAXTree"),
          &DomainDispatcherImpl::getPartialAXTree
    },
    {
          crdtp::SpanFrom("getRootAXNode"),
          &DomainDispatcherImpl::getRootAXNode
    },
    {
          crdtp::SpanFrom("queryAXTree"),
          &DomainDispatcherImpl::queryAXTree
    },
    };
    return commands;
  }();
  return crdtp::FindByFirst<DomainDispatcherImpl::CallHandler>(*commands, command_name, nullptr);
}
}  // namespace

std::function<void(const crdtp::Dispatchable&)> DomainDispatcherImpl::Dispatch(crdtp::span<uint8_t> command_name) {
  CallHandler handler = CommandByName(command_name);
  if (!handler) return nullptr;

  return [this, handler](const crdtp::Dispatchable& dispatchable) {
    (this->*handler)(dispatchable);
  };
}


namespace {


}  // namespace

void DomainDispatcherImpl::disable(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->disable();
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Accessibility.disable"), dispatchable.Serialized());
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(dispatchable.CallId(), response);
    return;
}

namespace {


}  // namespace

void DomainDispatcherImpl::enable(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->enable();
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Accessibility.enable"), dispatchable.Serialized());
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(dispatchable.CallId(), response);
    return;
}

namespace {

struct getPartialAXTreeParams : public crdtp::DeserializableProtocolObject<getPartialAXTreeParams> {
    Maybe<int> nodeId;
    Maybe<int> backendNodeId;
    Maybe<String> objectId;
    Maybe<bool> fetchRelatives;
    DECLARE_DESERIALIZATION_SUPPORT();
};

CRDTP_BEGIN_DESERIALIZER(getPartialAXTreeParams)
    CRDTP_DESERIALIZE_FIELD_OPT("backendNodeId", backendNodeId),
    CRDTP_DESERIALIZE_FIELD_OPT("fetchRelatives", fetchRelatives),
    CRDTP_DESERIALIZE_FIELD_OPT("nodeId", nodeId),
    CRDTP_DESERIALIZE_FIELD_OPT("objectId", objectId),
CRDTP_END_DESERIALIZER()

}  // namespace

void DomainDispatcherImpl::getPartialAXTree(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.
    auto deserializer = crdtp::DeferredMessage::FromSpan(dispatchable.Params())->MakeDeserializer();
    getPartialAXTreeParams params;
    if (!getPartialAXTreeParams::Deserialize(&deserializer, &params)) {
      ReportInvalidParams(dispatchable, deserializer);
      return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::Array<protocol::Accessibility::AXNode>> out_nodes;

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getPartialAXTree(std::move(params.nodeId), std::move(params.backendNodeId), std::move(params.objectId), std::move(params.fetchRelatives), &out_nodes);
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Accessibility.getPartialAXTree"), dispatchable.Serialized());
        return;
    }
      if (weak->get()) {
        std::unique_ptr<crdtp::Serializable> result;
        if (response.IsSuccess()) {
          crdtp::ObjectSerializer serializer;
          serializer.AddField(crdtp::MakeSpan("nodes"), out_nodes);
          result = serializer.Finish();
        } else {
          result = Serializable::From({});
        }
        weak->get()->sendResponse(dispatchable.CallId(), response, std::move(result));
      }
    return;
}

namespace {

struct getFullAXTreeParams : public crdtp::DeserializableProtocolObject<getFullAXTreeParams> {
    Maybe<int> depth;
    Maybe<String> frameId;
    DECLARE_DESERIALIZATION_SUPPORT();
};

CRDTP_BEGIN_DESERIALIZER(getFullAXTreeParams)
    CRDTP_DESERIALIZE_FIELD_OPT("depth", depth),
    CRDTP_DESERIALIZE_FIELD_OPT("frameId", frameId),
CRDTP_END_DESERIALIZER()

}  // namespace

void DomainDispatcherImpl::getFullAXTree(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.
    auto deserializer = crdtp::DeferredMessage::FromSpan(dispatchable.Params())->MakeDeserializer();
    getFullAXTreeParams params;
    if (!getFullAXTreeParams::Deserialize(&deserializer, &params)) {
      ReportInvalidParams(dispatchable, deserializer);
      return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::Array<protocol::Accessibility::AXNode>> out_nodes;

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getFullAXTree(std::move(params.depth), std::move(params.frameId), &out_nodes);
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Accessibility.getFullAXTree"), dispatchable.Serialized());
        return;
    }
      if (weak->get()) {
        std::unique_ptr<crdtp::Serializable> result;
        if (response.IsSuccess()) {
          crdtp::ObjectSerializer serializer;
          serializer.AddField(crdtp::MakeSpan("nodes"), out_nodes);
          result = serializer.Finish();
        } else {
          result = Serializable::From({});
        }
        weak->get()->sendResponse(dispatchable.CallId(), response, std::move(result));
      }
    return;
}

namespace {

struct getRootAXNodeParams : public crdtp::DeserializableProtocolObject<getRootAXNodeParams> {
    Maybe<String> frameId;
    DECLARE_DESERIALIZATION_SUPPORT();
};

CRDTP_BEGIN_DESERIALIZER(getRootAXNodeParams)
    CRDTP_DESERIALIZE_FIELD_OPT("frameId", frameId),
CRDTP_END_DESERIALIZER()

}  // namespace

void DomainDispatcherImpl::getRootAXNode(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.
    auto deserializer = crdtp::DeferredMessage::FromSpan(dispatchable.Params())->MakeDeserializer();
    getRootAXNodeParams params;
    if (!getRootAXNodeParams::Deserialize(&deserializer, &params)) {
      ReportInvalidParams(dispatchable, deserializer);
      return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::Accessibility::AXNode> out_node;

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getRootAXNode(std::move(params.frameId), &out_node);
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Accessibility.getRootAXNode"), dispatchable.Serialized());
        return;
    }
      if (weak->get()) {
        std::unique_ptr<crdtp::Serializable> result;
        if (response.IsSuccess()) {
          crdtp::ObjectSerializer serializer;
          serializer.AddField(crdtp::MakeSpan("node"), out_node);
          result = serializer.Finish();
        } else {
          result = Serializable::From({});
        }
        weak->get()->sendResponse(dispatchable.CallId(), response, std::move(result));
      }
    return;
}

namespace {

struct getAXNodeAndAncestorsParams : public crdtp::DeserializableProtocolObject<getAXNodeAndAncestorsParams> {
    Maybe<int> nodeId;
    Maybe<int> backendNodeId;
    Maybe<String> objectId;
    DECLARE_DESERIALIZATION_SUPPORT();
};

CRDTP_BEGIN_DESERIALIZER(getAXNodeAndAncestorsParams)
    CRDTP_DESERIALIZE_FIELD_OPT("backendNodeId", backendNodeId),
    CRDTP_DESERIALIZE_FIELD_OPT("nodeId", nodeId),
    CRDTP_DESERIALIZE_FIELD_OPT("objectId", objectId),
CRDTP_END_DESERIALIZER()

}  // namespace

void DomainDispatcherImpl::getAXNodeAndAncestors(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.
    auto deserializer = crdtp::DeferredMessage::FromSpan(dispatchable.Params())->MakeDeserializer();
    getAXNodeAndAncestorsParams params;
    if (!getAXNodeAndAncestorsParams::Deserialize(&deserializer, &params)) {
      ReportInvalidParams(dispatchable, deserializer);
      return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::Array<protocol::Accessibility::AXNode>> out_nodes;

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getAXNodeAndAncestors(std::move(params.nodeId), std::move(params.backendNodeId), std::move(params.objectId), &out_nodes);
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Accessibility.getAXNodeAndAncestors"), dispatchable.Serialized());
        return;
    }
      if (weak->get()) {
        std::unique_ptr<crdtp::Serializable> result;
        if (response.IsSuccess()) {
          crdtp::ObjectSerializer serializer;
          serializer.AddField(crdtp::MakeSpan("nodes"), out_nodes);
          result = serializer.Finish();
        } else {
          result = Serializable::From({});
        }
        weak->get()->sendResponse(dispatchable.CallId(), response, std::move(result));
      }
    return;
}

namespace {

struct getChildAXNodesParams : public crdtp::DeserializableProtocolObject<getChildAXNodesParams> {
    String id;
    Maybe<String> frameId;
    DECLARE_DESERIALIZATION_SUPPORT();
};

CRDTP_BEGIN_DESERIALIZER(getChildAXNodesParams)
    CRDTP_DESERIALIZE_FIELD_OPT("frameId", frameId),
    CRDTP_DESERIALIZE_FIELD("id", id),
CRDTP_END_DESERIALIZER()

}  // namespace

void DomainDispatcherImpl::getChildAXNodes(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.
    auto deserializer = crdtp::DeferredMessage::FromSpan(dispatchable.Params())->MakeDeserializer();
    getChildAXNodesParams params;
    if (!getChildAXNodesParams::Deserialize(&deserializer, &params)) {
      ReportInvalidParams(dispatchable, deserializer);
      return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::Array<protocol::Accessibility::AXNode>> out_nodes;

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getChildAXNodes(params.id, std::move(params.frameId), &out_nodes);
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Accessibility.getChildAXNodes"), dispatchable.Serialized());
        return;
    }
      if (weak->get()) {
        std::unique_ptr<crdtp::Serializable> result;
        if (response.IsSuccess()) {
          crdtp::ObjectSerializer serializer;
          serializer.AddField(crdtp::MakeSpan("nodes"), out_nodes);
          result = serializer.Finish();
        } else {
          result = Serializable::From({});
        }
        weak->get()->sendResponse(dispatchable.CallId(), response, std::move(result));
      }
    return;
}

namespace {

struct queryAXTreeParams : public crdtp::DeserializableProtocolObject<queryAXTreeParams> {
    Maybe<int> nodeId;
    Maybe<int> backendNodeId;
    Maybe<String> objectId;
    Maybe<String> accessibleName;
    Maybe<String> role;
    DECLARE_DESERIALIZATION_SUPPORT();
};

CRDTP_BEGIN_DESERIALIZER(queryAXTreeParams)
    CRDTP_DESERIALIZE_FIELD_OPT("accessibleName", accessibleName),
    CRDTP_DESERIALIZE_FIELD_OPT("backendNodeId", backendNodeId),
    CRDTP_DESERIALIZE_FIELD_OPT("nodeId", nodeId),
    CRDTP_DESERIALIZE_FIELD_OPT("objectId", objectId),
    CRDTP_DESERIALIZE_FIELD_OPT("role", role),
CRDTP_END_DESERIALIZER()

}  // namespace

void DomainDispatcherImpl::queryAXTree(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.
    auto deserializer = crdtp::DeferredMessage::FromSpan(dispatchable.Params())->MakeDeserializer();
    queryAXTreeParams params;
    if (!queryAXTreeParams::Deserialize(&deserializer, &params)) {
      ReportInvalidParams(dispatchable, deserializer);
      return;
    }
    // Declare output parameters.
    std::unique_ptr<protocol::Array<protocol::Accessibility::AXNode>> out_nodes;

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->queryAXTree(std::move(params.nodeId), std::move(params.backendNodeId), std::move(params.objectId), std::move(params.accessibleName), std::move(params.role), &out_nodes);
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Accessibility.queryAXTree"), dispatchable.Serialized());
        return;
    }
      if (weak->get()) {
        std::unique_ptr<crdtp::Serializable> result;
        if (response.IsSuccess()) {
          crdtp::ObjectSerializer serializer;
          serializer.AddField(crdtp::MakeSpan("nodes"), out_nodes);
          result = serializer.Finish();
        } else {
          result = Serializable::From({});
        }
        weak->get()->sendResponse(dispatchable.CallId(), response, std::move(result));
      }
    return;
}

namespace {
// This helper method (with a static map of redirects) is used from Dispatcher::wire
// immediately below.
const std::vector<std::pair<crdtp::span<uint8_t>, crdtp::span<uint8_t>>>& SortedRedirects() {
  static auto* redirects = [](){
    auto* redirects = new std::vector<std::pair<crdtp::span<uint8_t>, crdtp::span<uint8_t>>>{
    };
    return redirects;
  }();
  return *redirects;
}
}  // namespace

// static
void Dispatcher::wire(UberDispatcher* uber, Backend* backend)
{
    auto dispatcher = std::make_unique<DomainDispatcherImpl>(uber->channel(), backend);
    uber->WireBackend(crdtp::SpanFrom("Accessibility"), SortedRedirects(), std::move(dispatcher));
}

} // Accessibility
} // namespace blink
} // namespace protocol
