// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_HEAP_PROFILER_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_HEAP_PROFILER_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_heap_profiler.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_runtime.h"

namespace autofill_assistant {

class ErrorReporter;

namespace heap_profiler {

// Sampling Heap Profile node. Holds callsite information, allocation statistics and child nodes.
class SamplingHeapProfileNode {
 public:
  static std::unique_ptr<SamplingHeapProfileNode> Parse(const base::Value& value, ErrorReporter* errors);
  SamplingHeapProfileNode(const SamplingHeapProfileNode&) = delete;
  SamplingHeapProfileNode& operator=(const SamplingHeapProfileNode&) = delete;
  ~SamplingHeapProfileNode() { }

  // Function location.
  const ::autofill_assistant::runtime::CallFrame* GetCallFrame() const { return call_frame_.get(); }
  void SetCallFrame(std::unique_ptr<::autofill_assistant::runtime::CallFrame> value) { call_frame_ = std::move(value); }

  // Allocations size in bytes for the node excluding children.
  double GetSelfSize() const { return self_size_; }
  void SetSelfSize(double value) { self_size_ = value; }

  // Node id. Ids are unique across all profiles collected between startSampling and stopSampling.
  int GetId() const { return id_; }
  void SetId(int value) { id_ = value; }

  // Child nodes.
  const std::vector<std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfileNode>>* GetChildren() const { return &children_; }
  void SetChildren(std::vector<std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfileNode>> value) { children_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SamplingHeapProfileNode> Clone() const;

  template<int STATE>
  class SamplingHeapProfileNodeBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCallFrameSet = 1 << 1,
    kSelfSizeSet = 1 << 2,
    kIdSet = 1 << 3,
    kChildrenSet = 1 << 4,
      kAllRequiredFieldsSet = (kCallFrameSet | kSelfSizeSet | kIdSet | kChildrenSet | 0)
    };

    SamplingHeapProfileNodeBuilder<STATE | kCallFrameSet>& SetCallFrame(std::unique_ptr<::autofill_assistant::runtime::CallFrame> value) {
      static_assert(!(STATE & kCallFrameSet), "property callFrame should not have already been set");
      result_->SetCallFrame(std::move(value));
      return CastState<kCallFrameSet>();
    }

    SamplingHeapProfileNodeBuilder<STATE | kSelfSizeSet>& SetSelfSize(double value) {
      static_assert(!(STATE & kSelfSizeSet), "property selfSize should not have already been set");
      result_->SetSelfSize(value);
      return CastState<kSelfSizeSet>();
    }

    SamplingHeapProfileNodeBuilder<STATE | kIdSet>& SetId(int value) {
      static_assert(!(STATE & kIdSet), "property id should not have already been set");
      result_->SetId(value);
      return CastState<kIdSet>();
    }

    SamplingHeapProfileNodeBuilder<STATE | kChildrenSet>& SetChildren(std::vector<std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfileNode>> value) {
      static_assert(!(STATE & kChildrenSet), "property children should not have already been set");
      result_->SetChildren(std::move(value));
      return CastState<kChildrenSet>();
    }

    std::unique_ptr<SamplingHeapProfileNode> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SamplingHeapProfileNode;
    SamplingHeapProfileNodeBuilder() : result_(new SamplingHeapProfileNode()) { }

    template<int STEP> SamplingHeapProfileNodeBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SamplingHeapProfileNodeBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SamplingHeapProfileNode> result_;
  };

  static SamplingHeapProfileNodeBuilder<0> Builder() {
    return SamplingHeapProfileNodeBuilder<0>();
  }

 private:
  SamplingHeapProfileNode() { }

  std::unique_ptr<::autofill_assistant::runtime::CallFrame> call_frame_;
  double self_size_;
  int id_;
  std::vector<std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfileNode>> children_;
};


// A single sample from a sampling profile.
class SamplingHeapProfileSample {
 public:
  static std::unique_ptr<SamplingHeapProfileSample> Parse(const base::Value& value, ErrorReporter* errors);
  SamplingHeapProfileSample(const SamplingHeapProfileSample&) = delete;
  SamplingHeapProfileSample& operator=(const SamplingHeapProfileSample&) = delete;
  ~SamplingHeapProfileSample() { }

  // Allocation size in bytes attributed to the sample.
  double GetSize() const { return size_; }
  void SetSize(double value) { size_ = value; }

  // Id of the corresponding profile tree node.
  int GetNodeId() const { return node_id_; }
  void SetNodeId(int value) { node_id_ = value; }

  // Time-ordered sample ordinal number. It is unique across all profiles retrieved
  // between startSampling and stopSampling.
  double GetOrdinal() const { return ordinal_; }
  void SetOrdinal(double value) { ordinal_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SamplingHeapProfileSample> Clone() const;

  template<int STATE>
  class SamplingHeapProfileSampleBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSizeSet = 1 << 1,
    kNodeIdSet = 1 << 2,
    kOrdinalSet = 1 << 3,
      kAllRequiredFieldsSet = (kSizeSet | kNodeIdSet | kOrdinalSet | 0)
    };

    SamplingHeapProfileSampleBuilder<STATE | kSizeSet>& SetSize(double value) {
      static_assert(!(STATE & kSizeSet), "property size should not have already been set");
      result_->SetSize(value);
      return CastState<kSizeSet>();
    }

    SamplingHeapProfileSampleBuilder<STATE | kNodeIdSet>& SetNodeId(int value) {
      static_assert(!(STATE & kNodeIdSet), "property nodeId should not have already been set");
      result_->SetNodeId(value);
      return CastState<kNodeIdSet>();
    }

    SamplingHeapProfileSampleBuilder<STATE | kOrdinalSet>& SetOrdinal(double value) {
      static_assert(!(STATE & kOrdinalSet), "property ordinal should not have already been set");
      result_->SetOrdinal(value);
      return CastState<kOrdinalSet>();
    }

    std::unique_ptr<SamplingHeapProfileSample> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SamplingHeapProfileSample;
    SamplingHeapProfileSampleBuilder() : result_(new SamplingHeapProfileSample()) { }

    template<int STEP> SamplingHeapProfileSampleBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SamplingHeapProfileSampleBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SamplingHeapProfileSample> result_;
  };

