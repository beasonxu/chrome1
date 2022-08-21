// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: local_storage_database.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_local_5fstorage_5fdatabase_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_local_5fstorage_5fdatabase_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_local_5fstorage_5fdatabase_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_local_5fstorage_5fdatabase_2eproto {
  static const uint32_t offsets[];
};
namespace storage {
class LocalStorageStorageKeyMetaData;
struct LocalStorageStorageKeyMetaDataDefaultTypeInternal;
extern LocalStorageStorageKeyMetaDataDefaultTypeInternal _LocalStorageStorageKeyMetaData_default_instance_;
}  // namespace storage
PROTOBUF_NAMESPACE_OPEN
template<> ::storage::LocalStorageStorageKeyMetaData* Arena::CreateMaybeMessage<::storage::LocalStorageStorageKeyMetaData>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace storage {

// ===================================================================

class LocalStorageStorageKeyMetaData final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:storage.LocalStorageStorageKeyMetaData) */ {
 public:
  inline LocalStorageStorageKeyMetaData() : LocalStorageStorageKeyMetaData(nullptr) {}
  ~LocalStorageStorageKeyMetaData() override;
  explicit PROTOBUF_CONSTEXPR LocalStorageStorageKeyMetaData(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  LocalStorageStorageKeyMetaData(const LocalStorageStorageKeyMetaData& from);
  LocalStorageStorageKeyMetaData(LocalStorageStorageKeyMetaData&& from) noexcept
    : LocalStorageStorageKeyMetaData() {
    *this = ::std::move(from);
  }

  inline LocalStorageStorageKeyMetaData& operator=(const LocalStorageStorageKeyMetaData& from) {
    CopyFrom(from);
    return *this;
  }
  inline LocalStorageStorageKeyMetaData& operator=(LocalStorageStorageKeyMetaData&& from) noexcept {
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

  static const LocalStorageStorageKeyMetaData& default_instance() {
    return *internal_default_instance();
  }
  static inline const LocalStorageStorageKeyMetaData* internal_default_instance() {
    return reinterpret_cast<const LocalStorageStorageKeyMetaData*>(
               &_LocalStorageStorageKeyMetaData_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LocalStorageStorageKeyMetaData& a, LocalStorageStorageKeyMetaData& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(LocalStorageStorageKeyMetaData* other) {
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
  void UnsafeArenaSwap(LocalStorageStorageKeyMetaData* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  LocalStorageStorageKeyMetaData* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<LocalStorageStorageKeyMetaData>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const LocalStorageStorageKeyMetaData& from);
  void MergeFrom(const LocalStorageStorageKeyMetaData& from);
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
  void InternalSwap(LocalStorageStorageKeyMetaData* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "storage.LocalStorageStorageKeyMetaData";
  }
  protected:
  explicit LocalStorageStorageKeyMetaData(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLastModifiedFieldNumber = 1,
    kSizeBytesFieldNumber = 2,
  };
  // required int64 last_modified = 1;
  bool has_last_modified() const;
  private:
  bool _internal_has_last_modified() const;
  public:
  void clear_last_modified();
  int64_t last_modified() const;
  void set_last_modified(int64_t value);
  private:
  int64_t _internal_last_modified() const;
  void _internal_set_last_modified(int64_t value);
  public:

  // required uint64 size_bytes = 2;
  bool has_size_bytes() const;
  private:
  bool _internal_has_size_bytes() const;
  public:
  void clear_size_bytes();
  uint64_t size_bytes() const;
  void set_size_bytes(uint64_t value);
  private:
  uint64_t _internal_size_bytes() const;
  void _internal_set_size_bytes(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:storage.LocalStorageStorageKeyMetaData)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int64_t last_modified_;
  uint64_t size_bytes_;
  friend struct ::TableStruct_local_5fstorage_5fdatabase_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LocalStorageStorageKeyMetaData

// required int64 last_modified = 1;
inline bool LocalStorageStorageKeyMetaData::_internal_has_last_modified() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool LocalStorageStorageKeyMetaData::has_last_modified() const {
  return _internal_has_last_modified();
}
inline void LocalStorageStorageKeyMetaData::clear_last_modified() {
  last_modified_ = int64_t{0};
  _has_bits_[0] &= ~0x00000001u;
}
inline int64_t LocalStorageStorageKeyMetaData::_internal_last_modified() const {
  return last_modified_;
}
inline int64_t LocalStorageStorageKeyMetaData::last_modified() const {
  // @@protoc_insertion_point(field_get:storage.LocalStorageStorageKeyMetaData.last_modified)
  return _internal_last_modified();
}
inline void LocalStorageStorageKeyMetaData::_internal_set_last_modified(int64_t value) {
  _has_bits_[0] |= 0x00000001u;
  last_modified_ = value;
}
inline void LocalStorageStorageKeyMetaData::set_last_modified(int64_t value) {
  _internal_set_last_modified(value);
  // @@protoc_insertion_point(field_set:storage.LocalStorageStorageKeyMetaData.last_modified)
}

// required uint64 size_bytes = 2;
inline bool LocalStorageStorageKeyMetaData::_internal_has_size_bytes() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool LocalStorageStorageKeyMetaData::has_size_bytes() const {
  return _internal_has_size_bytes();
}
inline void LocalStorageStorageKeyMetaData::clear_size_bytes() {
  size_bytes_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000002u;
}
inline uint64_t LocalStorageStorageKeyMetaData::_internal_size_bytes() const {
  return size_bytes_;
}
inline uint64_t LocalStorageStorageKeyMetaData::size_bytes() const {
  // @@protoc_insertion_point(field_get:storage.LocalStorageStorageKeyMetaData.size_bytes)
  return _internal_size_bytes();
}
inline void LocalStorageStorageKeyMetaData::_internal_set_size_bytes(uint64_t value) {
  _has_bits_[0] |= 0x00000002u;
  size_bytes_ = value;
}
inline void LocalStorageStorageKeyMetaData::set_size_bytes(uint64_t value) {
  _internal_set_size_bytes(value);
  // @@protoc_insertion_point(field_set:storage.LocalStorageStorageKeyMetaData.size_bytes)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace storage

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_local_5fstorage_5fdatabase_2eproto
