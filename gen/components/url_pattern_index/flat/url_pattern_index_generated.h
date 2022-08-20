// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_URLPATTERNINDEX_URL_PATTERN_INDEX_FLAT_H_
#define FLATBUFFERS_GENERATED_URLPATTERNINDEX_URL_PATTERN_INDEX_FLAT_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 2 &&
              FLATBUFFERS_VERSION_MINOR == 0 &&
              FLATBUFFERS_VERSION_REVISION == 6,
             "Non-compatible flatbuffers version included");

namespace url_pattern_index {
namespace flat {

struct UrlRule;
struct UrlRuleBuilder;

struct NGramToRules;
struct NGramToRulesBuilder;

struct UrlPatternIndex;
struct UrlPatternIndexBuilder;

enum UrlPatternType : uint8_t {
  UrlPatternType_SUBSTRING = 0,
  UrlPatternType_WILDCARDED = 1,
  UrlPatternType_REGEXP = 2,
  UrlPatternType_MIN = UrlPatternType_SUBSTRING,
  UrlPatternType_MAX = UrlPatternType_REGEXP
};

inline const UrlPatternType (&EnumValuesUrlPatternType())[3] {
  static const UrlPatternType values[] = {
    UrlPatternType_SUBSTRING,
    UrlPatternType_WILDCARDED,
    UrlPatternType_REGEXP
  };
  return values;
}

inline const char * const *EnumNamesUrlPatternType() {
  static const char * const names[4] = {
    "SUBSTRING",
    "WILDCARDED",
    "REGEXP",
    nullptr
  };
  return names;
}

inline const char *EnumNameUrlPatternType(UrlPatternType e) {
  if (flatbuffers::IsOutRange(e, UrlPatternType_SUBSTRING, UrlPatternType_REGEXP)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesUrlPatternType()[index];
}

enum AnchorType : uint8_t {
  AnchorType_NONE = 0,
  AnchorType_BOUNDARY = 1,
  AnchorType_SUBDOMAIN = 2,
  AnchorType_MIN = AnchorType_NONE,
  AnchorType_MAX = AnchorType_SUBDOMAIN
};

inline const AnchorType (&EnumValuesAnchorType())[3] {
  static const AnchorType values[] = {
    AnchorType_NONE,
    AnchorType_BOUNDARY,
    AnchorType_SUBDOMAIN
  };
  return values;
}

inline const char * const *EnumNamesAnchorType() {
  static const char * const names[4] = {
    "NONE",
    "BOUNDARY",
    "SUBDOMAIN",
    nullptr
  };
  return names;
}

inline const char *EnumNameAnchorType(AnchorType e) {
  if (flatbuffers::IsOutRange(e, AnchorType_NONE, AnchorType_SUBDOMAIN)) return "";
  const size_t index = static_cast<size_t>(e);
  return EnumNamesAnchorType()[index];
}

enum OptionFlag : uint8_t {
  OptionFlag_IS_ALLOWLIST = 1,
  OptionFlag_APPLIES_TO_FIRST_PARTY = 2,
  OptionFlag_APPLIES_TO_THIRD_PARTY = 4,
  OptionFlag_IS_CASE_INSENSITIVE = 8,
  OptionFlag_NONE = 0,
  OptionFlag_ANY = 15
};

inline const OptionFlag (&EnumValuesOptionFlag())[4] {
  static const OptionFlag values[] = {
    OptionFlag_IS_ALLOWLIST,
    OptionFlag_APPLIES_TO_FIRST_PARTY,
    OptionFlag_APPLIES_TO_THIRD_PARTY,
    OptionFlag_IS_CASE_INSENSITIVE
  };
  return values;
}

inline const char * const *EnumNamesOptionFlag() {
  static const char * const names[9] = {
    "IS_ALLOWLIST",
    "APPLIES_TO_FIRST_PARTY",
    "",
    "APPLIES_TO_THIRD_PARTY",
    "",
    "",
    "",
    "IS_CASE_INSENSITIVE",
    nullptr
  };
  return names;
}

inline const char *EnumNameOptionFlag(OptionFlag e) {
  if (flatbuffers::IsOutRange(e, OptionFlag_IS_ALLOWLIST, OptionFlag_IS_CASE_INSENSITIVE)) return "";
  const size_t index = static_cast<size_t>(e) - static_cast<size_t>(OptionFlag_IS_ALLOWLIST);
  return EnumNamesOptionFlag()[index];
}

enum ActivationType : uint8_t {
  ActivationType_DOCUMENT = 1,
  ActivationType_GENERIC_BLOCK = 2,
  ActivationType_NONE = 0,
  ActivationType_ANY = 3
};

inline const ActivationType (&EnumValuesActivationType())[2] {
  static const ActivationType values[] = {
    ActivationType_DOCUMENT,
    ActivationType_GENERIC_BLOCK
  };
  return values;
}

inline const char * const *EnumNamesActivationType() {
  static const char * const names[3] = {
    "DOCUMENT",
    "GENERIC_BLOCK",
    nullptr
  };
  return names;
}

inline const char *EnumNameActivationType(ActivationType e) {
  if (flatbuffers::IsOutRange(e, ActivationType_DOCUMENT, ActivationType_GENERIC_BLOCK)) return "";
  const size_t index = static_cast<size_t>(e) - static_cast<size_t>(ActivationType_DOCUMENT);
  return EnumNamesActivationType()[index];
}

enum ElementType : uint16_t {
  ElementType_OTHER = 1,
  ElementType_SCRIPT = 2,
  ElementType_IMAGE = 4,
  ElementType_STYLESHEET = 8,
  ElementType_OBJECT = 16,
  ElementType_XMLHTTPREQUEST = 32,
  ElementType_OBJECT_SUBREQUEST = 64,
  ElementType_SUBDOCUMENT = 128,
  ElementType_PING = 256,
  ElementType_MEDIA = 512,
  ElementType_FONT = 1024,
  ElementType_WEBSOCKET = 2048,
  ElementType_WEBTRANSPORT = 4096,
  ElementType_WEBBUNDLE = 8192,
  ElementType_CSP_REPORT = 16384,
  ElementType_MAIN_FRAME = 32768,
  ElementType_NONE = 0,
  ElementType_ANY = 65535
};

inline const ElementType (&EnumValuesElementType())[16] {
  static const ElementType values[] = {
    ElementType_OTHER,
    ElementType_SCRIPT,
    ElementType_IMAGE,
    ElementType_STYLESHEET,
    ElementType_OBJECT,
    ElementType_XMLHTTPREQUEST,
    ElementType_OBJECT_SUBREQUEST,
    ElementType_SUBDOCUMENT,
    ElementType_PING,
    ElementType_MEDIA,
    ElementType_FONT,
    ElementType_WEBSOCKET,
    ElementType_WEBTRANSPORT,
    ElementType_WEBBUNDLE,
    ElementType_CSP_REPORT,
    ElementType_MAIN_FRAME
  };
  return values;
}

inline const char *EnumNameElementType(ElementType e) {
  switch (e) {
    case ElementType_OTHER: return "OTHER";
    case ElementType_SCRIPT: return "SCRIPT";
    case ElementType_IMAGE: return "IMAGE";
    case ElementType_STYLESHEET: return "STYLESHEET";
    case ElementType_OBJECT: return "OBJECT";
    case ElementType_XMLHTTPREQUEST: return "XMLHTTPREQUEST";
    case ElementType_OBJECT_SUBREQUEST: return "OBJECT_SUBREQUEST";
    case ElementType_SUBDOCUMENT: return "SUBDOCUMENT";
    case ElementType_PING: return "PING";
    case ElementType_MEDIA: return "MEDIA";
    case ElementType_FONT: return "FONT";
    case ElementType_WEBSOCKET: return "WEBSOCKET";
    case ElementType_WEBTRANSPORT: return "WEBTRANSPORT";
    case ElementType_WEBBUNDLE: return "WEBBUNDLE";
    case ElementType_CSP_REPORT: return "CSP_REPORT";
    case ElementType_MAIN_FRAME: return "MAIN_FRAME";
    default: return "";
  }
}

enum RequestMethod : uint16_t {
  RequestMethod_CONNECT = 1,
  RequestMethod_DELETE = 2,
  RequestMethod_GET = 4,
  RequestMethod_HEAD = 8,
  RequestMethod_OPTIONS = 16,
  RequestMethod_PATCH = 32,
  RequestMethod_POST = 64,
  RequestMethod_PUT = 128,
  RequestMethod_NON_HTTP = 256,
  RequestMethod_NONE = 0,
  RequestMethod_ANY = 511
};

inline const RequestMethod (&EnumValuesRequestMethod())[9] {
  static const RequestMethod values[] = {
    RequestMethod_CONNECT,
    RequestMethod_DELETE,
    RequestMethod_GET,
    RequestMethod_HEAD,
    RequestMethod_OPTIONS,
    RequestMethod_PATCH,
    RequestMethod_POST,
    RequestMethod_PUT,
    RequestMethod_NON_HTTP
  };
  return values;
}

inline const char *EnumNameRequestMethod(RequestMethod e) {
  switch (e) {
    case RequestMethod_CONNECT: return "CONNECT";
    case RequestMethod_DELETE: return "DELETE";
    case RequestMethod_GET: return "GET";
    case RequestMethod_HEAD: return "HEAD";
    case RequestMethod_OPTIONS: return "OPTIONS";
    case RequestMethod_PATCH: return "PATCH";
    case RequestMethod_POST: return "POST";
    case RequestMethod_PUT: return "PUT";
    case RequestMethod_NON_HTTP: return "NON_HTTP";
    default: return "";
  }
}

struct UrlRule FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef UrlRuleBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_OPTIONS = 4,
    VT_ELEMENT_TYPES = 6,
    VT_REQUEST_METHODS = 8,
    VT_ACTIVATION_TYPES = 10,
    VT_URL_PATTERN_TYPE = 12,
    VT_ANCHOR_LEFT = 14,
    VT_ANCHOR_RIGHT = 16,
    VT_INITIATOR_DOMAINS_INCLUDED = 18,
    VT_INITIATOR_DOMAINS_EXCLUDED = 20,
    VT_REQUEST_DOMAINS_INCLUDED = 22,
    VT_REQUEST_DOMAINS_EXCLUDED = 24,
    VT_URL_PATTERN = 26,
    VT_ID = 28,
    VT_PRIORITY = 30,
    VT_EMBEDDER_CONDITIONS = 32
  };
  uint8_t options() const {
    return GetField<uint8_t>(VT_OPTIONS, 0);
  }
  uint16_t element_types() const {
    return GetField<uint16_t>(VT_ELEMENT_TYPES, 32767);
  }
  uint16_t request_methods() const {
    return GetField<uint16_t>(VT_REQUEST_METHODS, 511);
  }
  uint8_t activation_types() const {
    return GetField<uint8_t>(VT_ACTIVATION_TYPES, 0);
  }
  url_pattern_index::flat::UrlPatternType url_pattern_type() const {
    return static_cast<url_pattern_index::flat::UrlPatternType>(GetField<uint8_t>(VT_URL_PATTERN_TYPE, 0));
  }
  url_pattern_index::flat::AnchorType anchor_left() const {
    return static_cast<url_pattern_index::flat::AnchorType>(GetField<uint8_t>(VT_ANCHOR_LEFT, 0));
  }
  url_pattern_index::flat::AnchorType anchor_right() const {
    return static_cast<url_pattern_index::flat::AnchorType>(GetField<uint8_t>(VT_ANCHOR_RIGHT, 0));
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *initiator_domains_included() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_INITIATOR_DOMAINS_INCLUDED);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *initiator_domains_excluded() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_INITIATOR_DOMAINS_EXCLUDED);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *request_domains_included() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_REQUEST_DOMAINS_INCLUDED);
  }
  const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *request_domains_excluded() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>> *>(VT_REQUEST_DOMAINS_EXCLUDED);
  }
  const flatbuffers::String *url_pattern() const {
    return GetPointer<const flatbuffers::String *>(VT_URL_PATTERN);
  }
  uint32_t id() const {
    return GetField<uint32_t>(VT_ID, 0);
  }
  uint64_t priority() const {
    return GetField<uint64_t>(VT_PRIORITY, 0);
  }
  const flatbuffers::Vector<uint8_t> *embedder_conditions() const {
    return GetPointer<const flatbuffers::Vector<uint8_t> *>(VT_EMBEDDER_CONDITIONS);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint8_t>(verifier, VT_OPTIONS, 1) &&
           VerifyField<uint16_t>(verifier, VT_ELEMENT_TYPES, 2) &&
           VerifyField<uint16_t>(verifier, VT_REQUEST_METHODS, 2) &&
           VerifyField<uint8_t>(verifier, VT_ACTIVATION_TYPES, 1) &&
           VerifyField<uint8_t>(verifier, VT_URL_PATTERN_TYPE, 1) &&
           VerifyField<uint8_t>(verifier, VT_ANCHOR_LEFT, 1) &&
           VerifyField<uint8_t>(verifier, VT_ANCHOR_RIGHT, 1) &&
           VerifyOffset(verifier, VT_INITIATOR_DOMAINS_INCLUDED) &&
           verifier.VerifyVector(initiator_domains_included()) &&
           verifier.VerifyVectorOfStrings(initiator_domains_included()) &&
           VerifyOffset(verifier, VT_INITIATOR_DOMAINS_EXCLUDED) &&
           verifier.VerifyVector(initiator_domains_excluded()) &&
           verifier.VerifyVectorOfStrings(initiator_domains_excluded()) &&
           VerifyOffset(verifier, VT_REQUEST_DOMAINS_INCLUDED) &&
           verifier.VerifyVector(request_domains_included()) &&
           verifier.VerifyVectorOfStrings(request_domains_included()) &&
           VerifyOffset(verifier, VT_REQUEST_DOMAINS_EXCLUDED) &&
           verifier.VerifyVector(request_domains_excluded()) &&
           verifier.VerifyVectorOfStrings(request_domains_excluded()) &&
           VerifyOffset(verifier, VT_URL_PATTERN) &&
           verifier.VerifyString(url_pattern()) &&
           VerifyField<uint32_t>(verifier, VT_ID, 4) &&
           VerifyField<uint64_t>(verifier, VT_PRIORITY, 8) &&
           VerifyOffset(verifier, VT_EMBEDDER_CONDITIONS) &&
           verifier.VerifyVector(embedder_conditions()) &&
           verifier.EndTable();
  }
};