  static SamplingHeapProfileSampleBuilder<0> Builder() {
    return SamplingHeapProfileSampleBuilder<0>();
  }

 private:
  SamplingHeapProfileSample() { }

  double size_;
  int node_id_;
  double ordinal_;
};


// Sampling profile.
class SamplingHeapProfile {
 public:
  static std::unique_ptr<SamplingHeapProfile> Parse(const base::Value& value, ErrorReporter* errors);
  SamplingHeapProfile(const SamplingHeapProfile&) = delete;
  SamplingHeapProfile& operator=(const SamplingHeapProfile&) = delete;
  ~SamplingHeapProfile() { }

  const ::autofill_assistant::heap_profiler::SamplingHeapProfileNode* GetHead() const { return head_.get(); }
  void SetHead(std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfileNode> value) { head_ = std::move(value); }

  const std::vector<std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfileSample>>* GetSamples() const { return &samples_; }
  void SetSamples(std::vector<std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfileSample>> value) { samples_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SamplingHeapProfile> Clone() const;

  template<int STATE>
  class SamplingHeapProfileBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kHeadSet = 1 << 1,
    kSamplesSet = 1 << 2,
      kAllRequiredFieldsSet = (kHeadSet | kSamplesSet | 0)
    };

    SamplingHeapProfileBuilder<STATE | kHeadSet>& SetHead(std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfileNode> value) {
      static_assert(!(STATE & kHeadSet), "property head should not have already been set");
      result_->SetHead(std::move(value));
      return CastState<kHeadSet>();
    }

    SamplingHeapProfileBuilder<STATE | kSamplesSet>& SetSamples(std::vector<std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfileSample>> value) {
      static_assert(!(STATE & kSamplesSet), "property samples should not have already been set");
      result_->SetSamples(std::move(value));
      return CastState<kSamplesSet>();
    }

    std::unique_ptr<SamplingHeapProfile> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SamplingHeapProfile;
    SamplingHeapProfileBuilder() : result_(new SamplingHeapProfile()) { }

    template<int STEP> SamplingHeapProfileBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SamplingHeapProfileBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SamplingHeapProfile> result_;
  };

  static SamplingHeapProfileBuilder<0> Builder() {
    return SamplingHeapProfileBuilder<0>();
  }

 private:
  SamplingHeapProfile() { }

  std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfileNode> head_;
  std::vector<std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfileSample>> samples_;
};


// Parameters for the AddInspectedHeapObject command.
class AddInspectedHeapObjectParams {
 public:
  static std::unique_ptr<AddInspectedHeapObjectParams> Parse(const base::Value& value, ErrorReporter* errors);
  AddInspectedHeapObjectParams(const AddInspectedHeapObjectParams&) = delete;
  AddInspectedHeapObjectParams& operator=(const AddInspectedHeapObjectParams&) = delete;
  ~AddInspectedHeapObjectParams() { }

  // Heap snapshot object id to be accessible by means of $x command line API.
  std::string GetHeapObjectId() const { return heap_object_id_; }
  void SetHeapObjectId(const std::string& value) { heap_object_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<AddInspectedHeapObjectParams> Clone() const;

  template<int STATE>
  class AddInspectedHeapObjectParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kHeapObjectIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kHeapObjectIdSet | 0)
    };

    AddInspectedHeapObjectParamsBuilder<STATE | kHeapObjectIdSet>& SetHeapObjectId(const std::string& value) {
      static_assert(!(STATE & kHeapObjectIdSet), "property heapObjectId should not have already been set");
      result_->SetHeapObjectId(value);
      return CastState<kHeapObjectIdSet>();
    }

    std::unique_ptr<AddInspectedHeapObjectParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class AddInspectedHeapObjectParams;
    AddInspectedHeapObjectParamsBuilder() : result_(new AddInspectedHeapObjectParams()) { }

    template<int STEP> AddInspectedHeapObjectParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<AddInspectedHeapObjectParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<AddInspectedHeapObjectParams> result_;
  };

  static AddInspectedHeapObjectParamsBuilder<0> Builder() {
    return AddInspectedHeapObjectParamsBuilder<0>();
  }

 private:
  AddInspectedHeapObjectParams() { }

  std::string heap_object_id_;
};


// Result for the AddInspectedHeapObject command.
class AddInspectedHeapObjectResult {
 public:
  static std::unique_ptr<AddInspectedHeapObjectResult> Parse(const base::Value& value, ErrorReporter* errors);
  AddInspectedHeapObjectResult(const AddInspectedHeapObjectResult&) = delete;
  AddInspectedHeapObjectResult& operator=(const AddInspectedHeapObjectResult&) = delete;
  ~AddInspectedHeapObjectResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<AddInspectedHeapObjectResult> Clone() const;

  template<int STATE>
  class AddInspectedHeapObjectResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<AddInspectedHeapObjectResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class AddInspectedHeapObjectResult;
    AddInspectedHeapObjectResultBuilder() : result_(new AddInspectedHeapObjectResult()) { }

    template<int STEP> AddInspectedHeapObjectResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<AddInspectedHeapObjectResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<AddInspectedHeapObjectResult> result_;
  };

  static AddInspectedHeapObjectResultBuilder<0> Builder() {
    return AddInspectedHeapObjectResultBuilder<0>();
  }

 private:
  AddInspectedHeapObjectResult() { }

};


// Parameters for the CollectGarbage command.
class CollectGarbageParams {
 public:
  static std::unique_ptr<CollectGarbageParams> Parse(const base::Value& value, ErrorReporter* errors);
  CollectGarbageParams(const CollectGarbageParams&) = delete;
  CollectGarbageParams& operator=(const CollectGarbageParams&) = delete;
  ~CollectGarbageParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CollectGarbageParams> Clone() const;

  template<int STATE>
  class CollectGarbageParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<CollectGarbageParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CollectGarbageParams;
    CollectGarbageParamsBuilder() : result_(new CollectGarbageParams()) { }

    template<int STEP> CollectGarbageParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CollectGarbageParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CollectGarbageParams> result_;
  };

  static CollectGarbageParamsBuilder<0> Builder() {
    return CollectGarbageParamsBuilder<0>();
  }

 private:
  CollectGarbageParams() { }

};


