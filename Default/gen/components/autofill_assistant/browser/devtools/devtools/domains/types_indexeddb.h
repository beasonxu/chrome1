// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_INDEXEDDB_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_INDEXEDDB_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_indexeddb.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_runtime.h"

namespace autofill_assistant {

class ErrorReporter;

namespace indexeddb {

// Database with an array of object stores.
class DatabaseWithObjectStores {
 public:
  static std::unique_ptr<DatabaseWithObjectStores> Parse(const base::Value& value, ErrorReporter* errors);
  DatabaseWithObjectStores(const DatabaseWithObjectStores&) = delete;
  DatabaseWithObjectStores& operator=(const DatabaseWithObjectStores&) = delete;
  ~DatabaseWithObjectStores() { }

  // Database name.
  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  // Database version (type is not 'integer', as the standard
  // requires the version number to be 'unsigned long long')
  double GetVersion() const { return version_; }
  void SetVersion(double value) { version_ = value; }

  // Object stores in this database.
  const std::vector<std::unique_ptr<::autofill_assistant::indexeddb::ObjectStore>>* GetObjectStores() const { return &object_stores_; }
  void SetObjectStores(std::vector<std::unique_ptr<::autofill_assistant::indexeddb::ObjectStore>> value) { object_stores_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DatabaseWithObjectStores> Clone() const;

  template<int STATE>
  class DatabaseWithObjectStoresBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNameSet = 1 << 1,
    kVersionSet = 1 << 2,
    kObjectStoresSet = 1 << 3,
      kAllRequiredFieldsSet = (kNameSet | kVersionSet | kObjectStoresSet | 0)
    };

    DatabaseWithObjectStoresBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    DatabaseWithObjectStoresBuilder<STATE | kVersionSet>& SetVersion(double value) {
      static_assert(!(STATE & kVersionSet), "property version should not have already been set");
      result_->SetVersion(value);
      return CastState<kVersionSet>();
    }

    DatabaseWithObjectStoresBuilder<STATE | kObjectStoresSet>& SetObjectStores(std::vector<std::unique_ptr<::autofill_assistant::indexeddb::ObjectStore>> value) {
      static_assert(!(STATE & kObjectStoresSet), "property objectStores should not have already been set");
      result_->SetObjectStores(std::move(value));
      return CastState<kObjectStoresSet>();
    }

    std::unique_ptr<DatabaseWithObjectStores> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DatabaseWithObjectStores;
    DatabaseWithObjectStoresBuilder() : result_(new DatabaseWithObjectStores()) { }

    template<int STEP> DatabaseWithObjectStoresBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DatabaseWithObjectStoresBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DatabaseWithObjectStores> result_;
  };

  static DatabaseWithObjectStoresBuilder<0> Builder() {
    return DatabaseWithObjectStoresBuilder<0>();
  }

 private:
  DatabaseWithObjectStores() { }

  std::string name_;
  double version_;
  std::vector<std::unique_ptr<::autofill_assistant::indexeddb::ObjectStore>> object_stores_;
};


// Object store.
class ObjectStore {
 public:
  static std::unique_ptr<ObjectStore> Parse(const base::Value& value, ErrorReporter* errors);
  ObjectStore(const ObjectStore&) = delete;
  ObjectStore& operator=(const ObjectStore&) = delete;
  ~ObjectStore() { }

  // Object store name.
  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  // Object store key path.
  const ::autofill_assistant::indexeddb::KeyPath* GetKeyPath() const { return key_path_.get(); }
  void SetKeyPath(std::unique_ptr<::autofill_assistant::indexeddb::KeyPath> value) { key_path_ = std::move(value); }

  // If true, object store has auto increment flag set.
  bool GetAutoIncrement() const { return auto_increment_; }
  void SetAutoIncrement(bool value) { auto_increment_ = value; }

  // Indexes in this object store.
  const std::vector<std::unique_ptr<::autofill_assistant::indexeddb::ObjectStoreIndex>>* GetIndexes() const { return &indexes_; }
  void SetIndexes(std::vector<std::unique_ptr<::autofill_assistant::indexeddb::ObjectStoreIndex>> value) { indexes_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ObjectStore> Clone() const;

  template<int STATE>
  class ObjectStoreBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNameSet = 1 << 1,
    kKeyPathSet = 1 << 2,
    kAutoIncrementSet = 1 << 3,
    kIndexesSet = 1 << 4,
      kAllRequiredFieldsSet = (kNameSet | kKeyPathSet | kAutoIncrementSet | kIndexesSet | 0)
    };

    ObjectStoreBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    ObjectStoreBuilder<STATE | kKeyPathSet>& SetKeyPath(std::unique_ptr<::autofill_assistant::indexeddb::KeyPath> value) {
      static_assert(!(STATE & kKeyPathSet), "property keyPath should not have already been set");
      result_->SetKeyPath(std::move(value));
      return CastState<kKeyPathSet>();
    }

    ObjectStoreBuilder<STATE | kAutoIncrementSet>& SetAutoIncrement(bool value) {
      static_assert(!(STATE & kAutoIncrementSet), "property autoIncrement should not have already been set");
      result_->SetAutoIncrement(value);
      return CastState<kAutoIncrementSet>();
    }

    ObjectStoreBuilder<STATE | kIndexesSet>& SetIndexes(std::vector<std::unique_ptr<::autofill_assistant::indexeddb::ObjectStoreIndex>> value) {
      static_assert(!(STATE & kIndexesSet), "property indexes should not have already been set");
      result_->SetIndexes(std::move(value));
      return CastState<kIndexesSet>();
    }

    std::unique_ptr<ObjectStore> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ObjectStore;
    ObjectStoreBuilder() : result_(new ObjectStore()) { }

    template<int STEP> ObjectStoreBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ObjectStoreBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ObjectStore> result_;
  };

  static ObjectStoreBuilder<0> Builder() {
    return ObjectStoreBuilder<0>();
  }

 private:
  ObjectStore() { }

  std::string name_;
  std::unique_ptr<::autofill_assistant::indexeddb::KeyPath> key_path_;
  bool auto_increment_;
  std::vector<std::unique_ptr<::autofill_assistant::indexeddb::ObjectStoreIndex>> indexes_;
};


// Object store index.
class ObjectStoreIndex {
 public:
  static std::unique_ptr<ObjectStoreIndex> Parse(const base::Value& value, ErrorReporter* errors);
  ObjectStoreIndex(const ObjectStoreIndex&) = delete;
  ObjectStoreIndex& operator=(const ObjectStoreIndex&) = delete;
  ~ObjectStoreIndex() { }

  // Index name.
  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  // Index key path.
  const ::autofill_assistant::indexeddb::KeyPath* GetKeyPath() const { return key_path_.get(); }
  void SetKeyPath(std::unique_ptr<::autofill_assistant::indexeddb::KeyPath> value) { key_path_ = std::move(value); }

