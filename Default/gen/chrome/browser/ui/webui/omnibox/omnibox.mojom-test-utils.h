// chrome/browser/ui/webui/omnibox/omnibox.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_TEST_UTILS_H_
#define CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_TEST_UTILS_H_

#include "chrome/browser/ui/webui/omnibox/omnibox.mojom.h"


namespace mojom {


class  OmniboxPageHandlerInterceptorForTesting : public OmniboxPageHandler {
  virtual OmniboxPageHandler* GetForwardingInterface() = 0;
  void SetClientPage(::mojo::PendingRemote<OmniboxPage> page) override;
  void StartOmniboxQuery(const std::string& input_string, bool reset_autocomplete_controller, int32_t cursor_position, bool zero_suggest, bool prevent_inline_autocomplete, bool prefer_keyword, const std::string& current_url, int32_t page_classification) override;
};
class  OmniboxPageHandlerAsyncWaiter {
 public:
  explicit OmniboxPageHandlerAsyncWaiter(OmniboxPageHandler* proxy);

  OmniboxPageHandlerAsyncWaiter(const OmniboxPageHandlerAsyncWaiter&) = delete;
  OmniboxPageHandlerAsyncWaiter& operator=(const OmniboxPageHandlerAsyncWaiter&) = delete;

  ~OmniboxPageHandlerAsyncWaiter();

 private:
  OmniboxPageHandler* const proxy_;
};


class  OmniboxPageInterceptorForTesting : public OmniboxPage {
  virtual OmniboxPage* GetForwardingInterface() = 0;
  void HandleNewAutocompleteResponse(OmniboxResponsePtr response, bool is_page_controller) override;
  void HandleNewAutocompleteQuery(bool is_page_controller, const std::string& input_text) override;
  void HandleAnswerImageData(const std::string& image_url, const std::string& image_data) override;
};
class  OmniboxPageAsyncWaiter {
 public:
  explicit OmniboxPageAsyncWaiter(OmniboxPage* proxy);

  OmniboxPageAsyncWaiter(const OmniboxPageAsyncWaiter&) = delete;
  OmniboxPageAsyncWaiter& operator=(const OmniboxPageAsyncWaiter&) = delete;

  ~OmniboxPageAsyncWaiter();

 private:
  OmniboxPage* const proxy_;
};




}  // namespace mojom

#endif  // CHROME_BROWSER_UI_WEBUI_OMNIBOX_OMNIBOX_MOJOM_TEST_UTILS_H_