// Result for the CollectGarbage command.
class CollectGarbageResult {
 public:
  static std::unique_ptr<CollectGarbageResult> Parse(const base::Value& value, ErrorReporter* errors);
  CollectGarbageResult(const CollectGarbageResult&) = delete;
  CollectGarbageResult& operator=(const CollectGarbageResult&) = delete;
  ~CollectGarbageResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CollectGarbageResult> Clone() const;

  template<int STATE>
  class CollectGarbageResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<CollectGarbageResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CollectGarbageResult;
    CollectGarbageResultBuilder() : result_(new CollectGarbageResult()) { }

    template<int STEP> CollectGarbageResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CollectGarbageResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CollectGarbageResult> result_;
  };

  static CollectGarbageResultBuilder<0> Builder() {
    return CollectGarbageResultBuilder<0>();
  }

 private:
  CollectGarbageResult() { }

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


// Parameters for the GetHeapObjectId command.
class GetHeapObjectIdParams {
 public:
  static std::unique_ptr<GetHeapObjectIdParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetHeapObjectIdParams(const GetHeapObjectIdParams&) = delete;
  GetHeapObjectIdParams& operator=(const GetHeapObjectIdParams&) = delete;
  ~GetHeapObjectIdParams() { }

  // Identifier of the object to get heap object id for.
  std::string GetObjectId() const { return object_id_; }
  void SetObjectId(const std::string& value) { object_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetHeapObjectIdParams> Clone() const;

  template<int STATE>
  class GetHeapObjectIdParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kObjectIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kObjectIdSet | 0)
    };

    GetHeapObjectIdParamsBuilder<STATE | kObjectIdSet>& SetObjectId(const std::string& value) {
      static_assert(!(STATE & kObjectIdSet), "property objectId should not have already been set");
      result_->SetObjectId(value);
      return CastState<kObjectIdSet>();
    }

    std::unique_ptr<GetHeapObjectIdParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetHeapObjectIdParams;
    GetHeapObjectIdParamsBuilder() : result_(new GetHeapObjectIdParams()) { }

    template<int STEP> GetHeapObjectIdParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetHeapObjectIdParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetHeapObjectIdParams> result_;
  };

  static GetHeapObjectIdParamsBuilder<0> Builder() {
    return GetHeapObjectIdParamsBuilder<0>();
  }

 private:
  GetHeapObjectIdParams() { }

  std::string object_id_;
};


// Result for the GetHeapObjectId command.
class GetHeapObjectIdResult {
 public:
  static std::unique_ptr<GetHeapObjectIdResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetHeapObjectIdResult(const GetHeapObjectIdResult&) = delete;
  GetHeapObjectIdResult& operator=(const GetHeapObjectIdResult&) = delete;
  ~GetHeapObjectIdResult() { }

  // Id of the heap snapshot object corresponding to the passed remote object id.
  std::string GetHeapSnapshotObjectId() const { return heap_snapshot_object_id_; }
  void SetHeapSnapshotObjectId(const std::string& value) { heap_snapshot_object_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetHeapObjectIdResult> Clone() const;

  template<int STATE>
  class GetHeapObjectIdResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kHeapSnapshotObjectIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kHeapSnapshotObjectIdSet | 0)
    };

    GetHeapObjectIdResultBuilder<STATE | kHeapSnapshotObjectIdSet>& SetHeapSnapshotObjectId(const std::string& value) {
      static_assert(!(STATE & kHeapSnapshotObjectIdSet), "property heapSnapshotObjectId should not have already been set");
      result_->SetHeapSnapshotObjectId(value);
      return CastState<kHeapSnapshotObjectIdSet>();
    }

    std::unique_ptr<GetHeapObjectIdResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetHeapObjectIdResult;
    GetHeapObjectIdResultBuilder() : result_(new GetHeapObjectIdResult()) { }

    template<int STEP> GetHeapObjectIdResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetHeapObjectIdResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetHeapObjectIdResult> result_;
  };

  static GetHeapObjectIdResultBuilder<0> Builder() {
    return GetHeapObjectIdResultBuilder<0>();
  }

 private:
  GetHeapObjectIdResult() { }

  std::string heap_snapshot_object_id_;
};


// Parameters for the GetObjectByHeapObjectId command.
class GetObjectByHeapObjectIdParams {
 public:
  static std::unique_ptr<GetObjectByHeapObjectIdParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetObjectByHeapObjectIdParams(const GetObjectByHeapObjectIdParams&) = delete;
  GetObjectByHeapObjectIdParams& operator=(const GetObjectByHeapObjectIdParams&) = delete;
  ~GetObjectByHeapObjectIdParams() { }

  std::string GetObjectId() const { return object_id_; }
  void SetObjectId(const std::string& value) { object_id_ = value; }

  // Symbolic group name that can be used to release multiple objects.
  bool HasObjectGroup() const { return !!object_group_; }
  std::string GetObjectGroup() const { DCHECK(HasObjectGroup()); return object_group_.value(); }
  void SetObjectGroup(const std::string& value) { object_group_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetObjectByHeapObjectIdParams> Clone() const;

  template<int STATE>
  class GetObjectByHeapObjectIdParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kObjectIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kObjectIdSet | 0)
    };

    GetObjectByHeapObjectIdParamsBuilder<STATE | kObjectIdSet>& SetObjectId(const std::string& value) {
      static_assert(!(STATE & kObjectIdSet), "property objectId should not have already been set");
      result_->SetObjectId(value);
      return CastState<kObjectIdSet>();
    }

    GetObjectByHeapObjectIdParamsBuilder<STATE>& SetObjectGroup(const std::string& value) {
      result_->SetObjectGroup(value);
      return *this;
    }

    std::unique_ptr<GetObjectByHeapObjectIdParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetObjectByHeapObjectIdParams;
    GetObjectByHeapObjectIdParamsBuilder() : result_(new GetObjectByHeapObjectIdParams()) { }

    template<int STEP> GetObjectByHeapObjectIdParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetObjectByHeapObjectIdParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetObjectByHeapObjectIdParams> result_;
  };

  static GetObjectByHeapObjectIdParamsBuilder<0> Builder() {
    return GetObjectByHeapObjectIdParamsBuilder<0>();
  }

 private:
  GetObjectByHeapObjectIdParams() { }

  std::string object_id_;
  absl::optional<std::string> object_group_;
};


