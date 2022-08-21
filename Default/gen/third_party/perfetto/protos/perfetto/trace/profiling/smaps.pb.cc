// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/profiling/smaps.proto

#include "protos/perfetto/trace/profiling/smaps.pb.h"

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

namespace perfetto {
namespace protos {
PROTOBUF_CONSTEXPR SmapsEntry::SmapsEntry(
    ::_pbi::ConstantInitialized)
  : path_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , file_name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , module_debugid_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , module_debug_path_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , size_kb_(uint64_t{0u})
  , private_dirty_kb_(uint64_t{0u})
  , swap_kb_(uint64_t{0u})
  , start_address_(uint64_t{0u})
  , module_timestamp_(uint64_t{0u})
  , private_clean_resident_kb_(uint64_t{0u})
  , shared_dirty_resident_kb_(uint64_t{0u})
  , shared_clean_resident_kb_(uint64_t{0u})
  , locked_kb_(uint64_t{0u})
  , proportional_resident_kb_(uint64_t{0u})
  , protection_flags_(0u){}
struct SmapsEntryDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SmapsEntryDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SmapsEntryDefaultTypeInternal() {}
  union {
    SmapsEntry _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SmapsEntryDefaultTypeInternal _SmapsEntry_default_instance_;
PROTOBUF_CONSTEXPR SmapsPacket::SmapsPacket(
    ::_pbi::ConstantInitialized)
  : entries_()
  , pid_(0u){}
struct SmapsPacketDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SmapsPacketDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SmapsPacketDefaultTypeInternal() {}
  union {
    SmapsPacket _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SmapsPacketDefaultTypeInternal _SmapsPacket_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {

// ===================================================================

class SmapsEntry::_Internal {
 public:
  using HasBits = decltype(std::declval<SmapsEntry>()._has_bits_);
  static void set_has_path(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_size_kb(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_private_dirty_kb(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_swap_kb(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_file_name(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_start_address(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_module_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_module_debugid(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_module_debug_path(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_protection_flags(HasBits* has_bits) {
    (*has_bits)[0] |= 16384u;
  }
  static void set_has_private_clean_resident_kb(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_shared_dirty_resident_kb(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
  static void set_has_shared_clean_resident_kb(HasBits* has_bits) {
    (*has_bits)[0] |= 2048u;
  }
  static void set_has_locked_kb(HasBits* has_bits) {
    (*has_bits)[0] |= 4096u;
  }
  static void set_has_proportional_resident_kb(HasBits* has_bits) {
    (*has_bits)[0] |= 8192u;
  }
};

SmapsEntry::SmapsEntry(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.SmapsEntry)
}
SmapsEntry::SmapsEntry(const SmapsEntry& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  path_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    path_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_path()) {
    path_.Set(from._internal_path(), 
      GetArenaForAllocation());
  }
  file_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    file_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_file_name()) {
    file_name_.Set(from._internal_file_name(), 
      GetArenaForAllocation());
  }
  module_debugid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    module_debugid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_module_debugid()) {
    module_debugid_.Set(from._internal_module_debugid(), 
      GetArenaForAllocation());
  }
  module_debug_path_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    module_debug_path_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_module_debug_path()) {
    module_debug_path_.Set(from._internal_module_debug_path(), 
      GetArenaForAllocation());
  }
  ::memcpy(&size_kb_, &from.size_kb_,
    static_cast<size_t>(reinterpret_cast<char*>(&protection_flags_) -
    reinterpret_cast<char*>(&size_kb_)) + sizeof(protection_flags_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.SmapsEntry)
}

inline void SmapsEntry::SharedCtor() {
path_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  path_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
file_name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  file_name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
module_debugid_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  module_debugid_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
module_debug_path_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  module_debug_path_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&size_kb_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&protection_flags_) -
    reinterpret_cast<char*>(&size_kb_)) + sizeof(protection_flags_));
}

SmapsEntry::~SmapsEntry() {
  // @@protoc_insertion_point(destructor:perfetto.protos.SmapsEntry)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SmapsEntry::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  path_.Destroy();
  file_name_.Destroy();
  module_debugid_.Destroy();
  module_debug_path_.Destroy();
}

void SmapsEntry::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SmapsEntry::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.SmapsEntry)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      path_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      file_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      module_debugid_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      module_debug_path_.ClearNonDefaultToEmpty();
    }
  }
  if (cached_has_bits & 0x000000f0u) {
    ::memset(&size_kb_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&start_address_) -
        reinterpret_cast<char*>(&size_kb_)) + sizeof(start_address_));
  }
  if (cached_has_bits & 0x00007f00u) {
    ::memset(&module_timestamp_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&protection_flags_) -
        reinterpret_cast<char*>(&module_timestamp_)) + sizeof(protection_flags_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* SmapsEntry::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string path = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_path();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 size_kb = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_size_kb(&has_bits);
          size_kb_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 private_dirty_kb = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _Internal::set_has_private_dirty_kb(&has_bits);
          private_dirty_kb_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 swap_kb = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_swap_kb(&has_bits);
          swap_kb_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string file_name = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_file_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 start_address = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_start_address(&has_bits);
          start_address_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 module_timestamp = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _Internal::set_has_module_timestamp(&has_bits);
          module_timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string module_debugid = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          auto str = _internal_mutable_module_debugid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string module_debug_path = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 74)) {
          auto str = _internal_mutable_module_debug_path();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 protection_flags = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 80)) {
          _Internal::set_has_protection_flags(&has_bits);
          protection_flags_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 private_clean_resident_kb = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 88)) {
          _Internal::set_has_private_clean_resident_kb(&has_bits);
          private_clean_resident_kb_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 shared_dirty_resident_kb = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 96)) {
          _Internal::set_has_shared_dirty_resident_kb(&has_bits);
          shared_dirty_resident_kb_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 shared_clean_resident_kb = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 104)) {
          _Internal::set_has_shared_clean_resident_kb(&has_bits);
          shared_clean_resident_kb_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 locked_kb = 14;
      case 14:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 112)) {
          _Internal::set_has_locked_kb(&has_bits);
          locked_kb_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 proportional_resident_kb = 15;
      case 15:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 120)) {
          _Internal::set_has_proportional_resident_kb(&has_bits);
          proportional_resident_kb_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* SmapsEntry::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.SmapsEntry)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string path = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_path(), target);
  }

  // optional uint64 size_kb = 2;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(2, this->_internal_size_kb(), target);
  }

  // optional uint64 private_dirty_kb = 3;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(3, this->_internal_private_dirty_kb(), target);
  }

  // optional uint64 swap_kb = 4;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(4, this->_internal_swap_kb(), target);
  }

  // optional string file_name = 5;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_file_name(), target);
  }

  // optional uint64 start_address = 6;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(6, this->_internal_start_address(), target);
  }

  // optional uint64 module_timestamp = 7;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(7, this->_internal_module_timestamp(), target);
  }

  // optional string module_debugid = 8;
  if (cached_has_bits & 0x00000004u) {
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_module_debugid(), target);
  }

  // optional string module_debug_path = 9;
  if (cached_has_bits & 0x00000008u) {
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_module_debug_path(), target);
  }

  // optional uint32 protection_flags = 10;
  if (cached_has_bits & 0x00004000u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(10, this->_internal_protection_flags(), target);
  }

  // optional uint64 private_clean_resident_kb = 11;
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(11, this->_internal_private_clean_resident_kb(), target);
  }

  // optional uint64 shared_dirty_resident_kb = 12;
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(12, this->_internal_shared_dirty_resident_kb(), target);
  }

  // optional uint64 shared_clean_resident_kb = 13;
  if (cached_has_bits & 0x00000800u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(13, this->_internal_shared_clean_resident_kb(), target);
  }

  // optional uint64 locked_kb = 14;
  if (cached_has_bits & 0x00001000u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(14, this->_internal_locked_kb(), target);
  }

  // optional uint64 proportional_resident_kb = 15;
  if (cached_has_bits & 0x00002000u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(15, this->_internal_proportional_resident_kb(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.SmapsEntry)
  return target;
}

size_t SmapsEntry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.SmapsEntry)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string path = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_path());
    }

    // optional string file_name = 5;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_file_name());
    }

    // optional string module_debugid = 8;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_module_debugid());
    }

    // optional string module_debug_path = 9;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_module_debug_path());
    }

    // optional uint64 size_kb = 2;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_size_kb());
    }

    // optional uint64 private_dirty_kb = 3;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_private_dirty_kb());
    }

    // optional uint64 swap_kb = 4;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_swap_kb());
    }

    // optional uint64 start_address = 6;
    if (cached_has_bits & 0x00000080u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_start_address());
    }

  }
  if (cached_has_bits & 0x00007f00u) {
    // optional uint64 module_timestamp = 7;
    if (cached_has_bits & 0x00000100u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_module_timestamp());
    }

    // optional uint64 private_clean_resident_kb = 11;
    if (cached_has_bits & 0x00000200u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_private_clean_resident_kb());
    }

    // optional uint64 shared_dirty_resident_kb = 12;
    if (cached_has_bits & 0x00000400u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_shared_dirty_resident_kb());
    }

    // optional uint64 shared_clean_resident_kb = 13;
    if (cached_has_bits & 0x00000800u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_shared_clean_resident_kb());
    }

    // optional uint64 locked_kb = 14;
    if (cached_has_bits & 0x00001000u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_locked_kb());
    }

    // optional uint64 proportional_resident_kb = 15;
    if (cached_has_bits & 0x00002000u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_proportional_resident_kb());
    }

    // optional uint32 protection_flags = 10;
    if (cached_has_bits & 0x00004000u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_protection_flags());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SmapsEntry::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const SmapsEntry*>(
      &from));
}

