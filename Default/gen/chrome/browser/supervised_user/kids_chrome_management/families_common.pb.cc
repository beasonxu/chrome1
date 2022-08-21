// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: families_common.proto

#include "families_common.pb.h"

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

namespace kids_chrome_management {
PROTOBUF_CONSTEXPR UserProfile::UserProfile(
    ::_pbi::ConstantInitialized)
  : obfuscated_user_id_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , email_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , display_name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , profile_image_url_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , default_profile_image_url_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}){}
struct UserProfileDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UserProfileDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UserProfileDefaultTypeInternal() {}
  union {
    UserProfile _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UserProfileDefaultTypeInternal _UserProfile_default_instance_;
PROTOBUF_CONSTEXPR FamilyMember::FamilyMember(
    ::_pbi::ConstantInitialized)
  : profile_(nullptr)
  , role_(0)
{}
struct FamilyMemberDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FamilyMemberDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FamilyMemberDefaultTypeInternal() {}
  union {
    FamilyMember _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FamilyMemberDefaultTypeInternal _FamilyMember_default_instance_;
}  // namespace kids_chrome_management
namespace kids_chrome_management {
bool FamilyRole_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> FamilyRole_strings[6] = {};

static const char FamilyRole_names[] =
  "CHILD"
  "HEAD_OF_HOUSEHOLD"
  "MEMBER"
  "PARENT"
  "UNCONFIRMED_MEMBER"
  "UNKNOWN_FAMILY_ROLE";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry FamilyRole_entries[] = {
  { {FamilyRole_names + 0, 5}, 4 },
  { {FamilyRole_names + 5, 17}, 1 },
  { {FamilyRole_names + 22, 6}, 3 },
  { {FamilyRole_names + 28, 6}, 2 },
  { {FamilyRole_names + 34, 18}, 5 },
  { {FamilyRole_names + 52, 19}, 0 },
};

static const int FamilyRole_entries_by_number[] = {
  5, // 0 -> UNKNOWN_FAMILY_ROLE
  1, // 1 -> HEAD_OF_HOUSEHOLD
  3, // 2 -> PARENT
  2, // 3 -> MEMBER
  0, // 4 -> CHILD
  4, // 5 -> UNCONFIRMED_MEMBER
};

const std::string& FamilyRole_Name(
    FamilyRole value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          FamilyRole_entries,
          FamilyRole_entries_by_number,
          6, FamilyRole_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      FamilyRole_entries,
      FamilyRole_entries_by_number,
      6, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     FamilyRole_strings[idx].get();
}
bool FamilyRole_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, FamilyRole* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      FamilyRole_entries, 6, name, &int_value);
  if (success) {
    *value = static_cast<FamilyRole>(int_value);
  }
  return success;
}

// ===================================================================

class UserProfile::_Internal {
 public:
  using HasBits = decltype(std::declval<UserProfile>()._has_bits_);
  static void set_has_obfuscated_user_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_email(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_display_name(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_profile_image_url(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_default_profile_image_url(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

UserProfile::UserProfile(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:kids_chrome_management.UserProfile)
}
UserProfile::UserProfile(const UserProfile& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  obfuscated_user_id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    obfuscated_user_id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_obfuscated_user_id()) {
    obfuscated_user_id_.Set(from._internal_obfuscated_user_id(), 
      GetArenaForAllocation());
  }
  email_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    email_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_email()) {
    email_.Set(from._internal_email(), 
      GetArenaForAllocation());
  }
  display_name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    display_name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_display_name()) {
    display_name_.Set(from._internal_display_name(), 
      GetArenaForAllocation());
  }
  profile_image_url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    profile_image_url_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_profile_image_url()) {
    profile_image_url_.Set(from._internal_profile_image_url(), 
      GetArenaForAllocation());
  }
  default_profile_image_url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    default_profile_image_url_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_default_profile_image_url()) {
    default_profile_image_url_.Set(from._internal_default_profile_image_url(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:kids_chrome_management.UserProfile)
}

inline void UserProfile::SharedCtor() {
obfuscated_user_id_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  obfuscated_user_id_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
email_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  email_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
display_name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  display_name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
profile_image_url_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  profile_image_url_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
default_profile_image_url_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  default_profile_image_url_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

UserProfile::~UserProfile() {
  // @@protoc_insertion_point(destructor:kids_chrome_management.UserProfile)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UserProfile::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  obfuscated_user_id_.Destroy();
  email_.Destroy();
  display_name_.Destroy();
  profile_image_url_.Destroy();
  default_profile_image_url_.Destroy();
}

void UserProfile::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void UserProfile::Clear() {
// @@protoc_insertion_point(message_clear_start:kids_chrome_management.UserProfile)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      obfuscated_user_id_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      email_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      display_name_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      profile_image_url_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000010u) {
      default_profile_image_url_.ClearNonDefaultToEmpty();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* UserProfile::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string obfuscated_user_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_obfuscated_user_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string email = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_email();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string display_name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_display_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string profile_image_url = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_profile_image_url();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string default_profile_image_url = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_default_profile_image_url();
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

uint8_t* UserProfile::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kids_chrome_management.UserProfile)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string obfuscated_user_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_obfuscated_user_id(), target);
  }

  // optional string email = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_email(), target);
  }

  // optional string display_name = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_display_name(), target);
  }

  // optional string profile_image_url = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_profile_image_url(), target);
  }

  // optional string default_profile_image_url = 5;
  if (cached_has_bits & 0x00000010u) {
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_default_profile_image_url(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kids_chrome_management.UserProfile)
  return target;
}