struct UrlRuleBuilder {
  typedef UrlRule Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_options(uint8_t options) {
    fbb_.AddElement<uint8_t>(UrlRule::VT_OPTIONS, options, 0);
  }
  void add_element_types(uint16_t element_types) {
    fbb_.AddElement<uint16_t>(UrlRule::VT_ELEMENT_TYPES, element_types, 32767);
  }
  void add_request_methods(uint16_t request_methods) {
    fbb_.AddElement<uint16_t>(UrlRule::VT_REQUEST_METHODS, request_methods, 511);
  }
  void add_activation_types(uint8_t activation_types) {
    fbb_.AddElement<uint8_t>(UrlRule::VT_ACTIVATION_TYPES, activation_types, 0);
  }
  void add_url_pattern_type(url_pattern_index::flat::UrlPatternType url_pattern_type) {
    fbb_.AddElement<uint8_t>(UrlRule::VT_URL_PATTERN_TYPE, static_cast<uint8_t>(url_pattern_type), 0);
  }
  void add_anchor_left(url_pattern_index::flat::AnchorType anchor_left) {
    fbb_.AddElement<uint8_t>(UrlRule::VT_ANCHOR_LEFT, static_cast<uint8_t>(anchor_left), 0);
  }
  void add_anchor_right(url_pattern_index::flat::AnchorType anchor_right) {
    fbb_.AddElement<uint8_t>(UrlRule::VT_ANCHOR_RIGHT, static_cast<uint8_t>(anchor_right), 0);
  }
  void add_initiator_domains_included(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> initiator_domains_included) {
    fbb_.AddOffset(UrlRule::VT_INITIATOR_DOMAINS_INCLUDED, initiator_domains_included);
  }
  void add_initiator_domains_excluded(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> initiator_domains_excluded) {
    fbb_.AddOffset(UrlRule::VT_INITIATOR_DOMAINS_EXCLUDED, initiator_domains_excluded);
  }
  void add_request_domains_included(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> request_domains_included) {
    fbb_.AddOffset(UrlRule::VT_REQUEST_DOMAINS_INCLUDED, request_domains_included);
  }
  void add_request_domains_excluded(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> request_domains_excluded) {
    fbb_.AddOffset(UrlRule::VT_REQUEST_DOMAINS_EXCLUDED, request_domains_excluded);
  }
  void add_url_pattern(flatbuffers::Offset<flatbuffers::String> url_pattern) {
    fbb_.AddOffset(UrlRule::VT_URL_PATTERN, url_pattern);
  }
  void add_id(uint32_t id) {
    fbb_.AddElement<uint32_t>(UrlRule::VT_ID, id, 0);
  }
  void add_priority(uint64_t priority) {
    fbb_.AddElement<uint64_t>(UrlRule::VT_PRIORITY, priority, 0);
  }
  void add_embedder_conditions(flatbuffers::Offset<flatbuffers::Vector<uint8_t>> embedder_conditions) {
    fbb_.AddOffset(UrlRule::VT_EMBEDDER_CONDITIONS, embedder_conditions);
  }
  explicit UrlRuleBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<UrlRule> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<UrlRule>(end);
    return o;
  }
};

