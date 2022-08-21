// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/track_descriptor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2ftrack_5fdescriptor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2ftrack_5fdescriptor_2eproto

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
#include "protos/perfetto/trace/track_event/chrome_process_descriptor.pb.h"
#include "protos/perfetto/trace/track_event/chrome_thread_descriptor.pb.h"
#include "protos/perfetto/trace/track_event/process_descriptor.pb.h"
#include "protos/perfetto/trace/track_event/thread_descriptor.pb.h"
#include "protos/perfetto/trace/track_event/counter_descriptor.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_protos_2fperfetto_2ftrace_2ftrack_5fevent_2ftrack_5fdescriptor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2ftrack_5fdescriptor_2eproto {
  static const uint32_t offsets[];
};
namespace perfetto {
namespace protos {
class TrackDescriptor;
struct TrackDescriptorDefaultTypeInternal;
extern TrackDescriptorDefaultTypeInternal _TrackDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> ::perfetto::protos::TrackDescriptor* Arena::CreateMaybeMessage<::perfetto::protos::TrackDescriptor>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace perfetto {
namespace protos {

// ===================================================================

class TrackDescriptor final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:perfetto.protos.TrackDescriptor) */ {
 public:
  inline TrackDescriptor() : TrackDescriptor(nullptr) {}
  ~TrackDescriptor() override;
  explicit PROTOBUF_CONSTEXPR TrackDescriptor(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TrackDescriptor(const TrackDescriptor& from);
  TrackDescriptor(TrackDescriptor&& from) noexcept
    : TrackDescriptor() {
    *this = ::std::move(from);
  }

  inline TrackDescriptor& operator=(const TrackDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline TrackDescriptor& operator=(TrackDescriptor&& from) noexcept {
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

  static const TrackDescriptor& default_instance() {
    return *internal_default_instance();
  }
  static inline const TrackDescriptor* internal_default_instance() {
    return reinterpret_cast<const TrackDescriptor*>(
               &_TrackDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TrackDescriptor& a, TrackDescriptor& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(TrackDescriptor* other) {
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
  void UnsafeArenaSwap(TrackDescriptor* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TrackDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TrackDescriptor>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const TrackDescriptor& from);
  void MergeFrom(const TrackDescriptor& from);
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
  void InternalSwap(TrackDescriptor* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "perfetto.protos.TrackDescriptor";
  }
  protected:
  explicit TrackDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 2,
    kProcessFieldNumber = 3,
    kThreadFieldNumber = 4,
    kChromeProcessFieldNumber = 6,
    kChromeThreadFieldNumber = 7,
    kCounterFieldNumber = 8,
    kUuidFieldNumber = 1,
    kParentUuidFieldNumber = 5,
  };
  // optional string name = 2;
  bool has_name() const;
  private:
  bool _internal_has_name() const;
  public:
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // optional .perfetto.protos.ProcessDescriptor process = 3;
  bool has_process() const;
  private:
  bool _internal_has_process() const;
  public:
  void clear_process();
  const ::perfetto::protos::ProcessDescriptor& process() const;
  PROTOBUF_NODISCARD ::perfetto::protos::ProcessDescriptor* release_process();
  ::perfetto::protos::ProcessDescriptor* mutable_process();
  void set_allocated_process(::perfetto::protos::ProcessDescriptor* process);
  private:
  const ::perfetto::protos::ProcessDescriptor& _internal_process() const;
  ::perfetto::protos::ProcessDescriptor* _internal_mutable_process();
  public:
  void unsafe_arena_set_allocated_process(
      ::perfetto::protos::ProcessDescriptor* process);
  ::perfetto::protos::ProcessDescriptor* unsafe_arena_release_process();

  // optional .perfetto.protos.ThreadDescriptor thread = 4;
  bool has_thread() const;
  private:
  bool _internal_has_thread() const;
  public:
  void clear_thread();
  const ::perfetto::protos::ThreadDescriptor& thread() const;
  PROTOBUF_NODISCARD ::perfetto::protos::ThreadDescriptor* release_thread();
  ::perfetto::protos::ThreadDescriptor* mutable_thread();
  void set_allocated_thread(::perfetto::protos::ThreadDescriptor* thread);
  private:
  const ::perfetto::protos::ThreadDescriptor& _internal_thread() const;
  ::perfetto::protos::ThreadDescriptor* _internal_mutable_thread();
  public:
  void unsafe_arena_set_allocated_thread(
      ::perfetto::protos::ThreadDescriptor* thread);
  ::perfetto::protos::ThreadDescriptor* unsafe_arena_release_thread();

  // optional .perfetto.protos.ChromeProcessDescriptor chrome_process = 6;
  bool has_chrome_process() const;
  private:
  bool _internal_has_chrome_process() const;
  public:
  void clear_chrome_process();
  const ::perfetto::protos::ChromeProcessDescriptor& chrome_process() const;
  PROTOBUF_NODISCARD ::perfetto::protos::ChromeProcessDescriptor* release_chrome_process();
  ::perfetto::protos::ChromeProcessDescriptor* mutable_chrome_process();
  void set_allocated_chrome_process(::perfetto::protos::ChromeProcessDescriptor* chrome_process);
  private:
  const ::perfetto::protos::ChromeProcessDescriptor& _internal_chrome_process() const;
  ::perfetto::protos::ChromeProcessDescriptor* _internal_mutable_chrome_process();
  public:
  void unsafe_arena_set_allocated_chrome_process(
      ::perfetto::protos::ChromeProcessDescriptor* chrome_process);
  ::perfetto::protos::ChromeProcessDescriptor* unsafe_arena_release_chrome_process();

  // optional .perfetto.protos.ChromeThreadDescriptor chrome_thread = 7;
  bool has_chrome_thread() const;
  private:
  bool _internal_has_chrome_thread() const;
  public:
  void clear_chrome_thread();
  const ::perfetto::protos::ChromeThreadDescriptor& chrome_thread() const;
  PROTOBUF_NODISCARD ::perfetto::protos::ChromeThreadDescriptor* release_chrome_thread();
  ::perfetto::protos::ChromeThreadDescriptor* mutable_chrome_thread();
  void set_allocated_chrome_thread(::perfetto::protos::ChromeThreadDescriptor* chrome_thread);
  private:
  const ::perfetto::protos::ChromeThreadDescriptor& _internal_chrome_thread() const;
  ::perfetto::protos::ChromeThreadDescriptor* _internal_mutable_chrome_thread();
  public:
  void unsafe_arena_set_allocated_chrome_thread(
      ::perfetto::protos::ChromeThreadDescriptor* chrome_thread);
  ::perfetto::protos::ChromeThreadDescriptor* unsafe_arena_release_chrome_thread();

  // optional .perfetto.protos.CounterDescriptor counter = 8;
  bool has_counter() const;
  private:
  bool _internal_has_counter() const;
  public:
  void clear_counter();
  const ::perfetto::protos::CounterDescriptor& counter() const;
  PROTOBUF_NODISCARD ::perfetto::protos::CounterDescriptor* release_counter();
  ::perfetto::protos::CounterDescriptor* mutable_counter();
  void set_allocated_counter(::perfetto::protos::CounterDescriptor* counter);
  private:
  const ::perfetto::protos::CounterDescriptor& _internal_counter() const;
  ::perfetto::protos::CounterDescriptor* _internal_mutable_counter();
  public:
  void unsafe_arena_set_allocated_counter(
      ::perfetto::protos::CounterDescriptor* counter);
  ::perfetto::protos::CounterDescriptor* unsafe_arena_release_counter();

  // optional uint64 uuid = 1;
  bool has_uuid() const;
  private:
  bool _internal_has_uuid() const;
  public:
  void clear_uuid();
  uint64_t uuid() const;
  void set_uuid(uint64_t value);
  private:
  uint64_t _internal_uuid() const;
  void _internal_set_uuid(uint64_t value);
  public:

  // optional uint64 parent_uuid = 5;
  bool has_parent_uuid() const;
  private:
  bool _internal_has_parent_uuid() const;
  public:
  void clear_parent_uuid();
  uint64_t parent_uuid() const;
  void set_parent_uuid(uint64_t value);
  private:
  uint64_t _internal_parent_uuid() const;
  void _internal_set_parent_uuid(uint64_t value);
  public:

  // @@protoc_insertion_point(class_scope:perfetto.protos.TrackDescriptor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::perfetto::protos::ProcessDescriptor* process_;
  ::perfetto::protos::ThreadDescriptor* thread_;
  ::perfetto::protos::ChromeProcessDescriptor* chrome_process_;
  ::perfetto::protos::ChromeThreadDescriptor* chrome_thread_;
  ::perfetto::protos::CounterDescriptor* counter_;
  uint64_t uuid_;
  uint64_t parent_uuid_;
  friend struct ::TableStruct_protos_2fperfetto_2ftrace_2ftrack_5fevent_2ftrack_5fdescriptor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TrackDescriptor

// optional uint64 uuid = 1;
inline bool TrackDescriptor::_internal_has_uuid() const {
  bool value = (_has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool TrackDescriptor::has_uuid() const {
  return _internal_has_uuid();
}
inline void TrackDescriptor::clear_uuid() {
  uuid_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000040u;
}
inline uint64_t TrackDescriptor::_internal_uuid() const {
  return uuid_;
}
inline uint64_t TrackDescriptor::uuid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrackDescriptor.uuid)
  return _internal_uuid();
}
inline void TrackDescriptor::_internal_set_uuid(uint64_t value) {
  _has_bits_[0] |= 0x00000040u;
  uuid_ = value;
}
inline void TrackDescriptor::set_uuid(uint64_t value) {
  _internal_set_uuid(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.TrackDescriptor.uuid)
}

// optional uint64 parent_uuid = 5;
inline bool TrackDescriptor::_internal_has_parent_uuid() const {
  bool value = (_has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool TrackDescriptor::has_parent_uuid() const {
  return _internal_has_parent_uuid();
}
inline void TrackDescriptor::clear_parent_uuid() {
  parent_uuid_ = uint64_t{0u};
  _has_bits_[0] &= ~0x00000080u;
}
inline uint64_t TrackDescriptor::_internal_parent_uuid() const {
  return parent_uuid_;
}
inline uint64_t TrackDescriptor::parent_uuid() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrackDescriptor.parent_uuid)
  return _internal_parent_uuid();
}
inline void TrackDescriptor::_internal_set_parent_uuid(uint64_t value) {
  _has_bits_[0] |= 0x00000080u;
  parent_uuid_ = value;
}
inline void TrackDescriptor::set_parent_uuid(uint64_t value) {
  _internal_set_parent_uuid(value);
  // @@protoc_insertion_point(field_set:perfetto.protos.TrackDescriptor.parent_uuid)
}

// optional string name = 2;
inline bool TrackDescriptor::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool TrackDescriptor::has_name() const {
  return _internal_has_name();
}
inline void TrackDescriptor::clear_name() {
  name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& TrackDescriptor::name() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrackDescriptor.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void TrackDescriptor::set_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:perfetto.protos.TrackDescriptor.name)
}
inline std::string* TrackDescriptor::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TrackDescriptor.name)
  return _s;
}
inline const std::string& TrackDescriptor::_internal_name() const {
  return name_.Get();
}
inline void TrackDescriptor::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(value, GetArenaForAllocation());
}
inline std::string* TrackDescriptor::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.Mutable(GetArenaForAllocation());
}
inline std::string* TrackDescriptor::release_name() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TrackDescriptor.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault()) {
    name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void TrackDescriptor::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault()) {
    name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TrackDescriptor.name)
}

// optional .perfetto.protos.ProcessDescriptor process = 3;
inline bool TrackDescriptor::_internal_has_process() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  PROTOBUF_ASSUME(!value || process_ != nullptr);
  return value;
}
inline bool TrackDescriptor::has_process() const {
  return _internal_has_process();
}
inline const ::perfetto::protos::ProcessDescriptor& TrackDescriptor::_internal_process() const {
  const ::perfetto::protos::ProcessDescriptor* p = process_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::ProcessDescriptor&>(
      ::perfetto::protos::_ProcessDescriptor_default_instance_);
}
inline const ::perfetto::protos::ProcessDescriptor& TrackDescriptor::process() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrackDescriptor.process)
  return _internal_process();
}
inline void TrackDescriptor::unsafe_arena_set_allocated_process(
    ::perfetto::protos::ProcessDescriptor* process) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(process_);
  }
  process_ = process;
  if (process) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.TrackDescriptor.process)
}
inline ::perfetto::protos::ProcessDescriptor* TrackDescriptor::release_process() {
  _has_bits_[0] &= ~0x00000002u;
  ::perfetto::protos::ProcessDescriptor* temp = process_;
  process_ = nullptr;
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
inline ::perfetto::protos::ProcessDescriptor* TrackDescriptor::unsafe_arena_release_process() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TrackDescriptor.process)
  _has_bits_[0] &= ~0x00000002u;
  ::perfetto::protos::ProcessDescriptor* temp = process_;
  process_ = nullptr;
  return temp;
}
inline ::perfetto::protos::ProcessDescriptor* TrackDescriptor::_internal_mutable_process() {
  _has_bits_[0] |= 0x00000002u;
  if (process_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::ProcessDescriptor>(GetArenaForAllocation());
    process_ = p;
  }
  return process_;
}
inline ::perfetto::protos::ProcessDescriptor* TrackDescriptor::mutable_process() {
  ::perfetto::protos::ProcessDescriptor* _msg = _internal_mutable_process();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TrackDescriptor.process)
  return _msg;
}
inline void TrackDescriptor::set_allocated_process(::perfetto::protos::ProcessDescriptor* process) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(process_);
  }
  if (process) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(process));
    if (message_arena != submessage_arena) {
      process = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, process, submessage_arena);
    }
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  process_ = process;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TrackDescriptor.process)
}

