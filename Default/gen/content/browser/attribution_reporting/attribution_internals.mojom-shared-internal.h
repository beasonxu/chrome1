// content/browser/attribution_reporting/attribution_internals.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_BROWSER_ATTRIBUTION_REPORTING_ATTRIBUTION_INTERNALS_MOJOM_SHARED_INTERNAL_H_
#define CONTENT_BROWSER_ATTRIBUTION_REPORTING_ATTRIBUTION_INTERNALS_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "url/mojom/origin.mojom-shared-internal.h"
#include "url/mojom/url.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace attribution_internals {
namespace mojom {
namespace internal {
class EventLevelReportID_Data;
class AggregatableAttributionReportID_Data;
class WebUIReportEventLevelData_Data;
class AggregatableHistogramContribution_Data;
class WebUIReportAggregatableAttributionData_Data;
class Empty_Data;
class WebUIReport_Data;
class DebugKey_Data;
class WebUISource_Data;
class DedupKey_Data;
class WebUIEventTriggerData_Data;
class WebUIAggregatableTriggerData_Data;
class WebUITrigger_Data;
class ReportID_Data;
class WebUIReportData_Data;
class ReportStatus_Data;

struct SourceType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct ReportType_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct WebUISource_Attributability_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

struct WebUITrigger_Status_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 9:
      case 10:
      case 11:
      case 12:
      case 13:
      case 14:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)


class  ReportID_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  ReportID_Data() = default;
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~ReportID_Data() = default;

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<ReportID_Tag>(0);
    data.unknown = 0U;
  }

  // TODO(crbug.com/1148486): SHOUTY_CASE values are being deprecated per C++ code style
  // guidelines (https://google.github.io/styleguide/cppguide.html#Enumerator_Names),
  // please use kCamelCase values instead.  Cleanup NULL_VALUE, BOOL_VALUE, INT_VALUE, etc.
  // generation once codebase is transitioned to kNullValue, kBoolValue, kIntValue, etc.
  enum class ReportID_Tag : uint32_t {

    
    kEventLevelId,
    
    kAggregatableAttributionId,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::EventLevelReportID_Data> f_event_level_id;
    mojo::internal::Pointer<internal::AggregatableAttributionReportID_Data> f_aggregatable_attribution_id;
    uint64_t unknown;
  };

  uint32_t size;
  ReportID_Tag tag;
  Union_ data;
};
static_assert(sizeof(ReportID_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(ReportID_Data)");


class  WebUIReportData_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  WebUIReportData_Data() = default;
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~WebUIReportData_Data() = default;

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<WebUIReportData_Tag>(0);
    data.unknown = 0U;
  }

  // TODO(crbug.com/1148486): SHOUTY_CASE values are being deprecated per C++ code style
  // guidelines (https://google.github.io/styleguide/cppguide.html#Enumerator_Names),
  // please use kCamelCase values instead.  Cleanup NULL_VALUE, BOOL_VALUE, INT_VALUE, etc.
  // generation once codebase is transitioned to kNullValue, kBoolValue, kIntValue, etc.
  enum class WebUIReportData_Tag : uint32_t {

    
    kEventLevelData,
    
    kAggregatableAttributionData,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::WebUIReportEventLevelData_Data> f_event_level_data;
    mojo::internal::Pointer<internal::WebUIReportAggregatableAttributionData_Data> f_aggregatable_attribution_data;
    uint64_t unknown;
  };

  uint32_t size;
  WebUIReportData_Tag tag;
  Union_ data;
};
static_assert(sizeof(WebUIReportData_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(WebUIReportData_Data)");


class  ReportStatus_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  ReportStatus_Data() = default;
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~ReportStatus_Data() = default;

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<ReportStatus_Tag>(0);
    data.unknown = 0U;
  }

  // TODO(crbug.com/1148486): SHOUTY_CASE values are being deprecated per C++ code style
  // guidelines (https://google.github.io/styleguide/cppguide.html#Enumerator_Names),
  // please use kCamelCase values instead.  Cleanup NULL_VALUE, BOOL_VALUE, INT_VALUE, etc.
  // generation once codebase is transitioned to kNullValue, kBoolValue, kIntValue, etc.
  enum class ReportStatus_Tag : uint32_t {

    
    kPending,
    
    kReplacedByHigherPriorityReport,
    
    kProhibitedByBrowserPolicy,
    
    kSent,
    
    kNetworkError,
    
    kFailedToAssemble,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::Empty_Data> f_pending;
    mojo::internal::Pointer<mojo::internal::String_Data> f_replaced_by_higher_priority_report;
    mojo::internal::Pointer<internal::Empty_Data> f_prohibited_by_browser_policy;
    int32_t f_sent;
    mojo::internal::Pointer<mojo::internal::String_Data> f_network_error;
    mojo::internal::Pointer<internal::Empty_Data> f_failed_to_assemble;
    uint64_t unknown;
  };

  uint32_t size;
  ReportStatus_Tag tag;
  Union_ data;
};
static_assert(sizeof(ReportStatus_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(ReportStatus_Data)");
class  EventLevelReportID_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t value;

 private:
  friend class mojo::internal::MessageFragment<EventLevelReportID_Data>;

  EventLevelReportID_Data();
  ~EventLevelReportID_Data() = delete;
};
static_assert(sizeof(EventLevelReportID_Data) == 16,
              "Bad sizeof(EventLevelReportID_Data)");
// Used by EventLevelReportID::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct EventLevelReportID_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  EventLevelReportID_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~EventLevelReportID_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<EventLevelReportID_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    EventLevelReportID_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  AggregatableAttributionReportID_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t value;

 private:
  friend class mojo::internal::MessageFragment<AggregatableAttributionReportID_Data>;

  AggregatableAttributionReportID_Data();
  ~AggregatableAttributionReportID_Data() = delete;
};
static_assert(sizeof(AggregatableAttributionReportID_Data) == 16,
              "Bad sizeof(AggregatableAttributionReportID_Data)");
