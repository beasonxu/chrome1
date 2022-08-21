// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cookie_change_subscriptions.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_cookie_5fchange_5fsubscriptions_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_cookie_5fchange_5fsubscriptions_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_cookie_5fchange_5fsubscriptions_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_cookie_5fchange_5fsubscriptions_2eproto {
  static const uint32_t offsets[];
};
namespace content {
namespace proto {
class CookieChangeSubscriptionProto;
struct CookieChangeSubscriptionProtoDefaultTypeInternal;
extern CookieChangeSubscriptionProtoDefaultTypeInternal _CookieChangeSubscriptionProto_default_instance_;
class CookieChangeSubscriptionsProto;
struct CookieChangeSubscriptionsProtoDefaultTypeInternal;
extern CookieChangeSubscriptionsProtoDefaultTypeInternal _CookieChangeSubscriptionsProto_default_instance_;
}  // namespace proto
}  // namespace content
PROTOBUF_NAMESPACE_OPEN
template<> ::content::proto::CookieChangeSubscriptionProto* Arena::CreateMaybeMessage<::content::proto::CookieChangeSubscriptionProto>(Arena*);
template<> ::content::proto::CookieChangeSubscriptionsProto* Arena::CreateMaybeMessage<::content::proto::CookieChangeSubscriptionsProto>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace content {
namespace proto {

enum CookieMatchType : int {
  EQUALS = 0,
  STARTS_WITH = 1,
  CookieMatchType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  CookieMatchType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool CookieMatchType_IsValid(int value);
constexpr CookieMatchType CookieMatchType_MIN = EQUALS;
constexpr CookieMatchType CookieMatchType_MAX = STARTS_WITH;
constexpr int CookieMatchType_ARRAYSIZE = CookieMatchType_MAX + 1;

const std::string& CookieMatchType_Name(CookieMatchType value);
template<typename T>
inline const std::string& CookieMatchType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CookieMatchType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CookieMatchType_Name.");
  return CookieMatchType_Name(static_cast<CookieMatchType>(enum_t_value));
}
bool CookieMatchType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, CookieMatchType* value);
// ===================================================================

class CookieChangeSubscriptionProto final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:content.proto.CookieChangeSubscriptionProto) */ {
 public:
  inline CookieChangeSubscriptionProto() : CookieChangeSubscriptionProto(nullptr) {}
  ~CookieChangeSubscriptionProto() override;
  explicit PROTOBUF_CONSTEXPR CookieChangeSubscriptionProto(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CookieChangeSubscriptionProto(const CookieChangeSubscriptionProto& from);
  CookieChangeSubscriptionProto(CookieChangeSubscriptionProto&& from) noexcept
    : CookieChangeSubscriptionProto() {
    *this = ::std::move(from);
  }

  inline CookieChangeSubscriptionProto& operator=(const CookieChangeSubscriptionProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline CookieChangeSubscriptionProto& operator=(CookieChangeSubscriptionProto&& from) noexcept {
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

  static const CookieChangeSubscriptionProto& default_instance() {
    return *internal_default_instance();
  }
  static inline const CookieChangeSubscriptionProto* internal_default_instance() {
    return reinterpret_cast<const CookieChangeSubscriptionProto*>(
               &_CookieChangeSubscriptionProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CookieChangeSubscriptionProto& a, CookieChangeSubscriptionProto& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(CookieChangeSubscriptionProto* other) {
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
  void UnsafeArenaSwap(CookieChangeSubscriptionProto* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CookieChangeSubscriptionProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CookieChangeSubscriptionProto>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const CookieChangeSubscriptionProto& from);
  void MergeFrom(const CookieChangeSubscriptionProto& from);
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
  void InternalSwap(CookieChangeSubscriptionProto* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "content.proto.CookieChangeSubscriptionProto";
  }
  protected:
  explicit CookieChangeSubscriptionProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUrlFieldNumber = 1,
    kNameFieldNumber = 2,
    kMatchTypeFieldNumber = 3,
  };
  // string url = 1;
  void clear_url();
  const std::string& url() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_url(ArgT0&& arg0, ArgT... args);
  std::string* mutable_url();
  PROTOBUF_NODISCARD std::string* release_url();
  void set_allocated_url(std::string* url);
  private:
  const std::string& _internal_url() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_url(const std::string& value);
  std::string* _internal_mutable_url();
  public:

  // string name = 2;
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

  // .content.proto.CookieMatchType match_type = 3;
  void clear_match_type();
  ::content::proto::CookieMatchType match_type() const;
  void set_match_type(::content::proto::CookieMatchType value);
  private:
  ::content::proto::CookieMatchType _internal_match_type() const;
  void _internal_set_match_type(::content::proto::CookieMatchType value);
  public:

  // @@protoc_insertion_point(class_scope:content.proto.CookieChangeSubscriptionProto)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr url_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
  int match_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cookie_5fchange_5fsubscriptions_2eproto;
};
// -------------------------------------------------------------------

class CookieChangeSubscriptionsProto final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:content.proto.CookieChangeSubscriptionsProto) */ {
 public:
  inline CookieChangeSubscriptionsProto() : CookieChangeSubscriptionsProto(nullptr) {}
  ~CookieChangeSubscriptionsProto() override;
  explicit PROTOBUF_CONSTEXPR CookieChangeSubscriptionsProto(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CookieChangeSubscriptionsProto(const CookieChangeSubscriptionsProto& from);
  CookieChangeSubscriptionsProto(CookieChangeSubscriptionsProto&& from) noexcept
    : CookieChangeSubscriptionsProto() {
    *this = ::std::move(from);
  }

  inline CookieChangeSubscriptionsProto& operator=(const CookieChangeSubscriptionsProto& from) {
    CopyFrom(from);
    return *this;
  }
  inline CookieChangeSubscriptionsProto& operator=(CookieChangeSubscriptionsProto&& from) noexcept {
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

  static const CookieChangeSubscriptionsProto& default_instance() {
    return *internal_default_instance();
  }
  static inline const CookieChangeSubscriptionsProto* internal_default_instance() {
    return reinterpret_cast<const CookieChangeSubscriptionsProto*>(
               &_CookieChangeSubscriptionsProto_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(CookieChangeSubscriptionsProto& a, CookieChangeSubscriptionsProto& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(CookieChangeSubscriptionsProto* other) {
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
  void UnsafeArenaSwap(CookieChangeSubscriptionsProto* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CookieChangeSubscriptionsProto* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CookieChangeSubscriptionsProto>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const CookieChangeSubscriptionsProto& from);
  void MergeFrom(const CookieChangeSubscriptionsProto& from);
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
  void InternalSwap(CookieChangeSubscriptionsProto* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "content.proto.CookieChangeSubscriptionsProto";
  }
  protected:
  explicit CookieChangeSubscriptionsProto(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSubscriptionsFieldNumber = 1,
  };
  // repeated .content.proto.CookieChangeSubscriptionProto subscriptions = 1;
  int subscriptions_size() const;
  private:
  int _internal_subscriptions_size() const;
  public:
  void clear_subscriptions();
  ::content::proto::CookieChangeSubscriptionProto* mutable_subscriptions(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::content::proto::CookieChangeSubscriptionProto >*
      mutable_subscriptions();
  private:
  const ::content::proto::CookieChangeSubscriptionProto& _internal_subscriptions(int index) const;
  ::content::proto::CookieChangeSubscriptionProto* _internal_add_subscriptions();
  public:
  const ::content::proto::CookieChangeSubscriptionProto& subscriptions(int index) const;
  ::content::proto::CookieChangeSubscriptionProto* add_subscriptions();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::content::proto::CookieChangeSubscriptionProto >&
      subscriptions() const;

  // @@protoc_insertion_point(class_scope:content.proto.CookieChangeSubscriptionsProto)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::content::proto::CookieChangeSubscriptionProto > subscriptions_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_cookie_5fchange_5fsubscriptions_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CookieChangeSubscriptionProto

// string url = 1;
inline void CookieChangeSubscriptionProto::clear_url() {
  url_.ClearToEmpty();
}
inline const std::string& CookieChangeSubscriptionProto::url() const {
  // @@protoc_insertion_point(field_get:content.proto.CookieChangeSubscriptionProto.url)
  return _internal_url();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CookieChangeSubscriptionProto::set_url(ArgT0&& arg0, ArgT... args) {
 
 url_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:content.proto.CookieChangeSubscriptionProto.url)
}
inline std::string* CookieChangeSubscriptionProto::mutable_url() {
  std::string* _s = _internal_mutable_url();
  // @@protoc_insertion_point(field_mutable:content.proto.CookieChangeSubscriptionProto.url)
  return _s;
}
inline const std::string& CookieChangeSubscriptionProto::_internal_url() const {
  return url_.Get();
}
inline void CookieChangeSubscriptionProto::_internal_set_url(const std::string& value) {
  
  url_.Set(value, GetArenaForAllocation());
}
inline std::string* CookieChangeSubscriptionProto::_internal_mutable_url() {
  
  return url_.Mutable(GetArenaForAllocation());
}
inline std::string* CookieChangeSubscriptionProto::release_url() {
  // @@protoc_insertion_point(field_release:content.proto.CookieChangeSubscriptionProto.url)
  return url_.Release();
}
inline void CookieChangeSubscriptionProto::set_allocated_url(std::string* url) {
  if (url != nullptr) {
    
  } else {
    
  }
  url_.SetAllocated(url, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (url_.IsDefault()) {
    url_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:content.proto.CookieChangeSubscriptionProto.url)
}

// string name = 2;
inline void CookieChangeSubscriptionProto::clear_name() {
  name_.ClearToEmpty();
}
inline const std::string& CookieChangeSubscriptionProto::name() const {
  // @@protoc_insertion_point(field_get:content.proto.CookieChangeSubscriptionProto.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CookieChangeSubscriptionProto::set_name(ArgT0&& arg0, ArgT... args) {
 
 name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:content.proto.CookieChangeSubscriptionProto.name)
}
inline std::string* CookieChangeSubscriptionProto::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:content.proto.CookieChangeSubscriptionProto.name)
  return _s;
}
inline const std::string& CookieChangeSubscriptionProto::_internal_name() const {
  return name_.Get();
}
inline void CookieChangeSubscriptionProto::_internal_set_name(const std::string& value) {
  
  name_.Set(value, GetArenaForAllocation());
}
inline std::string* CookieChangeSubscriptionProto::_internal_mutable_name() {
  
  return name_.Mutable(GetArenaForAllocation());
}
inline std::string* CookieChangeSubscriptionProto::release_name() {
  // @@protoc_insertion_point(field_release:content.proto.CookieChangeSubscriptionProto.name)
  return name_.Release();
}
inline void CookieChangeSubscriptionProto::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (name_.IsDefault()) {
    name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:content.proto.CookieChangeSubscriptionProto.name)
}

// .content.proto.CookieMatchType match_type = 3;
inline void CookieChangeSubscriptionProto::clear_match_type() {
  match_type_ = 0;
}
inline ::content::proto::CookieMatchType CookieChangeSubscriptionProto::_internal_match_type() const {
  return static_cast< ::content::proto::CookieMatchType >(match_type_);
}
inline ::content::proto::CookieMatchType CookieChangeSubscriptionProto::match_type() const {
  // @@protoc_insertion_point(field_get:content.proto.CookieChangeSubscriptionProto.match_type)
  return _internal_match_type();
}
inline void CookieChangeSubscriptionProto::_internal_set_match_type(::content::proto::CookieMatchType value) {
  
  match_type_ = value;
}
inline void CookieChangeSubscriptionProto::set_match_type(::content::proto::CookieMatchType value) {
  _internal_set_match_type(value);
  // @@protoc_insertion_point(field_set:content.proto.CookieChangeSubscriptionProto.match_type)
}

// -------------------------------------------------------------------

// CookieChangeSubscriptionsProto

// repeated .content.proto.CookieChangeSubscriptionProto subscriptions = 1;
inline int CookieChangeSubscriptionsProto::_internal_subscriptions_size() const {
  return subscriptions_.size();
}
inline int CookieChangeSubscriptionsProto::subscriptions_size() const {
  return _internal_subscriptions_size();
}
inline void CookieChangeSubscriptionsProto::clear_subscriptions() {
  subscriptions_.Clear();
}
inline ::content::proto::CookieChangeSubscriptionProto* CookieChangeSubscriptionsProto::mutable_subscriptions(int index) {
  // @@protoc_insertion_point(field_mutable:content.proto.CookieChangeSubscriptionsProto.subscriptions)
  return subscriptions_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::content::proto::CookieChangeSubscriptionProto >*
CookieChangeSubscriptionsProto::mutable_subscriptions() {
  // @@protoc_insertion_point(field_mutable_list:content.proto.CookieChangeSubscriptionsProto.subscriptions)
  return &subscriptions_;
}
inline const ::content::proto::CookieChangeSubscriptionProto& CookieChangeSubscriptionsProto::_internal_subscriptions(int index) const {
  return subscriptions_.Get(index);
}
inline const ::content::proto::CookieChangeSubscriptionProto& CookieChangeSubscriptionsProto::subscriptions(int index) const {
  // @@protoc_insertion_point(field_get:content.proto.CookieChangeSubscriptionsProto.subscriptions)
  return _internal_subscriptions(index);
}
inline ::content::proto::CookieChangeSubscriptionProto* CookieChangeSubscriptionsProto::_internal_add_subscriptions() {
  return subscriptions_.Add();
}
inline ::content::proto::CookieChangeSubscriptionProto* CookieChangeSubscriptionsProto::add_subscriptions() {
  ::content::proto::CookieChangeSubscriptionProto* _add = _internal_add_subscriptions();
  // @@protoc_insertion_point(field_add:content.proto.CookieChangeSubscriptionsProto.subscriptions)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::content::proto::CookieChangeSubscriptionProto >&
CookieChangeSubscriptionsProto::subscriptions() const {
  // @@protoc_insertion_point(field_list:content.proto.CookieChangeSubscriptionsProto.subscriptions)
  return subscriptions_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace content

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::content::proto::CookieMatchType> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_cookie_5fchange_5fsubscriptions_2eproto
