// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_SERVICE_WORKER_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_SERVICE_WORKER_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_browser.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_security.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_service_worker.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_target.h"

namespace autofill_assistant {

class ErrorReporter;

namespace service_worker {

// ServiceWorker registration.
class ServiceWorkerRegistration {
 public:
  static std::unique_ptr<ServiceWorkerRegistration> Parse(const base::Value& value, ErrorReporter* errors);
  ServiceWorkerRegistration(const ServiceWorkerRegistration&) = delete;
  ServiceWorkerRegistration& operator=(const ServiceWorkerRegistration&) = delete;
  ~ServiceWorkerRegistration() { }

  std::string GetRegistrationId() const { return registration_id_; }
  void SetRegistrationId(const std::string& value) { registration_id_ = value; }

  std::string GetScopeURL() const { return scopeurl_; }
  void SetScopeURL(const std::string& value) { scopeurl_ = value; }

  bool GetIsDeleted() const { return is_deleted_; }
  void SetIsDeleted(bool value) { is_deleted_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ServiceWorkerRegistration> Clone() const;

  template<int STATE>
  class ServiceWorkerRegistrationBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kRegistrationIdSet = 1 << 1,
    kScopeURLSet = 1 << 2,
    kIsDeletedSet = 1 << 3,
      kAllRequiredFieldsSet = (kRegistrationIdSet | kScopeURLSet | kIsDeletedSet | 0)
    };

    ServiceWorkerRegistrationBuilder<STATE | kRegistrationIdSet>& SetRegistrationId(const std::string& value) {
      static_assert(!(STATE & kRegistrationIdSet), "property registrationId should not have already been set");
      result_->SetRegistrationId(value);
      return CastState<kRegistrationIdSet>();
    }

    ServiceWorkerRegistrationBuilder<STATE | kScopeURLSet>& SetScopeURL(const std::string& value) {
      static_assert(!(STATE & kScopeURLSet), "property scopeURL should not have already been set");
      result_->SetScopeURL(value);
      return CastState<kScopeURLSet>();
    }

    ServiceWorkerRegistrationBuilder<STATE | kIsDeletedSet>& SetIsDeleted(bool value) {
      static_assert(!(STATE & kIsDeletedSet), "property isDeleted should not have already been set");
      result_->SetIsDeleted(value);
      return CastState<kIsDeletedSet>();
    }

    std::unique_ptr<ServiceWorkerRegistration> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ServiceWorkerRegistration;
    ServiceWorkerRegistrationBuilder() : result_(new ServiceWorkerRegistration()) { }

    template<int STEP> ServiceWorkerRegistrationBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ServiceWorkerRegistrationBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ServiceWorkerRegistration> result_;
  };

  static ServiceWorkerRegistrationBuilder<0> Builder() {
    return ServiceWorkerRegistrationBuilder<0>();
  }

 private:
  ServiceWorkerRegistration() { }

  std::string registration_id_;
  std::string scopeurl_;
  bool is_deleted_;
};


// ServiceWorker version.
class ServiceWorkerVersion {
 public:
  static std::unique_ptr<ServiceWorkerVersion> Parse(const base::Value& value, ErrorReporter* errors);
  ServiceWorkerVersion(const ServiceWorkerVersion&) = delete;
  ServiceWorkerVersion& operator=(const ServiceWorkerVersion&) = delete;
  ~ServiceWorkerVersion() { }

  std::string GetVersionId() const { return version_id_; }
  void SetVersionId(const std::string& value) { version_id_ = value; }

  std::string GetRegistrationId() const { return registration_id_; }
  void SetRegistrationId(const std::string& value) { registration_id_ = value; }

  std::string GetScriptURL() const { return scripturl_; }
  void SetScriptURL(const std::string& value) { scripturl_ = value; }

  ::autofill_assistant::service_worker::ServiceWorkerVersionRunningStatus GetRunningStatus() const { return running_status_; }
  void SetRunningStatus(::autofill_assistant::service_worker::ServiceWorkerVersionRunningStatus value) { running_status_ = value; }

  ::autofill_assistant::service_worker::ServiceWorkerVersionStatus GetStatus() const { return status_; }
  void SetStatus(::autofill_assistant::service_worker::ServiceWorkerVersionStatus value) { status_ = value; }

  // The Last-Modified header value of the main script.
  bool HasScriptLastModified() const { return !!script_last_modified_; }
  double GetScriptLastModified() const { DCHECK(HasScriptLastModified()); return script_last_modified_.value(); }
  void SetScriptLastModified(double value) { script_last_modified_ = value; }

  // The time at which the response headers of the main script were received from the server.
  // For cached script it is the last time the cache entry was validated.
  bool HasScriptResponseTime() const { return !!script_response_time_; }
  double GetScriptResponseTime() const { DCHECK(HasScriptResponseTime()); return script_response_time_.value(); }
  void SetScriptResponseTime(double value) { script_response_time_ = value; }

  bool HasControlledClients() const { return !!controlled_clients_; }
  const std::vector<std::string>* GetControlledClients() const { DCHECK(HasControlledClients()); return &controlled_clients_.value(); }
  void SetControlledClients(std::vector<std::string> value) { controlled_clients_ = std::move(value); }

  bool HasTargetId() const { return !!target_id_; }
  std::string GetTargetId() const { DCHECK(HasTargetId()); return target_id_.value(); }
  void SetTargetId(const std::string& value) { target_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ServiceWorkerVersion> Clone() const;

  template<int STATE>
  class ServiceWorkerVersionBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kVersionIdSet = 1 << 1,
    kRegistrationIdSet = 1 << 2,
    kScriptURLSet = 1 << 3,
    kRunningStatusSet = 1 << 4,
    kStatusSet = 1 << 5,
      kAllRequiredFieldsSet = (kVersionIdSet | kRegistrationIdSet | kScriptURLSet | kRunningStatusSet | kStatusSet | 0)
    };

    ServiceWorkerVersionBuilder<STATE | kVersionIdSet>& SetVersionId(const std::string& value) {
      static_assert(!(STATE & kVersionIdSet), "property versionId should not have already been set");
      result_->SetVersionId(value);
      return CastState<kVersionIdSet>();
    }

    ServiceWorkerVersionBuilder<STATE | kRegistrationIdSet>& SetRegistrationId(const std::string& value) {
      static_assert(!(STATE & kRegistrationIdSet), "property registrationId should not have already been set");
      result_->SetRegistrationId(value);
      return CastState<kRegistrationIdSet>();
    }

