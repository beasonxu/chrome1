// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/feed/core/proto/v2/wire/expiration_info.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fexpiration_5finfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fexpiration_5finfo_2eproto

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
#include "components/feed/core/proto/v2/wire/duration.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fexpiration_5finfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fexpiration_5finfo_2eproto {
  static const uint32_t offsets[];
};
namespace feedwire {
class ExpirationInfo;
struct ExpirationInfoDefaultTypeInternal;
extern ExpirationInfoDefaultTypeInternal _ExpirationInfo_default_instance_;
}  // namespace feedwire
PROTOBUF_NAMESPACE_OPEN
template<> ::feedwire::ExpirationInfo* Arena::CreateMaybeMessage<::feedwire::ExpirationInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace feedwire {

// ===================================================================

class ExpirationInfo final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:feedwire.ExpirationInfo) */ {
 public:
  inline ExpirationInfo() : ExpirationInfo(nullptr) {}
  ~ExpirationInfo() override;
  explicit PROTOBUF_CONSTEXPR ExpirationInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ExpirationInfo(const ExpirationInfo& from);
  ExpirationInfo(ExpirationInfo&& from) noexcept
    : ExpirationInfo() {
    *this = ::std::move(from);
  }

  inline ExpirationInfo& operator=(const ExpirationInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExpirationInfo& operator=(ExpirationInfo&& from) noexcept {
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

  static const ExpirationInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const ExpirationInfo* internal_default_instance() {
    return reinterpret_cast<const ExpirationInfo*>(
               &_ExpirationInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ExpirationInfo& a, ExpirationInfo& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(ExpirationInfo* other) {
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
  void UnsafeArenaSwap(ExpirationInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ExpirationInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ExpirationInfo>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ExpirationInfo& from);
  void MergeFrom(const ExpirationInfo& from);
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
  void InternalSwap(ExpirationInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "feedwire.ExpirationInfo";
  }
  protected:
  explicit ExpirationInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXsurfaceExpirationInfoFieldNumber = 1000,
    kExpirationDurationFieldNumber = 2,
    kShouldExpireFieldNumber = 1,
  };
  // optional bytes xsurface_expiration_info = 1000;
  bool has_xsurface_expiration_info() const;
  private:
  bool _internal_has_xsurface_expiration_info() const;
  public:
  void clear_xsurface_expiration_info();
  const std::string& xsurface_expiration_info() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_xsurface_expiration_info(ArgT0&& arg0, ArgT... args);
  std::string* mutable_xsurface_expiration_info();
  PROTOBUF_NODISCARD std::string* release_xsurface_expiration_info();
  void set_allocated_xsurface_expiration_info(std::string* xsurface_expiration_info);
  private:
  const std::string& _internal_xsurface_expiration_info() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_xsurface_expiration_info(const std::string& value);
  std::string* _internal_mutable_xsurface_expiration_info();
  public:

  // optional .feedwire.Duration expiration_duration = 2;
  bool has_expiration_duration() const;
  private:
  bool _internal_has_expiration_duration() const;
  public:
  void clear_expiration_duration();
  const ::feedwire::Duration& expiration_duration() const;
  PROTOBUF_NODISCARD ::feedwire::Duration* release_expiration_duration();
  ::feedwire::Duration* mutable_expiration_duration();
  void set_allocated_expiration_duration(::feedwire::Duration* expiration_duration);
  private:
  const ::feedwire::Duration& _internal_expiration_duration() const;
  ::feedwire::Duration* _internal_mutable_expiration_duration();
  public:
  void unsafe_arena_set_allocated_expiration_duration(
      ::feedwire::Duration* expiration_duration);
  ::feedwire::Duration* unsafe_arena_release_expiration_duration();

  // optional bool should_expire = 1;
  bool has_should_expire() const;
  private:
  bool _internal_has_should_expire() const;
  public:
  void clear_should_expire();
  bool should_expire() const;
  void set_should_expire(bool value);
  private:
  bool _internal_should_expire() const;
  void _internal_set_should_expire(bool value);
  public:

  // @@protoc_insertion_point(class_scope:feedwire.ExpirationInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr xsurface_expiration_info_;
  ::feedwire::Duration* expiration_duration_;
  bool should_expire_;
  friend struct ::TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fexpiration_5finfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ExpirationInfo

// optional bool should_expire = 1;
inline bool ExpirationInfo::_internal_has_should_expire() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ExpirationInfo::has_should_expire() const {
  return _internal_has_should_expire();
}
inline void ExpirationInfo::clear_should_expire() {
  should_expire_ = false;
  _has_bits_[0] &= ~0x00000004u;
}
inline bool ExpirationInfo::_internal_should_expire() const {
  return should_expire_;
}
inline bool ExpirationInfo::should_expire() const {
  // @@protoc_insertion_point(field_get:feedwire.ExpirationInfo.should_expire)
  return _internal_should_expire();
}
inline void ExpirationInfo::_internal_set_should_expire(bool value) {
  _has_bits_[0] |= 0x00000004u;
  should_expire_ = value;
}
inline void ExpirationInfo::set_should_expire(bool value) {
  _internal_set_should_expire(value);
  // @@protoc_insertion_point(field_set:feedwire.ExpirationInfo.should_expire)
}

// optional .feedwire.Duration expiration_duration = 2;
inline bool ExpirationInfo::_internal_has_expiration_duration() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || expiration_duration_ != nullptr);
  return value;
}
inline bool ExpirationInfo::has_expiration_duration() const {
  return _internal_has_expiration_duration();
}
inline const ::feedwire::Duration& ExpirationInfo::_internal_expiration_duration() const {
  const ::feedwire::Duration* p = expiration_duration_;
  return p != nullptr ? *p : reinterpret_cast<const ::feedwire::Duration&>(
      ::feedwire::_Duration_default_instance_);
}
inline const ::feedwire::Duration& ExpirationInfo::expiration_duration() const {
  // @@protoc_insertion_point(field_get:feedwire.ExpirationInfo.expiration_duration)
  return _internal_expiration_duration();
}
inline void ExpirationInfo::unsafe_arena_set_allocated_expiration_duration(
    ::feedwire::Duration* expiration_duration) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(expiration_duration_);
  }
  expiration_duration_ = expiration_duration;
  if (expiration_duration) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:feedwire.ExpirationInfo.expiration_duration)
}
inline ::feedwire::Duration* ExpirationInfo::release_expiration_duration() {
  _has_bits_[0] &= ~0x00000002u;
  ::feedwire::Duration* temp = expiration_duration_;
  expiration_duration_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::feedwire::Duration* ExpirationInfo::unsafe_arena_release_expiration_duration() {
  // @@protoc_insertion_point(field_release:feedwire.ExpirationInfo.expiration_duration)
  _has_bits_[0] &= ~0x00000002u;
  ::feedwire::Duration* temp = expiration_duration_;
  expiration_duration_ = nullptr;
  return temp;
}
inline ::feedwire::Duration* ExpirationInfo::_internal_mutable_expiration_duration() {
  _has_bits_[0] |= 0x00000002u;
  if (expiration_duration_ == nullptr) {
    auto* p = CreateMaybeMessage<::feedwire::Duration>(GetArenaForAllocation());
    expiration_duration_ = p;
  }
  return expiration_duration_;
}
inline ::feedwire::Duration* ExpirationInfo::mutable_expiration_duration() {
  ::feedwire::Duration* _msg = _internal_mutable_expiration_duration();
  // @@protoc_insertion_point(field_mutable:feedwire.ExpirationInfo.expiration_duration)
  return _msg;
}
inline void ExpirationInfo::set_allocated_expiration_duration(::feedwire::Duration* expiration_duration) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(expiration_duration_);
  }
  if (expiration_duration) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(expiration_duration));
    if (message_arena != submessage_arena) {
      expiration_duration = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, expiration_duration, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  expiration_duration_ = expiration_duration;
  // @@protoc_insertion_point(field_set_allocated:feedwire.ExpirationInfo.expiration_duration)
}