  // If true, index is unique.
  bool GetUnique() const { return unique_; }
  void SetUnique(bool value) { unique_ = value; }

  // If true, index allows multiple entries for a key.
  bool GetMultiEntry() const { return multi_entry_; }
  void SetMultiEntry(bool value) { multi_entry_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ObjectStoreIndex> Clone() const;

  template<int STATE>
  class ObjectStoreIndexBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNameSet = 1 << 1,
    kKeyPathSet = 1 << 2,
    kUniqueSet = 1 << 3,
    kMultiEntrySet = 1 << 4,
      kAllRequiredFieldsSet = (kNameSet | kKeyPathSet | kUniqueSet | kMultiEntrySet | 0)
    };

    ObjectStoreIndexBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    ObjectStoreIndexBuilder<STATE | kKeyPathSet>& SetKeyPath(std::unique_ptr<::autofill_assistant::indexeddb::KeyPath> value) {
      static_assert(!(STATE & kKeyPathSet), "property keyPath should not have already been set");
      result_->SetKeyPath(std::move(value));
      return CastState<kKeyPathSet>();
    }

    ObjectStoreIndexBuilder<STATE | kUniqueSet>& SetUnique(bool value) {
      static_assert(!(STATE & kUniqueSet), "property unique should not have already been set");
      result_->SetUnique(value);
      return CastState<kUniqueSet>();
    }

    ObjectStoreIndexBuilder<STATE | kMultiEntrySet>& SetMultiEntry(bool value) {
      static_assert(!(STATE & kMultiEntrySet), "property multiEntry should not have already been set");
      result_->SetMultiEntry(value);
      return CastState<kMultiEntrySet>();
    }

    std::unique_ptr<ObjectStoreIndex> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ObjectStoreIndex;
    ObjectStoreIndexBuilder() : result_(new ObjectStoreIndex()) { }

    template<int STEP> ObjectStoreIndexBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ObjectStoreIndexBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ObjectStoreIndex> result_;
  };

  static ObjectStoreIndexBuilder<0> Builder() {
    return ObjectStoreIndexBuilder<0>();
  }

 private:
  ObjectStoreIndex() { }

  std::string name_;
  std::unique_ptr<::autofill_assistant::indexeddb::KeyPath> key_path_;
  bool unique_;
  bool multi_entry_;
};


// Key.
class Key {
 public:
  static std::unique_ptr<Key> Parse(const base::Value& value, ErrorReporter* errors);
  Key(const Key&) = delete;
  Key& operator=(const Key&) = delete;
  ~Key() { }

  // Key type.
  ::autofill_assistant::indexeddb::KeyType GetType() const { return type_; }
  void SetType(::autofill_assistant::indexeddb::KeyType value) { type_ = value; }

  // Number value.
  bool HasNumber() const { return !!number_; }
  double GetNumber() const { DCHECK(HasNumber()); return number_.value(); }
  void SetNumber(double value) { number_ = value; }

  // String value.
  bool HasString() const { return !!string_; }
  std::string GetString() const { DCHECK(HasString()); return string_.value(); }
  void SetString(const std::string& value) { string_ = value; }

  // Date value.
  bool HasDate() const { return !!date_; }
  double GetDate() const { DCHECK(HasDate()); return date_.value(); }
  void SetDate(double value) { date_ = value; }

  // Array value.
  bool HasArray() const { return !!array_; }
  const std::vector<std::unique_ptr<::autofill_assistant::indexeddb::Key>>* GetArray() const { DCHECK(HasArray()); return &array_.value(); }
  void SetArray(std::vector<std::unique_ptr<::autofill_assistant::indexeddb::Key>> value) { array_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<Key> Clone() const;

  template<int STATE>
  class KeyBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTypeSet = 1 << 1,
      kAllRequiredFieldsSet = (kTypeSet | 0)
    };

    KeyBuilder<STATE | kTypeSet>& SetType(::autofill_assistant::indexeddb::KeyType value) {
      static_assert(!(STATE & kTypeSet), "property type should not have already been set");
      result_->SetType(value);
      return CastState<kTypeSet>();
    }

    KeyBuilder<STATE>& SetNumber(double value) {
      result_->SetNumber(value);
      return *this;
    }

    KeyBuilder<STATE>& SetString(const std::string& value) {
      result_->SetString(value);
      return *this;
    }

    KeyBuilder<STATE>& SetDate(double value) {
      result_->SetDate(value);
      return *this;
    }

    KeyBuilder<STATE>& SetArray(std::vector<std::unique_ptr<::autofill_assistant::indexeddb::Key>> value) {
      result_->SetArray(std::move(value));
      return *this;
    }

    std::unique_ptr<Key> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class Key;
    KeyBuilder() : result_(new Key()) { }

    template<int STEP> KeyBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<KeyBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<Key> result_;
  };

  static KeyBuilder<0> Builder() {
    return KeyBuilder<0>();
  }

 private:
  Key() { }

  ::autofill_assistant::indexeddb::KeyType type_;
  absl::optional<double> number_;
  absl::optional<std::string> string_;
  absl::optional<double> date_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::indexeddb::Key>>> array_;
};


// Key range.
class KeyRange {
 public:
  static std::unique_ptr<KeyRange> Parse(const base::Value& value, ErrorReporter* errors);
  KeyRange(const KeyRange&) = delete;
  KeyRange& operator=(const KeyRange&) = delete;
  ~KeyRange() { }

  // Lower bound.
  bool HasLower() const { return !!lower_; }
  const ::autofill_assistant::indexeddb::Key* GetLower() const { DCHECK(HasLower()); return lower_.value().get(); }
  void SetLower(std::unique_ptr<::autofill_assistant::indexeddb::Key> value) { lower_ = std::move(value); }

  // Upper bound.
  bool HasUpper() const { return !!upper_; }
  const ::autofill_assistant::indexeddb::Key* GetUpper() const { DCHECK(HasUpper()); return upper_.value().get(); }
  void SetUpper(std::unique_ptr<::autofill_assistant::indexeddb::Key> value) { upper_ = std::move(value); }

  // If true lower bound is open.
  bool GetLowerOpen() const { return lower_open_; }
  void SetLowerOpen(bool value) { lower_open_ = value; }

  // If true upper bound is open.
  bool GetUpperOpen() const { return upper_open_; }
  void SetUpperOpen(bool value) { upper_open_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<KeyRange> Clone() const;

  template<int STATE>
  class KeyRangeBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kLowerOpenSet = 1 << 1,
    kUpperOpenSet = 1 << 2,
      kAllRequiredFieldsSet = (kLowerOpenSet | kUpperOpenSet | 0)
    };

