// This file is generated by TypeBuilder_h.template.

// Copyright (c) 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef content_protocol_Inspector_h
#define content_protocol_Inspector_h

#include "content/common/content_export.h"
#include "content/browser/devtools/protocol/protocol.h"
// For each imported domain we generate a ValueConversions struct instead of a full domain definition
// and include Domain::API version from there.

namespace content {
namespace protocol {
namespace Inspector {

// ------------- Forward and enum declarations.

// ------------- Type and builder declarations.

// ------------- Backend interface.

class CONTENT_EXPORT Backend {
public:
    virtual ~Backend() { }

    virtual DispatchResponse Disable() = 0;
    virtual DispatchResponse Enable() = 0;

};

// ------------- Frontend interface.

class CONTENT_EXPORT Frontend {
public:
  explicit Frontend(FrontendChannel* frontend_channel) : frontend_channel_(frontend_channel) {}
    void Detached(const String& reason);
    void TargetCrashed();
    void TargetReloadedAfterCrash();

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

} // namespace Inspector
} // namespace content
} // namespace protocol

#endif // !defined(content_protocol_Inspector_h)
