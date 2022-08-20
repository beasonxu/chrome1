// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/persisted_entity_data.proto

#include "components/sync/protocol/persisted_entity_data.pb.h"

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

namespace sync_pb {
PROTOBUF_CONSTEXPR PersistedEntityData::PersistedEntityData(
    ::_pbi::ConstantInitialized)
  : name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , specifics_(nullptr){}
struct PersistedEntityDataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PersistedEntityDataDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PersistedEntityDataDefaultTypeInternal() {}
  union {
    PersistedEntityData _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PersistedEntityDataDefaultTypeInternal _PersistedEntityData_default_instance_;
}  // namespace sync_pb
namespace sync_pb {

// ===================================================================

class PersistedEntityData::_Internal {
 public:
  using HasBits = decltype(std::declval<PersistedEntityData>()._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static const ::sync_pb::EntitySpecifics& specifics(const PersistedEntityData* msg);
  static void set_has_specifics(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

const ::sync_pb::EntitySpecifics&
PersistedEntityData::_Internal::specifics(const PersistedEntityData* msg) {
  return *msg->specifics_;
}
void PersistedEntityData::clear_specifics() {
  if (specifics_ != nullptr) specifics_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
PersistedEntityData::PersistedEntityData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:sync_pb.PersistedEntityData)
}
PersistedEntityData::PersistedEntityData(const PersistedEntityData& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_name()) {
    name_.Set(from._internal_name(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_specifics()) {
    specifics_ = new ::sync_pb::EntitySpecifics(*from.specifics_);
  } else {
    specifics_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:sync_pb.PersistedEntityData)
}

inline void PersistedEntityData::SharedCtor() {
name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
specifics_ = nullptr;
}

PersistedEntityData::~PersistedEntityData() {
  // @@protoc_insertion_point(destructor:sync_pb.PersistedEntityData)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PersistedEntityData::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.Destroy();
  if (this != internal_default_instance()) delete specifics_;
}

void PersistedEntityData::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void PersistedEntityData::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.PersistedEntityData)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(specifics_ != nullptr);
      specifics_->Clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* PersistedEntityData::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string name = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .sync_pb.EntitySpecifics specifics = 21;
      case 21:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 170)) {
          ptr = ctx->ParseMessage(_internal_mutable_specifics(), ptr);
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

uint8_t* PersistedEntityData::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sync_pb.PersistedEntityData)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 8;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_name(), target);
  }

  // optional .sync_pb.EntitySpecifics specifics = 21;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(21, _Internal::specifics(this),
        _Internal::specifics(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sync_pb.PersistedEntityData)
  return target;
}

size_t PersistedEntityData::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.PersistedEntityData)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string name = 8;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_name());
    }

    // optional .sync_pb.EntitySpecifics specifics = 21;
    if (cached_has_bits & 0x00000002u) {
      total_size += 2 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *specifics_);
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PersistedEntityData::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const PersistedEntityData*>(
      &from));
}

void PersistedEntityData::MergeFrom(const PersistedEntityData& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.PersistedEntityData)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_name(from._internal_name());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_specifics()->::sync_pb::EntitySpecifics::MergeFrom(from._internal_specifics());
    }
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void PersistedEntityData::CopyFrom(const PersistedEntityData& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.PersistedEntityData)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PersistedEntityData::IsInitialized() const {
  return true;
}

void PersistedEntityData::InternalSwap(PersistedEntityData* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
  swap(specifics_, other->specifics_);
}

std::string PersistedEntityData::GetTypeName() const {
  return "sync_pb.PersistedEntityData";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sync_pb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::sync_pb::PersistedEntityData*
Arena::CreateMaybeMessage< ::sync_pb::PersistedEntityData >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sync_pb::PersistedEntityData >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