    KeyRangeBuilder<STATE>& SetLower(std::unique_ptr<::autofill_assistant::indexeddb::Key> value) {
      result_->SetLower(std::move(value));
      return *this;
    }

    KeyRangeBuilder<STATE>& SetUpper(std::unique_ptr<::autofill_assistant::indexeddb::Key> value) {
      result_->SetUpper(std::move(value));
      return *this;
    }

    KeyRangeBuilder<STATE | kLowerOpenSet>& SetLowerOpen(bool value) {
      static_assert(!(STATE & kLowerOpenSet), "property lowerOpen should not have already been set");
      result_->SetLowerOpen(value);
      return CastState<kLowerOpenSet>();
    }

    KeyRangeBuilder<STATE | kUpperOpenSet>& SetUpperOpen(bool value) {
      static_assert(!(STATE & kUpperOpenSet), "property upperOpen should not have already been set");
      result_->SetUpperOpen(value);
      return CastState<kUpperOpenSet>();
    }

    std::unique_ptr<KeyRange> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class KeyRange;
    KeyRangeBuilder() : result_(new KeyRange()) { }

    template<int STEP> KeyRangeBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<KeyRangeBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<KeyRange> result_;
  };

  static KeyRangeBuilder<0> Builder() {
    return KeyRangeBuilder<0>();
  }

 private:
  KeyRange() { }

  absl::optional<std::unique_ptr<::autofill_assistant::indexeddb::Key>> lower_;
  absl::optional<std::unique_ptr<::autofill_assistant::indexeddb::Key>> upper_;
  bool lower_open_;
  bool upper_open_;
};


// Data entry.
class DataEntry {
 public:
  static std::unique_ptr<DataEntry> Parse(const base::Value& value, ErrorReporter* errors);
  DataEntry(const DataEntry&) = delete;
  DataEntry& operator=(const DataEntry&) = delete;
  ~DataEntry() { }

  // Key object.
  const ::autofill_assistant::runtime::RemoteObject* GetKey() const { return key_.get(); }
  void SetKey(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) { key_ = std::move(value); }

  // Primary key object.
  const ::autofill_assistant::runtime::RemoteObject* GetPrimaryKey() const { return primary_key_.get(); }
  void SetPrimaryKey(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) { primary_key_ = std::move(value); }

  // Value object.
  const ::autofill_assistant::runtime::RemoteObject* GetValue() const { return value_.get(); }
  void SetValue(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) { value_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DataEntry> Clone() const;

  template<int STATE>
  class DataEntryBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kKeySet = 1 << 1,
    kPrimaryKeySet = 1 << 2,
    kValueSet = 1 << 3,
      kAllRequiredFieldsSet = (kKeySet | kPrimaryKeySet | kValueSet | 0)
    };

    DataEntryBuilder<STATE | kKeySet>& SetKey(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) {
      static_assert(!(STATE & kKeySet), "property key should not have already been set");
      result_->SetKey(std::move(value));
      return CastState<kKeySet>();
    }

    DataEntryBuilder<STATE | kPrimaryKeySet>& SetPrimaryKey(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) {
      static_assert(!(STATE & kPrimaryKeySet), "property primaryKey should not have already been set");
      result_->SetPrimaryKey(std::move(value));
      return CastState<kPrimaryKeySet>();
    }

    DataEntryBuilder<STATE | kValueSet>& SetValue(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) {
      static_assert(!(STATE & kValueSet), "property value should not have already been set");
      result_->SetValue(std::move(value));
      return CastState<kValueSet>();
    }

    std::unique_ptr<DataEntry> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DataEntry;
    DataEntryBuilder() : result_(new DataEntry()) { }

    template<int STEP> DataEntryBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DataEntryBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DataEntry> result_;
  };

  static DataEntryBuilder<0> Builder() {
    return DataEntryBuilder<0>();
  }

 private:
  DataEntry() { }

  std::unique_ptr<::autofill_assistant::runtime::RemoteObject> key_;
  std::unique_ptr<::autofill_assistant::runtime::RemoteObject> primary_key_;
  std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value_;
};


// Key path.
class KeyPath {
 public:
  static std::unique_ptr<KeyPath> Parse(const base::Value& value, ErrorReporter* errors);
  KeyPath(const KeyPath&) = delete;
  KeyPath& operator=(const KeyPath&) = delete;
  ~KeyPath() { }

  // Key path type.
  ::autofill_assistant::indexeddb::KeyPathType GetType() const { return type_; }
  void SetType(::autofill_assistant::indexeddb::KeyPathType value) { type_ = value; }

  // String value.
  bool HasString() const { return !!string_; }
  std::string GetString() const { DCHECK(HasString()); return string_.value(); }
  void SetString(const std::string& value) { string_ = value; }

  // Array value.
  bool HasArray() const { return !!array_; }
  const std::vector<std::string>* GetArray() const { DCHECK(HasArray()); return &array_.value(); }
  void SetArray(std::vector<std::string> value) { array_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<KeyPath> Clone() const;

  template<int STATE>
  class KeyPathBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTypeSet = 1 << 1,
      kAllRequiredFieldsSet = (kTypeSet | 0)
    };

    KeyPathBuilder<STATE | kTypeSet>& SetType(::autofill_assistant::indexeddb::KeyPathType value) {
      static_assert(!(STATE & kTypeSet), "property type should not have already been set");
      result_->SetType(value);
      return CastState<kTypeSet>();
    }

    KeyPathBuilder<STATE>& SetString(const std::string& value) {
      result_->SetString(value);
      return *this;
    }

    KeyPathBuilder<STATE>& SetArray(std::vector<std::string> value) {
      result_->SetArray(std::move(value));
      return *this;
    }

    std::unique_ptr<KeyPath> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class KeyPath;
    KeyPathBuilder() : result_(new KeyPath()) { }

    template<int STEP> KeyPathBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<KeyPathBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<KeyPath> result_;
  };

  static KeyPathBuilder<0> Builder() {
    return KeyPathBuilder<0>();
  }

 private:
  KeyPath() { }

  ::autofill_assistant::indexeddb::KeyPathType type_;
  absl::optional<std::string> string_;
  absl::optional<std::vector<std::string>> array_;
};


// Parameters for the ClearObjectStore command.
class ClearObjectStoreParams {
 public:
  static std::unique_ptr<ClearObjectStoreParams> Parse(const base::Value& value, ErrorReporter* errors);
  ClearObjectStoreParams(const ClearObjectStoreParams&) = delete;
  ClearObjectStoreParams& operator=(const ClearObjectStoreParams&) = delete;
  ~ClearObjectStoreParams() { }