// Result for the GetObjectByHeapObjectId command.
class GetObjectByHeapObjectIdResult {
 public:
  static std::unique_ptr<GetObjectByHeapObjectIdResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetObjectByHeapObjectIdResult(const GetObjectByHeapObjectIdResult&) = delete;
  GetObjectByHeapObjectIdResult& operator=(const GetObjectByHeapObjectIdResult&) = delete;
  ~GetObjectByHeapObjectIdResult() { }

  // Evaluation result.
  const ::autofill_assistant::runtime::RemoteObject* GetResult() const { return result_.get(); }
  void SetResult(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) { result_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetObjectByHeapObjectIdResult> Clone() const;

  template<int STATE>
  class GetObjectByHeapObjectIdResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kResultSet = 1 << 1,
      kAllRequiredFieldsSet = (kResultSet | 0)
    };

    GetObjectByHeapObjectIdResultBuilder<STATE | kResultSet>& SetResult(std::unique_ptr<::autofill_assistant::runtime::RemoteObject> value) {
      static_assert(!(STATE & kResultSet), "property result should not have already been set");
      result_->SetResult(std::move(value));
      return CastState<kResultSet>();
    }

    std::unique_ptr<GetObjectByHeapObjectIdResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetObjectByHeapObjectIdResult;
    GetObjectByHeapObjectIdResultBuilder() : result_(new GetObjectByHeapObjectIdResult()) { }

    template<int STEP> GetObjectByHeapObjectIdResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetObjectByHeapObjectIdResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetObjectByHeapObjectIdResult> result_;
  };

  static GetObjectByHeapObjectIdResultBuilder<0> Builder() {
    return GetObjectByHeapObjectIdResultBuilder<0>();
  }

 private:
  GetObjectByHeapObjectIdResult() { }

  std::unique_ptr<::autofill_assistant::runtime::RemoteObject> result_;
};


// Parameters for the GetSamplingProfile command.
class GetSamplingProfileParams {
 public:
  static std::unique_ptr<GetSamplingProfileParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetSamplingProfileParams(const GetSamplingProfileParams&) = delete;
  GetSamplingProfileParams& operator=(const GetSamplingProfileParams&) = delete;
  ~GetSamplingProfileParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetSamplingProfileParams> Clone() const;

  template<int STATE>
  class GetSamplingProfileParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<GetSamplingProfileParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetSamplingProfileParams;
    GetSamplingProfileParamsBuilder() : result_(new GetSamplingProfileParams()) { }

    template<int STEP> GetSamplingProfileParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetSamplingProfileParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetSamplingProfileParams> result_;
  };

  static GetSamplingProfileParamsBuilder<0> Builder() {
    return GetSamplingProfileParamsBuilder<0>();
  }

 private:
  GetSamplingProfileParams() { }

};


// Result for the GetSamplingProfile command.
class GetSamplingProfileResult {
 public:
  static std::unique_ptr<GetSamplingProfileResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetSamplingProfileResult(const GetSamplingProfileResult&) = delete;
  GetSamplingProfileResult& operator=(const GetSamplingProfileResult&) = delete;
  ~GetSamplingProfileResult() { }

  // Return the sampling profile being collected.
  const ::autofill_assistant::heap_profiler::SamplingHeapProfile* GetProfile() const { return profile_.get(); }
  void SetProfile(std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfile> value) { profile_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetSamplingProfileResult> Clone() const;

  template<int STATE>
  class GetSamplingProfileResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kProfileSet = 1 << 1,
      kAllRequiredFieldsSet = (kProfileSet | 0)
    };

    GetSamplingProfileResultBuilder<STATE | kProfileSet>& SetProfile(std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfile> value) {
      static_assert(!(STATE & kProfileSet), "property profile should not have already been set");
      result_->SetProfile(std::move(value));
      return CastState<kProfileSet>();
    }

    std::unique_ptr<GetSamplingProfileResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetSamplingProfileResult;
    GetSamplingProfileResultBuilder() : result_(new GetSamplingProfileResult()) { }

    template<int STEP> GetSamplingProfileResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetSamplingProfileResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetSamplingProfileResult> result_;
  };

  static GetSamplingProfileResultBuilder<0> Builder() {
    return GetSamplingProfileResultBuilder<0>();
  }

 private:
  GetSamplingProfileResult() { }

  std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfile> profile_;
};


// Parameters for the StartSampling command.
class StartSamplingParams {
 public:
  static std::unique_ptr<StartSamplingParams> Parse(const base::Value& value, ErrorReporter* errors);
  StartSamplingParams(const StartSamplingParams&) = delete;
  StartSamplingParams& operator=(const StartSamplingParams&) = delete;
  ~StartSamplingParams() { }

  // Average sample interval in bytes. Poisson distribution is used for the intervals. The
  // default value is 32768 bytes.
  bool HasSamplingInterval() const { return !!sampling_interval_; }
  double GetSamplingInterval() const { DCHECK(HasSamplingInterval()); return sampling_interval_.value(); }
  void SetSamplingInterval(double value) { sampling_interval_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StartSamplingParams> Clone() const;

  template<int STATE>
  class StartSamplingParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    StartSamplingParamsBuilder<STATE>& SetSamplingInterval(double value) {
      result_->SetSamplingInterval(value);
      return *this;
    }

    std::unique_ptr<StartSamplingParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StartSamplingParams;
    StartSamplingParamsBuilder() : result_(new StartSamplingParams()) { }

    template<int STEP> StartSamplingParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StartSamplingParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StartSamplingParams> result_;
  };

  static StartSamplingParamsBuilder<0> Builder() {
    return StartSamplingParamsBuilder<0>();
  }

 private:
  StartSamplingParams() { }

  absl::optional<double> sampling_interval_;
};


