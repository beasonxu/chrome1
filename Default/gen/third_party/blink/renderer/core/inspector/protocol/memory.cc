// This file is generated by TypeBuilder_cpp.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/inspector/protocol/memory.h"

#include "third_party/blink/renderer/core/inspector/protocol/protocol.h"

#include "third_party/inspector_protocol/crdtp/cbor.h"
#include "third_party/inspector_protocol/crdtp/find_by_first.h"
#include "third_party/inspector_protocol/crdtp/span.h"

namespace blink {
namespace protocol {
namespace Memory {

using crdtp::DeserializerState;
using crdtp::ProtocolTypeTraits;

// ------------- Enum values from types.

const char Metainfo::domainName[] = "Memory";
const char Metainfo::commandPrefix[] = "Memory.";
const char Metainfo::version[] = "1.3";

CRDTP_BEGIN_DESERIALIZER(SamplingProfileNode)
    CRDTP_DESERIALIZE_FIELD("size", m_size),
    CRDTP_DESERIALIZE_FIELD("stack", m_stack),
    CRDTP_DESERIALIZE_FIELD("total", m_total),
CRDTP_END_DESERIALIZER()

CRDTP_BEGIN_SERIALIZER(SamplingProfileNode)
    CRDTP_SERIALIZE_FIELD("size", m_size);
    CRDTP_SERIALIZE_FIELD("total", m_total);
    CRDTP_SERIALIZE_FIELD("stack", m_stack);
CRDTP_END_SERIALIZER();


CRDTP_BEGIN_DESERIALIZER(SamplingProfile)
    CRDTP_DESERIALIZE_FIELD("modules", m_modules),
    CRDTP_DESERIALIZE_FIELD("samples", m_samples),
CRDTP_END_DESERIALIZER()

CRDTP_BEGIN_SERIALIZER(SamplingProfile)
    CRDTP_SERIALIZE_FIELD("samples", m_samples);
    CRDTP_SERIALIZE_FIELD("modules", m_modules);
CRDTP_END_SERIALIZER();


CRDTP_BEGIN_DESERIALIZER(Module)
    CRDTP_DESERIALIZE_FIELD("baseAddress", m_baseAddress),
    CRDTP_DESERIALIZE_FIELD("name", m_name),
    CRDTP_DESERIALIZE_FIELD("size", m_size),
    CRDTP_DESERIALIZE_FIELD("uuid", m_uuid),
CRDTP_END_DESERIALIZER()

CRDTP_BEGIN_SERIALIZER(Module)
    CRDTP_SERIALIZE_FIELD("name", m_name);
    CRDTP_SERIALIZE_FIELD("uuid", m_uuid);
    CRDTP_SERIALIZE_FIELD("baseAddress", m_baseAddress);
    CRDTP_SERIALIZE_FIELD("size", m_size);
CRDTP_END_SERIALIZER();


// ------------- Enum values from params.


// ------------- Frontend notifications.

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

