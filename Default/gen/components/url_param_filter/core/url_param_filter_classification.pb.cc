// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: url_param_filter_classification.proto

#include "url_param_filter_classification.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace url_param_filter {
PROTOBUF_CONSTEXPR FilterParameter::FilterParameter(
    ::_pbi::ConstantInitialized)
  : name_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}){}
struct FilterParameterDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FilterParameterDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FilterParameterDefaultTypeInternal() {}
  union {
    FilterParameter _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FilterParameterDefaultTypeInternal _FilterParameter_default_instance_;
PROTOBUF_CONSTEXPR FilterClassification::FilterClassification(
    ::_pbi::ConstantInitialized)
  : parameters_()
  , use_cases_()
  , _use_cases_cached_byte_size_(0)
  , experiment_tags_()
  , site_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{})
  , site_role_(0)

  , site_match_type_(0)
{}
struct FilterClassificationDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FilterClassificationDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FilterClassificationDefaultTypeInternal() {}
  union {
    FilterClassification _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FilterClassificationDefaultTypeInternal _FilterClassification_default_instance_;
PROTOBUF_CONSTEXPR FilterClassifications::FilterClassifications(
    ::_pbi::ConstantInitialized)
  : classifications_(){}
struct FilterClassificationsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FilterClassificationsDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FilterClassificationsDefaultTypeInternal() {}
  union {
    FilterClassifications _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FilterClassificationsDefaultTypeInternal _FilterClassifications_default_instance_;
}  // namespace url_param_filter
namespace url_param_filter {
bool FilterClassification_SiteRole_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> FilterClassification_SiteRole_strings[3] = {};

static const char FilterClassification_SiteRole_names[] =
  "DESTINATION"
  "SITE_ROLE_UNKNOWN"
  "SOURCE";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry FilterClassification_SiteRole_entries[] = {
  { {FilterClassification_SiteRole_names + 0, 11}, 2 },
  { {FilterClassification_SiteRole_names + 11, 17}, 0 },
  { {FilterClassification_SiteRole_names + 28, 6}, 1 },
};

static const int FilterClassification_SiteRole_entries_by_number[] = {
  1, // 0 -> SITE_ROLE_UNKNOWN
  2, // 1 -> SOURCE
  0, // 2 -> DESTINATION
};

const std::string& FilterClassification_SiteRole_Name(
    FilterClassification_SiteRole value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          FilterClassification_SiteRole_entries,
          FilterClassification_SiteRole_entries_by_number,
          3, FilterClassification_SiteRole_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      FilterClassification_SiteRole_entries,
      FilterClassification_SiteRole_entries_by_number,
      3, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     FilterClassification_SiteRole_strings[idx].get();
}
bool FilterClassification_SiteRole_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, FilterClassification_SiteRole* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      FilterClassification_SiteRole_entries, 3, name, &int_value);
  if (success) {
    *value = static_cast<FilterClassification_SiteRole>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr FilterClassification_SiteRole FilterClassification::SITE_ROLE_UNKNOWN;
constexpr FilterClassification_SiteRole FilterClassification::SOURCE;
constexpr FilterClassification_SiteRole FilterClassification::DESTINATION;
constexpr FilterClassification_SiteRole FilterClassification::SiteRole_MIN;
constexpr FilterClassification_SiteRole FilterClassification::SiteRole_MAX;
constexpr int FilterClassification::SiteRole_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
bool FilterClassification_UseCase_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> FilterClassification_UseCase_strings[3] = {};

static const char FilterClassification_UseCase_names[] =
  "CROSS_OTR"
  "CROSS_SITE_NO_3PC"
  "USE_CASE_UNKNOWN";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry FilterClassification_UseCase_entries[] = {
  { {FilterClassification_UseCase_names + 0, 9}, 1 },
  { {FilterClassification_UseCase_names + 9, 17}, 2 },
  { {FilterClassification_UseCase_names + 26, 16}, 0 },
};

static const int FilterClassification_UseCase_entries_by_number[] = {
  2, // 0 -> USE_CASE_UNKNOWN
  0, // 1 -> CROSS_OTR
  1, // 2 -> CROSS_SITE_NO_3PC
};

const std::string& FilterClassification_UseCase_Name(
    FilterClassification_UseCase value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          FilterClassification_UseCase_entries,
          FilterClassification_UseCase_entries_by_number,
          3, FilterClassification_UseCase_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      FilterClassification_UseCase_entries,
      FilterClassification_UseCase_entries_by_number,
      3, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     FilterClassification_UseCase_strings[idx].get();
}
bool FilterClassification_UseCase_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, FilterClassification_UseCase* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      FilterClassification_UseCase_entries, 3, name, &int_value);
  if (success) {
    *value = static_cast<FilterClassification_UseCase>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr FilterClassification_UseCase FilterClassification::USE_CASE_UNKNOWN;
constexpr FilterClassification_UseCase FilterClassification::CROSS_OTR;
constexpr FilterClassification_UseCase FilterClassification::CROSS_SITE_NO_3PC;
constexpr FilterClassification_UseCase FilterClassification::UseCase_MIN;
constexpr FilterClassification_UseCase FilterClassification::UseCase_MAX;
constexpr int FilterClassification::UseCase_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
bool FilterClassification_SiteMatchType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> FilterClassification_SiteMatchType_strings[3] = {};

static const char FilterClassification_SiteMatchType_names[] =
  "ETLD_WILDCARD"
  "EXACT_ETLD_PLUS_ONE"
  "MATCH_TYPE_UNKNOWN";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry FilterClassification_SiteMatchType_entries[] = {
  { {FilterClassification_SiteMatchType_names + 0, 13}, 2 },
  { {FilterClassification_SiteMatchType_names + 13, 19}, 1 },
  { {FilterClassification_SiteMatchType_names + 32, 18}, 0 },
};

static const int FilterClassification_SiteMatchType_entries_by_number[] = {
  2, // 0 -> MATCH_TYPE_UNKNOWN
  1, // 1 -> EXACT_ETLD_PLUS_ONE
  0, // 2 -> ETLD_WILDCARD
};

const std::string& FilterClassification_SiteMatchType_Name(
    FilterClassification_SiteMatchType value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          FilterClassification_SiteMatchType_entries,
          FilterClassification_SiteMatchType_entries_by_number,
          3, FilterClassification_SiteMatchType_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      FilterClassification_SiteMatchType_entries,
      FilterClassification_SiteMatchType_entries_by_number,
      3, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     FilterClassification_SiteMatchType_strings[idx].get();
}
bool FilterClassification_SiteMatchType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, FilterClassification_SiteMatchType* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      FilterClassification_SiteMatchType_entries, 3, name, &int_value);
  if (success) {
    *value = static_cast<FilterClassification_SiteMatchType>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr FilterClassification_SiteMatchType FilterClassification::MATCH_TYPE_UNKNOWN;
constexpr FilterClassification_SiteMatchType FilterClassification::EXACT_ETLD_PLUS_ONE;
constexpr FilterClassification_SiteMatchType FilterClassification::ETLD_WILDCARD;
constexpr FilterClassification_SiteMatchType FilterClassification::SiteMatchType_MIN;
constexpr FilterClassification_SiteMatchType FilterClassification::SiteMatchType_MAX;
constexpr int FilterClassification::SiteMatchType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class FilterParameter::_Internal {
 public:
  using HasBits = decltype(std::declval<FilterParameter>()._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

FilterParameter::FilterParameter(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:url_param_filter.FilterParameter)
}
FilterParameter::FilterParameter(const FilterParameter& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_name()) {
    name_.Set(from._internal_name(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:url_param_filter.FilterParameter)
}

inline void FilterParameter::SharedCtor() {
name_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  name_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

FilterParameter::~FilterParameter() {
  // @@protoc_insertion_point(destructor:url_param_filter.FilterParameter)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FilterParameter::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  name_.Destroy();
}

void FilterParameter::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FilterParameter::Clear() {
// @@protoc_insertion_point(message_clear_start:url_param_filter.FilterParameter)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    name_.ClearNonDefaultToEmpty();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FilterParameter::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string name = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FilterParameter::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:url_param_filter.FilterParameter)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string name = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_name(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:url_param_filter.FilterParameter)
  return target;
}

size_t FilterParameter::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:url_param_filter.FilterParameter)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string name = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FilterParameter::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const FilterParameter*>(
      &from));
}

void FilterParameter::MergeFrom(const FilterParameter& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:url_param_filter.FilterParameter)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_name()) {
    _internal_set_name(from._internal_name());
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FilterParameter::CopyFrom(const FilterParameter& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:url_param_filter.FilterParameter)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FilterParameter::IsInitialized() const {
  return true;
}

void FilterParameter::InternalSwap(FilterParameter* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &name_, lhs_arena,
      &other->name_, rhs_arena
  );
}

std::string FilterParameter::GetTypeName() const {
  return "url_param_filter.FilterParameter";
}


// ===================================================================

class FilterClassification::_Internal {
 public:
  using HasBits = decltype(std::declval<FilterClassification>()._has_bits_);
  static void set_has_site(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_site_role(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_site_match_type(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
};

FilterClassification::FilterClassification(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  parameters_(arena),
  use_cases_(arena),
  experiment_tags_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:url_param_filter.FilterClassification)
}
FilterClassification::FilterClassification(const FilterClassification& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_),
      parameters_(from.parameters_),
      use_cases_(from.use_cases_),
      experiment_tags_(from.experiment_tags_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  site_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    site_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_site()) {
    site_.Set(from._internal_site(), 
      GetArenaForAllocation());
  }
  ::memcpy(&site_role_, &from.site_role_,
    static_cast<size_t>(reinterpret_cast<char*>(&site_match_type_) -
    reinterpret_cast<char*>(&site_role_)) + sizeof(site_match_type_));
  // @@protoc_insertion_point(copy_constructor:url_param_filter.FilterClassification)
}

inline void FilterClassification::SharedCtor() {
site_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  site_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&site_role_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&site_match_type_) -
    reinterpret_cast<char*>(&site_role_)) + sizeof(site_match_type_));
}

