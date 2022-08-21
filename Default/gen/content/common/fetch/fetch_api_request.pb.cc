// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: fetch_api_request.proto

#include "fetch_api_request.pb.h"

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

namespace content {
namespace proto {
namespace internal {
PROTOBUF_CONSTEXPR FetchAPIRequest_Referrer::FetchAPIRequest_Referrer(
    ::_pbi::ConstantInitialized)
  : url_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , policy_(0){}
struct FetchAPIRequest_ReferrerDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FetchAPIRequest_ReferrerDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FetchAPIRequest_ReferrerDefaultTypeInternal() {}
  union {
    FetchAPIRequest_Referrer _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FetchAPIRequest_ReferrerDefaultTypeInternal _FetchAPIRequest_Referrer_default_instance_;
PROTOBUF_CONSTEXPR FetchAPIRequest_HeadersEntry_DoNotUse::FetchAPIRequest_HeadersEntry_DoNotUse(
    ::_pbi::ConstantInitialized){}
struct FetchAPIRequest_HeadersEntry_DoNotUseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FetchAPIRequest_HeadersEntry_DoNotUseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FetchAPIRequest_HeadersEntry_DoNotUseDefaultTypeInternal() {}
  union {
    FetchAPIRequest_HeadersEntry_DoNotUse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FetchAPIRequest_HeadersEntry_DoNotUseDefaultTypeInternal _FetchAPIRequest_HeadersEntry_DoNotUse_default_instance_;
PROTOBUF_CONSTEXPR FetchAPIRequest::FetchAPIRequest(
    ::_pbi::ConstantInitialized)
  : headers_()
  , url_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , method_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , integrity_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , referrer_(nullptr)
  , mode_(0)
  , credentials_mode_(0)
  , cache_mode_(0)
  , is_reload_(false)
  , is_main_resource_load_(false)
  , keepalive_(false)
  , is_history_navigation_(false)
  , redirect_mode_(0)
  , target_address_space_(0){}
struct FetchAPIRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FetchAPIRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FetchAPIRequestDefaultTypeInternal() {}
  union {
    FetchAPIRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FetchAPIRequestDefaultTypeInternal _FetchAPIRequest_default_instance_;
}  // namespace internal
}  // namespace proto
}  // namespace content
namespace content {
namespace proto {
namespace internal {

// ===================================================================

class FetchAPIRequest_Referrer::_Internal {
 public:
  using HasBits = decltype(std::declval<FetchAPIRequest_Referrer>()._has_bits_);
  static void set_has_url(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_policy(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

FetchAPIRequest_Referrer::FetchAPIRequest_Referrer(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:content.proto.internal.FetchAPIRequest.Referrer)
}
FetchAPIRequest_Referrer::FetchAPIRequest_Referrer(const FetchAPIRequest_Referrer& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    url_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_url()) {
    url_.Set(from._internal_url(), 
      GetArenaForAllocation());
  }
  policy_ = from.policy_;
  // @@protoc_insertion_point(copy_constructor:content.proto.internal.FetchAPIRequest.Referrer)
}

inline void FetchAPIRequest_Referrer::SharedCtor() {
url_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  url_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
policy_ = 0;
}

FetchAPIRequest_Referrer::~FetchAPIRequest_Referrer() {
  // @@protoc_insertion_point(destructor:content.proto.internal.FetchAPIRequest.Referrer)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FetchAPIRequest_Referrer::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  url_.Destroy();
}

void FetchAPIRequest_Referrer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FetchAPIRequest_Referrer::Clear() {
// @@protoc_insertion_point(message_clear_start:content.proto.internal.FetchAPIRequest.Referrer)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    url_.ClearNonDefaultToEmpty();
  }
  policy_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FetchAPIRequest_Referrer::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string url = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_url();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 policy = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_policy(&has_bits);
          policy_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* FetchAPIRequest_Referrer::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:content.proto.internal.FetchAPIRequest.Referrer)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string url = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_url(), target);
  }

  // optional int32 policy = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_policy(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:content.proto.internal.FetchAPIRequest.Referrer)
  return target;
}

size_t FetchAPIRequest_Referrer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:content.proto.internal.FetchAPIRequest.Referrer)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional string url = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_url());
    }

    // optional int32 policy = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_policy());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FetchAPIRequest_Referrer::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const FetchAPIRequest_Referrer*>(
      &from));
}