  // At least and at most one of securityOrigin, storageKey must be specified.
  // Security origin.
  bool HasSecurityOrigin() const { return !!security_origin_; }
  std::string GetSecurityOrigin() const { DCHECK(HasSecurityOrigin()); return security_origin_.value(); }
  void SetSecurityOrigin(const std::string& value) { security_origin_ = value; }

  // Storage key.
  bool HasStorageKey() const { return !!storage_key_; }
  std::string GetStorageKey() const { DCHECK(HasStorageKey()); return storage_key_.value(); }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  // Database name.
  std::string GetDatabaseName() const { return database_name_; }
  void SetDatabaseName(const std::string& value) { database_name_ = value; }

  // Object store name.
  std::string GetObjectStoreName() const { return object_store_name_; }
  void SetObjectStoreName(const std::string& value) { object_store_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearObjectStoreParams> Clone() const;

  template<int STATE>
  class ClearObjectStoreParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDatabaseNameSet = 1 << 1,
    kObjectStoreNameSet = 1 << 2,
      kAllRequiredFieldsSet = (kDatabaseNameSet | kObjectStoreNameSet | 0)
    };

    ClearObjectStoreParamsBuilder<STATE>& SetSecurityOrigin(const std::string& value) {
      result_->SetSecurityOrigin(value);
      return *this;
    }

    ClearObjectStoreParamsBuilder<STATE>& SetStorageKey(const std::string& value) {
      result_->SetStorageKey(value);
      return *this;
    }

    ClearObjectStoreParamsBuilder<STATE | kDatabaseNameSet>& SetDatabaseName(const std::string& value) {
      static_assert(!(STATE & kDatabaseNameSet), "property databaseName should not have already been set");
      result_->SetDatabaseName(value);
      return CastState<kDatabaseNameSet>();
    }

    ClearObjectStoreParamsBuilder<STATE | kObjectStoreNameSet>& SetObjectStoreName(const std::string& value) {
      static_assert(!(STATE & kObjectStoreNameSet), "property objectStoreName should not have already been set");
      result_->SetObjectStoreName(value);
      return CastState<kObjectStoreNameSet>();
    }

    std::unique_ptr<ClearObjectStoreParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearObjectStoreParams;
    ClearObjectStoreParamsBuilder() : result_(new ClearObjectStoreParams()) { }

    template<int STEP> ClearObjectStoreParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearObjectStoreParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearObjectStoreParams> result_;
  };

  static ClearObjectStoreParamsBuilder<0> Builder() {
    return ClearObjectStoreParamsBuilder<0>();
  }

 private:
  ClearObjectStoreParams() { }

  absl::optional<std::string> security_origin_;
  absl::optional<std::string> storage_key_;
  std::string database_name_;
  std::string object_store_name_;
};


// Result for the ClearObjectStore command.
class ClearObjectStoreResult {
 public:
  static std::unique_ptr<ClearObjectStoreResult> Parse(const base::Value& value, ErrorReporter* errors);
  ClearObjectStoreResult(const ClearObjectStoreResult&) = delete;
  ClearObjectStoreResult& operator=(const ClearObjectStoreResult&) = delete;
  ~ClearObjectStoreResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearObjectStoreResult> Clone() const;

  template<int STATE>
  class ClearObjectStoreResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearObjectStoreResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearObjectStoreResult;
    ClearObjectStoreResultBuilder() : result_(new ClearObjectStoreResult()) { }

    template<int STEP> ClearObjectStoreResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearObjectStoreResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearObjectStoreResult> result_;
  };

  static ClearObjectStoreResultBuilder<0> Builder() {
    return ClearObjectStoreResultBuilder<0>();
  }

 private:
  ClearObjectStoreResult() { }

};


// Parameters for the DeleteDatabase command.
class DeleteDatabaseParams {
 public:
  static std::unique_ptr<DeleteDatabaseParams> Parse(const base::Value& value, ErrorReporter* errors);
  DeleteDatabaseParams(const DeleteDatabaseParams&) = delete;
  DeleteDatabaseParams& operator=(const DeleteDatabaseParams&) = delete;
  ~DeleteDatabaseParams() { }

  // At least and at most one of securityOrigin, storageKey must be specified.
  // Security origin.
  bool HasSecurityOrigin() const { return !!security_origin_; }
  std::string GetSecurityOrigin() const { DCHECK(HasSecurityOrigin()); return security_origin_.value(); }
  void SetSecurityOrigin(const std::string& value) { security_origin_ = value; }

  // Storage key.
  bool HasStorageKey() const { return !!storage_key_; }
  std::string GetStorageKey() const { DCHECK(HasStorageKey()); return storage_key_.value(); }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  // Database name.
  std::string GetDatabaseName() const { return database_name_; }
  void SetDatabaseName(const std::string& value) { database_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DeleteDatabaseParams> Clone() const;

  template<int STATE>
  class DeleteDatabaseParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDatabaseNameSet = 1 << 1,
      kAllRequiredFieldsSet = (kDatabaseNameSet | 0)
    };

    DeleteDatabaseParamsBuilder<STATE>& SetSecurityOrigin(const std::string& value) {
      result_->SetSecurityOrigin(value);
      return *this;
    }

    DeleteDatabaseParamsBuilder<STATE>& SetStorageKey(const std::string& value) {
      result_->SetStorageKey(value);
      return *this;
    }

    DeleteDatabaseParamsBuilder<STATE | kDatabaseNameSet>& SetDatabaseName(const std::string& value) {
      static_assert(!(STATE & kDatabaseNameSet), "property databaseName should not have already been set");
      result_->SetDatabaseName(value);
      return CastState<kDatabaseNameSet>();
    }

    std::unique_ptr<DeleteDatabaseParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DeleteDatabaseParams;
    DeleteDatabaseParamsBuilder() : result_(new DeleteDatabaseParams()) { }

    template<int STEP> DeleteDatabaseParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DeleteDatabaseParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DeleteDatabaseParams> result_;
  };

  static DeleteDatabaseParamsBuilder<0> Builder() {
    return DeleteDatabaseParamsBuilder<0>();
  }

 private:
  DeleteDatabaseParams() { }

  absl::optional<std::string> security_origin_;
  absl::optional<std::string> storage_key_;
  std::string database_name_;
};


// Result for the DeleteDatabase command.
class DeleteDatabaseResult {
 public:
  static std::unique_ptr<DeleteDatabaseResult> Parse(const base::Value& value, ErrorReporter* errors);
  DeleteDatabaseResult(const DeleteDatabaseResult&) = delete;
  DeleteDatabaseResult& operator=(const DeleteDatabaseResult&) = delete;
  ~DeleteDatabaseResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DeleteDatabaseResult> Clone() const;

  template<int STATE>
  class DeleteDatabaseResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DeleteDatabaseResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DeleteDatabaseResult;
    DeleteDatabaseResultBuilder() : result_(new DeleteDatabaseResult()) { }

