// This file is generated by TypeBuilder_h.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ui_devtools_protocol_Page_h
#define ui_devtools_protocol_Page_h

#include "components/ui_devtools/devtools_export.h"
#include "components/ui_devtools/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.
#include "components/ui_devtools/dom.h"

namespace ui_devtools {
namespace protocol {
namespace Page {
using ResourceType = String;
class Frame;
class FrameResource;
class FrameResourceTree;

// ------------- Forward and enum declarations.

namespace ResourceTypeEnum {
UI_DEVTOOLS_EXPORT extern const char Document[];
UI_DEVTOOLS_EXPORT extern const char Stylesheet[];
UI_DEVTOOLS_EXPORT extern const char Image[];
UI_DEVTOOLS_EXPORT extern const char Media[];
UI_DEVTOOLS_EXPORT extern const char Font[];
UI_DEVTOOLS_EXPORT extern const char Script[];
UI_DEVTOOLS_EXPORT extern const char TextTrack[];
UI_DEVTOOLS_EXPORT extern const char XHR[];
UI_DEVTOOLS_EXPORT extern const char Fetch[];
UI_DEVTOOLS_EXPORT extern const char EventSource[];
UI_DEVTOOLS_EXPORT extern const char WebSocket[];
UI_DEVTOOLS_EXPORT extern const char Manifest[];
UI_DEVTOOLS_EXPORT extern const char Other[];
} // namespace ResourceTypeEnum

// ------------- Type and builder declarations.

class UI_DEVTOOLS_EXPORT Frame : public ::crdtp::ProtocolObject<Frame> {
public:
    ~Frame() override { }

    String getId() { return m_id; }
    void setId(const String& value) { m_id = value; }

    String getUrl() { return m_url; }
    void setUrl(const String& value) { m_url = value; }

    template<int STATE>
    class FrameBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            IdSet = 1 << 1,
            UrlSet = 1 << 2,
            AllFieldsSet = (IdSet | UrlSet | 0)};


        FrameBuilder<STATE | IdSet>& setId(const String& value)
        {
            static_assert(!(STATE & IdSet), "property id should not be set yet");
            m_result->setId(value);
            return castState<IdSet>();
        }

        FrameBuilder<STATE | UrlSet>& setUrl(const String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->setUrl(value);
            return castState<UrlSet>();
        }

        std::unique_ptr<Frame> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Frame;
        FrameBuilder() : m_result(new Frame()) { }

        template<int STEP> FrameBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<FrameBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::Frame> m_result;
    };

    static FrameBuilder<0> create()
    {
        return FrameBuilder<0>();
    }

private:
    DECLARE_SERIALIZATION_SUPPORT();

    Frame()
    {
    }

    String m_id;
    String m_url;
};


class UI_DEVTOOLS_EXPORT FrameResource : public ::crdtp::ProtocolObject<FrameResource> {
public:
    ~FrameResource() override { }

    String getUrl() { return m_url; }
    void setUrl(const String& value) { m_url = value; }

    String getType() { return m_type; }
    void setType(const String& value) { m_type = value; }

    String getMimeType() { return m_mimeType; }
    void setMimeType(const String& value) { m_mimeType = value; }

    template<int STATE>
    class FrameResourceBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            UrlSet = 1 << 1,
            TypeSet = 1 << 2,
            MimeTypeSet = 1 << 3,
            AllFieldsSet = (UrlSet | TypeSet | MimeTypeSet | 0)};


        FrameResourceBuilder<STATE | UrlSet>& setUrl(const String& value)
        {
            static_assert(!(STATE & UrlSet), "property url should not be set yet");
            m_result->setUrl(value);
            return castState<UrlSet>();
        }

        FrameResourceBuilder<STATE | TypeSet>& setType(const String& value)
        {
            static_assert(!(STATE & TypeSet), "property type should not be set yet");
            m_result->setType(value);
            return castState<TypeSet>();
        }

        FrameResourceBuilder<STATE | MimeTypeSet>& setMimeType(const String& value)
        {
            static_assert(!(STATE & MimeTypeSet), "property mimeType should not be set yet");
            m_result->setMimeType(value);
            return castState<MimeTypeSet>();
        }

        std::unique_ptr<FrameResource> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class FrameResource;
        FrameResourceBuilder() : m_result(new FrameResource()) { }