// Result for the StartSampling command.
class StartSamplingResult {
 public:
  static std::unique_ptr<StartSamplingResult> Parse(const base::Value& value, ErrorReporter* errors);
  StartSamplingResult(const StartSamplingResult&) = delete;
  StartSamplingResult& operator=(const StartSamplingResult&) = delete;
  ~StartSamplingResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StartSamplingResult> Clone() const;

  template<int STATE>
  class StartSamplingResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StartSamplingResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StartSamplingResult;
    StartSamplingResultBuilder() : result_(new StartSamplingResult()) { }

    template<int STEP> StartSamplingResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StartSamplingResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StartSamplingResult> result_;
  };

  static StartSamplingResultBuilder<0> Builder() {
    return StartSamplingResultBuilder<0>();
  }

 private:
  StartSamplingResult() { }

};


// Parameters for the StartTrackingHeapObjects command.
class StartTrackingHeapObjectsParams {
 public:
  static std::unique_ptr<StartTrackingHeapObjectsParams> Parse(const base::Value& value, ErrorReporter* errors);
  StartTrackingHeapObjectsParams(const StartTrackingHeapObjectsParams&) = delete;
  StartTrackingHeapObjectsParams& operator=(const StartTrackingHeapObjectsParams&) = delete;
  ~StartTrackingHeapObjectsParams() { }

  bool HasTrackAllocations() const { return !!track_allocations_; }
  bool GetTrackAllocations() const { DCHECK(HasTrackAllocations()); return track_allocations_.value(); }
  void SetTrackAllocations(bool value) { track_allocations_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StartTrackingHeapObjectsParams> Clone() const;

  template<int STATE>
  class StartTrackingHeapObjectsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    StartTrackingHeapObjectsParamsBuilder<STATE>& SetTrackAllocations(bool value) {
      result_->SetTrackAllocations(value);
      return *this;
    }

    std::unique_ptr<StartTrackingHeapObjectsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StartTrackingHeapObjectsParams;
    StartTrackingHeapObjectsParamsBuilder() : result_(new StartTrackingHeapObjectsParams()) { }

    template<int STEP> StartTrackingHeapObjectsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StartTrackingHeapObjectsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StartTrackingHeapObjectsParams> result_;
  };

  static StartTrackingHeapObjectsParamsBuilder<0> Builder() {
    return StartTrackingHeapObjectsParamsBuilder<0>();
  }

 private:
  StartTrackingHeapObjectsParams() { }

  absl::optional<bool> track_allocations_;
};


// Result for the StartTrackingHeapObjects command.
class StartTrackingHeapObjectsResult {
 public:
  static std::unique_ptr<StartTrackingHeapObjectsResult> Parse(const base::Value& value, ErrorReporter* errors);
  StartTrackingHeapObjectsResult(const StartTrackingHeapObjectsResult&) = delete;
  StartTrackingHeapObjectsResult& operator=(const StartTrackingHeapObjectsResult&) = delete;
  ~StartTrackingHeapObjectsResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StartTrackingHeapObjectsResult> Clone() const;

  template<int STATE>
  class StartTrackingHeapObjectsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StartTrackingHeapObjectsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StartTrackingHeapObjectsResult;
    StartTrackingHeapObjectsResultBuilder() : result_(new StartTrackingHeapObjectsResult()) { }

    template<int STEP> StartTrackingHeapObjectsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StartTrackingHeapObjectsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StartTrackingHeapObjectsResult> result_;
  };

  static StartTrackingHeapObjectsResultBuilder<0> Builder() {
    return StartTrackingHeapObjectsResultBuilder<0>();
  }

 private:
  StartTrackingHeapObjectsResult() { }

};


// Parameters for the StopSampling command.
class StopSamplingParams {
 public:
  static std::unique_ptr<StopSamplingParams> Parse(const base::Value& value, ErrorReporter* errors);
  StopSamplingParams(const StopSamplingParams&) = delete;
  StopSamplingParams& operator=(const StopSamplingParams&) = delete;
  ~StopSamplingParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StopSamplingParams> Clone() const;

  template<int STATE>
  class StopSamplingParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StopSamplingParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StopSamplingParams;
    StopSamplingParamsBuilder() : result_(new StopSamplingParams()) { }

    template<int STEP> StopSamplingParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StopSamplingParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StopSamplingParams> result_;
  };

  static StopSamplingParamsBuilder<0> Builder() {
    return StopSamplingParamsBuilder<0>();
  }

 private:
  StopSamplingParams() { }

};


// Result for the StopSampling command.
class StopSamplingResult {
 public:
  static std::unique_ptr<StopSamplingResult> Parse(const base::Value& value, ErrorReporter* errors);
  StopSamplingResult(const StopSamplingResult&) = delete;
  StopSamplingResult& operator=(const StopSamplingResult&) = delete;
  ~StopSamplingResult() { }

  // Recorded sampling heap profile.
  const ::autofill_assistant::heap_profiler::SamplingHeapProfile* GetProfile() const { return profile_.get(); }
  void SetProfile(std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfile> value) { profile_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StopSamplingResult> Clone() const;

  template<int STATE>
  class StopSamplingResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kProfileSet = 1 << 1,
      kAllRequiredFieldsSet = (kProfileSet | 0)
    };

    StopSamplingResultBuilder<STATE | kProfileSet>& SetProfile(std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfile> value) {
      static_assert(!(STATE & kProfileSet), "property profile should not have already been set");
      result_->SetProfile(std::move(value));
      return CastState<kProfileSet>();
    }

    std::unique_ptr<StopSamplingResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StopSamplingResult;
    StopSamplingResultBuilder() : result_(new StopSamplingResult()) { }

    template<int STEP> StopSamplingResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StopSamplingResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StopSamplingResult> result_;
  };

  static StopSamplingResultBuilder<0> Builder() {
    return StopSamplingResultBuilder<0>();
  }

 private:
  StopSamplingResult() { }

  std::unique_ptr<::autofill_assistant::heap_profiler::SamplingHeapProfile> profile_;
};


