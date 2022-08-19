// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/public/browser/service_process_info.h"

#include "base/process/process.h"

namespace content {

ServiceProcessInfo::ServiceProcessInfo(const std::string& name,
                                       const ServiceProcessId& id,
                                       base::Process process)
    : service_interface_name_(name),
      service_process_id_(id),
      process_(std::move(process)) {}

ServiceProcessInfo::ServiceProcessInfo(ServiceProcessInfo&&) = default;
ServiceProcessInfo& ServiceProcessInfo::operator=(ServiceProcessInfo&&) =
    default;

ServiceProcessInfo::~ServiceProcessInfo() = default;

ServiceProcessInfo ServiceProcessInfo::Duplicate() const {
  return ServiceProcessInfo(service_interface_name_, service_process_id_,
                            process_.Duplicate());
}

}  // namespace content