inline flatbuffers::Offset<UrlRule> CreateUrlRule(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint8_t options = 0,
    uint16_t element_types = 32767,
    uint16_t request_methods = 511,
    uint8_t activation_types = 0,
    url_pattern_index::flat::UrlPatternType url_pattern_type = url_pattern_index::flat::UrlPatternType_SUBSTRING,
    url_pattern_index::flat::AnchorType anchor_left = url_pattern_index::flat::AnchorType_NONE,
    url_pattern_index::flat::AnchorType anchor_right = url_pattern_index::flat::AnchorType_NONE,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> initiator_domains_included = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> initiator_domains_excluded = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> request_domains_included = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<flatbuffers::String>>> request_domains_excluded = 0,
    flatbuffers::Offset<flatbuffers::String> url_pattern = 0,
    uint32_t id = 0,
    uint64_t priority = 0,
    flatbuffers::Offset<flatbuffers::Vector<uint8_t>> embedder_conditions = 0) {
  UrlRuleBuilder builder_(_fbb);
  builder_.add_priority(priority);
  builder_.add_embedder_conditions(embedder_conditions);
  builder_.add_id(id);
  builder_.add_url_pattern(url_pattern);
  builder_.add_request_domains_excluded(request_domains_excluded);
  builder_.add_request_domains_included(request_domains_included);
  builder_.add_initiator_domains_excluded(initiator_domains_excluded);
  builder_.add_initiator_domains_included(initiator_domains_included);
  builder_.add_request_methods(request_methods);
  builder_.add_element_types(element_types);
  builder_.add_anchor_right(anchor_right);
  builder_.add_anchor_left(anchor_left);
  builder_.add_url_pattern_type(url_pattern_type);
  builder_.add_activation_types(activation_types);
  builder_.add_options(options);
  return builder_.Finish();
}