void FetchAPIRequest_Referrer::MergeFrom(const FetchAPIRequest_Referrer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:content.proto.internal.FetchAPIRequest.Referrer)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_url(from._internal_url());
    }
    if (cached_has_bits & 0x00000002u) {
      policy_ = from.policy_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FetchAPIRequest_Referrer::CopyFrom(const FetchAPIRequest_Referrer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:content.proto.internal.FetchAPIRequest.Referrer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FetchAPIRequest_Referrer::IsInitialized() const {
  return true;
}

void FetchAPIRequest_Referrer::InternalSwap(FetchAPIRequest_Referrer* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &url_, lhs_arena,
      &other->url_, rhs_arena
  );
  swap(policy_, other->policy_);
}

std::string FetchAPIRequest_Referrer::GetTypeName() const {
  return "content.proto.internal.FetchAPIRequest.Referrer";
}


// ===================================================================

FetchAPIRequest_HeadersEntry_DoNotUse::FetchAPIRequest_HeadersEntry_DoNotUse() {}
FetchAPIRequest_HeadersEntry_DoNotUse::FetchAPIRequest_HeadersEntry_DoNotUse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
    : SuperType(arena) {}
void FetchAPIRequest_HeadersEntry_DoNotUse::MergeFrom(const FetchAPIRequest_HeadersEntry_DoNotUse& other) {
  MergeFromInternal(other);
}

// ===================================================================

class FetchAPIRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<FetchAPIRequest>()._has_bits_);
  static void set_has_url(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_method(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::content::proto::internal::FetchAPIRequest_Referrer& referrer(const FetchAPIRequest* msg);
  static void set_has_referrer(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_is_reload(HasBits* has_bits) {
    (*has_bits)[0] |= 128u;
  }
  static void set_has_mode(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_is_main_resource_load(HasBits* has_bits) {
    (*has_bits)[0] |= 256u;
  }
  static void set_has_credentials_mode(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static void set_has_cache_mode(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static void set_has_redirect_mode(HasBits* has_bits) {
    (*has_bits)[0] |= 2048u;
  }
  static void set_has_integrity(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_keepalive(HasBits* has_bits) {
    (*has_bits)[0] |= 512u;
  }
  static void set_has_is_history_navigation(HasBits* has_bits) {
    (*has_bits)[0] |= 1024u;
  }
  static void set_has_target_address_space(HasBits* has_bits) {
    (*has_bits)[0] |= 4096u;
  }
};

const ::content::proto::internal::FetchAPIRequest_Referrer&
FetchAPIRequest::_Internal::referrer(const FetchAPIRequest* msg) {
  return *msg->referrer_;
}
FetchAPIRequest::FetchAPIRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  headers_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:content.proto.internal.FetchAPIRequest)
}
FetchAPIRequest::FetchAPIRequest(const FetchAPIRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  headers_.MergeFrom(from.headers_);
  url_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    url_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_url()) {
    url_.Set(from._internal_url(), 
      GetArenaForAllocation());
  }
  method_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    method_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_method()) {
    method_.Set(from._internal_method(), 
      GetArenaForAllocation());
  }
  integrity_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    integrity_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_integrity()) {
    integrity_.Set(from._internal_integrity(), 
      GetArenaForAllocation());
  }
  if (from._internal_has_referrer()) {
    referrer_ = new ::content::proto::internal::FetchAPIRequest_Referrer(*from.referrer_);
  } else {
    referrer_ = nullptr;
  }
  ::memcpy(&mode_, &from.mode_,
    static_cast<size_t>(reinterpret_cast<char*>(&target_address_space_) -
    reinterpret_cast<char*>(&mode_)) + sizeof(target_address_space_));
  // @@protoc_insertion_point(copy_constructor:content.proto.internal.FetchAPIRequest)
}

inline void FetchAPIRequest::SharedCtor() {
url_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  url_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
method_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  method_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
integrity_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  integrity_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&referrer_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&target_address_space_) -
    reinterpret_cast<char*>(&referrer_)) + sizeof(target_address_space_));
}

FetchAPIRequest::~FetchAPIRequest() {
  // @@protoc_insertion_point(destructor:content.proto.internal.FetchAPIRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FetchAPIRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  headers_.Destruct();
  url_.Destroy();
  method_.Destroy();
  integrity_.Destroy();
  if (this != internal_default_instance()) delete referrer_;
}

void FetchAPIRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FetchAPIRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:content.proto.internal.FetchAPIRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  headers_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      url_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000002u) {
      method_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000004u) {
      integrity_.ClearNonDefaultToEmpty();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(referrer_ != nullptr);
      referrer_->Clear();
    }
  }
  if (cached_has_bits & 0x000000f0u) {
    ::memset(&mode_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&is_reload_) -
        reinterpret_cast<char*>(&mode_)) + sizeof(is_reload_));
  }
  if (cached_has_bits & 0x00001f00u) {
    ::memset(&is_main_resource_load_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&target_address_space_) -
        reinterpret_cast<char*>(&is_main_resource_load_)) + sizeof(target_address_space_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FetchAPIRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string url = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_url();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string method = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_method();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // map<string, string> headers = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(&headers_, ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional .content.proto.internal.FetchAPIRequest.Referrer referrer = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_referrer(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool is_reload = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _Internal::set_has_is_reload(&has_bits);
          is_reload_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 mode = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _Internal::set_has_mode(&has_bits);
          mode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool is_main_resource_load = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _Internal::set_has_is_main_resource_load(&has_bits);
          is_main_resource_load_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 credentials_mode = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _Internal::set_has_credentials_mode(&has_bits);
          credentials_mode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 cache_mode = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 80)) {
          _Internal::set_has_cache_mode(&has_bits);
          cache_mode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 redirect_mode = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 88)) {
          _Internal::set_has_redirect_mode(&has_bits);
          redirect_mode_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional string integrity = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 98)) {
          auto str = _internal_mutable_integrity();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool keepalive = 13;
      case 13:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 104)) {
          _Internal::set_has_keepalive(&has_bits);
          keepalive_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool is_history_navigation = 16;
      case 16:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 128)) {
          _Internal::set_has_is_history_navigation(&has_bits);
          is_history_navigation_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional int32 target_address_space = 17;
      case 17:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 136)) {
          _Internal::set_has_target_address_space(&has_bits);
          target_address_space_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* FetchAPIRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:content.proto.internal.FetchAPIRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string url = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_url(), target);
  }

  // optional string method = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_method(), target);
  }

  // map<string, string> headers = 3;
  if (!this->_internal_headers().empty()) {
    using MapType = ::_pb::Map<std::string, std::string>;
    using WireHelper = FetchAPIRequest_HeadersEntry_DoNotUse::Funcs;
    const auto& map_field = this->_internal_headers();
    auto check_utf8 = [](const MapType::value_type& entry) {
      (void)entry;
    };

    if (stream->IsSerializationDeterministic() && map_field.size() > 1) {
      for (const auto& entry : ::_pbi::MapSorterPtr<MapType>(map_field)) {
        target = WireHelper::InternalSerialize(3, entry.first, entry.second, target, stream);
        check_utf8(entry);
      }
    } else {
      for (const auto& entry : map_field) {
        target = WireHelper::InternalSerialize(3, entry.first, entry.second, target, stream);
        check_utf8(entry);
      }
    }
  }

  // optional .content.proto.internal.FetchAPIRequest.Referrer referrer = 4;
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::referrer(this),
        _Internal::referrer(this).GetCachedSize(), target, stream);
  }

  // optional bool is_reload = 5;
  if (cached_has_bits & 0x00000080u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_is_reload(), target);
  }

  // optional int32 mode = 6;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(6, this->_internal_mode(), target);
  }

  // optional bool is_main_resource_load = 7;
  if (cached_has_bits & 0x00000100u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(7, this->_internal_is_main_resource_load(), target);
  }

  // optional int32 credentials_mode = 9;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(9, this->_internal_credentials_mode(), target);
  }

  // optional int32 cache_mode = 10;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(10, this->_internal_cache_mode(), target);
  }

  // optional int32 redirect_mode = 11;
  if (cached_has_bits & 0x00000800u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(11, this->_internal_redirect_mode(), target);
  }

  // optional string integrity = 12;
  if (cached_has_bits & 0x00000004u) {
    target = stream->WriteStringMaybeAliased(
        12, this->_internal_integrity(), target);
  }

  // optional bool keepalive = 13;
  if (cached_has_bits & 0x00000200u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(13, this->_internal_keepalive(), target);
  }

  // optional bool is_history_navigation = 16;
  if (cached_has_bits & 0x00000400u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(16, this->_internal_is_history_navigation(), target);
  }

  // optional int32 target_address_space = 17;
  if (cached_has_bits & 0x00001000u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(17, this->_internal_target_address_space(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:content.proto.internal.FetchAPIRequest)
  return target;
}

size_t FetchAPIRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:content.proto.internal.FetchAPIRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // map<string, string> headers = 3;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(this->_internal_headers_size());
  for (::PROTOBUF_NAMESPACE_ID::Map< std::string, std::string >::const_iterator
      it = this->_internal_headers().begin();
      it != this->_internal_headers().end(); ++it) {
    total_size += FetchAPIRequest_HeadersEntry_DoNotUse::Funcs::ByteSizeLong(it->first, it->second);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    // optional string url = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_url());
    }

    // optional string method = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_method());
    }

    // optional string integrity = 12;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_integrity());
    }

    // optional .content.proto.internal.FetchAPIRequest.Referrer referrer = 4;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *referrer_);
    }

    // optional int32 mode = 6;
    if (cached_has_bits & 0x00000010u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_mode());
    }

    // optional int32 credentials_mode = 9;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_credentials_mode());
    }

    // optional int32 cache_mode = 10;
    if (cached_has_bits & 0x00000040u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_cache_mode());
    }

    // optional bool is_reload = 5;
    if (cached_has_bits & 0x00000080u) {
      total_size += 1 + 1;
    }

  }
  if (cached_has_bits & 0x00001f00u) {
    // optional bool is_main_resource_load = 7;
    if (cached_has_bits & 0x00000100u) {
      total_size += 1 + 1;
    }

    // optional bool keepalive = 13;
    if (cached_has_bits & 0x00000200u) {
      total_size += 1 + 1;
    }

    // optional bool is_history_navigation = 16;
    if (cached_has_bits & 0x00000400u) {
      total_size += 2 + 1;
    }

    // optional int32 redirect_mode = 11;
    if (cached_has_bits & 0x00000800u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_redirect_mode());
    }

    // optional int32 target_address_space = 17;
    if (cached_has_bits & 0x00001000u) {
      total_size += 2 +
        ::_pbi::WireFormatLite::Int32Size(
          this->_internal_target_address_space());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FetchAPIRequest::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const FetchAPIRequest*>(
      &from));
}