// Parameters for the StopTrackingHeapObjects command.
class StopTrackingHeapObjectsParams {
 public:
  static std::unique_ptr<StopTrackingHeapObjectsParams> Parse(const base::Value& value, ErrorReporter* errors);
  StopTrackingHeapObjectsParams(const StopTrackingHeapObjectsParams&) = delete;
  StopTrackingHeapObjectsParams& operator=(const StopTrackingHeapObjectsParams&) = delete;
  ~StopTrackingHeapObjectsParams() { }

  // If true 'reportHeapSnapshotProgress' events will be generated while snapshot is being taken
  // when the tracking is stopped.
  bool HasReportProgress() const { return !!report_progress_; }
  bool GetReportProgress() const { DCHECK(HasReportProgress()); return report_progress_.value(); }
  void SetReportProgress(bool value) { report_progress_ = value; }

  // Deprecated in favor of `exposeInternals`.
  bool HasTreatGlobalObjectsAsRoots() const { return !!treat_global_objects_as_roots_; }
  bool GetTreatGlobalObjectsAsRoots() const { DCHECK(HasTreatGlobalObjectsAsRoots()); return treat_global_objects_as_roots_.value(); }
  void SetTreatGlobalObjectsAsRoots(bool value) { treat_global_objects_as_roots_ = value; }

  // If true, numerical values are included in the snapshot
  bool HasCaptureNumericValue() const { return !!capture_numeric_value_; }
  bool GetCaptureNumericValue() const { DCHECK(HasCaptureNumericValue()); return capture_numeric_value_.value(); }
  void SetCaptureNumericValue(bool value) { capture_numeric_value_ = value; }

  // If true, exposes internals of the snapshot.
  bool HasExposeInternals() const { return !!expose_internals_; }
  bool GetExposeInternals() const { DCHECK(HasExposeInternals()); return expose_internals_.value(); }
  void SetExposeInternals(bool value) { expose_internals_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StopTrackingHeapObjectsParams> Clone() const;

  template<int STATE>
  class StopTrackingHeapObjectsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    StopTrackingHeapObjectsParamsBuilder<STATE>& SetReportProgress(bool value) {
      result_->SetReportProgress(value);
      return *this;
    }

    StopTrackingHeapObjectsParamsBuilder<STATE>& SetTreatGlobalObjectsAsRoots(bool value) {
      result_->SetTreatGlobalObjectsAsRoots(value);
      return *this;
    }

    StopTrackingHeapObjectsParamsBuilder<STATE>& SetCaptureNumericValue(bool value) {
      result_->SetCaptureNumericValue(value);
      return *this;
    }

    StopTrackingHeapObjectsParamsBuilder<STATE>& SetExposeInternals(bool value) {
      result_->SetExposeInternals(value);
      return *this;
    }

    std::unique_ptr<StopTrackingHeapObjectsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StopTrackingHeapObjectsParams;
    StopTrackingHeapObjectsParamsBuilder() : result_(new StopTrackingHeapObjectsParams()) { }

    template<int STEP> StopTrackingHeapObjectsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StopTrackingHeapObjectsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StopTrackingHeapObjectsParams> result_;
  };

  static StopTrackingHeapObjectsParamsBuilder<0> Builder() {
    return StopTrackingHeapObjectsParamsBuilder<0>();
  }

 private:
  StopTrackingHeapObjectsParams() { }

  absl::optional<bool> report_progress_;
  absl::optional<bool> treat_global_objects_as_roots_;
  absl::optional<bool> capture_numeric_value_;
  absl::optional<bool> expose_internals_;
};


// Result for the StopTrackingHeapObjects command.
class StopTrackingHeapObjectsResult {
 public:
  static std::unique_ptr<StopTrackingHeapObjectsResult> Parse(const base::Value& value, ErrorReporter* errors);
  StopTrackingHeapObjectsResult(const StopTrackingHeapObjectsResult&) = delete;
  StopTrackingHeapObjectsResult& operator=(const StopTrackingHeapObjectsResult&) = delete;
  ~StopTrackingHeapObjectsResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StopTrackingHeapObjectsResult> Clone() const;

  template<int STATE>
  class StopTrackingHeapObjectsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StopTrackingHeapObjectsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StopTrackingHeapObjectsResult;
    StopTrackingHeapObjectsResultBuilder() : result_(new StopTrackingHeapObjectsResult()) { }

    template<int STEP> StopTrackingHeapObjectsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StopTrackingHeapObjectsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StopTrackingHeapObjectsResult> result_;
  };

  static StopTrackingHeapObjectsResultBuilder<0> Builder() {
    return StopTrackingHeapObjectsResultBuilder<0>();
  }

 private:
  StopTrackingHeapObjectsResult() { }

};


// Parameters for the TakeHeapSnapshot command.
class TakeHeapSnapshotParams {
 public:
  static std::unique_ptr<TakeHeapSnapshotParams> Parse(const base::Value& value, ErrorReporter* errors);
  TakeHeapSnapshotParams(const TakeHeapSnapshotParams&) = delete;
  TakeHeapSnapshotParams& operator=(const TakeHeapSnapshotParams&) = delete;
  ~TakeHeapSnapshotParams() { }

  // If true 'reportHeapSnapshotProgress' events will be generated while snapshot is being taken.
  bool HasReportProgress() const { return !!report_progress_; }
  bool GetReportProgress() const { DCHECK(HasReportProgress()); return report_progress_.value(); }
  void SetReportProgress(bool value) { report_progress_ = value; }

  // If true, a raw snapshot without artificial roots will be generated.
  // Deprecated in favor of `exposeInternals`.
  bool HasTreatGlobalObjectsAsRoots() const { return !!treat_global_objects_as_roots_; }
  bool GetTreatGlobalObjectsAsRoots() const { DCHECK(HasTreatGlobalObjectsAsRoots()); return treat_global_objects_as_roots_.value(); }
  void SetTreatGlobalObjectsAsRoots(bool value) { treat_global_objects_as_roots_ = value; }

  // If true, numerical values are included in the snapshot
  bool HasCaptureNumericValue() const { return !!capture_numeric_value_; }
  bool GetCaptureNumericValue() const { DCHECK(HasCaptureNumericValue()); return capture_numeric_value_.value(); }
  void SetCaptureNumericValue(bool value) { capture_numeric_value_ = value; }

