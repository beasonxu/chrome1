// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: public.proto

#include "public.pb.h"

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

namespace network {
PROTOBUF_CONSTEXPR TrustToken::TrustToken(
    ::_pbi::ConstantInitialized)
  : body_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , signing_key_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}){}
struct TrustTokenDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TrustTokenDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TrustTokenDefaultTypeInternal() {}
  union {
    TrustToken _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TrustTokenDefaultTypeInternal _TrustToken_default_instance_;
PROTOBUF_CONSTEXPR TrustTokenRedemptionRecord::TrustTokenRedemptionRecord(
    ::_pbi::ConstantInitialized)
  : body_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , public_key_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , signing_key_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , token_verification_key_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , lifetime_(uint64_t{0u}){}
struct TrustTokenRedemptionRecordDefaultTypeInternal {
  PROTOBUF_CONSTEXPR TrustTokenRedemptionRecordDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~TrustTokenRedemptionRecordDefaultTypeInternal() {}
  union {
    TrustTokenRedemptionRecord _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 TrustTokenRedemptionRecordDefaultTypeInternal _TrustTokenRedemptionRecord_default_instance_;
}  // namespace network
namespace network {

// ===================================================================

class TrustToken::_Internal {
 public:
  using HasBits = decltype(std::declval<TrustToken>()._has_bits_);
  static void set_has_body(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_signing_key(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

TrustToken::TrustToken(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:network.TrustToken)
}
TrustToken::TrustToken(const TrustToken& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  body_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    body_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_body()) {
    body_.Set(from._internal_body(), 
      GetArenaForAllocation());
  }
  signing_key_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    signing_key_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_signing_key()) {
    signing_key_.Set(from._internal_signing_key(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:network.TrustToken)
}

inline void TrustToken::SharedCtor() {
body_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  body_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
signing_key_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  signing_key_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

TrustToken::~TrustToken() {
  // @@protoc_insertion_point(destructor:network.TrustToken)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TrustToken::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  body_.Destroy();
  signing_key_.Destroy();
}

void TrustToken::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TrustToken::Clear() {
// @@protoc_insertion_point(message_clear_start:network.TrustToken)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      body_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      signing_key_.ClearNonDefaultToEmpty();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* TrustToken::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bytes body = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_body();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes signing_key = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_signing_key();
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

uint8_t* TrustToken::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:network.TrustToken)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bytes body = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_body(), target);
  }

  // optional bytes signing_key = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_signing_key(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:network.TrustToken)
  return target;
}

size_t TrustToken::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:network.TrustToken)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional bytes body = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_body());
    }

    // optional bytes signing_key = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_signing_key());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TrustToken::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const TrustToken*>(
      &from));
}

void TrustToken::MergeFrom(const TrustToken& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:network.TrustToken)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_body(from._internal_body());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_signing_key(from._internal_signing_key());
    }
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void TrustToken::CopyFrom(const TrustToken& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:network.TrustToken)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrustToken::IsInitialized() const {
  return true;
}

void TrustToken::InternalSwap(TrustToken* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &body_, lhs_arena,
      &other->body_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &signing_key_, lhs_arena,
      &other->signing_key_, rhs_arena
  );
}

std::string TrustToken::GetTypeName() const {
  return "network.TrustToken";
}


// ===================================================================