// optional bytes xsurface_expiration_info = 1000;
inline bool ExpirationInfo::_internal_has_xsurface_expiration_info() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ExpirationInfo::has_xsurface_expiration_info() const {
  return _internal_has_xsurface_expiration_info();
}
inline void ExpirationInfo::clear_xsurface_expiration_info() {
  xsurface_expiration_info_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ExpirationInfo::xsurface_expiration_info() const {
  // @@protoc_insertion_point(field_get:feedwire.ExpirationInfo.xsurface_expiration_info)
  return _internal_xsurface_expiration_info();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ExpirationInfo::set_xsurface_expiration_info(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 xsurface_expiration_info_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:feedwire.ExpirationInfo.xsurface_expiration_info)
}
inline std::string* ExpirationInfo::mutable_xsurface_expiration_info() {
  std::string* _s = _internal_mutable_xsurface_expiration_info();
  // @@protoc_insertion_point(field_mutable:feedwire.ExpirationInfo.xsurface_expiration_info)
  return _s;
}
inline const std::string& ExpirationInfo::_internal_xsurface_expiration_info() const {
  return xsurface_expiration_info_.Get();
}
inline void ExpirationInfo::_internal_set_xsurface_expiration_info(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  xsurface_expiration_info_.Set(value, GetArenaForAllocation());
}
inline std::string* ExpirationInfo::_internal_mutable_xsurface_expiration_info() {
  _has_bits_[0] |= 0x00000001u;
  return xsurface_expiration_info_.Mutable(GetArenaForAllocation());
}
inline std::string* ExpirationInfo::release_xsurface_expiration_info() {
  // @@protoc_insertion_point(field_release:feedwire.ExpirationInfo.xsurface_expiration_info)
  if (!_internal_has_xsurface_expiration_info()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = xsurface_expiration_info_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (xsurface_expiration_info_.IsDefault()) {
    xsurface_expiration_info_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ExpirationInfo::set_allocated_xsurface_expiration_info(std::string* xsurface_expiration_info) {
  if (xsurface_expiration_info != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  xsurface_expiration_info_.SetAllocated(xsurface_expiration_info, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (xsurface_expiration_info_.IsDefault()) {
    xsurface_expiration_info_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:feedwire.ExpirationInfo.xsurface_expiration_info)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace feedwire

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fexpiration_5finfo_2eproto
