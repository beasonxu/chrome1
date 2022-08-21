// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: feature_extractor.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_feature_5fextractor_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_feature_5fextractor_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_feature_5fextractor_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_feature_5fextractor_2eproto {
  static const uint32_t offsets[];
};
namespace chrome_lang_id {
class FeatureExtractorDescriptor;
struct FeatureExtractorDescriptorDefaultTypeInternal;
extern FeatureExtractorDescriptorDefaultTypeInternal _FeatureExtractorDescriptor_default_instance_;
class FeatureFunctionDescriptor;
struct FeatureFunctionDescriptorDefaultTypeInternal;
extern FeatureFunctionDescriptorDefaultTypeInternal _FeatureFunctionDescriptor_default_instance_;
class Parameter;
struct ParameterDefaultTypeInternal;
extern ParameterDefaultTypeInternal _Parameter_default_instance_;
}  // namespace chrome_lang_id
PROTOBUF_NAMESPACE_OPEN
template<> ::chrome_lang_id::FeatureExtractorDescriptor* Arena::CreateMaybeMessage<::chrome_lang_id::FeatureExtractorDescriptor>(Arena*);
template<> ::chrome_lang_id::FeatureFunctionDescriptor* Arena::CreateMaybeMessage<::chrome_lang_id::FeatureFunctionDescriptor>(Arena*);
template<> ::chrome_lang_id::Parameter* Arena::CreateMaybeMessage<::chrome_lang_id::Parameter>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace chrome_lang_id {

// ===================================================================

class Parameter final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:chrome_lang_id.Parameter) */ {
 public:
  inline Parameter() : Parameter(nullptr) {}
  ~Parameter() override;
  explicit PROTOBUF_CONSTEXPR Parameter(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  Parameter(const Parameter& from);
  Parameter(Parameter&& from) noexcept
    : Parameter() {
    *this = ::std::move(from);
  }

  inline Parameter& operator=(const Parameter& from) {
    CopyFrom(from);
    return *this;
  }
  inline Parameter& operator=(Parameter&& from) noexcept {
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

  static const Parameter& default_instance() {
    return *internal_default_instance();
  }
  static inline const Parameter* internal_default_instance() {
    return reinterpret_cast<const Parameter*>(
               &_Parameter_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Parameter& a, Parameter& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(Parameter* other) {
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
  void UnsafeArenaSwap(Parameter* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  Parameter* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<Parameter>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const Parameter& from);
  void MergeFrom(const Parameter& from);
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
  void InternalSwap(Parameter* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "chrome_lang_id.Parameter";
  }
  protected:
  explicit Parameter(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNameFieldNumber = 1,
    kValueFieldNumber = 2,
  };
  // optional string name = 1;
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

  // optional string value = 2;
  bool has_value() const;
  private:
  bool _internal_has_value() const;
  public:
  void clear_value();
  const std::string& value() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_value(ArgT0&& arg0, ArgT... args);
  std::string* mutable_value();
  PROTOBUF_NODISCARD std::string* release_value();
  void set_allocated_value(std::string* value);
  private:
  const std::string& _internal_value() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_value(const std::string& value);
  std::string* _internal_mutable_value();
  public:

  // @@protoc_insertion_point(class_scope:chrome_lang_id.Parameter)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr value_;
  friend struct ::TableStruct_feature_5fextractor_2eproto;
};
// -------------------------------------------------------------------

class FeatureFunctionDescriptor final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:chrome_lang_id.FeatureFunctionDescriptor) */ {
 public:
  inline FeatureFunctionDescriptor() : FeatureFunctionDescriptor(nullptr) {}
  ~FeatureFunctionDescriptor() override;
  explicit PROTOBUF_CONSTEXPR FeatureFunctionDescriptor(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FeatureFunctionDescriptor(const FeatureFunctionDescriptor& from);
  FeatureFunctionDescriptor(FeatureFunctionDescriptor&& from) noexcept
    : FeatureFunctionDescriptor() {
    *this = ::std::move(from);
  }

  inline FeatureFunctionDescriptor& operator=(const FeatureFunctionDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline FeatureFunctionDescriptor& operator=(FeatureFunctionDescriptor&& from) noexcept {
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

  static const FeatureFunctionDescriptor& default_instance() {
    return *internal_default_instance();
  }
  static inline const FeatureFunctionDescriptor* internal_default_instance() {
    return reinterpret_cast<const FeatureFunctionDescriptor*>(
               &_FeatureFunctionDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(FeatureFunctionDescriptor& a, FeatureFunctionDescriptor& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(FeatureFunctionDescriptor* other) {
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
  void UnsafeArenaSwap(FeatureFunctionDescriptor* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FeatureFunctionDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FeatureFunctionDescriptor>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const FeatureFunctionDescriptor& from);
  void MergeFrom(const FeatureFunctionDescriptor& from);
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
  void InternalSwap(FeatureFunctionDescriptor* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "chrome_lang_id.FeatureFunctionDescriptor";
  }
  protected:
  explicit FeatureFunctionDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kParameterFieldNumber = 4,
    kFeatureFieldNumber = 7,
    kTypeFieldNumber = 1,
    kNameFieldNumber = 2,
    kArgumentFieldNumber = 3,
  };
  // repeated .chrome_lang_id.Parameter parameter = 4;
  int parameter_size() const;
  private:
  int _internal_parameter_size() const;
  public:
  void clear_parameter();
  ::chrome_lang_id::Parameter* mutable_parameter(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::Parameter >*
      mutable_parameter();
  private:
  const ::chrome_lang_id::Parameter& _internal_parameter(int index) const;
  ::chrome_lang_id::Parameter* _internal_add_parameter();
  public:
  const ::chrome_lang_id::Parameter& parameter(int index) const;
  ::chrome_lang_id::Parameter* add_parameter();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::Parameter >&
      parameter() const;

  // repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 7;
  int feature_size() const;
  private:
  int _internal_feature_size() const;
  public:
  void clear_feature();
  ::chrome_lang_id::FeatureFunctionDescriptor* mutable_feature(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >*
      mutable_feature();
  private:
  const ::chrome_lang_id::FeatureFunctionDescriptor& _internal_feature(int index) const;
  ::chrome_lang_id::FeatureFunctionDescriptor* _internal_add_feature();
  public:
  const ::chrome_lang_id::FeatureFunctionDescriptor& feature(int index) const;
  ::chrome_lang_id::FeatureFunctionDescriptor* add_feature();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >&
      feature() const;

  // required string type = 1;
  bool has_type() const;
  private:
  bool _internal_has_type() const;
  public:
  void clear_type();
  const std::string& type() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_type(ArgT0&& arg0, ArgT... args);
  std::string* mutable_type();
  PROTOBUF_NODISCARD std::string* release_type();
  void set_allocated_type(std::string* type);
  private:
  const std::string& _internal_type() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_type(const std::string& value);
  std::string* _internal_mutable_type();
  public:

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

  // optional int32 argument = 3 [default = 0];
  bool has_argument() const;
  private:
  bool _internal_has_argument() const;
  public:
  void clear_argument();
  int32_t argument() const;
  void set_argument(int32_t value);
  private:
  int32_t _internal_argument() const;
  void _internal_set_argument(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:chrome_lang_id.FeatureFunctionDescriptor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::Parameter > parameter_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor > feature_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr type_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  int32_t argument_;
  friend struct ::TableStruct_feature_5fextractor_2eproto;
};
// -------------------------------------------------------------------

class FeatureExtractorDescriptor final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:chrome_lang_id.FeatureExtractorDescriptor) */ {
 public:
  inline FeatureExtractorDescriptor() : FeatureExtractorDescriptor(nullptr) {}
  ~FeatureExtractorDescriptor() override;
  explicit PROTOBUF_CONSTEXPR FeatureExtractorDescriptor(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FeatureExtractorDescriptor(const FeatureExtractorDescriptor& from);
  FeatureExtractorDescriptor(FeatureExtractorDescriptor&& from) noexcept
    : FeatureExtractorDescriptor() {
    *this = ::std::move(from);
  }

  inline FeatureExtractorDescriptor& operator=(const FeatureExtractorDescriptor& from) {
    CopyFrom(from);
    return *this;
  }
  inline FeatureExtractorDescriptor& operator=(FeatureExtractorDescriptor&& from) noexcept {
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

  static const FeatureExtractorDescriptor& default_instance() {
    return *internal_default_instance();
  }
  static inline const FeatureExtractorDescriptor* internal_default_instance() {
    return reinterpret_cast<const FeatureExtractorDescriptor*>(
               &_FeatureExtractorDescriptor_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(FeatureExtractorDescriptor& a, FeatureExtractorDescriptor& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(FeatureExtractorDescriptor* other) {
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
  void UnsafeArenaSwap(FeatureExtractorDescriptor* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FeatureExtractorDescriptor* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FeatureExtractorDescriptor>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const FeatureExtractorDescriptor& from);
  void MergeFrom(const FeatureExtractorDescriptor& from);
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
  void InternalSwap(FeatureExtractorDescriptor* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "chrome_lang_id.FeatureExtractorDescriptor";
  }
  protected:
  explicit FeatureExtractorDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFeatureFieldNumber = 1,
  };
  // repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 1;
  int feature_size() const;
  private:
  int _internal_feature_size() const;
  public:
  void clear_feature();
  ::chrome_lang_id::FeatureFunctionDescriptor* mutable_feature(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >*
      mutable_feature();
  private:
  const ::chrome_lang_id::FeatureFunctionDescriptor& _internal_feature(int index) const;
  ::chrome_lang_id::FeatureFunctionDescriptor* _internal_add_feature();
  public:
  const ::chrome_lang_id::FeatureFunctionDescriptor& feature(int index) const;
  ::chrome_lang_id::FeatureFunctionDescriptor* add_feature();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >&
      feature() const;

  // @@protoc_insertion_point(class_scope:chrome_lang_id.FeatureExtractorDescriptor)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor > feature_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_feature_5fextractor_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Parameter

// optional string name = 1;
inline bool Parameter::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool Parameter::has_name() const {
  return _internal_has_name();
}
inline void Parameter::clear_name() {
  name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& Parameter::name() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Parameter.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Parameter::set_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:chrome_lang_id.Parameter.name)
}
inline std::string* Parameter::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.Parameter.name)
  return _s;
}
inline const std::string& Parameter::_internal_name() const {
  return name_.Get();
}
inline void Parameter::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.Set(value, GetArenaForAllocation());
}
inline std::string* Parameter::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  return name_.Mutable(GetArenaForAllocation());
}
inline std::string* Parameter::release_name() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.Parameter.name)
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
inline void Parameter::set_allocated_name(std::string* name) {
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
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.Parameter.name)
}

// optional string value = 2;
inline bool Parameter::_internal_has_value() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool Parameter::has_value() const {
  return _internal_has_value();
}
inline void Parameter::clear_value() {
  value_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& Parameter::value() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.Parameter.value)
  return _internal_value();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void Parameter::set_value(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 value_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:chrome_lang_id.Parameter.value)
}
inline std::string* Parameter::mutable_value() {
  std::string* _s = _internal_mutable_value();
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.Parameter.value)
  return _s;
}
inline const std::string& Parameter::_internal_value() const {
  return value_.Get();
}
inline void Parameter::_internal_set_value(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  value_.Set(value, GetArenaForAllocation());
}
inline std::string* Parameter::_internal_mutable_value() {
  _has_bits_[0] |= 0x00000002u;
  return value_.Mutable(GetArenaForAllocation());
}
inline std::string* Parameter::release_value() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.Parameter.value)
  if (!_internal_has_value()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = value_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (value_.IsDefault()) {
    value_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void Parameter::set_allocated_value(std::string* value) {
  if (value != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  value_.SetAllocated(value, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (value_.IsDefault()) {
    value_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.Parameter.value)
}

// -------------------------------------------------------------------

// FeatureFunctionDescriptor

// required string type = 1;
inline bool FeatureFunctionDescriptor::_internal_has_type() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool FeatureFunctionDescriptor::has_type() const {
  return _internal_has_type();
}
inline void FeatureFunctionDescriptor::clear_type() {
  type_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& FeatureFunctionDescriptor::type() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.FeatureFunctionDescriptor.type)
  return _internal_type();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FeatureFunctionDescriptor::set_type(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 type_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:chrome_lang_id.FeatureFunctionDescriptor.type)
}
inline std::string* FeatureFunctionDescriptor::mutable_type() {
  std::string* _s = _internal_mutable_type();
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.FeatureFunctionDescriptor.type)
  return _s;
}
inline const std::string& FeatureFunctionDescriptor::_internal_type() const {
  return type_.Get();
}
inline void FeatureFunctionDescriptor::_internal_set_type(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  type_.Set(value, GetArenaForAllocation());
}
inline std::string* FeatureFunctionDescriptor::_internal_mutable_type() {
  _has_bits_[0] |= 0x00000001u;
  return type_.Mutable(GetArenaForAllocation());
}
inline std::string* FeatureFunctionDescriptor::release_type() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.FeatureFunctionDescriptor.type)
  if (!_internal_has_type()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = type_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (type_.IsDefault()) {
    type_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void FeatureFunctionDescriptor::set_allocated_type(std::string* type) {
  if (type != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  type_.SetAllocated(type, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (type_.IsDefault()) {
    type_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.FeatureFunctionDescriptor.type)
}

// optional string name = 2;
inline bool FeatureFunctionDescriptor::_internal_has_name() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool FeatureFunctionDescriptor::has_name() const {
  return _internal_has_name();
}
inline void FeatureFunctionDescriptor::clear_name() {
  name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& FeatureFunctionDescriptor::name() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.FeatureFunctionDescriptor.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void FeatureFunctionDescriptor::set_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:chrome_lang_id.FeatureFunctionDescriptor.name)
}
inline std::string* FeatureFunctionDescriptor::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.FeatureFunctionDescriptor.name)
  return _s;
}
inline const std::string& FeatureFunctionDescriptor::_internal_name() const {
  return name_.Get();
}
inline void FeatureFunctionDescriptor::_internal_set_name(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  name_.Set(value, GetArenaForAllocation());
}
inline std::string* FeatureFunctionDescriptor::_internal_mutable_name() {
  _has_bits_[0] |= 0x00000002u;
  return name_.Mutable(GetArenaForAllocation());
}
inline std::string* FeatureFunctionDescriptor::release_name() {
  // @@protoc_insertion_point(field_release:chrome_lang_id.FeatureFunctionDescriptor.name)
  if (!_internal_has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault()) {
    name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void FeatureFunctionDescriptor::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault()) {
    name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:chrome_lang_id.FeatureFunctionDescriptor.name)
}

// optional int32 argument = 3 [default = 0];
inline bool FeatureFunctionDescriptor::_internal_has_argument() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool FeatureFunctionDescriptor::has_argument() const {
  return _internal_has_argument();
}
inline void FeatureFunctionDescriptor::clear_argument() {
  argument_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline int32_t FeatureFunctionDescriptor::_internal_argument() const {
  return argument_;
}
inline int32_t FeatureFunctionDescriptor::argument() const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.FeatureFunctionDescriptor.argument)
  return _internal_argument();
}
inline void FeatureFunctionDescriptor::_internal_set_argument(int32_t value) {
  _has_bits_[0] |= 0x00000004u;
  argument_ = value;
}
inline void FeatureFunctionDescriptor::set_argument(int32_t value) {
  _internal_set_argument(value);
  // @@protoc_insertion_point(field_set:chrome_lang_id.FeatureFunctionDescriptor.argument)
}

// repeated .chrome_lang_id.Parameter parameter = 4;
inline int FeatureFunctionDescriptor::_internal_parameter_size() const {
  return parameter_.size();
}
inline int FeatureFunctionDescriptor::parameter_size() const {
  return _internal_parameter_size();
}
inline void FeatureFunctionDescriptor::clear_parameter() {
  parameter_.Clear();
}
inline ::chrome_lang_id::Parameter* FeatureFunctionDescriptor::mutable_parameter(int index) {
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.FeatureFunctionDescriptor.parameter)
  return parameter_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::Parameter >*
FeatureFunctionDescriptor::mutable_parameter() {
  // @@protoc_insertion_point(field_mutable_list:chrome_lang_id.FeatureFunctionDescriptor.parameter)
  return &parameter_;
}
inline const ::chrome_lang_id::Parameter& FeatureFunctionDescriptor::_internal_parameter(int index) const {
  return parameter_.Get(index);
}
inline const ::chrome_lang_id::Parameter& FeatureFunctionDescriptor::parameter(int index) const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.FeatureFunctionDescriptor.parameter)
  return _internal_parameter(index);
}
inline ::chrome_lang_id::Parameter* FeatureFunctionDescriptor::_internal_add_parameter() {
  return parameter_.Add();
}
inline ::chrome_lang_id::Parameter* FeatureFunctionDescriptor::add_parameter() {
  ::chrome_lang_id::Parameter* _add = _internal_add_parameter();
  // @@protoc_insertion_point(field_add:chrome_lang_id.FeatureFunctionDescriptor.parameter)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::Parameter >&
FeatureFunctionDescriptor::parameter() const {
  // @@protoc_insertion_point(field_list:chrome_lang_id.FeatureFunctionDescriptor.parameter)
  return parameter_;
}

// repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 7;
inline int FeatureFunctionDescriptor::_internal_feature_size() const {
  return feature_.size();
}
inline int FeatureFunctionDescriptor::feature_size() const {
  return _internal_feature_size();
}
inline void FeatureFunctionDescriptor::clear_feature() {
  feature_.Clear();
}
inline ::chrome_lang_id::FeatureFunctionDescriptor* FeatureFunctionDescriptor::mutable_feature(int index) {
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.FeatureFunctionDescriptor.feature)
  return feature_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >*
FeatureFunctionDescriptor::mutable_feature() {
  // @@protoc_insertion_point(field_mutable_list:chrome_lang_id.FeatureFunctionDescriptor.feature)
  return &feature_;
}
inline const ::chrome_lang_id::FeatureFunctionDescriptor& FeatureFunctionDescriptor::_internal_feature(int index) const {
  return feature_.Get(index);
}
inline const ::chrome_lang_id::FeatureFunctionDescriptor& FeatureFunctionDescriptor::feature(int index) const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.FeatureFunctionDescriptor.feature)
  return _internal_feature(index);
}
inline ::chrome_lang_id::FeatureFunctionDescriptor* FeatureFunctionDescriptor::_internal_add_feature() {
  return feature_.Add();
}
inline ::chrome_lang_id::FeatureFunctionDescriptor* FeatureFunctionDescriptor::add_feature() {
  ::chrome_lang_id::FeatureFunctionDescriptor* _add = _internal_add_feature();
  // @@protoc_insertion_point(field_add:chrome_lang_id.FeatureFunctionDescriptor.feature)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >&
FeatureFunctionDescriptor::feature() const {
  // @@protoc_insertion_point(field_list:chrome_lang_id.FeatureFunctionDescriptor.feature)
  return feature_;
}

// -------------------------------------------------------------------

// FeatureExtractorDescriptor

// repeated .chrome_lang_id.FeatureFunctionDescriptor feature = 1;
inline int FeatureExtractorDescriptor::_internal_feature_size() const {
  return feature_.size();
}
inline int FeatureExtractorDescriptor::feature_size() const {
  return _internal_feature_size();
}
inline void FeatureExtractorDescriptor::clear_feature() {
  feature_.Clear();
}
inline ::chrome_lang_id::FeatureFunctionDescriptor* FeatureExtractorDescriptor::mutable_feature(int index) {
  // @@protoc_insertion_point(field_mutable:chrome_lang_id.FeatureExtractorDescriptor.feature)
  return feature_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >*
FeatureExtractorDescriptor::mutable_feature() {
  // @@protoc_insertion_point(field_mutable_list:chrome_lang_id.FeatureExtractorDescriptor.feature)
  return &feature_;
}
inline const ::chrome_lang_id::FeatureFunctionDescriptor& FeatureExtractorDescriptor::_internal_feature(int index) const {
  return feature_.Get(index);
}
inline const ::chrome_lang_id::FeatureFunctionDescriptor& FeatureExtractorDescriptor::feature(int index) const {
  // @@protoc_insertion_point(field_get:chrome_lang_id.FeatureExtractorDescriptor.feature)
  return _internal_feature(index);
}
inline ::chrome_lang_id::FeatureFunctionDescriptor* FeatureExtractorDescriptor::_internal_add_feature() {
  return feature_.Add();
}
inline ::chrome_lang_id::FeatureFunctionDescriptor* FeatureExtractorDescriptor::add_feature() {
  ::chrome_lang_id::FeatureFunctionDescriptor* _add = _internal_add_feature();
  // @@protoc_insertion_point(field_add:chrome_lang_id.FeatureExtractorDescriptor.feature)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::chrome_lang_id::FeatureFunctionDescriptor >&
FeatureExtractorDescriptor::feature() const {
  // @@protoc_insertion_point(field_list:chrome_lang_id.FeatureExtractorDescriptor.feature)
  return feature_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace chrome_lang_id

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_feature_5fextractor_2eproto
