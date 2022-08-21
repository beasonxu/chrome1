// content/common/media/media_log_records.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_COMMON_MEDIA_MEDIA_LOG_RECORDS_MOJOM_TEST_UTILS_H_
#define CONTENT_COMMON_MEDIA_MEDIA_LOG_RECORDS_MOJOM_TEST_UTILS_H_

#include "content/common/media/media_log_records.mojom.h"
#include "content/common/content_export.h"


namespace content {
namespace mojom {


class CONTENT_EXPORT MediaInternalLogRecordsInterceptorForTesting : public MediaInternalLogRecords {
  virtual MediaInternalLogRecords* GetForwardingInterface() = 0;
  void Log(const std::vector<::media::MediaLogRecord>& events) override;
};
class CONTENT_EXPORT MediaInternalLogRecordsAsyncWaiter {
 public:
  explicit MediaInternalLogRecordsAsyncWaiter(MediaInternalLogRecords* proxy);

  MediaInternalLogRecordsAsyncWaiter(const MediaInternalLogRecordsAsyncWaiter&) = delete;
  MediaInternalLogRecordsAsyncWaiter& operator=(const MediaInternalLogRecordsAsyncWaiter&) = delete;

  ~MediaInternalLogRecordsAsyncWaiter();

 private:
  MediaInternalLogRecords* const proxy_;
};




}  // namespace mojom
}  // namespace content

#endif  // CONTENT_COMMON_MEDIA_MEDIA_LOG_RECORDS_MOJOM_TEST_UTILS_H_