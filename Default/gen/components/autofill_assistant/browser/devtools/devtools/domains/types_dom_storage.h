// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_DOM_STORAGE_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_DOM_STORAGE_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_dom_storage.h"

namespace autofill_assistant {

class ErrorReporter;

namespace dom_storage {

// DOM Storage identifier.
class StorageId {
 public:
  static std::unique_ptr<StorageId> Parse(const base::Value& value, ErrorReporter* errors);
  StorageId(const StorageId&) = delete;
  StorageId& operator=(const StorageId&) = delete;
  ~StorageId() { }

  // Security origin for the storage.
  bool HasSecurityOrigin() const { return !!security_origin_; }
  std::string GetSecurityOrigin() const { DCHECK(HasSecurityOrigin()); return security_origin_.value(); }
  void SetSecurityOrigin(const std::string& value) { security_origin_ = value; }

  // Represents a key by which DOM Storage keys its CachedStorageAreas
  bool HasStorageKey() const { return !!storage_key_; }
  std::string GetStorageKey() const { DCHECK(HasStorageKey()); return storage_key_.value(); }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  // Whether the storage is local storage (not session storage).
  bool GetIsLocalStorage() const { return is_local_storage_; }
  void SetIsLocalStorage(bool value) { is_local_storage_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StorageId> Clone() const;

  template<int STATE>
  class StorageIdBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kIsLocalStorageSet = 1 << 1,
      kAllRequiredFieldsSet = (kIsLocalStorageSet | 0)
    };

    StorageIdBuilder<STATE>& SetSecurityOrigin(const std::string& value) {
      result_->SetSecurityOrigin(value);
      return *this;
    }

    StorageIdBuilder<STATE>& SetStorageKey(const std::string& value) {
      result_->SetStorageKey(value);
      return *this;
    }

    StorageIdBuilder<STATE | kIsLocalStorageSet>& SetIsLocalStorage(bool value) {
      static_assert(!(STATE & kIsLocalStorageSet), "property isLocalStorage should not have already been set");
      result_->SetIsLocalStorage(value);
      return CastState<kIsLocalStorageSet>();
    }

    std::unique_ptr<StorageId> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StorageId;
    StorageIdBuilder() : result_(new StorageId()) { }

    template<int STEP> StorageIdBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StorageIdBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StorageId> result_;
  };

  static StorageIdBuilder<0> Builder() {
    return StorageIdBuilder<0>();
  }

 private:
  StorageId() { }

  absl::optional<std::string> security_origin_;
  absl::optional<std::string> storage_key_;
  bool is_local_storage_;
};


// Parameters for the Clear command.
class ClearParams {
 public:
  static std::unique_ptr<ClearParams> Parse(const base::Value& value, ErrorReporter* errors);
  ClearParams(const ClearParams&) = delete;
  ClearParams& operator=(const ClearParams&) = delete;
  ~ClearParams() { }

  const ::autofill_assistant::dom_storage::StorageId* GetStorageId() const { return storage_id_.get(); }
  void SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) { storage_id_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearParams> Clone() const;

  template<int STATE>
  class ClearParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStorageIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kStorageIdSet | 0)
    };

    ClearParamsBuilder<STATE | kStorageIdSet>& SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) {
      static_assert(!(STATE & kStorageIdSet), "property storageId should not have already been set");
      result_->SetStorageId(std::move(value));
      return CastState<kStorageIdSet>();
    }

    std::unique_ptr<ClearParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearParams;
    ClearParamsBuilder() : result_(new ClearParams()) { }

    template<int STEP> ClearParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearParams> result_;
  };

  static ClearParamsBuilder<0> Builder() {
    return ClearParamsBuilder<0>();
  }

 private:
  ClearParams() { }

  std::unique_ptr<::autofill_assistant::dom_storage::StorageId> storage_id_;
};


// Result for the Clear command.
class ClearResult {
 public:
  static std::unique_ptr<ClearResult> Parse(const base::Value& value, ErrorReporter* errors);
  ClearResult(const ClearResult&) = delete;
  ClearResult& operator=(const ClearResult&) = delete;
  ~ClearResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearResult> Clone() const;