// Used by AggregatableAttributionReportID::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AggregatableAttributionReportID_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AggregatableAttributionReportID_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AggregatableAttributionReportID_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<AggregatableAttributionReportID_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AggregatableAttributionReportID_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WebUIReportEventLevelData_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int64_t priority;
  uint8_t attributed_truthfully : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<WebUIReportEventLevelData_Data>;

  WebUIReportEventLevelData_Data();
  ~WebUIReportEventLevelData_Data() = delete;
};
static_assert(sizeof(WebUIReportEventLevelData_Data) == 24,
              "Bad sizeof(WebUIReportEventLevelData_Data)");
// Used by WebUIReportEventLevelData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebUIReportEventLevelData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebUIReportEventLevelData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebUIReportEventLevelData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<WebUIReportEventLevelData_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebUIReportEventLevelData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  AggregatableHistogramContribution_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key;
  uint32_t value;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<AggregatableHistogramContribution_Data>;

  AggregatableHistogramContribution_Data();
  ~AggregatableHistogramContribution_Data() = delete;
};
static_assert(sizeof(AggregatableHistogramContribution_Data) == 24,
              "Bad sizeof(AggregatableHistogramContribution_Data)");
// Used by AggregatableHistogramContribution::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct AggregatableHistogramContribution_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  AggregatableHistogramContribution_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~AggregatableHistogramContribution_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<AggregatableHistogramContribution_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    AggregatableHistogramContribution_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WebUIReportAggregatableAttributionData_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::AggregatableHistogramContribution_Data>>> contributions;

 private:
  friend class mojo::internal::MessageFragment<WebUIReportAggregatableAttributionData_Data>;

  WebUIReportAggregatableAttributionData_Data();
  ~WebUIReportAggregatableAttributionData_Data() = delete;
};
static_assert(sizeof(WebUIReportAggregatableAttributionData_Data) == 16,
              "Bad sizeof(WebUIReportAggregatableAttributionData_Data)");
// Used by WebUIReportAggregatableAttributionData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebUIReportAggregatableAttributionData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebUIReportAggregatableAttributionData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebUIReportAggregatableAttributionData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<WebUIReportAggregatableAttributionData_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebUIReportAggregatableAttributionData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  Empty_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<Empty_Data>;

  Empty_Data();
  ~Empty_Data() = delete;
};
static_assert(sizeof(Empty_Data) == 8,
              "Bad sizeof(Empty_Data)");
// Used by Empty::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct Empty_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  Empty_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~Empty_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<Empty_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    Empty_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WebUIReport_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  internal::ReportID_Data id;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> report_url;
  double trigger_time;
  double report_time;
  mojo::internal::Pointer<mojo::internal::String_Data> report_body;
  internal::ReportStatus_Data status;
  internal::WebUIReportData_Data data;

 private:
  friend class mojo::internal::MessageFragment<WebUIReport_Data>;

  WebUIReport_Data();
  ~WebUIReport_Data() = delete;
};
static_assert(sizeof(WebUIReport_Data) == 88,
              "Bad sizeof(WebUIReport_Data)");
