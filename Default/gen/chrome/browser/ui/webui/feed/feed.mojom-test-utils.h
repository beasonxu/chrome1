// chrome/browser/ui/webui/feed/feed.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_FEED_FEED_MOJOM_TEST_UTILS_H_
#define CHROME_BROWSER_UI_WEBUI_FEED_FEED_MOJOM_TEST_UTILS_H_

#include "chrome/browser/ui/webui/feed/feed.mojom.h"


namespace feed {
namespace mojom {


class  FeedSidePanelHandlerFactoryInterceptorForTesting : public FeedSidePanelHandlerFactory {
  virtual FeedSidePanelHandlerFactory* GetForwardingInterface() = 0;
  void CreateFeedSidePanelHandler(::mojo::PendingReceiver<FeedSidePanelHandler> handler, ::mojo::PendingRemote<FeedSidePanel> side_panel) override;
};
class  FeedSidePanelHandlerFactoryAsyncWaiter {
 public:
  explicit FeedSidePanelHandlerFactoryAsyncWaiter(FeedSidePanelHandlerFactory* proxy);

  FeedSidePanelHandlerFactoryAsyncWaiter(const FeedSidePanelHandlerFactoryAsyncWaiter&) = delete;
  FeedSidePanelHandlerFactoryAsyncWaiter& operator=(const FeedSidePanelHandlerFactoryAsyncWaiter&) = delete;

  ~FeedSidePanelHandlerFactoryAsyncWaiter();

 private:
  FeedSidePanelHandlerFactory* const proxy_;
};


class  FeedSidePanelHandlerInterceptorForTesting : public FeedSidePanelHandler {
  virtual FeedSidePanelHandler* GetForwardingInterface() = 0;
  void DoSomething() override;
};
class  FeedSidePanelHandlerAsyncWaiter {
 public:
  explicit FeedSidePanelHandlerAsyncWaiter(FeedSidePanelHandler* proxy);

  FeedSidePanelHandlerAsyncWaiter(const FeedSidePanelHandlerAsyncWaiter&) = delete;
  FeedSidePanelHandlerAsyncWaiter& operator=(const FeedSidePanelHandlerAsyncWaiter&) = delete;

  ~FeedSidePanelHandlerAsyncWaiter();

 private:
  FeedSidePanelHandler* const proxy_;
};


class  FeedSidePanelInterceptorForTesting : public FeedSidePanel {
  virtual FeedSidePanel* GetForwardingInterface() = 0;
  void OnEventOccurred(const std::string& name) override;
};
class  FeedSidePanelAsyncWaiter {
 public:
  explicit FeedSidePanelAsyncWaiter(FeedSidePanel* proxy);

  FeedSidePanelAsyncWaiter(const FeedSidePanelAsyncWaiter&) = delete;
  FeedSidePanelAsyncWaiter& operator=(const FeedSidePanelAsyncWaiter&) = delete;

  ~FeedSidePanelAsyncWaiter();

 private:
  FeedSidePanel* const proxy_;
};




}  // namespace mojom
}  // namespace feed

#endif  // CHROME_BROWSER_UI_WEBUI_FEED_FEED_MOJOM_TEST_UTILS_H_