  template<int STATE>
  class ClearResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearResult;
    ClearResultBuilder() : result_(new ClearResult()) { }

    template<int STEP> ClearResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearResult> result_;
  };

  static ClearResultBuilder<0> Builder() {
    return ClearResultBuilder<0>();
  }

 private:
  ClearResult() { }

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


// Parameters for the GetDOMStorageItems command.
class GetDOMStorageItemsParams {
 public:
  static std::unique_ptr<GetDOMStorageItemsParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetDOMStorageItemsParams(const GetDOMStorageItemsParams&) = delete;
  GetDOMStorageItemsParams& operator=(const GetDOMStorageItemsParams&) = delete;
  ~GetDOMStorageItemsParams() { }

  const ::autofill_assistant::dom_storage::StorageId* GetStorageId() const { return storage_id_.get(); }
  void SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) { storage_id_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetDOMStorageItemsParams> Clone() const;

  template<int STATE>
  class GetDOMStorageItemsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStorageIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kStorageIdSet | 0)
    };

    GetDOMStorageItemsParamsBuilder<STATE | kStorageIdSet>& SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) {
      static_assert(!(STATE & kStorageIdSet), "property storageId should not have already been set");
      result_->SetStorageId(std::move(value));
      return CastState<kStorageIdSet>();
    }

    std::unique_ptr<GetDOMStorageItemsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetDOMStorageItemsParams;
    GetDOMStorageItemsParamsBuilder() : result_(new GetDOMStorageItemsParams()) { }

    template<int STEP> GetDOMStorageItemsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetDOMStorageItemsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetDOMStorageItemsParams> result_;
  };

  static GetDOMStorageItemsParamsBuilder<0> Builder() {
    return GetDOMStorageItemsParamsBuilder<0>();
  }

 private:
  GetDOMStorageItemsParams() { }

  std::unique_ptr<::autofill_assistant::dom_storage::StorageId> storage_id_;
};


// Result for the GetDOMStorageItems command.
class GetDOMStorageItemsResult {
 public:
  static std::unique_ptr<GetDOMStorageItemsResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetDOMStorageItemsResult(const GetDOMStorageItemsResult&) = delete;
  GetDOMStorageItemsResult& operator=(const GetDOMStorageItemsResult&) = delete;
  ~GetDOMStorageItemsResult() { }

  const std::vector<std::vector<std::string>>* GetEntries() const { return &entries_; }
  void SetEntries(std::vector<std::vector<std::string>> value) { entries_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetDOMStorageItemsResult> Clone() const;

  template<int STATE>
  class GetDOMStorageItemsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kEntriesSet = 1 << 1,
      kAllRequiredFieldsSet = (kEntriesSet | 0)
    };

    GetDOMStorageItemsResultBuilder<STATE | kEntriesSet>& SetEntries(std::vector<std::vector<std::string>> value) {
      static_assert(!(STATE & kEntriesSet), "property entries should not have already been set");
      result_->SetEntries(std::move(value));
      return CastState<kEntriesSet>();
    }

    std::unique_ptr<GetDOMStorageItemsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetDOMStorageItemsResult;
    GetDOMStorageItemsResultBuilder() : result_(new GetDOMStorageItemsResult()) { }

    template<int STEP> GetDOMStorageItemsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetDOMStorageItemsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetDOMStorageItemsResult> result_;
  };

  static GetDOMStorageItemsResultBuilder<0> Builder() {
    return GetDOMStorageItemsResultBuilder<0>();
  }

 private:
  GetDOMStorageItemsResult() { }

  std::vector<std::vector<std::string>> entries_;
};


// Parameters for the RemoveDOMStorageItem command.
class RemoveDOMStorageItemParams {
 public:
  static std::unique_ptr<RemoveDOMStorageItemParams> Parse(const base::Value& value, ErrorReporter* errors);
  RemoveDOMStorageItemParams(const RemoveDOMStorageItemParams&) = delete;
  RemoveDOMStorageItemParams& operator=(const RemoveDOMStorageItemParams&) = delete;
  ~RemoveDOMStorageItemParams() { }