// Used by WebUIReport::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebUIReport_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebUIReport_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebUIReport_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<WebUIReport_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebUIReport_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DebugKey_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t value;

 private:
  friend class mojo::internal::MessageFragment<DebugKey_Data>;

  DebugKey_Data();
  ~DebugKey_Data() = delete;
};
static_assert(sizeof(DebugKey_Data) == 16,
              "Bad sizeof(DebugKey_Data)");
// Used by DebugKey::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DebugKey_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DebugKey_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DebugKey_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DebugKey_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DebugKey_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WebUISource_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t source_event_id;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> source_origin;
  mojo::internal::Pointer<mojo::internal::String_Data> attribution_destination;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> reporting_origin;
  double source_time;
  double expiry_time;
  int32_t source_type;
  int32_t attributability;
  int64_t priority;
  mojo::internal::Pointer<internal::DebugKey_Data> debug_key;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint64_t>> dedup_keys;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> filter_data;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::String_Data>>> aggregation_keys;

 private:
  friend class mojo::internal::MessageFragment<WebUISource_Data>;

  WebUISource_Data();
  ~WebUISource_Data() = delete;
};
static_assert(sizeof(WebUISource_Data) == 104,
              "Bad sizeof(WebUISource_Data)");
// Used by WebUISource::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebUISource_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebUISource_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebUISource_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<WebUISource_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebUISource_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DedupKey_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t value;

 private:
  friend class mojo::internal::MessageFragment<DedupKey_Data>;

  DedupKey_Data();
  ~DedupKey_Data() = delete;
};
static_assert(sizeof(DedupKey_Data) == 16,
              "Bad sizeof(DedupKey_Data)");
// Used by DedupKey::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DedupKey_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DedupKey_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DedupKey_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DedupKey_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DedupKey_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WebUIEventTriggerData_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint64_t data;
  int64_t priority;
  mojo::internal::Pointer<internal::DedupKey_Data> dedup_key;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> filters;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> not_filters;

 private:
  friend class mojo::internal::MessageFragment<WebUIEventTriggerData_Data>;

  WebUIEventTriggerData_Data();
  ~WebUIEventTriggerData_Data() = delete;
};
static_assert(sizeof(WebUIEventTriggerData_Data) == 48,
              "Bad sizeof(WebUIEventTriggerData_Data)");
// Used by WebUIEventTriggerData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebUIEventTriggerData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebUIEventTriggerData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebUIEventTriggerData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<WebUIEventTriggerData_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebUIEventTriggerData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WebUIAggregatableTriggerData_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> key_piece;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>> source_keys;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> filters;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> not_filters;

 private:
  friend class mojo::internal::MessageFragment<WebUIAggregatableTriggerData_Data>;

  WebUIAggregatableTriggerData_Data();
  ~WebUIAggregatableTriggerData_Data() = delete;
};
static_assert(sizeof(WebUIAggregatableTriggerData_Data) == 40,
              "Bad sizeof(WebUIAggregatableTriggerData_Data)");
// Used by WebUIAggregatableTriggerData::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebUIAggregatableTriggerData_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebUIAggregatableTriggerData_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebUIAggregatableTriggerData_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<WebUIAggregatableTriggerData_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebUIAggregatableTriggerData_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  WebUITrigger_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  double trigger_time;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> destination_origin;
  mojo::internal::Pointer<::url::mojom::internal::Origin_Data> reporting_origin;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> filters;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<mojo::internal::String_Data>>>>> not_filters;
  mojo::internal::Pointer<internal::DebugKey_Data> debug_key;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::WebUIEventTriggerData_Data>>> event_triggers;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::WebUIAggregatableTriggerData_Data>>> aggregatable_triggers;
  mojo::internal::Pointer<mojo::internal::Map_Data<mojo::internal::Pointer<mojo::internal::String_Data>, uint32_t>> aggregatable_values;
  int32_t event_level_status;
  int32_t aggregatable_status;

 private:
  friend class mojo::internal::MessageFragment<WebUITrigger_Data>;

  WebUITrigger_Data();
  ~WebUITrigger_Data() = delete;
};
static_assert(sizeof(WebUITrigger_Data) == 88,
              "Bad sizeof(WebUITrigger_Data)");
// Used by WebUITrigger::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct WebUITrigger_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  WebUITrigger_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~WebUITrigger_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<WebUITrigger_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    WebUITrigger_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace attribution_internals

#endif  // CONTENT_BROWSER_ATTRIBUTION_REPORTING_ATTRIBUTION_INTERNALS_MOJOM_SHARED_INTERNAL_H_