// optional .perfetto.protos.ChromeProcessDescriptor chrome_process = 6;
inline bool TrackDescriptor::_internal_has_chrome_process() const {
  bool value = (_has_bits_[0] & 0x00000008u) != 0;
  PROTOBUF_ASSUME(!value || chrome_process_ != nullptr);
  return value;
}
inline bool TrackDescriptor::has_chrome_process() const {
  return _internal_has_chrome_process();
}
inline const ::perfetto::protos::ChromeProcessDescriptor& TrackDescriptor::_internal_chrome_process() const {
  const ::perfetto::protos::ChromeProcessDescriptor* p = chrome_process_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::ChromeProcessDescriptor&>(
      ::perfetto::protos::_ChromeProcessDescriptor_default_instance_);
}
inline const ::perfetto::protos::ChromeProcessDescriptor& TrackDescriptor::chrome_process() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrackDescriptor.chrome_process)
  return _internal_chrome_process();
}
inline void TrackDescriptor::unsafe_arena_set_allocated_chrome_process(
    ::perfetto::protos::ChromeProcessDescriptor* chrome_process) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(chrome_process_);
  }
  chrome_process_ = chrome_process;
  if (chrome_process) {
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.TrackDescriptor.chrome_process)
}
inline ::perfetto::protos::ChromeProcessDescriptor* TrackDescriptor::release_chrome_process() {
  _has_bits_[0] &= ~0x00000008u;
  ::perfetto::protos::ChromeProcessDescriptor* temp = chrome_process_;
  chrome_process_ = nullptr;
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
inline ::perfetto::protos::ChromeProcessDescriptor* TrackDescriptor::unsafe_arena_release_chrome_process() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TrackDescriptor.chrome_process)
  _has_bits_[0] &= ~0x00000008u;
  ::perfetto::protos::ChromeProcessDescriptor* temp = chrome_process_;
  chrome_process_ = nullptr;
  return temp;
}
inline ::perfetto::protos::ChromeProcessDescriptor* TrackDescriptor::_internal_mutable_chrome_process() {
  _has_bits_[0] |= 0x00000008u;
  if (chrome_process_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::ChromeProcessDescriptor>(GetArenaForAllocation());
    chrome_process_ = p;
  }
  return chrome_process_;
}
inline ::perfetto::protos::ChromeProcessDescriptor* TrackDescriptor::mutable_chrome_process() {
  ::perfetto::protos::ChromeProcessDescriptor* _msg = _internal_mutable_chrome_process();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TrackDescriptor.chrome_process)
  return _msg;
}
inline void TrackDescriptor::set_allocated_chrome_process(::perfetto::protos::ChromeProcessDescriptor* chrome_process) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(chrome_process_);
  }
  if (chrome_process) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(chrome_process));
    if (message_arena != submessage_arena) {
      chrome_process = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, chrome_process, submessage_arena);
    }
    _has_bits_[0] |= 0x00000008u;
  } else {
    _has_bits_[0] &= ~0x00000008u;
  }
  chrome_process_ = chrome_process;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TrackDescriptor.chrome_process)
}

