// third_party/blink/public/mojom/content_index/content_index.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTENT_INDEX_CONTENT_INDEX_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTENT_INDEX_CONTENT_INDEX_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/content_index/content_index.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ContentIndexServiceInterceptorForTesting : public ContentIndexService {
  virtual ContentIndexService* GetForwardingInterface() = 0;
  void GetIconSizes(ContentCategory category, GetIconSizesCallback callback) override;
  void CheckOfflineCapability(int64_t service_worker_registration_id, const ::GURL& launch_url, CheckOfflineCapabilityCallback callback) override;
  void Add(int64_t service_worker_registration_id, ContentDescriptionPtr description, const std::vector<::SkBitmap>& icon, const ::GURL& launchUrl, AddCallback callback) override;
  void Delete(int64_t service_worker_registration_id, const std::string& id, DeleteCallback callback) override;
  void GetDescriptions(int64_t service_worker_registration_id, GetDescriptionsCallback callback) override;
};
class BLINK_COMMON_EXPORT ContentIndexServiceAsyncWaiter {
 public:
  explicit ContentIndexServiceAsyncWaiter(ContentIndexService* proxy);

  ContentIndexServiceAsyncWaiter(const ContentIndexServiceAsyncWaiter&) = delete;
  ContentIndexServiceAsyncWaiter& operator=(const ContentIndexServiceAsyncWaiter&) = delete;

  ~ContentIndexServiceAsyncWaiter();
  void GetIconSizes(
      ContentCategory category, std::vector<::gfx::Size>* out_icon_sizes);
  void CheckOfflineCapability(
      int64_t service_worker_registration_id, const ::GURL& launch_url, bool* out_is_offline_capable);
  void Add(
      int64_t service_worker_registration_id, ContentDescriptionPtr description, const std::vector<::SkBitmap>& icon, const ::GURL& launchUrl, ContentIndexError* out_error);
  void Delete(
      int64_t service_worker_registration_id, const std::string& id, ContentIndexError* out_error);
  void GetDescriptions(
      int64_t service_worker_registration_id, ContentIndexError* out_error, std::vector<ContentDescriptionPtr>* out_descriptions);

 private:
  ContentIndexService* const proxy_;
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CONTENT_INDEX_CONTENT_INDEX_MOJOM_TEST_UTILS_H_