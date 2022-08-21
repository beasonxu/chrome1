// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: v4_store.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_v4_5fstore_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_v4_5fstore_2eproto

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
#include "safebrowsing.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_v4_5fstore_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_v4_5fstore_2eproto {
  static const uint32_t offsets[];
};
namespace safe_browsing {
class V4StoreFileFormat;
struct V4StoreFileFormatDefaultTypeInternal;
extern V4StoreFileFormatDefaultTypeInternal _V4StoreFileFormat_default_instance_;
}  // namespace safe_browsing
PROTOBUF_NAMESPACE_OPEN
template<> ::safe_browsing::V4StoreFileFormat* Arena::CreateMaybeMessage<::safe_browsing::V4StoreFileFormat>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace safe_browsing {

// ===================================================================

class V4StoreFileFormat final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:safe_browsing.V4StoreFileFormat) */ {
 public:
  inline V4StoreFileFormat() : V4StoreFileFormat(nullptr) {}
  ~V4StoreFileFormat() override;
  explicit PROTOBUF_CONSTEXPR V4StoreFileFormat(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  V4StoreFileFormat(const V4StoreFileFormat& from);
  V4StoreFileFormat(V4StoreFileFormat&& from) noexcept
    : V4StoreFileFormat() {
    *this = ::std::move(from);
  }

  inline V4StoreFileFormat& operator=(const V4StoreFileFormat& from) {
    CopyFrom(from);
    return *this;
  }
  inline V4StoreFileFormat& operator=(V4StoreFileFormat&& from) noexcept {
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

  static const V4StoreFileFormat& default_instance() {
    return *internal_default_instance();
  }
  static inline const V4StoreFileFormat* internal_default_instance() {
    return reinterpret_cast<const V4StoreFileFormat*>(
               &_V4StoreFileFormat_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(V4StoreFileFormat& a, V4StoreFileFormat& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(V4StoreFileFormat* other) {
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
  void UnsafeArenaSwap(V4StoreFileFormat* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  V4StoreFileFormat* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<V4StoreFileFormat>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const V4StoreFileFormat& from);
  void MergeFrom(const V4StoreFileFormat& from);
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
  void InternalSwap(V4StoreFileFormat* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "safe_browsing.V4StoreFileFormat";
  }
  protected:
  explicit V4StoreFileFormat(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kListUpdateResponseFieldNumber = 3,
    kMagicNumberFieldNumber = 1,
    kVersionNumberFieldNumber = 2,
  };
  // optional .safe_browsing.FetchThreatListUpdatesResponse.ListUpdateResponse list_update_response = 3;
  bool has_list_update_response() const;
  private:
  bool _internal_has_list_update_response() const;
  public:
  void clear_list_update_response();
  const ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse& list_update_response() const;
  PROTOBUF_NODISCARD ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* release_list_update_response();
  ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* mutable_list_update_response();
  void set_allocated_list_update_response(::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* list_update_response);
  private:
  const ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse& _internal_list_update_response() const;
  ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* _internal_mutable_list_update_response();
  public:
  void unsafe_arena_set_allocated_list_update_response(
      ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* list_update_response);
  ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* unsafe_arena_release_list_update_response();

  // optional uint32 magic_number = 1;
  bool has_magic_number() const;
  private:
  bool _internal_has_magic_number() const;
  public:
  void clear_magic_number();
  uint32_t magic_number() const;
  void set_magic_number(uint32_t value);
  private:
  uint32_t _internal_magic_number() const;
  void _internal_set_magic_number(uint32_t value);
  public:

  // optional uint32 version_number = 2;
  bool has_version_number() const;
  private:
  bool _internal_has_version_number() const;
  public:
  void clear_version_number();
  uint32_t version_number() const;
  void set_version_number(uint32_t value);
  private:
  uint32_t _internal_version_number() const;
  void _internal_set_version_number(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:safe_browsing.V4StoreFileFormat)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* list_update_response_;
  uint32_t magic_number_;
  uint32_t version_number_;
  friend struct ::TableStruct_v4_5fstore_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// V4StoreFileFormat

// optional uint32 magic_number = 1;
inline bool V4StoreFileFormat::_internal_has_magic_number() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool V4StoreFileFormat::has_magic_number() const {
  return _internal_has_magic_number();
}
inline void V4StoreFileFormat::clear_magic_number() {
  magic_number_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline uint32_t V4StoreFileFormat::_internal_magic_number() const {
  return magic_number_;
}
inline uint32_t V4StoreFileFormat::magic_number() const {
  // @@protoc_insertion_point(field_get:safe_browsing.V4StoreFileFormat.magic_number)
  return _internal_magic_number();
}
inline void V4StoreFileFormat::_internal_set_magic_number(uint32_t value) {
  _has_bits_[0] |= 0x00000002u;
  magic_number_ = value;
}
inline void V4StoreFileFormat::set_magic_number(uint32_t value) {
  _internal_set_magic_number(value);
  // @@protoc_insertion_point(field_set:safe_browsing.V4StoreFileFormat.magic_number)
}

// optional uint32 version_number = 2;
inline bool V4StoreFileFormat::_internal_has_version_number() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool V4StoreFileFormat::has_version_number() const {
  return _internal_has_version_number();
}
inline void V4StoreFileFormat::clear_version_number() {
  version_number_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline uint32_t V4StoreFileFormat::_internal_version_number() const {
  return version_number_;
}
inline uint32_t V4StoreFileFormat::version_number() const {
  // @@protoc_insertion_point(field_get:safe_browsing.V4StoreFileFormat.version_number)
  return _internal_version_number();
}
inline void V4StoreFileFormat::_internal_set_version_number(uint32_t value) {
  _has_bits_[0] |= 0x00000004u;
  version_number_ = value;
}
inline void V4StoreFileFormat::set_version_number(uint32_t value) {
  _internal_set_version_number(value);
  // @@protoc_insertion_point(field_set:safe_browsing.V4StoreFileFormat.version_number)
}

// optional .safe_browsing.FetchThreatListUpdatesResponse.ListUpdateResponse list_update_response = 3;
inline bool V4StoreFileFormat::_internal_has_list_update_response() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  PROTOBUF_ASSUME(!value || list_update_response_ != nullptr);
  return value;
}
inline bool V4StoreFileFormat::has_list_update_response() const {
  return _internal_has_list_update_response();
}
inline const ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse& V4StoreFileFormat::_internal_list_update_response() const {
  const ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* p = list_update_response_;
  return p != nullptr ? *p : reinterpret_cast<const ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse&>(
      ::safe_browsing::_FetchThreatListUpdatesResponse_ListUpdateResponse_default_instance_);
}
inline const ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse& V4StoreFileFormat::list_update_response() const {
  // @@protoc_insertion_point(field_get:safe_browsing.V4StoreFileFormat.list_update_response)
  return _internal_list_update_response();
}
inline void V4StoreFileFormat::unsafe_arena_set_allocated_list_update_response(
    ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* list_update_response) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(list_update_response_);
  }
  list_update_response_ = list_update_response;
  if (list_update_response) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:safe_browsing.V4StoreFileFormat.list_update_response)
}
inline ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* V4StoreFileFormat::release_list_update_response() {
  _has_bits_[0] &= ~0x00000001u;
  ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* temp = list_update_response_;
  list_update_response_ = nullptr;
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
inline ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* V4StoreFileFormat::unsafe_arena_release_list_update_response() {
  // @@protoc_insertion_point(field_release:safe_browsing.V4StoreFileFormat.list_update_response)
  _has_bits_[0] &= ~0x00000001u;
  ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* temp = list_update_response_;
  list_update_response_ = nullptr;
  return temp;
}
inline ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* V4StoreFileFormat::_internal_mutable_list_update_response() {
  _has_bits_[0] |= 0x00000001u;
  if (list_update_response_ == nullptr) {
    auto* p = CreateMaybeMessage<::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse>(GetArenaForAllocation());
    list_update_response_ = p;
  }
  return list_update_response_;
}
inline ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* V4StoreFileFormat::mutable_list_update_response() {
  ::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* _msg = _internal_mutable_list_update_response();
  // @@protoc_insertion_point(field_mutable:safe_browsing.V4StoreFileFormat.list_update_response)
  return _msg;
}
inline void V4StoreFileFormat::set_allocated_list_update_response(::safe_browsing::FetchThreatListUpdatesResponse_ListUpdateResponse* list_update_response) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(list_update_response_);
  }
  if (list_update_response) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(list_update_response));
    if (message_arena != submessage_arena) {
      list_update_response = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, list_update_response, submessage_arena);
    }
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  list_update_response_ = list_update_response;
  // @@protoc_insertion_point(field_set_allocated:safe_browsing.V4StoreFileFormat.list_update_response)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace safe_browsing

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_v4_5fstore_2eproto