size_t UserProfile::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kids_chrome_management.UserProfile)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional string obfuscated_user_id = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_obfuscated_user_id());
    }

    // optional string email = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_email());
    }

    // optional string display_name = 3;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_display_name());
    }

    // optional string profile_image_url = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_profile_image_url());
    }

    // optional string default_profile_image_url = 5;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_default_profile_image_url());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void UserProfile::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const UserProfile*>(
      &from));
}

void UserProfile::MergeFrom(const UserProfile& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:kids_chrome_management.UserProfile)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_obfuscated_user_id(from._internal_obfuscated_user_id());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_email(from._internal_email());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_display_name(from._internal_display_name());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_set_profile_image_url(from._internal_profile_image_url());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_set_default_profile_image_url(from._internal_default_profile_image_url());
    }
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void UserProfile::CopyFrom(const UserProfile& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kids_chrome_management.UserProfile)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserProfile::IsInitialized() const {
  return true;
}

void UserProfile::InternalSwap(UserProfile* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &obfuscated_user_id_, lhs_arena,
      &other->obfuscated_user_id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &email_, lhs_arena,
      &other->email_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &display_name_, lhs_arena,
      &other->display_name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &profile_image_url_, lhs_arena,
      &other->profile_image_url_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &default_profile_image_url_, lhs_arena,
      &other->default_profile_image_url_, rhs_arena
  );
}

std::string UserProfile::GetTypeName() const {
  return "kids_chrome_management.UserProfile";
}


// ===================================================================

class FamilyMember::_Internal {
 public:
  using HasBits = decltype(std::declval<FamilyMember>()._has_bits_);
  static void set_has_role(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::kids_chrome_management::UserProfile& profile(const FamilyMember* msg);
  static void set_has_profile(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::kids_chrome_management::UserProfile&
FamilyMember::_Internal::profile(const FamilyMember* msg) {
  return *msg->profile_;
}
FamilyMember::FamilyMember(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:kids_chrome_management.FamilyMember)
}
FamilyMember::FamilyMember(const FamilyMember& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  if (from._internal_has_profile()) {
    profile_ = new ::kids_chrome_management::UserProfile(*from.profile_);
  } else {
    profile_ = nullptr;
  }
  role_ = from.role_;
  // @@protoc_insertion_point(copy_constructor:kids_chrome_management.FamilyMember)
}

inline void FamilyMember::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&profile_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&role_) -
    reinterpret_cast<char*>(&profile_)) + sizeof(role_));
}

FamilyMember::~FamilyMember() {
  // @@protoc_insertion_point(destructor:kids_chrome_management.FamilyMember)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FamilyMember::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete profile_;
}

void FamilyMember::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FamilyMember::Clear() {
// @@protoc_insertion_point(message_clear_start:kids_chrome_management.FamilyMember)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(profile_ != nullptr);
    profile_->Clear();
  }
  role_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FamilyMember::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .kids_chrome_management.FamilyRole role = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::kids_chrome_management::FamilyRole_IsValid(val))) {
            _internal_set_role(static_cast<::kids_chrome_management::FamilyRole>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional .kids_chrome_management.UserProfile profile = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_profile(), ptr);
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

uint8_t* FamilyMember::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:kids_chrome_management.FamilyMember)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .kids_chrome_management.FamilyRole role = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_role(), target);
  }

  // optional .kids_chrome_management.UserProfile profile = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::profile(this),
        _Internal::profile(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:kids_chrome_management.FamilyMember)
  return target;
}

size_t FamilyMember::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:kids_chrome_management.FamilyMember)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .kids_chrome_management.UserProfile profile = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *profile_);
    }

    // optional .kids_chrome_management.FamilyRole role = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_role());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FamilyMember::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const FamilyMember*>(
      &from));
}

void FamilyMember::MergeFrom(const FamilyMember& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:kids_chrome_management.FamilyMember)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_profile()->::kids_chrome_management::UserProfile::MergeFrom(from._internal_profile());
    }
    if (cached_has_bits & 0x00000002u) {
      role_ = from.role_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FamilyMember::CopyFrom(const FamilyMember& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:kids_chrome_management.FamilyMember)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FamilyMember::IsInitialized() const {
  return true;
}

void FamilyMember::InternalSwap(FamilyMember* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FamilyMember, role_)
      + sizeof(FamilyMember::role_)
      - PROTOBUF_FIELD_OFFSET(FamilyMember, profile_)>(
          reinterpret_cast<char*>(&profile_),
          reinterpret_cast<char*>(&other->profile_));
}

std::string FamilyMember::GetTypeName() const {
  return "kids_chrome_management.FamilyMember";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace kids_chrome_management
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::kids_chrome_management::UserProfile*
Arena::CreateMaybeMessage< ::kids_chrome_management::UserProfile >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kids_chrome_management::UserProfile >(arena);
}
template<> PROTOBUF_NOINLINE ::kids_chrome_management::FamilyMember*
Arena::CreateMaybeMessage< ::kids_chrome_management::FamilyMember >(Arena* arena) {
  return Arena::CreateMessageInternal< ::kids_chrome_management::FamilyMember >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