    template<int STEP> DeleteDatabaseResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DeleteDatabaseResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DeleteDatabaseResult> result_;
  };

  static DeleteDatabaseResultBuilder<0> Builder() {
    return DeleteDatabaseResultBuilder<0>();
  }

 private:
  DeleteDatabaseResult() { }

};


// Parameters for the DeleteObjectStoreEntries command.
class DeleteObjectStoreEntriesParams {
 public:
  static std::unique_ptr<DeleteObjectStoreEntriesParams> Parse(const base::Value& value, ErrorReporter* errors);
  DeleteObjectStoreEntriesParams(const DeleteObjectStoreEntriesParams&) = delete;
  DeleteObjectStoreEntriesParams& operator=(const DeleteObjectStoreEntriesParams&) = delete;
  ~DeleteObjectStoreEntriesParams() { }

  // At least and at most one of securityOrigin, storageKey must be specified.
  // Security origin.
  bool HasSecurityOrigin() const { return !!security_origin_; }
  std::string GetSecurityOrigin() const { DCHECK(HasSecurityOrigin()); return security_origin_.value(); }
  void SetSecurityOrigin(const std::string& value) { security_origin_ = value; }

  // Storage key.
  bool HasStorageKey() const { return !!storage_key_; }
  std::string GetStorageKey() const { DCHECK(HasStorageKey()); return storage_key_.value(); }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  std::string GetDatabaseName() const { return database_name_; }
  void SetDatabaseName(const std::string& value) { database_name_ = value; }

  std::string GetObjectStoreName() const { return object_store_name_; }
  void SetObjectStoreName(const std::string& value) { object_store_name_ = value; }

  // Range of entry keys to delete
  const ::autofill_assistant::indexeddb::KeyRange* GetKeyRange() const { return key_range_.get(); }
  void SetKeyRange(std::unique_ptr<::autofill_assistant::indexeddb::KeyRange> value) { key_range_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DeleteObjectStoreEntriesParams> Clone() const;

  template<int STATE>
  class DeleteObjectStoreEntriesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDatabaseNameSet = 1 << 1,
    kObjectStoreNameSet = 1 << 2,
    kKeyRangeSet = 1 << 3,
      kAllRequiredFieldsSet = (kDatabaseNameSet | kObjectStoreNameSet | kKeyRangeSet | 0)
    };

    DeleteObjectStoreEntriesParamsBuilder<STATE>& SetSecurityOrigin(const std::string& value) {
      result_->SetSecurityOrigin(value);
      return *this;
    }

    DeleteObjectStoreEntriesParamsBuilder<STATE>& SetStorageKey(const std::string& value) {
      result_->SetStorageKey(value);
      return *this;
    }

    DeleteObjectStoreEntriesParamsBuilder<STATE | kDatabaseNameSet>& SetDatabaseName(const std::string& value) {
      static_assert(!(STATE & kDatabaseNameSet), "property databaseName should not have already been set");
      result_->SetDatabaseName(value);
      return CastState<kDatabaseNameSet>();
    }

    DeleteObjectStoreEntriesParamsBuilder<STATE | kObjectStoreNameSet>& SetObjectStoreName(const std::string& value) {
      static_assert(!(STATE & kObjectStoreNameSet), "property objectStoreName should not have already been set");
      result_->SetObjectStoreName(value);
      return CastState<kObjectStoreNameSet>();
    }

    DeleteObjectStoreEntriesParamsBuilder<STATE | kKeyRangeSet>& SetKeyRange(std::unique_ptr<::autofill_assistant::indexeddb::KeyRange> value) {
      static_assert(!(STATE & kKeyRangeSet), "property keyRange should not have already been set");
      result_->SetKeyRange(std::move(value));
      return CastState<kKeyRangeSet>();
    }

    std::unique_ptr<DeleteObjectStoreEntriesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DeleteObjectStoreEntriesParams;
    DeleteObjectStoreEntriesParamsBuilder() : result_(new DeleteObjectStoreEntriesParams()) { }

    template<int STEP> DeleteObjectStoreEntriesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DeleteObjectStoreEntriesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DeleteObjectStoreEntriesParams> result_;
  };

  static DeleteObjectStoreEntriesParamsBuilder<0> Builder() {
    return DeleteObjectStoreEntriesParamsBuilder<0>();
  }

 private:
  DeleteObjectStoreEntriesParams() { }

  absl::optional<std::string> security_origin_;
  absl::optional<std::string> storage_key_;
  std::string database_name_;
  std::string object_store_name_;
  std::unique_ptr<::autofill_assistant::indexeddb::KeyRange> key_range_;
};


// Result for the DeleteObjectStoreEntries command.
class DeleteObjectStoreEntriesResult {
 public:
  static std::unique_ptr<DeleteObjectStoreEntriesResult> Parse(const base::Value& value, ErrorReporter* errors);
  DeleteObjectStoreEntriesResult(const DeleteObjectStoreEntriesResult&) = delete;
  DeleteObjectStoreEntriesResult& operator=(const DeleteObjectStoreEntriesResult&) = delete;
  ~DeleteObjectStoreEntriesResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DeleteObjectStoreEntriesResult> Clone() const;

  template<int STATE>
  class DeleteObjectStoreEntriesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DeleteObjectStoreEntriesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DeleteObjectStoreEntriesResult;
    DeleteObjectStoreEntriesResultBuilder() : result_(new DeleteObjectStoreEntriesResult()) { }

    template<int STEP> DeleteObjectStoreEntriesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DeleteObjectStoreEntriesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DeleteObjectStoreEntriesResult> result_;
  };

  static DeleteObjectStoreEntriesResultBuilder<0> Builder() {
    return DeleteObjectStoreEntriesResultBuilder<0>();
  }

 private:
  DeleteObjectStoreEntriesResult() { }

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


// Parameters for the RequestData command.
class RequestDataParams {
 public:
  static std::unique_ptr<RequestDataParams> Parse(const base::Value& value, ErrorReporter* errors);
  RequestDataParams(const RequestDataParams&) = delete;
  RequestDataParams& operator=(const RequestDataParams&) = delete;
  ~RequestDataParams() { }

  // At least and at most one of securityOrigin, storageKey must be specified.
  // Security origin.
  bool HasSecurityOrigin() const { return !!security_origin_; }
  std::string GetSecurityOrigin() const { DCHECK(HasSecurityOrigin()); return security_origin_.value(); }
  void SetSecurityOrigin(const std::string& value) { security_origin_ = value; }

  // Storage key.
  bool HasStorageKey() const { return !!storage_key_; }
  std::string GetStorageKey() const { DCHECK(HasStorageKey()); return storage_key_.value(); }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  // Database name.
  std::string GetDatabaseName() const { return database_name_; }
  void SetDatabaseName(const std::string& value) { database_name_ = value; }