inline flatbuffers::Offset<UrlRule> CreateUrlRuleDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint8_t options = 0,
    uint16_t element_types = 32767,
    uint16_t request_methods = 511,
    uint8_t activation_types = 0,
    url_pattern_index::flat::UrlPatternType url_pattern_type = url_pattern_index::flat::UrlPatternType_SUBSTRING,
    url_pattern_index::flat::AnchorType anchor_left = url_pattern_index::flat::AnchorType_NONE,
    url_pattern_index::flat::AnchorType anchor_right = url_pattern_index::flat::AnchorType_NONE,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *initiator_domains_included = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *initiator_domains_excluded = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *request_domains_included = nullptr,
    const std::vector<flatbuffers::Offset<flatbuffers::String>> *request_domains_excluded = nullptr,
    const char *url_pattern = nullptr,
    uint32_t id = 0,
    uint64_t priority = 0,
    const std::vector<uint8_t> *embedder_conditions = nullptr) {
  auto initiator_domains_included__ = initiator_domains_included ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*initiator_domains_included) : 0;
  auto initiator_domains_excluded__ = initiator_domains_excluded ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*initiator_domains_excluded) : 0;
  auto request_domains_included__ = request_domains_included ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*request_domains_included) : 0;
  auto request_domains_excluded__ = request_domains_excluded ? _fbb.CreateVector<flatbuffers::Offset<flatbuffers::String>>(*request_domains_excluded) : 0;
  auto url_pattern__ = url_pattern ? _fbb.CreateString(url_pattern) : 0;
  auto embedder_conditions__ = embedder_conditions ? _fbb.CreateVector<uint8_t>(*embedder_conditions) : 0;
  return url_pattern_index::flat::CreateUrlRule(
      _fbb,
      options,
      element_types,
      request_methods,
      activation_types,
      url_pattern_type,
      anchor_left,
      anchor_right,
      initiator_domains_included__,
      initiator_domains_excluded__,
      request_domains_included__,
      request_domains_excluded__,
      url_pattern__,
      id,
      priority,
      embedder_conditions__);
}

