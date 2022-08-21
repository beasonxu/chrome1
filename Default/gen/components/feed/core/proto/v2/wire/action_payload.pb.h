// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/feed/core/proto/v2/wire/action_payload.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fpayload_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fpayload_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fpayload_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fpayload_2eproto {
  static const uint32_t offsets[];
};
namespace feedwire {
class ActionPayload;
struct ActionPayloadDefaultTypeInternal;
extern ActionPayloadDefaultTypeInternal _ActionPayload_default_instance_;
}  // namespace feedwire
PROTOBUF_NAMESPACE_OPEN
template<> ::feedwire::ActionPayload* Arena::CreateMaybeMessage<::feedwire::ActionPayload>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace feedwire {

// ===================================================================

class ActionPayload final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:feedwire.ActionPayload) */ {
 public:
  inline ActionPayload() : ActionPayload(nullptr) {}
  ~ActionPayload() override;
  explicit PROTOBUF_CONSTEXPR ActionPayload(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ActionPayload(const ActionPayload& from);
  ActionPayload(ActionPayload&& from) noexcept
    : ActionPayload() {
    *this = ::std::move(from);
  }

  inline ActionPayload& operator=(const ActionPayload& from) {
    CopyFrom(from);
    return *this;
  }
  inline ActionPayload& operator=(ActionPayload&& from) noexcept {
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

  static const ActionPayload& default_instance() {
    return *internal_default_instance();
  }
  static inline const ActionPayload* internal_default_instance() {
    return reinterpret_cast<const ActionPayload*>(
               &_ActionPayload_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ActionPayload& a, ActionPayload& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(ActionPayload* other) {
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
  void UnsafeArenaSwap(ActionPayload* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ActionPayload* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ActionPayload>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ActionPayload& from);
  void MergeFrom(const ActionPayload& from);
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
  void InternalSwap(ActionPayload* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "feedwire.ActionPayload";
  }
  protected:
  explicit ActionPayload(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBatchedActionPayloadDataFieldNumber = 370974597,
  };
  // repeated bytes batched_action_payload_data = 370974597;
  int batched_action_payload_data_size() const;
  private:
  int _internal_batched_action_payload_data_size() const;
  public:
  void clear_batched_action_payload_data();
  const std::string& batched_action_payload_data(int index) const;
  std::string* mutable_batched_action_payload_data(int index);
  void set_batched_action_payload_data(int index, const std::string& value);
  void set_batched_action_payload_data(int index, std::string&& value);
  void set_batched_action_payload_data(int index, const char* value);
  void set_batched_action_payload_data(int index, const void* value, size_t size);
  std::string* add_batched_action_payload_data();
  void add_batched_action_payload_data(const std::string& value);
  void add_batched_action_payload_data(std::string&& value);
  void add_batched_action_payload_data(const char* value);
  void add_batched_action_payload_data(const void* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& batched_action_payload_data() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_batched_action_payload_data();
  private:
  const std::string& _internal_batched_action_payload_data(int index) const;
  std::string* _internal_add_batched_action_payload_data();
  public:

  // @@protoc_insertion_point(class_scope:feedwire.ActionPayload)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> batched_action_payload_data_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fpayload_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ActionPayload

// repeated bytes batched_action_payload_data = 370974597;
inline int ActionPayload::_internal_batched_action_payload_data_size() const {
  return batched_action_payload_data_.size();
}
inline int ActionPayload::batched_action_payload_data_size() const {
  return _internal_batched_action_payload_data_size();
}
inline void ActionPayload::clear_batched_action_payload_data() {
  batched_action_payload_data_.Clear();
}
inline std::string* ActionPayload::add_batched_action_payload_data() {
  std::string* _s = _internal_add_batched_action_payload_data();
  // @@protoc_insertion_point(field_add_mutable:feedwire.ActionPayload.batched_action_payload_data)
  return _s;
}
inline const std::string& ActionPayload::_internal_batched_action_payload_data(int index) const {
  return batched_action_payload_data_.Get(index);
}
inline const std::string& ActionPayload::batched_action_payload_data(int index) const {
  // @@protoc_insertion_point(field_get:feedwire.ActionPayload.batched_action_payload_data)
  return _internal_batched_action_payload_data(index);
}
inline std::string* ActionPayload::mutable_batched_action_payload_data(int index) {
  // @@protoc_insertion_point(field_mutable:feedwire.ActionPayload.batched_action_payload_data)
  return batched_action_payload_data_.Mutable(index);
}
inline void ActionPayload::set_batched_action_payload_data(int index, const std::string& value) {
  batched_action_payload_data_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:feedwire.ActionPayload.batched_action_payload_data)
}
inline void ActionPayload::set_batched_action_payload_data(int index, std::string&& value) {
  batched_action_payload_data_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:feedwire.ActionPayload.batched_action_payload_data)
}
inline void ActionPayload::set_batched_action_payload_data(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  batched_action_payload_data_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:feedwire.ActionPayload.batched_action_payload_data)
}
inline void ActionPayload::set_batched_action_payload_data(int index, const void* value, size_t size) {
  batched_action_payload_data_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:feedwire.ActionPayload.batched_action_payload_data)
}
inline std::string* ActionPayload::_internal_add_batched_action_payload_data() {
  return batched_action_payload_data_.Add();
}
inline void ActionPayload::add_batched_action_payload_data(const std::string& value) {
  batched_action_payload_data_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:feedwire.ActionPayload.batched_action_payload_data)
}
inline void ActionPayload::add_batched_action_payload_data(std::string&& value) {
  batched_action_payload_data_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:feedwire.ActionPayload.batched_action_payload_data)
}
inline void ActionPayload::add_batched_action_payload_data(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  batched_action_payload_data_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:feedwire.ActionPayload.batched_action_payload_data)
}
inline void ActionPayload::add_batched_action_payload_data(const void* value, size_t size) {
  batched_action_payload_data_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:feedwire.ActionPayload.batched_action_payload_data)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
ActionPayload::batched_action_payload_data() const {
  // @@protoc_insertion_point(field_list:feedwire.ActionPayload.batched_action_payload_data)
  return batched_action_payload_data_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
ActionPayload::mutable_batched_action_payload_data() {
  // @@protoc_insertion_point(field_mutable_list:feedwire.ActionPayload.batched_action_payload_data)
  return &batched_action_payload_data_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace feedwire

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fpayload_2eproto
