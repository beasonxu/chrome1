// third_party/blink/public/mojom/shared_storage/shared_storage.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SHARED_STORAGE_SHARED_STORAGE_MOJOM_BLINK_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SHARED_STORAGE_SHARED_STORAGE_MOJOM_BLINK_TEST_UTILS_H_

#include "third_party/blink/public/mojom/shared_storage/shared_storage.mojom-blink.h"
#include "third_party/blink/renderer/platform/platform_export.h"


namespace blink {
namespace mojom {
namespace blink {


class PLATFORM_EXPORT SharedStorageDocumentServiceInterceptorForTesting : public SharedStorageDocumentService {
  virtual SharedStorageDocumentService* GetForwardingInterface() = 0;
  void AddModuleOnWorklet(const ::blink::KURL& script_source_url, AddModuleOnWorkletCallback callback) override;
  void RunOperationOnWorklet(const WTF::String& name, const WTF::Vector<uint8_t>& serialized_data, RunOperationOnWorkletCallback callback) override;
  void RunURLSelectionOperationOnWorklet(const WTF::String& name, WTF::Vector<SharedStorageUrlWithMetadataPtr> urls_with_metadata, const WTF::Vector<uint8_t>& serialized_data, RunURLSelectionOperationOnWorkletCallback callback) override;
  void SharedStorageSet(const ::WTF::String& key, const ::WTF::String& value, bool ignore_if_present, SharedStorageSetCallback callback) override;
  void SharedStorageAppend(const ::WTF::String& key, const ::WTF::String& value, SharedStorageAppendCallback callback) override;
  void SharedStorageDelete(const ::WTF::String& key, SharedStorageDeleteCallback callback) override;
  void SharedStorageClear(SharedStorageClearCallback callback) override;
};
class PLATFORM_EXPORT SharedStorageDocumentServiceAsyncWaiter {
 public:
  explicit SharedStorageDocumentServiceAsyncWaiter(SharedStorageDocumentService* proxy);

  SharedStorageDocumentServiceAsyncWaiter(const SharedStorageDocumentServiceAsyncWaiter&) = delete;
  SharedStorageDocumentServiceAsyncWaiter& operator=(const SharedStorageDocumentServiceAsyncWaiter&) = delete;

  ~SharedStorageDocumentServiceAsyncWaiter();
  void AddModuleOnWorklet(
      const ::blink::KURL& script_source_url, bool* out_success, WTF::String* out_error_message);
  void RunOperationOnWorklet(
      const WTF::String& name, const WTF::Vector<uint8_t>& serialized_data, bool* out_success, WTF::String* out_error_message);
  void RunURLSelectionOperationOnWorklet(
      const WTF::String& name, WTF::Vector<SharedStorageUrlWithMetadataPtr> urls_with_metadata, const WTF::Vector<uint8_t>& serialized_data, bool* out_success, WTF::String* out_error_message, ::blink::KURL* out_opaque_url);
  void SharedStorageSet(
      const ::WTF::String& key, const ::WTF::String& value, bool ignore_if_present, bool* out_success, WTF::String* out_error_message);
  void SharedStorageAppend(
      const ::WTF::String& key, const ::WTF::String& value, bool* out_success, WTF::String* out_error_message);
  void SharedStorageDelete(
      const ::WTF::String& key, bool* out_success, WTF::String* out_error_message);
  void SharedStorageClear(
      bool* out_success, WTF::String* out_error_message);

 private:
  SharedStorageDocumentService* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SHARED_STORAGE_SHARED_STORAGE_MOJOM_BLINK_TEST_UTILS_H_