        template<int STEP> FrameResourceBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<FrameResourceBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::FrameResource> m_result;
    };

    static FrameResourceBuilder<0> create()
    {
        return FrameResourceBuilder<0>();
    }

private:
    DECLARE_SERIALIZATION_SUPPORT();

    FrameResource()
    {
    }

    String m_url;
    String m_type;
    String m_mimeType;
};


class UI_DEVTOOLS_EXPORT FrameResourceTree : public ::crdtp::ProtocolObject<FrameResourceTree> {
public:
    ~FrameResourceTree() override { }

    protocol::Page::Frame* getFrame() { return m_frame.get(); }
    void setFrame(std::unique_ptr<protocol::Page::Frame> value) { m_frame = std::move(value); }

    bool hasChildFrames() { return m_childFrames.isJust(); }
    protocol::Array<protocol::Page::FrameResourceTree>* getChildFrames(protocol::Array<protocol::Page::FrameResourceTree>* defaultValue) { return m_childFrames.isJust() ? m_childFrames.fromJust() : defaultValue; }
    void setChildFrames(std::unique_ptr<protocol::Array<protocol::Page::FrameResourceTree>> value) { m_childFrames = std::move(value); }

    protocol::Array<protocol::Page::FrameResource>* getResources() { return m_resources.get(); }
    void setResources(std::unique_ptr<protocol::Array<protocol::Page::FrameResource>> value) { m_resources = std::move(value); }

    template<int STATE>
    class FrameResourceTreeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            FrameSet = 1 << 1,
            ResourcesSet = 1 << 2,
            AllFieldsSet = (FrameSet | ResourcesSet | 0)};


        FrameResourceTreeBuilder<STATE | FrameSet>& setFrame(std::unique_ptr<protocol::Page::Frame> value)
        {
            static_assert(!(STATE & FrameSet), "property frame should not be set yet");
            m_result->setFrame(std::move(value));
            return castState<FrameSet>();
        }

        FrameResourceTreeBuilder<STATE>& setChildFrames(std::unique_ptr<protocol::Array<protocol::Page::FrameResourceTree>> value)
        {
            m_result->setChildFrames(std::move(value));
            return *this;
        }

        FrameResourceTreeBuilder<STATE | ResourcesSet>& setResources(std::unique_ptr<protocol::Array<protocol::Page::FrameResource>> value)
        {
            static_assert(!(STATE & ResourcesSet), "property resources should not be set yet");
            m_result->setResources(std::move(value));
            return castState<ResourcesSet>();
        }

        std::unique_ptr<FrameResourceTree> build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class FrameResourceTree;
        FrameResourceTreeBuilder() : m_result(new FrameResourceTree()) { }

        template<int STEP> FrameResourceTreeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<FrameResourceTreeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Page::FrameResourceTree> m_result;
    };

    static FrameResourceTreeBuilder<0> create()
    {
        return FrameResourceTreeBuilder<0>();
    }

private:
    DECLARE_SERIALIZATION_SUPPORT();

    FrameResourceTree()
    {
    }

    std::unique_ptr<protocol::Page::Frame> m_frame;
    Maybe<protocol::Array<protocol::Page::FrameResourceTree>> m_childFrames;
    std::unique_ptr<protocol::Array<protocol::Page::FrameResource>> m_resources;
};


// ------------- Backend interface.

class UI_DEVTOOLS_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse disable() = 0;
    virtual DispatchResponse enable() = 0;
    virtual DispatchResponse reload(Maybe<bool> in_ignoreCache) = 0;
    virtual DispatchResponse getResourceTree(std::unique_ptr<protocol::Page::FrameResourceTree>* out_frameTree) = 0;
    virtual DispatchResponse getResourceContent(const String& in_frameId, const String& in_url, String* out_content, bool* out_base64Encoded) = 0;

};

// ------------- Frontend interface.

class UI_DEVTOOLS_EXPORT Frontend {
public:
  explicit Frontend(FrontendChannel* frontend_channel) : frontend_channel_(frontend_channel) {}

  void flush();
  void sendRawNotification(std::unique_ptr<Serializable>);
 private:
  FrontendChannel* frontend_channel_;
};

// ------------- Dispatcher.

class UI_DEVTOOLS_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class UI_DEVTOOLS_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace Page
} // namespace ui_devtools
} // namespace protocol

#endif // !defined(ui_devtools_protocol_Page_h)