  const ::autofill_assistant::dom_storage::StorageId* GetStorageId() const { return storage_id_.get(); }
  void SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) { storage_id_ = std::move(value); }

  std::string GetKey() const { return key_; }
  void SetKey(const std::string& value) { key_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RemoveDOMStorageItemParams> Clone() const;

  template<int STATE>
  class RemoveDOMStorageItemParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStorageIdSet = 1 << 1,
    kKeySet = 1 << 2,
      kAllRequiredFieldsSet = (kStorageIdSet | kKeySet | 0)
    };

    RemoveDOMStorageItemParamsBuilder<STATE | kStorageIdSet>& SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) {
      static_assert(!(STATE & kStorageIdSet), "property storageId should not have already been set");
      result_->SetStorageId(std::move(value));
      return CastState<kStorageIdSet>();
    }

    RemoveDOMStorageItemParamsBuilder<STATE | kKeySet>& SetKey(const std::string& value) {
      static_assert(!(STATE & kKeySet), "property key should not have already been set");
      result_->SetKey(value);
      return CastState<kKeySet>();
    }

    std::unique_ptr<RemoveDOMStorageItemParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RemoveDOMStorageItemParams;
    RemoveDOMStorageItemParamsBuilder() : result_(new RemoveDOMStorageItemParams()) { }

    template<int STEP> RemoveDOMStorageItemParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RemoveDOMStorageItemParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RemoveDOMStorageItemParams> result_;
  };

  static RemoveDOMStorageItemParamsBuilder<0> Builder() {
    return RemoveDOMStorageItemParamsBuilder<0>();
  }

 private:
  RemoveDOMStorageItemParams() { }

  std::unique_ptr<::autofill_assistant::dom_storage::StorageId> storage_id_;
  std::string key_;
};


// Result for the RemoveDOMStorageItem command.
class RemoveDOMStorageItemResult {
 public:
  static std::unique_ptr<RemoveDOMStorageItemResult> Parse(const base::Value& value, ErrorReporter* errors);
  RemoveDOMStorageItemResult(const RemoveDOMStorageItemResult&) = delete;
  RemoveDOMStorageItemResult& operator=(const RemoveDOMStorageItemResult&) = delete;
  ~RemoveDOMStorageItemResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RemoveDOMStorageItemResult> Clone() const;

  template<int STATE>
  class RemoveDOMStorageItemResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<RemoveDOMStorageItemResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RemoveDOMStorageItemResult;
    RemoveDOMStorageItemResultBuilder() : result_(new RemoveDOMStorageItemResult()) { }

    template<int STEP> RemoveDOMStorageItemResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RemoveDOMStorageItemResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RemoveDOMStorageItemResult> result_;
  };

  static RemoveDOMStorageItemResultBuilder<0> Builder() {
    return RemoveDOMStorageItemResultBuilder<0>();
  }

 private:
  RemoveDOMStorageItemResult() { }

};


// Parameters for the SetDOMStorageItem command.
class SetDOMStorageItemParams {
 public:
  static std::unique_ptr<SetDOMStorageItemParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetDOMStorageItemParams(const SetDOMStorageItemParams&) = delete;
  SetDOMStorageItemParams& operator=(const SetDOMStorageItemParams&) = delete;
  ~SetDOMStorageItemParams() { }