    ServiceWorkerVersionBuilder<STATE | kScriptURLSet>& SetScriptURL(const std::string& value) {
      static_assert(!(STATE & kScriptURLSet), "property scriptURL should not have already been set");
      result_->SetScriptURL(value);
      return CastState<kScriptURLSet>();
    }

    ServiceWorkerVersionBuilder<STATE | kRunningStatusSet>& SetRunningStatus(::autofill_assistant::service_worker::ServiceWorkerVersionRunningStatus value) {
      static_assert(!(STATE & kRunningStatusSet), "property runningStatus should not have already been set");
      result_->SetRunningStatus(value);
      return CastState<kRunningStatusSet>();
    }

    ServiceWorkerVersionBuilder<STATE | kStatusSet>& SetStatus(::autofill_assistant::service_worker::ServiceWorkerVersionStatus value) {
      static_assert(!(STATE & kStatusSet), "property status should not have already been set");
      result_->SetStatus(value);
      return CastState<kStatusSet>();
    }

    ServiceWorkerVersionBuilder<STATE>& SetScriptLastModified(double value) {
      result_->SetScriptLastModified(value);
      return *this;
    }

    ServiceWorkerVersionBuilder<STATE>& SetScriptResponseTime(double value) {
      result_->SetScriptResponseTime(value);
      return *this;
    }

    ServiceWorkerVersionBuilder<STATE>& SetControlledClients(std::vector<std::string> value) {
      result_->SetControlledClients(std::move(value));
      return *this;
    }

    ServiceWorkerVersionBuilder<STATE>& SetTargetId(const std::string& value) {
      result_->SetTargetId(value);
      return *this;
    }

    std::unique_ptr<ServiceWorkerVersion> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ServiceWorkerVersion;
    ServiceWorkerVersionBuilder() : result_(new ServiceWorkerVersion()) { }

    template<int STEP> ServiceWorkerVersionBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ServiceWorkerVersionBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ServiceWorkerVersion> result_;
  };

  static ServiceWorkerVersionBuilder<0> Builder() {
    return ServiceWorkerVersionBuilder<0>();
  }

 private:
  ServiceWorkerVersion() { }

  std::string version_id_;
  std::string registration_id_;
  std::string scripturl_;
  ::autofill_assistant::service_worker::ServiceWorkerVersionRunningStatus running_status_;
  ::autofill_assistant::service_worker::ServiceWorkerVersionStatus status_;
  absl::optional<double> script_last_modified_;
  absl::optional<double> script_response_time_;
  absl::optional<std::vector<std::string>> controlled_clients_;
  absl::optional<std::string> target_id_;
};


// ServiceWorker error message.
class ServiceWorkerErrorMessage {
 public:
  static std::unique_ptr<ServiceWorkerErrorMessage> Parse(const base::Value& value, ErrorReporter* errors);
  ServiceWorkerErrorMessage(const ServiceWorkerErrorMessage&) = delete;
  ServiceWorkerErrorMessage& operator=(const ServiceWorkerErrorMessage&) = delete;
  ~ServiceWorkerErrorMessage() { }

  std::string GetErrorMessage() const { return error_message_; }
  void SetErrorMessage(const std::string& value) { error_message_ = value; }

  std::string GetRegistrationId() const { return registration_id_; }
  void SetRegistrationId(const std::string& value) { registration_id_ = value; }

  std::string GetVersionId() const { return version_id_; }
  void SetVersionId(const std::string& value) { version_id_ = value; }

  std::string GetSourceURL() const { return sourceurl_; }
  void SetSourceURL(const std::string& value) { sourceurl_ = value; }

  int GetLineNumber() const { return line_number_; }
  void SetLineNumber(int value) { line_number_ = value; }

  int GetColumnNumber() const { return column_number_; }
  void SetColumnNumber(int value) { column_number_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ServiceWorkerErrorMessage> Clone() const;

  template<int STATE>
  class ServiceWorkerErrorMessageBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kErrorMessageSet = 1 << 1,
    kRegistrationIdSet = 1 << 2,
    kVersionIdSet = 1 << 3,
    kSourceURLSet = 1 << 4,
    kLineNumberSet = 1 << 5,
    kColumnNumberSet = 1 << 6,
      kAllRequiredFieldsSet = (kErrorMessageSet | kRegistrationIdSet | kVersionIdSet | kSourceURLSet | kLineNumberSet | kColumnNumberSet | 0)
    };

    ServiceWorkerErrorMessageBuilder<STATE | kErrorMessageSet>& SetErrorMessage(const std::string& value) {
      static_assert(!(STATE & kErrorMessageSet), "property errorMessage should not have already been set");
      result_->SetErrorMessage(value);
      return CastState<kErrorMessageSet>();
    }

    ServiceWorkerErrorMessageBuilder<STATE | kRegistrationIdSet>& SetRegistrationId(const std::string& value) {
      static_assert(!(STATE & kRegistrationIdSet), "property registrationId should not have already been set");
      result_->SetRegistrationId(value);
      return CastState<kRegistrationIdSet>();
    }

    ServiceWorkerErrorMessageBuilder<STATE | kVersionIdSet>& SetVersionId(const std::string& value) {
      static_assert(!(STATE & kVersionIdSet), "property versionId should not have already been set");
      result_->SetVersionId(value);
      return CastState<kVersionIdSet>();
    }

    ServiceWorkerErrorMessageBuilder<STATE | kSourceURLSet>& SetSourceURL(const std::string& value) {
      static_assert(!(STATE & kSourceURLSet), "property sourceURL should not have already been set");
      result_->SetSourceURL(value);
      return CastState<kSourceURLSet>();
    }

    ServiceWorkerErrorMessageBuilder<STATE | kLineNumberSet>& SetLineNumber(int value) {
      static_assert(!(STATE & kLineNumberSet), "property lineNumber should not have already been set");
      result_->SetLineNumber(value);
      return CastState<kLineNumberSet>();
    }

    ServiceWorkerErrorMessageBuilder<STATE | kColumnNumberSet>& SetColumnNumber(int value) {
      static_assert(!(STATE & kColumnNumberSet), "property columnNumber should not have already been set");
      result_->SetColumnNumber(value);
      return CastState<kColumnNumberSet>();
    }

    std::unique_ptr<ServiceWorkerErrorMessage> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ServiceWorkerErrorMessage;
    ServiceWorkerErrorMessageBuilder() : result_(new ServiceWorkerErrorMessage()) { }

    template<int STEP> ServiceWorkerErrorMessageBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ServiceWorkerErrorMessageBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ServiceWorkerErrorMessage> result_;
  };

  static ServiceWorkerErrorMessageBuilder<0> Builder() {
    return ServiceWorkerErrorMessageBuilder<0>();
  }

 private:
  ServiceWorkerErrorMessage() { }

  std::string error_message_;
  std::string registration_id_;
  std::string version_id_;
  std::string sourceurl_;
  int line_number_;
  int column_number_;
};


// Parameters for the DeliverPushMessage command.
class DeliverPushMessageParams {
 public:
  static std::unique_ptr<DeliverPushMessageParams> Parse(const base::Value& value, ErrorReporter* errors);
  DeliverPushMessageParams(const DeliverPushMessageParams&) = delete;
  DeliverPushMessageParams& operator=(const DeliverPushMessageParams&) = delete;
  ~DeliverPushMessageParams() { }

  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  std::string GetRegistrationId() const { return registration_id_; }
  void SetRegistrationId(const std::string& value) { registration_id_ = value; }

  std::string GetData() const { return data_; }
  void SetData(const std::string& value) { data_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DeliverPushMessageParams> Clone() const;

  template<int STATE>
  class DeliverPushMessageParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
    kRegistrationIdSet = 1 << 2,
    kDataSet = 1 << 3,
      kAllRequiredFieldsSet = (kOriginSet | kRegistrationIdSet | kDataSet | 0)
    };

    DeliverPushMessageParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    DeliverPushMessageParamsBuilder<STATE | kRegistrationIdSet>& SetRegistrationId(const std::string& value) {
      static_assert(!(STATE & kRegistrationIdSet), "property registrationId should not have already been set");
      result_->SetRegistrationId(value);
      return CastState<kRegistrationIdSet>();
    }

    DeliverPushMessageParamsBuilder<STATE | kDataSet>& SetData(const std::string& value) {
      static_assert(!(STATE & kDataSet), "property data should not have already been set");
      result_->SetData(value);
      return CastState<kDataSet>();
    }

    std::unique_ptr<DeliverPushMessageParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DeliverPushMessageParams;
    DeliverPushMessageParamsBuilder() : result_(new DeliverPushMessageParams()) { }

    template<int STEP> DeliverPushMessageParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DeliverPushMessageParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DeliverPushMessageParams> result_;
  };

  static DeliverPushMessageParamsBuilder<0> Builder() {
    return DeliverPushMessageParamsBuilder<0>();
  }

 private:
  DeliverPushMessageParams() { }

  std::string origin_;
  std::string registration_id_;
  std::string data_;
};


// Result for the DeliverPushMessage command.
class DeliverPushMessageResult {
 public:
  static std::unique_ptr<DeliverPushMessageResult> Parse(const base::Value& value, ErrorReporter* errors);
  DeliverPushMessageResult(const DeliverPushMessageResult&) = delete;
  DeliverPushMessageResult& operator=(const DeliverPushMessageResult&) = delete;
  ~DeliverPushMessageResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DeliverPushMessageResult> Clone() const;

  template<int STATE>
  class DeliverPushMessageResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DeliverPushMessageResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DeliverPushMessageResult;
    DeliverPushMessageResultBuilder() : result_(new DeliverPushMessageResult()) { }

    template<int STEP> DeliverPushMessageResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DeliverPushMessageResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DeliverPushMessageResult> result_;
  };

  static DeliverPushMessageResultBuilder<0> Builder() {
    return DeliverPushMessageResultBuilder<0>();
  }

 private:
  DeliverPushMessageResult() { }

};


// Parameters for the Disable command.
class DisableParams {
 public:
  static std::unique_ptr<DisableParams> Parse(const base::Value& value, ErrorReporter* errors);
  DisableParams(const DisableParams&) = delete;
  DisableParams& operator=(const DisableParams&) = delete;
  ~DisableParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DisableParams> Clone() const;

  template<int STATE>
  class DisableParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DisableParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DisableParams;
    DisableParamsBuilder() : result_(new DisableParams()) { }

    template<int STEP> DisableParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DisableParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DisableParams> result_;
  };

  static DisableParamsBuilder<0> Builder() {
    return DisableParamsBuilder<0>();
  }

 private:
  DisableParams() { }

};


// Result for the Disable command.
class DisableResult {
 public:
  static std::unique_ptr<DisableResult> Parse(const base::Value& value, ErrorReporter* errors);
  DisableResult(const DisableResult&) = delete;
  DisableResult& operator=(const DisableResult&) = delete;
  ~DisableResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DisableResult> Clone() const;

  template<int STATE>
  class DisableResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DisableResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DisableResult;
    DisableResultBuilder() : result_(new DisableResult()) { }

    template<int STEP> DisableResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DisableResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DisableResult> result_;
  };

  static DisableResultBuilder<0> Builder() {
    return DisableResultBuilder<0>();
  }

 private:
  DisableResult() { }

};


// Parameters for the DispatchSyncEvent command.
class DispatchSyncEventParams {
 public:
  static std::unique_ptr<DispatchSyncEventParams> Parse(const base::Value& value, ErrorReporter* errors);
  DispatchSyncEventParams(const DispatchSyncEventParams&) = delete;
  DispatchSyncEventParams& operator=(const DispatchSyncEventParams&) = delete;
  ~DispatchSyncEventParams() { }

  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  std::string GetRegistrationId() const { return registration_id_; }
  void SetRegistrationId(const std::string& value) { registration_id_ = value; }

  std::string GetTag() const { return tag_; }
  void SetTag(const std::string& value) { tag_ = value; }

  bool GetLastChance() const { return last_chance_; }
  void SetLastChance(bool value) { last_chance_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DispatchSyncEventParams> Clone() const;

  template<int STATE>
  class DispatchSyncEventParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
    kRegistrationIdSet = 1 << 2,
    kTagSet = 1 << 3,
    kLastChanceSet = 1 << 4,
      kAllRequiredFieldsSet = (kOriginSet | kRegistrationIdSet | kTagSet | kLastChanceSet | 0)
    };

    DispatchSyncEventParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    DispatchSyncEventParamsBuilder<STATE | kRegistrationIdSet>& SetRegistrationId(const std::string& value) {
      static_assert(!(STATE & kRegistrationIdSet), "property registrationId should not have already been set");
      result_->SetRegistrationId(value);
      return CastState<kRegistrationIdSet>();
    }