void SmapsEntry::MergeFrom(const SmapsEntry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.SmapsEntry)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_path(from._internal_path());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_file_name(from._internal_file_name());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_module_debugid(from._internal_module_debugid());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_set_module_debug_path(from._internal_module_debug_path());
    }
    if (cached_has_bits & 0x00000010u) {
      size_kb_ = from.size_kb_;
    }
    if (cached_has_bits & 0x00000020u) {
      private_dirty_kb_ = from.private_dirty_kb_;
    }
    if (cached_has_bits & 0x00000040u) {
      swap_kb_ = from.swap_kb_;
    }
    if (cached_has_bits & 0x00000080u) {
      start_address_ = from.start_address_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00007f00u) {
    if (cached_has_bits & 0x00000100u) {
      module_timestamp_ = from.module_timestamp_;
    }
    if (cached_has_bits & 0x00000200u) {
      private_clean_resident_kb_ = from.private_clean_resident_kb_;
    }
    if (cached_has_bits & 0x00000400u) {
      shared_dirty_resident_kb_ = from.shared_dirty_resident_kb_;
    }
    if (cached_has_bits & 0x00000800u) {
      shared_clean_resident_kb_ = from.shared_clean_resident_kb_;
    }
    if (cached_has_bits & 0x00001000u) {
      locked_kb_ = from.locked_kb_;
    }
    if (cached_has_bits & 0x00002000u) {
      proportional_resident_kb_ = from.proportional_resident_kb_;
    }
    if (cached_has_bits & 0x00004000u) {
      protection_flags_ = from.protection_flags_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void SmapsEntry::CopyFrom(const SmapsEntry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.SmapsEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SmapsEntry::IsInitialized() const {
  return true;
}

void SmapsEntry::InternalSwap(SmapsEntry* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &path_, lhs_arena,
      &other->path_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &file_name_, lhs_arena,
      &other->file_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &module_debugid_, lhs_arena,
      &other->module_debugid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &module_debug_path_, lhs_arena,
      &other->module_debug_path_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SmapsEntry, protection_flags_)
      + sizeof(SmapsEntry::protection_flags_)
      - PROTOBUF_FIELD_OFFSET(SmapsEntry, size_kb_)>(
          reinterpret_cast<char*>(&size_kb_),
          reinterpret_cast<char*>(&other->size_kb_));
}

std::string SmapsEntry::GetTypeName() const {
  return "perfetto.protos.SmapsEntry";
}


// ===================================================================

class SmapsPacket::_Internal {
 public:
  using HasBits = decltype(std::declval<SmapsPacket>()._has_bits_);
  static void set_has_pid(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

SmapsPacket::SmapsPacket(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  entries_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.SmapsPacket)
}
SmapsPacket::SmapsPacket(const SmapsPacket& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_),
      entries_(from.entries_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  pid_ = from.pid_;
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.SmapsPacket)
}

inline void SmapsPacket::SharedCtor() {
pid_ = 0u;
}

SmapsPacket::~SmapsPacket() {
  // @@protoc_insertion_point(destructor:perfetto.protos.SmapsPacket)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SmapsPacket::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void SmapsPacket::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void SmapsPacket::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.SmapsPacket)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  entries_.Clear();
  pid_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* SmapsPacket::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 pid = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_pid(&has_bits);
          pid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .perfetto.protos.SmapsEntry entries = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_entries(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* SmapsPacket::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.SmapsPacket)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 pid = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_pid(), target);
  }

  // repeated .perfetto.protos.SmapsEntry entries = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_entries_size()); i < n; i++) {
    const auto& repfield = this->_internal_entries(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.SmapsPacket)
  return target;
}

