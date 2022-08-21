// This file is generated by TypeBuilder_h.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Memory_h
#define content_protocol_Memory_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace content {
namespace protocol {
namespace Memory {
using PressureLevel = String;
class SamplingProfileNode;
class SamplingProfile;
class Module;

// ------------- Forward and enum declarations.

namespace PressureLevelEnum {
CONTENT_EXPORT extern const char Moderate[];
CONTENT_EXPORT extern const char Critical[];
} // namespace PressureLevelEnum

// ------------- Type and builder declarations.

class CONTENT_EXPORT SamplingProfileNode : public ::crdtp::ProtocolObject<SamplingProfileNode> {
public:
    ~SamplingProfileNode() override { }

    double GetSize() { return m_size; }
    void SetSize(double value) { m_size = value; }

    double GetTotal() { return m_total; }
    void SetTotal(double value) { m_total = value; }

    protocol::Array<String>* GetStack() { return m_stack.get(); }
    void SetStack(std::unique_ptr<protocol::Array<String>> value) { m_stack = std::move(value); }

    template<int STATE>
    class SamplingProfileNodeBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            SizeSet = 1 << 1,
            TotalSet = 1 << 2,
            StackSet = 1 << 3,
            AllFieldsSet = (SizeSet | TotalSet | StackSet | 0)};


        SamplingProfileNodeBuilder<STATE | SizeSet>& SetSize(double value)
        {
            static_assert(!(STATE & SizeSet), "property size should not be set yet");
            m_result->SetSize(value);
            return castState<SizeSet>();
        }

        SamplingProfileNodeBuilder<STATE | TotalSet>& SetTotal(double value)
        {
            static_assert(!(STATE & TotalSet), "property total should not be set yet");
            m_result->SetTotal(value);
            return castState<TotalSet>();
        }

        SamplingProfileNodeBuilder<STATE | StackSet>& SetStack(std::unique_ptr<protocol::Array<String>> value)
        {
            static_assert(!(STATE & StackSet), "property stack should not be set yet");
            m_result->SetStack(std::move(value));
            return castState<StackSet>();
        }

        std::unique_ptr<SamplingProfileNode> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SamplingProfileNode;
        SamplingProfileNodeBuilder() : m_result(new SamplingProfileNode()) { }

        template<int STEP> SamplingProfileNodeBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SamplingProfileNodeBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Memory::SamplingProfileNode> m_result;
    };

    static SamplingProfileNodeBuilder<0> Create()
    {
        return SamplingProfileNodeBuilder<0>();
    }

private:
    DECLARE_SERIALIZATION_SUPPORT();

    SamplingProfileNode()
    {
          m_size = 0;
          m_total = 0;
    }

    double m_size;
    double m_total;
    std::unique_ptr<protocol::Array<String>> m_stack;
};


class CONTENT_EXPORT SamplingProfile : public ::crdtp::ProtocolObject<SamplingProfile> {
public:
    ~SamplingProfile() override { }

    protocol::Array<protocol::Memory::SamplingProfileNode>* GetSamples() { return m_samples.get(); }
    void SetSamples(std::unique_ptr<protocol::Array<protocol::Memory::SamplingProfileNode>> value) { m_samples = std::move(value); }

    protocol::Array<protocol::Memory::Module>* GetModules() { return m_modules.get(); }
    void SetModules(std::unique_ptr<protocol::Array<protocol::Memory::Module>> value) { m_modules = std::move(value); }

    template<int STATE>
    class SamplingProfileBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            SamplesSet = 1 << 1,
            ModulesSet = 1 << 2,
            AllFieldsSet = (SamplesSet | ModulesSet | 0)};


        SamplingProfileBuilder<STATE | SamplesSet>& SetSamples(std::unique_ptr<protocol::Array<protocol::Memory::SamplingProfileNode>> value)
        {
            static_assert(!(STATE & SamplesSet), "property samples should not be set yet");
            m_result->SetSamples(std::move(value));
            return castState<SamplesSet>();
        }

        SamplingProfileBuilder<STATE | ModulesSet>& SetModules(std::unique_ptr<protocol::Array<protocol::Memory::Module>> value)
        {
            static_assert(!(STATE & ModulesSet), "property modules should not be set yet");
            m_result->SetModules(std::move(value));
            return castState<ModulesSet>();
        }

        std::unique_ptr<SamplingProfile> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class SamplingProfile;
        SamplingProfileBuilder() : m_result(new SamplingProfile()) { }

        template<int STEP> SamplingProfileBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<SamplingProfileBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Memory::SamplingProfile> m_result;
    };

    static SamplingProfileBuilder<0> Create()
    {
        return SamplingProfileBuilder<0>();
    }