    DispatchSyncEventParamsBuilder<STATE | kTagSet>& SetTag(const std::string& value) {
      static_assert(!(STATE & kTagSet), "property tag should not have already been set");
      result_->SetTag(value);
      return CastState<kTagSet>();
    }

    DispatchSyncEventParamsBuilder<STATE | kLastChanceSet>& SetLastChance(bool value) {
      static_assert(!(STATE & kLastChanceSet), "property lastChance should not have already been set");
      result_->SetLastChance(value);
      return CastState<kLastChanceSet>();
    }

    std::unique_ptr<DispatchSyncEventParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DispatchSyncEventParams;
    DispatchSyncEventParamsBuilder() : result_(new DispatchSyncEventParams()) { }

    template<int STEP> DispatchSyncEventParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DispatchSyncEventParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DispatchSyncEventParams> result_;
  };

  static DispatchSyncEventParamsBuilder<0> Builder() {
    return DispatchSyncEventParamsBuilder<0>();
  }

 private:
  DispatchSyncEventParams() { }

  std::string origin_;
  std::string registration_id_;
  std::string tag_;
  bool last_chance_;
};


// Result for the DispatchSyncEvent command.
class DispatchSyncEventResult {
 public:
  static std::unique_ptr<DispatchSyncEventResult> Parse(const base::Value& value, ErrorReporter* errors);
  DispatchSyncEventResult(const DispatchSyncEventResult&) = delete;
  DispatchSyncEventResult& operator=(const DispatchSyncEventResult&) = delete;
  ~DispatchSyncEventResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DispatchSyncEventResult> Clone() const;

  template<int STATE>
  class DispatchSyncEventResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DispatchSyncEventResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DispatchSyncEventResult;
    DispatchSyncEventResultBuilder() : result_(new DispatchSyncEventResult()) { }

    template<int STEP> DispatchSyncEventResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DispatchSyncEventResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DispatchSyncEventResult> result_;
  };

  static DispatchSyncEventResultBuilder<0> Builder() {
    return DispatchSyncEventResultBuilder<0>();
  }

 private:
  DispatchSyncEventResult() { }

};


// Parameters for the DispatchPeriodicSyncEvent command.
class DispatchPeriodicSyncEventParams {
 public:
  static std::unique_ptr<DispatchPeriodicSyncEventParams> Parse(const base::Value& value, ErrorReporter* errors);
  DispatchPeriodicSyncEventParams(const DispatchPeriodicSyncEventParams&) = delete;
  DispatchPeriodicSyncEventParams& operator=(const DispatchPeriodicSyncEventParams&) = delete;
  ~DispatchPeriodicSyncEventParams() { }

  std::string GetOrigin() const { return origin_; }
  void SetOrigin(const std::string& value) { origin_ = value; }

  std::string GetRegistrationId() const { return registration_id_; }
  void SetRegistrationId(const std::string& value) { registration_id_ = value; }

  std::string GetTag() const { return tag_; }
  void SetTag(const std::string& value) { tag_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DispatchPeriodicSyncEventParams> Clone() const;

  template<int STATE>
  class DispatchPeriodicSyncEventParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
    kRegistrationIdSet = 1 << 2,
    kTagSet = 1 << 3,
      kAllRequiredFieldsSet = (kOriginSet | kRegistrationIdSet | kTagSet | 0)
    };

    DispatchPeriodicSyncEventParamsBuilder<STATE | kOriginSet>& SetOrigin(const std::string& value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    DispatchPeriodicSyncEventParamsBuilder<STATE | kRegistrationIdSet>& SetRegistrationId(const std::string& value) {
      static_assert(!(STATE & kRegistrationIdSet), "property registrationId should not have already been set");
      result_->SetRegistrationId(value);
      return CastState<kRegistrationIdSet>();
    }

    DispatchPeriodicSyncEventParamsBuilder<STATE | kTagSet>& SetTag(const std::string& value) {
      static_assert(!(STATE & kTagSet), "property tag should not have already been set");
      result_->SetTag(value);
      return CastState<kTagSet>();
    }

    std::unique_ptr<DispatchPeriodicSyncEventParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DispatchPeriodicSyncEventParams;
    DispatchPeriodicSyncEventParamsBuilder() : result_(new DispatchPeriodicSyncEventParams()) { }

    template<int STEP> DispatchPeriodicSyncEventParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DispatchPeriodicSyncEventParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DispatchPeriodicSyncEventParams> result_;
  };

  static DispatchPeriodicSyncEventParamsBuilder<0> Builder() {
    return DispatchPeriodicSyncEventParamsBuilder<0>();
  }

 private:
  DispatchPeriodicSyncEventParams() { }

  std::string origin_;
  std::string registration_id_;
  std::string tag_;
};


// Result for the DispatchPeriodicSyncEvent command.
class DispatchPeriodicSyncEventResult {
 public:
  static std::unique_ptr<DispatchPeriodicSyncEventResult> Parse(const base::Value& value, ErrorReporter* errors);
  DispatchPeriodicSyncEventResult(const DispatchPeriodicSyncEventResult&) = delete;
  DispatchPeriodicSyncEventResult& operator=(const DispatchPeriodicSyncEventResult&) = delete;
  ~DispatchPeriodicSyncEventResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DispatchPeriodicSyncEventResult> Clone() const;

  template<int STATE>
  class DispatchPeriodicSyncEventResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DispatchPeriodicSyncEventResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DispatchPeriodicSyncEventResult;
    DispatchPeriodicSyncEventResultBuilder() : result_(new DispatchPeriodicSyncEventResult()) { }

    template<int STEP> DispatchPeriodicSyncEventResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DispatchPeriodicSyncEventResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DispatchPeriodicSyncEventResult> result_;
  };

  static DispatchPeriodicSyncEventResultBuilder<0> Builder() {
    return DispatchPeriodicSyncEventResultBuilder<0>();
  }

 private:
  DispatchPeriodicSyncEventResult() { }

};


// Parameters for the Enable command.
class EnableParams {
 public:
  static std::unique_ptr<EnableParams> Parse(const base::Value& value, ErrorReporter* errors);
  EnableParams(const EnableParams&) = delete;
  EnableParams& operator=(const EnableParams&) = delete;
  ~EnableParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableParams> Clone() const;

  template<int STATE>
  class EnableParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<EnableParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class EnableParams;
    EnableParamsBuilder() : result_(new EnableParams()) { }

    template<int STEP> EnableParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<EnableParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<EnableParams> result_;
  };

  static EnableParamsBuilder<0> Builder() {
    return EnableParamsBuilder<0>();
  }

 private:
  EnableParams() { }

};


