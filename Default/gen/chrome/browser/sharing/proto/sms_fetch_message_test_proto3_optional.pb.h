// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sms_fetch_message_test_proto3_optional.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_sms_5ffetch_5fmessage_5ftest_5fproto3_5foptional_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_sms_5ffetch_5fmessage_5ftest_5fproto3_5foptional_2eproto

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
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_sms_5ffetch_5fmessage_5ftest_5fproto3_5foptional_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_sms_5ffetch_5fmessage_5ftest_5fproto3_5foptional_2eproto {
  static const uint32_t offsets[];
};
namespace chrome_browser_sharing {
class SmsFetchRequest;
struct SmsFetchRequestDefaultTypeInternal;
extern SmsFetchRequestDefaultTypeInternal _SmsFetchRequest_default_instance_;
class SmsFetchResponse;
struct SmsFetchResponseDefaultTypeInternal;
extern SmsFetchResponseDefaultTypeInternal _SmsFetchResponse_default_instance_;
}  // namespace chrome_browser_sharing
PROTOBUF_NAMESPACE_OPEN
template<> ::chrome_browser_sharing::SmsFetchRequest* Arena::CreateMaybeMessage<::chrome_browser_sharing::SmsFetchRequest>(Arena*);
template<> ::chrome_browser_sharing::SmsFetchResponse* Arena::CreateMaybeMessage<::chrome_browser_sharing::SmsFetchResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace chrome_browser_sharing {

enum SmsFetchResponse_FailureType : int {
  SmsFetchResponse_FailureType_FAILURE_TYPE_UNSPECIFIED = 0,
  SmsFetchResponse_FailureType_SMS_NOT_PARSED_OTP_FORMAT_REGEX_NOT_MATCH = 1,
  SmsFetchResponse_FailureType_SMS_NOT_PARSED_HOST_AND_PORT_NOT_PARSED = 2,
  SmsFetchResponse_FailureType_SMS_NOT_PARSED_GURL_NOT_VALID = 3,
  SmsFetchResponse_FailureType_PROMPT_TIMEOUT = 4,
  SmsFetchResponse_FailureType_PROMPT_CANCELLED = 5,
  SmsFetchResponse_FailureType_BACKEND_NOT_AVAILABLE = 6,
  SmsFetchResponse_FailureType_SmsFetchResponse_FailureType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  SmsFetchResponse_FailureType_SmsFetchResponse_FailureType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool SmsFetchResponse_FailureType_IsValid(int value);
constexpr SmsFetchResponse_FailureType SmsFetchResponse_FailureType_FailureType_MIN = SmsFetchResponse_FailureType_FAILURE_TYPE_UNSPECIFIED;
constexpr SmsFetchResponse_FailureType SmsFetchResponse_FailureType_FailureType_MAX = SmsFetchResponse_FailureType_BACKEND_NOT_AVAILABLE;
constexpr int SmsFetchResponse_FailureType_FailureType_ARRAYSIZE = SmsFetchResponse_FailureType_FailureType_MAX + 1;

const std::string& SmsFetchResponse_FailureType_Name(SmsFetchResponse_FailureType value);
template<typename T>
inline const std::string& SmsFetchResponse_FailureType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SmsFetchResponse_FailureType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SmsFetchResponse_FailureType_Name.");
  return SmsFetchResponse_FailureType_Name(static_cast<SmsFetchResponse_FailureType>(enum_t_value));
}
bool SmsFetchResponse_FailureType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, SmsFetchResponse_FailureType* value);
// ===================================================================

class SmsFetchRequest final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:chrome_browser_sharing.SmsFetchRequest) */ {
 public:
  inline SmsFetchRequest() : SmsFetchRequest(nullptr) {}
  ~SmsFetchRequest() override;
  explicit PROTOBUF_CONSTEXPR SmsFetchRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SmsFetchRequest(const SmsFetchRequest& from);
  SmsFetchRequest(SmsFetchRequest&& from) noexcept
    : SmsFetchRequest() {
    *this = ::std::move(from);
  }