  // Object store name.
  std::string GetObjectStoreName() const { return object_store_name_; }
  void SetObjectStoreName(const std::string& value) { object_store_name_ = value; }

  // Index name, empty string for object store data requests.
  std::string GetIndexName() const { return index_name_; }
  void SetIndexName(const std::string& value) { index_name_ = value; }

  // Number of records to skip.
  int GetSkipCount() const { return skip_count_; }
  void SetSkipCount(int value) { skip_count_ = value; }

  // Number of records to fetch.
  int GetPageSize() const { return page_size_; }
  void SetPageSize(int value) { page_size_ = value; }

  // Key range.
  bool HasKeyRange() const { return !!key_range_; }
  const ::autofill_assistant::indexeddb::KeyRange* GetKeyRange() const { DCHECK(HasKeyRange()); return key_range_.value().get(); }
  void SetKeyRange(std::unique_ptr<::autofill_assistant::indexeddb::KeyRange> value) { key_range_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RequestDataParams> Clone() const;

  template<int STATE>
  class RequestDataParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDatabaseNameSet = 1 << 1,
    kObjectStoreNameSet = 1 << 2,
    kIndexNameSet = 1 << 3,
    kSkipCountSet = 1 << 4,
    kPageSizeSet = 1 << 5,
      kAllRequiredFieldsSet = (kDatabaseNameSet | kObjectStoreNameSet | kIndexNameSet | kSkipCountSet | kPageSizeSet | 0)
    };

    RequestDataParamsBuilder<STATE>& SetSecurityOrigin(const std::string& value) {
      result_->SetSecurityOrigin(value);
      return *this;
    }

    RequestDataParamsBuilder<STATE>& SetStorageKey(const std::string& value) {
      result_->SetStorageKey(value);
      return *this;
    }

    RequestDataParamsBuilder<STATE | kDatabaseNameSet>& SetDatabaseName(const std::string& value) {
      static_assert(!(STATE & kDatabaseNameSet), "property databaseName should not have already been set");
      result_->SetDatabaseName(value);
      return CastState<kDatabaseNameSet>();
    }

    RequestDataParamsBuilder<STATE | kObjectStoreNameSet>& SetObjectStoreName(const std::string& value) {
      static_assert(!(STATE & kObjectStoreNameSet), "property objectStoreName should not have already been set");
      result_->SetObjectStoreName(value);
      return CastState<kObjectStoreNameSet>();
    }

    RequestDataParamsBuilder<STATE | kIndexNameSet>& SetIndexName(const std::string& value) {
      static_assert(!(STATE & kIndexNameSet), "property indexName should not have already been set");
      result_->SetIndexName(value);
      return CastState<kIndexNameSet>();
    }

    RequestDataParamsBuilder<STATE | kSkipCountSet>& SetSkipCount(int value) {
      static_assert(!(STATE & kSkipCountSet), "property skipCount should not have already been set");
      result_->SetSkipCount(value);
      return CastState<kSkipCountSet>();
    }

    RequestDataParamsBuilder<STATE | kPageSizeSet>& SetPageSize(int value) {
      static_assert(!(STATE & kPageSizeSet), "property pageSize should not have already been set");
      result_->SetPageSize(value);
      return CastState<kPageSizeSet>();
    }

    RequestDataParamsBuilder<STATE>& SetKeyRange(std::unique_ptr<::autofill_assistant::indexeddb::KeyRange> value) {
      result_->SetKeyRange(std::move(value));
      return *this;
    }

    std::unique_ptr<RequestDataParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RequestDataParams;
    RequestDataParamsBuilder() : result_(new RequestDataParams()) { }

    template<int STEP> RequestDataParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RequestDataParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RequestDataParams> result_;
  };

  static RequestDataParamsBuilder<0> Builder() {
    return RequestDataParamsBuilder<0>();
  }

 private:
  RequestDataParams() { }

  absl::optional<std::string> security_origin_;
  absl::optional<std::string> storage_key_;
  std::string database_name_;
  std::string object_store_name_;
  std::string index_name_;
  int skip_count_;
  int page_size_;
  absl::optional<std::unique_ptr<::autofill_assistant::indexeddb::KeyRange>> key_range_;
};


// Result for the RequestData command.
class RequestDataResult {
 public:
  static std::unique_ptr<RequestDataResult> Parse(const base::Value& value, ErrorReporter* errors);
  RequestDataResult(const RequestDataResult&) = delete;
  RequestDataResult& operator=(const RequestDataResult&) = delete;
  ~RequestDataResult() { }

  // Array of object store data entries.
  const std::vector<std::unique_ptr<::autofill_assistant::indexeddb::DataEntry>>* GetObjectStoreDataEntries() const { return &object_store_data_entries_; }
  void SetObjectStoreDataEntries(std::vector<std::unique_ptr<::autofill_assistant::indexeddb::DataEntry>> value) { object_store_data_entries_ = std::move(value); }

  // If true, there are more entries to fetch in the given range.
  bool GetHasMore() const { return has_more_; }
  void SetHasMore(bool value) { has_more_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RequestDataResult> Clone() const;

  template<int STATE>
  class RequestDataResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kObjectStoreDataEntriesSet = 1 << 1,
    kHasMoreSet = 1 << 2,
      kAllRequiredFieldsSet = (kObjectStoreDataEntriesSet | kHasMoreSet | 0)
    };

    RequestDataResultBuilder<STATE | kObjectStoreDataEntriesSet>& SetObjectStoreDataEntries(std::vector<std::unique_ptr<::autofill_assistant::indexeddb::DataEntry>> value) {
      static_assert(!(STATE & kObjectStoreDataEntriesSet), "property objectStoreDataEntries should not have already been set");
      result_->SetObjectStoreDataEntries(std::move(value));
      return CastState<kObjectStoreDataEntriesSet>();
    }

    RequestDataResultBuilder<STATE | kHasMoreSet>& SetHasMore(bool value) {
      static_assert(!(STATE & kHasMoreSet), "property hasMore should not have already been set");
      result_->SetHasMore(value);
      return CastState<kHasMoreSet>();
    }

    std::unique_ptr<RequestDataResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RequestDataResult;
    RequestDataResultBuilder() : result_(new RequestDataResult()) { }

    template<int STEP> RequestDataResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RequestDataResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RequestDataResult> result_;
  };

  static RequestDataResultBuilder<0> Builder() {
    return RequestDataResultBuilder<0>();
  }

 private:
  RequestDataResult() { }

  std::vector<std::unique_ptr<::autofill_assistant::indexeddb::DataEntry>> object_store_data_entries_;
  bool has_more_;
};


