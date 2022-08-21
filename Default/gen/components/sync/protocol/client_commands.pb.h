// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/sync/protocol/client_commands.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_components_2fsync_2fprotocol_2fclient_5fcommands_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_components_2fsync_2fprotocol_2fclient_5fcommands_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_components_2fsync_2fprotocol_2fclient_5fcommands_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_components_2fsync_2fprotocol_2fclient_5fcommands_2eproto {
  static const uint32_t offsets[];
};
namespace sync_pb {
class ClientCommand;
struct ClientCommandDefaultTypeInternal;
extern ClientCommandDefaultTypeInternal _ClientCommand_default_instance_;
class CustomNudgeDelay;
struct CustomNudgeDelayDefaultTypeInternal;
extern CustomNudgeDelayDefaultTypeInternal _CustomNudgeDelay_default_instance_;
}  // namespace sync_pb
PROTOBUF_NAMESPACE_OPEN
template<> ::sync_pb::ClientCommand* Arena::CreateMaybeMessage<::sync_pb::ClientCommand>(Arena*);
template<> ::sync_pb::CustomNudgeDelay* Arena::CreateMaybeMessage<::sync_pb::CustomNudgeDelay>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace sync_pb {

// ===================================================================

class CustomNudgeDelay final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:sync_pb.CustomNudgeDelay) */ {
 public:
  inline CustomNudgeDelay() : CustomNudgeDelay(nullptr) {}
  ~CustomNudgeDelay() override;
  explicit PROTOBUF_CONSTEXPR CustomNudgeDelay(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CustomNudgeDelay(const CustomNudgeDelay& from);
  CustomNudgeDelay(CustomNudgeDelay&& from) noexcept
    : CustomNudgeDelay() {
    *this = ::std::move(from);
  }

  inline CustomNudgeDelay& operator=(const CustomNudgeDelay& from) {
    CopyFrom(from);
    return *this;
  }
  inline CustomNudgeDelay& operator=(CustomNudgeDelay&& from) noexcept {
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

  static const CustomNudgeDelay& default_instance() {
    return *internal_default_instance();
  }
  static inline const CustomNudgeDelay* internal_default_instance() {
    return reinterpret_cast<const CustomNudgeDelay*>(
               &_CustomNudgeDelay_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CustomNudgeDelay& a, CustomNudgeDelay& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(CustomNudgeDelay* other) {
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
  void UnsafeArenaSwap(CustomNudgeDelay* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CustomNudgeDelay* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CustomNudgeDelay>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const CustomNudgeDelay& from);
  void MergeFrom(const CustomNudgeDelay& from);
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
  void InternalSwap(CustomNudgeDelay* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sync_pb.CustomNudgeDelay";
  }
  protected:
  explicit CustomNudgeDelay(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDatatypeIdFieldNumber = 1,
    kDelayMsFieldNumber = 2,
  };
  // optional int32 datatype_id = 1;
  bool has_datatype_id() const;
  private:
  bool _internal_has_datatype_id() const;
  public:
  void clear_datatype_id();
  int32_t datatype_id() const;
  void set_datatype_id(int32_t value);
  private:
  int32_t _internal_datatype_id() const;
  void _internal_set_datatype_id(int32_t value);
  public:

  // optional int32 delay_ms = 2;
  bool has_delay_ms() const;
  private:
  bool _internal_has_delay_ms() const;
  public:
  void clear_delay_ms();
  int32_t delay_ms() const;
  void set_delay_ms(int32_t value);
  private:
  int32_t _internal_delay_ms() const;
  void _internal_set_delay_ms(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:sync_pb.CustomNudgeDelay)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int32_t datatype_id_;
  int32_t delay_ms_;
  friend struct ::TableStruct_components_2fsync_2fprotocol_2fclient_5fcommands_2eproto;
};
// -------------------------------------------------------------------

class ClientCommand final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:sync_pb.ClientCommand) */ {
 public:
  inline ClientCommand() : ClientCommand(nullptr) {}
  ~ClientCommand() override;
  explicit PROTOBUF_CONSTEXPR ClientCommand(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ClientCommand(const ClientCommand& from);
  ClientCommand(ClientCommand&& from) noexcept
    : ClientCommand() {
    *this = ::std::move(from);
  }

  inline ClientCommand& operator=(const ClientCommand& from) {
    CopyFrom(from);
    return *this;
  }
  inline ClientCommand& operator=(ClientCommand&& from) noexcept {
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

  static const ClientCommand& default_instance() {
    return *internal_default_instance();
  }
  static inline const ClientCommand* internal_default_instance() {
    return reinterpret_cast<const ClientCommand*>(
               &_ClientCommand_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ClientCommand& a, ClientCommand& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(ClientCommand* other) {
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
  void UnsafeArenaSwap(ClientCommand* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ClientCommand* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ClientCommand>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ClientCommand& from);
  void MergeFrom(const ClientCommand& from);
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
  void InternalSwap(ClientCommand* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "sync_pb.ClientCommand";
  }
  protected:
  explicit ClientCommand(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCustomNudgeDelaysFieldNumber = 8,
    kSetSyncPollIntervalFieldNumber = 1,
    kSetSyncLongPollIntervalFieldNumber = 2,
    kMaxCommitBatchSizeFieldNumber = 3,
    kSessionsCommitDelaySecondsFieldNumber = 4,
    kThrottleDelaySecondsFieldNumber = 5,
    kClientInvalidationHintBufferSizeFieldNumber = 6,
    kGuRetryDelaySecondsFieldNumber = 7,
    kExtensionTypesMaxTokensFieldNumber = 9,
    kExtensionTypesRefillIntervalSecondsFieldNumber = 10,
    kExtensionTypesDepletedQuotaNudgeDelaySecondsFieldNumber = 11,
  };
  // repeated .sync_pb.CustomNudgeDelay custom_nudge_delays = 8;
  int custom_nudge_delays_size() const;
  private:
  int _internal_custom_nudge_delays_size() const;
  public:
  void clear_custom_nudge_delays();
  ::sync_pb::CustomNudgeDelay* mutable_custom_nudge_delays(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sync_pb::CustomNudgeDelay >*
      mutable_custom_nudge_delays();
  private:
  const ::sync_pb::CustomNudgeDelay& _internal_custom_nudge_delays(int index) const;
  ::sync_pb::CustomNudgeDelay* _internal_add_custom_nudge_delays();
  public:
  const ::sync_pb::CustomNudgeDelay& custom_nudge_delays(int index) const;
  ::sync_pb::CustomNudgeDelay* add_custom_nudge_delays();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sync_pb::CustomNudgeDelay >&
      custom_nudge_delays() const;

  // optional int32 set_sync_poll_interval = 1;
  bool has_set_sync_poll_interval() const;
  private:
  bool _internal_has_set_sync_poll_interval() const;
  public:
  void clear_set_sync_poll_interval();
  int32_t set_sync_poll_interval() const;
  void set_set_sync_poll_interval(int32_t value);
  private:
  int32_t _internal_set_sync_poll_interval() const;
  void _internal_set_set_sync_poll_interval(int32_t value);
  public:

  // optional int32 set_sync_long_poll_interval = 2 [deprecated = true];
  PROTOBUF_DEPRECATED bool has_set_sync_long_poll_interval() const;
  private:
  bool _internal_has_set_sync_long_poll_interval() const;
  public:
  PROTOBUF_DEPRECATED void clear_set_sync_long_poll_interval();
  PROTOBUF_DEPRECATED int32_t set_sync_long_poll_interval() const;
  PROTOBUF_DEPRECATED void set_set_sync_long_poll_interval(int32_t value);
  private:
  int32_t _internal_set_sync_long_poll_interval() const;
  void _internal_set_set_sync_long_poll_interval(int32_t value);
  public:

  // optional int32 max_commit_batch_size = 3;
  bool has_max_commit_batch_size() const;
  private:
  bool _internal_has_max_commit_batch_size() const;
  public:
  void clear_max_commit_batch_size();
  int32_t max_commit_batch_size() const;
  void set_max_commit_batch_size(int32_t value);
  private:
  int32_t _internal_max_commit_batch_size() const;
  void _internal_set_max_commit_batch_size(int32_t value);
  public:

  // optional int32 sessions_commit_delay_seconds = 4;
  bool has_sessions_commit_delay_seconds() const;
  private:
  bool _internal_has_sessions_commit_delay_seconds() const;
  public:
  void clear_sessions_commit_delay_seconds();
  int32_t sessions_commit_delay_seconds() const;
  void set_sessions_commit_delay_seconds(int32_t value);
  private:
  int32_t _internal_sessions_commit_delay_seconds() const;
  void _internal_set_sessions_commit_delay_seconds(int32_t value);
  public:

  // optional int32 throttle_delay_seconds = 5;
  bool has_throttle_delay_seconds() const;
  private:
  bool _internal_has_throttle_delay_seconds() const;
  public:
  void clear_throttle_delay_seconds();
  int32_t throttle_delay_seconds() const;
  void set_throttle_delay_seconds(int32_t value);
  private:
  int32_t _internal_throttle_delay_seconds() const;
  void _internal_set_throttle_delay_seconds(int32_t value);
  public:

  // optional int32 client_invalidation_hint_buffer_size = 6;
  bool has_client_invalidation_hint_buffer_size() const;
  private:
  bool _internal_has_client_invalidation_hint_buffer_size() const;
  public:
  void clear_client_invalidation_hint_buffer_size();
  int32_t client_invalidation_hint_buffer_size() const;
  void set_client_invalidation_hint_buffer_size(int32_t value);
  private:
  int32_t _internal_client_invalidation_hint_buffer_size() const;
  void _internal_set_client_invalidation_hint_buffer_size(int32_t value);
  public:

  // optional int32 gu_retry_delay_seconds = 7;
  bool has_gu_retry_delay_seconds() const;
  private:
  bool _internal_has_gu_retry_delay_seconds() const;
  public:
  void clear_gu_retry_delay_seconds();
  int32_t gu_retry_delay_seconds() const;
  void set_gu_retry_delay_seconds(int32_t value);
  private:
  int32_t _internal_gu_retry_delay_seconds() const;
  void _internal_set_gu_retry_delay_seconds(int32_t value);
  public:

  // optional int32 extension_types_max_tokens = 9;
  bool has_extension_types_max_tokens() const;
  private:
  bool _internal_has_extension_types_max_tokens() const;
  public:
  void clear_extension_types_max_tokens();
  int32_t extension_types_max_tokens() const;
  void set_extension_types_max_tokens(int32_t value);
  private:
  int32_t _internal_extension_types_max_tokens() const;
  void _internal_set_extension_types_max_tokens(int32_t value);
  public:

  // optional int32 extension_types_refill_interval_seconds = 10;
  bool has_extension_types_refill_interval_seconds() const;
  private:
  bool _internal_has_extension_types_refill_interval_seconds() const;
  public:
  void clear_extension_types_refill_interval_seconds();
  int32_t extension_types_refill_interval_seconds() const;
  void set_extension_types_refill_interval_seconds(int32_t value);
  private:
  int32_t _internal_extension_types_refill_interval_seconds() const;
  void _internal_set_extension_types_refill_interval_seconds(int32_t value);
  public:

  // optional int32 extension_types_depleted_quota_nudge_delay_seconds = 11;
  bool has_extension_types_depleted_quota_nudge_delay_seconds() const;
  private:
  bool _internal_has_extension_types_depleted_quota_nudge_delay_seconds() const;
  public:
  void clear_extension_types_depleted_quota_nudge_delay_seconds();
  int32_t extension_types_depleted_quota_nudge_delay_seconds() const;
  void set_extension_types_depleted_quota_nudge_delay_seconds(int32_t value);
  private:
  int32_t _internal_extension_types_depleted_quota_nudge_delay_seconds() const;
  void _internal_set_extension_types_depleted_quota_nudge_delay_seconds(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:sync_pb.ClientCommand)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sync_pb::CustomNudgeDelay > custom_nudge_delays_;
  int32_t set_sync_poll_interval_;
  int32_t set_sync_long_poll_interval_;
  int32_t max_commit_batch_size_;
  int32_t sessions_commit_delay_seconds_;
  int32_t throttle_delay_seconds_;
  int32_t client_invalidation_hint_buffer_size_;
  int32_t gu_retry_delay_seconds_;
  int32_t extension_types_max_tokens_;
  int32_t extension_types_refill_interval_seconds_;
  int32_t extension_types_depleted_quota_nudge_delay_seconds_;
  friend struct ::TableStruct_components_2fsync_2fprotocol_2fclient_5fcommands_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CustomNudgeDelay

// optional int32 datatype_id = 1;
inline bool CustomNudgeDelay::_internal_has_datatype_id() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CustomNudgeDelay::has_datatype_id() const {
  return _internal_has_datatype_id();
}
inline void CustomNudgeDelay::clear_datatype_id() {
  datatype_id_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline int32_t CustomNudgeDelay::_internal_datatype_id() const {
  return datatype_id_;
}
inline int32_t CustomNudgeDelay::datatype_id() const {
  // @@protoc_insertion_point(field_get:sync_pb.CustomNudgeDelay.datatype_id)
  return _internal_datatype_id();
}
inline void CustomNudgeDelay::_internal_set_datatype_id(int32_t value) {
  _has_bits_[0] |= 0x00000001u;
  datatype_id_ = value;
}
inline void CustomNudgeDelay::set_datatype_id(int32_t value) {
  _internal_set_datatype_id(value);
  // @@protoc_insertion_point(field_set:sync_pb.CustomNudgeDelay.datatype_id)
}

// optional int32 delay_ms = 2;
inline bool CustomNudgeDelay::_internal_has_delay_ms() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool CustomNudgeDelay::has_delay_ms() const {
  return _internal_has_delay_ms();
}
inline void CustomNudgeDelay::clear_delay_ms() {
  delay_ms_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline int32_t CustomNudgeDelay::_internal_delay_ms() const {
  return delay_ms_;
}
inline int32_t CustomNudgeDelay::delay_ms() const {
  // @@protoc_insertion_point(field_get:sync_pb.CustomNudgeDelay.delay_ms)
  return _internal_delay_ms();
}
inline void CustomNudgeDelay::_internal_set_delay_ms(int32_t value) {
  _has_bits_[0] |= 0x00000002u;
  delay_ms_ = value;
}
inline void CustomNudgeDelay::set_delay_ms(int32_t value) {
  _internal_set_delay_ms(value);
  // @@protoc_insertion_point(field_set:sync_pb.CustomNudgeDelay.delay_ms)
}

// -------------------------------------------------------------------

// ClientCommand

// optional int32 set_sync_poll_interval = 1;
inline bool ClientCommand::_internal_has_set_sync_poll_interval() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ClientCommand::has_set_sync_poll_interval() const {
  return _internal_has_set_sync_poll_interval();
}
inline void ClientCommand::clear_set_sync_poll_interval() {
  set_sync_poll_interval_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline int32_t ClientCommand::_internal_set_sync_poll_interval() const {
  return set_sync_poll_interval_;
}
inline int32_t ClientCommand::set_sync_poll_interval() const {
  // @@protoc_insertion_point(field_get:sync_pb.ClientCommand.set_sync_poll_interval)
  return _internal_set_sync_poll_interval();
}
inline void ClientCommand::_internal_set_set_sync_poll_interval(int32_t value) {
  _has_bits_[0] |= 0x00000001u;
  set_sync_poll_interval_ = value;
}
inline void ClientCommand::set_set_sync_poll_interval(int32_t value) {
  _internal_set_set_sync_poll_interval(value);
  // @@protoc_insertion_point(field_set:sync_pb.ClientCommand.set_sync_poll_interval)
}

// optional int32 set_sync_long_poll_interval = 2 [deprecated = true];
inline bool ClientCommand::_internal_has_set_sync_long_poll_interval() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ClientCommand::has_set_sync_long_poll_interval() const {
  return _internal_has_set_sync_long_poll_interval();
}
inline void ClientCommand::clear_set_sync_long_poll_interval() {
  set_sync_long_poll_interval_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline int32_t ClientCommand::_internal_set_sync_long_poll_interval() const {
  return set_sync_long_poll_interval_;
}
inline int32_t ClientCommand::set_sync_long_poll_interval() const {
  // @@protoc_insertion_point(field_get:sync_pb.ClientCommand.set_sync_long_poll_interval)
  return _internal_set_sync_long_poll_interval();
}
inline void ClientCommand::_internal_set_set_sync_long_poll_interval(int32_t value) {
  _has_bits_[0] |= 0x00000002u;
  set_sync_long_poll_interval_ = value;
}
inline void ClientCommand::set_set_sync_long_poll_interval(int32_t value) {
  _internal_set_set_sync_long_poll_interval(value);
  // @@protoc_insertion_point(field_set:sync_pb.ClientCommand.set_sync_long_poll_interval)
}

// optional int32 max_commit_batch_size = 3;
inline bool ClientCommand::_internal_has_max_commit_batch_size() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool ClientCommand::has_max_commit_batch_size() const {
  return _internal_has_max_commit_batch_size();
}
inline void ClientCommand::clear_max_commit_batch_size() {
  max_commit_batch_size_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline int32_t ClientCommand::_internal_max_commit_batch_size() const {
  return max_commit_batch_size_;
}
inline int32_t ClientCommand::max_commit_batch_size() const {
  // @@protoc_insertion_point(field_get:sync_pb.ClientCommand.max_commit_batch_size)
  return _internal_max_commit_batch_size();
}
inline void ClientCommand::_internal_set_max_commit_batch_size(int32_t value) {
  _has_bits_[0] |= 0x00000004u;
  max_commit_batch_size_ = value;
}
inline void ClientCommand::set_max_commit_batch_size(int32_t value) {
  _internal_set_max_commit_batch_size(value);
  // @@protoc_insertion_point(field_set:sync_pb.ClientCommand.max_commit_batch_size)
}

// optional int32 sessions_commit_delay_seconds = 4;
inline bool ClientCommand::_internal_has_sessions_commit_delay_seconds() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool ClientCommand::has_sessions_commit_delay_seconds() const {
  return _internal_has_sessions_commit_delay_seconds();
}
inline void ClientCommand::clear_sessions_commit_delay_seconds() {
  sessions_commit_delay_seconds_ = 0;
  _has_bits_[0] &= ~0x00000008u;
}
inline int32_t ClientCommand::_internal_sessions_commit_delay_seconds() const {
  return sessions_commit_delay_seconds_;
}
inline int32_t ClientCommand::sessions_commit_delay_seconds() const {
  // @@protoc_insertion_point(field_get:sync_pb.ClientCommand.sessions_commit_delay_seconds)
  return _internal_sessions_commit_delay_seconds();
}
inline void ClientCommand::_internal_set_sessions_commit_delay_seconds(int32_t value) {
  _has_bits_[0] |= 0x00000008u;
  sessions_commit_delay_seconds_ = value;
}
inline void ClientCommand::set_sessions_commit_delay_seconds(int32_t value) {
  _internal_set_sessions_commit_delay_seconds(value);
  // @@protoc_insertion_point(field_set:sync_pb.ClientCommand.sessions_commit_delay_seconds)
}

// optional int32 throttle_delay_seconds = 5;
inline bool ClientCommand::_internal_has_throttle_delay_seconds() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool ClientCommand::has_throttle_delay_seconds() const {
  return _internal_has_throttle_delay_seconds();
}
inline void ClientCommand::clear_throttle_delay_seconds() {
  throttle_delay_seconds_ = 0;
  _has_bits_[0] &= ~0x00000010u;
}
inline int32_t ClientCommand::_internal_throttle_delay_seconds() const {
  return throttle_delay_seconds_;
}
inline int32_t ClientCommand::throttle_delay_seconds() const {
  // @@protoc_insertion_point(field_get:sync_pb.ClientCommand.throttle_delay_seconds)
  return _internal_throttle_delay_seconds();
}
inline void ClientCommand::_internal_set_throttle_delay_seconds(int32_t value) {
  _has_bits_[0] |= 0x00000010u;
  throttle_delay_seconds_ = value;
}
inline void ClientCommand::set_throttle_delay_seconds(int32_t value) {
  _internal_set_throttle_delay_seconds(value);
  // @@protoc_insertion_point(field_set:sync_pb.ClientCommand.throttle_delay_seconds)
}

// optional int32 client_invalidation_hint_buffer_size = 6;
inline bool ClientCommand::_internal_has_client_invalidation_hint_buffer_size() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool ClientCommand::has_client_invalidation_hint_buffer_size() const {
  return _internal_has_client_invalidation_hint_buffer_size();
}
inline void ClientCommand::clear_client_invalidation_hint_buffer_size() {
  client_invalidation_hint_buffer_size_ = 0;
  _has_bits_[0] &= ~0x00000020u;
}
inline int32_t ClientCommand::_internal_client_invalidation_hint_buffer_size() const {
  return client_invalidation_hint_buffer_size_;
}
inline int32_t ClientCommand::client_invalidation_hint_buffer_size() const {
  // @@protoc_insertion_point(field_get:sync_pb.ClientCommand.client_invalidation_hint_buffer_size)
  return _internal_client_invalidation_hint_buffer_size();
}
inline void ClientCommand::_internal_set_client_invalidation_hint_buffer_size(int32_t value) {
  _has_bits_[0] |= 0x00000020u;
  client_invalidation_hint_buffer_size_ = value;
}
inline void ClientCommand::set_client_invalidation_hint_buffer_size(int32_t value) {
  _internal_set_client_invalidation_hint_buffer_size(value);
  // @@protoc_insertion_point(field_set:sync_pb.ClientCommand.client_invalidation_hint_buffer_size)
}

// optional int32 gu_retry_delay_seconds = 7;
inline bool ClientCommand::_internal_has_gu_retry_delay_seconds() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool ClientCommand::has_gu_retry_delay_seconds() const {
  return _internal_has_gu_retry_delay_seconds();
}
inline void ClientCommand::clear_gu_retry_delay_seconds() {
  gu_retry_delay_seconds_ = 0;
  _has_bits_[0] &= ~0x00000040u;
}
inline int32_t ClientCommand::_internal_gu_retry_delay_seconds() const {
  return gu_retry_delay_seconds_;
}
inline int32_t ClientCommand::gu_retry_delay_seconds() const {
  // @@protoc_insertion_point(field_get:sync_pb.ClientCommand.gu_retry_delay_seconds)
  return _internal_gu_retry_delay_seconds();
}
inline void ClientCommand::_internal_set_gu_retry_delay_seconds(int32_t value) {
  _has_bits_[0] |= 0x00000040u;
  gu_retry_delay_seconds_ = value;
}
inline void ClientCommand::set_gu_retry_delay_seconds(int32_t value) {
  _internal_set_gu_retry_delay_seconds(value);
  // @@protoc_insertion_point(field_set:sync_pb.ClientCommand.gu_retry_delay_seconds)
}

// repeated .sync_pb.CustomNudgeDelay custom_nudge_delays = 8;
inline int ClientCommand::_internal_custom_nudge_delays_size() const {
  return custom_nudge_delays_.size();
}
inline int ClientCommand::custom_nudge_delays_size() const {
  return _internal_custom_nudge_delays_size();
}
inline void ClientCommand::clear_custom_nudge_delays() {
  custom_nudge_delays_.Clear();
}
inline ::sync_pb::CustomNudgeDelay* ClientCommand::mutable_custom_nudge_delays(int index) {
  // @@protoc_insertion_point(field_mutable:sync_pb.ClientCommand.custom_nudge_delays)
  return custom_nudge_delays_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sync_pb::CustomNudgeDelay >*
ClientCommand::mutable_custom_nudge_delays() {
  // @@protoc_insertion_point(field_mutable_list:sync_pb.ClientCommand.custom_nudge_delays)
  return &custom_nudge_delays_;
}
inline const ::sync_pb::CustomNudgeDelay& ClientCommand::_internal_custom_nudge_delays(int index) const {
  return custom_nudge_delays_.Get(index);
}
inline const ::sync_pb::CustomNudgeDelay& ClientCommand::custom_nudge_delays(int index) const {
  // @@protoc_insertion_point(field_get:sync_pb.ClientCommand.custom_nudge_delays)
  return _internal_custom_nudge_delays(index);
}
inline ::sync_pb::CustomNudgeDelay* ClientCommand::_internal_add_custom_nudge_delays() {
  return custom_nudge_delays_.Add();
}
inline ::sync_pb::CustomNudgeDelay* ClientCommand::add_custom_nudge_delays() {
  ::sync_pb::CustomNudgeDelay* _add = _internal_add_custom_nudge_delays();
  // @@protoc_insertion_point(field_add:sync_pb.ClientCommand.custom_nudge_delays)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::sync_pb::CustomNudgeDelay >&
ClientCommand::custom_nudge_delays() const {
  // @@protoc_insertion_point(field_list:sync_pb.ClientCommand.custom_nudge_delays)
  return custom_nudge_delays_;
}

// optional int32 extension_types_max_tokens = 9;
inline bool ClientCommand::_internal_has_extension_types_max_tokens() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool ClientCommand::has_extension_types_max_tokens() const {
  return _internal_has_extension_types_max_tokens();
}
inline void ClientCommand::clear_extension_types_max_tokens() {
  extension_types_max_tokens_ = 0;
  _has_bits_[0] &= ~0x00000080u;
}
inline int32_t ClientCommand::_internal_extension_types_max_tokens() const {
  return extension_types_max_tokens_;
}
inline int32_t ClientCommand::extension_types_max_tokens() const {
  // @@protoc_insertion_point(field_get:sync_pb.ClientCommand.extension_types_max_tokens)
  return _internal_extension_types_max_tokens();
}
inline void ClientCommand::_internal_set_extension_types_max_tokens(int32_t value) {
  _has_bits_[0] |= 0x00000080u;
  extension_types_max_tokens_ = value;
}
inline void ClientCommand::set_extension_types_max_tokens(int32_t value) {
  _internal_set_extension_types_max_tokens(value);
  // @@protoc_insertion_point(field_set:sync_pb.ClientCommand.extension_types_max_tokens)
}

// optional int32 extension_types_refill_interval_seconds = 10;
inline bool ClientCommand::_internal_has_extension_types_refill_interval_seconds() const {
  bool value = (_has_bits_[0] & 0x00000100u) != 0;
  return value;
}
inline bool ClientCommand::has_extension_types_refill_interval_seconds() const {
  return _internal_has_extension_types_refill_interval_seconds();
}
inline void ClientCommand::clear_extension_types_refill_interval_seconds() {
  extension_types_refill_interval_seconds_ = 0;
  _has_bits_[0] &= ~0x00000100u;
}
inline int32_t ClientCommand::_internal_extension_types_refill_interval_seconds() const {
  return extension_types_refill_interval_seconds_;
}
inline int32_t ClientCommand::extension_types_refill_interval_seconds() const {
  // @@protoc_insertion_point(field_get:sync_pb.ClientCommand.extension_types_refill_interval_seconds)
  return _internal_extension_types_refill_interval_seconds();
}
inline void ClientCommand::_internal_set_extension_types_refill_interval_seconds(int32_t value) {
  _has_bits_[0] |= 0x00000100u;
  extension_types_refill_interval_seconds_ = value;
}
inline void ClientCommand::set_extension_types_refill_interval_seconds(int32_t value) {
  _internal_set_extension_types_refill_interval_seconds(value);
  // @@protoc_insertion_point(field_set:sync_pb.ClientCommand.extension_types_refill_interval_seconds)
}

// optional int32 extension_types_depleted_quota_nudge_delay_seconds = 11;
inline bool ClientCommand::_internal_has_extension_types_depleted_quota_nudge_delay_seconds() const {
  bool value = (_has_bits_[0] & 0x00000200u) != 0;
  return value;
}
inline bool ClientCommand::has_extension_types_depleted_quota_nudge_delay_seconds() const {
  return _internal_has_extension_types_depleted_quota_nudge_delay_seconds();
}
inline void ClientCommand::clear_extension_types_depleted_quota_nudge_delay_seconds() {
  extension_types_depleted_quota_nudge_delay_seconds_ = 0;
  _has_bits_[0] &= ~0x00000200u;
}
inline int32_t ClientCommand::_internal_extension_types_depleted_quota_nudge_delay_seconds() const {
  return extension_types_depleted_quota_nudge_delay_seconds_;
}
inline int32_t ClientCommand::extension_types_depleted_quota_nudge_delay_seconds() const {
  // @@protoc_insertion_point(field_get:sync_pb.ClientCommand.extension_types_depleted_quota_nudge_delay_seconds)
  return _internal_extension_types_depleted_quota_nudge_delay_seconds();
}
inline void ClientCommand::_internal_set_extension_types_depleted_quota_nudge_delay_seconds(int32_t value) {
  _has_bits_[0] |= 0x00000200u;
  extension_types_depleted_quota_nudge_delay_seconds_ = value;
}
inline void ClientCommand::set_extension_types_depleted_quota_nudge_delay_seconds(int32_t value) {
  _internal_set_extension_types_depleted_quota_nudge_delay_seconds(value);
  // @@protoc_insertion_point(field_set:sync_pb.ClientCommand.extension_types_depleted_quota_nudge_delay_seconds)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sync_pb

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_components_2fsync_2fprotocol_2fclient_5fcommands_2eproto
