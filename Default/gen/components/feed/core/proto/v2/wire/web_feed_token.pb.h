// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/feed/core/proto/v2/wire/web_feed_token.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fweb_5ffeed_5ftoken_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fweb_5ffeed_5ftoken_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fweb_5ffeed_5ftoken_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fweb_5ffeed_5ftoken_2eproto {
  static const uint32_t offsets[];
};
namespace feedwire {
class WebFeedToken;
struct WebFeedTokenDefaultTypeInternal;
extern WebFeedTokenDefaultTypeInternal _WebFeedToken_default_instance_;
}  // namespace feedwire
PROTOBUF_NAMESPACE_OPEN
template<> ::feedwire::WebFeedToken* Arena::CreateMaybeMessage<::feedwire::WebFeedToken>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace feedwire {

// ===================================================================

class WebFeedToken final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:feedwire.WebFeedToken) */ {
 public:
  inline WebFeedToken() : WebFeedToken(nullptr) {}
  ~WebFeedToken() override;
  explicit PROTOBUF_CONSTEXPR WebFeedToken(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WebFeedToken(const WebFeedToken& from);
  WebFeedToken(WebFeedToken&& from) noexcept
    : WebFeedToken() {
    *this = ::std::move(from);
  }

  inline WebFeedToken& operator=(const WebFeedToken& from) {
    CopyFrom(from);
    return *this;
  }
  inline WebFeedToken& operator=(WebFeedToken&& from) noexcept {
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

  static const WebFeedToken& default_instance() {
    return *internal_default_instance();
  }
  static inline const WebFeedToken* internal_default_instance() {
    return reinterpret_cast<const WebFeedToken*>(
               &_WebFeedToken_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WebFeedToken& a, WebFeedToken& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(WebFeedToken* other) {
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
  void UnsafeArenaSwap(WebFeedToken* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WebFeedToken* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WebFeedToken>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const WebFeedToken& from);
  void MergeFrom(const WebFeedToken& from);
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
  void InternalSwap(WebFeedToken* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "feedwire.WebFeedToken";
  }
  protected:
  explicit WebFeedToken(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kWebFeedTokenFieldNumber = 1,
  };
  // optional bytes web_feed_token = 1;
  bool has_web_feed_token() const;
  private:
  bool _internal_has_web_feed_token() const;
  public:
  void clear_web_feed_token();
  const std::string& web_feed_token() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_web_feed_token(ArgT0&& arg0, ArgT... args);
  std::string* mutable_web_feed_token();
  PROTOBUF_NODISCARD std::string* release_web_feed_token();
  void set_allocated_web_feed_token(std::string* web_feed_token);
  private:
  const std::string& _internal_web_feed_token() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_web_feed_token(const std::string& value);
  std::string* _internal_mutable_web_feed_token();
  public:

  // @@protoc_insertion_point(class_scope:feedwire.WebFeedToken)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr web_feed_token_;
  friend struct ::TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fweb_5ffeed_5ftoken_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WebFeedToken

// optional bytes web_feed_token = 1;
inline bool WebFeedToken::_internal_has_web_feed_token() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool WebFeedToken::has_web_feed_token() const {
  return _internal_has_web_feed_token();
}
inline void WebFeedToken::clear_web_feed_token() {
  web_feed_token_.ClearToEmpty();
  _has_bits_[0] &= ~0x00000001u;
}
inline const std::string& WebFeedToken::web_feed_token() const {
  // @@protoc_insertion_point(field_get:feedwire.WebFeedToken.web_feed_token)
  return _internal_web_feed_token();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void WebFeedToken::set_web_feed_token(ArgT0&& arg0, ArgT... args) {
 _has_bits_[0] |= 0x00000001u;
 web_feed_token_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:feedwire.WebFeedToken.web_feed_token)
}
inline std::string* WebFeedToken::mutable_web_feed_token() {
  std::string* _s = _internal_mutable_web_feed_token();
  // @@protoc_insertion_point(field_mutable:feedwire.WebFeedToken.web_feed_token)
  return _s;
}
inline const std::string& WebFeedToken::_internal_web_feed_token() const {
  return web_feed_token_.Get();
}
inline void WebFeedToken::_internal_set_web_feed_token(const std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  web_feed_token_.Set(value, GetArenaForAllocation());
}
inline std::string* WebFeedToken::_internal_mutable_web_feed_token() {
  _has_bits_[0] |= 0x00000001u;
  return web_feed_token_.Mutable(GetArenaForAllocation());
}
inline std::string* WebFeedToken::release_web_feed_token() {
  // @@protoc_insertion_point(field_release:feedwire.WebFeedToken.web_feed_token)
  if (!_internal_has_web_feed_token()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  auto* p = web_feed_token_.Release();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (web_feed_token_.IsDefault()) {
    web_feed_token_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  return p;
}
inline void WebFeedToken::set_allocated_web_feed_token(std::string* web_feed_token) {
  if (web_feed_token != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  web_feed_token_.SetAllocated(web_feed_token, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (web_feed_token_.IsDefault()) {
    web_feed_token_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:feedwire.WebFeedToken.web_feed_token)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace feedwire

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fweb_5ffeed_5ftoken_2eproto