FilterClassification::~FilterClassification() {
  // @@protoc_insertion_point(destructor:url_param_filter.FilterClassification)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FilterClassification::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  site_.Destroy();
}

void FilterClassification::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FilterClassification::Clear() {
// @@protoc_insertion_point(message_clear_start:url_param_filter.FilterClassification)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  parameters_.Clear();
  use_cases_.Clear();
  experiment_tags_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    site_.ClearNonDefaultToEmpty();
  }
  if (cached_has_bits & 0x00000006u) {
    ::memset(&site_role_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&site_match_type_) -
        reinterpret_cast<char*>(&site_role_)) + sizeof(site_match_type_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FilterClassification::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string site = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_site();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .url_param_filter.FilterClassification.SiteRole site_role = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::url_param_filter::FilterClassification_SiteRole_IsValid(val))) {
            _internal_set_site_role(static_cast<::url_param_filter::FilterClassification_SiteRole>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // repeated .url_param_filter.FilterParameter parameters = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_parameters(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .url_param_filter.FilterClassification.UseCase use_cases = 4 [packed = true];
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedEnumParser<std::string>(_internal_mutable_use_cases(), ptr, ctx, ::url_param_filter::FilterClassification_UseCase_IsValid, &_internal_metadata_, 4);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 32) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::url_param_filter::FilterClassification_UseCase_IsValid(val))) {
            _internal_add_use_cases(static_cast<::url_param_filter::FilterClassification_UseCase>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(4, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // repeated string experiment_tags = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_experiment_tags();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional .url_param_filter.FilterClassification.SiteMatchType site_match_type = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::url_param_filter::FilterClassification_SiteMatchType_IsValid(val))) {
            _internal_set_site_match_type(static_cast<::url_param_filter::FilterClassification_SiteMatchType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(6, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FilterClassification::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:url_param_filter.FilterClassification)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional string site = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_site(), target);
  }

  // optional .url_param_filter.FilterClassification.SiteRole site_role = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      2, this->_internal_site_role(), target);
  }

  // repeated .url_param_filter.FilterParameter parameters = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_parameters_size()); i < n; i++) {
    const auto& repfield = this->_internal_parameters(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .url_param_filter.FilterClassification.UseCase use_cases = 4 [packed = true];
  {
    int byte_size = _use_cases_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteEnumPacked(
          4, use_cases_, byte_size, target);
    }
  }

  // repeated string experiment_tags = 5;
  for (int i = 0, n = this->_internal_experiment_tags_size(); i < n; i++) {
    const auto& s = this->_internal_experiment_tags(i);
    target = stream->WriteString(5, s, target);
  }

  // optional .url_param_filter.FilterClassification.SiteMatchType site_match_type = 6;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      6, this->_internal_site_match_type(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:url_param_filter.FilterClassification)
  return target;
}

