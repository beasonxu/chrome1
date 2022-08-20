// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/extension_setting_specifics.proto

#include "components/sync/protocol/extension_setting_specifics.pb.h"

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
PROTOBUF_CONSTEXPR ExtensionSettingSpecifics::ExtensionSettingSpecifics(
    ::_pbi::ConstantInitialized)
  : extension_id_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , key_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , value_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}){}
struct ExtensionSettingSpecificsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ExtensionSettingSpecificsDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ExtensionSettingSpecificsDefaultTypeInternal() {}
  union {
    ExtensionSettingSpecifics _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ExtensionSettingSpecificsDefaultTypeInternal _ExtensionSettingSpecifics_default_instance_;
}  // namespace sync_pb
namespace sync_pb {

// ===================================================================

class ExtensionSettingSpecifics::_Internal {
 public:
  using HasBits = decltype(std::declval<ExtensionSettingSpecifics>()._has_bits_);
  static void set_has_extension_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_key(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_value(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

ExtensionSettingSpecifics::ExtensionSettingSpecifics(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:sync_pb.ExtensionSettingSpecifics)
}
ExtensionSettingSpecifics::ExtensionSettingSpecifics(const ExtensionSettingSpecifics& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  extension_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    extension_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_extension_id()) {
    extension_id_.Set(from._internal_extension_id(), 
      GetArenaForAllocation());
  }
  key_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    key_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_key()) {
    key_.Set(from._internal_key(), 
      GetArenaForAllocation());
  }
  value_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    value_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_value()) {
    value_.Set(from._internal_value(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:sync_pb.ExtensionSettingSpecifics)
}

inline void ExtensionSettingSpecifics::SharedCtor() {
extension_id_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  extension_id_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
key_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  key_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
value_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  value_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ExtensionSettingSpecifics::~ExtensionSettingSpecifics() {
  // @@protoc_insertion_point(destructor:sync_pb.ExtensionSettingSpecifics)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ExtensionSettingSpecifics::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  extension_id_.Destroy();
  key_.Destroy();
  value_.Destroy();
}

void ExtensionSettingSpecifics::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ExtensionSettingSpecifics::Clear() {
// @@protoc_insertion_point(message_clear_start:sync_pb.ExtensionSettingSpecifics)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      extension_id_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      key_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      value_.ClearNonDefaultToEmpty();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* ExtensionSettingSpecifics::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string extension_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_extension_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string key = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_key();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string value = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_value();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
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

uint8_t* ExtensionSettingSpecifics::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:sync_pb.ExtensionSettingSpecifics)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string extension_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_extension_id(), target);
  }

  // optional string key = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_key(), target);
  }

  // optional string value = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sync_pb.ExtensionSettingSpecifics)
  return target;
}

size_t ExtensionSettingSpecifics::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sync_pb.ExtensionSettingSpecifics)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string extension_id = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_extension_id());
    }

    // optional string key = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_key());
    }

    // optional string value = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_value());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ExtensionSettingSpecifics::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ExtensionSettingSpecifics*>(
      &from));
}

void ExtensionSettingSpecifics::MergeFrom(const ExtensionSettingSpecifics& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sync_pb.ExtensionSettingSpecifics)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_extension_id(from._internal_extension_id());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_key(from._internal_key());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_value(from._internal_value());
    }
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ExtensionSettingSpecifics::CopyFrom(const ExtensionSettingSpecifics& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sync_pb.ExtensionSettingSpecifics)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ExtensionSettingSpecifics::IsInitialized() const {
  return true;
}

void ExtensionSettingSpecifics::InternalSwap(ExtensionSettingSpecifics* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &extension_id_, lhs_arena,
      &other->extension_id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &key_, lhs_arena,
      &other->key_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &value_, lhs_arena,
      &other->value_, rhs_arena
  );
}

std::string ExtensionSettingSpecifics::GetTypeName() const {
  return "sync_pb.ExtensionSettingSpecifics";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sync_pb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::sync_pb::ExtensionSettingSpecifics*
Arena::CreateMaybeMessage< ::sync_pb::ExtensionSettingSpecifics >(Arena* arena) {
  return Arena::CreateMessageInternal< ::sync_pb::ExtensionSettingSpecifics >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
