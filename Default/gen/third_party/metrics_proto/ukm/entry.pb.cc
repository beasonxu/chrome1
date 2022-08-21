// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ukm/entry.proto

#include "ukm/entry.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace ukm {
PROTOBUF_CONSTEXPR Entry_Metric::Entry_Metric(
    ::_pbi::ConstantInitialized)
  : metric_hash_(uint64_t{0u})
  , value_(int64_t{0}){}
struct Entry_MetricDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Entry_MetricDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~Entry_MetricDefaultTypeInternal() {}
  union {
    Entry_Metric _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Entry_MetricDefaultTypeInternal _Entry_Metric_default_instance_;
PROTOBUF_CONSTEXPR Entry::Entry(
    ::_pbi::ConstantInitialized)
  : metrics_()
  , id_(0)
  , parent_id_(0)
  , source_id_(int64_t{0})
  , event_hash_(uint64_t{0u}){}
struct EntryDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EntryDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~EntryDefaultTypeInternal() {}
  union {
    Entry _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EntryDefaultTypeInternal _Entry_default_instance_;
}  // namespace ukm
namespace ukm {

// ===================================================================

class Entry_Metric::_Internal {
 public:
  using HasBits = decltype(std::declval<Entry_Metric>()._has_bits_);
  static void set_has_metric_hash(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_value(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

Entry_Metric::Entry_Metric(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:ukm.Entry.Metric)
}
Entry_Metric::Entry_Metric(const Entry_Metric& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&metric_hash_, &from.metric_hash_,
    static_cast<size_t>(reinterpret_cast<char*>(&value_) -
    reinterpret_cast<char*>(&metric_hash_)) + sizeof(value_));
  // @@protoc_insertion_point(copy_constructor:ukm.Entry.Metric)
}

inline void Entry_Metric::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&metric_hash_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&value_) -
    reinterpret_cast<char*>(&metric_hash_)) + sizeof(value_));
}

Entry_Metric::~Entry_Metric() {
  // @@protoc_insertion_point(destructor:ukm.Entry.Metric)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Entry_Metric::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Entry_Metric::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Entry_Metric::Clear() {
// @@protoc_insertion_point(message_clear_start:ukm.Entry.Metric)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&metric_hash_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&value_) -
        reinterpret_cast<char*>(&metric_hash_)) + sizeof(value_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Entry_Metric::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional fixed64 metric_hash = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 9)) {
          _Internal::set_has_metric_hash(&has_bits);
          metric_hash_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<uint64_t>(ptr);
          ptr += sizeof(uint64_t);
        } else
          goto handle_unusual;
        continue;
      // optional int64 value = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_value(&has_bits);
          value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Entry_Metric::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ukm.Entry.Metric)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional fixed64 metric_hash = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFixed64ToArray(1, this->_internal_metric_hash(), target);
  }

  // optional int64 value = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ukm.Entry.Metric)
  return target;
}

size_t Entry_Metric::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ukm.Entry.Metric)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional fixed64 metric_hash = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 + 8;
    }

    // optional int64 value = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_value());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Entry_Metric::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Entry_Metric*>(
      &from));
}

void Entry_Metric::MergeFrom(const Entry_Metric& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ukm.Entry.Metric)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      metric_hash_ = from.metric_hash_;
    }
    if (cached_has_bits & 0x00000002u) {
      value_ = from.value_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Entry_Metric::CopyFrom(const Entry_Metric& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ukm.Entry.Metric)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Entry_Metric::IsInitialized() const {
  return true;
}

void Entry_Metric::InternalSwap(Entry_Metric* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Entry_Metric, value_)
      + sizeof(Entry_Metric::value_)
      - PROTOBUF_FIELD_OFFSET(Entry_Metric, metric_hash_)>(
          reinterpret_cast<char*>(&metric_hash_),
          reinterpret_cast<char*>(&other->metric_hash_));
}

std::string Entry_Metric::GetTypeName() const {
  return "ukm.Entry.Metric";
}


// ===================================================================

class Entry::_Internal {
 public:
  using HasBits = decltype(std::declval<Entry>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_parent_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_source_id(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_event_hash(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

Entry::Entry(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  metrics_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:ukm.Entry)
}
Entry::Entry(const Entry& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_),
      metrics_(from.metrics_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&event_hash_) -
    reinterpret_cast<char*>(&id_)) + sizeof(event_hash_));
  // @@protoc_insertion_point(copy_constructor:ukm.Entry)
}

inline void Entry::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&id_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&event_hash_) -
    reinterpret_cast<char*>(&id_)) + sizeof(event_hash_));
}

Entry::~Entry() {
  // @@protoc_insertion_point(destructor:ukm.Entry)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Entry::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Entry::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Entry::Clear() {
// @@protoc_insertion_point(message_clear_start:ukm.Entry)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  metrics_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&event_hash_) -
        reinterpret_cast<char*>(&id_)) + sizeof(event_hash_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Entry::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 parent_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_parent_id(&has_bits);
          parent_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int64 source_id = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_source_id(&has_bits);
          source_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional fixed64 event_hash = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 33)) {
          _Internal::set_has_event_hash(&has_bits);
          event_hash_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<uint64_t>(ptr);
          ptr += sizeof(uint64_t);
        } else
          goto handle_unusual;
        continue;
      // repeated .ukm.Entry.Metric metrics = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_metrics(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Entry::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:ukm.Entry)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int32 id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_id(), target);
  }

  // optional int32 parent_id = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_parent_id(), target);
  }

  // optional int64 source_id = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(3, this->_internal_source_id(), target);
  }

  // optional fixed64 event_hash = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFixed64ToArray(4, this->_internal_event_hash(), target);
  }

  // repeated .ukm.Entry.Metric metrics = 5;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_metrics_size()); i < n; i++) {
    const auto& repfield = this->_internal_metrics(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(5, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ukm.Entry)
  return target;
}

size_t Entry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:ukm.Entry)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .ukm.Entry.Metric metrics = 5;
  total_size += 1UL * this->_internal_metrics_size();
  for (const auto& msg : this->metrics_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional int32 id = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_id());
    }

    // optional int32 parent_id = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_parent_id());
    }

    // optional int64 source_id = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_source_id());
    }

    // optional fixed64 event_hash = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 + 8;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Entry::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Entry*>(
      &from));
}

void Entry::MergeFrom(const Entry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:ukm.Entry)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  metrics_.MergeFrom(from.metrics_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000002u) {
      parent_id_ = from.parent_id_;
    }
    if (cached_has_bits & 0x00000004u) {
      source_id_ = from.source_id_;
    }
    if (cached_has_bits & 0x00000008u) {
      event_hash_ = from.event_hash_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Entry::CopyFrom(const Entry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:ukm.Entry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Entry::IsInitialized() const {
  return true;
}

void Entry::InternalSwap(Entry* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  metrics_.InternalSwap(&other->metrics_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Entry, event_hash_)
      + sizeof(Entry::event_hash_)
      - PROTOBUF_FIELD_OFFSET(Entry, id_)>(
          reinterpret_cast<char*>(&id_),
          reinterpret_cast<char*>(&other->id_));
}

std::string Entry::GetTypeName() const {
  return "ukm.Entry";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace ukm
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::ukm::Entry_Metric*
Arena::CreateMaybeMessage< ::ukm::Entry_Metric >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ukm::Entry_Metric >(arena);
}
template<> PROTOBUF_NOINLINE ::ukm::Entry*
Arena::CreateMaybeMessage< ::ukm::Entry >(Arena* arena) {
  return Arena::CreateMessageInternal< ::ukm::Entry >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