  inline SmsFetchRequest& operator=(const SmsFetchRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SmsFetchRequest& operator=(SmsFetchRequest&& from) noexcept {
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

  static const SmsFetchRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SmsFetchRequest* internal_default_instance() {
    return reinterpret_cast<const SmsFetchRequest*>(
               &_SmsFetchRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SmsFetchRequest& a, SmsFetchRequest& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(SmsFetchRequest* other) {
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
  void UnsafeArenaSwap(SmsFetchRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SmsFetchRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SmsFetchRequest>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const SmsFetchRequest& from);
  void MergeFrom(const SmsFetchRequest& from);
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
  void InternalSwap(SmsFetchRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "chrome_browser_sharing.SmsFetchRequest";
  }
  protected:
  explicit SmsFetchRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kOriginsFieldNumber = 1,
  };
  // repeated string origins = 1;
  int origins_size() const;
  private:
  int _internal_origins_size() const;
  public:
  void clear_origins();
  const std::string& origins(int index) const;
  std::string* mutable_origins(int index);
  void set_origins(int index, const std::string& value);
  void set_origins(int index, std::string&& value);
  void set_origins(int index, const char* value);
  void set_origins(int index, const char* value, size_t size);
  std::string* add_origins();
  void add_origins(const std::string& value);
  void add_origins(std::string&& value);
  void add_origins(const char* value);
  void add_origins(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& origins() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_origins();
  private:
  const std::string& _internal_origins(int index) const;
  std::string* _internal_add_origins();
  public:

  // @@protoc_insertion_point(class_scope:chrome_browser_sharing.SmsFetchRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> origins_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_sms_5ffetch_5fmessage_5ftest_5fproto3_5foptional_2eproto;
};
// -------------------------------------------------------------------

class SmsFetchResponse final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:chrome_browser_sharing.SmsFetchResponse) */ {
 public:
  inline SmsFetchResponse() : SmsFetchResponse(nullptr) {}
  ~SmsFetchResponse() override;
  explicit PROTOBUF_CONSTEXPR SmsFetchResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SmsFetchResponse(const SmsFetchResponse& from);
  SmsFetchResponse(SmsFetchResponse&& from) noexcept
    : SmsFetchResponse() {
    *this = ::std::move(from);
  }

  inline SmsFetchResponse& operator=(const SmsFetchResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SmsFetchResponse& operator=(SmsFetchResponse&& from) noexcept {
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

  static const SmsFetchResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const SmsFetchResponse* internal_default_instance() {
    return reinterpret_cast<const SmsFetchResponse*>(
               &_SmsFetchResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(SmsFetchResponse& a, SmsFetchResponse& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(SmsFetchResponse* other) {
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
  void UnsafeArenaSwap(SmsFetchResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SmsFetchResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SmsFetchResponse>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const SmsFetchResponse& from);
  void MergeFrom(const SmsFetchResponse& from);
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
  void InternalSwap(SmsFetchResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "chrome_browser_sharing.SmsFetchResponse";
  }
  protected:
  explicit SmsFetchResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef SmsFetchResponse_FailureType FailureType;
  static constexpr FailureType FAILURE_TYPE_UNSPECIFIED =
    SmsFetchResponse_FailureType_FAILURE_TYPE_UNSPECIFIED;
  static constexpr FailureType SMS_NOT_PARSED_OTP_FORMAT_REGEX_NOT_MATCH =
    SmsFetchResponse_FailureType_SMS_NOT_PARSED_OTP_FORMAT_REGEX_NOT_MATCH;
  static constexpr FailureType SMS_NOT_PARSED_HOST_AND_PORT_NOT_PARSED =
    SmsFetchResponse_FailureType_SMS_NOT_PARSED_HOST_AND_PORT_NOT_PARSED;
  static constexpr FailureType SMS_NOT_PARSED_GURL_NOT_VALID =
    SmsFetchResponse_FailureType_SMS_NOT_PARSED_GURL_NOT_VALID;
  static constexpr FailureType PROMPT_TIMEOUT =
    SmsFetchResponse_FailureType_PROMPT_TIMEOUT;
  static constexpr FailureType PROMPT_CANCELLED =
    SmsFetchResponse_FailureType_PROMPT_CANCELLED;
  static constexpr FailureType BACKEND_NOT_AVAILABLE =
    SmsFetchResponse_FailureType_BACKEND_NOT_AVAILABLE;
  static inline bool FailureType_IsValid(int value) {
    return SmsFetchResponse_FailureType_IsValid(value);
  }
  static constexpr FailureType FailureType_MIN =
    SmsFetchResponse_FailureType_FailureType_MIN;
  static constexpr FailureType FailureType_MAX =
    SmsFetchResponse_FailureType_FailureType_MAX;
  static constexpr int FailureType_ARRAYSIZE =
    SmsFetchResponse_FailureType_FailureType_ARRAYSIZE;
  template<typename T>
  static inline const std::string& FailureType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, FailureType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function FailureType_Name.");
    return SmsFetchResponse_FailureType_Name(enum_t_value);
  }
  static inline bool FailureType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      FailureType* value) {
    return SmsFetchResponse_FailureType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kOriginsFieldNumber = 1,
    kOneTimeCodeFieldNumber = 2,
    kFailureTypeFieldNumber = 3,
  };
  // repeated string origins = 1;
  int origins_size() const;
  private:
  int _internal_origins_size() const;
  public:
  void clear_origins();
  const std::string& origins(int index) const;
  std::string* mutable_origins(int index);
  void set_origins(int index, const std::string& value);
  void set_origins(int index, std::string&& value);
  void set_origins(int index, const char* value);
  void set_origins(int index, const char* value, size_t size);
  std::string* add_origins();
  void add_origins(const std::string& value);
  void add_origins(std::string&& value);
  void add_origins(const char* value);
  void add_origins(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& origins() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_origins();
  private:
  const std::string& _internal_origins(int index) const;
  std::string* _internal_add_origins();
  public:

  // string one_time_code = 2;
  void clear_one_time_code();
  const std::string& one_time_code() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_one_time_code(ArgT0&& arg0, ArgT... args);
  std::string* mutable_one_time_code();
  PROTOBUF_NODISCARD std::string* release_one_time_code();
  void set_allocated_one_time_code(std::string* one_time_code);
  private:
  const std::string& _internal_one_time_code() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_one_time_code(const std::string& value);
  std::string* _internal_mutable_one_time_code();
  public:

  // optional .chrome_browser_sharing.SmsFetchResponse.FailureType failure_type = 3;
  bool has_failure_type() const;
  private:
  bool _internal_has_failure_type() const;
  public:
  void clear_failure_type();
  ::chrome_browser_sharing::SmsFetchResponse_FailureType failure_type() const;
  void set_failure_type(::chrome_browser_sharing::SmsFetchResponse_FailureType value);
  private:
  ::chrome_browser_sharing::SmsFetchResponse_FailureType _internal_failure_type() const;
  void _internal_set_failure_type(::chrome_browser_sharing::SmsFetchResponse_FailureType value);
  public:

  // @@protoc_insertion_point(class_scope:chrome_browser_sharing.SmsFetchResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> origins_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr one_time_code_;
  int failure_type_;
  friend struct ::TableStruct_sms_5ffetch_5fmessage_5ftest_5fproto3_5foptional_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SmsFetchRequest

// repeated string origins = 1;
inline int SmsFetchRequest::_internal_origins_size() const {
  return origins_.size();
}
inline int SmsFetchRequest::origins_size() const {
  return _internal_origins_size();
}
inline void SmsFetchRequest::clear_origins() {
  origins_.Clear();
}
inline std::string* SmsFetchRequest::add_origins() {
  std::string* _s = _internal_add_origins();
  // @@protoc_insertion_point(field_add_mutable:chrome_browser_sharing.SmsFetchRequest.origins)
  return _s;
}
inline const std::string& SmsFetchRequest::_internal_origins(int index) const {
  return origins_.Get(index);
}
inline const std::string& SmsFetchRequest::origins(int index) const {
  // @@protoc_insertion_point(field_get:chrome_browser_sharing.SmsFetchRequest.origins)
  return _internal_origins(index);
}
inline std::string* SmsFetchRequest::mutable_origins(int index) {
  // @@protoc_insertion_point(field_mutable:chrome_browser_sharing.SmsFetchRequest.origins)
  return origins_.Mutable(index);
}
inline void SmsFetchRequest::set_origins(int index, const std::string& value) {
  origins_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:chrome_browser_sharing.SmsFetchRequest.origins)
}
inline void SmsFetchRequest::set_origins(int index, std::string&& value) {
  origins_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:chrome_browser_sharing.SmsFetchRequest.origins)
}
inline void SmsFetchRequest::set_origins(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  origins_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:chrome_browser_sharing.SmsFetchRequest.origins)
}
inline void SmsFetchRequest::set_origins(int index, const char* value, size_t size) {
  origins_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:chrome_browser_sharing.SmsFetchRequest.origins)
}
inline std::string* SmsFetchRequest::_internal_add_origins() {
  return origins_.Add();
}
inline void SmsFetchRequest::add_origins(const std::string& value) {
  origins_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:chrome_browser_sharing.SmsFetchRequest.origins)
}
inline void SmsFetchRequest::add_origins(std::string&& value) {
  origins_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:chrome_browser_sharing.SmsFetchRequest.origins)
}
inline void SmsFetchRequest::add_origins(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  origins_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:chrome_browser_sharing.SmsFetchRequest.origins)
}
inline void SmsFetchRequest::add_origins(const char* value, size_t size) {
  origins_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:chrome_browser_sharing.SmsFetchRequest.origins)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
SmsFetchRequest::origins() const {
  // @@protoc_insertion_point(field_list:chrome_browser_sharing.SmsFetchRequest.origins)
  return origins_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
SmsFetchRequest::mutable_origins() {
  // @@protoc_insertion_point(field_mutable_list:chrome_browser_sharing.SmsFetchRequest.origins)
  return &origins_;
}

// -------------------------------------------------------------------

// SmsFetchResponse

// repeated string origins = 1;
inline int SmsFetchResponse::_internal_origins_size() const {
  return origins_.size();
}
inline int SmsFetchResponse::origins_size() const {
  return _internal_origins_size();
}
inline void SmsFetchResponse::clear_origins() {
  origins_.Clear();
}
inline std::string* SmsFetchResponse::add_origins() {
  std::string* _s = _internal_add_origins();
  // @@protoc_insertion_point(field_add_mutable:chrome_browser_sharing.SmsFetchResponse.origins)
  return _s;
}
inline const std::string& SmsFetchResponse::_internal_origins(int index) const {
  return origins_.Get(index);
}
inline const std::string& SmsFetchResponse::origins(int index) const {
  // @@protoc_insertion_point(field_get:chrome_browser_sharing.SmsFetchResponse.origins)
  return _internal_origins(index);
}
inline std::string* SmsFetchResponse::mutable_origins(int index) {
  // @@protoc_insertion_point(field_mutable:chrome_browser_sharing.SmsFetchResponse.origins)
  return origins_.Mutable(index);
}
inline void SmsFetchResponse::set_origins(int index, const std::string& value) {
  origins_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:chrome_browser_sharing.SmsFetchResponse.origins)
}
inline void SmsFetchResponse::set_origins(int index, std::string&& value) {
  origins_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:chrome_browser_sharing.SmsFetchResponse.origins)
}
inline void SmsFetchResponse::set_origins(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  origins_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:chrome_browser_sharing.SmsFetchResponse.origins)
}
inline void SmsFetchResponse::set_origins(int index, const char* value, size_t size) {
  origins_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:chrome_browser_sharing.SmsFetchResponse.origins)
}
inline std::string* SmsFetchResponse::_internal_add_origins() {
  return origins_.Add();
}
inline void SmsFetchResponse::add_origins(const std::string& value) {
  origins_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:chrome_browser_sharing.SmsFetchResponse.origins)
}
inline void SmsFetchResponse::add_origins(std::string&& value) {
  origins_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:chrome_browser_sharing.SmsFetchResponse.origins)
}
inline void SmsFetchResponse::add_origins(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  origins_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:chrome_browser_sharing.SmsFetchResponse.origins)
}
inline void SmsFetchResponse::add_origins(const char* value, size_t size) {
  origins_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:chrome_browser_sharing.SmsFetchResponse.origins)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