void FetchAPIRequest::MergeFrom(const FetchAPIRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:content.proto.internal.FetchAPIRequest)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  headers_.MergeFrom(from.headers_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x000000ffu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_url(from._internal_url());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_set_method(from._internal_method());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_set_integrity(from._internal_integrity());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_referrer()->::content::proto::internal::FetchAPIRequest_Referrer::MergeFrom(from._internal_referrer());
    }
    if (cached_has_bits & 0x00000010u) {
      mode_ = from.mode_;
    }
    if (cached_has_bits & 0x00000020u) {
      credentials_mode_ = from.credentials_mode_;
    }
    if (cached_has_bits & 0x00000040u) {
      cache_mode_ = from.cache_mode_;
    }
    if (cached_has_bits & 0x00000080u) {
      is_reload_ = from.is_reload_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  if (cached_has_bits & 0x00001f00u) {
    if (cached_has_bits & 0x00000100u) {
      is_main_resource_load_ = from.is_main_resource_load_;
    }
    if (cached_has_bits & 0x00000200u) {
      keepalive_ = from.keepalive_;
    }
    if (cached_has_bits & 0x00000400u) {
      is_history_navigation_ = from.is_history_navigation_;
    }
    if (cached_has_bits & 0x00000800u) {
      redirect_mode_ = from.redirect_mode_;
    }
    if (cached_has_bits & 0x00001000u) {
      target_address_space_ = from.target_address_space_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FetchAPIRequest::CopyFrom(const FetchAPIRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:content.proto.internal.FetchAPIRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FetchAPIRequest::IsInitialized() const {
  return true;
}

void FetchAPIRequest::InternalSwap(FetchAPIRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  headers_.InternalSwap(&other->headers_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &url_, lhs_arena,
      &other->url_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &method_, lhs_arena,
      &other->method_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &integrity_, lhs_arena,
      &other->integrity_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FetchAPIRequest, target_address_space_)
      + sizeof(FetchAPIRequest::target_address_space_)
      - PROTOBUF_FIELD_OFFSET(FetchAPIRequest, referrer_)>(
          reinterpret_cast<char*>(&referrer_),
          reinterpret_cast<char*>(&other->referrer_));
}

std::string FetchAPIRequest::GetTypeName() const {
  return "content.proto.internal.FetchAPIRequest";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace internal
}  // namespace proto
}  // namespace content
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::content::proto::internal::FetchAPIRequest_Referrer*
Arena::CreateMaybeMessage< ::content::proto::internal::FetchAPIRequest_Referrer >(Arena* arena) {
  return Arena::CreateMessageInternal< ::content::proto::internal::FetchAPIRequest_Referrer >(arena);
}
template<> PROTOBUF_NOINLINE ::content::proto::internal::FetchAPIRequest_HeadersEntry_DoNotUse*
Arena::CreateMaybeMessage< ::content::proto::internal::FetchAPIRequest_HeadersEntry_DoNotUse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::content::proto::internal::FetchAPIRequest_HeadersEntry_DoNotUse >(arena);
}
template<> PROTOBUF_NOINLINE ::content::proto::internal::FetchAPIRequest*
Arena::CreateMaybeMessage< ::content::proto::internal::FetchAPIRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::content::proto::internal::FetchAPIRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
