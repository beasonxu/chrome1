// This file is generated by TypeBuilder_cpp.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "third_party/blink/renderer/core/inspector/protocol/io.h"

#include "third_party/blink/renderer/core/inspector/protocol/protocol.h"

#include "third_party/inspector_protocol/crdtp/cbor.h"
#include "third_party/inspector_protocol/crdtp/find_by_first.h"
#include "third_party/inspector_protocol/crdtp/span.h"

namespace blink {
namespace protocol {
namespace IO {

using crdtp::DeserializerState;
using crdtp::ProtocolTypeTraits;

// ------------- Enum values from types.

const char Metainfo::domainName[] = "IO";
const char Metainfo::commandPrefix[] = "IO.";
const char Metainfo::version[] = "1.3";

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

    void resolveBlob(const crdtp::Dispatchable& dispatchable);
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
          crdtp::SpanFrom("resolveBlob"),
          &DomainDispatcherImpl::resolveBlob
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

struct resolveBlobParams : public crdtp::DeserializableProtocolObject<resolveBlobParams> {
    String objectId;
    DECLARE_DESERIALIZATION_SUPPORT();
};

CRDTP_BEGIN_DESERIALIZER(resolveBlobParams)
    CRDTP_DESERIALIZE_FIELD("objectId", objectId),
CRDTP_END_DESERIALIZER()

}  // namespace

void DomainDispatcherImpl::resolveBlob(const crdtp::Dispatchable& dispatchable)
{
    // Prepare input parameters.
    auto deserializer = crdtp::DeferredMessage::FromSpan(dispatchable.Params())->MakeDeserializer();
    resolveBlobParams params;
    if (!resolveBlobParams::Deserialize(&deserializer, &params)) {
      ReportInvalidParams(dispatchable, deserializer);
      return;
    }
    // Declare output parameters.
    String out_uuid;

    std::unique_ptr<DomainDispatcher::WeakPtr> weak = weakPtr();
    DispatchResponse response = m_backend->resolveBlob(params.objectId, &out_uuid);
    if (response.IsFallThrough()) {
        channel()->FallThrough(dispatchable.CallId(), crdtp::SpanFrom("IO.resolveBlob"), dispatchable.Serialized());
        return;
    }
      if (weak->get()) {
        std::unique_ptr<crdtp::Serializable> result;
        if (response.IsSuccess()) {
          crdtp::ObjectSerializer serializer;
          serializer.AddField(crdtp::MakeSpan("uuid"), out_uuid);
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
    uber->WireBackend(crdtp::SpanFrom("IO"), SortedRedirects(), std::move(dispatcher));
}

} // IO
} // namespace blink
} // namespace protocol