// Result for the Enable command.
class EnableResult {
 public:
  static std::unique_ptr<EnableResult> Parse(const base::Value& value, ErrorReporter* errors);
  EnableResult(const EnableResult&) = delete;
  EnableResult& operator=(const EnableResult&) = delete;
  ~EnableResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableResult> Clone() const;

  template<int STATE>
  class EnableResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<EnableResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class EnableResult;
    EnableResultBuilder() : result_(new EnableResult()) { }

    template<int STEP> EnableResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<EnableResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<EnableResult> result_;
  };

  static EnableResultBuilder<0> Builder() {
    return EnableResultBuilder<0>();
  }

 private:
  EnableResult() { }

};


// Parameters for the InspectWorker command.
class InspectWorkerParams {
 public:
  static std::unique_ptr<InspectWorkerParams> Parse(const base::Value& value, ErrorReporter* errors);
  InspectWorkerParams(const InspectWorkerParams&) = delete;
  InspectWorkerParams& operator=(const InspectWorkerParams&) = delete;
  ~InspectWorkerParams() { }

  std::string GetVersionId() const { return version_id_; }
  void SetVersionId(const std::string& value) { version_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<InspectWorkerParams> Clone() const;

  template<int STATE>
  class InspectWorkerParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kVersionIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kVersionIdSet | 0)
    };

    InspectWorkerParamsBuilder<STATE | kVersionIdSet>& SetVersionId(const std::string& value) {
      static_assert(!(STATE & kVersionIdSet), "property versionId should not have already been set");
      result_->SetVersionId(value);
      return CastState<kVersionIdSet>();
    }

    std::unique_ptr<InspectWorkerParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class InspectWorkerParams;
    InspectWorkerParamsBuilder() : result_(new InspectWorkerParams()) { }

    template<int STEP> InspectWorkerParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<InspectWorkerParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<InspectWorkerParams> result_;
  };

  static InspectWorkerParamsBuilder<0> Builder() {
    return InspectWorkerParamsBuilder<0>();
  }

 private:
  InspectWorkerParams() { }

  std::string version_id_;
};


// Result for the InspectWorker command.
class InspectWorkerResult {
 public:
  static std::unique_ptr<InspectWorkerResult> Parse(const base::Value& value, ErrorReporter* errors);
  InspectWorkerResult(const InspectWorkerResult&) = delete;
  InspectWorkerResult& operator=(const InspectWorkerResult&) = delete;
  ~InspectWorkerResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<InspectWorkerResult> Clone() const;

  template<int STATE>
  class InspectWorkerResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<InspectWorkerResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class InspectWorkerResult;
    InspectWorkerResultBuilder() : result_(new InspectWorkerResult()) { }

    template<int STEP> InspectWorkerResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<InspectWorkerResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<InspectWorkerResult> result_;
  };

  static InspectWorkerResultBuilder<0> Builder() {
    return InspectWorkerResultBuilder<0>();
  }

 private:
  InspectWorkerResult() { }

};


// Parameters for the SetForceUpdateOnPageLoad command.
class SetForceUpdateOnPageLoadParams {
 public:
  static std::unique_ptr<SetForceUpdateOnPageLoadParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetForceUpdateOnPageLoadParams(const SetForceUpdateOnPageLoadParams&) = delete;
  SetForceUpdateOnPageLoadParams& operator=(const SetForceUpdateOnPageLoadParams&) = delete;
  ~SetForceUpdateOnPageLoadParams() { }

  bool GetForceUpdateOnPageLoad() const { return force_update_on_page_load_; }
  void SetForceUpdateOnPageLoad(bool value) { force_update_on_page_load_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetForceUpdateOnPageLoadParams> Clone() const;

  template<int STATE>
  class SetForceUpdateOnPageLoadParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kForceUpdateOnPageLoadSet = 1 << 1,
      kAllRequiredFieldsSet = (kForceUpdateOnPageLoadSet | 0)
    };

    SetForceUpdateOnPageLoadParamsBuilder<STATE | kForceUpdateOnPageLoadSet>& SetForceUpdateOnPageLoad(bool value) {
      static_assert(!(STATE & kForceUpdateOnPageLoadSet), "property forceUpdateOnPageLoad should not have already been set");
      result_->SetForceUpdateOnPageLoad(value);
      return CastState<kForceUpdateOnPageLoadSet>();
    }

    std::unique_ptr<SetForceUpdateOnPageLoadParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetForceUpdateOnPageLoadParams;
    SetForceUpdateOnPageLoadParamsBuilder() : result_(new SetForceUpdateOnPageLoadParams()) { }

    template<int STEP> SetForceUpdateOnPageLoadParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetForceUpdateOnPageLoadParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetForceUpdateOnPageLoadParams> result_;
  };

  static SetForceUpdateOnPageLoadParamsBuilder<0> Builder() {
    return SetForceUpdateOnPageLoadParamsBuilder<0>();
  }

 private:
  SetForceUpdateOnPageLoadParams() { }

  bool force_update_on_page_load_;
};


// Result for the SetForceUpdateOnPageLoad command.
class SetForceUpdateOnPageLoadResult {
 public:
  static std::unique_ptr<SetForceUpdateOnPageLoadResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetForceUpdateOnPageLoadResult(const SetForceUpdateOnPageLoadResult&) = delete;
  SetForceUpdateOnPageLoadResult& operator=(const SetForceUpdateOnPageLoadResult&) = delete;
  ~SetForceUpdateOnPageLoadResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetForceUpdateOnPageLoadResult> Clone() const;

  template<int STATE>
  class SetForceUpdateOnPageLoadResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetForceUpdateOnPageLoadResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetForceUpdateOnPageLoadResult;
    SetForceUpdateOnPageLoadResultBuilder() : result_(new SetForceUpdateOnPageLoadResult()) { }

    template<int STEP> SetForceUpdateOnPageLoadResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetForceUpdateOnPageLoadResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetForceUpdateOnPageLoadResult> result_;
  };

  static SetForceUpdateOnPageLoadResultBuilder<0> Builder() {
    return SetForceUpdateOnPageLoadResultBuilder<0>();
  }

 private:
  SetForceUpdateOnPageLoadResult() { }

};