size_t SmapsPacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.SmapsPacket)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .perfetto.protos.SmapsEntry entries = 2;
  total_size += 1UL * this->_internal_entries_size();
  for (const auto& msg : this->entries_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional uint32 pid = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_pid());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SmapsPacket::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const SmapsPacket*>(
      &from));
}

void SmapsPacket::MergeFrom(const SmapsPacket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.SmapsPacket)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  entries_.MergeFrom(from.entries_);
  if (from._internal_has_pid()) {
    _internal_set_pid(from._internal_pid());
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void SmapsPacket::CopyFrom(const SmapsPacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.SmapsPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SmapsPacket::IsInitialized() const {
  return true;
}

void SmapsPacket::InternalSwap(SmapsPacket* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  entries_.InternalSwap(&other->entries_);
  swap(pid_, other->pid_);
}

std::string SmapsPacket::GetTypeName() const {
  return "perfetto.protos.SmapsPacket";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::SmapsEntry*
Arena::CreateMaybeMessage< ::perfetto::protos::SmapsEntry >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::SmapsEntry >(arena);
}
template<> PROTOBUF_NOINLINE ::perfetto::protos::SmapsPacket*
Arena::CreateMaybeMessage< ::perfetto::protos::SmapsPacket >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::SmapsPacket >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