  const ::autofill_assistant::dom_storage::StorageId* GetStorageId() const { return storage_id_.get(); }
  void SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) { storage_id_ = std::move(value); }

  std::string GetKey() const { return key_; }
  void SetKey(const std::string& value) { key_ = value; }

  std::string GetValue() const { return value_; }
  void SetValue(const std::string& value) { value_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetDOMStorageItemParams> Clone() const;

  template<int STATE>
  class SetDOMStorageItemParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStorageIdSet = 1 << 1,
    kKeySet = 1 << 2,
    kValueSet = 1 << 3,
      kAllRequiredFieldsSet = (kStorageIdSet | kKeySet | kValueSet | 0)
    };

    SetDOMStorageItemParamsBuilder<STATE | kStorageIdSet>& SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) {
      static_assert(!(STATE & kStorageIdSet), "property storageId should not have already been set");
      result_->SetStorageId(std::move(value));
      return CastState<kStorageIdSet>();
    }

    SetDOMStorageItemParamsBuilder<STATE | kKeySet>& SetKey(const std::string& value) {
      static_assert(!(STATE & kKeySet), "property key should not have already been set");
      result_->SetKey(value);
      return CastState<kKeySet>();
    }

    SetDOMStorageItemParamsBuilder<STATE | kValueSet>& SetValue(const std::string& value) {
      static_assert(!(STATE & kValueSet), "property value should not have already been set");
      result_->SetValue(value);
      return CastState<kValueSet>();
    }

    std::unique_ptr<SetDOMStorageItemParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetDOMStorageItemParams;
    SetDOMStorageItemParamsBuilder() : result_(new SetDOMStorageItemParams()) { }

    template<int STEP> SetDOMStorageItemParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetDOMStorageItemParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetDOMStorageItemParams> result_;
  };

  static SetDOMStorageItemParamsBuilder<0> Builder() {
    return SetDOMStorageItemParamsBuilder<0>();
  }

 private:
  SetDOMStorageItemParams() { }

  std::unique_ptr<::autofill_assistant::dom_storage::StorageId> storage_id_;
  std::string key_;
  std::string value_;
};


// Result for the SetDOMStorageItem command.
class SetDOMStorageItemResult {
 public:
  static std::unique_ptr<SetDOMStorageItemResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetDOMStorageItemResult(const SetDOMStorageItemResult&) = delete;
  SetDOMStorageItemResult& operator=(const SetDOMStorageItemResult&) = delete;
  ~SetDOMStorageItemResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetDOMStorageItemResult> Clone() const;

  template<int STATE>
  class SetDOMStorageItemResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetDOMStorageItemResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetDOMStorageItemResult;
    SetDOMStorageItemResultBuilder() : result_(new SetDOMStorageItemResult()) { }

    template<int STEP> SetDOMStorageItemResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetDOMStorageItemResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetDOMStorageItemResult> result_;
  };

  static SetDOMStorageItemResultBuilder<0> Builder() {
    return SetDOMStorageItemResultBuilder<0>();
  }

 private:
  SetDOMStorageItemResult() { }

};


// Parameters for the DomStorageItemAdded event.
class DomStorageItemAddedParams {
 public:
  static std::unique_ptr<DomStorageItemAddedParams> Parse(const base::Value& value, ErrorReporter* errors);
  DomStorageItemAddedParams(const DomStorageItemAddedParams&) = delete;
  DomStorageItemAddedParams& operator=(const DomStorageItemAddedParams&) = delete;
  ~DomStorageItemAddedParams() { }

  const ::autofill_assistant::dom_storage::StorageId* GetStorageId() const { return storage_id_.get(); }
  void SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) { storage_id_ = std::move(value); }

  std::string GetKey() const { return key_; }
  void SetKey(const std::string& value) { key_ = value; }

  std::string GetNewValue() const { return new_value_; }
  void SetNewValue(const std::string& value) { new_value_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DomStorageItemAddedParams> Clone() const;

  template<int STATE>
  class DomStorageItemAddedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStorageIdSet = 1 << 1,
    kKeySet = 1 << 2,
    kNewValueSet = 1 << 3,
      kAllRequiredFieldsSet = (kStorageIdSet | kKeySet | kNewValueSet | 0)
    };

    DomStorageItemAddedParamsBuilder<STATE | kStorageIdSet>& SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) {
      static_assert(!(STATE & kStorageIdSet), "property storageId should not have already been set");
      result_->SetStorageId(std::move(value));
      return CastState<kStorageIdSet>();
    }

    DomStorageItemAddedParamsBuilder<STATE | kKeySet>& SetKey(const std::string& value) {
      static_assert(!(STATE & kKeySet), "property key should not have already been set");
      result_->SetKey(value);
      return CastState<kKeySet>();
    }

    DomStorageItemAddedParamsBuilder<STATE | kNewValueSet>& SetNewValue(const std::string& value) {
      static_assert(!(STATE & kNewValueSet), "property newValue should not have already been set");
      result_->SetNewValue(value);
      return CastState<kNewValueSet>();
    }

    std::unique_ptr<DomStorageItemAddedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DomStorageItemAddedParams;
    DomStorageItemAddedParamsBuilder() : result_(new DomStorageItemAddedParams()) { }

    template<int STEP> DomStorageItemAddedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DomStorageItemAddedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DomStorageItemAddedParams> result_;
  };

  static DomStorageItemAddedParamsBuilder<0> Builder() {
    return DomStorageItemAddedParamsBuilder<0>();
  }

 private:
  DomStorageItemAddedParams() { }

  std::unique_ptr<::autofill_assistant::dom_storage::StorageId> storage_id_;
  std::string key_;
  std::string new_value_;
};