// Parameters for the SkipWaiting command.
class SkipWaitingParams {
 public:
  static std::unique_ptr<SkipWaitingParams> Parse(const base::Value& value, ErrorReporter* errors);
  SkipWaitingParams(const SkipWaitingParams&) = delete;
  SkipWaitingParams& operator=(const SkipWaitingParams&) = delete;
  ~SkipWaitingParams() { }

  std::string GetScopeURL() const { return scopeurl_; }
  void SetScopeURL(const std::string& value) { scopeurl_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SkipWaitingParams> Clone() const;

  template<int STATE>
  class SkipWaitingParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScopeURLSet = 1 << 1,
      kAllRequiredFieldsSet = (kScopeURLSet | 0)
    };

    SkipWaitingParamsBuilder<STATE | kScopeURLSet>& SetScopeURL(const std::string& value) {
      static_assert(!(STATE & kScopeURLSet), "property scopeURL should not have already been set");
      result_->SetScopeURL(value);
      return CastState<kScopeURLSet>();
    }

    std::unique_ptr<SkipWaitingParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SkipWaitingParams;
    SkipWaitingParamsBuilder() : result_(new SkipWaitingParams()) { }

    template<int STEP> SkipWaitingParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SkipWaitingParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SkipWaitingParams> result_;
  };

  static SkipWaitingParamsBuilder<0> Builder() {
    return SkipWaitingParamsBuilder<0>();
  }

 private:
  SkipWaitingParams() { }

  std::string scopeurl_;
};


// Result for the SkipWaiting command.
class SkipWaitingResult {
 public:
  static std::unique_ptr<SkipWaitingResult> Parse(const base::Value& value, ErrorReporter* errors);
  SkipWaitingResult(const SkipWaitingResult&) = delete;
  SkipWaitingResult& operator=(const SkipWaitingResult&) = delete;
  ~SkipWaitingResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SkipWaitingResult> Clone() const;

  template<int STATE>
  class SkipWaitingResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SkipWaitingResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SkipWaitingResult;
    SkipWaitingResultBuilder() : result_(new SkipWaitingResult()) { }

    template<int STEP> SkipWaitingResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SkipWaitingResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SkipWaitingResult> result_;
  };

  static SkipWaitingResultBuilder<0> Builder() {
    return SkipWaitingResultBuilder<0>();
  }

 private:
  SkipWaitingResult() { }

};


// Parameters for the StartWorker command.
class StartWorkerParams {
 public:
  static std::unique_ptr<StartWorkerParams> Parse(const base::Value& value, ErrorReporter* errors);
  StartWorkerParams(const StartWorkerParams&) = delete;
  StartWorkerParams& operator=(const StartWorkerParams&) = delete;
  ~StartWorkerParams() { }

  std::string GetScopeURL() const { return scopeurl_; }
  void SetScopeURL(const std::string& value) { scopeurl_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StartWorkerParams> Clone() const;

  template<int STATE>
  class StartWorkerParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScopeURLSet = 1 << 1,
      kAllRequiredFieldsSet = (kScopeURLSet | 0)
    };

    StartWorkerParamsBuilder<STATE | kScopeURLSet>& SetScopeURL(const std::string& value) {
      static_assert(!(STATE & kScopeURLSet), "property scopeURL should not have already been set");
      result_->SetScopeURL(value);
      return CastState<kScopeURLSet>();
    }

    std::unique_ptr<StartWorkerParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StartWorkerParams;
    StartWorkerParamsBuilder() : result_(new StartWorkerParams()) { }

    template<int STEP> StartWorkerParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StartWorkerParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StartWorkerParams> result_;
  };

  static StartWorkerParamsBuilder<0> Builder() {
    return StartWorkerParamsBuilder<0>();
  }

 private:
  StartWorkerParams() { }

  std::string scopeurl_;
};


// Result for the StartWorker command.
class StartWorkerResult {
 public:
  static std::unique_ptr<StartWorkerResult> Parse(const base::Value& value, ErrorReporter* errors);
  StartWorkerResult(const StartWorkerResult&) = delete;
  StartWorkerResult& operator=(const StartWorkerResult&) = delete;
  ~StartWorkerResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StartWorkerResult> Clone() const;

  template<int STATE>
  class StartWorkerResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StartWorkerResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StartWorkerResult;
    StartWorkerResultBuilder() : result_(new StartWorkerResult()) { }

    template<int STEP> StartWorkerResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StartWorkerResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StartWorkerResult> result_;
  };

  static StartWorkerResultBuilder<0> Builder() {
    return StartWorkerResultBuilder<0>();
  }

 private:
  StartWorkerResult() { }

};


// Parameters for the StopAllWorkers command.
class StopAllWorkersParams {
 public:
  static std::unique_ptr<StopAllWorkersParams> Parse(const base::Value& value, ErrorReporter* errors);
  StopAllWorkersParams(const StopAllWorkersParams&) = delete;
  StopAllWorkersParams& operator=(const StopAllWorkersParams&) = delete;
  ~StopAllWorkersParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StopAllWorkersParams> Clone() const;

  template<int STATE>
  class StopAllWorkersParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StopAllWorkersParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StopAllWorkersParams;
    StopAllWorkersParamsBuilder() : result_(new StopAllWorkersParams()) { }

    template<int STEP> StopAllWorkersParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StopAllWorkersParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StopAllWorkersParams> result_;
  };

  static StopAllWorkersParamsBuilder<0> Builder() {
    return StopAllWorkersParamsBuilder<0>();
  }

 private:
  StopAllWorkersParams() { }

};


// Result for the StopAllWorkers command.
class StopAllWorkersResult {
 public:
  static std::unique_ptr<StopAllWorkersResult> Parse(const base::Value& value, ErrorReporter* errors);
  StopAllWorkersResult(const StopAllWorkersResult&) = delete;
  StopAllWorkersResult& operator=(const StopAllWorkersResult&) = delete;
  ~StopAllWorkersResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StopAllWorkersResult> Clone() const;

  template<int STATE>
  class StopAllWorkersResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StopAllWorkersResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StopAllWorkersResult;
    StopAllWorkersResultBuilder() : result_(new StopAllWorkersResult()) { }

    template<int STEP> StopAllWorkersResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StopAllWorkersResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StopAllWorkersResult> result_;
  };

  static StopAllWorkersResultBuilder<0> Builder() {
    return StopAllWorkersResultBuilder<0>();
  }

 private:
  StopAllWorkersResult() { }

};