  // If true, exposes internals of the snapshot.
  bool HasExposeInternals() const { return !!expose_internals_; }
  bool GetExposeInternals() const { DCHECK(HasExposeInternals()); return expose_internals_.value(); }
  void SetExposeInternals(bool value) { expose_internals_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TakeHeapSnapshotParams> Clone() const;

  template<int STATE>
  class TakeHeapSnapshotParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    TakeHeapSnapshotParamsBuilder<STATE>& SetReportProgress(bool value) {
      result_->SetReportProgress(value);
      return *this;
    }

    TakeHeapSnapshotParamsBuilder<STATE>& SetTreatGlobalObjectsAsRoots(bool value) {
      result_->SetTreatGlobalObjectsAsRoots(value);
      return *this;
    }

    TakeHeapSnapshotParamsBuilder<STATE>& SetCaptureNumericValue(bool value) {
      result_->SetCaptureNumericValue(value);
      return *this;
    }

    TakeHeapSnapshotParamsBuilder<STATE>& SetExposeInternals(bool value) {
      result_->SetExposeInternals(value);
      return *this;
    }

    std::unique_ptr<TakeHeapSnapshotParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TakeHeapSnapshotParams;
    TakeHeapSnapshotParamsBuilder() : result_(new TakeHeapSnapshotParams()) { }

    template<int STEP> TakeHeapSnapshotParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TakeHeapSnapshotParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TakeHeapSnapshotParams> result_;
  };

  static TakeHeapSnapshotParamsBuilder<0> Builder() {
    return TakeHeapSnapshotParamsBuilder<0>();
  }

 private:
  TakeHeapSnapshotParams() { }

  absl::optional<bool> report_progress_;
  absl::optional<bool> treat_global_objects_as_roots_;
  absl::optional<bool> capture_numeric_value_;
  absl::optional<bool> expose_internals_;
};


// Result for the TakeHeapSnapshot command.
class TakeHeapSnapshotResult {
 public:
  static std::unique_ptr<TakeHeapSnapshotResult> Parse(const base::Value& value, ErrorReporter* errors);
  TakeHeapSnapshotResult(const TakeHeapSnapshotResult&) = delete;
  TakeHeapSnapshotResult& operator=(const TakeHeapSnapshotResult&) = delete;
  ~TakeHeapSnapshotResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TakeHeapSnapshotResult> Clone() const;

  template<int STATE>
  class TakeHeapSnapshotResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<TakeHeapSnapshotResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TakeHeapSnapshotResult;
    TakeHeapSnapshotResultBuilder() : result_(new TakeHeapSnapshotResult()) { }

    template<int STEP> TakeHeapSnapshotResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TakeHeapSnapshotResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TakeHeapSnapshotResult> result_;
  };

  static TakeHeapSnapshotResultBuilder<0> Builder() {
    return TakeHeapSnapshotResultBuilder<0>();
  }

 private:
  TakeHeapSnapshotResult() { }

};


// Parameters for the AddHeapSnapshotChunk event.
class AddHeapSnapshotChunkParams {
 public:
  static std::unique_ptr<AddHeapSnapshotChunkParams> Parse(const base::Value& value, ErrorReporter* errors);
  AddHeapSnapshotChunkParams(const AddHeapSnapshotChunkParams&) = delete;
  AddHeapSnapshotChunkParams& operator=(const AddHeapSnapshotChunkParams&) = delete;
  ~AddHeapSnapshotChunkParams() { }

  std::string GetChunk() const { return chunk_; }
  void SetChunk(const std::string& value) { chunk_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<AddHeapSnapshotChunkParams> Clone() const;

  template<int STATE>
  class AddHeapSnapshotChunkParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kChunkSet = 1 << 1,
      kAllRequiredFieldsSet = (kChunkSet | 0)
    };

    AddHeapSnapshotChunkParamsBuilder<STATE | kChunkSet>& SetChunk(const std::string& value) {
      static_assert(!(STATE & kChunkSet), "property chunk should not have already been set");
      result_->SetChunk(value);
      return CastState<kChunkSet>();
    }

    std::unique_ptr<AddHeapSnapshotChunkParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class AddHeapSnapshotChunkParams;
    AddHeapSnapshotChunkParamsBuilder() : result_(new AddHeapSnapshotChunkParams()) { }

    template<int STEP> AddHeapSnapshotChunkParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<AddHeapSnapshotChunkParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<AddHeapSnapshotChunkParams> result_;
  };

  static AddHeapSnapshotChunkParamsBuilder<0> Builder() {
    return AddHeapSnapshotChunkParamsBuilder<0>();
  }

 private:
  AddHeapSnapshotChunkParams() { }

  std::string chunk_;
};


// Parameters for the HeapStatsUpdate event.
class HeapStatsUpdateParams {
 public:
  static std::unique_ptr<HeapStatsUpdateParams> Parse(const base::Value& value, ErrorReporter* errors);
  HeapStatsUpdateParams(const HeapStatsUpdateParams&) = delete;
  HeapStatsUpdateParams& operator=(const HeapStatsUpdateParams&) = delete;
  ~HeapStatsUpdateParams() { }

  // An array of triplets. Each triplet describes a fragment. The first integer is the fragment
  // index, the second integer is a total count of objects for the fragment, the third integer is
  // a total size of the objects for the fragment.
  const std::vector<int>* GetStatsUpdate() const { return &stats_update_; }
  void SetStatsUpdate(std::vector<int> value) { stats_update_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HeapStatsUpdateParams> Clone() const;

  template<int STATE>
  class HeapStatsUpdateParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStatsUpdateSet = 1 << 1,
      kAllRequiredFieldsSet = (kStatsUpdateSet | 0)
    };

    HeapStatsUpdateParamsBuilder<STATE | kStatsUpdateSet>& SetStatsUpdate(std::vector<int> value) {
      static_assert(!(STATE & kStatsUpdateSet), "property statsUpdate should not have already been set");
      result_->SetStatsUpdate(std::move(value));
      return CastState<kStatsUpdateSet>();
    }

    std::unique_ptr<HeapStatsUpdateParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HeapStatsUpdateParams;
    HeapStatsUpdateParamsBuilder() : result_(new HeapStatsUpdateParams()) { }