// optional .perfetto.protos.ThreadDescriptor thread = 4;
inline bool TrackDescriptor::_internal_has_thread() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || thread_ != nullptr);
  return value;
}
inline bool TrackDescriptor::has_thread() const {
  return _internal_has_thread();
}
inline const ::perfetto::protos::ThreadDescriptor& TrackDescriptor::_internal_thread() const {
  const ::perfetto::protos::ThreadDescriptor* p = thread_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::ThreadDescriptor&>(
      ::perfetto::protos::_ThreadDescriptor_default_instance_);
}
inline const ::perfetto::protos::ThreadDescriptor& TrackDescriptor::thread() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrackDescriptor.thread)
  return _internal_thread();
}
inline void TrackDescriptor::unsafe_arena_set_allocated_thread(
    ::perfetto::protos::ThreadDescriptor* thread) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(thread_);
  }
  thread_ = thread;
  if (thread) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.TrackDescriptor.thread)
}
inline ::perfetto::protos::ThreadDescriptor* TrackDescriptor::release_thread() {
  _has_bits_[0] &= ~0x00000004u;
  ::perfetto::protos::ThreadDescriptor* temp = thread_;
  thread_ = nullptr;
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
inline ::perfetto::protos::ThreadDescriptor* TrackDescriptor::unsafe_arena_release_thread() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TrackDescriptor.thread)
  _has_bits_[0] &= ~0x00000004u;
  ::perfetto::protos::ThreadDescriptor* temp = thread_;
  thread_ = nullptr;
  return temp;
}
inline ::perfetto::protos::ThreadDescriptor* TrackDescriptor::_internal_mutable_thread() {
  _has_bits_[0] |= 0x00000004u;
  if (thread_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::ThreadDescriptor>(GetArenaForAllocation());
    thread_ = p;
  }
  return thread_;
}
inline ::perfetto::protos::ThreadDescriptor* TrackDescriptor::mutable_thread() {
  ::perfetto::protos::ThreadDescriptor* _msg = _internal_mutable_thread();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TrackDescriptor.thread)
  return _msg;
}
inline void TrackDescriptor::set_allocated_thread(::perfetto::protos::ThreadDescriptor* thread) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(thread_);
  }
  if (thread) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(thread));
    if (message_arena != submessage_arena) {
      thread = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, thread, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  thread_ = thread;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TrackDescriptor.thread)
}

