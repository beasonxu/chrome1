// mojo/public/interfaces/bindings/interface_control_messages.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/debug/alias.h"
#include "base/hash/md5_constexpr.h"
#include "base/run_loop.h"
#include "base/strings/string_number_conversions.h"
#include "base/trace_event/trace_event.h"
#include "base/trace_event/typed_macros.h"
#include "mojo/public/cpp/bindings/lib/generated_code_util.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/send_message_helper.h"
#include "mojo/public/cpp/bindings/lib/proxy_to_responder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "mojo/public/interfaces/bindings/interface_control_messages.mojom-params-data.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom-shared-message-ids.h"

#include "mojo/public/interfaces/bindings/interface_control_messages.mojom-import-headers.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom-test-utils.h"


#ifndef MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_JUMBO_H_
#define MOJO_PUBLIC_INTERFACES_BINDINGS_INTERFACE_CONTROL_MESSAGES_MOJOM_JUMBO_H_
#endif



namespace mojo {
namespace interface_control {
RunMessageParams::RunMessageParams()
    : input() {}

RunMessageParams::RunMessageParams(
    RunInputPtr input_in)
    : input(std::move(input_in)) {}

RunMessageParams::~RunMessageParams() = default;
size_t RunMessageParams::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->input);
  return seed;
}

void RunMessageParams::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "input"), this->input,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type RunInputPtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool RunMessageParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RunResponseMessageParams::RunResponseMessageParams()
    : output() {}

RunResponseMessageParams::RunResponseMessageParams(
    RunOutputPtr output_in)
    : output(std::move(output_in)) {}

RunResponseMessageParams::~RunResponseMessageParams() = default;

void RunResponseMessageParams::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "output"), this->output,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type RunOutputPtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool RunResponseMessageParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
QueryVersion::QueryVersion() {}

QueryVersion::~QueryVersion() = default;
size_t QueryVersion::Hash(size_t seed) const {
  return seed;
}

void QueryVersion::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
}

bool QueryVersion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
QueryVersionResult::QueryVersionResult()
    : version() {}

QueryVersionResult::QueryVersionResult(
    uint32_t version_in)
    : version(std::move(version_in)) {}

QueryVersionResult::~QueryVersionResult() = default;
size_t QueryVersionResult::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->version);
  return seed;
}

void QueryVersionResult::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "version"), this->version,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool QueryVersionResult::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
FlushForTesting::FlushForTesting() {}

FlushForTesting::~FlushForTesting() = default;
size_t FlushForTesting::Hash(size_t seed) const {
  return seed;
}

void FlushForTesting::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
}

bool FlushForTesting::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RunOrClosePipeMessageParams::RunOrClosePipeMessageParams()
    : input() {}

RunOrClosePipeMessageParams::RunOrClosePipeMessageParams(
    RunOrClosePipeInputPtr input_in)
    : input(std::move(input_in)) {}

RunOrClosePipeMessageParams::~RunOrClosePipeMessageParams() = default;
size_t RunOrClosePipeMessageParams::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->input);
  return seed;
}

void RunOrClosePipeMessageParams::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "input"), this->input,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type RunOrClosePipeInputPtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool RunOrClosePipeMessageParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RequireVersion::RequireVersion()
    : version() {}

RequireVersion::RequireVersion(
    uint32_t version_in)
    : version(std::move(version_in)) {}

RequireVersion::~RequireVersion() = default;
size_t RequireVersion::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->version);
  return seed;
}

void RequireVersion::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "version"), this->version,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type uint32_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool RequireVersion::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
EnableIdleTracking::EnableIdleTracking()
    : timeout_in_microseconds() {}

EnableIdleTracking::EnableIdleTracking(
    int64_t timeout_in_microseconds_in)
    : timeout_in_microseconds(std::move(timeout_in_microseconds_in)) {}

EnableIdleTracking::~EnableIdleTracking() = default;
size_t EnableIdleTracking::Hash(size_t seed) const {
  seed = mojo::internal::Hash(seed, this->timeout_in_microseconds);
  return seed;
}

void EnableIdleTracking::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "timeout_in_microseconds"), this->timeout_in_microseconds,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type int64_t>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool EnableIdleTracking::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
MessageAck::MessageAck() {}

MessageAck::~MessageAck() = default;
size_t MessageAck::Hash(size_t seed) const {
  return seed;
}

void MessageAck::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
}

bool MessageAck::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
NotifyIdle::NotifyIdle() {}

NotifyIdle::~NotifyIdle() = default;
size_t NotifyIdle::Hash(size_t seed) const {
  return seed;
}