// Parameters for the StopWorker command.
class StopWorkerParams {
 public:
  static std::unique_ptr<StopWorkerParams> Parse(const base::Value& value, ErrorReporter* errors);
  StopWorkerParams(const StopWorkerParams&) = delete;
  StopWorkerParams& operator=(const StopWorkerParams&) = delete;
  ~StopWorkerParams() { }

  std::string GetVersionId() const { return version_id_; }
  void SetVersionId(const std::string& value) { version_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StopWorkerParams> Clone() const;

  template<int STATE>
  class StopWorkerParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kVersionIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kVersionIdSet | 0)
    };

    StopWorkerParamsBuilder<STATE | kVersionIdSet>& SetVersionId(const std::string& value) {
      static_assert(!(STATE & kVersionIdSet), "property versionId should not have already been set");
      result_->SetVersionId(value);
      return CastState<kVersionIdSet>();
    }

    std::unique_ptr<StopWorkerParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StopWorkerParams;
    StopWorkerParamsBuilder() : result_(new StopWorkerParams()) { }

    template<int STEP> StopWorkerParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StopWorkerParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StopWorkerParams> result_;
  };

  static StopWorkerParamsBuilder<0> Builder() {
    return StopWorkerParamsBuilder<0>();
  }

 private:
  StopWorkerParams() { }

  std::string version_id_;
};


// Result for the StopWorker command.
class StopWorkerResult {
 public:
  static std::unique_ptr<StopWorkerResult> Parse(const base::Value& value, ErrorReporter* errors);
  StopWorkerResult(const StopWorkerResult&) = delete;
  StopWorkerResult& operator=(const StopWorkerResult&) = delete;
  ~StopWorkerResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StopWorkerResult> Clone() const;

  template<int STATE>
  class StopWorkerResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StopWorkerResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StopWorkerResult;
    StopWorkerResultBuilder() : result_(new StopWorkerResult()) { }

    template<int STEP> StopWorkerResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StopWorkerResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StopWorkerResult> result_;
  };

  static StopWorkerResultBuilder<0> Builder() {
    return StopWorkerResultBuilder<0>();
  }

 private:
  StopWorkerResult() { }

};


// Parameters for the Unregister command.
class UnregisterParams {
 public:
  static std::unique_ptr<UnregisterParams> Parse(const base::Value& value, ErrorReporter* errors);
  UnregisterParams(const UnregisterParams&) = delete;
  UnregisterParams& operator=(const UnregisterParams&) = delete;
  ~UnregisterParams() { }

  std::string GetScopeURL() const { return scopeurl_; }
  void SetScopeURL(const std::string& value) { scopeurl_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<UnregisterParams> Clone() const;

  template<int STATE>
  class UnregisterParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScopeURLSet = 1 << 1,
      kAllRequiredFieldsSet = (kScopeURLSet | 0)
    };

    UnregisterParamsBuilder<STATE | kScopeURLSet>& SetScopeURL(const std::string& value) {
      static_assert(!(STATE & kScopeURLSet), "property scopeURL should not have already been set");
      result_->SetScopeURL(value);
      return CastState<kScopeURLSet>();
    }

    std::unique_ptr<UnregisterParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class UnregisterParams;
    UnregisterParamsBuilder() : result_(new UnregisterParams()) { }

    template<int STEP> UnregisterParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<UnregisterParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<UnregisterParams> result_;
  };

  static UnregisterParamsBuilder<0> Builder() {
    return UnregisterParamsBuilder<0>();
  }

 private:
  UnregisterParams() { }

  std::string scopeurl_;
};


// Result for the Unregister command.
class UnregisterResult {
 public:
  static std::unique_ptr<UnregisterResult> Parse(const base::Value& value, ErrorReporter* errors);
  UnregisterResult(const UnregisterResult&) = delete;
  UnregisterResult& operator=(const UnregisterResult&) = delete;
  ~UnregisterResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<UnregisterResult> Clone() const;

  template<int STATE>
  class UnregisterResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<UnregisterResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class UnregisterResult;
    UnregisterResultBuilder() : result_(new UnregisterResult()) { }

    template<int STEP> UnregisterResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<UnregisterResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<UnregisterResult> result_;
  };

  static UnregisterResultBuilder<0> Builder() {
    return UnregisterResultBuilder<0>();
  }

 private:
  UnregisterResult() { }

};


// Parameters for the UpdateRegistration command.
class UpdateRegistrationParams {
 public:
  static std::unique_ptr<UpdateRegistrationParams> Parse(const base::Value& value, ErrorReporter* errors);
  UpdateRegistrationParams(const UpdateRegistrationParams&) = delete;
  UpdateRegistrationParams& operator=(const UpdateRegistrationParams&) = delete;
  ~UpdateRegistrationParams() { }

  std::string GetScopeURL() const { return scopeurl_; }
  void SetScopeURL(const std::string& value) { scopeurl_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<UpdateRegistrationParams> Clone() const;

  template<int STATE>
  class UpdateRegistrationParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScopeURLSet = 1 << 1,
      kAllRequiredFieldsSet = (kScopeURLSet | 0)
    };

    UpdateRegistrationParamsBuilder<STATE | kScopeURLSet>& SetScopeURL(const std::string& value) {
      static_assert(!(STATE & kScopeURLSet), "property scopeURL should not have already been set");
      result_->SetScopeURL(value);
      return CastState<kScopeURLSet>();
    }

    std::unique_ptr<UpdateRegistrationParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class UpdateRegistrationParams;
    UpdateRegistrationParamsBuilder() : result_(new UpdateRegistrationParams()) { }

    template<int STEP> UpdateRegistrationParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<UpdateRegistrationParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<UpdateRegistrationParams> result_;
  };

  static UpdateRegistrationParamsBuilder<0> Builder() {
    return UpdateRegistrationParamsBuilder<0>();
  }

 private:
  UpdateRegistrationParams() { }

  std::string scopeurl_;
};


// Result for the UpdateRegistration command.
class UpdateRegistrationResult {
 public:
  static std::unique_ptr<UpdateRegistrationResult> Parse(const base::Value& value, ErrorReporter* errors);
  UpdateRegistrationResult(const UpdateRegistrationResult&) = delete;
  UpdateRegistrationResult& operator=(const UpdateRegistrationResult&) = delete;
  ~UpdateRegistrationResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<UpdateRegistrationResult> Clone() const;

  template<int STATE>
  class UpdateRegistrationResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<UpdateRegistrationResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class UpdateRegistrationResult;
    UpdateRegistrationResultBuilder() : result_(new UpdateRegistrationResult()) { }

