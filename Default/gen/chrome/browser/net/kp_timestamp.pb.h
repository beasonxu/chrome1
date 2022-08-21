// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: kp_timestamp.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_kp_5ftimestamp_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_kp_5ftimestamp_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_kp_5ftimestamp_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_kp_5ftimestamp_2eproto {
  static const uint32_t offsets[];
};
namespace chrome_browser_key_pinning {
class KPTimestamp;
struct KPTimestampDefaultTypeInternal;
extern KPTimestampDefaultTypeInternal _KPTimestamp_default_instance_;
}  // namespace chrome_browser_key_pinning
PROTOBUF_NAMESPACE_OPEN
template<> ::chrome_browser_key_pinning::KPTimestamp* Arena::CreateMaybeMessage<::chrome_browser_key_pinning::KPTimestamp>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace chrome_browser_key_pinning {

// ===================================================================

class KPTimestamp final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:chrome_browser_key_pinning.KPTimestamp) */ {
 public:
  inline KPTimestamp() : KPTimestamp(nullptr) {}
  ~KPTimestamp() override;
  explicit PROTOBUF_CONSTEXPR KPTimestamp(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  KPTimestamp(const KPTimestamp& from);
  KPTimestamp(KPTimestamp&& from) noexcept
    : KPTimestamp() {
    *this = ::std::move(from);
  }

  inline KPTimestamp& operator=(const KPTimestamp& from) {
    CopyFrom(from);
    return *this;
  }
  inline KPTimestamp& operator=(KPTimestamp&& from) noexcept {
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

  static const KPTimestamp& default_instance() {
    return *internal_default_instance();
  }
  static inline const KPTimestamp* internal_default_instance() {
    return reinterpret_cast<const KPTimestamp*>(
               &_KPTimestamp_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(KPTimestamp& a, KPTimestamp& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(KPTimestamp* other) {
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
  void UnsafeArenaSwap(KPTimestamp* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  KPTimestamp* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<KPTimestamp>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const KPTimestamp& from);
  void MergeFrom(const KPTimestamp& from);
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
  void InternalSwap(KPTimestamp* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "chrome_browser_key_pinning.KPTimestamp";
  }
  protected:
  explicit KPTimestamp(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSecondsFieldNumber = 1,
    kNanosFieldNumber = 2,
  };
  // int64 seconds = 1;
  void clear_seconds();
  int64_t seconds() const;
  void set_seconds(int64_t value);
  private:
  int64_t _internal_seconds() const;
  void _internal_set_seconds(int64_t value);
  public:

  // int32 nanos = 2;
  void clear_nanos();
  int32_t nanos() const;
  void set_nanos(int32_t value);
  private:
  int32_t _internal_nanos() const;
  void _internal_set_nanos(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:chrome_browser_key_pinning.KPTimestamp)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int64_t seconds_;
  int32_t nanos_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_kp_5ftimestamp_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// KPTimestamp

// int64 seconds = 1;
inline void KPTimestamp::clear_seconds() {
  seconds_ = int64_t{0};
}
inline int64_t KPTimestamp::_internal_seconds() const {
  return seconds_;
}
inline int64_t KPTimestamp::seconds() const {
  // @@protoc_insertion_point(field_get:chrome_browser_key_pinning.KPTimestamp.seconds)
  return _internal_seconds();
}
inline void KPTimestamp::_internal_set_seconds(int64_t value) {
  
  seconds_ = value;
}
inline void KPTimestamp::set_seconds(int64_t value) {
  _internal_set_seconds(value);
  // @@protoc_insertion_point(field_set:chrome_browser_key_pinning.KPTimestamp.seconds)
}

// int32 nanos = 2;
inline void KPTimestamp::clear_nanos() {
  nanos_ = 0;
}
inline int32_t KPTimestamp::_internal_nanos() const {
  return nanos_;
}
inline int32_t KPTimestamp::nanos() const {
  // @@protoc_insertion_point(field_get:chrome_browser_key_pinning.KPTimestamp.nanos)
  return _internal_nanos();
}
inline void KPTimestamp::_internal_set_nanos(int32_t value) {
  
  nanos_ = value;
}
inline void KPTimestamp::set_nanos(int32_t value) {
  _internal_set_nanos(value);
  // @@protoc_insertion_point(field_set:chrome_browser_key_pinning.KPTimestamp.nanos)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace chrome_browser_key_pinning

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_kp_5ftimestamp_2eproto