// Parameters for the GetMetadata command.
class GetMetadataParams {
 public:
  static std::unique_ptr<GetMetadataParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetMetadataParams(const GetMetadataParams&) = delete;
  GetMetadataParams& operator=(const GetMetadataParams&) = delete;
  ~GetMetadataParams() { }

  // At least and at most one of securityOrigin, storageKey must be specified.
  // Security origin.
  bool HasSecurityOrigin() const { return !!security_origin_; }
  std::string GetSecurityOrigin() const { DCHECK(HasSecurityOrigin()); return security_origin_.value(); }
  void SetSecurityOrigin(const std::string& value) { security_origin_ = value; }

  // Storage key.
  bool HasStorageKey() const { return !!storage_key_; }
  std::string GetStorageKey() const { DCHECK(HasStorageKey()); return storage_key_.value(); }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  // Database name.
  std::string GetDatabaseName() const { return database_name_; }
  void SetDatabaseName(const std::string& value) { database_name_ = value; }

  // Object store name.
  std::string GetObjectStoreName() const { return object_store_name_; }
  void SetObjectStoreName(const std::string& value) { object_store_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetMetadataParams> Clone() const;

  template<int STATE>
  class GetMetadataParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDatabaseNameSet = 1 << 1,
    kObjectStoreNameSet = 1 << 2,
      kAllRequiredFieldsSet = (kDatabaseNameSet | kObjectStoreNameSet | 0)
    };

    GetMetadataParamsBuilder<STATE>& SetSecurityOrigin(const std::string& value) {
      result_->SetSecurityOrigin(value);
      return *this;
    }

    GetMetadataParamsBuilder<STATE>& SetStorageKey(const std::string& value) {
      result_->SetStorageKey(value);
      return *this;
    }

    GetMetadataParamsBuilder<STATE | kDatabaseNameSet>& SetDatabaseName(const std::string& value) {
      static_assert(!(STATE & kDatabaseNameSet), "property databaseName should not have already been set");
      result_->SetDatabaseName(value);
      return CastState<kDatabaseNameSet>();
    }

    GetMetadataParamsBuilder<STATE | kObjectStoreNameSet>& SetObjectStoreName(const std::string& value) {
      static_assert(!(STATE & kObjectStoreNameSet), "property objectStoreName should not have already been set");
      result_->SetObjectStoreName(value);
      return CastState<kObjectStoreNameSet>();
    }

    std::unique_ptr<GetMetadataParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetMetadataParams;
    GetMetadataParamsBuilder() : result_(new GetMetadataParams()) { }

    template<int STEP> GetMetadataParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetMetadataParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetMetadataParams> result_;
  };

  static GetMetadataParamsBuilder<0> Builder() {
    return GetMetadataParamsBuilder<0>();
  }

 private:
  GetMetadataParams() { }

  absl::optional<std::string> security_origin_;
  absl::optional<std::string> storage_key_;
  std::string database_name_;
  std::string object_store_name_;
};


// Result for the GetMetadata command.
class GetMetadataResult {
 public:
  static std::unique_ptr<GetMetadataResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetMetadataResult(const GetMetadataResult&) = delete;
  GetMetadataResult& operator=(const GetMetadataResult&) = delete;
  ~GetMetadataResult() { }

  // the entries count
  double GetEntriesCount() const { return entries_count_; }
  void SetEntriesCount(double value) { entries_count_ = value; }

  // the current value of key generator, to become the next inserted
  // key into the object store. Valid if objectStore.autoIncrement
  // is true.
  double GetKeyGeneratorValue() const { return key_generator_value_; }
  void SetKeyGeneratorValue(double value) { key_generator_value_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetMetadataResult> Clone() const;

  template<int STATE>
  class GetMetadataResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kEntriesCountSet = 1 << 1,
    kKeyGeneratorValueSet = 1 << 2,
      kAllRequiredFieldsSet = (kEntriesCountSet | kKeyGeneratorValueSet | 0)
    };

    GetMetadataResultBuilder<STATE | kEntriesCountSet>& SetEntriesCount(double value) {
      static_assert(!(STATE & kEntriesCountSet), "property entriesCount should not have already been set");
      result_->SetEntriesCount(value);
      return CastState<kEntriesCountSet>();
    }

    GetMetadataResultBuilder<STATE | kKeyGeneratorValueSet>& SetKeyGeneratorValue(double value) {
      static_assert(!(STATE & kKeyGeneratorValueSet), "property keyGeneratorValue should not have already been set");
      result_->SetKeyGeneratorValue(value);
      return CastState<kKeyGeneratorValueSet>();
    }

    std::unique_ptr<GetMetadataResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetMetadataResult;
    GetMetadataResultBuilder() : result_(new GetMetadataResult()) { }

    template<int STEP> GetMetadataResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetMetadataResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetMetadataResult> result_;
  };

  static GetMetadataResultBuilder<0> Builder() {
    return GetMetadataResultBuilder<0>();
  }

 private:
  GetMetadataResult() { }

  double entries_count_;
  double key_generator_value_;
};


// Parameters for the RequestDatabase command.
class RequestDatabaseParams {
 public:
  static std::unique_ptr<RequestDatabaseParams> Parse(const base::Value& value, ErrorReporter* errors);
  RequestDatabaseParams(const RequestDatabaseParams&) = delete;
  RequestDatabaseParams& operator=(const RequestDatabaseParams&) = delete;
  ~RequestDatabaseParams() { }

  // At least and at most one of securityOrigin, storageKey must be specified.
  // Security origin.
  bool HasSecurityOrigin() const { return !!security_origin_; }
  std::string GetSecurityOrigin() const { DCHECK(HasSecurityOrigin()); return security_origin_.value(); }
  void SetSecurityOrigin(const std::string& value) { security_origin_ = value; }

  // Storage key.
  bool HasStorageKey() const { return !!storage_key_; }
  std::string GetStorageKey() const { DCHECK(HasStorageKey()); return storage_key_.value(); }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  // Database name.
  std::string GetDatabaseName() const { return database_name_; }
  void SetDatabaseName(const std::string& value) { database_name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RequestDatabaseParams> Clone() const;

  template<int STATE>
  class RequestDatabaseParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDatabaseNameSet = 1 << 1,
      kAllRequiredFieldsSet = (kDatabaseNameSet | 0)
    };

    RequestDatabaseParamsBuilder<STATE>& SetSecurityOrigin(const std::string& value) {
      result_->SetSecurityOrigin(value);
      return *this;
    }

    RequestDatabaseParamsBuilder<STATE>& SetStorageKey(const std::string& value) {
      result_->SetStorageKey(value);
      return *this;
    }

    RequestDatabaseParamsBuilder<STATE | kDatabaseNameSet>& SetDatabaseName(const std::string& value) {
      static_assert(!(STATE & kDatabaseNameSet), "property databaseName should not have already been set");
      result_->SetDatabaseName(value);
      return CastState<kDatabaseNameSet>();
    }

