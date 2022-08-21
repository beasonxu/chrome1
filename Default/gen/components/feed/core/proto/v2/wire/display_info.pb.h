// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/feed/core/proto/v2/wire/display_info.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fdisplay_5finfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fdisplay_5finfo_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fdisplay_5finfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fdisplay_5finfo_2eproto {
  static const uint32_t offsets[];
};
namespace feedwire {
class DisplayInfo;
struct DisplayInfoDefaultTypeInternal;
extern DisplayInfoDefaultTypeInternal _DisplayInfo_default_instance_;
}  // namespace feedwire
PROTOBUF_NAMESPACE_OPEN
template<> ::feedwire::DisplayInfo* Arena::CreateMaybeMessage<::feedwire::DisplayInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace feedwire {

// ===================================================================

class DisplayInfo final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:feedwire.DisplayInfo) */ {
 public:
  inline DisplayInfo() : DisplayInfo(nullptr) {}
  ~DisplayInfo() override;
  explicit PROTOBUF_CONSTEXPR DisplayInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  DisplayInfo(const DisplayInfo& from);
  DisplayInfo(DisplayInfo&& from) noexcept
    : DisplayInfo() {
    *this = ::std::move(from);
  }

  inline DisplayInfo& operator=(const DisplayInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline DisplayInfo& operator=(DisplayInfo&& from) noexcept {
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

  static const DisplayInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const DisplayInfo* internal_default_instance() {
    return reinterpret_cast<const DisplayInfo*>(
               &_DisplayInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DisplayInfo& a, DisplayInfo& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(DisplayInfo* other) {
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
  void UnsafeArenaSwap(DisplayInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  DisplayInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<DisplayInfo>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const DisplayInfo& from);
  void MergeFrom(const DisplayInfo& from);
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
  void InternalSwap(DisplayInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "feedwire.DisplayInfo";
  }
  protected:
  explicit DisplayInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kScreenDensityFieldNumber = 1,
    kScreenWidthInPixelsFieldNumber = 2,
    kScreenHeightInPixelsFieldNumber = 3,
  };
  // optional float screen_density = 1;
  bool has_screen_density() const;
  private:
  bool _internal_has_screen_density() const;
  public:
  void clear_screen_density();
  float screen_density() const;
  void set_screen_density(float value);
  private:
  float _internal_screen_density() const;
  void _internal_set_screen_density(float value);
  public:

  // optional uint32 screen_width_in_pixels = 2;
  bool has_screen_width_in_pixels() const;
  private:
  bool _internal_has_screen_width_in_pixels() const;
  public:
  void clear_screen_width_in_pixels();
  uint32_t screen_width_in_pixels() const;
  void set_screen_width_in_pixels(uint32_t value);
  private:
  uint32_t _internal_screen_width_in_pixels() const;
  void _internal_set_screen_width_in_pixels(uint32_t value);
  public:

  // optional uint32 screen_height_in_pixels = 3;
  bool has_screen_height_in_pixels() const;
  private:
  bool _internal_has_screen_height_in_pixels() const;
  public:
  void clear_screen_height_in_pixels();
  uint32_t screen_height_in_pixels() const;
  void set_screen_height_in_pixels(uint32_t value);
  private:
  uint32_t _internal_screen_height_in_pixels() const;
  void _internal_set_screen_height_in_pixels(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:feedwire.DisplayInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  float screen_density_;
  uint32_t screen_width_in_pixels_;
  uint32_t screen_height_in_pixels_;
  friend struct ::TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fdisplay_5finfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DisplayInfo

// optional float screen_density = 1;
inline bool DisplayInfo::_internal_has_screen_density() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool DisplayInfo::has_screen_density() const {
  return _internal_has_screen_density();
}
inline void DisplayInfo::clear_screen_density() {
  screen_density_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline float DisplayInfo::_internal_screen_density() const {
  return screen_density_;
}
inline float DisplayInfo::screen_density() const {
  // @@protoc_insertion_point(field_get:feedwire.DisplayInfo.screen_density)
  return _internal_screen_density();
}
inline void DisplayInfo::_internal_set_screen_density(float value) {
  _has_bits_[0] |= 0x00000001u;
  screen_density_ = value;
}
inline void DisplayInfo::set_screen_density(float value) {
  _internal_set_screen_density(value);
  // @@protoc_insertion_point(field_set:feedwire.DisplayInfo.screen_density)
}

// optional uint32 screen_width_in_pixels = 2;
inline bool DisplayInfo::_internal_has_screen_width_in_pixels() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool DisplayInfo::has_screen_width_in_pixels() const {
  return _internal_has_screen_width_in_pixels();
}
inline void DisplayInfo::clear_screen_width_in_pixels() {
  screen_width_in_pixels_ = 0u;
  _has_bits_[0] &= ~0x00000002u;
}
inline uint32_t DisplayInfo::_internal_screen_width_in_pixels() const {
  return screen_width_in_pixels_;
}
inline uint32_t DisplayInfo::screen_width_in_pixels() const {
  // @@protoc_insertion_point(field_get:feedwire.DisplayInfo.screen_width_in_pixels)
  return _internal_screen_width_in_pixels();
}
inline void DisplayInfo::_internal_set_screen_width_in_pixels(uint32_t value) {
  _has_bits_[0] |= 0x00000002u;
  screen_width_in_pixels_ = value;
}
inline void DisplayInfo::set_screen_width_in_pixels(uint32_t value) {
  _internal_set_screen_width_in_pixels(value);
  // @@protoc_insertion_point(field_set:feedwire.DisplayInfo.screen_width_in_pixels)
}

// optional uint32 screen_height_in_pixels = 3;
inline bool DisplayInfo::_internal_has_screen_height_in_pixels() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool DisplayInfo::has_screen_height_in_pixels() const {
  return _internal_has_screen_height_in_pixels();
}
inline void DisplayInfo::clear_screen_height_in_pixels() {
  screen_height_in_pixels_ = 0u;
  _has_bits_[0] &= ~0x00000004u;
}
inline uint32_t DisplayInfo::_internal_screen_height_in_pixels() const {
  return screen_height_in_pixels_;
}
inline uint32_t DisplayInfo::screen_height_in_pixels() const {
  // @@protoc_insertion_point(field_get:feedwire.DisplayInfo.screen_height_in_pixels)
  return _internal_screen_height_in_pixels();
}
inline void DisplayInfo::_internal_set_screen_height_in_pixels(uint32_t value) {
  _has_bits_[0] |= 0x00000004u;
  screen_height_in_pixels_ = value;
}
inline void DisplayInfo::set_screen_height_in_pixels(uint32_t value) {
  _internal_set_screen_height_in_pixels(value);
  // @@protoc_insertion_point(field_set:feedwire.DisplayInfo.screen_height_in_pixels)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace feedwire

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fdisplay_5finfo_2eproto