// optional .perfetto.protos.ChromeThreadDescriptor chrome_thread = 7;
inline bool TrackDescriptor::_internal_has_chrome_thread() const {
  bool value = (_has_bits_[0] & 0x00000010u) != 0;
  PROTOBUF_ASSUME(!value || chrome_thread_ != nullptr);
  return value;
}
inline bool TrackDescriptor::has_chrome_thread() const {
  return _internal_has_chrome_thread();
}
inline const ::perfetto::protos::ChromeThreadDescriptor& TrackDescriptor::_internal_chrome_thread() const {
  const ::perfetto::protos::ChromeThreadDescriptor* p = chrome_thread_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::ChromeThreadDescriptor&>(
      ::perfetto::protos::_ChromeThreadDescriptor_default_instance_);
}
inline const ::perfetto::protos::ChromeThreadDescriptor& TrackDescriptor::chrome_thread() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrackDescriptor.chrome_thread)
  return _internal_chrome_thread();
}
inline void TrackDescriptor::unsafe_arena_set_allocated_chrome_thread(
    ::perfetto::protos::ChromeThreadDescriptor* chrome_thread) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(chrome_thread_);
  }
  chrome_thread_ = chrome_thread;
  if (chrome_thread) {
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.TrackDescriptor.chrome_thread)
}
inline ::perfetto::protos::ChromeThreadDescriptor* TrackDescriptor::release_chrome_thread() {
  _has_bits_[0] &= ~0x00000010u;
  ::perfetto::protos::ChromeThreadDescriptor* temp = chrome_thread_;
  chrome_thread_ = nullptr;
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
inline ::perfetto::protos::ChromeThreadDescriptor* TrackDescriptor::unsafe_arena_release_chrome_thread() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TrackDescriptor.chrome_thread)
  _has_bits_[0] &= ~0x00000010u;
  ::perfetto::protos::ChromeThreadDescriptor* temp = chrome_thread_;
  chrome_thread_ = nullptr;
  return temp;
}
inline ::perfetto::protos::ChromeThreadDescriptor* TrackDescriptor::_internal_mutable_chrome_thread() {
  _has_bits_[0] |= 0x00000010u;
  if (chrome_thread_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::ChromeThreadDescriptor>(GetArenaForAllocation());
    chrome_thread_ = p;
  }
  return chrome_thread_;
}
inline ::perfetto::protos::ChromeThreadDescriptor* TrackDescriptor::mutable_chrome_thread() {
  ::perfetto::protos::ChromeThreadDescriptor* _msg = _internal_mutable_chrome_thread();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TrackDescriptor.chrome_thread)
  return _msg;
}
inline void TrackDescriptor::set_allocated_chrome_thread(::perfetto::protos::ChromeThreadDescriptor* chrome_thread) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(chrome_thread_);
  }
  if (chrome_thread) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(chrome_thread));
    if (message_arena != submessage_arena) {
      chrome_thread = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, chrome_thread, submessage_arena);
    }
    _has_bits_[0] |= 0x00000010u;
  } else {
    _has_bits_[0] &= ~0x00000010u;
  }
  chrome_thread_ = chrome_thread;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TrackDescriptor.chrome_thread)
}