    std::unique_ptr<RequestDatabaseParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RequestDatabaseParams;
    RequestDatabaseParamsBuilder() : result_(new RequestDatabaseParams()) { }

    template<int STEP> RequestDatabaseParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RequestDatabaseParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RequestDatabaseParams> result_;
  };

  static RequestDatabaseParamsBuilder<0> Builder() {
    return RequestDatabaseParamsBuilder<0>();
  }

 private:
  RequestDatabaseParams() { }

  absl::optional<std::string> security_origin_;
  absl::optional<std::string> storage_key_;
  std::string database_name_;
};


// Result for the RequestDatabase command.
class RequestDatabaseResult {
 public:
  static std::unique_ptr<RequestDatabaseResult> Parse(const base::Value& value, ErrorReporter* errors);
  RequestDatabaseResult(const RequestDatabaseResult&) = delete;
  RequestDatabaseResult& operator=(const RequestDatabaseResult&) = delete;
  ~RequestDatabaseResult() { }

  // Database with an array of object stores.
  const ::autofill_assistant::indexeddb::DatabaseWithObjectStores* GetDatabaseWithObjectStores() const { return database_with_object_stores_.get(); }
  void SetDatabaseWithObjectStores(std::unique_ptr<::autofill_assistant::indexeddb::DatabaseWithObjectStores> value) { database_with_object_stores_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RequestDatabaseResult> Clone() const;

  template<int STATE>
  class RequestDatabaseResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDatabaseWithObjectStoresSet = 1 << 1,
      kAllRequiredFieldsSet = (kDatabaseWithObjectStoresSet | 0)
    };

    RequestDatabaseResultBuilder<STATE | kDatabaseWithObjectStoresSet>& SetDatabaseWithObjectStores(std::unique_ptr<::autofill_assistant::indexeddb::DatabaseWithObjectStores> value) {
      static_assert(!(STATE & kDatabaseWithObjectStoresSet), "property databaseWithObjectStores should not have already been set");
      result_->SetDatabaseWithObjectStores(std::move(value));
      return CastState<kDatabaseWithObjectStoresSet>();
    }

    std::unique_ptr<RequestDatabaseResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RequestDatabaseResult;
    RequestDatabaseResultBuilder() : result_(new RequestDatabaseResult()) { }

    template<int STEP> RequestDatabaseResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RequestDatabaseResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RequestDatabaseResult> result_;
  };

  static RequestDatabaseResultBuilder<0> Builder() {
    return RequestDatabaseResultBuilder<0>();
  }

 private:
  RequestDatabaseResult() { }

  std::unique_ptr<::autofill_assistant::indexeddb::DatabaseWithObjectStores> database_with_object_stores_;
};


// Parameters for the RequestDatabaseNames command.
class RequestDatabaseNamesParams {
 public:
  static std::unique_ptr<RequestDatabaseNamesParams> Parse(const base::Value& value, ErrorReporter* errors);
  RequestDatabaseNamesParams(const RequestDatabaseNamesParams&) = delete;
  RequestDatabaseNamesParams& operator=(const RequestDatabaseNamesParams&) = delete;
  ~RequestDatabaseNamesParams() { }

  // At least and at most one of securityOrigin, storageKey must be specified.
  // Security origin.
  bool HasSecurityOrigin() const { return !!security_origin_; }
  std::string GetSecurityOrigin() const { DCHECK(HasSecurityOrigin()); return security_origin_.value(); }
  void SetSecurityOrigin(const std::string& value) { security_origin_ = value; }

  // Storage key.
  bool HasStorageKey() const { return !!storage_key_; }
  std::string GetStorageKey() const { DCHECK(HasStorageKey()); return storage_key_.value(); }
  void SetStorageKey(const std::string& value) { storage_key_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RequestDatabaseNamesParams> Clone() const;

  template<int STATE>
  class RequestDatabaseNamesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    RequestDatabaseNamesParamsBuilder<STATE>& SetSecurityOrigin(const std::string& value) {
      result_->SetSecurityOrigin(value);
      return *this;
    }

    RequestDatabaseNamesParamsBuilder<STATE>& SetStorageKey(const std::string& value) {
      result_->SetStorageKey(value);
      return *this;
    }

    std::unique_ptr<RequestDatabaseNamesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RequestDatabaseNamesParams;
    RequestDatabaseNamesParamsBuilder() : result_(new RequestDatabaseNamesParams()) { }

    template<int STEP> RequestDatabaseNamesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RequestDatabaseNamesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RequestDatabaseNamesParams> result_;
  };

  static RequestDatabaseNamesParamsBuilder<0> Builder() {
    return RequestDatabaseNamesParamsBuilder<0>();
  }

 private:
  RequestDatabaseNamesParams() { }

  absl::optional<std::string> security_origin_;
  absl::optional<std::string> storage_key_;
};


// Result for the RequestDatabaseNames command.
class RequestDatabaseNamesResult {
 public:
  static std::unique_ptr<RequestDatabaseNamesResult> Parse(const base::Value& value, ErrorReporter* errors);
  RequestDatabaseNamesResult(const RequestDatabaseNamesResult&) = delete;
  RequestDatabaseNamesResult& operator=(const RequestDatabaseNamesResult&) = delete;
  ~RequestDatabaseNamesResult() { }

  // Database names for origin.
  const std::vector<std::string>* GetDatabaseNames() const { return &database_names_; }
  void SetDatabaseNames(std::vector<std::string> value) { database_names_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RequestDatabaseNamesResult> Clone() const;

  template<int STATE>
  class RequestDatabaseNamesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDatabaseNamesSet = 1 << 1,
      kAllRequiredFieldsSet = (kDatabaseNamesSet | 0)
    };

    RequestDatabaseNamesResultBuilder<STATE | kDatabaseNamesSet>& SetDatabaseNames(std::vector<std::string> value) {
      static_assert(!(STATE & kDatabaseNamesSet), "property databaseNames should not have already been set");
      result_->SetDatabaseNames(std::move(value));
      return CastState<kDatabaseNamesSet>();
    }

    std::unique_ptr<RequestDatabaseNamesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RequestDatabaseNamesResult;
    RequestDatabaseNamesResultBuilder() : result_(new RequestDatabaseNamesResult()) { }

    template<int STEP> RequestDatabaseNamesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RequestDatabaseNamesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RequestDatabaseNamesResult> result_;
  };

  static RequestDatabaseNamesResultBuilder<0> Builder() {
    return RequestDatabaseNamesResultBuilder<0>();
  }

 private:
  RequestDatabaseNamesResult() { }

  std::vector<std::string> database_names_;
};


}  // namespace indexeddb

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_INDEXEDDB_H_
