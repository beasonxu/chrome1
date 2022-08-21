// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/feed/core/proto/v2/wire/next_page_token.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fnext_5fpage_5ftoken_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fnext_5fpage_5ftoken_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fnext_5fpage_5ftoken_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fnext_5fpage_5ftoken_2eproto {
  static const uint32_t offsets[];
};
namespace feedwire {
class NextPageToken;
struct NextPageTokenDefaultTypeInternal;
extern NextPageTokenDefaultTypeInternal _NextPageToken_default_instance_;
class TokenHandling;
struct TokenHandlingDefaultTypeInternal;
extern TokenHandlingDefaultTypeInternal _TokenHandling_default_instance_;
}  // namespace feedwire
PROTOBUF_NAMESPACE_OPEN
template<> ::feedwire::NextPageToken* Arena::CreateMaybeMessage<::feedwire::NextPageToken>(Arena*);
template<> ::feedwire::TokenHandling* Arena::CreateMaybeMessage<::feedwire::TokenHandling>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace feedwire {

enum TokenHandling_LoadStrategy : int {
  TokenHandling_LoadStrategy_LOAD_STRATEGY_UNKNOWN = 0,
  TokenHandling_LoadStrategy_EAGER = 1,
  TokenHandling_LoadStrategy_LAZY = 2
};
bool TokenHandling_LoadStrategy_IsValid(int value);
constexpr TokenHandling_LoadStrategy TokenHandling_LoadStrategy_LoadStrategy_MIN = TokenHandling_LoadStrategy_LOAD_STRATEGY_UNKNOWN;
constexpr TokenHandling_LoadStrategy TokenHandling_LoadStrategy_LoadStrategy_MAX = TokenHandling_LoadStrategy_LAZY;
constexpr int TokenHandling_LoadStrategy_LoadStrategy_ARRAYSIZE = TokenHandling_LoadStrategy_LoadStrategy_MAX + 1;

const std::string& TokenHandling_LoadStrategy_Name(TokenHandling_LoadStrategy value);
template<typename T>
inline const std::string& TokenHandling_LoadStrategy_Name(T enum_t_value) {
  static_assert(::std::is_same<T, TokenHandling_LoadStrategy>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function TokenHandling_LoadStrategy_Name.");
  return TokenHandling_LoadStrategy_Name(static_cast<TokenHandling_LoadStrategy>(enum_t_value));
}
bool TokenHandling_LoadStrategy_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, TokenHandling_LoadStrategy* value);
// ===================================================================

class NextPageToken final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:feedwire.NextPageToken) */ {
 public:
  inline NextPageToken() : NextPageToken(nullptr) {}
  ~NextPageToken() override;
  explicit PROTOBUF_CONSTEXPR NextPageToken(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  NextPageToken(const NextPageToken& from);
  NextPageToken(NextPageToken&& from) noexcept
    : NextPageToken() {
    *this = ::std::move(from);
  }

  inline NextPageToken& operator=(const NextPageToken& from) {
    CopyFrom(from);
    return *this;
  }
  inline NextPageToken& operator=(NextPageToken&& from) noexcept {
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

  static const NextPageToken& default_instance() {
    return *internal_default_instance();
  }
  static inline const NextPageToken* internal_default_instance() {
    return reinterpret_cast<const NextPageToken*>(
               &_NextPageToken_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(NextPageToken& a, NextPageToken& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(NextPageToken* other) {
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
  void UnsafeArenaSwap(NextPageToken* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  NextPageToken* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<NextPageToken>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const NextPageToken& from);
  void MergeFrom(const NextPageToken& from);
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
  void InternalSwap(NextPageToken* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "feedwire.NextPageToken";
  }
  protected:
  explicit NextPageToken(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNextPageTokenFieldNumber = 1,
    kMetadataFieldNumber = 3,
    kTokenHandlingFieldNumber = 2,
  };
  // optional bytes next_page_token = 1;
  bool has_next_page_token() const;
  private:
  bool _internal_has_next_page_token() const;
  public:
  void clear_next_page_token();
  const std::string& next_page_token() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_next_page_token(ArgT0&& arg0, ArgT... args);
  std::string* mutable_next_page_token();
  PROTOBUF_NODISCARD std::string* release_next_page_token();
  void set_allocated_next_page_token(std::string* next_page_token);
  private:
  const std::string& _internal_next_page_token() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_next_page_token(const std::string& value);
  std::string* _internal_mutable_next_page_token();
  public:

  // optional bytes metadata = 3;
  bool has_metadata() const;
  private:
  bool _internal_has_metadata() const;
  public:
  void clear_metadata();
  const std::string& metadata() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_metadata(ArgT0&& arg0, ArgT... args);
  std::string* mutable_metadata();
  PROTOBUF_NODISCARD std::string* release_metadata();
  void set_allocated_metadata(std::string* metadata);
  private:
  const std::string& _internal_metadata() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_metadata(const std::string& value);
  std::string* _internal_mutable_metadata();
  public:

  // optional .feedwire.TokenHandling token_handling = 2;
  bool has_token_handling() const;
  private:
  bool _internal_has_token_handling() const;
  public:
  void clear_token_handling();
  const ::feedwire::TokenHandling& token_handling() const;
  PROTOBUF_NODISCARD ::feedwire::TokenHandling* release_token_handling();
  ::feedwire::TokenHandling* mutable_token_handling();
  void set_allocated_token_handling(::feedwire::TokenHandling* token_handling);
  private:
  const ::feedwire::TokenHandling& _internal_token_handling() const;
  ::feedwire::TokenHandling* _internal_mutable_token_handling();
  public:
  void unsafe_arena_set_allocated_token_handling(
      ::feedwire::TokenHandling* token_handling);
  ::feedwire::TokenHandling* unsafe_arena_release_token_handling();

  // @@protoc_insertion_point(class_scope:feedwire.NextPageToken)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr next_page_token_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr metadata_;
  ::feedwire::TokenHandling* token_handling_;
  friend struct ::TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fnext_5fpage_5ftoken_2eproto;
};
// -------------------------------------------------------------------

class TokenHandling final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:feedwire.TokenHandling) */ {
 public:
  inline TokenHandling() : TokenHandling(nullptr) {}
  ~TokenHandling() override;
  explicit PROTOBUF_CONSTEXPR TokenHandling(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TokenHandling(const TokenHandling& from);
  TokenHandling(TokenHandling&& from) noexcept
    : TokenHandling() {
    *this = ::std::move(from);
  }

  inline TokenHandling& operator=(const TokenHandling& from) {
    CopyFrom(from);
    return *this;
  }
  inline TokenHandling& operator=(TokenHandling&& from) noexcept {
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

  static const TokenHandling& default_instance() {
    return *internal_default_instance();
  }
  static inline const TokenHandling* internal_default_instance() {
    return reinterpret_cast<const TokenHandling*>(
               &_TokenHandling_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(TokenHandling& a, TokenHandling& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(TokenHandling* other) {
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
  void UnsafeArenaSwap(TokenHandling* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TokenHandling* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TokenHandling>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const TokenHandling& from);
  void MergeFrom(const TokenHandling& from);
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
  void InternalSwap(TokenHandling* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "feedwire.TokenHandling";
  }
  protected:
  explicit TokenHandling(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef TokenHandling_LoadStrategy LoadStrategy;
  static constexpr LoadStrategy LOAD_STRATEGY_UNKNOWN =
    TokenHandling_LoadStrategy_LOAD_STRATEGY_UNKNOWN;
  static constexpr LoadStrategy EAGER =
    TokenHandling_LoadStrategy_EAGER;
  static constexpr LoadStrategy LAZY =
    TokenHandling_LoadStrategy_LAZY;
  static inline bool LoadStrategy_IsValid(int value) {
    return TokenHandling_LoadStrategy_IsValid(value);
  }
  static constexpr LoadStrategy LoadStrategy_MIN =
    TokenHandling_LoadStrategy_LoadStrategy_MIN;
  static constexpr LoadStrategy LoadStrategy_MAX =
    TokenHandling_LoadStrategy_LoadStrategy_MAX;
  static constexpr int LoadStrategy_ARRAYSIZE =
    TokenHandling_LoadStrategy_LoadStrategy_ARRAYSIZE;
  template<typename T>
  static inline const std::string& LoadStrategy_Name(T enum_t_value) {
    static_assert(::std::is_same<T, LoadStrategy>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function LoadStrategy_Name.");
    return TokenHandling_LoadStrategy_Name(enum_t_value);
  }
  static inline bool LoadStrategy_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      LoadStrategy* value) {
    return TokenHandling_LoadStrategy_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kLoadStrategyFieldNumber = 1,
  };
  // optional .feedwire.TokenHandling.LoadStrategy load_strategy = 1;
  bool has_load_strategy() const;
  private:
  bool _internal_has_load_strategy() const;
  public:
  void clear_load_strategy();
  ::feedwire::TokenHandling_LoadStrategy load_strategy() const;
  void set_load_strategy(::feedwire::TokenHandling_LoadStrategy value);
  private:
  ::feedwire::TokenHandling_LoadStrategy _internal_load_strategy() const;
  void _internal_set_load_strategy(::feedwire::TokenHandling_LoadStrategy value);
  public:

  // @@protoc_insertion_point(class_scope:feedwire.TokenHandling)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  int load_strategy_;
  friend struct ::TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fnext_5fpage_5ftoken_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// NextPageToken

// optional bytes next_page_token = 1;
inline bool NextPageToken::_internal_has_next_page_token() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool NextPageToken::has_next_page_token() const {
  return _internal_has_next_page_token();
}
inline void NextPageToken::clear_next_page_token() {
  next_page_token_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& NextPageToken::next_page_token() const {
  // @@protoc_insertion_point(field_get:feedwire.NextPageToken.next_page_token)
  return _internal_next_page_token();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void NextPageToken::set_next_page_token(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 next_page_token_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:feedwire.NextPageToken.next_page_token)
}
inline std::string* NextPageToken::mutable_next_page_token() {
  std::string* _s = _internal_mutable_next_page_token();
  // @@protoc_insertion_point(field_mutable:feedwire.NextPageToken.next_page_token)
  return _s;
}
inline const std::string& NextPageToken::_internal_next_page_token() const {
  return next_page_token_.Get();
}
inline void NextPageToken::_internal_set_next_page_token(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  next_page_token_.Set(value, GetArenaForAllocation());
}
inline std::string* NextPageToken::_internal_mutable_next_page_token() {
  _has_bits_[0] |= 0x00000001u;
  return next_page_token_.Mutable(GetArenaForAllocation());
}
inline std::string* NextPageToken::release_next_page_token() {
  // @@protoc_insertion_point(field_release:feedwire.NextPageToken.next_page_token)
  if (!_internal_has_next_page_token()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = next_page_token_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (next_page_token_.IsDefault()) {
    next_page_token_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void NextPageToken::set_allocated_next_page_token(std::string* next_page_token) {
  if (next_page_token != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  next_page_token_.SetAllocated(next_page_token, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (next_page_token_.IsDefault()) {
    next_page_token_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:feedwire.NextPageToken.next_page_token)
}

// optional .feedwire.TokenHandling token_handling = 2;
inline bool NextPageToken::_internal_has_token_handling() const {
  bool value = (_has_bits_[0] & 0x00000004u) != 0;
  PROTOBUF_ASSUME(!value || token_handling_ != nullptr);
  return value;
}
inline bool NextPageToken::has_token_handling() const {
  return _internal_has_token_handling();
}
inline void NextPageToken::clear_token_handling() {
  if (token_handling_ != nullptr) token_handling_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
inline const ::feedwire::TokenHandling& NextPageToken::_internal_token_handling() const {
  const ::feedwire::TokenHandling* p = token_handling_;
  return p != nullptr ? *p : reinterpret_cast<const ::feedwire::TokenHandling&>(
      ::feedwire::_TokenHandling_default_instance_);
}
inline const ::feedwire::TokenHandling& NextPageToken::token_handling() const {
  // @@protoc_insertion_point(field_get:feedwire.NextPageToken.token_handling)
  return _internal_token_handling();
}
inline void NextPageToken::unsafe_arena_set_allocated_token_handling(
    ::feedwire::TokenHandling* token_handling) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(token_handling_);
  }
  token_handling_ = token_handling;
  if (token_handling) {
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:feedwire.NextPageToken.token_handling)
}
inline ::feedwire::TokenHandling* NextPageToken::release_token_handling() {
  _has_bits_[0] &= ~0x00000004u;
  ::feedwire::TokenHandling* temp = token_handling_;
  token_handling_ = nullptr;
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
inline ::feedwire::TokenHandling* NextPageToken::unsafe_arena_release_token_handling() {
  // @@protoc_insertion_point(field_release:feedwire.NextPageToken.token_handling)
  _has_bits_[0] &= ~0x00000004u;
  ::feedwire::TokenHandling* temp = token_handling_;
  token_handling_ = nullptr;
  return temp;
}
inline ::feedwire::TokenHandling* NextPageToken::_internal_mutable_token_handling() {
  _has_bits_[0] |= 0x00000004u;
  if (token_handling_ == nullptr) {
    auto* p = CreateMaybeMessage<::feedwire::TokenHandling>(GetArenaForAllocation());
    token_handling_ = p;
  }
  return token_handling_;
}
inline ::feedwire::TokenHandling* NextPageToken::mutable_token_handling() {
  ::feedwire::TokenHandling* _msg = _internal_mutable_token_handling();
  // @@protoc_insertion_point(field_mutable:feedwire.NextPageToken.token_handling)
  return _msg;
}
inline void NextPageToken::set_allocated_token_handling(::feedwire::TokenHandling* token_handling) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete token_handling_;
  }
  if (token_handling) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(token_handling);
    if (message_arena != submessage_arena) {
      token_handling = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, token_handling, submessage_arena);
    }
    _has_bits_[0] |= 0x00000004u;
  } else {
    _has_bits_[0] &= ~0x00000004u;
  }
  token_handling_ = token_handling;
  // @@protoc_insertion_point(field_set_allocated:feedwire.NextPageToken.token_handling)
}

// optional bytes metadata = 3;
inline bool NextPageToken::_internal_has_metadata() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool NextPageToken::has_metadata() const {
  return _internal_has_metadata();
}
inline void NextPageToken::clear_metadata() {
  metadata_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000002u;
}
inline const std::string& NextPageToken::metadata() const {
  // @@protoc_insertion_point(field_get:feedwire.NextPageToken.metadata)
  return _internal_metadata();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void NextPageToken::set_metadata(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000002u;
 metadata_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:feedwire.NextPageToken.metadata)
}
inline std::string* NextPageToken::mutable_metadata() {
  std::string* _s = _internal_mutable_metadata();
  // @@protoc_insertion_point(field_mutable:feedwire.NextPageToken.metadata)
  return _s;
}
inline const std::string& NextPageToken::_internal_metadata() const {
  return metadata_.Get();
}
inline void NextPageToken::_internal_set_metadata(const std::string& value) {
  _has_bits_[0] |= 0x00000002u;
  metadata_.Set(value, GetArenaForAllocation());
}
inline std::string* NextPageToken::_internal_mutable_metadata() {
  _has_bits_[0] |= 0x00000002u;
  return metadata_.Mutable(GetArenaForAllocation());
}
inline std::string* NextPageToken::release_metadata() {
  // @@protoc_insertion_point(field_release:feedwire.NextPageToken.metadata)
  if (!_internal_has_metadata()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000002u;
  auto* p = metadata_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (metadata_.IsDefault()) {
    metadata_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void NextPageToken::set_allocated_metadata(std::string* metadata) {
  if (metadata != nullptr) {
    _has_bits_[0] |= 0x00000002u;
  } else {
    _has_bits_[0] &= ~0x00000002u;
  }
  metadata_.SetAllocated(metadata, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (metadata_.IsDefault()) {
    metadata_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:feedwire.NextPageToken.metadata)
}

// -------------------------------------------------------------------

// TokenHandling

// optional .feedwire.TokenHandling.LoadStrategy load_strategy = 1;
inline bool TokenHandling::_internal_has_load_strategy() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool TokenHandling::has_load_strategy() const {
  return _internal_has_load_strategy();
}
inline void TokenHandling::clear_load_strategy() {
  load_strategy_ = 0;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::feedwire::TokenHandling_LoadStrategy TokenHandling::_internal_load_strategy() const {
  return static_cast< ::feedwire::TokenHandling_LoadStrategy >(load_strategy_);
}
inline ::feedwire::TokenHandling_LoadStrategy TokenHandling::load_strategy() const {
  // @@protoc_insertion_point(field_get:feedwire.TokenHandling.load_strategy)
  return _internal_load_strategy();
}
inline void TokenHandling::_internal_set_load_strategy(::feedwire::TokenHandling_LoadStrategy value) {
  assert(::feedwire::TokenHandling_LoadStrategy_IsValid(value));
  _has_bits_[0] |= 0x00000001u;
  load_strategy_ = value;
}
inline void TokenHandling::set_load_strategy(::feedwire::TokenHandling_LoadStrategy value) {
  _internal_set_load_strategy(value);
  // @@protoc_insertion_point(field_set:feedwire.TokenHandling.load_strategy)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace feedwire

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::feedwire::TokenHandling_LoadStrategy> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fnext_5fpage_5ftoken_2eproto
