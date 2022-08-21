// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_message_pump.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmessage_5fpump_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmessage_5fpump_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmessage_5fpump_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmessage_5fpump_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class ChromeMessagePump;
struct ChromeMessagePumpDefaultTypeInternal;
extern ChromeMessagePumpDefaultTypeInternal _ChromeMessagePump_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::ChromeMessagePump* Arena::CreateMaybeMessage<::perfetto::protos::ChromeMessagePump>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class ChromeMessagePump final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.ChromeMessagePump) */ {
 public:
  inline ChromeMessagePump() : ChromeMessagePump(nullptr) {}
  ~ChromeMessagePump() override;
  explicit PROTOBUF_CONSTEXPR ChromeMessagePump(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChromeMessagePump(const ChromeMessagePump& from);
  ChromeMessagePump(ChromeMessagePump&& from) noexcept
    : ChromeMessagePump() {
    *this = ::std::move(from);
  }

  inline ChromeMessagePump& operator=(const ChromeMessagePump& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChromeMessagePump& operator=(ChromeMessagePump&& from) noexcept {
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

  static const ChromeMessagePump& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChromeMessagePump* internal_default_instance() {
    return reinterpret_cast<const ChromeMessagePump*>(
               &_ChromeMessagePump_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChromeMessagePump& a, ChromeMessagePump& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(ChromeMessagePump* other) {
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
  void UnsafeArenaSwap(ChromeMessagePump* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChromeMessagePump* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChromeMessagePump>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ChromeMessagePump& from);
  void MergeFrom(const ChromeMessagePump& from);
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
  void InternalSwap(ChromeMessagePump* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.ChromeMessagePump";
  }
  protected:
  explicit ChromeMessagePump(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIoHandlerLocationIidFieldNumber = 2,
    kSentMessagesInQueueFieldNumber = 1,
  };
  // optional uint64 io_handler_location_iid = 2;
  bool has_io_handler_location_iid() const;
  private:
  bool _internal_has_io_handler_location_iid() const;
  public:
  void clear_io_handler_location_iid();
  uint64_t io_handler_location_iid() const;
  void set_io_handler_location_iid(uint64_t value);
  private:
  uint64_t _internal_io_handler_location_iid() const;
  void _internal_set_io_handler_location_iid(uint64_t value);
  public:

  // optional bool sent_messages_in_queue = 1;
  bool has_sent_messages_in_queue() const;
  private:
  bool _internal_has_sent_messages_in_queue() const;
  public:
  void clear_sent_messages_in_queue();
  bool sent_messages_in_queue() const;
  void set_sent_messages_in_queue(bool value);
  private:
  bool _internal_sent_messages_in_queue() const;
  void _internal_set_sent_messages_in_queue(bool value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.ChromeMessagePump)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint64_t io_handler_location_iid_;
  bool sent_messages_in_queue_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmessage_5fpump_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChromeMessagePump

// optional bool sent_messages_in_queue = 1;
inline bool ChromeMessagePump::_internal_has_sent_messages_in_queue() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ChromeMessagePump::has_sent_messages_in_queue() const {
  return _internal_has_sent_messages_in_queue();
}
inline void ChromeMessagePump::clear_sent_messages_in_queue() {
  sent_messages_in_queue_ = false;
  _has_bits_[0] &= ~0x00000002u;
}
inline bool ChromeMessagePump::_internal_sent_messages_in_queue() const {
  return sent_messages_in_queue_;
}
inline bool ChromeMessagePump::sent_messages_in_queue() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeMessagePump.sent_messages_in_queue)
  return _internal_sent_messages_in_queue();
}
inline void ChromeMessagePump::_internal_set_sent_messages_in_queue(bool value) {
  _has_bits_[0] |= 0x00000002u;
  sent_messages_in_queue_ = value;
}
inline void ChromeMessagePump::set_sent_messages_in_queue(bool value) {
  _internal_set_sent_messages_in_queue(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeMessagePump.sent_messages_in_queue)
}

// optional uint64 io_handler_location_iid = 2;
inline bool ChromeMessagePump::_internal_has_io_handler_location_iid() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ChromeMessagePump::has_io_handler_location_iid() const {
  return _internal_has_io_handler_location_iid();
}
inline void ChromeMessagePump::clear_io_handler_location_iid() {
  io_handler_location_iid_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000001u;
}
inline uint64_t ChromeMessagePump::_internal_io_handler_location_iid() const {
  return io_handler_location_iid_;
}
inline uint64_t ChromeMessagePump::io_handler_location_iid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.ChromeMessagePump.io_handler_location_iid)
  return _internal_io_handler_location_iid();
}
inline void ChromeMessagePump::_internal_set_io_handler_location_iid(uint64_t value) {
  _has_bits_[0] |= 0x00000001u;
  io_handler_location_iid_ = value;
}
inline void ChromeMessagePump::set_io_handler_location_iid(uint64_t value) {
  _internal_set_io_handler_location_iid(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.ChromeMessagePump.io_handler_location_iid)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2fchrome_5fmessage_5fpump_2eproto
