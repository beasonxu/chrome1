// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: authority_keys.proto

#include "authority_keys.pb.h"

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

namespace cast {
namespace channel {
PROTOBUF_CONSTEXPR AuthorityKeys_Key::AuthorityKeys_Key(
    ::_pbi::ConstantInitialized)
  : fingerprint_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , public_key_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}){}
struct AuthorityKeys_KeyDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AuthorityKeys_KeyDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AuthorityKeys_KeyDefaultTypeInternal() {}
  union {
    AuthorityKeys_Key _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AuthorityKeys_KeyDefaultTypeInternal _AuthorityKeys_Key_default_instance_;
PROTOBUF_CONSTEXPR AuthorityKeys::AuthorityKeys(
    ::_pbi::ConstantInitialized)
  : keys_(){}
struct AuthorityKeysDefaultTypeInternal {
  PROTOBUF_CONSTEXPR AuthorityKeysDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~AuthorityKeysDefaultTypeInternal() {}
  union {
    AuthorityKeys _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 AuthorityKeysDefaultTypeInternal _AuthorityKeys_default_instance_;
}  // namespace channel
}  // namespace cast
namespace cast {
namespace channel {

// ===================================================================

class AuthorityKeys_Key::_Internal {
 public:
  using HasBits = decltype(std::declval<AuthorityKeys_Key>()._has_bits_);
  static void set_has_fingerprint(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_public_key(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

AuthorityKeys_Key::AuthorityKeys_Key(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:cast.channel.AuthorityKeys.Key)
}
AuthorityKeys_Key::AuthorityKeys_Key(const AuthorityKeys_Key& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  fingerprint_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    fingerprint_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_fingerprint()) {
    fingerprint_.Set(from._internal_fingerprint(), 
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
  // @@protoc_insertion_point(copy_constructor:cast.channel.AuthorityKeys.Key)
}

inline void AuthorityKeys_Key::SharedCtor() {
fingerprint_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  fingerprint_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
public_key_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  public_key_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

AuthorityKeys_Key::~AuthorityKeys_Key() {
  // @@protoc_insertion_point(destructor:cast.channel.AuthorityKeys.Key)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void AuthorityKeys_Key::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  fingerprint_.Destroy();
  public_key_.Destroy();
}

void AuthorityKeys_Key::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void AuthorityKeys_Key::Clear() {
// @@protoc_insertion_point(message_clear_start:cast.channel.AuthorityKeys.Key)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      fingerprint_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      public_key_.ClearNonDefaultToEmpty();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* AuthorityKeys_Key::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required bytes fingerprint = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_fingerprint();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // required bytes public_key = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_public_key();
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

uint8_t* AuthorityKeys_Key::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cast.channel.AuthorityKeys.Key)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required bytes fingerprint = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_fingerprint(), target);
  }

  // required bytes public_key = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_public_key(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cast.channel.AuthorityKeys.Key)
  return target;
}

size_t AuthorityKeys_Key::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:cast.channel.AuthorityKeys.Key)
  size_t total_size = 0;

  if (_internal_has_fingerprint()) {
    // required bytes fingerprint = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_fingerprint());
  }

  if (_internal_has_public_key()) {
    // required bytes public_key = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_public_key());
  }

  return total_size;
}
size_t AuthorityKeys_Key::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cast.channel.AuthorityKeys.Key)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required bytes fingerprint = 1;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_fingerprint());

    // required bytes public_key = 2;
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_public_key());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AuthorityKeys_Key::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const AuthorityKeys_Key*>(
      &from));
}

void AuthorityKeys_Key::MergeFrom(const AuthorityKeys_Key& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cast.channel.AuthorityKeys.Key)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_fingerprint(from._internal_fingerprint());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_public_key(from._internal_public_key());
    }
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void AuthorityKeys_Key::CopyFrom(const AuthorityKeys_Key& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cast.channel.AuthorityKeys.Key)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuthorityKeys_Key::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void AuthorityKeys_Key::InternalSwap(AuthorityKeys_Key* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &fingerprint_, lhs_arena,
      &other->fingerprint_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &public_key_, lhs_arena,
      &other->public_key_, rhs_arena
  );
}

std::string AuthorityKeys_Key::GetTypeName() const {
  return "cast.channel.AuthorityKeys.Key";
}


// ===================================================================

class AuthorityKeys::_Internal {
 public:
};

AuthorityKeys::AuthorityKeys(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  keys_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:cast.channel.AuthorityKeys)
}
AuthorityKeys::AuthorityKeys(const AuthorityKeys& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      keys_(from.keys_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:cast.channel.AuthorityKeys)
}

inline void AuthorityKeys::SharedCtor() {
}

AuthorityKeys::~AuthorityKeys() {
  // @@protoc_insertion_point(destructor:cast.channel.AuthorityKeys)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void AuthorityKeys::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void AuthorityKeys::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void AuthorityKeys::Clear() {
// @@protoc_insertion_point(message_clear_start:cast.channel.AuthorityKeys)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  keys_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* AuthorityKeys::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .cast.channel.AuthorityKeys.Key keys = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_keys(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* AuthorityKeys::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:cast.channel.AuthorityKeys)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .cast.channel.AuthorityKeys.Key keys = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_keys_size()); i < n; i++) {
    const auto& repfield = this->_internal_keys(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cast.channel.AuthorityKeys)
  return target;
}

size_t AuthorityKeys::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cast.channel.AuthorityKeys)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .cast.channel.AuthorityKeys.Key keys = 1;
  total_size += 1UL * this->_internal_keys_size();
  for (const auto& msg : this->keys_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void AuthorityKeys::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const AuthorityKeys*>(
      &from));
}

void AuthorityKeys::MergeFrom(const AuthorityKeys& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cast.channel.AuthorityKeys)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  keys_.MergeFrom(from.keys_);
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void AuthorityKeys::CopyFrom(const AuthorityKeys& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cast.channel.AuthorityKeys)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool AuthorityKeys::IsInitialized() const {
  if (!::PROTOBUF_NAMESPACE_ID::internal::AllAreInitialized(keys_))
    return false;
  return true;
}

void AuthorityKeys::InternalSwap(AuthorityKeys* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  keys_.InternalSwap(&other->keys_);
}

std::string AuthorityKeys::GetTypeName() const {
  return "cast.channel.AuthorityKeys";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace channel
}  // namespace cast
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::cast::channel::AuthorityKeys_Key*
Arena::CreateMaybeMessage< ::cast::channel::AuthorityKeys_Key >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cast::channel::AuthorityKeys_Key >(arena);
}
template<> PROTOBUF_NOINLINE ::cast::channel::AuthorityKeys*
Arena::CreateMaybeMessage< ::cast::channel::AuthorityKeys >(Arena* arena) {
  return Arena::CreateMessageInternal< ::cast::channel::AuthorityKeys >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
