// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/feed/core/proto/v2/wire/action_diagnostic_info.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fdiagnostic_5finfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fdiagnostic_5finfo_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fdiagnostic_5finfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fdiagnostic_5finfo_2eproto {
  static const uint32_t offsets[];
};
namespace feedwire {
class ActionDiagnosticInfo;
struct ActionDiagnosticInfoDefaultTypeInternal;
extern ActionDiagnosticInfoDefaultTypeInternal _ActionDiagnosticInfo_default_instance_;
}  // namespace feedwire
PROTOBUF_NAMESPACE_OPEN
template<> ::feedwire::ActionDiagnosticInfo* Arena::CreateMaybeMessage<::feedwire::ActionDiagnosticInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace feedwire {

// ===================================================================

class ActionDiagnosticInfo final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:feedwire.ActionDiagnosticInfo) */ {
 public:
  inline ActionDiagnosticInfo() : ActionDiagnosticInfo(nullptr) {}
  ~ActionDiagnosticInfo() override;
  explicit PROTOBUF_CONSTEXPR ActionDiagnosticInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ActionDiagnosticInfo(const ActionDiagnosticInfo& from);
  ActionDiagnosticInfo(ActionDiagnosticInfo&& from) noexcept
    : ActionDiagnosticInfo() {
    *this = ::std::move(from);
  }

  inline ActionDiagnosticInfo& operator=(const ActionDiagnosticInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ActionDiagnosticInfo& operator=(ActionDiagnosticInfo&& from) noexcept {
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

  static const ActionDiagnosticInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const ActionDiagnosticInfo* internal_default_instance() {
    return reinterpret_cast<const ActionDiagnosticInfo*>(
               &_ActionDiagnosticInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ActionDiagnosticInfo& a, ActionDiagnosticInfo& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(ActionDiagnosticInfo* other) {
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
  void UnsafeArenaSwap(ActionDiagnosticInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ActionDiagnosticInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ActionDiagnosticInfo>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ActionDiagnosticInfo& from);
  void MergeFrom(const ActionDiagnosticInfo& from);
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
  void InternalSwap(ActionDiagnosticInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "feedwire.ActionDiagnosticInfo";
  }
  protected:
  explicit ActionDiagnosticInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kActionsRemainingFieldNumber = 1,
  };
  // optional int32 actions_remaining = 1;
  bool has_actions_remaining() const;
  private:
  bool _internal_has_actions_remaining() const;
  public:
  void clear_actions_remaining();
  int32_t actions_remaining() const;
  void set_actions_remaining(int32_t value);
  private:
  int32_t _internal_actions_remaining() const;
  void _internal_set_actions_remaining(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:feedwire.ActionDiagnosticInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int32_t actions_remaining_;
  friend struct ::TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fdiagnostic_5finfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ActionDiagnosticInfo

// optional int32 actions_remaining = 1;
inline bool ActionDiagnosticInfo::_internal_has_actions_remaining() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ActionDiagnosticInfo::has_actions_remaining() const {
  return _internal_has_actions_remaining();
}
inline void ActionDiagnosticInfo::clear_actions_remaining() {
  actions_remaining_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline int32_t ActionDiagnosticInfo::_internal_actions_remaining() const {
  return actions_remaining_;
}
inline int32_t ActionDiagnosticInfo::actions_remaining() const {
  // @@protoc_insertion_point(field_get:feedwire.ActionDiagnosticInfo.actions_remaining)
  return _internal_actions_remaining();
}
inline void ActionDiagnosticInfo::_internal_set_actions_remaining(int32_t value) {
  _has_bits_[0] |= 0x00000001u;
  actions_remaining_ = value;
}
inline void ActionDiagnosticInfo::set_actions_remaining(int32_t value) {
  _internal_set_actions_remaining(value);
  // @@protoc_insertion_point(field_set:feedwire.ActionDiagnosticInfo.actions_remaining)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace feedwire

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fdiagnostic_5finfo_2eproto
