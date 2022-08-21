// third_party/blink/public/mojom/clipboard/clipboard.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT ClipboardHostInterceptorForTesting : public ClipboardHost {
  virtual ClipboardHost* GetForwardingInterface() = 0;
  void GetSequenceNumber(ClipboardBuffer buffer, GetSequenceNumberCallback callback) override;
  void IsFormatAvailable(ClipboardFormat format, ClipboardBuffer buffer, IsFormatAvailableCallback callback) override;
  void ReadAvailableTypes(ClipboardBuffer buffer, ReadAvailableTypesCallback callback) override;
  void ReadText(ClipboardBuffer buffer, ReadTextCallback callback) override;
  void ReadHtml(ClipboardBuffer buffer, ReadHtmlCallback callback) override;
  void ReadSvg(ClipboardBuffer buffer, ReadSvgCallback callback) override;
  void ReadRtf(ClipboardBuffer buffer, ReadRtfCallback callback) override;
  void ReadPng(ClipboardBuffer buffer, ReadPngCallback callback) override;
  void ReadFiles(ClipboardBuffer buffer, ReadFilesCallback callback) override;
  void ReadCustomData(ClipboardBuffer buffer, const ::WTF::String& type, ReadCustomDataCallback callback) override;
  void ReadAvailableCustomAndStandardFormats(ReadAvailableCustomAndStandardFormatsCallback callback) override;
  void ReadUnsanitizedCustomFormat(const ::WTF::String& format, ReadUnsanitizedCustomFormatCallback callback) override;
  void WriteText(const ::WTF::String& text) override;
  void WriteHtml(const ::WTF::String& markup, const ::blink::KURL& url) override;
  void WriteSvg(const ::WTF::String& markup) override;
  void WriteSmartPasteMarker() override;
  void WriteCustomData(const WTF::HashMap<::WTF::String, ::WTF::String>& data) override;
  void WriteBookmark(const WTF::String& url, const ::WTF::String& title) override;
  void WriteImage(const ::SkBitmap& image) override;
  void WriteUnsanitizedCustomFormat(const ::WTF::String& format, ::mojo_base::BigBuffer data) override;
  void CommitWrite() override;
};
class PLATFORM_EXPORT ClipboardHostAsyncWaiter {
 public:
  explicit ClipboardHostAsyncWaiter(ClipboardHost* proxy);

  ClipboardHostAsyncWaiter(const ClipboardHostAsyncWaiter&) = delete;
  ClipboardHostAsyncWaiter& operator=(const ClipboardHostAsyncWaiter&) = delete;

  ~ClipboardHostAsyncWaiter();
  void GetSequenceNumber(
      ClipboardBuffer buffer, ::blink::ClipboardSequenceNumberToken* out_result);
  void IsFormatAvailable(
      ClipboardFormat format, ClipboardBuffer buffer, bool* out_result);
  void ReadAvailableTypes(
      ClipboardBuffer buffer, WTF::Vector<::WTF::String>* out_types);
  void ReadText(
      ClipboardBuffer buffer, ::WTF::String* out_result);
  void ReadHtml(
      ClipboardBuffer buffer, ::WTF::String* out_markup, ::blink::KURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end);
  void ReadSvg(
      ClipboardBuffer buffer, ::WTF::String* out_result);
  void ReadRtf(
      ClipboardBuffer buffer, ::WTF::String* out_result);
  void ReadPng(
      ClipboardBuffer buffer, ::mojo_base::BigBuffer* out_png);
  void ReadFiles(
      ClipboardBuffer buffer, ClipboardFilesPtr* out_result);
  void ReadCustomData(
      ClipboardBuffer buffer, const ::WTF::String& type, ::WTF::String* out_result);
  void ReadAvailableCustomAndStandardFormats(
      WTF::Vector<::WTF::String>* out_format_types);
  void ReadUnsanitizedCustomFormat(
      const ::WTF::String& format, ::mojo_base::BigBuffer* out_data);

 private:
  ClipboardHost* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_BLINK_TEST_UTILS_H_