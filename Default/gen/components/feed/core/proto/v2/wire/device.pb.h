// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/feed/core/proto/v2/wire/device.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fdevice_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fdevice_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fdevice_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fdevice_2eproto {
  static const uint32_t offsets[];
};
namespace feedwire {
class Device;
struct DeviceDefaultTypeInternal;
extern DeviceDefaultTypeInternal _Device_default_instance_;
}  // namespace feedwire
PROTOBUF_NAMESPACE_OPEN
template<> ::feedwire::Device* Arena::CreateMaybeMessage<::feedwire::Device>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace feedwire {

// ===================================================================

class Device final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:feedwire.Device) */ {
 public:
  inline Device() : Device(nullptr) {}
  ~Device() override;
  explicit PROTOBUF_CONSTEXPR Device(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Device(const Device& from);
  Device(Device&& from) noexcept
    : Device() {
    *this = ::std::move(from);
  }

  inline Device& operator=(const Device& from) {
    CopyFrom(from);
    return *this;
  }
  inline Device& operator=(Device&& from) noexcept {
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

  static const Device& default_instance() {
    return *internal_default_instance();
  }
  static inline const Device* internal_default_instance() {
    return reinterpret_cast<const Device*>(
               &_Device_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Device& a, Device& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(Device* other) {
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
  void UnsafeArenaSwap(Device* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Device* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Device>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const Device& from);
  void MergeFrom(const Device& from);
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
  void InternalSwap(Device* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "feedwire.Device";
  }
  protected:
  explicit Device(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kManufacturerFieldNumber = 1,
    kModelFieldNumber = 2,
  };
  // optional string manufacturer = 1;
  bool has_manufacturer() const;
  private:
  bool _internal_has_manufacturer() const;
  public:
  void clear_manufacturer();
  const std::string& manufacturer() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_manufacturer(ArgT0&& arg0, ArgT... args);
  std::string* mutable_manufacturer();
  PROTOBUF_NODISCARD std::string* release_manufacturer();
  void set_allocated_manufacturer(std::string* manufacturer);
  private:
  const std::string& _internal_manufacturer() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_manufacturer(const std::string& value);
  std::string* _internal_mutable_manufacturer();
  public:

  // optional string model = 2;
  bool has_model() const;
  private:
  bool _internal_has_model() const;
  public:
  void clear_model();
  const std::string& model() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_model(ArgT0&& arg0, ArgT... args);
  std::string* mutable_model();
  PROTOBUF_NODISCARD std::string* release_model();
  void set_allocated_model(std::string* model);
  private:
  const std::string& _internal_model() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_model(const std::string& value);
  std::string* _internal_mutable_model();
  public:

  // @@protoc_insertion_point(class_scope:feedwire.Device)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr manufacturer_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr model_;
  friend struct ::TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fdevice_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Device

// optional string manufacturer = 1;
inline bool Device::_internal_has_manufacturer() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Device::has_manufacturer() const {
  return _internal_has_manufacturer();
}
inline void Device::clear_manufacturer() {
  manufacturer_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Device::manufacturer() const {
  // @@protoc_insertion_point(field_get:feedwire.Device.manufacturer)
  return _internal_manufacturer();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Device::set_manufacturer(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 manufacturer_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:feedwire.Device.manufacturer)
}
inline std::string* Device::mutable_manufacturer() {
  std::string* _s = _internal_mutable_manufacturer();
  // @@protoc_insertion_point(field_mutable:feedwire.Device.manufacturer)
  return _s;
}
inline const std::string& Device::_internal_manufacturer() const {
  return manufacturer_.Get();
}
inline void Device::_internal_set_manufacturer(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  manufacturer_.Set(value, GetArenaForAllocation());
}
inline std::string* Device::_internal_mutable_manufacturer() {
  _has_bits_[0] |= 0x00000001u;
  return manufacturer_.Mutable(GetArenaForAllocation());
}
inline std::string* Device::release_manufacturer() {
  // @@protoc_insertion_point(field_release:feedwire.Device.manufacturer)
  if (!_internal_has_manufacturer()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = manufacturer_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (manufacturer_.IsDefault()) {
    manufacturer_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Device::set_allocated_manufacturer(std::string* manufacturer) {
  if (manufacturer != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  manufacturer_.SetAllocated(manufacturer, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (manufacturer_.IsDefault()) {
    manufacturer_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:feedwire.Device.manufacturer)
}

// optional string model = 2;
inline bool Device::_internal_has_model() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Device::has_model() const {
  return _internal_has_model();
}
inline void Device::clear_model() {
  model_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Device::model() const {
  // @@protoc_insertion_point(field_get:feedwire.Device.model)
  return _internal_model();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Device::set_model(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 model_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:feedwire.Device.model)
}
inline std::string* Device::mutable_model() {
  std::string* _s = _internal_mutable_model();
  // @@protoc_insertion_point(field_mutable:feedwire.Device.model)
  return _s;
}
inline const std::string& Device::_internal_model() const {
  return model_.Get();
}
inline void Device::_internal_set_model(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  model_.Set(value, GetArenaForAllocation());
}
inline std::string* Device::_internal_mutable_model() {
  _has_bits_[0] |= 0x00000002u;
  return model_.Mutable(GetArenaForAllocation());
}
inline std::string* Device::release_model() {
  // @@protoc_insertion_point(field_release:feedwire.Device.model)
  if (!_internal_has_model()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = model_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (model_.IsDefault()) {
    model_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Device::set_allocated_model(std::string* model) {
  if (model != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  model_.SetAllocated(model, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (model_.IsDefault()) {
    model_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:feedwire.Device.model)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace feedwire

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fdevice_2eproto