// Parameters for the DomStorageItemRemoved event.
class DomStorageItemRemovedParams {
 public:
  static std::unique_ptr<DomStorageItemRemovedParams> Parse(const base::Value& value, ErrorReporter* errors);
  DomStorageItemRemovedParams(const DomStorageItemRemovedParams&) = delete;
  DomStorageItemRemovedParams& operator=(const DomStorageItemRemovedParams&) = delete;
  ~DomStorageItemRemovedParams() { }

  const ::autofill_assistant::dom_storage::StorageId* GetStorageId() const { return storage_id_.get(); }
  void SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) { storage_id_ = std::move(value); }

  std::string GetKey() const { return key_; }
  void SetKey(const std::string& value) { key_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DomStorageItemRemovedParams> Clone() const;

  template<int STATE>
  class DomStorageItemRemovedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStorageIdSet = 1 << 1,
    kKeySet = 1 << 2,
      kAllRequiredFieldsSet = (kStorageIdSet | kKeySet | 0)
    };

    DomStorageItemRemovedParamsBuilder<STATE | kStorageIdSet>& SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) {
      static_assert(!(STATE & kStorageIdSet), "property storageId should not have already been set");
      result_->SetStorageId(std::move(value));
      return CastState<kStorageIdSet>();
    }

    DomStorageItemRemovedParamsBuilder<STATE | kKeySet>& SetKey(const std::string& value) {
      static_assert(!(STATE & kKeySet), "property key should not have already been set");
      result_->SetKey(value);
      return CastState<kKeySet>();
    }

    std::unique_ptr<DomStorageItemRemovedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DomStorageItemRemovedParams;
    DomStorageItemRemovedParamsBuilder() : result_(new DomStorageItemRemovedParams()) { }

    template<int STEP> DomStorageItemRemovedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DomStorageItemRemovedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DomStorageItemRemovedParams> result_;
  };

  static DomStorageItemRemovedParamsBuilder<0> Builder() {
    return DomStorageItemRemovedParamsBuilder<0>();
  }

 private:
  DomStorageItemRemovedParams() { }

  std::unique_ptr<::autofill_assistant::dom_storage::StorageId> storage_id_;
  std::string key_;
};