void NotifyIdle::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
}

bool NotifyIdle::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
RunInput::RunInput() : tag_(Tag::kQueryVersion) {
  data_.query_version = new QueryVersionPtr;
}

RunInput::~RunInput() {
  DestroyActive();
}


void RunInput::set_query_version(
    QueryVersionPtr query_version) {
  if (tag_ == Tag::kQueryVersion) {
    *(data_.query_version) = std::move(query_version);
  } else {
    DestroyActive();
    tag_ = Tag::kQueryVersion;
    data_.query_version = new QueryVersionPtr(
        std::move(query_version));
  }
}
void RunInput::set_flush_for_testing(
    FlushForTestingPtr flush_for_testing) {
  if (tag_ == Tag::kFlushForTesting) {
    *(data_.flush_for_testing) = std::move(flush_for_testing);
  } else {
    DestroyActive();
    tag_ = Tag::kFlushForTesting;
    data_.flush_for_testing = new FlushForTestingPtr(
        std::move(flush_for_testing));
  }
}

void RunInput::DestroyActive() {
  switch (tag_) {

    case Tag::kQueryVersion:

      delete data_.query_version;
      break;
    case Tag::kFlushForTesting:

      delete data_.flush_for_testing;
      break;
  }
}
size_t RunInput::Hash(size_t seed) const {
  seed = mojo::internal::HashCombine(seed, static_cast<uint32_t>(tag_));
  switch (tag_) {

    case Tag::kQueryVersion:
      return mojo::internal::Hash(seed, data_.query_version);
    case Tag::kFlushForTesting:
      return mojo::internal::Hash(seed, data_.flush_for_testing);
    default:
      NOTREACHED();
      return seed;
  }
}

bool RunInput::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
RunOutput::RunOutput() : tag_(Tag::kQueryVersionResult) {
  data_.query_version_result = new QueryVersionResultPtr;
}

RunOutput::~RunOutput() {
  DestroyActive();
}


void RunOutput::set_query_version_result(
    QueryVersionResultPtr query_version_result) {
  if (tag_ == Tag::kQueryVersionResult) {
    *(data_.query_version_result) = std::move(query_version_result);
  } else {
    DestroyActive();
    tag_ = Tag::kQueryVersionResult;
    data_.query_version_result = new QueryVersionResultPtr(
        std::move(query_version_result));
  }
}

void RunOutput::DestroyActive() {
  switch (tag_) {

    case Tag::kQueryVersionResult:

      delete data_.query_version_result;
      break;
  }
}
size_t RunOutput::Hash(size_t seed) const {
  seed = mojo::internal::HashCombine(seed, static_cast<uint32_t>(tag_));
  switch (tag_) {

    case Tag::kQueryVersionResult:
      return mojo::internal::Hash(seed, data_.query_version_result);
    default:
      NOTREACHED();
      return seed;
  }
}

bool RunOutput::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}
RunOrClosePipeInput::RunOrClosePipeInput() : tag_(Tag::kRequireVersion) {
  data_.require_version = new RequireVersionPtr;
}

RunOrClosePipeInput::~RunOrClosePipeInput() {
  DestroyActive();
}


void RunOrClosePipeInput::set_require_version(
    RequireVersionPtr require_version) {
  if (tag_ == Tag::kRequireVersion) {
    *(data_.require_version) = std::move(require_version);
  } else {
    DestroyActive();
    tag_ = Tag::kRequireVersion;
    data_.require_version = new RequireVersionPtr(
        std::move(require_version));
  }
}
void RunOrClosePipeInput::set_enable_idle_tracking(
    EnableIdleTrackingPtr enable_idle_tracking) {
  if (tag_ == Tag::kEnableIdleTracking) {
    *(data_.enable_idle_tracking) = std::move(enable_idle_tracking);
  } else {
    DestroyActive();
    tag_ = Tag::kEnableIdleTracking;
    data_.enable_idle_tracking = new EnableIdleTrackingPtr(
        std::move(enable_idle_tracking));
  }
}
void RunOrClosePipeInput::set_message_ack(
    MessageAckPtr message_ack) {
  if (tag_ == Tag::kMessageAck) {
    *(data_.message_ack) = std::move(message_ack);
  } else {
    DestroyActive();
    tag_ = Tag::kMessageAck;
    data_.message_ack = new MessageAckPtr(
        std::move(message_ack));
  }
}
void RunOrClosePipeInput::set_notify_idle(
    NotifyIdlePtr notify_idle) {
  if (tag_ == Tag::kNotifyIdle) {
    *(data_.notify_idle) = std::move(notify_idle);
  } else {
    DestroyActive();
    tag_ = Tag::kNotifyIdle;
    data_.notify_idle = new NotifyIdlePtr(
        std::move(notify_idle));
  }
}