private:
    DECLARE_SERIALIZATION_SUPPORT();

    SamplingProfile()
    {
    }

    std::unique_ptr<protocol::Array<protocol::Memory::SamplingProfileNode>> m_samples;
    std::unique_ptr<protocol::Array<protocol::Memory::Module>> m_modules;
};


class CONTENT_EXPORT Module : public ::crdtp::ProtocolObject<Module> {
public:
    ~Module() override { }

    String GetName() { return m_name; }
    void SetName(const String& value) { m_name = value; }

    String GetUuid() { return m_uuid; }
    void SetUuid(const String& value) { m_uuid = value; }

    String GetBaseAddress() { return m_baseAddress; }
    void SetBaseAddress(const String& value) { m_baseAddress = value; }

    double GetSize() { return m_size; }
    void SetSize(double value) { m_size = value; }

    template<int STATE>
    class ModuleBuilder {
    public:
        enum {
            NoFieldsSet = 0,
            NameSet = 1 << 1,
            UuidSet = 1 << 2,
            BaseAddressSet = 1 << 3,
            SizeSet = 1 << 4,
            AllFieldsSet = (NameSet | UuidSet | BaseAddressSet | SizeSet | 0)};


        ModuleBuilder<STATE | NameSet>& SetName(const String& value)
        {
            static_assert(!(STATE & NameSet), "property name should not be set yet");
            m_result->SetName(value);
            return castState<NameSet>();
        }

        ModuleBuilder<STATE | UuidSet>& SetUuid(const String& value)
        {
            static_assert(!(STATE & UuidSet), "property uuid should not be set yet");
            m_result->SetUuid(value);
            return castState<UuidSet>();
        }

        ModuleBuilder<STATE | BaseAddressSet>& SetBaseAddress(const String& value)
        {
            static_assert(!(STATE & BaseAddressSet), "property baseAddress should not be set yet");
            m_result->SetBaseAddress(value);
            return castState<BaseAddressSet>();
        }

        ModuleBuilder<STATE | SizeSet>& SetSize(double value)
        {
            static_assert(!(STATE & SizeSet), "property size should not be set yet");
            m_result->SetSize(value);
            return castState<SizeSet>();
        }

        std::unique_ptr<Module> Build()
        {
            static_assert(STATE == AllFieldsSet, "state should be AllFieldsSet");
            return std::move(m_result);
        }

    private:
        friend class Module;
        ModuleBuilder() : m_result(new Module()) { }

        template<int STEP> ModuleBuilder<STATE | STEP>& castState()
        {
            return *reinterpret_cast<ModuleBuilder<STATE | STEP>*>(this);
        }

        std::unique_ptr<protocol::Memory::Module> m_result;
    };

    static ModuleBuilder<0> Create()
    {
        return ModuleBuilder<0>();
    }

private:
    DECLARE_SERIALIZATION_SUPPORT();

    Module()
    {
          m_size = 0;
    }

    String m_name;
    String m_uuid;
    String m_baseAddress;
    double m_size;
};


// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    class CONTENT_EXPORT PrepareForLeakDetectionCallback {
    public:
        virtual void sendSuccess() = 0;
        virtual void sendFailure(const DispatchResponse&) = 0;
        virtual void fallThrough() = 0;
        virtual ~PrepareForLeakDetectionCallback() { }
    };
    virtual void PrepareForLeakDetection(std::unique_ptr<PrepareForLeakDetectionCallback> callback) = 0;
    virtual DispatchResponse SetPressureNotificationsSuppressed(bool in_suppressed) = 0;
    virtual DispatchResponse SimulatePressureNotification(const String& in_level) = 0;
    virtual DispatchResponse GetBrowserSamplingProfile(std::unique_ptr<protocol::Memory::SamplingProfile>* out_profile) = 0;

    virtual DispatchResponse Disable()
    {
        return DispatchResponse::Success();
    }
};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
  explicit Frontend(FrontendChannel* frontend_channel) : frontend_channel_(frontend_channel) {}

  void flush();
  void sendRawNotification(std::unique_ptr<Serializable>);
 private:
  FrontendChannel* frontend_channel_;
};

// ------------- Dispatcher.

class CONTENT_EXPORT Dispatcher {
public:
    static void wire(UberDispatcher*, Backend*);

private:
    Dispatcher() { }
};

// ------------- Metainfo.

class CONTENT_EXPORT Metainfo {
public:
    using BackendClass = Backend;
    using FrontendClass = Frontend;
    using DispatcherClass = Dispatcher;
    static const char domainName[];
    static const char commandPrefix[];
    static const char version[];
};

} // namespace Memory
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Memory_h)
