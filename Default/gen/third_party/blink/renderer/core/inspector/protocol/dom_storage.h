// This file is generated by TypeBuilder_h.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef blink_protocol_DOMStorage_h
#define blink_protocol_DOMStorage_h

#include "third_party/blink/renderer/core/core_export.h"
#include "third_party/blink/renderer/core/inspector/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace blink {
namespace protocol {
namespace DOMStorage {
using SerializedStorageKey = String;
class StorageId;

// ------------- Forward and enum declarations.

// ------------- Type and builder declarations.

class CORE_EXPORT StorageId : public ::crdtp::ProtocolObject<StorageId> {
public:
    ~StorageId() override { }

    bool hasSecurityOrigin() { return m_securityOrigin.isJust(); }
    String getSecurityOrigin(const String& defaultValue) { return m_securityOrigin.isJust() ? m_securityOrigin.fromJust() : defaultValue; }
    void setSecurityOrigin(const String& value) { m_securityOrigin = value; }

    bool hasStorageKey() { return m_storageKey.isJust(); }
    String getStorageKey(const String& defaultValue) { return m_storageKey.isJust() ? m_storageKey.fromJust() : defaultValue; }
    void setStorageKey(const String& value) { m_storageKey = value; }

    bool getIsLocalStorage() { return m_isLocalStorage; }
    void setIsLocalStorage(bool value) { m_isLocalStorage = value; }

    template<int STATE>
    class StorageIdBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            IsLocalStorageSet = 1 << 1,
            AllFieldsSet = (IsLocalStorageSet | 0)};


        StorageIdBuilder<STATE>& setSecurityOrigin(const String& value)
        {
            m_result->setSecurityOrigin(value);
            return *this;
        }

        StorageIdBuilder<STATE>& setStorageKey(const String& value)
        {
            m_result->setStorageKey(value);
            return *this;
        }

        StorageIdBuilder<STATE | IsLocalStorageSet>& setIsLocalStorage(bool value)
        {
            static_assert(!(STATE & IsLocalStorageSet), "property isLocalStorage should not be set yet");
            m_result->setIsLocalStorage(value);
            return castState<IsLocalStorageSet>();
        }

        std::unique_ptr<StorageId> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class StorageId;
        StorageIdBuilder() : m_result(new StorageId()) { }

        template<int STEP> StorageIdBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<StorageIdBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::DOMStorage::StorageId> m_result;
    };

    static StorageIdBuilder<0> create()
    {
        return StorageIdBuilder<0>();
    }

private:
    DECLARE_SERIALIZATION_SUPPORT();

    StorageId()
    {
          m_isLocalStorage = false;
    }

    Maybe<String> m_securityOrigin;
    Maybe<String> m_storageKey;
    bool m_isLocalStorage;
};


// ------------- Backend interface.

class CORE_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse clear(std::unique_ptr<protocol::DOMStorage::StorageId> in_storageId) = 0;
    virtual DispatchResponse disable() = 0;
    virtual DispatchResponse enable() = 0;
    virtual DispatchResponse getDOMStorageItems(std::unique_ptr<protocol::DOMStorage::StorageId> in_storageId, std::unique_ptr<protocol::Array<protocol::Array<String>>>* out_entries) = 0;
    virtual DispatchResponse removeDOMStorageItem(std::unique_ptr<protocol::DOMStorage::StorageId> in_storageId, const String& in_key) = 0;
    virtual DispatchResponse setDOMStorageItem(std::unique_ptr<protocol::DOMStorage::StorageId> in_storageId, const String& in_key, const String& in_value) = 0;

};

// ------------- Frontend interface.

class CORE_EXPORT Frontend {
public:
  explicit Frontend(FrontendChannel* frontend_channel) : frontend_channel_(frontend_channel) {}
    void domStorageItemAdded(std::unique_ptr<protocol::DOMStorage::StorageId> storageId, const String& key, const String& newValue);
    void domStorageItemRemoved(std::unique_ptr<protocol::DOMStorage::StorageId> storageId, const String& key);
    void domStorageItemUpdated(std::unique_ptr<protocol::DOMStorage::StorageId> storageId, const String& key, const String& oldValue, const String& newValue);
    void domStorageItemsCleared(std::unique_ptr<protocol::DOMStorage::StorageId> storageId);

  void flush();
  void sendRawNotification(std::unique_ptr<Serializable>);
 private:
  FrontendChannel* frontend_channel_;
};

// ------------- Dispatcher.

class CORE_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CORE_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace DOMStorage
} // namespace blink
} // namespace protocol

#endif // !defined(blink_protocol_DOMStorage_h)