struct NGramToRules FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef NGramToRulesBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NGRAM = 4,
    VT_RULE_LIST = 6
  };
  uint64_t ngram() const {
    return GetField<uint64_t>(VT_NGRAM, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<url_pattern_index::flat::UrlRule>> *rule_list() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<url_pattern_index::flat::UrlRule>> *>(VT_RULE_LIST);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint64_t>(verifier, VT_NGRAM, 8) &&
           VerifyOffset(verifier, VT_RULE_LIST) &&
           verifier.VerifyVector(rule_list()) &&
           verifier.VerifyVectorOfTables(rule_list()) &&
           verifier.EndTable();
  }
};

struct NGramToRulesBuilder {
  typedef NGramToRules Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ngram(uint64_t ngram) {
    fbb_.AddElement<uint64_t>(NGramToRules::VT_NGRAM, ngram, 0);
  }
  void add_rule_list(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<url_pattern_index::flat::UrlRule>>> rule_list) {
    fbb_.AddOffset(NGramToRules::VT_RULE_LIST, rule_list);
  }
  explicit NGramToRulesBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<NGramToRules> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<NGramToRules>(end);
    return o;
  }
};

inline flatbuffers::Offset<NGramToRules> CreateNGramToRules(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t ngram = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<url_pattern_index::flat::UrlRule>>> rule_list = 0) {
  NGramToRulesBuilder builder_(_fbb);
  builder_.add_ngram(ngram);
  builder_.add_rule_list(rule_list);
  return builder_.Finish();
}