// Parameters for the DomStorageItemUpdated event.
class DomStorageItemUpdatedParams {
 public:
  static std::unique_ptr<DomStorageItemUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors);
  DomStorageItemUpdatedParams(const DomStorageItemUpdatedParams&) = delete;
  DomStorageItemUpdatedParams& operator=(const DomStorageItemUpdatedParams&) = delete;
  ~DomStorageItemUpdatedParams() { }

  const ::autofill_assistant::dom_storage::StorageId* GetStorageId() const { return storage_id_.get(); }
  void SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) { storage_id_ = std::move(value); }

  std::string GetKey() const { return key_; }
  void SetKey(const std::string& value) { key_ = value; }

  std::string GetOldValue() const { return old_value_; }
  void SetOldValue(const std::string& value) { old_value_ = value; }

  std::string GetNewValue() const { return new_value_; }
  void SetNewValue(const std::string& value) { new_value_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DomStorageItemUpdatedParams> Clone() const;

  template<int STATE>
  class DomStorageItemUpdatedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStorageIdSet = 1 << 1,
    kKeySet = 1 << 2,
    kOldValueSet = 1 << 3,
    kNewValueSet = 1 << 4,
      kAllRequiredFieldsSet = (kStorageIdSet | kKeySet | kOldValueSet | kNewValueSet | 0)
    };

    DomStorageItemUpdatedParamsBuilder<STATE | kStorageIdSet>& SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) {
      static_assert(!(STATE & kStorageIdSet), "property storageId should not have already been set");
      result_->SetStorageId(std::move(value));
      return CastState<kStorageIdSet>();
    }

    DomStorageItemUpdatedParamsBuilder<STATE | kKeySet>& SetKey(const std::string& value) {
      static_assert(!(STATE & kKeySet), "property key should not have already been set");
      result_->SetKey(value);
      return CastState<kKeySet>();
    }

    DomStorageItemUpdatedParamsBuilder<STATE | kOldValueSet>& SetOldValue(const std::string& value) {
      static_assert(!(STATE & kOldValueSet), "property oldValue should not have already been set");
      result_->SetOldValue(value);
      return CastState<kOldValueSet>();
    }

    DomStorageItemUpdatedParamsBuilder<STATE | kNewValueSet>& SetNewValue(const std::string& value) {
      static_assert(!(STATE & kNewValueSet), "property newValue should not have already been set");
      result_->SetNewValue(value);
      return CastState<kNewValueSet>();
    }

    std::unique_ptr<DomStorageItemUpdatedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DomStorageItemUpdatedParams;
    DomStorageItemUpdatedParamsBuilder() : result_(new DomStorageItemUpdatedParams()) { }

    template<int STEP> DomStorageItemUpdatedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DomStorageItemUpdatedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DomStorageItemUpdatedParams> result_;
  };

  static DomStorageItemUpdatedParamsBuilder<0> Builder() {
    return DomStorageItemUpdatedParamsBuilder<0>();
  }

 private:
  DomStorageItemUpdatedParams() { }

  std::unique_ptr<::autofill_assistant::dom_storage::StorageId> storage_id_;
  std::string key_;
  std::string old_value_;
  std::string new_value_;
};


// Parameters for the DomStorageItemsCleared event.
class DomStorageItemsClearedParams {
 public:
  static std::unique_ptr<DomStorageItemsClearedParams> Parse(const base::Value& value, ErrorReporter* errors);
  DomStorageItemsClearedParams(const DomStorageItemsClearedParams&) = delete;
  DomStorageItemsClearedParams& operator=(const DomStorageItemsClearedParams&) = delete;
  ~DomStorageItemsClearedParams() { }

  const ::autofill_assistant::dom_storage::StorageId* GetStorageId() const { return storage_id_.get(); }
  void SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) { storage_id_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DomStorageItemsClearedParams> Clone() const;

  template<int STATE>
  class DomStorageItemsClearedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStorageIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kStorageIdSet | 0)
    };

    DomStorageItemsClearedParamsBuilder<STATE | kStorageIdSet>& SetStorageId(std::unique_ptr<::autofill_assistant::dom_storage::StorageId> value) {
      static_assert(!(STATE & kStorageIdSet), "property storageId should not have already been set");
      result_->SetStorageId(std::move(value));
      return CastState<kStorageIdSet>();
    }

    std::unique_ptr<DomStorageItemsClearedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DomStorageItemsClearedParams;
    DomStorageItemsClearedParamsBuilder() : result_(new DomStorageItemsClearedParams()) { }

    template<int STEP> DomStorageItemsClearedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DomStorageItemsClearedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DomStorageItemsClearedParams> result_;
  };

  static DomStorageItemsClearedParamsBuilder<0> Builder() {
    return DomStorageItemsClearedParamsBuilder<0>();
  }

 private:
  DomStorageItemsClearedParams() { }

  std::unique_ptr<::autofill_assistant::dom_storage::StorageId> storage_id_;
};


}  // namespace dom_storage

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_DOM_STORAGE_H_