    template<int STEP> UpdateRegistrationResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<UpdateRegistrationResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<UpdateRegistrationResult> result_;
  };

  static UpdateRegistrationResultBuilder<0> Builder() {
    return UpdateRegistrationResultBuilder<0>();
  }

 private:
  UpdateRegistrationResult() { }

};


// Parameters for the WorkerErrorReported event.
class WorkerErrorReportedParams {
 public:
  static std::unique_ptr<WorkerErrorReportedParams> Parse(const base::Value& value, ErrorReporter* errors);
  WorkerErrorReportedParams(const WorkerErrorReportedParams&) = delete;
  WorkerErrorReportedParams& operator=(const WorkerErrorReportedParams&) = delete;
  ~WorkerErrorReportedParams() { }

  const ::autofill_assistant::service_worker::ServiceWorkerErrorMessage* GetErrorMessage() const { return error_message_.get(); }
  void SetErrorMessage(std::unique_ptr<::autofill_assistant::service_worker::ServiceWorkerErrorMessage> value) { error_message_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<WorkerErrorReportedParams> Clone() const;

  template<int STATE>
  class WorkerErrorReportedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kErrorMessageSet = 1 << 1,
      kAllRequiredFieldsSet = (kErrorMessageSet | 0)
    };

    WorkerErrorReportedParamsBuilder<STATE | kErrorMessageSet>& SetErrorMessage(std::unique_ptr<::autofill_assistant::service_worker::ServiceWorkerErrorMessage> value) {
      static_assert(!(STATE & kErrorMessageSet), "property errorMessage should not have already been set");
      result_->SetErrorMessage(std::move(value));
      return CastState<kErrorMessageSet>();
    }

    std::unique_ptr<WorkerErrorReportedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class WorkerErrorReportedParams;
    WorkerErrorReportedParamsBuilder() : result_(new WorkerErrorReportedParams()) { }

    template<int STEP> WorkerErrorReportedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<WorkerErrorReportedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<WorkerErrorReportedParams> result_;
  };

  static WorkerErrorReportedParamsBuilder<0> Builder() {
    return WorkerErrorReportedParamsBuilder<0>();
  }

 private:
  WorkerErrorReportedParams() { }

  std::unique_ptr<::autofill_assistant::service_worker::ServiceWorkerErrorMessage> error_message_;
};


// Parameters for the WorkerRegistrationUpdated event.
class WorkerRegistrationUpdatedParams {
 public:
  static std::unique_ptr<WorkerRegistrationUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors);
  WorkerRegistrationUpdatedParams(const WorkerRegistrationUpdatedParams&) = delete;
  WorkerRegistrationUpdatedParams& operator=(const WorkerRegistrationUpdatedParams&) = delete;
  ~WorkerRegistrationUpdatedParams() { }

  const std::vector<std::unique_ptr<::autofill_assistant::service_worker::ServiceWorkerRegistration>>* GetRegistrations() const { return &registrations_; }
  void SetRegistrations(std::vector<std::unique_ptr<::autofill_assistant::service_worker::ServiceWorkerRegistration>> value) { registrations_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<WorkerRegistrationUpdatedParams> Clone() const;

  template<int STATE>
  class WorkerRegistrationUpdatedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kRegistrationsSet = 1 << 1,
      kAllRequiredFieldsSet = (kRegistrationsSet | 0)
    };

    WorkerRegistrationUpdatedParamsBuilder<STATE | kRegistrationsSet>& SetRegistrations(std::vector<std::unique_ptr<::autofill_assistant::service_worker::ServiceWorkerRegistration>> value) {
      static_assert(!(STATE & kRegistrationsSet), "property registrations should not have already been set");
      result_->SetRegistrations(std::move(value));
      return CastState<kRegistrationsSet>();
    }

    std::unique_ptr<WorkerRegistrationUpdatedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class WorkerRegistrationUpdatedParams;
    WorkerRegistrationUpdatedParamsBuilder() : result_(new WorkerRegistrationUpdatedParams()) { }

    template<int STEP> WorkerRegistrationUpdatedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<WorkerRegistrationUpdatedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<WorkerRegistrationUpdatedParams> result_;
  };

  static WorkerRegistrationUpdatedParamsBuilder<0> Builder() {
    return WorkerRegistrationUpdatedParamsBuilder<0>();
  }

 private:
  WorkerRegistrationUpdatedParams() { }

  std::vector<std::unique_ptr<::autofill_assistant::service_worker::ServiceWorkerRegistration>> registrations_;
};


// Parameters for the WorkerVersionUpdated event.
class WorkerVersionUpdatedParams {
 public:
  static std::unique_ptr<WorkerVersionUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors);
  WorkerVersionUpdatedParams(const WorkerVersionUpdatedParams&) = delete;
  WorkerVersionUpdatedParams& operator=(const WorkerVersionUpdatedParams&) = delete;
  ~WorkerVersionUpdatedParams() { }

  const std::vector<std::unique_ptr<::autofill_assistant::service_worker::ServiceWorkerVersion>>* GetVersions() const { return &versions_; }
  void SetVersions(std::vector<std::unique_ptr<::autofill_assistant::service_worker::ServiceWorkerVersion>> value) { versions_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<WorkerVersionUpdatedParams> Clone() const;

  template<int STATE>
  class WorkerVersionUpdatedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kVersionsSet = 1 << 1,
      kAllRequiredFieldsSet = (kVersionsSet | 0)
    };

    WorkerVersionUpdatedParamsBuilder<STATE | kVersionsSet>& SetVersions(std::vector<std::unique_ptr<::autofill_assistant::service_worker::ServiceWorkerVersion>> value) {
      static_assert(!(STATE & kVersionsSet), "property versions should not have already been set");
      result_->SetVersions(std::move(value));
      return CastState<kVersionsSet>();
    }

    std::unique_ptr<WorkerVersionUpdatedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class WorkerVersionUpdatedParams;
    WorkerVersionUpdatedParamsBuilder() : result_(new WorkerVersionUpdatedParams()) { }

    template<int STEP> WorkerVersionUpdatedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<WorkerVersionUpdatedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<WorkerVersionUpdatedParams> result_;
  };

  static WorkerVersionUpdatedParamsBuilder<0> Builder() {
    return WorkerVersionUpdatedParamsBuilder<0>();
  }

 private:
  WorkerVersionUpdatedParams() { }

  std::vector<std::unique_ptr<::autofill_assistant::service_worker::ServiceWorkerVersion>> versions_;
};


}  // namespace service_worker

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_SERVICE_WORKER_H_