// optional .perfetto.protos.CounterDescriptor counter = 8;
inline bool TrackDescriptor::_internal_has_counter() const {
  bool value = (_has_bits_[0] & 0x00000020u) != 0;
  PROTOBUF_ASSUME(!value || counter_ != nullptr);
  return value;
}
inline bool TrackDescriptor::has_counter() const {
  return _internal_has_counter();
}
inline const ::perfetto::protos::CounterDescriptor& TrackDescriptor::_internal_counter() const {
  const ::perfetto::protos::CounterDescriptor* p = counter_;
  return p != nullptr ? *p : reinterpret_cast<const ::perfetto::protos::CounterDescriptor&>(
      ::perfetto::protos::_CounterDescriptor_default_instance_);
}
inline const ::perfetto::protos::CounterDescriptor& TrackDescriptor::counter() const {
  // @@protoc_insertion_point(field_get:perfetto.protos.TrackDescriptor.counter)
  return _internal_counter();
}
inline void TrackDescriptor::unsafe_arena_set_allocated_counter(
    ::perfetto::protos::CounterDescriptor* counter) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(counter_);
  }
  counter_ = counter;
  if (counter) {
    _has_bits_[0] |= 0x00000020u;
  } else {
    _has_bits_[0] &= ~0x00000020u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:perfetto.protos.TrackDescriptor.counter)
}
inline ::perfetto::protos::CounterDescriptor* TrackDescriptor::release_counter() {
  _has_bits_[0] &= ~0x00000020u;
  ::perfetto::protos::CounterDescriptor* temp = counter_;
  counter_ = nullptr;
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
inline ::perfetto::protos::CounterDescriptor* TrackDescriptor::unsafe_arena_release_counter() {
  // @@protoc_insertion_point(field_release:perfetto.protos.TrackDescriptor.counter)
  _has_bits_[0] &= ~0x00000020u;
  ::perfetto::protos::CounterDescriptor* temp = counter_;
  counter_ = nullptr;
  return temp;
}
inline ::perfetto::protos::CounterDescriptor* TrackDescriptor::_internal_mutable_counter() {
  _has_bits_[0] |= 0x00000020u;
  if (counter_ == nullptr) {
    auto* p = CreateMaybeMessage<::perfetto::protos::CounterDescriptor>(GetArenaForAllocation());
    counter_ = p;
  }
  return counter_;
}
inline ::perfetto::protos::CounterDescriptor* TrackDescriptor::mutable_counter() {
  ::perfetto::protos::CounterDescriptor* _msg = _internal_mutable_counter();
  // @@protoc_insertion_point(field_mutable:perfetto.protos.TrackDescriptor.counter)
  return _msg;
}
inline void TrackDescriptor::set_allocated_counter(::perfetto::protos::CounterDescriptor* counter) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(counter_);
  }
  if (counter) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(counter));
    if (message_arena != submessage_arena) {
      counter = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, counter, submessage_arena);
    }
    _has_bits_[0] |= 0x00000020u;
  } else {
    _has_bits_[0] &= ~0x00000020u;
  }
  counter_ = counter;
  // @@protoc_insertion_point(field_set_allocated:perfetto.protos.TrackDescriptor.counter)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace perfetto

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_protos_2fperfetto_2ftrace_2ftrack_5fevent_2ftrack_5fdescriptor_2eproto