class TrustTokenRedemptionRecord::_Internal {
 public:
  using HasBits = decltype(std::declval<TrustTokenRedemptionRecord>()._has_bits_);
  static void set_has_body(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_public_key(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_signing_key(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_token_verification_key(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_lifetime(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

TrustTokenRedemptionRecord::TrustTokenRedemptionRecord(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:network.TrustTokenRedemptionRecord)
}
TrustTokenRedemptionRecord::TrustTokenRedemptionRecord(const TrustTokenRedemptionRecord& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  body_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    body_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_body()) {
    body_.Set(from._internal_body(), 
      GetArenaForAllocation());
  }
  public_key_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    public_key_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_public_key()) {
    public_key_.Set(from._internal_public_key(), 
      GetArenaForAllocation());
  }
  signing_key_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    signing_key_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_signing_key()) {
    signing_key_.Set(from._internal_signing_key(), 
      GetArenaForAllocation());
  }
  token_verification_key_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    token_verification_key_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_token_verification_key()) {
    token_verification_key_.Set(from._internal_token_verification_key(), 
      GetArenaForAllocation());
  }
  lifetime_ = from.lifetime_;
  // @@protoc_insertion_point(copy_constructor:network.TrustTokenRedemptionRecord)
}

inline void TrustTokenRedemptionRecord::SharedCtor() {
body_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  body_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
public_key_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  public_key_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
signing_key_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  signing_key_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
token_verification_key_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  token_verification_key_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
lifetime_ = uint64_t{0u};
}

TrustTokenRedemptionRecord::~TrustTokenRedemptionRecord() {
  // @@protoc_insertion_point(destructor:network.TrustTokenRedemptionRecord)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void TrustTokenRedemptionRecord::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  body_.Destroy();
  public_key_.Destroy();
  signing_key_.Destroy();
  token_verification_key_.Destroy();
}

void TrustTokenRedemptionRecord::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void TrustTokenRedemptionRecord::Clear() {
// @@protoc_insertion_point(message_clear_start:network.TrustTokenRedemptionRecord)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      body_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      public_key_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      signing_key_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      token_verification_key_.ClearNonDefaultToEmpty();
    }
  }
  lifetime_ = uint64_t{0u};
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* TrustTokenRedemptionRecord::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bytes body = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_body();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes public_key = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_public_key();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes signing_key = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_signing_key();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bytes token_verification_key = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_token_verification_key();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint64 lifetime = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_lifetime(&has_bits);
          lifetime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* TrustTokenRedemptionRecord::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:network.TrustTokenRedemptionRecord)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bytes body = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_body(), target);
  }

  // optional bytes public_key = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_public_key(), target);
  }

  // optional bytes signing_key = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->WriteBytesMaybeAliased(
        3, this->_internal_signing_key(), target);
  }

  // optional bytes token_verification_key = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_token_verification_key(), target);
  }

  // optional uint64 lifetime = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(5, this->_internal_lifetime(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:network.TrustTokenRedemptionRecord)
  return target;
}

size_t TrustTokenRedemptionRecord::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:network.TrustTokenRedemptionRecord)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional bytes body = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_body());
    }

    // optional bytes public_key = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_public_key());
    }

    // optional bytes signing_key = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_signing_key());
    }

    // optional bytes token_verification_key = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
          this->_internal_token_verification_key());
    }

    // optional uint64 lifetime = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_lifetime());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void TrustTokenRedemptionRecord::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const TrustTokenRedemptionRecord*>(
      &from));
}

void TrustTokenRedemptionRecord::MergeFrom(const TrustTokenRedemptionRecord& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:network.TrustTokenRedemptionRecord)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_body(from._internal_body());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_public_key(from._internal_public_key());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_signing_key(from._internal_signing_key());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_set_token_verification_key(from._internal_token_verification_key());
    }
    if (cached_has_bits & 0x00000010u) {
      lifetime_ = from.lifetime_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void TrustTokenRedemptionRecord::CopyFrom(const TrustTokenRedemptionRecord& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:network.TrustTokenRedemptionRecord)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool TrustTokenRedemptionRecord::IsInitialized() const {
  return true;
}

void TrustTokenRedemptionRecord::InternalSwap(TrustTokenRedemptionRecord* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &body_, lhs_arena,
      &other->body_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &public_key_, lhs_arena,
      &other->public_key_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &signing_key_, lhs_arena,
      &other->signing_key_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &token_verification_key_, lhs_arena,
      &other->token_verification_key_, rhs_arena
  );
  swap(lifetime_, other->lifetime_);
}

std::string TrustTokenRedemptionRecord::GetTypeName() const {
  return "network.TrustTokenRedemptionRecord";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace network
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::network::TrustToken*
Arena::CreateMaybeMessage< ::network::TrustToken >(Arena* arena) {
  return Arena::CreateMessageInternal< ::network::TrustToken >(arena);
}
template<> PROTOBUF_NOINLINE ::network::TrustTokenRedemptionRecord*
Arena::CreateMaybeMessage< ::network::TrustTokenRedemptionRecord >(Arena* arena) {
  return Arena::CreateMessageInternal< ::network::TrustTokenRedemptionRecord >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