    void getDOMCounters(const crdtp::Dispatchable& dispatchable);
    void forciblyPurgeJavaScriptMemory(const crdtp::Dispatchable& dispatchable);
    void startSampling(const crdtp::Dispatchable& dispatchable);
    void stopSampling(const crdtp::Dispatchable& dispatchable);
    void getAllTimeSamplingProfile(const crdtp::Dispatchable& dispatchable);
    void getSamplingProfile(const crdtp::Dispatchable& dispatchable);
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
          crdtp::SpanFrom("forciblyPurgeJavaScriptMemory"),
          &DomainDispatcherImpl::forciblyPurgeJavaScriptMemory
    },
    {
          crdtp::SpanFrom("getAllTimeSamplingProfile"),
          &DomainDispatcherImpl::getAllTimeSamplingProfile
    },
    {
          crdtp::SpanFrom("getDOMCounters"),
          &DomainDispatcherImpl::getDOMCounters
    },
    {
          crdtp::SpanFrom("getSamplingProfile"),
          &DomainDispatcherImpl::getSamplingProfile
    },
    {
          crdtp::SpanFrom("startSampling"),
          &DomainDispatcherImpl::startSampling
    },
    {
          crdtp::SpanFrom("stopSampling"),
          &DomainDispatcherImpl::stopSampling
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

void DomainDispatcherImpl::getDOMCounters(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.
    // Declare output parameters.
    int out_documents;
    int out_nodes;
    int out_jsEventListeners;

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getDOMCounters(&out_documents, &out_nodes, &out_jsEventListeners);
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Memory.getDOMCounters"), dispatchable.Serialized());
        return;
    }
      if (weak->get()) {
        std::unique_ptr<crdtp::Serializable> result;
        if (response.IsSuccess()) {
          crdtp::ObjectSerializer serializer;
          serializer.AddField(crdtp::MakeSpan("documents"), out_documents);
          serializer.AddField(crdtp::MakeSpan("nodes"), out_nodes);
          serializer.AddField(crdtp::MakeSpan("jsEventListeners"), out_jsEventListeners);
          result = serializer.Finish();
        } else {
          result = Serializable::From({});
        }
        weak->get()->sendResponse(dispatchable.CallId(), response, std::move(result));
      }
    return;
}

namespace {


}  // namespace

void DomainDispatcherImpl::forciblyPurgeJavaScriptMemory(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->forciblyPurgeJavaScriptMemory();
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Memory.forciblyPurgeJavaScriptMemory"), dispatchable.Serialized());
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(dispatchable.CallId(), response);
    return;
}

namespace {

struct startSamplingParams : public crdtp::DeserializableProtocolObject<startSamplingParams> {
    Maybe<int> samplingInterval;
    Maybe<bool> suppressRandomness;
    DECLARE_DESERIALIZATION_SUPPORT();
};

CRDTP_BEGIN_DESERIALIZER(startSamplingParams)
    CRDTP_DESERIALIZE_FIELD_OPT("samplingInterval", samplingInterval),
    CRDTP_DESERIALIZE_FIELD_OPT("suppressRandomness", suppressRandomness),
CRDTP_END_DESERIALIZER()

}  // namespace

void DomainDispatcherImpl::startSampling(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.
    auto deserializer = crdtp::DeferredMessage::FromSpan(dispatchable.Params())->MakeDeserializer();
    startSamplingParams params;
    if (!startSamplingParams::Deserialize(&deserializer, &params)) {
      ReportInvalidParams(dispatchable, deserializer);
      return;
    }

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->startSampling(std::move(params.samplingInterval), std::move(params.suppressRandomness));
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Memory.startSampling"), dispatchable.Serialized());
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(dispatchable.CallId(), response);
    return;
}

namespace {


}  // namespace

void DomainDispatcherImpl::stopSampling(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->stopSampling();
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Memory.stopSampling"), dispatchable.Serialized());
        return;
    }
    if (weak->get())
        weak->get()->sendResponse(dispatchable.CallId(), response);
    return;
}

namespace {


}  // namespace

void DomainDispatcherImpl::getAllTimeSamplingProfile(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.
    // Declare output parameters.
    std::unique_ptr<protocol::Memory::SamplingProfile> out_profile;

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getAllTimeSamplingProfile(&out_profile);
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Memory.getAllTimeSamplingProfile"), dispatchable.Serialized());
        return;
    }
      if (weak->get()) {
        std::unique_ptr<crdtp::Serializable> result;
        if (response.IsSuccess()) {
          crdtp::ObjectSerializer serializer;
          serializer.AddField(crdtp::MakeSpan("profile"), out_profile);
          result = serializer.Finish();
        } else {
          result = Serializable::From({});
        }
        weak->get()->sendResponse(dispatchable.CallId(), response, std::move(result));
      }
    return;
}

namespace {


}  // namespace

void DomainDispatcherImpl::getSamplingProfile(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.
    // Declare output parameters.
    std::unique_ptr<protocol::Memory::SamplingProfile> out_profile;

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->getSamplingProfile(&out_profile);
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("Memory.getSamplingProfile"), dispatchable.Serialized());
        return;
    }
      if (weak->get()) {
        std::unique_ptr<crdtp::Serializable> result;
        if (response.IsSuccess()) {
          crdtp::ObjectSerializer serializer;
          serializer.AddField(crdtp::MakeSpan("profile"), out_profile);
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
    uber->WireBackend(crdtp::SpanFrom("Memory"), SortedRedirects(), std::move(dispatcher));
}

} // Memory
} // namespace blink
} // namespace protocol