    template<int STEP> HeapStatsUpdateParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HeapStatsUpdateParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HeapStatsUpdateParams> result_;
  };

  static HeapStatsUpdateParamsBuilder<0> Builder() {
    return HeapStatsUpdateParamsBuilder<0>();
  }

 private:
  HeapStatsUpdateParams() { }

  std::vector<int> stats_update_;
};


// Parameters for the LastSeenObjectId event.
class LastSeenObjectIdParams {
 public:
  static std::unique_ptr<LastSeenObjectIdParams> Parse(const base::Value& value, ErrorReporter* errors);
  LastSeenObjectIdParams(const LastSeenObjectIdParams&) = delete;
  LastSeenObjectIdParams& operator=(const LastSeenObjectIdParams&) = delete;
  ~LastSeenObjectIdParams() { }

  int GetLastSeenObjectId() const { return last_seen_object_id_; }
  void SetLastSeenObjectId(int value) { last_seen_object_id_ = value; }

  double GetTimestamp() const { return timestamp_; }
  void SetTimestamp(double value) { timestamp_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<LastSeenObjectIdParams> Clone() const;

  template<int STATE>
  class LastSeenObjectIdParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kLastSeenObjectIdSet = 1 << 1,
    kTimestampSet = 1 << 2,
      kAllRequiredFieldsSet = (kLastSeenObjectIdSet | kTimestampSet | 0)
    };

    LastSeenObjectIdParamsBuilder<STATE | kLastSeenObjectIdSet>& SetLastSeenObjectId(int value) {
      static_assert(!(STATE & kLastSeenObjectIdSet), "property lastSeenObjectId should not have already been set");
      result_->SetLastSeenObjectId(value);
      return CastState<kLastSeenObjectIdSet>();
    }

    LastSeenObjectIdParamsBuilder<STATE | kTimestampSet>& SetTimestamp(double value) {
      static_assert(!(STATE & kTimestampSet), "property timestamp should not have already been set");
      result_->SetTimestamp(value);
      return CastState<kTimestampSet>();
    }

    std::unique_ptr<LastSeenObjectIdParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class LastSeenObjectIdParams;
    LastSeenObjectIdParamsBuilder() : result_(new LastSeenObjectIdParams()) { }

    template<int STEP> LastSeenObjectIdParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<LastSeenObjectIdParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<LastSeenObjectIdParams> result_;
  };

  static LastSeenObjectIdParamsBuilder<0> Builder() {
    return LastSeenObjectIdParamsBuilder<0>();
  }

 private:
  LastSeenObjectIdParams() { }

  int last_seen_object_id_;
  double timestamp_;
};


// Parameters for the ReportHeapSnapshotProgress event.
class ReportHeapSnapshotProgressParams {
 public:
  static std::unique_ptr<ReportHeapSnapshotProgressParams> Parse(const base::Value& value, ErrorReporter* errors);
  ReportHeapSnapshotProgressParams(const ReportHeapSnapshotProgressParams&) = delete;
  ReportHeapSnapshotProgressParams& operator=(const ReportHeapSnapshotProgressParams&) = delete;
  ~ReportHeapSnapshotProgressParams() { }

  int GetDone() const { return done_; }
  void SetDone(int value) { done_ = value; }

  int GetTotal() const { return total_; }
  void SetTotal(int value) { total_ = value; }

  bool HasFinished() const { return !!finished_; }
  bool GetFinished() const { DCHECK(HasFinished()); return finished_.value(); }
  void SetFinished(bool value) { finished_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ReportHeapSnapshotProgressParams> Clone() const;

  template<int STATE>
  class ReportHeapSnapshotProgressParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kDoneSet = 1 << 1,
    kTotalSet = 1 << 2,
      kAllRequiredFieldsSet = (kDoneSet | kTotalSet | 0)
    };

    ReportHeapSnapshotProgressParamsBuilder<STATE | kDoneSet>& SetDone(int value) {
      static_assert(!(STATE & kDoneSet), "property done should not have already been set");
      result_->SetDone(value);
      return CastState<kDoneSet>();
    }

    ReportHeapSnapshotProgressParamsBuilder<STATE | kTotalSet>& SetTotal(int value) {
      static_assert(!(STATE & kTotalSet), "property total should not have already been set");
      result_->SetTotal(value);
      return CastState<kTotalSet>();
    }

    ReportHeapSnapshotProgressParamsBuilder<STATE>& SetFinished(bool value) {
      result_->SetFinished(value);
      return *this;
    }

    std::unique_ptr<ReportHeapSnapshotProgressParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ReportHeapSnapshotProgressParams;
    ReportHeapSnapshotProgressParamsBuilder() : result_(new ReportHeapSnapshotProgressParams()) { }

    template<int STEP> ReportHeapSnapshotProgressParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ReportHeapSnapshotProgressParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ReportHeapSnapshotProgressParams> result_;
  };

  static ReportHeapSnapshotProgressParamsBuilder<0> Builder() {
    return ReportHeapSnapshotProgressParamsBuilder<0>();
  }

 private:
  ReportHeapSnapshotProgressParams() { }

  int done_;
  int total_;
  absl::optional<bool> finished_;
};


// Parameters for the ResetProfiles event.
class ResetProfilesParams {
 public:
  static std::unique_ptr<ResetProfilesParams> Parse(const base::Value& value, ErrorReporter* errors);
  ResetProfilesParams(const ResetProfilesParams&) = delete;
  ResetProfilesParams& operator=(const ResetProfilesParams&) = delete;
  ~ResetProfilesParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ResetProfilesParams> Clone() const;

  template<int STATE>
  class ResetProfilesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ResetProfilesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ResetProfilesParams;
    ResetProfilesParamsBuilder() : result_(new ResetProfilesParams()) { }

    template<int STEP> ResetProfilesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ResetProfilesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ResetProfilesParams> result_;
  };

  static ResetProfilesParamsBuilder<0> Builder() {
    return ResetProfilesParamsBuilder<0>();
  }

 private:
  ResetProfilesParams() { }

};


}  // namespace heap_profiler

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_HEAP_PROFILER_H_