void RunOrClosePipeInput::DestroyActive() {
  switch (tag_) {

    case Tag::kRequireVersion:

      delete data_.require_version;
      break;
    case Tag::kEnableIdleTracking:

      delete data_.enable_idle_tracking;
      break;
    case Tag::kMessageAck:

      delete data_.message_ack;
      break;
    case Tag::kNotifyIdle:

      delete data_.notify_idle;
      break;
  }
}
size_t RunOrClosePipeInput::Hash(size_t seed) const {
  seed = mojo::internal::HashCombine(seed, static_cast<uint32_t>(tag_));
  switch (tag_) {

    case Tag::kRequireVersion:
      return mojo::internal::Hash(seed, data_.require_version);
    case Tag::kEnableIdleTracking:
      return mojo::internal::Hash(seed, data_.enable_idle_tracking);
    case Tag::kMessageAck:
      return mojo::internal::Hash(seed, data_.message_ack);
    case Tag::kNotifyIdle:
      return mojo::internal::Hash(seed, data_.notify_idle);
    default:
      NOTREACHED();
      return seed;
  }
}

bool RunOrClosePipeInput::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context, false);
}


}  // namespace interface_control
}  // namespace mojo


namespace mojo {


// static
bool StructTraits<::mojo::interface_control::RunMessageParams::DataView, ::mojo::interface_control::RunMessageParamsPtr>::Read(
    ::mojo::interface_control::RunMessageParams::DataView input,
    ::mojo::interface_control::RunMessageParamsPtr* output) {
  bool success = true;
  ::mojo::interface_control::RunMessageParamsPtr result(::mojo::interface_control::RunMessageParams::New());
  
      if (success && !input.ReadInput(&result->input))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::RunResponseMessageParams::DataView, ::mojo::interface_control::RunResponseMessageParamsPtr>::Read(
    ::mojo::interface_control::RunResponseMessageParams::DataView input,
    ::mojo::interface_control::RunResponseMessageParamsPtr* output) {
  bool success = true;
  ::mojo::interface_control::RunResponseMessageParamsPtr result(::mojo::interface_control::RunResponseMessageParams::New());
  
      if (success && !input.ReadOutput(&result->output))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::QueryVersion::DataView, ::mojo::interface_control::QueryVersionPtr>::Read(
    ::mojo::interface_control::QueryVersion::DataView input,
    ::mojo::interface_control::QueryVersionPtr* output) {
  bool success = true;
  ::mojo::interface_control::QueryVersionPtr result(::mojo::interface_control::QueryVersion::New());
  
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::QueryVersionResult::DataView, ::mojo::interface_control::QueryVersionResultPtr>::Read(
    ::mojo::interface_control::QueryVersionResult::DataView input,
    ::mojo::interface_control::QueryVersionResultPtr* output) {
  bool success = true;
  ::mojo::interface_control::QueryVersionResultPtr result(::mojo::interface_control::QueryVersionResult::New());
  
      if (success)
        result->version = input.version();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::FlushForTesting::DataView, ::mojo::interface_control::FlushForTestingPtr>::Read(
    ::mojo::interface_control::FlushForTesting::DataView input,
    ::mojo::interface_control::FlushForTestingPtr* output) {
  bool success = true;
  ::mojo::interface_control::FlushForTestingPtr result(::mojo::interface_control::FlushForTesting::New());
  
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::RunOrClosePipeMessageParams::DataView, ::mojo::interface_control::RunOrClosePipeMessageParamsPtr>::Read(
    ::mojo::interface_control::RunOrClosePipeMessageParams::DataView input,
    ::mojo::interface_control::RunOrClosePipeMessageParamsPtr* output) {
  bool success = true;
  ::mojo::interface_control::RunOrClosePipeMessageParamsPtr result(::mojo::interface_control::RunOrClosePipeMessageParams::New());
  
      if (success && !input.ReadInput(&result->input))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::RequireVersion::DataView, ::mojo::interface_control::RequireVersionPtr>::Read(
    ::mojo::interface_control::RequireVersion::DataView input,
    ::mojo::interface_control::RequireVersionPtr* output) {
  bool success = true;
  ::mojo::interface_control::RequireVersionPtr result(::mojo::interface_control::RequireVersion::New());
  
      if (success)
        result->version = input.version();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::EnableIdleTracking::DataView, ::mojo::interface_control::EnableIdleTrackingPtr>::Read(
    ::mojo::interface_control::EnableIdleTracking::DataView input,
    ::mojo::interface_control::EnableIdleTrackingPtr* output) {
  bool success = true;
  ::mojo::interface_control::EnableIdleTrackingPtr result(::mojo::interface_control::EnableIdleTracking::New());
  
      if (success)
        result->timeout_in_microseconds = input.timeout_in_microseconds();
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::MessageAck::DataView, ::mojo::interface_control::MessageAckPtr>::Read(
    ::mojo::interface_control::MessageAck::DataView input,
    ::mojo::interface_control::MessageAckPtr* output) {
  bool success = true;
  ::mojo::interface_control::MessageAckPtr result(::mojo::interface_control::MessageAck::New());
  
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::mojo::interface_control::NotifyIdle::DataView, ::mojo::interface_control::NotifyIdlePtr>::Read(
    ::mojo::interface_control::NotifyIdle::DataView input,
    ::mojo::interface_control::NotifyIdlePtr* output) {
  bool success = true;
  ::mojo::interface_control::NotifyIdlePtr result(::mojo::interface_control::NotifyIdle::New());
  
  *output = std::move(result);
  return success;
}

// static
bool UnionTraits<::mojo::interface_control::RunInput::DataView, ::mojo::interface_control::RunInputPtr>::Read(
    ::mojo::interface_control::RunInput::DataView input,
    ::mojo::interface_control::RunInputPtr* output) {
  using UnionType = ::mojo::interface_control::RunInput;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::kQueryVersion: {
      ::mojo::interface_control::QueryVersionPtr result_query_version;
      if (!input.ReadQueryVersion(&result_query_version))
        return false;

      *output = UnionType::NewQueryVersion(
          std::move(result_query_version));
      break;
    }
    case Tag::kFlushForTesting: {
      ::mojo::interface_control::FlushForTestingPtr result_flush_for_testing;
      if (!input.ReadFlushForTesting(&result_flush_for_testing))
        return false;

      *output = UnionType::NewFlushForTesting(
          std::move(result_flush_for_testing));
      break;
    }
    default:

      return false;
  }
  return true;
}

// static
bool UnionTraits<::mojo::interface_control::RunOutput::DataView, ::mojo::interface_control::RunOutputPtr>::Read(
    ::mojo::interface_control::RunOutput::DataView input,
    ::mojo::interface_control::RunOutputPtr* output) {
  using UnionType = ::mojo::interface_control::RunOutput;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::kQueryVersionResult: {
      ::mojo::interface_control::QueryVersionResultPtr result_query_version_result;
      if (!input.ReadQueryVersionResult(&result_query_version_result))
        return false;

      *output = UnionType::NewQueryVersionResult(
          std::move(result_query_version_result));
      break;
    }
    default:

      return false;
  }
  return true;
}

// static
bool UnionTraits<::mojo::interface_control::RunOrClosePipeInput::DataView, ::mojo::interface_control::RunOrClosePipeInputPtr>::Read(
    ::mojo::interface_control::RunOrClosePipeInput::DataView input,
    ::mojo::interface_control::RunOrClosePipeInputPtr* output) {
  using UnionType = ::mojo::interface_control::RunOrClosePipeInput;
  using Tag = UnionType::Tag;

  switch (input.tag()) {
    case Tag::kRequireVersion: {
      ::mojo::interface_control::RequireVersionPtr result_require_version;
      if (!input.ReadRequireVersion(&result_require_version))
        return false;

      *output = UnionType::NewRequireVersion(
          std::move(result_require_version));
      break;
    }
    case Tag::kEnableIdleTracking: {
      ::mojo::interface_control::EnableIdleTrackingPtr result_enable_idle_tracking;
      if (!input.ReadEnableIdleTracking(&result_enable_idle_tracking))
        return false;

      *output = UnionType::NewEnableIdleTracking(
          std::move(result_enable_idle_tracking));
      break;
    }
    case Tag::kMessageAck: {
      ::mojo::interface_control::MessageAckPtr result_message_ack;
      if (!input.ReadMessageAck(&result_message_ack))
        return false;

      *output = UnionType::NewMessageAck(
          std::move(result_message_ack));
      break;
    }
    case Tag::kNotifyIdle: {
      ::mojo::interface_control::NotifyIdlePtr result_notify_idle;
      if (!input.ReadNotifyIdle(&result_notify_idle))
        return false;

      *output = UnionType::NewNotifyIdle(
          std::move(result_notify_idle));
      break;
    }
    default:

      return false;
  }
  return true;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace mojo {
namespace interface_control {




}  // namespace interface_control
}  // namespace mojo


#if defined(__clang__)
#pragma clang diagnostic pop
#endif