SmsFetchResponse::origins() const {
  // @@protoc_insertion_point(field_list:chrome_browser_sharing.SmsFetchResponse.origins)
  return origins_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
SmsFetchResponse::mutable_origins() {
  // @@protoc_insertion_point(field_mutable_list:chrome_browser_sharing.SmsFetchResponse.origins)
  return &origins_;
}

// string one_time_code = 2;
inline void SmsFetchResponse::clear_one_time_code() {
  one_time_code_.ClearToEmpty();
}
inline const std::string& SmsFetchResponse::one_time_code() const {
  // @@protoc_insertion_point(field_get:chrome_browser_sharing.SmsFetchResponse.one_time_code)
  return _internal_one_time_code();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SmsFetchResponse::set_one_time_code(ArgT0&& arg0, ArgT... args) {
 
 one_time_code_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:chrome_browser_sharing.SmsFetchResponse.one_time_code)
}
inline std::string* SmsFetchResponse::mutable_one_time_code() {
  std::string* _s = _internal_mutable_one_time_code();
  // @@protoc_insertion_point(field_mutable:chrome_browser_sharing.SmsFetchResponse.one_time_code)
  return _s;
}
inline const std::string& SmsFetchResponse::_internal_one_time_code() const {
  return one_time_code_.Get();
}
inline void SmsFetchResponse::_internal_set_one_time_code(const std::string& value) {
  
  one_time_code_.Set(value, GetArenaForAllocation());
}
inline std::string* SmsFetchResponse::_internal_mutable_one_time_code() {
  
  return one_time_code_.Mutable(GetArenaForAllocation());
}
inline std::string* SmsFetchResponse::release_one_time_code() {
  // @@protoc_insertion_point(field_release:chrome_browser_sharing.SmsFetchResponse.one_time_code)
  return one_time_code_.Release();
}
inline void SmsFetchResponse::set_allocated_one_time_code(std::string* one_time_code) {
  if (one_time_code != nullptr) {
    
  } else {
    
  }
  one_time_code_.SetAllocated(one_time_code, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (one_time_code_.IsDefault()) {
    one_time_code_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:chrome_browser_sharing.SmsFetchResponse.one_time_code)
}

// optional .chrome_browser_sharing.SmsFetchResponse.FailureType failure_type = 3;
inline bool SmsFetchResponse::_internal_has_failure_type() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool SmsFetchResponse::has_failure_type() const {
  return _internal_has_failure_type();
}
inline void SmsFetchResponse::clear_failure_type() {
  failure_type_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::chrome_browser_sharing::SmsFetchResponse_FailureType SmsFetchResponse::_internal_failure_type() const {
  return static_cast< ::chrome_browser_sharing::SmsFetchResponse_FailureType >(failure_type_);
}
inline ::chrome_browser_sharing::SmsFetchResponse_FailureType SmsFetchResponse::failure_type() const {
  // @@protoc_insertion_point(field_get:chrome_browser_sharing.SmsFetchResponse.failure_type)
  return _internal_failure_type();
}
inline void SmsFetchResponse::_internal_set_failure_type(::chrome_browser_sharing::SmsFetchResponse_FailureType value) {
  _has_bits_[0] |= 0x00000001u;
  failure_type_ = value;
}
inline void SmsFetchResponse::set_failure_type(::chrome_browser_sharing::SmsFetchResponse_FailureType value) {
  _internal_set_failure_type(value);
  // @@protoc_insertion_point(field_set:chrome_browser_sharing.SmsFetchResponse.failure_type)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace chrome_browser_sharing

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::chrome_browser_sharing::SmsFetchResponse_FailureType> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_sms_5ffetch_5fmessage_5ftest_5fproto3_5foptional_2eproto