size_t FilterClassification::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:url_param_filter.FilterClassification)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .url_param_filter.FilterParameter parameters = 3;
  total_size += 1UL * this->_internal_parameters_size();
  for (const auto& msg : this->parameters_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .url_param_filter.FilterClassification.UseCase use_cases = 4 [packed = true];
  {
    size_t data_size = 0;
    unsigned int count = static_cast<unsigned int>(this->_internal_use_cases_size());for (unsigned int i = 0; i < count; i++) {
      data_size += ::_pbi::WireFormatLite::EnumSize(
        this->_internal_use_cases(static_cast<int>(i)));
    }
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _use_cases_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // repeated string experiment_tags = 5;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(experiment_tags_.size());
  for (int i = 0, n = experiment_tags_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      experiment_tags_.Get(i));
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    // optional string site = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
          this->_internal_site());
    }

    // optional .url_param_filter.FilterClassification.SiteRole site_role = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_site_role());
    }

    // optional .url_param_filter.FilterClassification.SiteMatchType site_match_type = 6;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_site_match_type());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FilterClassification::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const FilterClassification*>(
      &from));
}

void FilterClassification::MergeFrom(const FilterClassification& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:url_param_filter.FilterClassification)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  parameters_.MergeFrom(from.parameters_);
  use_cases_.MergeFrom(from.use_cases_);
  experiment_tags_.MergeFrom(from.experiment_tags_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000007u) {
    if (cached_has_bits & 0x00000001u) {
      _internal_set_site(from._internal_site());
    }
    if (cached_has_bits & 0x00000002u) {
      site_role_ = from.site_role_;
    }
    if (cached_has_bits & 0x00000004u) {
      site_match_type_ = from.site_match_type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FilterClassification::CopyFrom(const FilterClassification& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:url_param_filter.FilterClassification)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FilterClassification::IsInitialized() const {
  return true;
}

void FilterClassification::InternalSwap(FilterClassification* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  parameters_.InternalSwap(&other->parameters_);
  use_cases_.InternalSwap(&other->use_cases_);
  experiment_tags_.InternalSwap(&other->experiment_tags_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &site_, lhs_arena,
      &other->site_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FilterClassification, site_match_type_)
      + sizeof(FilterClassification::site_match_type_)
      - PROTOBUF_FIELD_OFFSET(FilterClassification, site_role_)>(
          reinterpret_cast<char*>(&site_role_),
          reinterpret_cast<char*>(&other->site_role_));
}

std::string FilterClassification::GetTypeName() const {
  return "url_param_filter.FilterClassification";
}


// ===================================================================

class FilterClassifications::_Internal {
 public:
};

FilterClassifications::FilterClassifications(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  classifications_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:url_param_filter.FilterClassifications)
}
FilterClassifications::FilterClassifications(const FilterClassifications& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      classifications_(from.classifications_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:url_param_filter.FilterClassifications)
}

inline void FilterClassifications::SharedCtor() {
}

FilterClassifications::~FilterClassifications() {
  // @@protoc_insertion_point(destructor:url_param_filter.FilterClassifications)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FilterClassifications::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void FilterClassifications::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FilterClassifications::Clear() {
// @@protoc_insertion_point(message_clear_start:url_param_filter.FilterClassifications)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  classifications_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FilterClassifications::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .url_param_filter.FilterClassification classifications = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_classifications(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* FilterClassifications::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:url_param_filter.FilterClassifications)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .url_param_filter.FilterClassification classifications = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_classifications_size()); i < n; i++) {
    const auto& repfield = this->_internal_classifications(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:url_param_filter.FilterClassifications)
  return target;
}

size_t FilterClassifications::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:url_param_filter.FilterClassifications)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .url_param_filter.FilterClassification classifications = 1;
  total_size += 1UL * this->_internal_classifications_size();
  for (const auto& msg : this->classifications_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FilterClassifications::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const FilterClassifications*>(
      &from));
}

