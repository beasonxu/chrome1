// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow_lite_support/cc/task/core/proto/external_file.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_5flite_5fsupport_2fcc_2ftask_2fcore_2fproto_2fexternal_5ffile_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_5flite_5fsupport_2fcc_2ftask_2fcore_2fproto_2fexternal_5ffile_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_5flite_5fsupport_2fcc_2ftask_2fcore_2fproto_2fexternal_5ffile_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_5flite_5fsupport_2fcc_2ftask_2fcore_2fproto_2fexternal_5ffile_2eproto {
  static const uint32_t offsets[];
};
namespace tflite {
namespace task {
namespace core {
class ExternalFile;
struct ExternalFileDefaultTypeInternal;
extern ExternalFileDefaultTypeInternal _ExternalFile_default_instance_;
class FileDescriptorMeta;
struct FileDescriptorMetaDefaultTypeInternal;
extern FileDescriptorMetaDefaultTypeInternal _FileDescriptorMeta_default_instance_;
}  // namespace core
}  // namespace task
}  // namespace tflite
PROTOBUF_NAMESPACE_OPEN
template<> ::tflite::task::core::ExternalFile* Arena::CreateMaybeMessage<::tflite::task::core::ExternalFile>(Arena*);
template<> ::tflite::task::core::FileDescriptorMeta* Arena::CreateMaybeMessage<::tflite::task::core::FileDescriptorMeta>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tflite {
namespace task {
namespace core {

// ===================================================================

class ExternalFile final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:tflite.task.core.ExternalFile) */ {
 public:
  inline ExternalFile() : ExternalFile(nullptr) {}
  ~ExternalFile() override;
  explicit PROTOBUF_CONSTEXPR ExternalFile(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ExternalFile(const ExternalFile& from);
  ExternalFile(ExternalFile&& from) noexcept
    : ExternalFile() {
    *this = ::std::move(from);
  }

  inline ExternalFile& operator=(const ExternalFile& from) {
    CopyFrom(from);
    return *this;
  }
  inline ExternalFile& operator=(ExternalFile&& from) noexcept {
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

  static const ExternalFile& default_instance() {
    return *internal_default_instance();
  }
  static inline const ExternalFile* internal_default_instance() {
    return reinterpret_cast<const ExternalFile*>(
               &_ExternalFile_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ExternalFile& a, ExternalFile& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(ExternalFile* other) {
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
  void UnsafeArenaSwap(ExternalFile* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ExternalFile* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ExternalFile>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const ExternalFile& from);
  void MergeFrom(const ExternalFile& from);
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
  void InternalSwap(ExternalFile* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tflite.task.core.ExternalFile";
  }
  protected:
  explicit ExternalFile(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFileNameFieldNumber = 1,
    kFileContentFieldNumber = 2,
    kFileDescriptorMetaFieldNumber = 4,
  };
  // optional string file_name = 1;
  bool has_file_name() const;
  private:
  bool _internal_has_file_name() const;
  public:
  void clear_file_name();
  const std::string& file_name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_file_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_file_name();
  PROTOBUF_NODISCARD std::string* release_file_name();
  void set_allocated_file_name(std::string* file_name);
  private:
  const std::string& _internal_file_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_file_name(const std::string& value);
  std::string* _internal_mutable_file_name();
  public:

  // optional bytes file_content = 2;
  bool has_file_content() const;
  private:
  bool _internal_has_file_content() const;
  public:
  void clear_file_content();
  const std::string& file_content() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_file_content(ArgT0&& arg0, ArgT... args);
  std::string* mutable_file_content();
  PROTOBUF_NODISCARD std::string* release_file_content();
  void set_allocated_file_content(std::string* file_content);
  private:
  const std::string& _internal_file_content() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_file_content(const std::string& value);
  std::string* _internal_mutable_file_content();
  public:

  // optional .tflite.task.core.FileDescriptorMeta file_descriptor_meta = 4;
  bool has_file_descriptor_meta() const;
  private:
  bool _internal_has_file_descriptor_meta() const;
  public:
  void clear_file_descriptor_meta();
  const ::tflite::task::core::FileDescriptorMeta& file_descriptor_meta() const;
  PROTOBUF_NODISCARD ::tflite::task::core::FileDescriptorMeta* release_file_descriptor_meta();
  ::tflite::task::core::FileDescriptorMeta* mutable_file_descriptor_meta();
  void set_allocated_file_descriptor_meta(::tflite::task::core::FileDescriptorMeta* file_descriptor_meta);
  private:
  const ::tflite::task::core::FileDescriptorMeta& _internal_file_descriptor_meta() const;
  ::tflite::task::core::FileDescriptorMeta* _internal_mutable_file_descriptor_meta();
  public:
  void unsafe_arena_set_allocated_file_descriptor_meta(
      ::tflite::task::core::FileDescriptorMeta* file_descriptor_meta);
  ::tflite::task::core::FileDescriptorMeta* unsafe_arena_release_file_descriptor_meta();

  // @@protoc_insertion_point(class_scope:tflite.task.core.ExternalFile)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr file_name_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr file_content_;
  ::tflite::task::core::FileDescriptorMeta* file_descriptor_meta_;
  friend struct ::TableStruct_tensorflow_5flite_5fsupport_2fcc_2ftask_2fcore_2fproto_2fexternal_5ffile_2eproto;
};
// -------------------------------------------------------------------

class FileDescriptorMeta final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:tflite.task.core.FileDescriptorMeta) */ {
 public:
  inline FileDescriptorMeta() : FileDescriptorMeta(nullptr) {}
  ~FileDescriptorMeta() override;
  explicit PROTOBUF_CONSTEXPR FileDescriptorMeta(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  FileDescriptorMeta(const FileDescriptorMeta& from);
  FileDescriptorMeta(FileDescriptorMeta&& from) noexcept
    : FileDescriptorMeta() {
    *this = ::std::move(from);
  }

  inline FileDescriptorMeta& operator=(const FileDescriptorMeta& from) {
    CopyFrom(from);
    return *this;
  }
  inline FileDescriptorMeta& operator=(FileDescriptorMeta&& from) noexcept {
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

  static const FileDescriptorMeta& default_instance() {
    return *internal_default_instance();
  }
  static inline const FileDescriptorMeta* internal_default_instance() {
    return reinterpret_cast<const FileDescriptorMeta*>(
               &_FileDescriptorMeta_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(FileDescriptorMeta& a, FileDescriptorMeta& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(FileDescriptorMeta* other) {
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
  void UnsafeArenaSwap(FileDescriptorMeta* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  FileDescriptorMeta* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<FileDescriptorMeta>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const FileDescriptorMeta& from);
  void MergeFrom(const FileDescriptorMeta& from);
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
  void InternalSwap(FileDescriptorMeta* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tflite.task.core.FileDescriptorMeta";
  }
  protected:
  explicit FileDescriptorMeta(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kLengthFieldNumber = 2,
    kOffsetFieldNumber = 3,
    kFdFieldNumber = 1,
  };
  // optional int64 length = 2;
  bool has_length() const;
  private:
  bool _internal_has_length() const;
  public:
  void clear_length();
  int64_t length() const;
  void set_length(int64_t value);
  private:
  int64_t _internal_length() const;
  void _internal_set_length(int64_t value);
  public:

  // optional int64 offset = 3;
  bool has_offset() const;
  private:
  bool _internal_has_offset() const;
  public:
  void clear_offset();
  int64_t offset() const;
  void set_offset(int64_t value);
  private:
  int64_t _internal_offset() const;
  void _internal_set_offset(int64_t value);
  public:

  // optional int32 fd = 1;
  bool has_fd() const;
  private:
  bool _internal_has_fd() const;
  public:
  void clear_fd();
  int32_t fd() const;
  void set_fd(int32_t value);
  private:
  int32_t _internal_fd() const;
  void _internal_set_fd(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:tflite.task.core.FileDescriptorMeta)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int64_t length_;
  int64_t offset_;
  int32_t fd_;
  friend struct ::TableStruct_tensorflow_5flite_5fsupport_2fcc_2ftask_2fcore_2fproto_2fexternal_5ffile_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ExternalFile

// optional string file_name = 1;
inline bool ExternalFile::_internal_has_file_name() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool ExternalFile::has_file_name() const {
  return _internal_has_file_name();
}
inline void ExternalFile::clear_file_name() {
  file_name_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& ExternalFile::file_name() const {
  // @@protoc_insertion_point(field_get:tflite.task.core.ExternalFile.file_name)
  return _internal_file_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ExternalFile::set_file_name(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 file_name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:tflite.task.core.ExternalFile.file_name)
}
inline std::string* ExternalFile::mutable_file_name() {
  std::string* _s = _internal_mutable_file_name();
  // @@protoc_insertion_point(field_mutable:tflite.task.core.ExternalFile.file_name)
  return _s;
}
inline const std::string& ExternalFile::_internal_file_name() const {
  return file_name_.Get();
}
inline void ExternalFile::_internal_set_file_name(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  file_name_.Set(value, GetArenaForAllocation());
}
inline std::string* ExternalFile::_internal_mutable_file_name() {
  _has_bits_[0] |= 0x00000001u;
  return file_name_.Mutable(GetArenaForAllocation());
}
inline std::string* ExternalFile::release_file_name() {
  // @@protoc_insertion_point(field_release:tflite.task.core.ExternalFile.file_name)
  if (!_internal_has_file_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = file_name_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (file_name_.IsDefault()) {
    file_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ExternalFile::set_allocated_file_name(std::string* file_name) {
  if (file_name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  file_name_.SetAllocated(file_name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (file_name_.IsDefault()) {
    file_name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:tflite.task.core.ExternalFile.file_name)
}

// optional bytes file_content = 2;
inline bool ExternalFile::_internal_has_file_content() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool ExternalFile::has_file_content() const {
  return _internal_has_file_content();
}
inline void ExternalFile::clear_file_content() {
  file_content_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& ExternalFile::file_content() const {
  // @@protoc_insertion_point(field_get:tflite.task.core.ExternalFile.file_content)
  return _internal_file_content();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ExternalFile::set_file_content(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 file_content_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:tflite.task.core.ExternalFile.file_content)
}
inline std::string* ExternalFile::mutable_file_content() {
  std::string* _s = _internal_mutable_file_content();
  // @@protoc_insertion_point(field_mutable:tflite.task.core.ExternalFile.file_content)
  return _s;
}
inline const std::string& ExternalFile::_internal_file_content() const {
  return file_content_.Get();
}
inline void ExternalFile::_internal_set_file_content(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  file_content_.Set(value, GetArenaForAllocation());
}
inline std::string* ExternalFile::_internal_mutable_file_content() {
  _has_bits_[0] |= 0x00000002u;
  return file_content_.Mutable(GetArenaForAllocation());
}
inline std::string* ExternalFile::release_file_content() {
  // @@protoc_insertion_point(field_release:tflite.task.core.ExternalFile.file_content)
  if (!_internal_has_file_content()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = file_content_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (file_content_.IsDefault()) {
    file_content_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void ExternalFile::set_allocated_file_content(std::string* file_content) {
  if (file_content != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  file_content_.SetAllocated(file_content, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (file_content_.IsDefault()) {
    file_content_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:tflite.task.core.ExternalFile.file_content)
}

// optional .tflite.task.core.FileDescriptorMeta file_descriptor_meta = 4;
inline bool ExternalFile::_internal_has_file_descriptor_meta() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || file_descriptor_meta_ != nullptr);
  return value;
}
inline bool ExternalFile::has_file_descriptor_meta() const {
  return _internal_has_file_descriptor_meta();
}
inline void ExternalFile::clear_file_descriptor_meta() {
  if (file_descriptor_meta_ != nullptr) file_descriptor_meta_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
inline const ::tflite::task::core::FileDescriptorMeta& ExternalFile::_internal_file_descriptor_meta() const {
  const ::tflite::task::core::FileDescriptorMeta* p = file_descriptor_meta_;
  return p != nullptr ? *p : reinterpret_cast<const ::tflite::task::core::FileDescriptorMeta&>(
      ::tflite::task::core::_FileDescriptorMeta_default_instance_);
}
inline const ::tflite::task::core::FileDescriptorMeta& ExternalFile::file_descriptor_meta() const {
  // @@protoc_insertion_point(field_get:tflite.task.core.ExternalFile.file_descriptor_meta)
  return _internal_file_descriptor_meta();
}
inline void ExternalFile::unsafe_arena_set_allocated_file_descriptor_meta(
    ::tflite::task::core::FileDescriptorMeta* file_descriptor_meta) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(file_descriptor_meta_);
  }
  file_descriptor_meta_ = file_descriptor_meta;
  if (file_descriptor_meta) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:tflite.task.core.ExternalFile.file_descriptor_meta)
}
inline ::tflite::task::core::FileDescriptorMeta* ExternalFile::release_file_descriptor_meta() {
  _has_bits_[0] &= ~0x00000004u;
  ::tflite::task::core::FileDescriptorMeta* temp = file_descriptor_meta_;
  file_descriptor_meta_ = nullptr;
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
inline ::tflite::task::core::FileDescriptorMeta* ExternalFile::unsafe_arena_release_file_descriptor_meta() {
  // @@protoc_insertion_point(field_release:tflite.task.core.ExternalFile.file_descriptor_meta)
  _has_bits_[0] &= ~0x00000004u;
  ::tflite::task::core::FileDescriptorMeta* temp = file_descriptor_meta_;
  file_descriptor_meta_ = nullptr;
  return temp;
}
inline ::tflite::task::core::FileDescriptorMeta* ExternalFile::_internal_mutable_file_descriptor_meta() {
  _has_bits_[0] |= 0x00000004u;
  if (file_descriptor_meta_ == nullptr) {
    auto* p = CreateMaybeMessage<::tflite::task::core::FileDescriptorMeta>(GetArenaForAllocation());
    file_descriptor_meta_ = p;
  }
  return file_descriptor_meta_;
}
inline ::tflite::task::core::FileDescriptorMeta* ExternalFile::mutable_file_descriptor_meta() {
  ::tflite::task::core::FileDescriptorMeta* _msg = _internal_mutable_file_descriptor_meta();
  // @@protoc_insertion_point(field_mutable:tflite.task.core.ExternalFile.file_descriptor_meta)
  return _msg;
}
inline void ExternalFile::set_allocated_file_descriptor_meta(::tflite::task::core::FileDescriptorMeta* file_descriptor_meta) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete file_descriptor_meta_;
  }
  if (file_descriptor_meta) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(file_descriptor_meta);
    if (message_arena != submessage_arena) {
      file_descriptor_meta = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, file_descriptor_meta, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  file_descriptor_meta_ = file_descriptor_meta;
  // @@protoc_insertion_point(field_set_allocated:tflite.task.core.ExternalFile.file_descriptor_meta)
}

// -------------------------------------------------------------------

// FileDescriptorMeta

// optional int32 fd = 1;
inline bool FileDescriptorMeta::_internal_has_fd() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool FileDescriptorMeta::has_fd() const {
  return _internal_has_fd();
}
inline void FileDescriptorMeta::clear_fd() {
  fd_ = 0;
  _has_bits_[0] &= ~0x00000004u;
}
inline int32_t FileDescriptorMeta::_internal_fd() const {
  return fd_;
}
inline int32_t FileDescriptorMeta::fd() const {
  // @@protoc_insertion_point(field_get:tflite.task.core.FileDescriptorMeta.fd)
  return _internal_fd();
}
inline void FileDescriptorMeta::_internal_set_fd(int32_t value) {
  _has_bits_[0] |= 0x00000004u;
  fd_ = value;
}
inline void FileDescriptorMeta::set_fd(int32_t value) {
  _internal_set_fd(value);
  // @@protoc_insertion_point(field_set:tflite.task.core.FileDescriptorMeta.fd)
}

// optional int64 length = 2;
inline bool FileDescriptorMeta::_internal_has_length() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool FileDescriptorMeta::has_length() const {
  return _internal_has_length();
}
inline void FileDescriptorMeta::clear_length() {
  length_ = int64_t{0};
  _has_bits_[0] &= ~0x00000001u;
}
inline int64_t FileDescriptorMeta::_internal_length() const {
  return length_;
}
inline int64_t FileDescriptorMeta::length() const {
  // @@protoc_insertion_point(field_get:tflite.task.core.FileDescriptorMeta.length)
  return _internal_length();
}
inline void FileDescriptorMeta::_internal_set_length(int64_t value) {
  _has_bits_[0] |= 0x00000001u;
  length_ = value;
}
inline void FileDescriptorMeta::set_length(int64_t value) {
  _internal_set_length(value);
  // @@protoc_insertion_point(field_set:tflite.task.core.FileDescriptorMeta.length)
}

// optional int64 offset = 3;
inline bool FileDescriptorMeta::_internal_has_offset() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool FileDescriptorMeta::has_offset() const {
  return _internal_has_offset();
}
inline void FileDescriptorMeta::clear_offset() {
  offset_ = int64_t{0};
  _has_bits_[0] &= ~0x00000002u;
}
inline int64_t FileDescriptorMeta::_internal_offset() const {
  return offset_;
}
inline int64_t FileDescriptorMeta::offset() const {
  // @@protoc_insertion_point(field_get:tflite.task.core.FileDescriptorMeta.offset)
  return _internal_offset();
}
inline void FileDescriptorMeta::_internal_set_offset(int64_t value) {
  _has_bits_[0] |= 0x00000002u;
  offset_ = value;
}
inline void FileDescriptorMeta::set_offset(int64_t value) {
  _internal_set_offset(value);
  // @@protoc_insertion_point(field_set:tflite.task.core.FileDescriptorMeta.offset)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace core
}  // namespace task
}  // namespace tflite

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_5flite_5fsupport_2fcc_2ftask_2fcore_2fproto_2fexternal_5ffile_2eproto
