// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/feed/core/proto/v2/wire/web_feed_matcher.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fweb_5ffeed_5fmatcher_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fweb_5ffeed_5fmatcher_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fweb_5ffeed_5fmatcher_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fweb_5ffeed_5fmatcher_2eproto {
  static const uint32_t offsets[];
};
namespace feedwire {
namespace webfeed {
class WebFeedMatcher;
struct WebFeedMatcherDefaultTypeInternal;
extern WebFeedMatcherDefaultTypeInternal _WebFeedMatcher_default_instance_;
class WebFeedMatcher_Criteria;
struct WebFeedMatcher_CriteriaDefaultTypeInternal;
extern WebFeedMatcher_CriteriaDefaultTypeInternal _WebFeedMatcher_Criteria_default_instance_;
}  // namespace webfeed
}  // namespace feedwire
PROTOBUF_NAMESPACE_OPEN
template<> ::feedwire::webfeed::WebFeedMatcher* Arena::CreateMaybeMessage<::feedwire::webfeed::WebFeedMatcher>(Arena*);
template<> ::feedwire::webfeed::WebFeedMatcher_Criteria* Arena::CreateMaybeMessage<::feedwire::webfeed::WebFeedMatcher_Criteria>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace feedwire {
namespace webfeed {

enum WebFeedMatcher_Criteria_CriteriaType : int {
  WebFeedMatcher_Criteria_CriteriaType_CRITERIA_TYPE_UNSPECIFIED = 0,
  WebFeedMatcher_Criteria_CriteriaType_PAGE_URL_HOST_MATCH = 1,
  WebFeedMatcher_Criteria_CriteriaType_PAGE_URL_HOST_SUFFIX = 2,
  WebFeedMatcher_Criteria_CriteriaType_PAGE_URL_PATH_MATCH = 3,
  WebFeedMatcher_Criteria_CriteriaType_RSS_URL_MATCH = 4,
  WebFeedMatcher_Criteria_CriteriaType_WebFeedMatcher_Criteria_CriteriaType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  WebFeedMatcher_Criteria_CriteriaType_WebFeedMatcher_Criteria_CriteriaType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool WebFeedMatcher_Criteria_CriteriaType_IsValid(int value);
constexpr WebFeedMatcher_Criteria_CriteriaType WebFeedMatcher_Criteria_CriteriaType_CriteriaType_MIN = WebFeedMatcher_Criteria_CriteriaType_CRITERIA_TYPE_UNSPECIFIED;
constexpr WebFeedMatcher_Criteria_CriteriaType WebFeedMatcher_Criteria_CriteriaType_CriteriaType_MAX = WebFeedMatcher_Criteria_CriteriaType_RSS_URL_MATCH;
constexpr int WebFeedMatcher_Criteria_CriteriaType_CriteriaType_ARRAYSIZE = WebFeedMatcher_Criteria_CriteriaType_CriteriaType_MAX + 1;

const std::string& WebFeedMatcher_Criteria_CriteriaType_Name(WebFeedMatcher_Criteria_CriteriaType value);
template<typename T>
inline const std::string& WebFeedMatcher_Criteria_CriteriaType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, WebFeedMatcher_Criteria_CriteriaType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function WebFeedMatcher_Criteria_CriteriaType_Name.");
  return WebFeedMatcher_Criteria_CriteriaType_Name(static_cast<WebFeedMatcher_Criteria_CriteriaType>(enum_t_value));
}
bool WebFeedMatcher_Criteria_CriteriaType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, WebFeedMatcher_Criteria_CriteriaType* value);
// ===================================================================

class WebFeedMatcher_Criteria final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:feedwire.webfeed.WebFeedMatcher.Criteria) */ {
 public:
  inline WebFeedMatcher_Criteria() : WebFeedMatcher_Criteria(nullptr) {}
  ~WebFeedMatcher_Criteria() override;
  explicit PROTOBUF_CONSTEXPR WebFeedMatcher_Criteria(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WebFeedMatcher_Criteria(const WebFeedMatcher_Criteria& from);
  WebFeedMatcher_Criteria(WebFeedMatcher_Criteria&& from) noexcept
    : WebFeedMatcher_Criteria() {
    *this = ::std::move(from);
  }

  inline WebFeedMatcher_Criteria& operator=(const WebFeedMatcher_Criteria& from) {
    CopyFrom(from);
    return *this;
  }
  inline WebFeedMatcher_Criteria& operator=(WebFeedMatcher_Criteria&& from) noexcept {
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

  static const WebFeedMatcher_Criteria& default_instance() {
    return *internal_default_instance();
  }
  enum MatchCase {
    kText = 2,
    kPartialMatchRegex = 3,
    MATCH_NOT_SET = 0,
  };

  static inline const WebFeedMatcher_Criteria* internal_default_instance() {
    return reinterpret_cast<const WebFeedMatcher_Criteria*>(
               &_WebFeedMatcher_Criteria_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WebFeedMatcher_Criteria& a, WebFeedMatcher_Criteria& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(WebFeedMatcher_Criteria* other) {
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
  void UnsafeArenaSwap(WebFeedMatcher_Criteria* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WebFeedMatcher_Criteria* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WebFeedMatcher_Criteria>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const WebFeedMatcher_Criteria& from);
  void MergeFrom(const WebFeedMatcher_Criteria& from);
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
  void InternalSwap(WebFeedMatcher_Criteria* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "feedwire.webfeed.WebFeedMatcher.Criteria";
  }
  protected:
  explicit WebFeedMatcher_Criteria(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef WebFeedMatcher_Criteria_CriteriaType CriteriaType;
  static constexpr CriteriaType CRITERIA_TYPE_UNSPECIFIED =
    WebFeedMatcher_Criteria_CriteriaType_CRITERIA_TYPE_UNSPECIFIED;
  static constexpr CriteriaType PAGE_URL_HOST_MATCH =
    WebFeedMatcher_Criteria_CriteriaType_PAGE_URL_HOST_MATCH;
  static constexpr CriteriaType PAGE_URL_HOST_SUFFIX =
    WebFeedMatcher_Criteria_CriteriaType_PAGE_URL_HOST_SUFFIX;
  static constexpr CriteriaType PAGE_URL_PATH_MATCH =
    WebFeedMatcher_Criteria_CriteriaType_PAGE_URL_PATH_MATCH;
  static constexpr CriteriaType RSS_URL_MATCH =
    WebFeedMatcher_Criteria_CriteriaType_RSS_URL_MATCH;
  static inline bool CriteriaType_IsValid(int value) {
    return WebFeedMatcher_Criteria_CriteriaType_IsValid(value);
  }
  static constexpr CriteriaType CriteriaType_MIN =
    WebFeedMatcher_Criteria_CriteriaType_CriteriaType_MIN;
  static constexpr CriteriaType CriteriaType_MAX =
    WebFeedMatcher_Criteria_CriteriaType_CriteriaType_MAX;
  static constexpr int CriteriaType_ARRAYSIZE =
    WebFeedMatcher_Criteria_CriteriaType_CriteriaType_ARRAYSIZE;
  template<typename T>
  static inline const std::string& CriteriaType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CriteriaType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CriteriaType_Name.");
    return WebFeedMatcher_Criteria_CriteriaType_Name(enum_t_value);
  }
  static inline bool CriteriaType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      CriteriaType* value) {
    return WebFeedMatcher_Criteria_CriteriaType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kCriteriaTypeFieldNumber = 1,
    kTextFieldNumber = 2,
    kPartialMatchRegexFieldNumber = 3,
  };
  // .feedwire.webfeed.WebFeedMatcher.Criteria.CriteriaType criteria_type = 1;
  void clear_criteria_type();
  ::feedwire::webfeed::WebFeedMatcher_Criteria_CriteriaType criteria_type() const;
  void set_criteria_type(::feedwire::webfeed::WebFeedMatcher_Criteria_CriteriaType value);
  private:
  ::feedwire::webfeed::WebFeedMatcher_Criteria_CriteriaType _internal_criteria_type() const;
  void _internal_set_criteria_type(::feedwire::webfeed::WebFeedMatcher_Criteria_CriteriaType value);
  public:

  // string text = 2;
  bool has_text() const;
  private:
  bool _internal_has_text() const;
  public:
  void clear_text();
  const std::string& text() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_text(ArgT0&& arg0, ArgT... args);
  std::string* mutable_text();
  PROTOBUF_NODISCARD std::string* release_text();
  void set_allocated_text(std::string* text);
  private:
  const std::string& _internal_text() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_text(const std::string& value);
  std::string* _internal_mutable_text();
  public:

  // string partial_match_regex = 3;
  bool has_partial_match_regex() const;
  private:
  bool _internal_has_partial_match_regex() const;
  public:
  void clear_partial_match_regex();
  const std::string& partial_match_regex() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_partial_match_regex(ArgT0&& arg0, ArgT... args);
  std::string* mutable_partial_match_regex();
  PROTOBUF_NODISCARD std::string* release_partial_match_regex();
  void set_allocated_partial_match_regex(std::string* partial_match_regex);
  private:
  const std::string& _internal_partial_match_regex() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_partial_match_regex(const std::string& value);
  std::string* _internal_mutable_partial_match_regex();
  public:

  void clear_match();
  MatchCase match_case() const;
  // @@protoc_insertion_point(class_scope:feedwire.webfeed.WebFeedMatcher.Criteria)
 private:
  class _Internal;
  void set_has_text();
  void set_has_partial_match_regex();

  inline bool has_match() const;
  inline void clear_has_match();

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int criteria_type_;
  union MatchUnion {
    constexpr MatchUnion() : _constinit_{} {}
      ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized _constinit_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr partial_match_regex_;
  } match_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  uint32_t _oneof_case_[1];

  friend struct ::TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fweb_5ffeed_5fmatcher_2eproto;
};
// -------------------------------------------------------------------

class WebFeedMatcher final :
    public ::PROTOBUF_NAMESPACE_ID::MessageLite /* @@protoc_insertion_point(class_definition:feedwire.webfeed.WebFeedMatcher) */ {
 public:
  inline WebFeedMatcher() : WebFeedMatcher(nullptr) {}
  ~WebFeedMatcher() override;
  explicit PROTOBUF_CONSTEXPR WebFeedMatcher(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WebFeedMatcher(const WebFeedMatcher& from);
  WebFeedMatcher(WebFeedMatcher&& from) noexcept
    : WebFeedMatcher() {
    *this = ::std::move(from);
  }

  inline WebFeedMatcher& operator=(const WebFeedMatcher& from) {
    CopyFrom(from);
    return *this;
  }
  inline WebFeedMatcher& operator=(WebFeedMatcher&& from) noexcept {
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

  static const WebFeedMatcher& default_instance() {
    return *internal_default_instance();
  }
  static inline const WebFeedMatcher* internal_default_instance() {
    return reinterpret_cast<const WebFeedMatcher*>(
               &_WebFeedMatcher_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(WebFeedMatcher& a, WebFeedMatcher& b) {
    a.Swap(&b);
  }
  PROTOBUF_NOINLINE void Swap(WebFeedMatcher* other) {
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
  void UnsafeArenaSwap(WebFeedMatcher* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WebFeedMatcher* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WebFeedMatcher>(arena);
  }
  void CheckTypeAndMergeFrom(const ::PROTOBUF_NAMESPACE_ID::MessageLite& from)  final;
  void CopyFrom(const WebFeedMatcher& from);
  void MergeFrom(const WebFeedMatcher& from);
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
  void InternalSwap(WebFeedMatcher* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "feedwire.webfeed.WebFeedMatcher";
  }
  protected:
  explicit WebFeedMatcher(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  std::string GetTypeName() const final;

  // nested types ----------------------------------------------------

  typedef WebFeedMatcher_Criteria Criteria;

  // accessors -------------------------------------------------------

  enum : int {
    kCriteriaFieldNumber = 1,
  };
  // repeated .feedwire.webfeed.WebFeedMatcher.Criteria criteria = 1;
  int criteria_size() const;
  private:
  int _internal_criteria_size() const;
  public:
  void clear_criteria();
  ::feedwire::webfeed::WebFeedMatcher_Criteria* mutable_criteria(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::feedwire::webfeed::WebFeedMatcher_Criteria >*
      mutable_criteria();
  private:
  const ::feedwire::webfeed::WebFeedMatcher_Criteria& _internal_criteria(int index) const;
  ::feedwire::webfeed::WebFeedMatcher_Criteria* _internal_add_criteria();
  public:
  const ::feedwire::webfeed::WebFeedMatcher_Criteria& criteria(int index) const;
  ::feedwire::webfeed::WebFeedMatcher_Criteria* add_criteria();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::feedwire::webfeed::WebFeedMatcher_Criteria >&
      criteria() const;

  // @@protoc_insertion_point(class_scope:feedwire.webfeed.WebFeedMatcher)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::feedwire::webfeed::WebFeedMatcher_Criteria > criteria_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fweb_5ffeed_5fmatcher_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WebFeedMatcher_Criteria

// string text = 2;
inline bool WebFeedMatcher_Criteria::_internal_has_text() const {
  return match_case() == kText;
}
inline bool WebFeedMatcher_Criteria::has_text() const {
  return _internal_has_text();
}
inline void WebFeedMatcher_Criteria::set_has_text() {
  _oneof_case_[0] = kText;
}
inline void WebFeedMatcher_Criteria::clear_text() {
  if (_internal_has_text()) {
    match_.text_.Destroy();
    clear_has_match();
  }
}
inline const std::string& WebFeedMatcher_Criteria::text() const {
  // @@protoc_insertion_point(field_get:feedwire.webfeed.WebFeedMatcher.Criteria.text)
  return _internal_text();
}
template <typename ArgT0, typename... ArgT>
inline void WebFeedMatcher_Criteria::set_text(ArgT0&& arg0, ArgT... args) {
  if (!_internal_has_text()) {
    clear_match();
    set_has_text();
    match_.text_.InitDefault();
  }
  match_.text_.Set( static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:feedwire.webfeed.WebFeedMatcher.Criteria.text)
}
inline std::string* WebFeedMatcher_Criteria::mutable_text() {
  std::string* _s = _internal_mutable_text();
  // @@protoc_insertion_point(field_mutable:feedwire.webfeed.WebFeedMatcher.Criteria.text)
  return _s;
}
inline const std::string& WebFeedMatcher_Criteria::_internal_text() const {
  if (_internal_has_text()) {
    return match_.text_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void WebFeedMatcher_Criteria::_internal_set_text(const std::string& value) {
  if (!_internal_has_text()) {
    clear_match();
    set_has_text();
    match_.text_.InitDefault();
  }
  match_.text_.Set(value, GetArenaForAllocation());
}
inline std::string* WebFeedMatcher_Criteria::_internal_mutable_text() {
  if (!_internal_has_text()) {
    clear_match();
    set_has_text();
    match_.text_.InitDefault();
  }
  return match_.text_.Mutable(      GetArenaForAllocation());
}
inline std::string* WebFeedMatcher_Criteria::release_text() {
  // @@protoc_insertion_point(field_release:feedwire.webfeed.WebFeedMatcher.Criteria.text)
  if (_internal_has_text()) {
    clear_has_match();
    return match_.text_.Release();
  } else {
    return nullptr;
  }
}
inline void WebFeedMatcher_Criteria::set_allocated_text(std::string* text) {
  if (has_match()) {
    clear_match();
  }
  if (text != nullptr) {
    set_has_text();
    match_.text_.InitAllocated(text, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:feedwire.webfeed.WebFeedMatcher.Criteria.text)
}

// string partial_match_regex = 3;
inline bool WebFeedMatcher_Criteria::_internal_has_partial_match_regex() const {
  return match_case() == kPartialMatchRegex;
}
inline bool WebFeedMatcher_Criteria::has_partial_match_regex() const {
  return _internal_has_partial_match_regex();
}
inline void WebFeedMatcher_Criteria::set_has_partial_match_regex() {
  _oneof_case_[0] = kPartialMatchRegex;
}
inline void WebFeedMatcher_Criteria::clear_partial_match_regex() {
  if (_internal_has_partial_match_regex()) {
    match_.partial_match_regex_.Destroy();
    clear_has_match();
  }
}
inline const std::string& WebFeedMatcher_Criteria::partial_match_regex() const {
  // @@protoc_insertion_point(field_get:feedwire.webfeed.WebFeedMatcher.Criteria.partial_match_regex)
  return _internal_partial_match_regex();
}
template <typename ArgT0, typename... ArgT>
inline void WebFeedMatcher_Criteria::set_partial_match_regex(ArgT0&& arg0, ArgT... args) {
  if (!_internal_has_partial_match_regex()) {
    clear_match();
    set_has_partial_match_regex();
    match_.partial_match_regex_.InitDefault();
  }
  match_.partial_match_regex_.Set( static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:feedwire.webfeed.WebFeedMatcher.Criteria.partial_match_regex)
}
inline std::string* WebFeedMatcher_Criteria::mutable_partial_match_regex() {
  std::string* _s = _internal_mutable_partial_match_regex();
  // @@protoc_insertion_point(field_mutable:feedwire.webfeed.WebFeedMatcher.Criteria.partial_match_regex)
  return _s;
}
inline const std::string& WebFeedMatcher_Criteria::_internal_partial_match_regex() const {
  if (_internal_has_partial_match_regex()) {
    return match_.partial_match_regex_.Get();
  }
  return ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited();
}
inline void WebFeedMatcher_Criteria::_internal_set_partial_match_regex(const std::string& value) {
  if (!_internal_has_partial_match_regex()) {
    clear_match();
    set_has_partial_match_regex();
    match_.partial_match_regex_.InitDefault();
  }
  match_.partial_match_regex_.Set(value, GetArenaForAllocation());
}
inline std::string* WebFeedMatcher_Criteria::_internal_mutable_partial_match_regex() {
  if (!_internal_has_partial_match_regex()) {
    clear_match();
    set_has_partial_match_regex();
    match_.partial_match_regex_.InitDefault();
  }
  return match_.partial_match_regex_.Mutable(      GetArenaForAllocation());
}
inline std::string* WebFeedMatcher_Criteria::release_partial_match_regex() {
  // @@protoc_insertion_point(field_release:feedwire.webfeed.WebFeedMatcher.Criteria.partial_match_regex)
  if (_internal_has_partial_match_regex()) {
    clear_has_match();
    return match_.partial_match_regex_.Release();
  } else {
    return nullptr;
  }
}
inline void WebFeedMatcher_Criteria::set_allocated_partial_match_regex(std::string* partial_match_regex) {
  if (has_match()) {
    clear_match();
  }
  if (partial_match_regex != nullptr) {
    set_has_partial_match_regex();
    match_.partial_match_regex_.InitAllocated(partial_match_regex, GetArenaForAllocation());
  }
  // @@protoc_insertion_point(field_set_allocated:feedwire.webfeed.WebFeedMatcher.Criteria.partial_match_regex)
}

// .feedwire.webfeed.WebFeedMatcher.Criteria.CriteriaType criteria_type = 1;
inline void WebFeedMatcher_Criteria::clear_criteria_type() {
  criteria_type_ = 0;
}
inline ::feedwire::webfeed::WebFeedMatcher_Criteria_CriteriaType WebFeedMatcher_Criteria::_internal_criteria_type() const {
  return static_cast< ::feedwire::webfeed::WebFeedMatcher_Criteria_CriteriaType >(criteria_type_);
}
inline ::feedwire::webfeed::WebFeedMatcher_Criteria_CriteriaType WebFeedMatcher_Criteria::criteria_type() const {
  // @@protoc_insertion_point(field_get:feedwire.webfeed.WebFeedMatcher.Criteria.criteria_type)
  return _internal_criteria_type();
}
inline void WebFeedMatcher_Criteria::_internal_set_criteria_type(::feedwire::webfeed::WebFeedMatcher_Criteria_CriteriaType value) {
  
  criteria_type_ = value;
}
inline void WebFeedMatcher_Criteria::set_criteria_type(::feedwire::webfeed::WebFeedMatcher_Criteria_CriteriaType value) {
  _internal_set_criteria_type(value);
  // @@protoc_insertion_point(field_set:feedwire.webfeed.WebFeedMatcher.Criteria.criteria_type)
}

inline bool WebFeedMatcher_Criteria::has_match() const {
  return match_case() != MATCH_NOT_SET;
}
inline void WebFeedMatcher_Criteria::clear_has_match() {
  _oneof_case_[0] = MATCH_NOT_SET;
}
inline WebFeedMatcher_Criteria::MatchCase WebFeedMatcher_Criteria::match_case() const {
  return WebFeedMatcher_Criteria::MatchCase(_oneof_case_[0]);
}
// -------------------------------------------------------------------

// WebFeedMatcher

// repeated .feedwire.webfeed.WebFeedMatcher.Criteria criteria = 1;
inline int WebFeedMatcher::_internal_criteria_size() const {
  return criteria_.size();
}
inline int WebFeedMatcher::criteria_size() const {
  return _internal_criteria_size();
}
inline void WebFeedMatcher::clear_criteria() {
  criteria_.Clear();
}
inline ::feedwire::webfeed::WebFeedMatcher_Criteria* WebFeedMatcher::mutable_criteria(int index) {
  // @@protoc_insertion_point(field_mutable:feedwire.webfeed.WebFeedMatcher.criteria)
  return criteria_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::feedwire::webfeed::WebFeedMatcher_Criteria >*
WebFeedMatcher::mutable_criteria() {
  // @@protoc_insertion_point(field_mutable_list:feedwire.webfeed.WebFeedMatcher.criteria)
  return &criteria_;
}
inline const ::feedwire::webfeed::WebFeedMatcher_Criteria& WebFeedMatcher::_internal_criteria(int index) const {
  return criteria_.Get(index);
}
inline const ::feedwire::webfeed::WebFeedMatcher_Criteria& WebFeedMatcher::criteria(int index) const {
  // @@protoc_insertion_point(field_get:feedwire.webfeed.WebFeedMatcher.criteria)
  return _internal_criteria(index);
}
inline ::feedwire::webfeed::WebFeedMatcher_Criteria* WebFeedMatcher::_internal_add_criteria() {
  return criteria_.Add();
}
inline ::feedwire::webfeed::WebFeedMatcher_Criteria* WebFeedMatcher::add_criteria() {
  ::feedwire::webfeed::WebFeedMatcher_Criteria* _add = _internal_add_criteria();
  // @@protoc_insertion_point(field_add:feedwire.webfeed.WebFeedMatcher.criteria)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::feedwire::webfeed::WebFeedMatcher_Criteria >&
WebFeedMatcher::criteria() const {
  // @@protoc_insertion_point(field_list:feedwire.webfeed.WebFeedMatcher.criteria)
  return criteria_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace webfeed
}  // namespace feedwire

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::feedwire::webfeed::WebFeedMatcher_Criteria_CriteriaType> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2fweb_5ffeed_5fmatcher_2eproto