inline flatbuffers::Offset<NGramToRules> CreateNGramToRulesDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint64_t ngram = 0,
    const std::vector<flatbuffers::Offset<url_pattern_index::flat::UrlRule>> *rule_list = nullptr) {
  auto rule_list__ = rule_list ? _fbb.CreateVector<flatbuffers::Offset<url_pattern_index::flat::UrlRule>>(*rule_list) : 0;
  return url_pattern_index::flat::CreateNGramToRules(
      _fbb,
      ngram,
      rule_list__);
}

struct UrlPatternIndex FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef UrlPatternIndexBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_N = 4,
    VT_NGRAM_INDEX = 6,
    VT_NGRAM_INDEX_EMPTY_SLOT = 8,
    VT_FALLBACK_RULES = 10
  };
  uint32_t n() const {
    return GetField<uint32_t>(VT_N, 0);
  }
  const flatbuffers::Vector<flatbuffers::Offset<url_pattern_index::flat::NGramToRules>> *ngram_index() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<url_pattern_index::flat::NGramToRules>> *>(VT_NGRAM_INDEX);
  }
  const url_pattern_index::flat::NGramToRules *ngram_index_empty_slot() const {
    return GetPointer<const url_pattern_index::flat::NGramToRules *>(VT_NGRAM_INDEX_EMPTY_SLOT);
  }
  const flatbuffers::Vector<flatbuffers::Offset<url_pattern_index::flat::UrlRule>> *fallback_rules() const {
    return GetPointer<const flatbuffers::Vector<flatbuffers::Offset<url_pattern_index::flat::UrlRule>> *>(VT_FALLBACK_RULES);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<uint32_t>(verifier, VT_N, 4) &&
           VerifyOffset(verifier, VT_NGRAM_INDEX) &&
           verifier.VerifyVector(ngram_index()) &&
           verifier.VerifyVectorOfTables(ngram_index()) &&
           VerifyOffset(verifier, VT_NGRAM_INDEX_EMPTY_SLOT) &&
           verifier.VerifyTable(ngram_index_empty_slot()) &&
           VerifyOffset(verifier, VT_FALLBACK_RULES) &&
           verifier.VerifyVector(fallback_rules()) &&
           verifier.VerifyVectorOfTables(fallback_rules()) &&
           verifier.EndTable();
  }
};

