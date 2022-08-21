// media/mojo/mojom/media_drm_storage.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_MEDIA_DRM_STORAGE_MOJOM_BLINK_TEST_UTILS_H_
#define MEDIA_MOJO_MOJOM_MEDIA_DRM_STORAGE_MOJOM_BLINK_TEST_UTILS_H_

#include "media/mojo/mojom/media_drm_storage.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace media {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT MediaDrmStorageInterceptorForTesting : public MediaDrmStorage {
  virtual MediaDrmStorage* GetForwardingInterface() = 0;
  void Initialize(InitializeCallback callback) override;
  void OnProvisioned(OnProvisionedCallback callback) override;
  void SavePersistentSession(const WTF::String& session_id, SessionDataPtr session_data, SavePersistentSessionCallback callback) override;
  void LoadPersistentSession(const WTF::String& session_id, LoadPersistentSessionCallback callback) override;
  void RemovePersistentSession(const WTF::String& session_id, RemovePersistentSessionCallback callback) override;
};
class BLINK_PLATFORM_EXPORT MediaDrmStorageAsyncWaiter {
 public:
  explicit MediaDrmStorageAsyncWaiter(MediaDrmStorage* proxy);

  MediaDrmStorageAsyncWaiter(const MediaDrmStorageAsyncWaiter&) = delete;
  MediaDrmStorageAsyncWaiter& operator=(const MediaDrmStorageAsyncWaiter&) = delete;

  ~MediaDrmStorageAsyncWaiter();
  void Initialize(
      bool* out_success, absl::optional<::base::UnguessableToken>* out_origin_id);
  void OnProvisioned(
      bool* out_success);
  void SavePersistentSession(
      const WTF::String& session_id, SessionDataPtr session_data, bool* out_success);
  void LoadPersistentSession(
      const WTF::String& session_id, SessionDataPtr* out_session_data);
  void RemovePersistentSession(
      const WTF::String& session_id, bool* out_success);

 private:
  MediaDrmStorage* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_MOJOM_MEDIA_DRM_STORAGE_MOJOM_BLINK_TEST_UTILS_H_