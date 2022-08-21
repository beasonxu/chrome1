// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ukm/entry.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ukm_2fentry_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ukm_2fentry_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ukm_2fentry_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ukm_2fentry_2eproto {
  static const uint32_t offsets[];
};
namespace ukm {
class Entry;
struct EntryDefaultTypeInternal;
extern EntryDefaultTypeInternal _Entry_default_instance_;
class Entry_Metric;
struct Entry_MetricDefaultTypeInternal;
extern Entry_MetricDefaultTypeInternal _Entry_Metric_default_instance_;
}  // namespace ukm
PROTOBUF_NAMESPACE_OPEN
template<> ::ukm::Entry* Arena::CreateMaybeMessage<::ukm::Entry>(Arena*);
template<> ::ukm::Entry_Metric* Arena::CreateMaybeMessage<::ukm::Entry_Metric>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace ukm {

// ===================================================================

class Entry_Metric final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:ukm.Entry.Metric) */ {
 public:
  inline Entry_Metric() : Entry_Metric(nullptr) {}
  ~Entry_Metric() override;
  explicit PROTOBUF_CONSTEXPR Entry_Metric(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Entry_Metric(const Entry_Metric& from);
  Entry_Metric(Entry_Metric&& from) noexcept
    : Entry_Metric() {
    *this = ::std::move(from);
  }

  inline Entry_Metric& operator=(const Entry_Metric& from) {
    CopyFrom(from);
    return *this;
  }
  inline Entry_Metric& operator=(Entry_Metric&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const Entry_Metric& default_instance() {
    return *internal_default_instance();
  }
  static inline const Entry_Metric* internal_default_instance() {
    return reinterpret_cast<const Entry_Metric*>(
               &_Entry_Metric_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Entry_Metric& a, Entry_Metric& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(Entry_Metric* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Entry_Metric* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Entry_Metric* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Entry_Metric>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const Entry_Metric& from);
  void MergeFrom(const Entry_Metric& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Entry_Metric* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ukm.Entry.Metric";
  }
  protected:
  explicit Entry_Metric(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMetricHashFieldNumber = 1,
    kValueFieldNumber = 2,
  };
  // optional fixed64 metric_hash = 1;
  bool has_metric_hash() const;
  private:
  bool _internal_has_metric_hash() const;
  public:
  void clear_metric_hash();
  uint64_t metric_hash() const;
  void set_metric_hash(uint64_t value);
  private:
  uint64_t _internal_metric_hash() const;
  void _internal_set_metric_hash(uint64_t value);
  public:

  // optional int64 value = 2;
  bool has_value() const;
  private:
  bool _internal_has_value() const;
  public:
  void clear_value();
  int64_t value() const;
  void set_value(int64_t value);
  private:
  int64_t _internal_value() const;
  void _internal_set_value(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:ukm.Entry.Metric)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint64_t metric_hash_;
  int64_t value_;
  friend struct ::TableStruct_ukm_2fentry_2eproto;
};
// -------------------------------------------------------------------

class Entry final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:ukm.Entry) */ {
 public:
  inline Entry() : Entry(nullptr) {}
  ~Entry() override;
  explicit PROTOBUF_CONSTEXPR Entry(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Entry(const Entry& from);
  Entry(Entry&& from) noexcept
    : Entry() {
    *this = ::std::move(from);
  }

  inline Entry& operator=(const Entry& from) {
    CopyFrom(from);
    return *this;
  }
  inline Entry& operator=(Entry&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString);
  }
  inline std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<std::string>();
  }

  static const Entry& default_instance() {
    return *internal_default_instance();
  }
  static inline const Entry* internal_default_instance() {
    return reinterpret_cast<const Entry*>(
               &_Entry_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Entry& a, Entry& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(Entry* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(Entry* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Entry* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Entry>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const Entry& from);
  void MergeFrom(const Entry& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(Entry* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "ukm.Entry";
  }
  protected:
  explicit Entry(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef Entry_Metric Metric;

  // accessors -------------------------------------------------------

  enum : int {
    kMetricsFieldNumber = 5,
    kIdFieldNumber = 1,
    kParentIdFieldNumber = 2,
    kSourceIdFieldNumber = 3,
    kEventHashFieldNumber = 4,
  };
  // repeated .ukm.Entry.Metric metrics = 5;
  int metrics_size() const;
  private:
  int _internal_metrics_size() const;
  public:
  void clear_metrics();
  ::ukm::Entry_Metric* mutable_metrics(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ukm::Entry_Metric >*
      mutable_metrics();
  private:
  const ::ukm::Entry_Metric& _internal_metrics(int index) const;
  ::ukm::Entry_Metric* _internal_add_metrics();
  public:
  const ::ukm::Entry_Metric& metrics(int index) const;
  ::ukm::Entry_Metric* add_metrics();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ukm::Entry_Metric >&
      metrics() const;

  // optional int32 id = 1;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  int32_t id() const;
  void set_id(int32_t value);
  private:
  int32_t _internal_id() const;
  void _internal_set_id(int32_t value);
  public:

  // optional int32 parent_id = 2;
  bool has_parent_id() const;
  private:
  bool _internal_has_parent_id() const;
  public:
  void clear_parent_id();
  int32_t parent_id() const;
  void set_parent_id(int32_t value);
  private:
  int32_t _internal_parent_id() const;
  void _internal_set_parent_id(int32_t value);
  public:

  // optional int64 source_id = 3;
  bool has_source_id() const;
  private:
  bool _internal_has_source_id() const;
  public:
  void clear_source_id();
  int64_t source_id() const;
  void set_source_id(int64_t value);
  private:
  int64_t _internal_source_id() const;
  void _internal_set_source_id(int64_t value);
  public:

  // optional fixed64 event_hash = 4;
  bool has_event_hash() const;
  private:
  bool _internal_has_event_hash() const;
  public:
  void clear_event_hash();
  uint64_t event_hash() const;
  void set_event_hash(uint64_t value);
  private:
  uint64_t _internal_event_hash() const;
  void _internal_set_event_hash(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:ukm.Entry)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ukm::Entry_Metric > metrics_;
  int32_t id_;
  int32_t parent_id_;
  int64_t source_id_;
  uint64_t event_hash_;
  friend struct ::TableStruct_ukm_2fentry_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Entry_Metric

// optional fixed64 metric_hash = 1;
inline bool Entry_Metric::_internal_has_metric_hash() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Entry_Metric::has_metric_hash() const {
  return _internal_has_metric_hash();
}
inline void Entry_Metric::clear_metric_hash() {
  metric_hash_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000001u;
}
inline uint64_t Entry_Metric::_internal_metric_hash() const {
  return metric_hash_;
}
inline uint64_t Entry_Metric::metric_hash() const {
  // @@protoc_insertion_point(field_get:ukm.Entry.Metric.metric_hash)
  return _internal_metric_hash();
}
inline void Entry_Metric::_internal_set_metric_hash(uint64_t value) {
  _has_bits_[0] |= 0x00000001u;
  metric_hash_ = value;
}
inline void Entry_Metric::set_metric_hash(uint64_t value) {
  _internal_set_metric_hash(value);
  // @@protoc_insertion_point(field_set:ukm.Entry.Metric.metric_hash)
}

// optional int64 value = 2;
inline bool Entry_Metric::_internal_has_value() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Entry_Metric::has_value() const {
  return _internal_has_value();
}
inline void Entry_Metric::clear_value() {
  value_ = int64_t{0};
  _has_bits_[0] &= ~0x00000002u;
}
inline int64_t Entry_Metric::_internal_value() const {
  return value_;
}
inline int64_t Entry_Metric::value() const {
  // @@protoc_insertion_point(field_get:ukm.Entry.Metric.value)
  return _internal_value();
}
inline void Entry_Metric::_internal_set_value(int64_t value) {
  _has_bits_[0] |= 0x00000002u;
  value_ = value;
}
inline void Entry_Metric::set_value(int64_t value) {
  _internal_set_value(value);
  // @@protoc_insertion_point(field_set:ukm.Entry.Metric.value)
}

// -------------------------------------------------------------------

// Entry

// optional int32 id = 1;
inline bool Entry::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Entry::has_id() const {
  return _internal_has_id();
}
inline void Entry::clear_id() {
  id_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline int32_t Entry::_internal_id() const {
  return id_;
}
inline int32_t Entry::id() const {
  // @@protoc_insertion_point(field_get:ukm.Entry.id)
  return _internal_id();
}
inline void Entry::_internal_set_id(int32_t value) {
  _has_bits_[0] |= 0x00000001u;
  id_ = value;
}
inline void Entry::set_id(int32_t value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:ukm.Entry.id)
}

// optional int32 parent_id = 2;
inline bool Entry::_internal_has_parent_id() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Entry::has_parent_id() const {
  return _internal_has_parent_id();
}
inline void Entry::clear_parent_id() {
  parent_id_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline int32_t Entry::_internal_parent_id() const {
  return parent_id_;
}
inline int32_t Entry::parent_id() const {
  // @@protoc_insertion_point(field_get:ukm.Entry.parent_id)
  return _internal_parent_id();
}
inline void Entry::_internal_set_parent_id(int32_t value) {
  _has_bits_[0] |= 0x00000002u;
  parent_id_ = value;
}
inline void Entry::set_parent_id(int32_t value) {
  _internal_set_parent_id(value);
  // @@protoc_insertion_point(field_set:ukm.Entry.parent_id)
}

// optional int64 source_id = 3;
inline bool Entry::_internal_has_source_id() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool Entry::has_source_id() const {
  return _internal_has_source_id();
}
inline void Entry::clear_source_id() {
  source_id_ = int64_t{0};
  _has_bits_[0] &= ~0x00000004u;
}
inline int64_t Entry::_internal_source_id() const {
  return source_id_;
}
inline int64_t Entry::source_id() const {
  // @@protoc_insertion_point(field_get:ukm.Entry.source_id)
  return _internal_source_id();
}
inline void Entry::_internal_set_source_id(int64_t value) {
  _has_bits_[0] |= 0x00000004u;
  source_id_ = value;
}
inline void Entry::set_source_id(int64_t value) {
  _internal_set_source_id(value);
  // @@protoc_insertion_point(field_set:ukm.Entry.source_id)
}

// optional fixed64 event_hash = 4;
inline bool Entry::_internal_has_event_hash() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool Entry::has_event_hash() const {
  return _internal_has_event_hash();
}
inline void Entry::clear_event_hash() {
  event_hash_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000008u;
}
inline uint64_t Entry::_internal_event_hash() const {
  return event_hash_;
}
inline uint64_t Entry::event_hash() const {
  // @@protoc_insertion_point(field_get:ukm.Entry.event_hash)
  return _internal_event_hash();
}
inline void Entry::_internal_set_event_hash(uint64_t value) {
  _has_bits_[0] |= 0x00000008u;
  event_hash_ = value;
}
inline void Entry::set_event_hash(uint64_t value) {
  _internal_set_event_hash(value);
  // @@protoc_insertion_point(field_set:ukm.Entry.event_hash)
}

// repeated .ukm.Entry.Metric metrics = 5;
inline int Entry::_internal_metrics_size() const {
  return metrics_.size();
}
inline int Entry::metrics_size() const {
  return _internal_metrics_size();
}
inline void Entry::clear_metrics() {
  metrics_.Clear();
}
inline ::ukm::Entry_Metric* Entry::mutable_metrics(int index) {
  // @@protoc_insertion_point(field_mutable:ukm.Entry.metrics)
  return metrics_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ukm::Entry_Metric >*
Entry::mutable_metrics() {
  // @@protoc_insertion_point(field_mutable_list:ukm.Entry.metrics)
  return &metrics_;
}
inline const ::ukm::Entry_Metric& Entry::_internal_metrics(int index) const {
  return metrics_.Get(index);
}
inline const ::ukm::Entry_Metric& Entry::metrics(int index) const {
  // @@protoc_insertion_point(field_get:ukm.Entry.metrics)
  return _internal_metrics(index);
}
inline ::ukm::Entry_Metric* Entry::_internal_add_metrics() {
  return metrics_.Add();
}
inline ::ukm::Entry_Metric* Entry::add_metrics() {
  ::ukm::Entry_Metric* _add = _internal_add_metrics();
  // @@protoc_insertion_point(field_add:ukm.Entry.metrics)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::ukm::Entry_Metric >&
Entry::metrics() const {
  // @@protoc_insertion_point(field_list:ukm.Entry.metrics)
  return metrics_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace ukm

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ukm_2fentry_2eproto