struct UrlPatternIndexBuilder {
  typedef UrlPatternIndex Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_n(uint32_t n) {
    fbb_.AddElement<uint32_t>(UrlPatternIndex::VT_N, n, 0);
  }
  void add_ngram_index(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<url_pattern_index::flat::NGramToRules>>> ngram_index) {
    fbb_.AddOffset(UrlPatternIndex::VT_NGRAM_INDEX, ngram_index);
  }
  void add_ngram_index_empty_slot(flatbuffers::Offset<url_pattern_index::flat::NGramToRules> ngram_index_empty_slot) {
    fbb_.AddOffset(UrlPatternIndex::VT_NGRAM_INDEX_EMPTY_SLOT, ngram_index_empty_slot);
  }
  void add_fallback_rules(flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<url_pattern_index::flat::UrlRule>>> fallback_rules) {
    fbb_.AddOffset(UrlPatternIndex::VT_FALLBACK_RULES, fallback_rules);
  }
  explicit UrlPatternIndexBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<UrlPatternIndex> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<UrlPatternIndex>(end);
    return o;
  }
};

inline flatbuffers::Offset<UrlPatternIndex> CreateUrlPatternIndex(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t n = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<url_pattern_index::flat::NGramToRules>>> ngram_index = 0,
    flatbuffers::Offset<url_pattern_index::flat::NGramToRules> ngram_index_empty_slot = 0,
    flatbuffers::Offset<flatbuffers::Vector<flatbuffers::Offset<url_pattern_index::flat::UrlRule>>> fallback_rules = 0) {
  UrlPatternIndexBuilder builder_(_fbb);
  builder_.add_fallback_rules(fallback_rules);
  builder_.add_ngram_index_empty_slot(ngram_index_empty_slot);
  builder_.add_ngram_index(ngram_index);
  builder_.add_n(n);
  return builder_.Finish();
}

inline flatbuffers::Offset<UrlPatternIndex> CreateUrlPatternIndexDirect(
    flatbuffers::FlatBufferBuilder &_fbb,
    uint32_t n = 0,
    const std::vector<flatbuffers::Offset<url_pattern_index::flat::NGramToRules>> *ngram_index = nullptr,
    flatbuffers::Offset<url_pattern_index::flat::NGramToRules> ngram_index_empty_slot = 0,
    const std::vector<flatbuffers::Offset<url_pattern_index::flat::UrlRule>> *fallback_rules = nullptr) {
  auto ngram_index__ = ngram_index ? _fbb.CreateVector<flatbuffers::Offset<url_pattern_index::flat::NGramToRules>>(*ngram_index) : 0;
  auto fallback_rules__ = fallback_rules ? _fbb.CreateVector<flatbuffers::Offset<url_pattern_index::flat::UrlRule>>(*fallback_rules) : 0;
  return url_pattern_index::flat::CreateUrlPatternIndex(
      _fbb,
      n,
      ngram_index__,
      ngram_index_empty_slot,
      fallback_rules__);
}

inline const url_pattern_index::flat::UrlPatternIndex *GetUrlPatternIndex(const void *buf) {
  return flatbuffers::GetRoot<url_pattern_index::flat::UrlPatternIndex>(buf);
}

inline const url_pattern_index::flat::UrlPatternIndex *GetSizePrefixedUrlPatternIndex(const void *buf) {
  return flatbuffers::GetSizePrefixedRoot<url_pattern_index::flat::UrlPatternIndex>(buf);
}

inline bool VerifyUrlPatternIndexBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<url_pattern_index::flat::UrlPatternIndex>(nullptr);
}

inline bool VerifySizePrefixedUrlPatternIndexBuffer(
    flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<url_pattern_index::flat::UrlPatternIndex>(nullptr);
}

inline void FinishUrlPatternIndexBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<url_pattern_index::flat::UrlPatternIndex> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedUrlPatternIndexBuffer(
    flatbuffers::FlatBufferBuilder &fbb,
    flatbuffers::Offset<url_pattern_index::flat::UrlPatternIndex> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace flat
}  // namespace url_pattern_index

#endif  // FLATBUFFERS_GENERATED_URLPATTERNINDEX_URL_PATTERN_INDEX_FLAT_H_