void FilterClassifications::MergeFrom(const FilterClassifications& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:url_param_filter.FilterClassifications)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  classifications_.MergeFrom(from.classifications_);
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FilterClassifications::CopyFrom(const FilterClassifications& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:url_param_filter.FilterClassifications)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FilterClassifications::IsInitialized() const {
  return true;
}

void FilterClassifications::InternalSwap(FilterClassifications* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  classifications_.InternalSwap(&other->classifications_);
}

std::string FilterClassifications::GetTypeName() const {
  return "url_param_filter.FilterClassifications";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace url_param_filter
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::url_param_filter::FilterParameter*
Arena::CreateMaybeMessage< ::url_param_filter::FilterParameter >(Arena* arena) {
  return Arena::CreateMessageInternal< ::url_param_filter::FilterParameter >(arena);
}
template<> PROTOBUF_NOINLINE ::url_param_filter::FilterClassification*
Arena::CreateMaybeMessage< ::url_param_filter::FilterClassification >(Arena* arena) {
  return Arena::CreateMessageInternal< ::url_param_filter::FilterClassification >(arena);
}
template<> PROTOBUF_NOINLINE ::url_param_filter::FilterClassifications*
Arena::CreateMaybeMessage< ::url_param_filter::FilterClassifications >(Arena* arena) {
  return Arena::CreateMessageInternal< ::url_param_filter::FilterClassifications >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
