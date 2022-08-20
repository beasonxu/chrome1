// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/theme_specifics.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_components_2fsync_2fprotocol_2ftheme_5fspecifics_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_components_2fsync_2fprotocol_2ftheme_5fspecifics_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_components_2fsync_2fprotocol_2ftheme_5fspecifics_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_components_2fsync_2fprotocol_2ftheme_5fspecifics_2eproto {
  static const uint32_t offsets[];
};
namespace sync_pb {
class ThemeSpecifics;
struct ThemeSpecificsDefaultTypeInternal;
extern ThemeSpecificsDefaultTypeInternal _ThemeSpecifics_default_instance_;
class ThemeSpecifics_AutogeneratedTheme;
struct ThemeSpecifics_AutogeneratedThemeDefaultTypeInternal;
extern ThemeSpecifics_AutogeneratedThemeDefaultTypeInternal _ThemeSpecifics_AutogeneratedTheme_default_instance_;
}  // namespace sync_pb
PROTOBUF_NAMESPACE_OPEN
template<> ::sync_pb::ThemeSpecifics* Arena::CreateMaybeMessage<::sync_pb::ThemeSpecifics>(Arena*);
template<> ::sync_pb::ThemeSpecifics_AutogeneratedTheme* Arena::CreateMaybeMessage<::sync_pb::ThemeSpecifics_AutogeneratedTheme>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace sync_pb {

// ===================================================================

class ThemeSpecifics_AutogeneratedTheme final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:sync_pb.ThemeSpecifics.AutogeneratedTheme) */ {
 public:
  inline ThemeSpecifics_AutogeneratedTheme() : ThemeSpecifics_AutogeneratedTheme(nullptr) {}
  ~ThemeSpecifics_AutogeneratedTheme() override;
  explicit PROTOBUF_CONSTEXPR ThemeSpecifics_AutogeneratedTheme(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ThemeSpecifics_AutogeneratedTheme(const ThemeSpecifics_AutogeneratedTheme& from);
  ThemeSpecifics_AutogeneratedTheme(ThemeSpecifics_AutogeneratedTheme&& from) noexcept
    : ThemeSpecifics_AutogeneratedTheme() {
    *this = ::std::move(from);
  }

  inline ThemeSpecifics_AutogeneratedTheme& operator=(const ThemeSpecifics_AutogeneratedTheme& from) {
    CopyFrom(from);
    return *this;
  }
  inline ThemeSpecifics_AutogeneratedTheme& operator=(ThemeSpecifics_AutogeneratedTheme&& from) noexcept {
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

  static const ThemeSpecifics_AutogeneratedTheme& default_instance() {
    return *internal_default_instance();
  }
  static inline const ThemeSpecifics_AutogeneratedTheme* internal_default_instance() {
    return reinterpret_cast<const ThemeSpecifics_AutogeneratedTheme*>(
               &_ThemeSpecifics_AutogeneratedTheme_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ThemeSpecifics_AutogeneratedTheme& a, ThemeSpecifics_AutogeneratedTheme& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(ThemeSpecifics_AutogeneratedTheme* other) {
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
  void UnsafeArenaSwap(ThemeSpecifics_AutogeneratedTheme* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ThemeSpecifics_AutogeneratedTheme* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ThemeSpecifics_AutogeneratedTheme>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ThemeSpecifics_AutogeneratedTheme& from);
  void MergeFrom(const ThemeSpecifics_AutogeneratedTheme& from);
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
  void InternalSwap(ThemeSpecifics_AutogeneratedTheme* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sync_pb.ThemeSpecifics.AutogeneratedTheme";
  }
  protected:
  explicit ThemeSpecifics_AutogeneratedTheme(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kColorFieldNumber = 1,
  };
  // optional uint32 color = 1;
  bool has_color() const;
  private:
  bool _internal_has_color() const;
  public:
  void clear_color();
  uint32_t color() const;
  void set_color(uint32_t value);
  private:
  uint32_t _internal_color() const;
  void _internal_set_color(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:sync_pb.ThemeSpecifics.AutogeneratedTheme)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint32_t color_;
  friend struct ::TableStruct_components_2fsync_2fprotocol_2ftheme_5fspecifics_2eproto;
};
// -------------------------------------------------------------------

class ThemeSpecifics final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:sync_pb.ThemeSpecifics) */ {
 public:
  inline ThemeSpecifics() : ThemeSpecifics(nullptr) {}
  ~ThemeSpecifics() override;
  explicit PROTOBUF_CONSTEXPR ThemeSpecifics(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ThemeSpecifics(const ThemeSpecifics& from);
  ThemeSpecifics(ThemeSpecifics&& from) noexcept
    : ThemeSpecifics() {
    *this = ::std::move(from);
  }

  inline ThemeSpecifics& operator=(const ThemeSpecifics& from) {
    CopyFrom(from);
    return *this;
  }
  inline ThemeSpecifics& operator=(ThemeSpecifics&& from) noexcept {
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

  static const ThemeSpecifics& default_instance() {
    return *internal_default_instance();
  }
  static inline const ThemeSpecifics* internal_default_instance() {
    return reinterpret_cast<const ThemeSpecifics*>(
               &_ThemeSpecifics_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ThemeSpecifics& a, ThemeSpecifics& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(ThemeSpecifics* other) {
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
  void UnsafeArenaSwap(ThemeSpecifics* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ThemeSpecifics* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ThemeSpecifics>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ThemeSpecifics& from);
  void MergeFrom(const ThemeSpecifics& from);
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
  void InternalSwap(ThemeSpecifics* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sync_pb.ThemeSpecifics";
  }
  protected:
  explicit ThemeSpecifics(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef ThemeSpecifics_AutogeneratedTheme AutogeneratedTheme;

  // accessors -------------------------------------------------------

  enum : int {
    kCustomThemeNameFieldNumber = 3,
    kCustomThemeIdFieldNumber = 4,
    kCustomThemeUpdateUrlFieldNumber = 5,
    kAutogeneratedThemeFieldNumber = 6,
    kUseCustomThemeFieldNumber = 1,
    kUseSystemThemeByDefaultFieldNumber = 2,
  };
  // optional string custom_theme_name = 3;
  bool has_custom_theme_name() const;
  private:
  bool _internal_has_custom_theme_name() const;
  public:
  void clear_custom_theme_name();
  const std::string& custom_theme_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_custom_theme_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_custom_theme_name();
  PROTOBUF_NODISCARD std::string* release_custom_theme_name();
  void set_allocated_custom_theme_name(std::string* custom_theme_name);
  private:
  const std::string& _internal_custom_theme_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_custom_theme_name(const std::string& value);
  std::string* _internal_mutable_custom_theme_name();
  public:

  // optional string custom_theme_id = 4;
  bool has_custom_theme_id() const;
  private:
  bool _internal_has_custom_theme_id() const;
  public:
  void clear_custom_theme_id();
  const std::string& custom_theme_id() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_custom_theme_id(ArgT0&& arg0, ArgT... args);
  std::string* mutable_custom_theme_id();
  PROTOBUF_NODISCARD std::string* release_custom_theme_id();
  void set_allocated_custom_theme_id(std::string* custom_theme_id);
  private:
  const std::string& _internal_custom_theme_id() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_custom_theme_id(const std::string& value);
  std::string* _internal_mutable_custom_theme_id();
  public:

  // optional string custom_theme_update_url = 5;
  bool has_custom_theme_update_url() const;
  private:
  bool _internal_has_custom_theme_update_url() const;
  public:
  void clear_custom_theme_update_url();
  const std::string& custom_theme_update_url() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_custom_theme_update_url(ArgT0&& arg0, ArgT... args);
  std::string* mutable_custom_theme_update_url();
  PROTOBUF_NODISCARD std::string* release_custom_theme_update_url();
  void set_allocated_custom_theme_update_url(std::string* custom_theme_update_url);
  private:
  const std::string& _internal_custom_theme_update_url() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_custom_theme_update_url(const std::string& value);
  std::string* _internal_mutable_custom_theme_update_url();
  public:

  // optional .sync_pb.ThemeSpecifics.AutogeneratedTheme autogenerated_theme = 6;
  bool has_autogenerated_theme() const;
  private:
  bool _internal_has_autogenerated_theme() const;
  public:
  void clear_autogenerated_theme();
  const ::sync_pb::ThemeSpecifics_AutogeneratedTheme& autogenerated_theme() const;
  PROTOBUF_NODISCARD ::sync_pb::ThemeSpecifics_AutogeneratedTheme* release_autogenerated_theme();
  ::sync_pb::ThemeSpecifics_AutogeneratedTheme* mutable_autogenerated_theme();
  void set_allocated_autogenerated_theme(::sync_pb::ThemeSpecifics_AutogeneratedTheme* autogenerated_theme);
  private:
  const ::sync_pb::ThemeSpecifics_AutogeneratedTheme& _internal_autogenerated_theme() const;
  ::sync_pb::ThemeSpecifics_AutogeneratedTheme* _internal_mutable_autogenerated_theme();
  public:
  void unsafe_arena_set_allocated_autogenerated_theme(
      ::sync_pb::ThemeSpecifics_AutogeneratedTheme* autogenerated_theme);
  ::sync_pb::ThemeSpecifics_AutogeneratedTheme* unsafe_arena_release_autogenerated_theme();

  // optional bool use_custom_theme = 1;
  bool has_use_custom_theme() const;
  private:
  bool _internal_has_use_custom_theme() const;
  public:
  void clear_use_custom_theme();
  bool use_custom_theme() const;
  void set_use_custom_theme(bool value);
  private:
  bool _internal_use_custom_theme() const;
  void _internal_set_use_custom_theme(bool value);
  public:

  // optional bool use_system_theme_by_default = 2;
  bool has_use_system_theme_by_default() const;
  private:
  bool _internal_has_use_system_theme_by_default() const;
  public:
  void clear_use_system_theme_by_default();
  bool use_system_theme_by_default() const;
  void set_use_system_theme_by_default(bool value);
  private:
  bool _internal_use_system_theme_by_default() const;
  void _internal_set_use_system_theme_by_default(bool value);
  public:

  // @@protoc_insertion_point(class_scope:sync_pb.ThemeSpecifics)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr custom_theme_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr custom_theme_id_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr custom_theme_update_url_;
  ::sync_pb::ThemeSpecifics_AutogeneratedTheme* autogenerated_theme_;
  bool use_custom_theme_;
  bool use_system_theme_by_default_;
  friend struct ::TableStruct_components_2fsync_2fprotocol_2ftheme_5fspecifics_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ThemeSpecifics_AutogeneratedTheme

// optional uint32 color = 1;
inline bool ThemeSpecifics_AutogeneratedTheme::_internal_has_color() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ThemeSpecifics_AutogeneratedTheme::has_color() const {
  return _internal_has_color();
}
inline void ThemeSpecifics_AutogeneratedTheme::clear_color() {
  color_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline uint32_t ThemeSpecifics_AutogeneratedTheme::_internal_color() const {
  return color_;
}
inline uint32_t ThemeSpecifics_AutogeneratedTheme::color() const {
  // @@protoc_insertion_point(field_get:sync_pb.ThemeSpecifics.AutogeneratedTheme.color)
  return _internal_color();
}
inline void ThemeSpecifics_AutogeneratedTheme::_internal_set_color(uint32_t value) {
  _has_bits_[0] |= 0x00000001u;
  color_ = value;
}
inline void ThemeSpecifics_AutogeneratedTheme::set_color(uint32_t value) {
  _internal_set_color(value);
  // @@protoc_insertion_point(field_set:sync_pb.ThemeSpecifics.AutogeneratedTheme.color)
}

// -------------------------------------------------------------------

// ThemeSpecifics

// optional bool use_custom_theme = 1;
inline bool ThemeSpecifics::_internal_has_use_custom_theme() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool ThemeSpecifics::has_use_custom_theme() const {
  return _internal_has_use_custom_theme();
}
inline void ThemeSpecifics::clear_use_custom_theme() {
  use_custom_theme_ = false;
  _has_bits_[0] &= ~0x00000010u;
}
inline bool ThemeSpecifics::_internal_use_custom_theme() const {
  return use_custom_theme_;
}
inline bool ThemeSpecifics::use_custom_theme() const {
  // @@protoc_insertion_point(field_get:sync_pb.ThemeSpecifics.use_custom_theme)
  return _internal_use_custom_theme();
}
inline void ThemeSpecifics::_internal_set_use_custom_theme(bool value) {
  _has_bits_[0] |= 0x00000010u;
  use_custom_theme_ = value;
}
inline void ThemeSpecifics::set_use_custom_theme(bool value) {
  _internal_set_use_custom_theme(value);
  // @@protoc_insertion_point(field_set:sync_pb.ThemeSpecifics.use_custom_theme)
}

// optional bool use_system_theme_by_default = 2;
inline bool ThemeSpecifics::_internal_has_use_system_theme_by_default() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool ThemeSpecifics::has_use_system_theme_by_default() const {
  return _internal_has_use_system_theme_by_default();
}
inline void ThemeSpecifics::clear_use_system_theme_by_default() {
  use_system_theme_by_default_ = false;
  _has_bits_[0] &= ~0x00000020u;
}
inline bool ThemeSpecifics::_internal_use_system_theme_by_default() const {
  return use_system_theme_by_default_;
}
inline bool ThemeSpecifics::use_system_theme_by_default() const {
  // @@protoc_insertion_point(field_get:sync_pb.ThemeSpecifics.use_system_theme_by_default)
  return _internal_use_system_theme_by_default();
}
inline void ThemeSpecifics::_internal_set_use_system_theme_by_default(bool value) {
  _has_bits_[0] |= 0x00000020u;
  use_system_theme_by_default_ = value;
}
inline void ThemeSpecifics::set_use_system_theme_by_default(bool value) {
  _internal_set_use_system_theme_by_default(value);
  // @@protoc_insertion_point(field_set:sync_pb.ThemeSpecifics.use_system_theme_by_default)
}

// optional string custom_theme_name = 3;
inline bool ThemeSpecifics::_internal_has_custom_theme_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ThemeSpecifics::has_custom_theme_name() const {
  return _internal_has_custom_theme_name();
}
inline void ThemeSpecifics::clear_custom_theme_name() {
  custom_theme_name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ThemeSpecifics::custom_theme_name() const {
  // @@protoc_insertion_point(field_get:sync_pb.ThemeSpecifics.custom_theme_name)
  return _internal_custom_theme_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ThemeSpecifics::set_custom_theme_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 custom_theme_name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:sync_pb.ThemeSpecifics.custom_theme_name)
}
inline std::string* ThemeSpecifics::mutable_custom_theme_name() {
  std::string* _s = _internal_mutable_custom_theme_name();
  // @@protoc_insertion_point(field_mutable:sync_pb.ThemeSpecifics.custom_theme_name)
  return _s;
}
inline const std::string& ThemeSpecifics::_internal_custom_theme_name() const {
  return custom_theme_name_.Get();
}
inline void ThemeSpecifics::_internal_set_custom_theme_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  custom_theme_name_.Set(value, GetArenaForAllocation());
}
inline std::string* ThemeSpecifics::_internal_mutable_custom_theme_name() {
  _has_bits_[0] |= 0x00000001u;
  return custom_theme_name_.Mutable(GetArenaForAllocation());
}
inline std::string* ThemeSpecifics::release_custom_theme_name() {
  // @@protoc_insertion_point(field_release:sync_pb.ThemeSpecifics.custom_theme_name)
  if (!_internal_has_custom_theme_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = custom_theme_name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (custom_theme_name_.IsDefault()) {
    custom_theme_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ThemeSpecifics::set_allocated_custom_theme_name(std::string* custom_theme_name) {
  if (custom_theme_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  custom_theme_name_.SetAllocated(custom_theme_name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (custom_theme_name_.IsDefault()) {
    custom_theme_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ThemeSpecifics.custom_theme_name)
}

// optional string custom_theme_id = 4;
inline bool ThemeSpecifics::_internal_has_custom_theme_id() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ThemeSpecifics::has_custom_theme_id() const {
  return _internal_has_custom_theme_id();
}
inline void ThemeSpecifics::clear_custom_theme_id() {
  custom_theme_id_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& ThemeSpecifics::custom_theme_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.ThemeSpecifics.custom_theme_id)
  return _internal_custom_theme_id();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ThemeSpecifics::set_custom_theme_id(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 custom_theme_id_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:sync_pb.ThemeSpecifics.custom_theme_id)
}
inline std::string* ThemeSpecifics::mutable_custom_theme_id() {
  std::string* _s = _internal_mutable_custom_theme_id();
  // @@protoc_insertion_point(field_mutable:sync_pb.ThemeSpecifics.custom_theme_id)
  return _s;
}
inline const std::string& ThemeSpecifics::_internal_custom_theme_id() const {
  return custom_theme_id_.Get();
}
inline void ThemeSpecifics::_internal_set_custom_theme_id(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  custom_theme_id_.Set(value, GetArenaForAllocation());
}
inline std::string* ThemeSpecifics::_internal_mutable_custom_theme_id() {
  _has_bits_[0] |= 0x00000002u;
  return custom_theme_id_.Mutable(GetArenaForAllocation());
}
inline std::string* ThemeSpecifics::release_custom_theme_id() {
  // @@protoc_insertion_point(field_release:sync_pb.ThemeSpecifics.custom_theme_id)
  if (!_internal_has_custom_theme_id()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = custom_theme_id_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (custom_theme_id_.IsDefault()) {
    custom_theme_id_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ThemeSpecifics::set_allocated_custom_theme_id(std::string* custom_theme_id) {
  if (custom_theme_id != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  custom_theme_id_.SetAllocated(custom_theme_id, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (custom_theme_id_.IsDefault()) {
    custom_theme_id_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ThemeSpecifics.custom_theme_id)
}

// optional string custom_theme_update_url = 5;
inline bool ThemeSpecifics::_internal_has_custom_theme_update_url() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ThemeSpecifics::has_custom_theme_update_url() const {
  return _internal_has_custom_theme_update_url();
}
inline void ThemeSpecifics::clear_custom_theme_update_url() {
  custom_theme_update_url_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000004u;
}
inline const std::string& ThemeSpecifics::custom_theme_update_url() const {
  // @@protoc_insertion_point(field_get:sync_pb.ThemeSpecifics.custom_theme_update_url)
  return _internal_custom_theme_update_url();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ThemeSpecifics::set_custom_theme_update_url(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000004u;
 custom_theme_update_url_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:sync_pb.ThemeSpecifics.custom_theme_update_url)
}
inline std::string* ThemeSpecifics::mutable_custom_theme_update_url() {
  std::string* _s = _internal_mutable_custom_theme_update_url();
  // @@protoc_insertion_point(field_mutable:sync_pb.ThemeSpecifics.custom_theme_update_url)
  return _s;
}
inline const std::string& ThemeSpecifics::_internal_custom_theme_update_url() const {
  return custom_theme_update_url_.Get();
}
inline void ThemeSpecifics::_internal_set_custom_theme_update_url(const std::string& value) {
  _has_bits_[0] |= 0x00000004u;
  custom_theme_update_url_.Set(value, GetArenaForAllocation());
}
inline std::string* ThemeSpecifics::_internal_mutable_custom_theme_update_url() {
  _has_bits_[0] |= 0x00000004u;
  return custom_theme_update_url_.Mutable(GetArenaForAllocation());
}
inline std::string* ThemeSpecifics::release_custom_theme_update_url() {
  // @@protoc_insertion_point(field_release:sync_pb.ThemeSpecifics.custom_theme_update_url)
  if (!_internal_has_custom_theme_update_url()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000004u;
  auto* p = custom_theme_update_url_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (custom_theme_update_url_.IsDefault()) {
    custom_theme_update_url_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ThemeSpecifics::set_allocated_custom_theme_update_url(std::string* custom_theme_update_url) {
  if (custom_theme_update_url != nullptr) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  custom_theme_update_url_.SetAllocated(custom_theme_update_url, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (custom_theme_update_url_.IsDefault()) {
    custom_theme_update_url_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ThemeSpecifics.custom_theme_update_url)
}

// optional .sync_pb.ThemeSpecifics.AutogeneratedTheme autogenerated_theme = 6;
inline bool ThemeSpecifics::_internal_has_autogenerated_theme() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  PROTOBUF_ASSUME(!value || autogenerated_theme_ != nullptr);
  return value;
}
inline bool ThemeSpecifics::has_autogenerated_theme() const {
  return _internal_has_autogenerated_theme();
}
inline void ThemeSpecifics::clear_autogenerated_theme() {
  if (autogenerated_theme_ != nullptr) autogenerated_theme_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
inline const ::sync_pb::ThemeSpecifics_AutogeneratedTheme& ThemeSpecifics::_internal_autogenerated_theme() const {
  const ::sync_pb::ThemeSpecifics_AutogeneratedTheme* p = autogenerated_theme_;
  return p != nullptr ? *p : reinterpret_cast<const ::sync_pb::ThemeSpecifics_AutogeneratedTheme&>(
      ::sync_pb::_ThemeSpecifics_AutogeneratedTheme_default_instance_);
}
inline const ::sync_pb::ThemeSpecifics_AutogeneratedTheme& ThemeSpecifics::autogenerated_theme() const {
  // @@protoc_insertion_point(field_get:sync_pb.ThemeSpecifics.autogenerated_theme)
  return _internal_autogenerated_theme();
}
inline void ThemeSpecifics::unsafe_arena_set_allocated_autogenerated_theme(
    ::sync_pb::ThemeSpecifics_AutogeneratedTheme* autogenerated_theme) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(autogenerated_theme_);
  }
  autogenerated_theme_ = autogenerated_theme;
  if (autogenerated_theme) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:sync_pb.ThemeSpecifics.autogenerated_theme)
}
inline ::sync_pb::ThemeSpecifics_AutogeneratedTheme* ThemeSpecifics::release_autogenerated_theme() {
  _has_bits_[0] &= ~0x00000008u;
  ::sync_pb::ThemeSpecifics_AutogeneratedTheme* temp = autogenerated_theme_;
  autogenerated_theme_ = nullptr;
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
inline ::sync_pb::ThemeSpecifics_AutogeneratedTheme* ThemeSpecifics::unsafe_arena_release_autogenerated_theme() {
  // @@protoc_insertion_point(field_release:sync_pb.ThemeSpecifics.autogenerated_theme)
  _has_bits_[0] &= ~0x00000008u;
  ::sync_pb::ThemeSpecifics_AutogeneratedTheme* temp = autogenerated_theme_;
  autogenerated_theme_ = nullptr;
  return temp;
}
inline ::sync_pb::ThemeSpecifics_AutogeneratedTheme* ThemeSpecifics::_internal_mutable_autogenerated_theme() {
  _has_bits_[0] |= 0x00000008u;
  if (autogenerated_theme_ == nullptr) {
    auto* p = CreateMaybeMessage<::sync_pb::ThemeSpecifics_AutogeneratedTheme>(GetArenaForAllocation());
    autogenerated_theme_ = p;
  }
  return autogenerated_theme_;
}
inline ::sync_pb::ThemeSpecifics_AutogeneratedTheme* ThemeSpecifics::mutable_autogenerated_theme() {
  ::sync_pb::ThemeSpecifics_AutogeneratedTheme* _msg = _internal_mutable_autogenerated_theme();
  // @@protoc_insertion_point(field_mutable:sync_pb.ThemeSpecifics.autogenerated_theme)
  return _msg;
}
inline void ThemeSpecifics::set_allocated_autogenerated_theme(::sync_pb::ThemeSpecifics_AutogeneratedTheme* autogenerated_theme) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete autogenerated_theme_;
  }
  if (autogenerated_theme) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(autogenerated_theme);
    if (message_arena != submessage_arena) {
      autogenerated_theme = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, autogenerated_theme, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  autogenerated_theme_ = autogenerated_theme;
  // @@protoc_insertion_point(field_set_allocated:sync_pb.ThemeSpecifics.autogenerated_theme)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_components_2fsync_2fprotocol_2ftheme_5fspecifics_2eproto
