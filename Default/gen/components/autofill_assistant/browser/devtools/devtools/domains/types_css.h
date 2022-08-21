// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_CSS_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_CSS_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_css.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_dom.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_debugger.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_emulation.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_io.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_network.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_page.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_runtime.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_security.h"

namespace autofill_assistant {

class ErrorReporter;

namespace css {

// CSS rule collection for a single pseudo style.
class PseudoElementMatches {
 public:
  static std::unique_ptr<PseudoElementMatches> Parse(const base::Value& value, ErrorReporter* errors);
  PseudoElementMatches(const PseudoElementMatches&) = delete;
  PseudoElementMatches& operator=(const PseudoElementMatches&) = delete;
  ~PseudoElementMatches() { }

  // Pseudo element type.
  ::autofill_assistant::dom::PseudoType GetPseudoType() const { return pseudo_type_; }
  void SetPseudoType(::autofill_assistant::dom::PseudoType value) { pseudo_type_ = value; }

  // Pseudo element custom ident.
  bool HasPseudoIdentifier() const { return !!pseudo_identifier_; }
  std::string GetPseudoIdentifier() const { DCHECK(HasPseudoIdentifier()); return pseudo_identifier_.value(); }
  void SetPseudoIdentifier(const std::string& value) { pseudo_identifier_ = value; }

  // Matches of CSS rules applicable to the pseudo style.
  const std::vector<std::unique_ptr<::autofill_assistant::css::RuleMatch>>* GetMatches() const { return &matches_; }
  void SetMatches(std::vector<std::unique_ptr<::autofill_assistant::css::RuleMatch>> value) { matches_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<PseudoElementMatches> Clone() const;

  template<int STATE>
  class PseudoElementMatchesBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kPseudoTypeSet = 1 << 1,
    kMatchesSet = 1 << 2,
      kAllRequiredFieldsSet = (kPseudoTypeSet | kMatchesSet | 0)
    };

    PseudoElementMatchesBuilder<STATE | kPseudoTypeSet>& SetPseudoType(::autofill_assistant::dom::PseudoType value) {
      static_assert(!(STATE & kPseudoTypeSet), "property pseudoType should not have already been set");
      result_->SetPseudoType(value);
      return CastState<kPseudoTypeSet>();
    }

    PseudoElementMatchesBuilder<STATE>& SetPseudoIdentifier(const std::string& value) {
      result_->SetPseudoIdentifier(value);
      return *this;
    }

    PseudoElementMatchesBuilder<STATE | kMatchesSet>& SetMatches(std::vector<std::unique_ptr<::autofill_assistant::css::RuleMatch>> value) {
      static_assert(!(STATE & kMatchesSet), "property matches should not have already been set");
      result_->SetMatches(std::move(value));
      return CastState<kMatchesSet>();
    }

    std::unique_ptr<PseudoElementMatches> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class PseudoElementMatches;
    PseudoElementMatchesBuilder() : result_(new PseudoElementMatches()) { }

    template<int STEP> PseudoElementMatchesBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<PseudoElementMatchesBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<PseudoElementMatches> result_;
  };

  static PseudoElementMatchesBuilder<0> Builder() {
    return PseudoElementMatchesBuilder<0>();
  }

 private:
  PseudoElementMatches() { }

  ::autofill_assistant::dom::PseudoType pseudo_type_;
  absl::optional<std::string> pseudo_identifier_;
  std::vector<std::unique_ptr<::autofill_assistant::css::RuleMatch>> matches_;
};


// Inherited CSS rule collection from ancestor node.
class InheritedStyleEntry {
 public:
  static std::unique_ptr<InheritedStyleEntry> Parse(const base::Value& value, ErrorReporter* errors);
  InheritedStyleEntry(const InheritedStyleEntry&) = delete;
  InheritedStyleEntry& operator=(const InheritedStyleEntry&) = delete;
  ~InheritedStyleEntry() { }

  // The ancestor node's inline style, if any, in the style inheritance chain.
  bool HasInlineStyle() const { return !!inline_style_; }
  const ::autofill_assistant::css::CSSStyle* GetInlineStyle() const { DCHECK(HasInlineStyle()); return inline_style_.value().get(); }
  void SetInlineStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) { inline_style_ = std::move(value); }

  // Matches of CSS rules matching the ancestor node in the style inheritance chain.
  const std::vector<std::unique_ptr<::autofill_assistant::css::RuleMatch>>* GetMatchedCSSRules() const { return &matchedcss_rules_; }
  void SetMatchedCSSRules(std::vector<std::unique_ptr<::autofill_assistant::css::RuleMatch>> value) { matchedcss_rules_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<InheritedStyleEntry> Clone() const;

  template<int STATE>
  class InheritedStyleEntryBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kMatchedCSSRulesSet = 1 << 1,
      kAllRequiredFieldsSet = (kMatchedCSSRulesSet | 0)
    };

    InheritedStyleEntryBuilder<STATE>& SetInlineStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) {
      result_->SetInlineStyle(std::move(value));
      return *this;
    }

    InheritedStyleEntryBuilder<STATE | kMatchedCSSRulesSet>& SetMatchedCSSRules(std::vector<std::unique_ptr<::autofill_assistant::css::RuleMatch>> value) {
      static_assert(!(STATE & kMatchedCSSRulesSet), "property matchedCSSRules should not have already been set");
      result_->SetMatchedCSSRules(std::move(value));
      return CastState<kMatchedCSSRulesSet>();
    }

    std::unique_ptr<InheritedStyleEntry> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class InheritedStyleEntry;
    InheritedStyleEntryBuilder() : result_(new InheritedStyleEntry()) { }

    template<int STEP> InheritedStyleEntryBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<InheritedStyleEntryBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<InheritedStyleEntry> result_;
  };

  static InheritedStyleEntryBuilder<0> Builder() {
    return InheritedStyleEntryBuilder<0>();
  }

 private:
  InheritedStyleEntry() { }

  absl::optional<std::unique_ptr<::autofill_assistant::css::CSSStyle>> inline_style_;
  std::vector<std::unique_ptr<::autofill_assistant::css::RuleMatch>> matchedcss_rules_;
};


// Inherited pseudo element matches from pseudos of an ancestor node.
class InheritedPseudoElementMatches {
 public:
  static std::unique_ptr<InheritedPseudoElementMatches> Parse(const base::Value& value, ErrorReporter* errors);
  InheritedPseudoElementMatches(const InheritedPseudoElementMatches&) = delete;
  InheritedPseudoElementMatches& operator=(const InheritedPseudoElementMatches&) = delete;
  ~InheritedPseudoElementMatches() { }

  // Matches of pseudo styles from the pseudos of an ancestor node.
  const std::vector<std::unique_ptr<::autofill_assistant::css::PseudoElementMatches>>* GetPseudoElements() const { return &pseudo_elements_; }
  void SetPseudoElements(std::vector<std::unique_ptr<::autofill_assistant::css::PseudoElementMatches>> value) { pseudo_elements_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<InheritedPseudoElementMatches> Clone() const;

  template<int STATE>
  class InheritedPseudoElementMatchesBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kPseudoElementsSet = 1 << 1,
      kAllRequiredFieldsSet = (kPseudoElementsSet | 0)
    };

    InheritedPseudoElementMatchesBuilder<STATE | kPseudoElementsSet>& SetPseudoElements(std::vector<std::unique_ptr<::autofill_assistant::css::PseudoElementMatches>> value) {
      static_assert(!(STATE & kPseudoElementsSet), "property pseudoElements should not have already been set");
      result_->SetPseudoElements(std::move(value));
      return CastState<kPseudoElementsSet>();
    }

    std::unique_ptr<InheritedPseudoElementMatches> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class InheritedPseudoElementMatches;
    InheritedPseudoElementMatchesBuilder() : result_(new InheritedPseudoElementMatches()) { }

    template<int STEP> InheritedPseudoElementMatchesBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<InheritedPseudoElementMatchesBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<InheritedPseudoElementMatches> result_;
  };

  static InheritedPseudoElementMatchesBuilder<0> Builder() {
    return InheritedPseudoElementMatchesBuilder<0>();
  }

 private:
  InheritedPseudoElementMatches() { }

  std::vector<std::unique_ptr<::autofill_assistant::css::PseudoElementMatches>> pseudo_elements_;
};


// Match data for a CSS rule.
class RuleMatch {
 public:
  static std::unique_ptr<RuleMatch> Parse(const base::Value& value, ErrorReporter* errors);
  RuleMatch(const RuleMatch&) = delete;
  RuleMatch& operator=(const RuleMatch&) = delete;
  ~RuleMatch() { }

  // CSS rule in the match.
  const ::autofill_assistant::css::CSSRule* GetRule() const { return rule_.get(); }
  void SetRule(std::unique_ptr<::autofill_assistant::css::CSSRule> value) { rule_ = std::move(value); }

  // Matching selector indices in the rule's selectorList selectors (0-based).
  const std::vector<int>* GetMatchingSelectors() const { return &matching_selectors_; }
  void SetMatchingSelectors(std::vector<int> value) { matching_selectors_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RuleMatch> Clone() const;

  template<int STATE>
  class RuleMatchBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kRuleSet = 1 << 1,
    kMatchingSelectorsSet = 1 << 2,
      kAllRequiredFieldsSet = (kRuleSet | kMatchingSelectorsSet | 0)
    };

    RuleMatchBuilder<STATE | kRuleSet>& SetRule(std::unique_ptr<::autofill_assistant::css::CSSRule> value) {
      static_assert(!(STATE & kRuleSet), "property rule should not have already been set");
      result_->SetRule(std::move(value));
      return CastState<kRuleSet>();
    }

    RuleMatchBuilder<STATE | kMatchingSelectorsSet>& SetMatchingSelectors(std::vector<int> value) {
      static_assert(!(STATE & kMatchingSelectorsSet), "property matchingSelectors should not have already been set");
      result_->SetMatchingSelectors(std::move(value));
      return CastState<kMatchingSelectorsSet>();
    }

    std::unique_ptr<RuleMatch> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RuleMatch;
    RuleMatchBuilder() : result_(new RuleMatch()) { }

    template<int STEP> RuleMatchBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RuleMatchBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RuleMatch> result_;
  };

  static RuleMatchBuilder<0> Builder() {
    return RuleMatchBuilder<0>();
  }

 private:
  RuleMatch() { }

  std::unique_ptr<::autofill_assistant::css::CSSRule> rule_;
  std::vector<int> matching_selectors_;
};


// Data for a simple selector (these are delimited by commas in a selector list).
class Value {
 public:
  static std::unique_ptr<Value> Parse(const base::Value& value, ErrorReporter* errors);
  Value(const Value&) = delete;
  Value& operator=(const Value&) = delete;
  ~Value() { }

  // Value text.
  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  // Value range in the underlying resource (if available).
  bool HasRange() const { return !!range_; }
  const ::autofill_assistant::css::SourceRange* GetRange() const { DCHECK(HasRange()); return range_.value().get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<Value> Clone() const;

  template<int STATE>
  class ValueBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTextSet = 1 << 1,
      kAllRequiredFieldsSet = (kTextSet | 0)
    };

    ValueBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    ValueBuilder<STATE>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      result_->SetRange(std::move(value));
      return *this;
    }

    std::unique_ptr<Value> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class Value;
    ValueBuilder() : result_(new Value()) { }

    template<int STEP> ValueBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ValueBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<Value> result_;
  };

  static ValueBuilder<0> Builder() {
    return ValueBuilder<0>();
  }

 private:
  Value() { }

  std::string text_;
  absl::optional<std::unique_ptr<::autofill_assistant::css::SourceRange>> range_;
};


// Selector list data.
class SelectorList {
 public:
  static std::unique_ptr<SelectorList> Parse(const base::Value& value, ErrorReporter* errors);
  SelectorList(const SelectorList&) = delete;
  SelectorList& operator=(const SelectorList&) = delete;
  ~SelectorList() { }

  // Selectors in the list.
  const std::vector<std::unique_ptr<::autofill_assistant::css::Value>>* GetSelectors() const { return &selectors_; }
  void SetSelectors(std::vector<std::unique_ptr<::autofill_assistant::css::Value>> value) { selectors_ = std::move(value); }

  // Rule selector text.
  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SelectorList> Clone() const;

  template<int STATE>
  class SelectorListBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSelectorsSet = 1 << 1,
    kTextSet = 1 << 2,
      kAllRequiredFieldsSet = (kSelectorsSet | kTextSet | 0)
    };

    SelectorListBuilder<STATE | kSelectorsSet>& SetSelectors(std::vector<std::unique_ptr<::autofill_assistant::css::Value>> value) {
      static_assert(!(STATE & kSelectorsSet), "property selectors should not have already been set");
      result_->SetSelectors(std::move(value));
      return CastState<kSelectorsSet>();
    }

    SelectorListBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    std::unique_ptr<SelectorList> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SelectorList;
    SelectorListBuilder() : result_(new SelectorList()) { }

    template<int STEP> SelectorListBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SelectorListBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SelectorList> result_;
  };

  static SelectorListBuilder<0> Builder() {
    return SelectorListBuilder<0>();
  }

 private:
  SelectorList() { }

  std::vector<std::unique_ptr<::autofill_assistant::css::Value>> selectors_;
  std::string text_;
};


// CSS stylesheet metainformation.
class CSSStyleSheetHeader {
 public:
  static std::unique_ptr<CSSStyleSheetHeader> Parse(const base::Value& value, ErrorReporter* errors);
  CSSStyleSheetHeader(const CSSStyleSheetHeader&) = delete;
  CSSStyleSheetHeader& operator=(const CSSStyleSheetHeader&) = delete;
  ~CSSStyleSheetHeader() { }

  // The stylesheet identifier.
  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  // Owner frame identifier.
  std::string GetFrameId() const { return frame_id_; }
  void SetFrameId(const std::string& value) { frame_id_ = value; }

  // Stylesheet resource URL. Empty if this is a constructed stylesheet created using
  // new CSSStyleSheet() (but non-empty if this is a constructed sylesheet imported
  // as a CSS module script).
  std::string GetSourceURL() const { return sourceurl_; }
  void SetSourceURL(const std::string& value) { sourceurl_ = value; }

  // URL of source map associated with the stylesheet (if any).
  bool HasSourceMapURL() const { return !!source_mapurl_; }
  std::string GetSourceMapURL() const { DCHECK(HasSourceMapURL()); return source_mapurl_.value(); }
  void SetSourceMapURL(const std::string& value) { source_mapurl_ = value; }

  // Stylesheet origin.
  ::autofill_assistant::css::StyleSheetOrigin GetOrigin() const { return origin_; }
  void SetOrigin(::autofill_assistant::css::StyleSheetOrigin value) { origin_ = value; }

  // Stylesheet title.
  std::string GetTitle() const { return title_; }
  void SetTitle(const std::string& value) { title_ = value; }

  // The backend id for the owner node of the stylesheet.
  bool HasOwnerNode() const { return !!owner_node_; }
  int GetOwnerNode() const { DCHECK(HasOwnerNode()); return owner_node_.value(); }
  void SetOwnerNode(int value) { owner_node_ = value; }

  // Denotes whether the stylesheet is disabled.
  bool GetDisabled() const { return disabled_; }
  void SetDisabled(bool value) { disabled_ = value; }

  // Whether the sourceURL field value comes from the sourceURL comment.
  bool HasHasSourceURL() const { return !!has_sourceurl_; }
  bool GetHasSourceURL() const { DCHECK(HasHasSourceURL()); return has_sourceurl_.value(); }
  void SetHasSourceURL(bool value) { has_sourceurl_ = value; }

  // Whether this stylesheet is created for STYLE tag by parser. This flag is not set for
  // document.written STYLE tags.
  bool GetIsInline() const { return is_inline_; }
  void SetIsInline(bool value) { is_inline_ = value; }

  // Whether this stylesheet is mutable. Inline stylesheets become mutable
  // after they have been modified via CSSOM API.
  // <link> element's stylesheets become mutable only if DevTools modifies them.
  // Constructed stylesheets (new CSSStyleSheet()) are mutable immediately after creation.
  bool GetIsMutable() const { return is_mutable_; }
  void SetIsMutable(bool value) { is_mutable_ = value; }

  // True if this stylesheet is created through new CSSStyleSheet() or imported as a
  // CSS module script.
  bool GetIsConstructed() const { return is_constructed_; }
  void SetIsConstructed(bool value) { is_constructed_ = value; }

  // Line offset of the stylesheet within the resource (zero based).
  double GetStartLine() const { return start_line_; }
  void SetStartLine(double value) { start_line_ = value; }

  // Column offset of the stylesheet within the resource (zero based).
  double GetStartColumn() const { return start_column_; }
  void SetStartColumn(double value) { start_column_ = value; }

  // Size of the content (in characters).
  double GetLength() const { return length_; }
  void SetLength(double value) { length_ = value; }

  // Line offset of the end of the stylesheet within the resource (zero based).
  double GetEndLine() const { return end_line_; }
  void SetEndLine(double value) { end_line_ = value; }

  // Column offset of the end of the stylesheet within the resource (zero based).
  double GetEndColumn() const { return end_column_; }
  void SetEndColumn(double value) { end_column_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CSSStyleSheetHeader> Clone() const;

  template<int STATE>
  class CSSStyleSheetHeaderBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
    kFrameIdSet = 1 << 2,
    kSourceURLSet = 1 << 3,
    kOriginSet = 1 << 4,
    kTitleSet = 1 << 5,
    kDisabledSet = 1 << 6,
    kIsInlineSet = 1 << 7,
    kIsMutableSet = 1 << 8,
    kIsConstructedSet = 1 << 9,
    kStartLineSet = 1 << 10,
    kStartColumnSet = 1 << 11,
    kLengthSet = 1 << 12,
    kEndLineSet = 1 << 13,
    kEndColumnSet = 1 << 14,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | kFrameIdSet | kSourceURLSet | kOriginSet | kTitleSet | kDisabledSet | kIsInlineSet | kIsMutableSet | kIsConstructedSet | kStartLineSet | kStartColumnSet | kLengthSet | kEndLineSet | kEndColumnSet | 0)
    };

    CSSStyleSheetHeaderBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    CSSStyleSheetHeaderBuilder<STATE | kFrameIdSet>& SetFrameId(const std::string& value) {
      static_assert(!(STATE & kFrameIdSet), "property frameId should not have already been set");
      result_->SetFrameId(value);
      return CastState<kFrameIdSet>();
    }

    CSSStyleSheetHeaderBuilder<STATE | kSourceURLSet>& SetSourceURL(const std::string& value) {
      static_assert(!(STATE & kSourceURLSet), "property sourceURL should not have already been set");
      result_->SetSourceURL(value);
      return CastState<kSourceURLSet>();
    }

    CSSStyleSheetHeaderBuilder<STATE>& SetSourceMapURL(const std::string& value) {
      result_->SetSourceMapURL(value);
      return *this;
    }

    CSSStyleSheetHeaderBuilder<STATE | kOriginSet>& SetOrigin(::autofill_assistant::css::StyleSheetOrigin value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    CSSStyleSheetHeaderBuilder<STATE | kTitleSet>& SetTitle(const std::string& value) {
      static_assert(!(STATE & kTitleSet), "property title should not have already been set");
      result_->SetTitle(value);
      return CastState<kTitleSet>();
    }

    CSSStyleSheetHeaderBuilder<STATE>& SetOwnerNode(int value) {
      result_->SetOwnerNode(value);
      return *this;
    }

    CSSStyleSheetHeaderBuilder<STATE | kDisabledSet>& SetDisabled(bool value) {
      static_assert(!(STATE & kDisabledSet), "property disabled should not have already been set");
      result_->SetDisabled(value);
      return CastState<kDisabledSet>();
    }

    CSSStyleSheetHeaderBuilder<STATE>& SetHasSourceURL(bool value) {
      result_->SetHasSourceURL(value);
      return *this;
    }

    CSSStyleSheetHeaderBuilder<STATE | kIsInlineSet>& SetIsInline(bool value) {
      static_assert(!(STATE & kIsInlineSet), "property isInline should not have already been set");
      result_->SetIsInline(value);
      return CastState<kIsInlineSet>();
    }

    CSSStyleSheetHeaderBuilder<STATE | kIsMutableSet>& SetIsMutable(bool value) {
      static_assert(!(STATE & kIsMutableSet), "property isMutable should not have already been set");
      result_->SetIsMutable(value);
      return CastState<kIsMutableSet>();
    }

    CSSStyleSheetHeaderBuilder<STATE | kIsConstructedSet>& SetIsConstructed(bool value) {
      static_assert(!(STATE & kIsConstructedSet), "property isConstructed should not have already been set");
      result_->SetIsConstructed(value);
      return CastState<kIsConstructedSet>();
    }

    CSSStyleSheetHeaderBuilder<STATE | kStartLineSet>& SetStartLine(double value) {
      static_assert(!(STATE & kStartLineSet), "property startLine should not have already been set");
      result_->SetStartLine(value);
      return CastState<kStartLineSet>();
    }

    CSSStyleSheetHeaderBuilder<STATE | kStartColumnSet>& SetStartColumn(double value) {
      static_assert(!(STATE & kStartColumnSet), "property startColumn should not have already been set");
      result_->SetStartColumn(value);
      return CastState<kStartColumnSet>();
    }

    CSSStyleSheetHeaderBuilder<STATE | kLengthSet>& SetLength(double value) {
      static_assert(!(STATE & kLengthSet), "property length should not have already been set");
      result_->SetLength(value);
      return CastState<kLengthSet>();
    }

    CSSStyleSheetHeaderBuilder<STATE | kEndLineSet>& SetEndLine(double value) {
      static_assert(!(STATE & kEndLineSet), "property endLine should not have already been set");
      result_->SetEndLine(value);
      return CastState<kEndLineSet>();
    }

    CSSStyleSheetHeaderBuilder<STATE | kEndColumnSet>& SetEndColumn(double value) {
      static_assert(!(STATE & kEndColumnSet), "property endColumn should not have already been set");
      result_->SetEndColumn(value);
      return CastState<kEndColumnSet>();
    }

    std::unique_ptr<CSSStyleSheetHeader> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CSSStyleSheetHeader;
    CSSStyleSheetHeaderBuilder() : result_(new CSSStyleSheetHeader()) { }

    template<int STEP> CSSStyleSheetHeaderBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CSSStyleSheetHeaderBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CSSStyleSheetHeader> result_;
  };

  static CSSStyleSheetHeaderBuilder<0> Builder() {
    return CSSStyleSheetHeaderBuilder<0>();
  }

 private:
  CSSStyleSheetHeader() { }

  std::string style_sheet_id_;
  std::string frame_id_;
  std::string sourceurl_;
  absl::optional<std::string> source_mapurl_;
  ::autofill_assistant::css::StyleSheetOrigin origin_;
  std::string title_;
  absl::optional<int> owner_node_;
  bool disabled_;
  absl::optional<bool> has_sourceurl_;
  bool is_inline_;
  bool is_mutable_;
  bool is_constructed_;
  double start_line_;
  double start_column_;
  double length_;
  double end_line_;
  double end_column_;
};


// CSS rule representation.
class CSSRule {
 public:
  static std::unique_ptr<CSSRule> Parse(const base::Value& value, ErrorReporter* errors);
  CSSRule(const CSSRule&) = delete;
  CSSRule& operator=(const CSSRule&) = delete;
  ~CSSRule() { }

  // The css style sheet identifier (absent for user agent stylesheet and user-specified
  // stylesheet rules) this rule came from.
  bool HasStyleSheetId() const { return !!style_sheet_id_; }
  std::string GetStyleSheetId() const { DCHECK(HasStyleSheetId()); return style_sheet_id_.value(); }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  // Rule selector data.
  const ::autofill_assistant::css::SelectorList* GetSelectorList() const { return selector_list_.get(); }
  void SetSelectorList(std::unique_ptr<::autofill_assistant::css::SelectorList> value) { selector_list_ = std::move(value); }

  // Parent stylesheet's origin.
  ::autofill_assistant::css::StyleSheetOrigin GetOrigin() const { return origin_; }
  void SetOrigin(::autofill_assistant::css::StyleSheetOrigin value) { origin_ = value; }

  // Associated style declaration.
  const ::autofill_assistant::css::CSSStyle* GetStyle() const { return style_.get(); }
  void SetStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) { style_ = std::move(value); }

  // Media list array (for rules involving media queries). The array enumerates media queries
  // starting with the innermost one, going outwards.
  bool HasMedia() const { return !!media_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSMedia>>* GetMedia() const { DCHECK(HasMedia()); return &media_.value(); }
  void SetMedia(std::vector<std::unique_ptr<::autofill_assistant::css::CSSMedia>> value) { media_ = std::move(value); }

  // Container query list array (for rules involving container queries).
  // The array enumerates container queries starting with the innermost one, going outwards.
  bool HasContainerQueries() const { return !!container_queries_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSContainerQuery>>* GetContainerQueries() const { DCHECK(HasContainerQueries()); return &container_queries_.value(); }
  void SetContainerQueries(std::vector<std::unique_ptr<::autofill_assistant::css::CSSContainerQuery>> value) { container_queries_ = std::move(value); }

  // @supports CSS at-rule array.
  // The array enumerates @supports at-rules starting with the innermost one, going outwards.
  bool HasSupports() const { return !!supports_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSSupports>>* GetSupports() const { DCHECK(HasSupports()); return &supports_.value(); }
  void SetSupports(std::vector<std::unique_ptr<::autofill_assistant::css::CSSSupports>> value) { supports_ = std::move(value); }

  // Cascade layer array. Contains the layer hierarchy that this rule belongs to starting
  // with the innermost layer and going outwards.
  bool HasLayers() const { return !!layers_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSLayer>>* GetLayers() const { DCHECK(HasLayers()); return &layers_.value(); }
  void SetLayers(std::vector<std::unique_ptr<::autofill_assistant::css::CSSLayer>> value) { layers_ = std::move(value); }

  // @scope CSS at-rule array.
  // The array enumerates @scope at-rules starting with the innermost one, going outwards.
  bool HasScopes() const { return !!scopes_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSScope>>* GetScopes() const { DCHECK(HasScopes()); return &scopes_.value(); }
  void SetScopes(std::vector<std::unique_ptr<::autofill_assistant::css::CSSScope>> value) { scopes_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CSSRule> Clone() const;

  template<int STATE>
  class CSSRuleBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSelectorListSet = 1 << 1,
    kOriginSet = 1 << 2,
    kStyleSet = 1 << 3,
      kAllRequiredFieldsSet = (kSelectorListSet | kOriginSet | kStyleSet | 0)
    };

    CSSRuleBuilder<STATE>& SetStyleSheetId(const std::string& value) {
      result_->SetStyleSheetId(value);
      return *this;
    }

    CSSRuleBuilder<STATE | kSelectorListSet>& SetSelectorList(std::unique_ptr<::autofill_assistant::css::SelectorList> value) {
      static_assert(!(STATE & kSelectorListSet), "property selectorList should not have already been set");
      result_->SetSelectorList(std::move(value));
      return CastState<kSelectorListSet>();
    }

    CSSRuleBuilder<STATE | kOriginSet>& SetOrigin(::autofill_assistant::css::StyleSheetOrigin value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    CSSRuleBuilder<STATE | kStyleSet>& SetStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) {
      static_assert(!(STATE & kStyleSet), "property style should not have already been set");
      result_->SetStyle(std::move(value));
      return CastState<kStyleSet>();
    }

    CSSRuleBuilder<STATE>& SetMedia(std::vector<std::unique_ptr<::autofill_assistant::css::CSSMedia>> value) {
      result_->SetMedia(std::move(value));
      return *this;
    }

    CSSRuleBuilder<STATE>& SetContainerQueries(std::vector<std::unique_ptr<::autofill_assistant::css::CSSContainerQuery>> value) {
      result_->SetContainerQueries(std::move(value));
      return *this;
    }

    CSSRuleBuilder<STATE>& SetSupports(std::vector<std::unique_ptr<::autofill_assistant::css::CSSSupports>> value) {
      result_->SetSupports(std::move(value));
      return *this;
    }

    CSSRuleBuilder<STATE>& SetLayers(std::vector<std::unique_ptr<::autofill_assistant::css::CSSLayer>> value) {
      result_->SetLayers(std::move(value));
      return *this;
    }

    CSSRuleBuilder<STATE>& SetScopes(std::vector<std::unique_ptr<::autofill_assistant::css::CSSScope>> value) {
      result_->SetScopes(std::move(value));
      return *this;
    }

    std::unique_ptr<CSSRule> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CSSRule;
    CSSRuleBuilder() : result_(new CSSRule()) { }

    template<int STEP> CSSRuleBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CSSRuleBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CSSRule> result_;
  };

  static CSSRuleBuilder<0> Builder() {
    return CSSRuleBuilder<0>();
  }

 private:
  CSSRule() { }

  absl::optional<std::string> style_sheet_id_;
  std::unique_ptr<::autofill_assistant::css::SelectorList> selector_list_;
  ::autofill_assistant::css::StyleSheetOrigin origin_;
  std::unique_ptr<::autofill_assistant::css::CSSStyle> style_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::CSSMedia>>> media_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::CSSContainerQuery>>> container_queries_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::CSSSupports>>> supports_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::CSSLayer>>> layers_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::CSSScope>>> scopes_;
};


// CSS coverage information.
class RuleUsage {
 public:
  static std::unique_ptr<RuleUsage> Parse(const base::Value& value, ErrorReporter* errors);
  RuleUsage(const RuleUsage&) = delete;
  RuleUsage& operator=(const RuleUsage&) = delete;
  ~RuleUsage() { }

  // The css style sheet identifier (absent for user agent stylesheet and user-specified
  // stylesheet rules) this rule came from.
  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  // Offset of the start of the rule (including selector) from the beginning of the stylesheet.
  double GetStartOffset() const { return start_offset_; }
  void SetStartOffset(double value) { start_offset_ = value; }

  // Offset of the end of the rule body from the beginning of the stylesheet.
  double GetEndOffset() const { return end_offset_; }
  void SetEndOffset(double value) { end_offset_ = value; }

  // Indicates whether the rule was actually used by some element in the page.
  bool GetUsed() const { return used_; }
  void SetUsed(bool value) { used_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RuleUsage> Clone() const;

  template<int STATE>
  class RuleUsageBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
    kStartOffsetSet = 1 << 2,
    kEndOffsetSet = 1 << 3,
    kUsedSet = 1 << 4,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | kStartOffsetSet | kEndOffsetSet | kUsedSet | 0)
    };

    RuleUsageBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    RuleUsageBuilder<STATE | kStartOffsetSet>& SetStartOffset(double value) {
      static_assert(!(STATE & kStartOffsetSet), "property startOffset should not have already been set");
      result_->SetStartOffset(value);
      return CastState<kStartOffsetSet>();
    }

    RuleUsageBuilder<STATE | kEndOffsetSet>& SetEndOffset(double value) {
      static_assert(!(STATE & kEndOffsetSet), "property endOffset should not have already been set");
      result_->SetEndOffset(value);
      return CastState<kEndOffsetSet>();
    }

    RuleUsageBuilder<STATE | kUsedSet>& SetUsed(bool value) {
      static_assert(!(STATE & kUsedSet), "property used should not have already been set");
      result_->SetUsed(value);
      return CastState<kUsedSet>();
    }

    std::unique_ptr<RuleUsage> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RuleUsage;
    RuleUsageBuilder() : result_(new RuleUsage()) { }

    template<int STEP> RuleUsageBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RuleUsageBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RuleUsage> result_;
  };

  static RuleUsageBuilder<0> Builder() {
    return RuleUsageBuilder<0>();
  }

 private:
  RuleUsage() { }

  std::string style_sheet_id_;
  double start_offset_;
  double end_offset_;
  bool used_;
};


// Text range within a resource. All numbers are zero-based.
class SourceRange {
 public:
  static std::unique_ptr<SourceRange> Parse(const base::Value& value, ErrorReporter* errors);
  SourceRange(const SourceRange&) = delete;
  SourceRange& operator=(const SourceRange&) = delete;
  ~SourceRange() { }

  // Start line of range.
  int GetStartLine() const { return start_line_; }
  void SetStartLine(int value) { start_line_ = value; }

  // Start column of range (inclusive).
  int GetStartColumn() const { return start_column_; }
  void SetStartColumn(int value) { start_column_ = value; }

  // End line of range
  int GetEndLine() const { return end_line_; }
  void SetEndLine(int value) { end_line_ = value; }

  // End column of range (exclusive).
  int GetEndColumn() const { return end_column_; }
  void SetEndColumn(int value) { end_column_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SourceRange> Clone() const;

  template<int STATE>
  class SourceRangeBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStartLineSet = 1 << 1,
    kStartColumnSet = 1 << 2,
    kEndLineSet = 1 << 3,
    kEndColumnSet = 1 << 4,
      kAllRequiredFieldsSet = (kStartLineSet | kStartColumnSet | kEndLineSet | kEndColumnSet | 0)
    };

    SourceRangeBuilder<STATE | kStartLineSet>& SetStartLine(int value) {
      static_assert(!(STATE & kStartLineSet), "property startLine should not have already been set");
      result_->SetStartLine(value);
      return CastState<kStartLineSet>();
    }

    SourceRangeBuilder<STATE | kStartColumnSet>& SetStartColumn(int value) {
      static_assert(!(STATE & kStartColumnSet), "property startColumn should not have already been set");
      result_->SetStartColumn(value);
      return CastState<kStartColumnSet>();
    }

    SourceRangeBuilder<STATE | kEndLineSet>& SetEndLine(int value) {
      static_assert(!(STATE & kEndLineSet), "property endLine should not have already been set");
      result_->SetEndLine(value);
      return CastState<kEndLineSet>();
    }

    SourceRangeBuilder<STATE | kEndColumnSet>& SetEndColumn(int value) {
      static_assert(!(STATE & kEndColumnSet), "property endColumn should not have already been set");
      result_->SetEndColumn(value);
      return CastState<kEndColumnSet>();
    }

    std::unique_ptr<SourceRange> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SourceRange;
    SourceRangeBuilder() : result_(new SourceRange()) { }

    template<int STEP> SourceRangeBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SourceRangeBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SourceRange> result_;
  };

  static SourceRangeBuilder<0> Builder() {
    return SourceRangeBuilder<0>();
  }

 private:
  SourceRange() { }

  int start_line_;
  int start_column_;
  int end_line_;
  int end_column_;
};


class ShorthandEntry {
 public:
  static std::unique_ptr<ShorthandEntry> Parse(const base::Value& value, ErrorReporter* errors);
  ShorthandEntry(const ShorthandEntry&) = delete;
  ShorthandEntry& operator=(const ShorthandEntry&) = delete;
  ~ShorthandEntry() { }

  // Shorthand name.
  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  // Shorthand value.
  std::string GetValue() const { return value_; }
  void SetValue(const std::string& value) { value_ = value; }

  // Whether the property has "!important" annotation (implies `false` if absent).
  bool HasImportant() const { return !!important_; }
  bool GetImportant() const { DCHECK(HasImportant()); return important_.value(); }
  void SetImportant(bool value) { important_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ShorthandEntry> Clone() const;

  template<int STATE>
  class ShorthandEntryBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNameSet = 1 << 1,
    kValueSet = 1 << 2,
      kAllRequiredFieldsSet = (kNameSet | kValueSet | 0)
    };

    ShorthandEntryBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    ShorthandEntryBuilder<STATE | kValueSet>& SetValue(const std::string& value) {
      static_assert(!(STATE & kValueSet), "property value should not have already been set");
      result_->SetValue(value);
      return CastState<kValueSet>();
    }

    ShorthandEntryBuilder<STATE>& SetImportant(bool value) {
      result_->SetImportant(value);
      return *this;
    }

    std::unique_ptr<ShorthandEntry> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ShorthandEntry;
    ShorthandEntryBuilder() : result_(new ShorthandEntry()) { }

    template<int STEP> ShorthandEntryBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ShorthandEntryBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ShorthandEntry> result_;
  };

  static ShorthandEntryBuilder<0> Builder() {
    return ShorthandEntryBuilder<0>();
  }

 private:
  ShorthandEntry() { }

  std::string name_;
  std::string value_;
  absl::optional<bool> important_;
};


class CSSComputedStyleProperty {
 public:
  static std::unique_ptr<CSSComputedStyleProperty> Parse(const base::Value& value, ErrorReporter* errors);
  CSSComputedStyleProperty(const CSSComputedStyleProperty&) = delete;
  CSSComputedStyleProperty& operator=(const CSSComputedStyleProperty&) = delete;
  ~CSSComputedStyleProperty() { }

  // Computed style property name.
  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  // Computed style property value.
  std::string GetValue() const { return value_; }
  void SetValue(const std::string& value) { value_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CSSComputedStyleProperty> Clone() const;

  template<int STATE>
  class CSSComputedStylePropertyBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNameSet = 1 << 1,
    kValueSet = 1 << 2,
      kAllRequiredFieldsSet = (kNameSet | kValueSet | 0)
    };

    CSSComputedStylePropertyBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    CSSComputedStylePropertyBuilder<STATE | kValueSet>& SetValue(const std::string& value) {
      static_assert(!(STATE & kValueSet), "property value should not have already been set");
      result_->SetValue(value);
      return CastState<kValueSet>();
    }

    std::unique_ptr<CSSComputedStyleProperty> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CSSComputedStyleProperty;
    CSSComputedStylePropertyBuilder() : result_(new CSSComputedStyleProperty()) { }

    template<int STEP> CSSComputedStylePropertyBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CSSComputedStylePropertyBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CSSComputedStyleProperty> result_;
  };

  static CSSComputedStylePropertyBuilder<0> Builder() {
    return CSSComputedStylePropertyBuilder<0>();
  }

 private:
  CSSComputedStyleProperty() { }

  std::string name_;
  std::string value_;
};


// CSS style representation.
class CSSStyle {
 public:
  static std::unique_ptr<CSSStyle> Parse(const base::Value& value, ErrorReporter* errors);
  CSSStyle(const CSSStyle&) = delete;
  CSSStyle& operator=(const CSSStyle&) = delete;
  ~CSSStyle() { }

  // The css style sheet identifier (absent for user agent stylesheet and user-specified
  // stylesheet rules) this rule came from.
  bool HasStyleSheetId() const { return !!style_sheet_id_; }
  std::string GetStyleSheetId() const { DCHECK(HasStyleSheetId()); return style_sheet_id_.value(); }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  // CSS properties in the style.
  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSProperty>>* GetCssProperties() const { return &css_properties_; }
  void SetCssProperties(std::vector<std::unique_ptr<::autofill_assistant::css::CSSProperty>> value) { css_properties_ = std::move(value); }

  // Computed values for all shorthands found in the style.
  const std::vector<std::unique_ptr<::autofill_assistant::css::ShorthandEntry>>* GetShorthandEntries() const { return &shorthand_entries_; }
  void SetShorthandEntries(std::vector<std::unique_ptr<::autofill_assistant::css::ShorthandEntry>> value) { shorthand_entries_ = std::move(value); }

  // Style declaration text (if available).
  bool HasCssText() const { return !!css_text_; }
  std::string GetCssText() const { DCHECK(HasCssText()); return css_text_.value(); }
  void SetCssText(const std::string& value) { css_text_ = value; }

  // Style declaration range in the enclosing stylesheet (if available).
  bool HasRange() const { return !!range_; }
  const ::autofill_assistant::css::SourceRange* GetRange() const { DCHECK(HasRange()); return range_.value().get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CSSStyle> Clone() const;

  template<int STATE>
  class CSSStyleBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCssPropertiesSet = 1 << 1,
    kShorthandEntriesSet = 1 << 2,
      kAllRequiredFieldsSet = (kCssPropertiesSet | kShorthandEntriesSet | 0)
    };

    CSSStyleBuilder<STATE>& SetStyleSheetId(const std::string& value) {
      result_->SetStyleSheetId(value);
      return *this;
    }

    CSSStyleBuilder<STATE | kCssPropertiesSet>& SetCssProperties(std::vector<std::unique_ptr<::autofill_assistant::css::CSSProperty>> value) {
      static_assert(!(STATE & kCssPropertiesSet), "property cssProperties should not have already been set");
      result_->SetCssProperties(std::move(value));
      return CastState<kCssPropertiesSet>();
    }

    CSSStyleBuilder<STATE | kShorthandEntriesSet>& SetShorthandEntries(std::vector<std::unique_ptr<::autofill_assistant::css::ShorthandEntry>> value) {
      static_assert(!(STATE & kShorthandEntriesSet), "property shorthandEntries should not have already been set");
      result_->SetShorthandEntries(std::move(value));
      return CastState<kShorthandEntriesSet>();
    }

    CSSStyleBuilder<STATE>& SetCssText(const std::string& value) {
      result_->SetCssText(value);
      return *this;
    }

    CSSStyleBuilder<STATE>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      result_->SetRange(std::move(value));
      return *this;
    }

    std::unique_ptr<CSSStyle> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CSSStyle;
    CSSStyleBuilder() : result_(new CSSStyle()) { }

    template<int STEP> CSSStyleBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CSSStyleBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CSSStyle> result_;
  };

  static CSSStyleBuilder<0> Builder() {
    return CSSStyleBuilder<0>();
  }

 private:
  CSSStyle() { }

  absl::optional<std::string> style_sheet_id_;
  std::vector<std::unique_ptr<::autofill_assistant::css::CSSProperty>> css_properties_;
  std::vector<std::unique_ptr<::autofill_assistant::css::ShorthandEntry>> shorthand_entries_;
  absl::optional<std::string> css_text_;
  absl::optional<std::unique_ptr<::autofill_assistant::css::SourceRange>> range_;
};


// CSS property declaration data.
class CSSProperty {
 public:
  static std::unique_ptr<CSSProperty> Parse(const base::Value& value, ErrorReporter* errors);
  CSSProperty(const CSSProperty&) = delete;
  CSSProperty& operator=(const CSSProperty&) = delete;
  ~CSSProperty() { }

  // The property name.
  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  // The property value.
  std::string GetValue() const { return value_; }
  void SetValue(const std::string& value) { value_ = value; }

  // Whether the property has "!important" annotation (implies `false` if absent).
  bool HasImportant() const { return !!important_; }
  bool GetImportant() const { DCHECK(HasImportant()); return important_.value(); }
  void SetImportant(bool value) { important_ = value; }

  // Whether the property is implicit (implies `false` if absent).
  bool HasImplicit() const { return !!implicit_; }
  bool GetImplicit() const { DCHECK(HasImplicit()); return implicit_.value(); }
  void SetImplicit(bool value) { implicit_ = value; }

  // The full property text as specified in the style.
  bool HasText() const { return !!text_; }
  std::string GetText() const { DCHECK(HasText()); return text_.value(); }
  void SetText(const std::string& value) { text_ = value; }

  // Whether the property is understood by the browser (implies `true` if absent).
  bool HasParsedOk() const { return !!parsed_ok_; }
  bool GetParsedOk() const { DCHECK(HasParsedOk()); return parsed_ok_.value(); }
  void SetParsedOk(bool value) { parsed_ok_ = value; }

  // Whether the property is disabled by the user (present for source-based properties only).
  bool HasDisabled() const { return !!disabled_; }
  bool GetDisabled() const { DCHECK(HasDisabled()); return disabled_.value(); }
  void SetDisabled(bool value) { disabled_ = value; }

  // The entire property range in the enclosing style declaration (if available).
  bool HasRange() const { return !!range_; }
  const ::autofill_assistant::css::SourceRange* GetRange() const { DCHECK(HasRange()); return range_.value().get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  // Parsed longhand components of this property if it is a shorthand.
  // This field will be empty if the given property is not a shorthand.
  bool HasLonghandProperties() const { return !!longhand_properties_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSProperty>>* GetLonghandProperties() const { DCHECK(HasLonghandProperties()); return &longhand_properties_.value(); }
  void SetLonghandProperties(std::vector<std::unique_ptr<::autofill_assistant::css::CSSProperty>> value) { longhand_properties_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CSSProperty> Clone() const;

  template<int STATE>
  class CSSPropertyBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNameSet = 1 << 1,
    kValueSet = 1 << 2,
      kAllRequiredFieldsSet = (kNameSet | kValueSet | 0)
    };

    CSSPropertyBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    CSSPropertyBuilder<STATE | kValueSet>& SetValue(const std::string& value) {
      static_assert(!(STATE & kValueSet), "property value should not have already been set");
      result_->SetValue(value);
      return CastState<kValueSet>();
    }

    CSSPropertyBuilder<STATE>& SetImportant(bool value) {
      result_->SetImportant(value);
      return *this;
    }

    CSSPropertyBuilder<STATE>& SetImplicit(bool value) {
      result_->SetImplicit(value);
      return *this;
    }

    CSSPropertyBuilder<STATE>& SetText(const std::string& value) {
      result_->SetText(value);
      return *this;
    }

    CSSPropertyBuilder<STATE>& SetParsedOk(bool value) {
      result_->SetParsedOk(value);
      return *this;
    }

    CSSPropertyBuilder<STATE>& SetDisabled(bool value) {
      result_->SetDisabled(value);
      return *this;
    }

    CSSPropertyBuilder<STATE>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      result_->SetRange(std::move(value));
      return *this;
    }

    CSSPropertyBuilder<STATE>& SetLonghandProperties(std::vector<std::unique_ptr<::autofill_assistant::css::CSSProperty>> value) {
      result_->SetLonghandProperties(std::move(value));
      return *this;
    }

    std::unique_ptr<CSSProperty> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CSSProperty;
    CSSPropertyBuilder() : result_(new CSSProperty()) { }

    template<int STEP> CSSPropertyBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CSSPropertyBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CSSProperty> result_;
  };

  static CSSPropertyBuilder<0> Builder() {
    return CSSPropertyBuilder<0>();
  }

 private:
  CSSProperty() { }

  std::string name_;
  std::string value_;
  absl::optional<bool> important_;
  absl::optional<bool> implicit_;
  absl::optional<std::string> text_;
  absl::optional<bool> parsed_ok_;
  absl::optional<bool> disabled_;
  absl::optional<std::unique_ptr<::autofill_assistant::css::SourceRange>> range_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::CSSProperty>>> longhand_properties_;
};


// CSS media rule descriptor.
class CSSMedia {
 public:
  static std::unique_ptr<CSSMedia> Parse(const base::Value& value, ErrorReporter* errors);
  CSSMedia(const CSSMedia&) = delete;
  CSSMedia& operator=(const CSSMedia&) = delete;
  ~CSSMedia() { }

  // Media query text.
  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  // Source of the media query: "mediaRule" if specified by a @media rule, "importRule" if
  // specified by an @import rule, "linkedSheet" if specified by a "media" attribute in a linked
  // stylesheet's LINK tag, "inlineSheet" if specified by a "media" attribute in an inline
  // stylesheet's STYLE tag.
  ::autofill_assistant::css::CSSMediaSource GetSource() const { return source_; }
  void SetSource(::autofill_assistant::css::CSSMediaSource value) { source_ = value; }

  // URL of the document containing the media query description.
  bool HasSourceURL() const { return !!sourceurl_; }
  std::string GetSourceURL() const { DCHECK(HasSourceURL()); return sourceurl_.value(); }
  void SetSourceURL(const std::string& value) { sourceurl_ = value; }

  // The associated rule (@media or @import) header range in the enclosing stylesheet (if
  // available).
  bool HasRange() const { return !!range_; }
  const ::autofill_assistant::css::SourceRange* GetRange() const { DCHECK(HasRange()); return range_.value().get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  // Identifier of the stylesheet containing this object (if exists).
  bool HasStyleSheetId() const { return !!style_sheet_id_; }
  std::string GetStyleSheetId() const { DCHECK(HasStyleSheetId()); return style_sheet_id_.value(); }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  // Array of media queries.
  bool HasMediaList() const { return !!media_list_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::MediaQuery>>* GetMediaList() const { DCHECK(HasMediaList()); return &media_list_.value(); }
  void SetMediaList(std::vector<std::unique_ptr<::autofill_assistant::css::MediaQuery>> value) { media_list_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CSSMedia> Clone() const;

  template<int STATE>
  class CSSMediaBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTextSet = 1 << 1,
    kSourceSet = 1 << 2,
      kAllRequiredFieldsSet = (kTextSet | kSourceSet | 0)
    };

    CSSMediaBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    CSSMediaBuilder<STATE | kSourceSet>& SetSource(::autofill_assistant::css::CSSMediaSource value) {
      static_assert(!(STATE & kSourceSet), "property source should not have already been set");
      result_->SetSource(value);
      return CastState<kSourceSet>();
    }

    CSSMediaBuilder<STATE>& SetSourceURL(const std::string& value) {
      result_->SetSourceURL(value);
      return *this;
    }

    CSSMediaBuilder<STATE>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      result_->SetRange(std::move(value));
      return *this;
    }

    CSSMediaBuilder<STATE>& SetStyleSheetId(const std::string& value) {
      result_->SetStyleSheetId(value);
      return *this;
    }

    CSSMediaBuilder<STATE>& SetMediaList(std::vector<std::unique_ptr<::autofill_assistant::css::MediaQuery>> value) {
      result_->SetMediaList(std::move(value));
      return *this;
    }

    std::unique_ptr<CSSMedia> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CSSMedia;
    CSSMediaBuilder() : result_(new CSSMedia()) { }

    template<int STEP> CSSMediaBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CSSMediaBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CSSMedia> result_;
  };

  static CSSMediaBuilder<0> Builder() {
    return CSSMediaBuilder<0>();
  }

 private:
  CSSMedia() { }

  std::string text_;
  ::autofill_assistant::css::CSSMediaSource source_;
  absl::optional<std::string> sourceurl_;
  absl::optional<std::unique_ptr<::autofill_assistant::css::SourceRange>> range_;
  absl::optional<std::string> style_sheet_id_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::MediaQuery>>> media_list_;
};


// Media query descriptor.
class MediaQuery {
 public:
  static std::unique_ptr<MediaQuery> Parse(const base::Value& value, ErrorReporter* errors);
  MediaQuery(const MediaQuery&) = delete;
  MediaQuery& operator=(const MediaQuery&) = delete;
  ~MediaQuery() { }

  // Array of media query expressions.
  const std::vector<std::unique_ptr<::autofill_assistant::css::MediaQueryExpression>>* GetExpressions() const { return &expressions_; }
  void SetExpressions(std::vector<std::unique_ptr<::autofill_assistant::css::MediaQueryExpression>> value) { expressions_ = std::move(value); }

  // Whether the media query condition is satisfied.
  bool GetActive() const { return active_; }
  void SetActive(bool value) { active_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<MediaQuery> Clone() const;

  template<int STATE>
  class MediaQueryBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kExpressionsSet = 1 << 1,
    kActiveSet = 1 << 2,
      kAllRequiredFieldsSet = (kExpressionsSet | kActiveSet | 0)
    };

    MediaQueryBuilder<STATE | kExpressionsSet>& SetExpressions(std::vector<std::unique_ptr<::autofill_assistant::css::MediaQueryExpression>> value) {
      static_assert(!(STATE & kExpressionsSet), "property expressions should not have already been set");
      result_->SetExpressions(std::move(value));
      return CastState<kExpressionsSet>();
    }

    MediaQueryBuilder<STATE | kActiveSet>& SetActive(bool value) {
      static_assert(!(STATE & kActiveSet), "property active should not have already been set");
      result_->SetActive(value);
      return CastState<kActiveSet>();
    }

    std::unique_ptr<MediaQuery> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class MediaQuery;
    MediaQueryBuilder() : result_(new MediaQuery()) { }

    template<int STEP> MediaQueryBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<MediaQueryBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<MediaQuery> result_;
  };

  static MediaQueryBuilder<0> Builder() {
    return MediaQueryBuilder<0>();
  }

 private:
  MediaQuery() { }

  std::vector<std::unique_ptr<::autofill_assistant::css::MediaQueryExpression>> expressions_;
  bool active_;
};


// Media query expression descriptor.
class MediaQueryExpression {
 public:
  static std::unique_ptr<MediaQueryExpression> Parse(const base::Value& value, ErrorReporter* errors);
  MediaQueryExpression(const MediaQueryExpression&) = delete;
  MediaQueryExpression& operator=(const MediaQueryExpression&) = delete;
  ~MediaQueryExpression() { }

  // Media query expression value.
  double GetValue() const { return value_; }
  void SetValue(double value) { value_ = value; }

  // Media query expression units.
  std::string GetUnit() const { return unit_; }
  void SetUnit(const std::string& value) { unit_ = value; }

  // Media query expression feature.
  std::string GetFeature() const { return feature_; }
  void SetFeature(const std::string& value) { feature_ = value; }

  // The associated range of the value text in the enclosing stylesheet (if available).
  bool HasValueRange() const { return !!value_range_; }
  const ::autofill_assistant::css::SourceRange* GetValueRange() const { DCHECK(HasValueRange()); return value_range_.value().get(); }
  void SetValueRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { value_range_ = std::move(value); }

  // Computed length of media query expression (if applicable).
  bool HasComputedLength() const { return !!computed_length_; }
  double GetComputedLength() const { DCHECK(HasComputedLength()); return computed_length_.value(); }
  void SetComputedLength(double value) { computed_length_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<MediaQueryExpression> Clone() const;

  template<int STATE>
  class MediaQueryExpressionBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kValueSet = 1 << 1,
    kUnitSet = 1 << 2,
    kFeatureSet = 1 << 3,
      kAllRequiredFieldsSet = (kValueSet | kUnitSet | kFeatureSet | 0)
    };

    MediaQueryExpressionBuilder<STATE | kValueSet>& SetValue(double value) {
      static_assert(!(STATE & kValueSet), "property value should not have already been set");
      result_->SetValue(value);
      return CastState<kValueSet>();
    }

    MediaQueryExpressionBuilder<STATE | kUnitSet>& SetUnit(const std::string& value) {
      static_assert(!(STATE & kUnitSet), "property unit should not have already been set");
      result_->SetUnit(value);
      return CastState<kUnitSet>();
    }

    MediaQueryExpressionBuilder<STATE | kFeatureSet>& SetFeature(const std::string& value) {
      static_assert(!(STATE & kFeatureSet), "property feature should not have already been set");
      result_->SetFeature(value);
      return CastState<kFeatureSet>();
    }

    MediaQueryExpressionBuilder<STATE>& SetValueRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      result_->SetValueRange(std::move(value));
      return *this;
    }

    MediaQueryExpressionBuilder<STATE>& SetComputedLength(double value) {
      result_->SetComputedLength(value);
      return *this;
    }

    std::unique_ptr<MediaQueryExpression> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class MediaQueryExpression;
    MediaQueryExpressionBuilder() : result_(new MediaQueryExpression()) { }

    template<int STEP> MediaQueryExpressionBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<MediaQueryExpressionBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<MediaQueryExpression> result_;
  };

  static MediaQueryExpressionBuilder<0> Builder() {
    return MediaQueryExpressionBuilder<0>();
  }

 private:
  MediaQueryExpression() { }

  double value_;
  std::string unit_;
  std::string feature_;
  absl::optional<std::unique_ptr<::autofill_assistant::css::SourceRange>> value_range_;
  absl::optional<double> computed_length_;
};


// CSS container query rule descriptor.
class CSSContainerQuery {
 public:
  static std::unique_ptr<CSSContainerQuery> Parse(const base::Value& value, ErrorReporter* errors);
  CSSContainerQuery(const CSSContainerQuery&) = delete;
  CSSContainerQuery& operator=(const CSSContainerQuery&) = delete;
  ~CSSContainerQuery() { }

  // Container query text.
  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  // The associated rule header range in the enclosing stylesheet (if
  // available).
  bool HasRange() const { return !!range_; }
  const ::autofill_assistant::css::SourceRange* GetRange() const { DCHECK(HasRange()); return range_.value().get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  // Identifier of the stylesheet containing this object (if exists).
  bool HasStyleSheetId() const { return !!style_sheet_id_; }
  std::string GetStyleSheetId() const { DCHECK(HasStyleSheetId()); return style_sheet_id_.value(); }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  // Optional name for the container.
  bool HasName() const { return !!name_; }
  std::string GetName() const { DCHECK(HasName()); return name_.value(); }
  void SetName(const std::string& value) { name_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CSSContainerQuery> Clone() const;

  template<int STATE>
  class CSSContainerQueryBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTextSet = 1 << 1,
      kAllRequiredFieldsSet = (kTextSet | 0)
    };

    CSSContainerQueryBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    CSSContainerQueryBuilder<STATE>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      result_->SetRange(std::move(value));
      return *this;
    }

    CSSContainerQueryBuilder<STATE>& SetStyleSheetId(const std::string& value) {
      result_->SetStyleSheetId(value);
      return *this;
    }

    CSSContainerQueryBuilder<STATE>& SetName(const std::string& value) {
      result_->SetName(value);
      return *this;
    }

    std::unique_ptr<CSSContainerQuery> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CSSContainerQuery;
    CSSContainerQueryBuilder() : result_(new CSSContainerQuery()) { }

    template<int STEP> CSSContainerQueryBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CSSContainerQueryBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CSSContainerQuery> result_;
  };

  static CSSContainerQueryBuilder<0> Builder() {
    return CSSContainerQueryBuilder<0>();
  }

 private:
  CSSContainerQuery() { }

  std::string text_;
  absl::optional<std::unique_ptr<::autofill_assistant::css::SourceRange>> range_;
  absl::optional<std::string> style_sheet_id_;
  absl::optional<std::string> name_;
};


// CSS Supports at-rule descriptor.
class CSSSupports {
 public:
  static std::unique_ptr<CSSSupports> Parse(const base::Value& value, ErrorReporter* errors);
  CSSSupports(const CSSSupports&) = delete;
  CSSSupports& operator=(const CSSSupports&) = delete;
  ~CSSSupports() { }

  // Supports rule text.
  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  // Whether the supports condition is satisfied.
  bool GetActive() const { return active_; }
  void SetActive(bool value) { active_ = value; }

  // The associated rule header range in the enclosing stylesheet (if
  // available).
  bool HasRange() const { return !!range_; }
  const ::autofill_assistant::css::SourceRange* GetRange() const { DCHECK(HasRange()); return range_.value().get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  // Identifier of the stylesheet containing this object (if exists).
  bool HasStyleSheetId() const { return !!style_sheet_id_; }
  std::string GetStyleSheetId() const { DCHECK(HasStyleSheetId()); return style_sheet_id_.value(); }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CSSSupports> Clone() const;

  template<int STATE>
  class CSSSupportsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTextSet = 1 << 1,
    kActiveSet = 1 << 2,
      kAllRequiredFieldsSet = (kTextSet | kActiveSet | 0)
    };

    CSSSupportsBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    CSSSupportsBuilder<STATE | kActiveSet>& SetActive(bool value) {
      static_assert(!(STATE & kActiveSet), "property active should not have already been set");
      result_->SetActive(value);
      return CastState<kActiveSet>();
    }

    CSSSupportsBuilder<STATE>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      result_->SetRange(std::move(value));
      return *this;
    }

    CSSSupportsBuilder<STATE>& SetStyleSheetId(const std::string& value) {
      result_->SetStyleSheetId(value);
      return *this;
    }

    std::unique_ptr<CSSSupports> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CSSSupports;
    CSSSupportsBuilder() : result_(new CSSSupports()) { }

    template<int STEP> CSSSupportsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CSSSupportsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CSSSupports> result_;
  };

  static CSSSupportsBuilder<0> Builder() {
    return CSSSupportsBuilder<0>();
  }

 private:
  CSSSupports() { }

  std::string text_;
  bool active_;
  absl::optional<std::unique_ptr<::autofill_assistant::css::SourceRange>> range_;
  absl::optional<std::string> style_sheet_id_;
};


// CSS Scope at-rule descriptor.
class CSSScope {
 public:
  static std::unique_ptr<CSSScope> Parse(const base::Value& value, ErrorReporter* errors);
  CSSScope(const CSSScope&) = delete;
  CSSScope& operator=(const CSSScope&) = delete;
  ~CSSScope() { }

  // Scope rule text.
  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  // The associated rule header range in the enclosing stylesheet (if
  // available).
  bool HasRange() const { return !!range_; }
  const ::autofill_assistant::css::SourceRange* GetRange() const { DCHECK(HasRange()); return range_.value().get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  // Identifier of the stylesheet containing this object (if exists).
  bool HasStyleSheetId() const { return !!style_sheet_id_; }
  std::string GetStyleSheetId() const { DCHECK(HasStyleSheetId()); return style_sheet_id_.value(); }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CSSScope> Clone() const;

  template<int STATE>
  class CSSScopeBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTextSet = 1 << 1,
      kAllRequiredFieldsSet = (kTextSet | 0)
    };

    CSSScopeBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    CSSScopeBuilder<STATE>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      result_->SetRange(std::move(value));
      return *this;
    }

    CSSScopeBuilder<STATE>& SetStyleSheetId(const std::string& value) {
      result_->SetStyleSheetId(value);
      return *this;
    }

    std::unique_ptr<CSSScope> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CSSScope;
    CSSScopeBuilder() : result_(new CSSScope()) { }

    template<int STEP> CSSScopeBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CSSScopeBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CSSScope> result_;
  };

  static CSSScopeBuilder<0> Builder() {
    return CSSScopeBuilder<0>();
  }

 private:
  CSSScope() { }

  std::string text_;
  absl::optional<std::unique_ptr<::autofill_assistant::css::SourceRange>> range_;
  absl::optional<std::string> style_sheet_id_;
};


// CSS Layer at-rule descriptor.
class CSSLayer {
 public:
  static std::unique_ptr<CSSLayer> Parse(const base::Value& value, ErrorReporter* errors);
  CSSLayer(const CSSLayer&) = delete;
  CSSLayer& operator=(const CSSLayer&) = delete;
  ~CSSLayer() { }

  // Layer name.
  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  // The associated rule header range in the enclosing stylesheet (if
  // available).
  bool HasRange() const { return !!range_; }
  const ::autofill_assistant::css::SourceRange* GetRange() const { DCHECK(HasRange()); return range_.value().get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  // Identifier of the stylesheet containing this object (if exists).
  bool HasStyleSheetId() const { return !!style_sheet_id_; }
  std::string GetStyleSheetId() const { DCHECK(HasStyleSheetId()); return style_sheet_id_.value(); }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CSSLayer> Clone() const;

  template<int STATE>
  class CSSLayerBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTextSet = 1 << 1,
      kAllRequiredFieldsSet = (kTextSet | 0)
    };

    CSSLayerBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    CSSLayerBuilder<STATE>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      result_->SetRange(std::move(value));
      return *this;
    }

    CSSLayerBuilder<STATE>& SetStyleSheetId(const std::string& value) {
      result_->SetStyleSheetId(value);
      return *this;
    }

    std::unique_ptr<CSSLayer> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CSSLayer;
    CSSLayerBuilder() : result_(new CSSLayer()) { }

    template<int STEP> CSSLayerBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CSSLayerBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CSSLayer> result_;
  };

  static CSSLayerBuilder<0> Builder() {
    return CSSLayerBuilder<0>();
  }

 private:
  CSSLayer() { }

  std::string text_;
  absl::optional<std::unique_ptr<::autofill_assistant::css::SourceRange>> range_;
  absl::optional<std::string> style_sheet_id_;
};


// CSS Layer data.
class CSSLayerData {
 public:
  static std::unique_ptr<CSSLayerData> Parse(const base::Value& value, ErrorReporter* errors);
  CSSLayerData(const CSSLayerData&) = delete;
  CSSLayerData& operator=(const CSSLayerData&) = delete;
  ~CSSLayerData() { }

  // Layer name.
  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  // Direct sub-layers
  bool HasSubLayers() const { return !!sub_layers_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSLayerData>>* GetSubLayers() const { DCHECK(HasSubLayers()); return &sub_layers_.value(); }
  void SetSubLayers(std::vector<std::unique_ptr<::autofill_assistant::css::CSSLayerData>> value) { sub_layers_ = std::move(value); }

  // Layer order. The order determines the order of the layer in the cascade order.
  // A higher number has higher priority in the cascade order.
  double GetOrder() const { return order_; }
  void SetOrder(double value) { order_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CSSLayerData> Clone() const;

  template<int STATE>
  class CSSLayerDataBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNameSet = 1 << 1,
    kOrderSet = 1 << 2,
      kAllRequiredFieldsSet = (kNameSet | kOrderSet | 0)
    };

    CSSLayerDataBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    CSSLayerDataBuilder<STATE>& SetSubLayers(std::vector<std::unique_ptr<::autofill_assistant::css::CSSLayerData>> value) {
      result_->SetSubLayers(std::move(value));
      return *this;
    }

    CSSLayerDataBuilder<STATE | kOrderSet>& SetOrder(double value) {
      static_assert(!(STATE & kOrderSet), "property order should not have already been set");
      result_->SetOrder(value);
      return CastState<kOrderSet>();
    }

    std::unique_ptr<CSSLayerData> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CSSLayerData;
    CSSLayerDataBuilder() : result_(new CSSLayerData()) { }

    template<int STEP> CSSLayerDataBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CSSLayerDataBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CSSLayerData> result_;
  };

  static CSSLayerDataBuilder<0> Builder() {
    return CSSLayerDataBuilder<0>();
  }

 private:
  CSSLayerData() { }

  std::string name_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::CSSLayerData>>> sub_layers_;
  double order_;
};


// Information about amount of glyphs that were rendered with given font.
class PlatformFontUsage {
 public:
  static std::unique_ptr<PlatformFontUsage> Parse(const base::Value& value, ErrorReporter* errors);
  PlatformFontUsage(const PlatformFontUsage&) = delete;
  PlatformFontUsage& operator=(const PlatformFontUsage&) = delete;
  ~PlatformFontUsage() { }

  // Font's family name reported by platform.
  std::string GetFamilyName() const { return family_name_; }
  void SetFamilyName(const std::string& value) { family_name_ = value; }

  // Indicates if the font was downloaded or resolved locally.
  bool GetIsCustomFont() const { return is_custom_font_; }
  void SetIsCustomFont(bool value) { is_custom_font_ = value; }

  // Amount of glyphs that were rendered with this font.
  double GetGlyphCount() const { return glyph_count_; }
  void SetGlyphCount(double value) { glyph_count_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<PlatformFontUsage> Clone() const;

  template<int STATE>
  class PlatformFontUsageBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kFamilyNameSet = 1 << 1,
    kIsCustomFontSet = 1 << 2,
    kGlyphCountSet = 1 << 3,
      kAllRequiredFieldsSet = (kFamilyNameSet | kIsCustomFontSet | kGlyphCountSet | 0)
    };

    PlatformFontUsageBuilder<STATE | kFamilyNameSet>& SetFamilyName(const std::string& value) {
      static_assert(!(STATE & kFamilyNameSet), "property familyName should not have already been set");
      result_->SetFamilyName(value);
      return CastState<kFamilyNameSet>();
    }

    PlatformFontUsageBuilder<STATE | kIsCustomFontSet>& SetIsCustomFont(bool value) {
      static_assert(!(STATE & kIsCustomFontSet), "property isCustomFont should not have already been set");
      result_->SetIsCustomFont(value);
      return CastState<kIsCustomFontSet>();
    }

    PlatformFontUsageBuilder<STATE | kGlyphCountSet>& SetGlyphCount(double value) {
      static_assert(!(STATE & kGlyphCountSet), "property glyphCount should not have already been set");
      result_->SetGlyphCount(value);
      return CastState<kGlyphCountSet>();
    }

    std::unique_ptr<PlatformFontUsage> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class PlatformFontUsage;
    PlatformFontUsageBuilder() : result_(new PlatformFontUsage()) { }

    template<int STEP> PlatformFontUsageBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<PlatformFontUsageBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<PlatformFontUsage> result_;
  };

  static PlatformFontUsageBuilder<0> Builder() {
    return PlatformFontUsageBuilder<0>();
  }

 private:
  PlatformFontUsage() { }

  std::string family_name_;
  bool is_custom_font_;
  double glyph_count_;
};


// Information about font variation axes for variable fonts
class FontVariationAxis {
 public:
  static std::unique_ptr<FontVariationAxis> Parse(const base::Value& value, ErrorReporter* errors);
  FontVariationAxis(const FontVariationAxis&) = delete;
  FontVariationAxis& operator=(const FontVariationAxis&) = delete;
  ~FontVariationAxis() { }

  // The font-variation-setting tag (a.k.a. "axis tag").
  std::string GetTag() const { return tag_; }
  void SetTag(const std::string& value) { tag_ = value; }

  // Human-readable variation name in the default language (normally, "en").
  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  // The minimum value (inclusive) the font supports for this tag.
  double GetMinValue() const { return min_value_; }
  void SetMinValue(double value) { min_value_ = value; }

  // The maximum value (inclusive) the font supports for this tag.
  double GetMaxValue() const { return max_value_; }
  void SetMaxValue(double value) { max_value_ = value; }

  // The default value.
  double GetDefaultValue() const { return default_value_; }
  void SetDefaultValue(double value) { default_value_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<FontVariationAxis> Clone() const;

  template<int STATE>
  class FontVariationAxisBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTagSet = 1 << 1,
    kNameSet = 1 << 2,
    kMinValueSet = 1 << 3,
    kMaxValueSet = 1 << 4,
    kDefaultValueSet = 1 << 5,
      kAllRequiredFieldsSet = (kTagSet | kNameSet | kMinValueSet | kMaxValueSet | kDefaultValueSet | 0)
    };

    FontVariationAxisBuilder<STATE | kTagSet>& SetTag(const std::string& value) {
      static_assert(!(STATE & kTagSet), "property tag should not have already been set");
      result_->SetTag(value);
      return CastState<kTagSet>();
    }

    FontVariationAxisBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    FontVariationAxisBuilder<STATE | kMinValueSet>& SetMinValue(double value) {
      static_assert(!(STATE & kMinValueSet), "property minValue should not have already been set");
      result_->SetMinValue(value);
      return CastState<kMinValueSet>();
    }

    FontVariationAxisBuilder<STATE | kMaxValueSet>& SetMaxValue(double value) {
      static_assert(!(STATE & kMaxValueSet), "property maxValue should not have already been set");
      result_->SetMaxValue(value);
      return CastState<kMaxValueSet>();
    }

    FontVariationAxisBuilder<STATE | kDefaultValueSet>& SetDefaultValue(double value) {
      static_assert(!(STATE & kDefaultValueSet), "property defaultValue should not have already been set");
      result_->SetDefaultValue(value);
      return CastState<kDefaultValueSet>();
    }

    std::unique_ptr<FontVariationAxis> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class FontVariationAxis;
    FontVariationAxisBuilder() : result_(new FontVariationAxis()) { }

    template<int STEP> FontVariationAxisBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<FontVariationAxisBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<FontVariationAxis> result_;
  };

  static FontVariationAxisBuilder<0> Builder() {
    return FontVariationAxisBuilder<0>();
  }

 private:
  FontVariationAxis() { }

  std::string tag_;
  std::string name_;
  double min_value_;
  double max_value_;
  double default_value_;
};


// Properties of a web font: https://www.w3.org/TR/2008/REC-CSS2-20080411/fonts.html#font-descriptions
// and additional information such as platformFontFamily and fontVariationAxes.
class FontFace {
 public:
  static std::unique_ptr<FontFace> Parse(const base::Value& value, ErrorReporter* errors);
  FontFace(const FontFace&) = delete;
  FontFace& operator=(const FontFace&) = delete;
  ~FontFace() { }

  // The font-family.
  std::string GetFontFamily() const { return font_family_; }
  void SetFontFamily(const std::string& value) { font_family_ = value; }

  // The font-style.
  std::string GetFontStyle() const { return font_style_; }
  void SetFontStyle(const std::string& value) { font_style_ = value; }

  // The font-variant.
  std::string GetFontVariant() const { return font_variant_; }
  void SetFontVariant(const std::string& value) { font_variant_ = value; }

  // The font-weight.
  std::string GetFontWeight() const { return font_weight_; }
  void SetFontWeight(const std::string& value) { font_weight_ = value; }

  // The font-stretch.
  std::string GetFontStretch() const { return font_stretch_; }
  void SetFontStretch(const std::string& value) { font_stretch_ = value; }

  // The font-display.
  std::string GetFontDisplay() const { return font_display_; }
  void SetFontDisplay(const std::string& value) { font_display_ = value; }

  // The unicode-range.
  std::string GetUnicodeRange() const { return unicode_range_; }
  void SetUnicodeRange(const std::string& value) { unicode_range_ = value; }

  // The src.
  std::string GetSrc() const { return src_; }
  void SetSrc(const std::string& value) { src_ = value; }

  // The resolved platform font family
  std::string GetPlatformFontFamily() const { return platform_font_family_; }
  void SetPlatformFontFamily(const std::string& value) { platform_font_family_ = value; }

  // Available variation settings (a.k.a. "axes").
  bool HasFontVariationAxes() const { return !!font_variation_axes_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::FontVariationAxis>>* GetFontVariationAxes() const { DCHECK(HasFontVariationAxes()); return &font_variation_axes_.value(); }
  void SetFontVariationAxes(std::vector<std::unique_ptr<::autofill_assistant::css::FontVariationAxis>> value) { font_variation_axes_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<FontFace> Clone() const;

  template<int STATE>
  class FontFaceBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kFontFamilySet = 1 << 1,
    kFontStyleSet = 1 << 2,
    kFontVariantSet = 1 << 3,
    kFontWeightSet = 1 << 4,
    kFontStretchSet = 1 << 5,
    kFontDisplaySet = 1 << 6,
    kUnicodeRangeSet = 1 << 7,
    kSrcSet = 1 << 8,
    kPlatformFontFamilySet = 1 << 9,
      kAllRequiredFieldsSet = (kFontFamilySet | kFontStyleSet | kFontVariantSet | kFontWeightSet | kFontStretchSet | kFontDisplaySet | kUnicodeRangeSet | kSrcSet | kPlatformFontFamilySet | 0)
    };

    FontFaceBuilder<STATE | kFontFamilySet>& SetFontFamily(const std::string& value) {
      static_assert(!(STATE & kFontFamilySet), "property fontFamily should not have already been set");
      result_->SetFontFamily(value);
      return CastState<kFontFamilySet>();
    }

    FontFaceBuilder<STATE | kFontStyleSet>& SetFontStyle(const std::string& value) {
      static_assert(!(STATE & kFontStyleSet), "property fontStyle should not have already been set");
      result_->SetFontStyle(value);
      return CastState<kFontStyleSet>();
    }

    FontFaceBuilder<STATE | kFontVariantSet>& SetFontVariant(const std::string& value) {
      static_assert(!(STATE & kFontVariantSet), "property fontVariant should not have already been set");
      result_->SetFontVariant(value);
      return CastState<kFontVariantSet>();
    }

    FontFaceBuilder<STATE | kFontWeightSet>& SetFontWeight(const std::string& value) {
      static_assert(!(STATE & kFontWeightSet), "property fontWeight should not have already been set");
      result_->SetFontWeight(value);
      return CastState<kFontWeightSet>();
    }

    FontFaceBuilder<STATE | kFontStretchSet>& SetFontStretch(const std::string& value) {
      static_assert(!(STATE & kFontStretchSet), "property fontStretch should not have already been set");
      result_->SetFontStretch(value);
      return CastState<kFontStretchSet>();
    }

    FontFaceBuilder<STATE | kFontDisplaySet>& SetFontDisplay(const std::string& value) {
      static_assert(!(STATE & kFontDisplaySet), "property fontDisplay should not have already been set");
      result_->SetFontDisplay(value);
      return CastState<kFontDisplaySet>();
    }

    FontFaceBuilder<STATE | kUnicodeRangeSet>& SetUnicodeRange(const std::string& value) {
      static_assert(!(STATE & kUnicodeRangeSet), "property unicodeRange should not have already been set");
      result_->SetUnicodeRange(value);
      return CastState<kUnicodeRangeSet>();
    }

    FontFaceBuilder<STATE | kSrcSet>& SetSrc(const std::string& value) {
      static_assert(!(STATE & kSrcSet), "property src should not have already been set");
      result_->SetSrc(value);
      return CastState<kSrcSet>();
    }

    FontFaceBuilder<STATE | kPlatformFontFamilySet>& SetPlatformFontFamily(const std::string& value) {
      static_assert(!(STATE & kPlatformFontFamilySet), "property platformFontFamily should not have already been set");
      result_->SetPlatformFontFamily(value);
      return CastState<kPlatformFontFamilySet>();
    }

    FontFaceBuilder<STATE>& SetFontVariationAxes(std::vector<std::unique_ptr<::autofill_assistant::css::FontVariationAxis>> value) {
      result_->SetFontVariationAxes(std::move(value));
      return *this;
    }

    std::unique_ptr<FontFace> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class FontFace;
    FontFaceBuilder() : result_(new FontFace()) { }

    template<int STEP> FontFaceBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<FontFaceBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<FontFace> result_;
  };

  static FontFaceBuilder<0> Builder() {
    return FontFaceBuilder<0>();
  }

 private:
  FontFace() { }

  std::string font_family_;
  std::string font_style_;
  std::string font_variant_;
  std::string font_weight_;
  std::string font_stretch_;
  std::string font_display_;
  std::string unicode_range_;
  std::string src_;
  std::string platform_font_family_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::FontVariationAxis>>> font_variation_axes_;
};


// CSS keyframes rule representation.
class CSSKeyframesRule {
 public:
  static std::unique_ptr<CSSKeyframesRule> Parse(const base::Value& value, ErrorReporter* errors);
  CSSKeyframesRule(const CSSKeyframesRule&) = delete;
  CSSKeyframesRule& operator=(const CSSKeyframesRule&) = delete;
  ~CSSKeyframesRule() { }

  // Animation name.
  const ::autofill_assistant::css::Value* GetAnimationName() const { return animation_name_.get(); }
  void SetAnimationName(std::unique_ptr<::autofill_assistant::css::Value> value) { animation_name_ = std::move(value); }

  // List of keyframes.
  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSKeyframeRule>>* GetKeyframes() const { return &keyframes_; }
  void SetKeyframes(std::vector<std::unique_ptr<::autofill_assistant::css::CSSKeyframeRule>> value) { keyframes_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CSSKeyframesRule> Clone() const;

  template<int STATE>
  class CSSKeyframesRuleBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kAnimationNameSet = 1 << 1,
    kKeyframesSet = 1 << 2,
      kAllRequiredFieldsSet = (kAnimationNameSet | kKeyframesSet | 0)
    };

    CSSKeyframesRuleBuilder<STATE | kAnimationNameSet>& SetAnimationName(std::unique_ptr<::autofill_assistant::css::Value> value) {
      static_assert(!(STATE & kAnimationNameSet), "property animationName should not have already been set");
      result_->SetAnimationName(std::move(value));
      return CastState<kAnimationNameSet>();
    }

    CSSKeyframesRuleBuilder<STATE | kKeyframesSet>& SetKeyframes(std::vector<std::unique_ptr<::autofill_assistant::css::CSSKeyframeRule>> value) {
      static_assert(!(STATE & kKeyframesSet), "property keyframes should not have already been set");
      result_->SetKeyframes(std::move(value));
      return CastState<kKeyframesSet>();
    }

    std::unique_ptr<CSSKeyframesRule> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CSSKeyframesRule;
    CSSKeyframesRuleBuilder() : result_(new CSSKeyframesRule()) { }

    template<int STEP> CSSKeyframesRuleBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CSSKeyframesRuleBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CSSKeyframesRule> result_;
  };

  static CSSKeyframesRuleBuilder<0> Builder() {
    return CSSKeyframesRuleBuilder<0>();
  }

 private:
  CSSKeyframesRule() { }

  std::unique_ptr<::autofill_assistant::css::Value> animation_name_;
  std::vector<std::unique_ptr<::autofill_assistant::css::CSSKeyframeRule>> keyframes_;
};


// CSS keyframe rule representation.
class CSSKeyframeRule {
 public:
  static std::unique_ptr<CSSKeyframeRule> Parse(const base::Value& value, ErrorReporter* errors);
  CSSKeyframeRule(const CSSKeyframeRule&) = delete;
  CSSKeyframeRule& operator=(const CSSKeyframeRule&) = delete;
  ~CSSKeyframeRule() { }

  // The css style sheet identifier (absent for user agent stylesheet and user-specified
  // stylesheet rules) this rule came from.
  bool HasStyleSheetId() const { return !!style_sheet_id_; }
  std::string GetStyleSheetId() const { DCHECK(HasStyleSheetId()); return style_sheet_id_.value(); }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  // Parent stylesheet's origin.
  ::autofill_assistant::css::StyleSheetOrigin GetOrigin() const { return origin_; }
  void SetOrigin(::autofill_assistant::css::StyleSheetOrigin value) { origin_ = value; }

  // Associated key text.
  const ::autofill_assistant::css::Value* GetKeyText() const { return key_text_.get(); }
  void SetKeyText(std::unique_ptr<::autofill_assistant::css::Value> value) { key_text_ = std::move(value); }

  // Associated style declaration.
  const ::autofill_assistant::css::CSSStyle* GetStyle() const { return style_.get(); }
  void SetStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) { style_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CSSKeyframeRule> Clone() const;

  template<int STATE>
  class CSSKeyframeRuleBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginSet = 1 << 1,
    kKeyTextSet = 1 << 2,
    kStyleSet = 1 << 3,
      kAllRequiredFieldsSet = (kOriginSet | kKeyTextSet | kStyleSet | 0)
    };

    CSSKeyframeRuleBuilder<STATE>& SetStyleSheetId(const std::string& value) {
      result_->SetStyleSheetId(value);
      return *this;
    }

    CSSKeyframeRuleBuilder<STATE | kOriginSet>& SetOrigin(::autofill_assistant::css::StyleSheetOrigin value) {
      static_assert(!(STATE & kOriginSet), "property origin should not have already been set");
      result_->SetOrigin(value);
      return CastState<kOriginSet>();
    }

    CSSKeyframeRuleBuilder<STATE | kKeyTextSet>& SetKeyText(std::unique_ptr<::autofill_assistant::css::Value> value) {
      static_assert(!(STATE & kKeyTextSet), "property keyText should not have already been set");
      result_->SetKeyText(std::move(value));
      return CastState<kKeyTextSet>();
    }

    CSSKeyframeRuleBuilder<STATE | kStyleSet>& SetStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) {
      static_assert(!(STATE & kStyleSet), "property style should not have already been set");
      result_->SetStyle(std::move(value));
      return CastState<kStyleSet>();
    }

    std::unique_ptr<CSSKeyframeRule> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CSSKeyframeRule;
    CSSKeyframeRuleBuilder() : result_(new CSSKeyframeRule()) { }

    template<int STEP> CSSKeyframeRuleBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CSSKeyframeRuleBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CSSKeyframeRule> result_;
  };

  static CSSKeyframeRuleBuilder<0> Builder() {
    return CSSKeyframeRuleBuilder<0>();
  }

 private:
  CSSKeyframeRule() { }

  absl::optional<std::string> style_sheet_id_;
  ::autofill_assistant::css::StyleSheetOrigin origin_;
  std::unique_ptr<::autofill_assistant::css::Value> key_text_;
  std::unique_ptr<::autofill_assistant::css::CSSStyle> style_;
};


// A descriptor of operation to mutate style declaration text.
class StyleDeclarationEdit {
 public:
  static std::unique_ptr<StyleDeclarationEdit> Parse(const base::Value& value, ErrorReporter* errors);
  StyleDeclarationEdit(const StyleDeclarationEdit&) = delete;
  StyleDeclarationEdit& operator=(const StyleDeclarationEdit&) = delete;
  ~StyleDeclarationEdit() { }

  // The css style sheet identifier.
  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  // The range of the style text in the enclosing stylesheet.
  const ::autofill_assistant::css::SourceRange* GetRange() const { return range_.get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  // New style text.
  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StyleDeclarationEdit> Clone() const;

  template<int STATE>
  class StyleDeclarationEditBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
    kRangeSet = 1 << 2,
    kTextSet = 1 << 3,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | kRangeSet | kTextSet | 0)
    };

    StyleDeclarationEditBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    StyleDeclarationEditBuilder<STATE | kRangeSet>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      static_assert(!(STATE & kRangeSet), "property range should not have already been set");
      result_->SetRange(std::move(value));
      return CastState<kRangeSet>();
    }

    StyleDeclarationEditBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    std::unique_ptr<StyleDeclarationEdit> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StyleDeclarationEdit;
    StyleDeclarationEditBuilder() : result_(new StyleDeclarationEdit()) { }

    template<int STEP> StyleDeclarationEditBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StyleDeclarationEditBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StyleDeclarationEdit> result_;
  };

  static StyleDeclarationEditBuilder<0> Builder() {
    return StyleDeclarationEditBuilder<0>();
  }

 private:
  StyleDeclarationEdit() { }

  std::string style_sheet_id_;
  std::unique_ptr<::autofill_assistant::css::SourceRange> range_;
  std::string text_;
};


// Parameters for the AddRule command.
class AddRuleParams {
 public:
  static std::unique_ptr<AddRuleParams> Parse(const base::Value& value, ErrorReporter* errors);
  AddRuleParams(const AddRuleParams&) = delete;
  AddRuleParams& operator=(const AddRuleParams&) = delete;
  ~AddRuleParams() { }

  // The css style sheet identifier where a new rule should be inserted.
  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  // The text of a new rule.
  std::string GetRuleText() const { return rule_text_; }
  void SetRuleText(const std::string& value) { rule_text_ = value; }

  // Text position of a new rule in the target style sheet.
  const ::autofill_assistant::css::SourceRange* GetLocation() const { return location_.get(); }
  void SetLocation(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { location_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<AddRuleParams> Clone() const;

  template<int STATE>
  class AddRuleParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
    kRuleTextSet = 1 << 2,
    kLocationSet = 1 << 3,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | kRuleTextSet | kLocationSet | 0)
    };

    AddRuleParamsBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    AddRuleParamsBuilder<STATE | kRuleTextSet>& SetRuleText(const std::string& value) {
      static_assert(!(STATE & kRuleTextSet), "property ruleText should not have already been set");
      result_->SetRuleText(value);
      return CastState<kRuleTextSet>();
    }

    AddRuleParamsBuilder<STATE | kLocationSet>& SetLocation(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      static_assert(!(STATE & kLocationSet), "property location should not have already been set");
      result_->SetLocation(std::move(value));
      return CastState<kLocationSet>();
    }

    std::unique_ptr<AddRuleParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class AddRuleParams;
    AddRuleParamsBuilder() : result_(new AddRuleParams()) { }

    template<int STEP> AddRuleParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<AddRuleParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<AddRuleParams> result_;
  };

  static AddRuleParamsBuilder<0> Builder() {
    return AddRuleParamsBuilder<0>();
  }

 private:
  AddRuleParams() { }

  std::string style_sheet_id_;
  std::string rule_text_;
  std::unique_ptr<::autofill_assistant::css::SourceRange> location_;
};


// Result for the AddRule command.
class AddRuleResult {
 public:
  static std::unique_ptr<AddRuleResult> Parse(const base::Value& value, ErrorReporter* errors);
  AddRuleResult(const AddRuleResult&) = delete;
  AddRuleResult& operator=(const AddRuleResult&) = delete;
  ~AddRuleResult() { }

  // The newly created rule.
  const ::autofill_assistant::css::CSSRule* GetRule() const { return rule_.get(); }
  void SetRule(std::unique_ptr<::autofill_assistant::css::CSSRule> value) { rule_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<AddRuleResult> Clone() const;

  template<int STATE>
  class AddRuleResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kRuleSet = 1 << 1,
      kAllRequiredFieldsSet = (kRuleSet | 0)
    };

    AddRuleResultBuilder<STATE | kRuleSet>& SetRule(std::unique_ptr<::autofill_assistant::css::CSSRule> value) {
      static_assert(!(STATE & kRuleSet), "property rule should not have already been set");
      result_->SetRule(std::move(value));
      return CastState<kRuleSet>();
    }

    std::unique_ptr<AddRuleResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class AddRuleResult;
    AddRuleResultBuilder() : result_(new AddRuleResult()) { }

    template<int STEP> AddRuleResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<AddRuleResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<AddRuleResult> result_;
  };

  static AddRuleResultBuilder<0> Builder() {
    return AddRuleResultBuilder<0>();
  }

 private:
  AddRuleResult() { }

  std::unique_ptr<::autofill_assistant::css::CSSRule> rule_;
};


// Parameters for the CollectClassNames command.
class CollectClassNamesParams {
 public:
  static std::unique_ptr<CollectClassNamesParams> Parse(const base::Value& value, ErrorReporter* errors);
  CollectClassNamesParams(const CollectClassNamesParams&) = delete;
  CollectClassNamesParams& operator=(const CollectClassNamesParams&) = delete;
  ~CollectClassNamesParams() { }

  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CollectClassNamesParams> Clone() const;

  template<int STATE>
  class CollectClassNamesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | 0)
    };

    CollectClassNamesParamsBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    std::unique_ptr<CollectClassNamesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CollectClassNamesParams;
    CollectClassNamesParamsBuilder() : result_(new CollectClassNamesParams()) { }

    template<int STEP> CollectClassNamesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CollectClassNamesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CollectClassNamesParams> result_;
  };

  static CollectClassNamesParamsBuilder<0> Builder() {
    return CollectClassNamesParamsBuilder<0>();
  }

 private:
  CollectClassNamesParams() { }

  std::string style_sheet_id_;
};


// Result for the CollectClassNames command.
class CollectClassNamesResult {
 public:
  static std::unique_ptr<CollectClassNamesResult> Parse(const base::Value& value, ErrorReporter* errors);
  CollectClassNamesResult(const CollectClassNamesResult&) = delete;
  CollectClassNamesResult& operator=(const CollectClassNamesResult&) = delete;
  ~CollectClassNamesResult() { }

  // Class name list.
  const std::vector<std::string>* GetClassNames() const { return &class_names_; }
  void SetClassNames(std::vector<std::string> value) { class_names_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CollectClassNamesResult> Clone() const;

  template<int STATE>
  class CollectClassNamesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kClassNamesSet = 1 << 1,
      kAllRequiredFieldsSet = (kClassNamesSet | 0)
    };

    CollectClassNamesResultBuilder<STATE | kClassNamesSet>& SetClassNames(std::vector<std::string> value) {
      static_assert(!(STATE & kClassNamesSet), "property classNames should not have already been set");
      result_->SetClassNames(std::move(value));
      return CastState<kClassNamesSet>();
    }

    std::unique_ptr<CollectClassNamesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CollectClassNamesResult;
    CollectClassNamesResultBuilder() : result_(new CollectClassNamesResult()) { }

    template<int STEP> CollectClassNamesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CollectClassNamesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CollectClassNamesResult> result_;
  };

  static CollectClassNamesResultBuilder<0> Builder() {
    return CollectClassNamesResultBuilder<0>();
  }

 private:
  CollectClassNamesResult() { }

  std::vector<std::string> class_names_;
};


// Parameters for the CreateStyleSheet command.
class CreateStyleSheetParams {
 public:
  static std::unique_ptr<CreateStyleSheetParams> Parse(const base::Value& value, ErrorReporter* errors);
  CreateStyleSheetParams(const CreateStyleSheetParams&) = delete;
  CreateStyleSheetParams& operator=(const CreateStyleSheetParams&) = delete;
  ~CreateStyleSheetParams() { }

  // Identifier of the frame where "via-inspector" stylesheet should be created.
  std::string GetFrameId() const { return frame_id_; }
  void SetFrameId(const std::string& value) { frame_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CreateStyleSheetParams> Clone() const;

  template<int STATE>
  class CreateStyleSheetParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kFrameIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kFrameIdSet | 0)
    };

    CreateStyleSheetParamsBuilder<STATE | kFrameIdSet>& SetFrameId(const std::string& value) {
      static_assert(!(STATE & kFrameIdSet), "property frameId should not have already been set");
      result_->SetFrameId(value);
      return CastState<kFrameIdSet>();
    }

    std::unique_ptr<CreateStyleSheetParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CreateStyleSheetParams;
    CreateStyleSheetParamsBuilder() : result_(new CreateStyleSheetParams()) { }

    template<int STEP> CreateStyleSheetParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CreateStyleSheetParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CreateStyleSheetParams> result_;
  };

  static CreateStyleSheetParamsBuilder<0> Builder() {
    return CreateStyleSheetParamsBuilder<0>();
  }

 private:
  CreateStyleSheetParams() { }

  std::string frame_id_;
};


// Result for the CreateStyleSheet command.
class CreateStyleSheetResult {
 public:
  static std::unique_ptr<CreateStyleSheetResult> Parse(const base::Value& value, ErrorReporter* errors);
  CreateStyleSheetResult(const CreateStyleSheetResult&) = delete;
  CreateStyleSheetResult& operator=(const CreateStyleSheetResult&) = delete;
  ~CreateStyleSheetResult() { }

  // Identifier of the created "via-inspector" stylesheet.
  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CreateStyleSheetResult> Clone() const;

  template<int STATE>
  class CreateStyleSheetResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | 0)
    };

    CreateStyleSheetResultBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    std::unique_ptr<CreateStyleSheetResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CreateStyleSheetResult;
    CreateStyleSheetResultBuilder() : result_(new CreateStyleSheetResult()) { }

    template<int STEP> CreateStyleSheetResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CreateStyleSheetResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CreateStyleSheetResult> result_;
  };

  static CreateStyleSheetResultBuilder<0> Builder() {
    return CreateStyleSheetResultBuilder<0>();
  }

 private:
  CreateStyleSheetResult() { }

  std::string style_sheet_id_;
};


// Parameters for the Disable command.
class DisableParams {
 public:
  static std::unique_ptr<DisableParams> Parse(const base::Value& value, ErrorReporter* errors);
  DisableParams(const DisableParams&) = delete;
  DisableParams& operator=(const DisableParams&) = delete;
  ~DisableParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DisableParams> Clone() const;

  template<int STATE>
  class DisableParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DisableParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DisableParams;
    DisableParamsBuilder() : result_(new DisableParams()) { }

    template<int STEP> DisableParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DisableParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DisableParams> result_;
  };

  static DisableParamsBuilder<0> Builder() {
    return DisableParamsBuilder<0>();
  }

 private:
  DisableParams() { }

};


// Result for the Disable command.
class DisableResult {
 public:
  static std::unique_ptr<DisableResult> Parse(const base::Value& value, ErrorReporter* errors);
  DisableResult(const DisableResult&) = delete;
  DisableResult& operator=(const DisableResult&) = delete;
  ~DisableResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DisableResult> Clone() const;

  template<int STATE>
  class DisableResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<DisableResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DisableResult;
    DisableResultBuilder() : result_(new DisableResult()) { }

    template<int STEP> DisableResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DisableResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DisableResult> result_;
  };

  static DisableResultBuilder<0> Builder() {
    return DisableResultBuilder<0>();
  }

 private:
  DisableResult() { }

};


// Parameters for the Enable command.
class EnableParams {
 public:
  static std::unique_ptr<EnableParams> Parse(const base::Value& value, ErrorReporter* errors);
  EnableParams(const EnableParams&) = delete;
  EnableParams& operator=(const EnableParams&) = delete;
  ~EnableParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableParams> Clone() const;

  template<int STATE>
  class EnableParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<EnableParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class EnableParams;
    EnableParamsBuilder() : result_(new EnableParams()) { }

    template<int STEP> EnableParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<EnableParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<EnableParams> result_;
  };

  static EnableParamsBuilder<0> Builder() {
    return EnableParamsBuilder<0>();
  }

 private:
  EnableParams() { }

};


// Result for the Enable command.
class EnableResult {
 public:
  static std::unique_ptr<EnableResult> Parse(const base::Value& value, ErrorReporter* errors);
  EnableResult(const EnableResult&) = delete;
  EnableResult& operator=(const EnableResult&) = delete;
  ~EnableResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableResult> Clone() const;

  template<int STATE>
  class EnableResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<EnableResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class EnableResult;
    EnableResultBuilder() : result_(new EnableResult()) { }

    template<int STEP> EnableResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<EnableResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<EnableResult> result_;
  };

  static EnableResultBuilder<0> Builder() {
    return EnableResultBuilder<0>();
  }

 private:
  EnableResult() { }

};


// Parameters for the ForcePseudoState command.
class ForcePseudoStateParams {
 public:
  static std::unique_ptr<ForcePseudoStateParams> Parse(const base::Value& value, ErrorReporter* errors);
  ForcePseudoStateParams(const ForcePseudoStateParams&) = delete;
  ForcePseudoStateParams& operator=(const ForcePseudoStateParams&) = delete;
  ~ForcePseudoStateParams() { }

  // The element id for which to force the pseudo state.
  int GetNodeId() const { return node_id_; }
  void SetNodeId(int value) { node_id_ = value; }

  // Element pseudo classes to force when computing the element's style.
  const std::vector<std::string>* GetForcedPseudoClasses() const { return &forced_pseudo_classes_; }
  void SetForcedPseudoClasses(std::vector<std::string> value) { forced_pseudo_classes_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ForcePseudoStateParams> Clone() const;

  template<int STATE>
  class ForcePseudoStateParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNodeIdSet = 1 << 1,
    kForcedPseudoClassesSet = 1 << 2,
      kAllRequiredFieldsSet = (kNodeIdSet | kForcedPseudoClassesSet | 0)
    };

    ForcePseudoStateParamsBuilder<STATE | kNodeIdSet>& SetNodeId(int value) {
      static_assert(!(STATE & kNodeIdSet), "property nodeId should not have already been set");
      result_->SetNodeId(value);
      return CastState<kNodeIdSet>();
    }

    ForcePseudoStateParamsBuilder<STATE | kForcedPseudoClassesSet>& SetForcedPseudoClasses(std::vector<std::string> value) {
      static_assert(!(STATE & kForcedPseudoClassesSet), "property forcedPseudoClasses should not have already been set");
      result_->SetForcedPseudoClasses(std::move(value));
      return CastState<kForcedPseudoClassesSet>();
    }

    std::unique_ptr<ForcePseudoStateParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ForcePseudoStateParams;
    ForcePseudoStateParamsBuilder() : result_(new ForcePseudoStateParams()) { }

    template<int STEP> ForcePseudoStateParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ForcePseudoStateParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ForcePseudoStateParams> result_;
  };

  static ForcePseudoStateParamsBuilder<0> Builder() {
    return ForcePseudoStateParamsBuilder<0>();
  }

 private:
  ForcePseudoStateParams() { }

  int node_id_;
  std::vector<std::string> forced_pseudo_classes_;
};


// Result for the ForcePseudoState command.
class ForcePseudoStateResult {
 public:
  static std::unique_ptr<ForcePseudoStateResult> Parse(const base::Value& value, ErrorReporter* errors);
  ForcePseudoStateResult(const ForcePseudoStateResult&) = delete;
  ForcePseudoStateResult& operator=(const ForcePseudoStateResult&) = delete;
  ~ForcePseudoStateResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ForcePseudoStateResult> Clone() const;

  template<int STATE>
  class ForcePseudoStateResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ForcePseudoStateResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ForcePseudoStateResult;
    ForcePseudoStateResultBuilder() : result_(new ForcePseudoStateResult()) { }

    template<int STEP> ForcePseudoStateResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ForcePseudoStateResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ForcePseudoStateResult> result_;
  };

  static ForcePseudoStateResultBuilder<0> Builder() {
    return ForcePseudoStateResultBuilder<0>();
  }

 private:
  ForcePseudoStateResult() { }

};


// Parameters for the GetBackgroundColors command.
class GetBackgroundColorsParams {
 public:
  static std::unique_ptr<GetBackgroundColorsParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetBackgroundColorsParams(const GetBackgroundColorsParams&) = delete;
  GetBackgroundColorsParams& operator=(const GetBackgroundColorsParams&) = delete;
  ~GetBackgroundColorsParams() { }

  // Id of the node to get background colors for.
  int GetNodeId() const { return node_id_; }
  void SetNodeId(int value) { node_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetBackgroundColorsParams> Clone() const;

  template<int STATE>
  class GetBackgroundColorsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNodeIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kNodeIdSet | 0)
    };

    GetBackgroundColorsParamsBuilder<STATE | kNodeIdSet>& SetNodeId(int value) {
      static_assert(!(STATE & kNodeIdSet), "property nodeId should not have already been set");
      result_->SetNodeId(value);
      return CastState<kNodeIdSet>();
    }

    std::unique_ptr<GetBackgroundColorsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetBackgroundColorsParams;
    GetBackgroundColorsParamsBuilder() : result_(new GetBackgroundColorsParams()) { }

    template<int STEP> GetBackgroundColorsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetBackgroundColorsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetBackgroundColorsParams> result_;
  };

  static GetBackgroundColorsParamsBuilder<0> Builder() {
    return GetBackgroundColorsParamsBuilder<0>();
  }

 private:
  GetBackgroundColorsParams() { }

  int node_id_;
};


// Result for the GetBackgroundColors command.
class GetBackgroundColorsResult {
 public:
  static std::unique_ptr<GetBackgroundColorsResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetBackgroundColorsResult(const GetBackgroundColorsResult&) = delete;
  GetBackgroundColorsResult& operator=(const GetBackgroundColorsResult&) = delete;
  ~GetBackgroundColorsResult() { }

  // The range of background colors behind this element, if it contains any visible text. If no
  // visible text is present, this will be undefined. In the case of a flat background color,
  // this will consist of simply that color. In the case of a gradient, this will consist of each
  // of the color stops. For anything more complicated, this will be an empty array. Images will
  // be ignored (as if the image had failed to load).
  bool HasBackgroundColors() const { return !!background_colors_; }
  const std::vector<std::string>* GetBackgroundColors() const { DCHECK(HasBackgroundColors()); return &background_colors_.value(); }
  void SetBackgroundColors(std::vector<std::string> value) { background_colors_ = std::move(value); }

  // The computed font size for this node, as a CSS computed value string (e.g. '12px').
  bool HasComputedFontSize() const { return !!computed_font_size_; }
  std::string GetComputedFontSize() const { DCHECK(HasComputedFontSize()); return computed_font_size_.value(); }
  void SetComputedFontSize(const std::string& value) { computed_font_size_ = value; }

  // The computed font weight for this node, as a CSS computed value string (e.g. 'normal' or
  // '100').
  bool HasComputedFontWeight() const { return !!computed_font_weight_; }
  std::string GetComputedFontWeight() const { DCHECK(HasComputedFontWeight()); return computed_font_weight_.value(); }
  void SetComputedFontWeight(const std::string& value) { computed_font_weight_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetBackgroundColorsResult> Clone() const;

  template<int STATE>
  class GetBackgroundColorsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    GetBackgroundColorsResultBuilder<STATE>& SetBackgroundColors(std::vector<std::string> value) {
      result_->SetBackgroundColors(std::move(value));
      return *this;
    }

    GetBackgroundColorsResultBuilder<STATE>& SetComputedFontSize(const std::string& value) {
      result_->SetComputedFontSize(value);
      return *this;
    }

    GetBackgroundColorsResultBuilder<STATE>& SetComputedFontWeight(const std::string& value) {
      result_->SetComputedFontWeight(value);
      return *this;
    }

    std::unique_ptr<GetBackgroundColorsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetBackgroundColorsResult;
    GetBackgroundColorsResultBuilder() : result_(new GetBackgroundColorsResult()) { }

    template<int STEP> GetBackgroundColorsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetBackgroundColorsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetBackgroundColorsResult> result_;
  };

  static GetBackgroundColorsResultBuilder<0> Builder() {
    return GetBackgroundColorsResultBuilder<0>();
  }

 private:
  GetBackgroundColorsResult() { }

  absl::optional<std::vector<std::string>> background_colors_;
  absl::optional<std::string> computed_font_size_;
  absl::optional<std::string> computed_font_weight_;
};


// Parameters for the GetComputedStyleForNode command.
class GetComputedStyleForNodeParams {
 public:
  static std::unique_ptr<GetComputedStyleForNodeParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetComputedStyleForNodeParams(const GetComputedStyleForNodeParams&) = delete;
  GetComputedStyleForNodeParams& operator=(const GetComputedStyleForNodeParams&) = delete;
  ~GetComputedStyleForNodeParams() { }

  int GetNodeId() const { return node_id_; }
  void SetNodeId(int value) { node_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetComputedStyleForNodeParams> Clone() const;

  template<int STATE>
  class GetComputedStyleForNodeParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNodeIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kNodeIdSet | 0)
    };

    GetComputedStyleForNodeParamsBuilder<STATE | kNodeIdSet>& SetNodeId(int value) {
      static_assert(!(STATE & kNodeIdSet), "property nodeId should not have already been set");
      result_->SetNodeId(value);
      return CastState<kNodeIdSet>();
    }

    std::unique_ptr<GetComputedStyleForNodeParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetComputedStyleForNodeParams;
    GetComputedStyleForNodeParamsBuilder() : result_(new GetComputedStyleForNodeParams()) { }

    template<int STEP> GetComputedStyleForNodeParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetComputedStyleForNodeParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetComputedStyleForNodeParams> result_;
  };

  static GetComputedStyleForNodeParamsBuilder<0> Builder() {
    return GetComputedStyleForNodeParamsBuilder<0>();
  }

 private:
  GetComputedStyleForNodeParams() { }

  int node_id_;
};


// Result for the GetComputedStyleForNode command.
class GetComputedStyleForNodeResult {
 public:
  static std::unique_ptr<GetComputedStyleForNodeResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetComputedStyleForNodeResult(const GetComputedStyleForNodeResult&) = delete;
  GetComputedStyleForNodeResult& operator=(const GetComputedStyleForNodeResult&) = delete;
  ~GetComputedStyleForNodeResult() { }

  // Computed style for the specified DOM node.
  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSComputedStyleProperty>>* GetComputedStyle() const { return &computed_style_; }
  void SetComputedStyle(std::vector<std::unique_ptr<::autofill_assistant::css::CSSComputedStyleProperty>> value) { computed_style_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetComputedStyleForNodeResult> Clone() const;

  template<int STATE>
  class GetComputedStyleForNodeResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kComputedStyleSet = 1 << 1,
      kAllRequiredFieldsSet = (kComputedStyleSet | 0)
    };

    GetComputedStyleForNodeResultBuilder<STATE | kComputedStyleSet>& SetComputedStyle(std::vector<std::unique_ptr<::autofill_assistant::css::CSSComputedStyleProperty>> value) {
      static_assert(!(STATE & kComputedStyleSet), "property computedStyle should not have already been set");
      result_->SetComputedStyle(std::move(value));
      return CastState<kComputedStyleSet>();
    }

    std::unique_ptr<GetComputedStyleForNodeResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetComputedStyleForNodeResult;
    GetComputedStyleForNodeResultBuilder() : result_(new GetComputedStyleForNodeResult()) { }

    template<int STEP> GetComputedStyleForNodeResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetComputedStyleForNodeResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetComputedStyleForNodeResult> result_;
  };

  static GetComputedStyleForNodeResultBuilder<0> Builder() {
    return GetComputedStyleForNodeResultBuilder<0>();
  }

 private:
  GetComputedStyleForNodeResult() { }

  std::vector<std::unique_ptr<::autofill_assistant::css::CSSComputedStyleProperty>> computed_style_;
};


// Parameters for the GetInlineStylesForNode command.
class GetInlineStylesForNodeParams {
 public:
  static std::unique_ptr<GetInlineStylesForNodeParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetInlineStylesForNodeParams(const GetInlineStylesForNodeParams&) = delete;
  GetInlineStylesForNodeParams& operator=(const GetInlineStylesForNodeParams&) = delete;
  ~GetInlineStylesForNodeParams() { }

  int GetNodeId() const { return node_id_; }
  void SetNodeId(int value) { node_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetInlineStylesForNodeParams> Clone() const;

  template<int STATE>
  class GetInlineStylesForNodeParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNodeIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kNodeIdSet | 0)
    };

    GetInlineStylesForNodeParamsBuilder<STATE | kNodeIdSet>& SetNodeId(int value) {
      static_assert(!(STATE & kNodeIdSet), "property nodeId should not have already been set");
      result_->SetNodeId(value);
      return CastState<kNodeIdSet>();
    }

    std::unique_ptr<GetInlineStylesForNodeParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetInlineStylesForNodeParams;
    GetInlineStylesForNodeParamsBuilder() : result_(new GetInlineStylesForNodeParams()) { }

    template<int STEP> GetInlineStylesForNodeParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetInlineStylesForNodeParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetInlineStylesForNodeParams> result_;
  };

  static GetInlineStylesForNodeParamsBuilder<0> Builder() {
    return GetInlineStylesForNodeParamsBuilder<0>();
  }

 private:
  GetInlineStylesForNodeParams() { }

  int node_id_;
};


// Result for the GetInlineStylesForNode command.
class GetInlineStylesForNodeResult {
 public:
  static std::unique_ptr<GetInlineStylesForNodeResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetInlineStylesForNodeResult(const GetInlineStylesForNodeResult&) = delete;
  GetInlineStylesForNodeResult& operator=(const GetInlineStylesForNodeResult&) = delete;
  ~GetInlineStylesForNodeResult() { }

  // Inline style for the specified DOM node.
  bool HasInlineStyle() const { return !!inline_style_; }
  const ::autofill_assistant::css::CSSStyle* GetInlineStyle() const { DCHECK(HasInlineStyle()); return inline_style_.value().get(); }
  void SetInlineStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) { inline_style_ = std::move(value); }

  // Attribute-defined element style (e.g. resulting from "width=20 height=100%").
  bool HasAttributesStyle() const { return !!attributes_style_; }
  const ::autofill_assistant::css::CSSStyle* GetAttributesStyle() const { DCHECK(HasAttributesStyle()); return attributes_style_.value().get(); }
  void SetAttributesStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) { attributes_style_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetInlineStylesForNodeResult> Clone() const;

  template<int STATE>
  class GetInlineStylesForNodeResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    GetInlineStylesForNodeResultBuilder<STATE>& SetInlineStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) {
      result_->SetInlineStyle(std::move(value));
      return *this;
    }

    GetInlineStylesForNodeResultBuilder<STATE>& SetAttributesStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) {
      result_->SetAttributesStyle(std::move(value));
      return *this;
    }

    std::unique_ptr<GetInlineStylesForNodeResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetInlineStylesForNodeResult;
    GetInlineStylesForNodeResultBuilder() : result_(new GetInlineStylesForNodeResult()) { }

    template<int STEP> GetInlineStylesForNodeResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetInlineStylesForNodeResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetInlineStylesForNodeResult> result_;
  };

  static GetInlineStylesForNodeResultBuilder<0> Builder() {
    return GetInlineStylesForNodeResultBuilder<0>();
  }

 private:
  GetInlineStylesForNodeResult() { }

  absl::optional<std::unique_ptr<::autofill_assistant::css::CSSStyle>> inline_style_;
  absl::optional<std::unique_ptr<::autofill_assistant::css::CSSStyle>> attributes_style_;
};


// Parameters for the GetMatchedStylesForNode command.
class GetMatchedStylesForNodeParams {
 public:
  static std::unique_ptr<GetMatchedStylesForNodeParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetMatchedStylesForNodeParams(const GetMatchedStylesForNodeParams&) = delete;
  GetMatchedStylesForNodeParams& operator=(const GetMatchedStylesForNodeParams&) = delete;
  ~GetMatchedStylesForNodeParams() { }

  int GetNodeId() const { return node_id_; }
  void SetNodeId(int value) { node_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetMatchedStylesForNodeParams> Clone() const;

  template<int STATE>
  class GetMatchedStylesForNodeParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNodeIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kNodeIdSet | 0)
    };

    GetMatchedStylesForNodeParamsBuilder<STATE | kNodeIdSet>& SetNodeId(int value) {
      static_assert(!(STATE & kNodeIdSet), "property nodeId should not have already been set");
      result_->SetNodeId(value);
      return CastState<kNodeIdSet>();
    }

    std::unique_ptr<GetMatchedStylesForNodeParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetMatchedStylesForNodeParams;
    GetMatchedStylesForNodeParamsBuilder() : result_(new GetMatchedStylesForNodeParams()) { }

    template<int STEP> GetMatchedStylesForNodeParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetMatchedStylesForNodeParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetMatchedStylesForNodeParams> result_;
  };

  static GetMatchedStylesForNodeParamsBuilder<0> Builder() {
    return GetMatchedStylesForNodeParamsBuilder<0>();
  }

 private:
  GetMatchedStylesForNodeParams() { }

  int node_id_;
};


// Result for the GetMatchedStylesForNode command.
class GetMatchedStylesForNodeResult {
 public:
  static std::unique_ptr<GetMatchedStylesForNodeResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetMatchedStylesForNodeResult(const GetMatchedStylesForNodeResult&) = delete;
  GetMatchedStylesForNodeResult& operator=(const GetMatchedStylesForNodeResult&) = delete;
  ~GetMatchedStylesForNodeResult() { }

  // Inline style for the specified DOM node.
  bool HasInlineStyle() const { return !!inline_style_; }
  const ::autofill_assistant::css::CSSStyle* GetInlineStyle() const { DCHECK(HasInlineStyle()); return inline_style_.value().get(); }
  void SetInlineStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) { inline_style_ = std::move(value); }

  // Attribute-defined element style (e.g. resulting from "width=20 height=100%").
  bool HasAttributesStyle() const { return !!attributes_style_; }
  const ::autofill_assistant::css::CSSStyle* GetAttributesStyle() const { DCHECK(HasAttributesStyle()); return attributes_style_.value().get(); }
  void SetAttributesStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) { attributes_style_ = std::move(value); }

  // CSS rules matching this node, from all applicable stylesheets.
  bool HasMatchedCSSRules() const { return !!matchedcss_rules_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::RuleMatch>>* GetMatchedCSSRules() const { DCHECK(HasMatchedCSSRules()); return &matchedcss_rules_.value(); }
  void SetMatchedCSSRules(std::vector<std::unique_ptr<::autofill_assistant::css::RuleMatch>> value) { matchedcss_rules_ = std::move(value); }

  // Pseudo style matches for this node.
  bool HasPseudoElements() const { return !!pseudo_elements_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::PseudoElementMatches>>* GetPseudoElements() const { DCHECK(HasPseudoElements()); return &pseudo_elements_.value(); }
  void SetPseudoElements(std::vector<std::unique_ptr<::autofill_assistant::css::PseudoElementMatches>> value) { pseudo_elements_ = std::move(value); }

  // A chain of inherited styles (from the immediate node parent up to the DOM tree root).
  bool HasInherited() const { return !!inherited_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::InheritedStyleEntry>>* GetInherited() const { DCHECK(HasInherited()); return &inherited_.value(); }
  void SetInherited(std::vector<std::unique_ptr<::autofill_assistant::css::InheritedStyleEntry>> value) { inherited_ = std::move(value); }

  // A chain of inherited pseudo element styles (from the immediate node parent up to the DOM tree root).
  bool HasInheritedPseudoElements() const { return !!inherited_pseudo_elements_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::InheritedPseudoElementMatches>>* GetInheritedPseudoElements() const { DCHECK(HasInheritedPseudoElements()); return &inherited_pseudo_elements_.value(); }
  void SetInheritedPseudoElements(std::vector<std::unique_ptr<::autofill_assistant::css::InheritedPseudoElementMatches>> value) { inherited_pseudo_elements_ = std::move(value); }

  // A list of CSS keyframed animations matching this node.
  bool HasCssKeyframesRules() const { return !!css_keyframes_rules_; }
  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSKeyframesRule>>* GetCssKeyframesRules() const { DCHECK(HasCssKeyframesRules()); return &css_keyframes_rules_.value(); }
  void SetCssKeyframesRules(std::vector<std::unique_ptr<::autofill_assistant::css::CSSKeyframesRule>> value) { css_keyframes_rules_ = std::move(value); }

  // Id of the first parent element that does not have display: contents.
  bool HasParentLayoutNodeId() const { return !!parent_layout_node_id_; }
  int GetParentLayoutNodeId() const { DCHECK(HasParentLayoutNodeId()); return parent_layout_node_id_.value(); }
  void SetParentLayoutNodeId(int value) { parent_layout_node_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetMatchedStylesForNodeResult> Clone() const;

  template<int STATE>
  class GetMatchedStylesForNodeResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    GetMatchedStylesForNodeResultBuilder<STATE>& SetInlineStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) {
      result_->SetInlineStyle(std::move(value));
      return *this;
    }

    GetMatchedStylesForNodeResultBuilder<STATE>& SetAttributesStyle(std::unique_ptr<::autofill_assistant::css::CSSStyle> value) {
      result_->SetAttributesStyle(std::move(value));
      return *this;
    }

    GetMatchedStylesForNodeResultBuilder<STATE>& SetMatchedCSSRules(std::vector<std::unique_ptr<::autofill_assistant::css::RuleMatch>> value) {
      result_->SetMatchedCSSRules(std::move(value));
      return *this;
    }

    GetMatchedStylesForNodeResultBuilder<STATE>& SetPseudoElements(std::vector<std::unique_ptr<::autofill_assistant::css::PseudoElementMatches>> value) {
      result_->SetPseudoElements(std::move(value));
      return *this;
    }

    GetMatchedStylesForNodeResultBuilder<STATE>& SetInherited(std::vector<std::unique_ptr<::autofill_assistant::css::InheritedStyleEntry>> value) {
      result_->SetInherited(std::move(value));
      return *this;
    }

    GetMatchedStylesForNodeResultBuilder<STATE>& SetInheritedPseudoElements(std::vector<std::unique_ptr<::autofill_assistant::css::InheritedPseudoElementMatches>> value) {
      result_->SetInheritedPseudoElements(std::move(value));
      return *this;
    }

    GetMatchedStylesForNodeResultBuilder<STATE>& SetCssKeyframesRules(std::vector<std::unique_ptr<::autofill_assistant::css::CSSKeyframesRule>> value) {
      result_->SetCssKeyframesRules(std::move(value));
      return *this;
    }

    GetMatchedStylesForNodeResultBuilder<STATE>& SetParentLayoutNodeId(int value) {
      result_->SetParentLayoutNodeId(value);
      return *this;
    }

    std::unique_ptr<GetMatchedStylesForNodeResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetMatchedStylesForNodeResult;
    GetMatchedStylesForNodeResultBuilder() : result_(new GetMatchedStylesForNodeResult()) { }

    template<int STEP> GetMatchedStylesForNodeResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetMatchedStylesForNodeResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetMatchedStylesForNodeResult> result_;
  };

  static GetMatchedStylesForNodeResultBuilder<0> Builder() {
    return GetMatchedStylesForNodeResultBuilder<0>();
  }

 private:
  GetMatchedStylesForNodeResult() { }

  absl::optional<std::unique_ptr<::autofill_assistant::css::CSSStyle>> inline_style_;
  absl::optional<std::unique_ptr<::autofill_assistant::css::CSSStyle>> attributes_style_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::RuleMatch>>> matchedcss_rules_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::PseudoElementMatches>>> pseudo_elements_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::InheritedStyleEntry>>> inherited_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::InheritedPseudoElementMatches>>> inherited_pseudo_elements_;
  absl::optional<std::vector<std::unique_ptr<::autofill_assistant::css::CSSKeyframesRule>>> css_keyframes_rules_;
  absl::optional<int> parent_layout_node_id_;
};


// Parameters for the GetMediaQueries command.
class GetMediaQueriesParams {
 public:
  static std::unique_ptr<GetMediaQueriesParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetMediaQueriesParams(const GetMediaQueriesParams&) = delete;
  GetMediaQueriesParams& operator=(const GetMediaQueriesParams&) = delete;
  ~GetMediaQueriesParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetMediaQueriesParams> Clone() const;

  template<int STATE>
  class GetMediaQueriesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<GetMediaQueriesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetMediaQueriesParams;
    GetMediaQueriesParamsBuilder() : result_(new GetMediaQueriesParams()) { }

    template<int STEP> GetMediaQueriesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetMediaQueriesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetMediaQueriesParams> result_;
  };

  static GetMediaQueriesParamsBuilder<0> Builder() {
    return GetMediaQueriesParamsBuilder<0>();
  }

 private:
  GetMediaQueriesParams() { }

};


// Result for the GetMediaQueries command.
class GetMediaQueriesResult {
 public:
  static std::unique_ptr<GetMediaQueriesResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetMediaQueriesResult(const GetMediaQueriesResult&) = delete;
  GetMediaQueriesResult& operator=(const GetMediaQueriesResult&) = delete;
  ~GetMediaQueriesResult() { }

  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSMedia>>* GetMedias() const { return &medias_; }
  void SetMedias(std::vector<std::unique_ptr<::autofill_assistant::css::CSSMedia>> value) { medias_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetMediaQueriesResult> Clone() const;

  template<int STATE>
  class GetMediaQueriesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kMediasSet = 1 << 1,
      kAllRequiredFieldsSet = (kMediasSet | 0)
    };

    GetMediaQueriesResultBuilder<STATE | kMediasSet>& SetMedias(std::vector<std::unique_ptr<::autofill_assistant::css::CSSMedia>> value) {
      static_assert(!(STATE & kMediasSet), "property medias should not have already been set");
      result_->SetMedias(std::move(value));
      return CastState<kMediasSet>();
    }

    std::unique_ptr<GetMediaQueriesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetMediaQueriesResult;
    GetMediaQueriesResultBuilder() : result_(new GetMediaQueriesResult()) { }

    template<int STEP> GetMediaQueriesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetMediaQueriesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetMediaQueriesResult> result_;
  };

  static GetMediaQueriesResultBuilder<0> Builder() {
    return GetMediaQueriesResultBuilder<0>();
  }

 private:
  GetMediaQueriesResult() { }

  std::vector<std::unique_ptr<::autofill_assistant::css::CSSMedia>> medias_;
};


// Parameters for the GetPlatformFontsForNode command.
class GetPlatformFontsForNodeParams {
 public:
  static std::unique_ptr<GetPlatformFontsForNodeParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetPlatformFontsForNodeParams(const GetPlatformFontsForNodeParams&) = delete;
  GetPlatformFontsForNodeParams& operator=(const GetPlatformFontsForNodeParams&) = delete;
  ~GetPlatformFontsForNodeParams() { }

  int GetNodeId() const { return node_id_; }
  void SetNodeId(int value) { node_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetPlatformFontsForNodeParams> Clone() const;

  template<int STATE>
  class GetPlatformFontsForNodeParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNodeIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kNodeIdSet | 0)
    };

    GetPlatformFontsForNodeParamsBuilder<STATE | kNodeIdSet>& SetNodeId(int value) {
      static_assert(!(STATE & kNodeIdSet), "property nodeId should not have already been set");
      result_->SetNodeId(value);
      return CastState<kNodeIdSet>();
    }

    std::unique_ptr<GetPlatformFontsForNodeParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetPlatformFontsForNodeParams;
    GetPlatformFontsForNodeParamsBuilder() : result_(new GetPlatformFontsForNodeParams()) { }

    template<int STEP> GetPlatformFontsForNodeParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetPlatformFontsForNodeParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetPlatformFontsForNodeParams> result_;
  };

  static GetPlatformFontsForNodeParamsBuilder<0> Builder() {
    return GetPlatformFontsForNodeParamsBuilder<0>();
  }

 private:
  GetPlatformFontsForNodeParams() { }

  int node_id_;
};


// Result for the GetPlatformFontsForNode command.
class GetPlatformFontsForNodeResult {
 public:
  static std::unique_ptr<GetPlatformFontsForNodeResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetPlatformFontsForNodeResult(const GetPlatformFontsForNodeResult&) = delete;
  GetPlatformFontsForNodeResult& operator=(const GetPlatformFontsForNodeResult&) = delete;
  ~GetPlatformFontsForNodeResult() { }

  // Usage statistics for every employed platform font.
  const std::vector<std::unique_ptr<::autofill_assistant::css::PlatformFontUsage>>* GetFonts() const { return &fonts_; }
  void SetFonts(std::vector<std::unique_ptr<::autofill_assistant::css::PlatformFontUsage>> value) { fonts_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetPlatformFontsForNodeResult> Clone() const;

  template<int STATE>
  class GetPlatformFontsForNodeResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kFontsSet = 1 << 1,
      kAllRequiredFieldsSet = (kFontsSet | 0)
    };

    GetPlatformFontsForNodeResultBuilder<STATE | kFontsSet>& SetFonts(std::vector<std::unique_ptr<::autofill_assistant::css::PlatformFontUsage>> value) {
      static_assert(!(STATE & kFontsSet), "property fonts should not have already been set");
      result_->SetFonts(std::move(value));
      return CastState<kFontsSet>();
    }

    std::unique_ptr<GetPlatformFontsForNodeResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetPlatformFontsForNodeResult;
    GetPlatformFontsForNodeResultBuilder() : result_(new GetPlatformFontsForNodeResult()) { }

    template<int STEP> GetPlatformFontsForNodeResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetPlatformFontsForNodeResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetPlatformFontsForNodeResult> result_;
  };

  static GetPlatformFontsForNodeResultBuilder<0> Builder() {
    return GetPlatformFontsForNodeResultBuilder<0>();
  }

 private:
  GetPlatformFontsForNodeResult() { }

  std::vector<std::unique_ptr<::autofill_assistant::css::PlatformFontUsage>> fonts_;
};


// Parameters for the GetStyleSheetText command.
class GetStyleSheetTextParams {
 public:
  static std::unique_ptr<GetStyleSheetTextParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetStyleSheetTextParams(const GetStyleSheetTextParams&) = delete;
  GetStyleSheetTextParams& operator=(const GetStyleSheetTextParams&) = delete;
  ~GetStyleSheetTextParams() { }

  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetStyleSheetTextParams> Clone() const;

  template<int STATE>
  class GetStyleSheetTextParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | 0)
    };

    GetStyleSheetTextParamsBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    std::unique_ptr<GetStyleSheetTextParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetStyleSheetTextParams;
    GetStyleSheetTextParamsBuilder() : result_(new GetStyleSheetTextParams()) { }

    template<int STEP> GetStyleSheetTextParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetStyleSheetTextParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetStyleSheetTextParams> result_;
  };

  static GetStyleSheetTextParamsBuilder<0> Builder() {
    return GetStyleSheetTextParamsBuilder<0>();
  }

 private:
  GetStyleSheetTextParams() { }

  std::string style_sheet_id_;
};


// Result for the GetStyleSheetText command.
class GetStyleSheetTextResult {
 public:
  static std::unique_ptr<GetStyleSheetTextResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetStyleSheetTextResult(const GetStyleSheetTextResult&) = delete;
  GetStyleSheetTextResult& operator=(const GetStyleSheetTextResult&) = delete;
  ~GetStyleSheetTextResult() { }

  // The stylesheet text.
  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetStyleSheetTextResult> Clone() const;

  template<int STATE>
  class GetStyleSheetTextResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kTextSet = 1 << 1,
      kAllRequiredFieldsSet = (kTextSet | 0)
    };

    GetStyleSheetTextResultBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    std::unique_ptr<GetStyleSheetTextResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetStyleSheetTextResult;
    GetStyleSheetTextResultBuilder() : result_(new GetStyleSheetTextResult()) { }

    template<int STEP> GetStyleSheetTextResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetStyleSheetTextResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetStyleSheetTextResult> result_;
  };

  static GetStyleSheetTextResultBuilder<0> Builder() {
    return GetStyleSheetTextResultBuilder<0>();
  }

 private:
  GetStyleSheetTextResult() { }

  std::string text_;
};


// Parameters for the GetLayersForNode command.
class GetLayersForNodeParams {
 public:
  static std::unique_ptr<GetLayersForNodeParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetLayersForNodeParams(const GetLayersForNodeParams&) = delete;
  GetLayersForNodeParams& operator=(const GetLayersForNodeParams&) = delete;
  ~GetLayersForNodeParams() { }

  int GetNodeId() const { return node_id_; }
  void SetNodeId(int value) { node_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetLayersForNodeParams> Clone() const;

  template<int STATE>
  class GetLayersForNodeParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNodeIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kNodeIdSet | 0)
    };

    GetLayersForNodeParamsBuilder<STATE | kNodeIdSet>& SetNodeId(int value) {
      static_assert(!(STATE & kNodeIdSet), "property nodeId should not have already been set");
      result_->SetNodeId(value);
      return CastState<kNodeIdSet>();
    }

    std::unique_ptr<GetLayersForNodeParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetLayersForNodeParams;
    GetLayersForNodeParamsBuilder() : result_(new GetLayersForNodeParams()) { }

    template<int STEP> GetLayersForNodeParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetLayersForNodeParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetLayersForNodeParams> result_;
  };

  static GetLayersForNodeParamsBuilder<0> Builder() {
    return GetLayersForNodeParamsBuilder<0>();
  }

 private:
  GetLayersForNodeParams() { }

  int node_id_;
};


// Result for the GetLayersForNode command.
class GetLayersForNodeResult {
 public:
  static std::unique_ptr<GetLayersForNodeResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetLayersForNodeResult(const GetLayersForNodeResult&) = delete;
  GetLayersForNodeResult& operator=(const GetLayersForNodeResult&) = delete;
  ~GetLayersForNodeResult() { }

  const ::autofill_assistant::css::CSSLayerData* GetRootLayer() const { return root_layer_.get(); }
  void SetRootLayer(std::unique_ptr<::autofill_assistant::css::CSSLayerData> value) { root_layer_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetLayersForNodeResult> Clone() const;

  template<int STATE>
  class GetLayersForNodeResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kRootLayerSet = 1 << 1,
      kAllRequiredFieldsSet = (kRootLayerSet | 0)
    };

    GetLayersForNodeResultBuilder<STATE | kRootLayerSet>& SetRootLayer(std::unique_ptr<::autofill_assistant::css::CSSLayerData> value) {
      static_assert(!(STATE & kRootLayerSet), "property rootLayer should not have already been set");
      result_->SetRootLayer(std::move(value));
      return CastState<kRootLayerSet>();
    }

    std::unique_ptr<GetLayersForNodeResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetLayersForNodeResult;
    GetLayersForNodeResultBuilder() : result_(new GetLayersForNodeResult()) { }

    template<int STEP> GetLayersForNodeResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetLayersForNodeResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetLayersForNodeResult> result_;
  };

  static GetLayersForNodeResultBuilder<0> Builder() {
    return GetLayersForNodeResultBuilder<0>();
  }

 private:
  GetLayersForNodeResult() { }

  std::unique_ptr<::autofill_assistant::css::CSSLayerData> root_layer_;
};


// Parameters for the TrackComputedStyleUpdates command.
class TrackComputedStyleUpdatesParams {
 public:
  static std::unique_ptr<TrackComputedStyleUpdatesParams> Parse(const base::Value& value, ErrorReporter* errors);
  TrackComputedStyleUpdatesParams(const TrackComputedStyleUpdatesParams&) = delete;
  TrackComputedStyleUpdatesParams& operator=(const TrackComputedStyleUpdatesParams&) = delete;
  ~TrackComputedStyleUpdatesParams() { }

  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSComputedStyleProperty>>* GetPropertiesToTrack() const { return &properties_to_track_; }
  void SetPropertiesToTrack(std::vector<std::unique_ptr<::autofill_assistant::css::CSSComputedStyleProperty>> value) { properties_to_track_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TrackComputedStyleUpdatesParams> Clone() const;

  template<int STATE>
  class TrackComputedStyleUpdatesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kPropertiesToTrackSet = 1 << 1,
      kAllRequiredFieldsSet = (kPropertiesToTrackSet | 0)
    };

    TrackComputedStyleUpdatesParamsBuilder<STATE | kPropertiesToTrackSet>& SetPropertiesToTrack(std::vector<std::unique_ptr<::autofill_assistant::css::CSSComputedStyleProperty>> value) {
      static_assert(!(STATE & kPropertiesToTrackSet), "property propertiesToTrack should not have already been set");
      result_->SetPropertiesToTrack(std::move(value));
      return CastState<kPropertiesToTrackSet>();
    }

    std::unique_ptr<TrackComputedStyleUpdatesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TrackComputedStyleUpdatesParams;
    TrackComputedStyleUpdatesParamsBuilder() : result_(new TrackComputedStyleUpdatesParams()) { }

    template<int STEP> TrackComputedStyleUpdatesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TrackComputedStyleUpdatesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TrackComputedStyleUpdatesParams> result_;
  };

  static TrackComputedStyleUpdatesParamsBuilder<0> Builder() {
    return TrackComputedStyleUpdatesParamsBuilder<0>();
  }

 private:
  TrackComputedStyleUpdatesParams() { }

  std::vector<std::unique_ptr<::autofill_assistant::css::CSSComputedStyleProperty>> properties_to_track_;
};


// Result for the TrackComputedStyleUpdates command.
class TrackComputedStyleUpdatesResult {
 public:
  static std::unique_ptr<TrackComputedStyleUpdatesResult> Parse(const base::Value& value, ErrorReporter* errors);
  TrackComputedStyleUpdatesResult(const TrackComputedStyleUpdatesResult&) = delete;
  TrackComputedStyleUpdatesResult& operator=(const TrackComputedStyleUpdatesResult&) = delete;
  ~TrackComputedStyleUpdatesResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TrackComputedStyleUpdatesResult> Clone() const;

  template<int STATE>
  class TrackComputedStyleUpdatesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<TrackComputedStyleUpdatesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TrackComputedStyleUpdatesResult;
    TrackComputedStyleUpdatesResultBuilder() : result_(new TrackComputedStyleUpdatesResult()) { }

    template<int STEP> TrackComputedStyleUpdatesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TrackComputedStyleUpdatesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TrackComputedStyleUpdatesResult> result_;
  };

  static TrackComputedStyleUpdatesResultBuilder<0> Builder() {
    return TrackComputedStyleUpdatesResultBuilder<0>();
  }

 private:
  TrackComputedStyleUpdatesResult() { }

};


// Parameters for the TakeComputedStyleUpdates command.
class TakeComputedStyleUpdatesParams {
 public:
  static std::unique_ptr<TakeComputedStyleUpdatesParams> Parse(const base::Value& value, ErrorReporter* errors);
  TakeComputedStyleUpdatesParams(const TakeComputedStyleUpdatesParams&) = delete;
  TakeComputedStyleUpdatesParams& operator=(const TakeComputedStyleUpdatesParams&) = delete;
  ~TakeComputedStyleUpdatesParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TakeComputedStyleUpdatesParams> Clone() const;

  template<int STATE>
  class TakeComputedStyleUpdatesParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<TakeComputedStyleUpdatesParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TakeComputedStyleUpdatesParams;
    TakeComputedStyleUpdatesParamsBuilder() : result_(new TakeComputedStyleUpdatesParams()) { }

    template<int STEP> TakeComputedStyleUpdatesParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TakeComputedStyleUpdatesParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TakeComputedStyleUpdatesParams> result_;
  };

  static TakeComputedStyleUpdatesParamsBuilder<0> Builder() {
    return TakeComputedStyleUpdatesParamsBuilder<0>();
  }

 private:
  TakeComputedStyleUpdatesParams() { }

};


// Result for the TakeComputedStyleUpdates command.
class TakeComputedStyleUpdatesResult {
 public:
  static std::unique_ptr<TakeComputedStyleUpdatesResult> Parse(const base::Value& value, ErrorReporter* errors);
  TakeComputedStyleUpdatesResult(const TakeComputedStyleUpdatesResult&) = delete;
  TakeComputedStyleUpdatesResult& operator=(const TakeComputedStyleUpdatesResult&) = delete;
  ~TakeComputedStyleUpdatesResult() { }

  // The list of node Ids that have their tracked computed styles updated
  const std::vector<int>* GetNodeIds() const { return &node_ids_; }
  void SetNodeIds(std::vector<int> value) { node_ids_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TakeComputedStyleUpdatesResult> Clone() const;

  template<int STATE>
  class TakeComputedStyleUpdatesResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNodeIdsSet = 1 << 1,
      kAllRequiredFieldsSet = (kNodeIdsSet | 0)
    };

    TakeComputedStyleUpdatesResultBuilder<STATE | kNodeIdsSet>& SetNodeIds(std::vector<int> value) {
      static_assert(!(STATE & kNodeIdsSet), "property nodeIds should not have already been set");
      result_->SetNodeIds(std::move(value));
      return CastState<kNodeIdsSet>();
    }

    std::unique_ptr<TakeComputedStyleUpdatesResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TakeComputedStyleUpdatesResult;
    TakeComputedStyleUpdatesResultBuilder() : result_(new TakeComputedStyleUpdatesResult()) { }

    template<int STEP> TakeComputedStyleUpdatesResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TakeComputedStyleUpdatesResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TakeComputedStyleUpdatesResult> result_;
  };

  static TakeComputedStyleUpdatesResultBuilder<0> Builder() {
    return TakeComputedStyleUpdatesResultBuilder<0>();
  }

 private:
  TakeComputedStyleUpdatesResult() { }

  std::vector<int> node_ids_;
};


// Parameters for the SetEffectivePropertyValueForNode command.
class SetEffectivePropertyValueForNodeParams {
 public:
  static std::unique_ptr<SetEffectivePropertyValueForNodeParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetEffectivePropertyValueForNodeParams(const SetEffectivePropertyValueForNodeParams&) = delete;
  SetEffectivePropertyValueForNodeParams& operator=(const SetEffectivePropertyValueForNodeParams&) = delete;
  ~SetEffectivePropertyValueForNodeParams() { }

  // The element id for which to set property.
  int GetNodeId() const { return node_id_; }
  void SetNodeId(int value) { node_id_ = value; }

  std::string GetPropertyName() const { return property_name_; }
  void SetPropertyName(const std::string& value) { property_name_ = value; }

  std::string GetValue() const { return value_; }
  void SetValue(const std::string& value) { value_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetEffectivePropertyValueForNodeParams> Clone() const;

  template<int STATE>
  class SetEffectivePropertyValueForNodeParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNodeIdSet = 1 << 1,
    kPropertyNameSet = 1 << 2,
    kValueSet = 1 << 3,
      kAllRequiredFieldsSet = (kNodeIdSet | kPropertyNameSet | kValueSet | 0)
    };

    SetEffectivePropertyValueForNodeParamsBuilder<STATE | kNodeIdSet>& SetNodeId(int value) {
      static_assert(!(STATE & kNodeIdSet), "property nodeId should not have already been set");
      result_->SetNodeId(value);
      return CastState<kNodeIdSet>();
    }

    SetEffectivePropertyValueForNodeParamsBuilder<STATE | kPropertyNameSet>& SetPropertyName(const std::string& value) {
      static_assert(!(STATE & kPropertyNameSet), "property propertyName should not have already been set");
      result_->SetPropertyName(value);
      return CastState<kPropertyNameSet>();
    }

    SetEffectivePropertyValueForNodeParamsBuilder<STATE | kValueSet>& SetValue(const std::string& value) {
      static_assert(!(STATE & kValueSet), "property value should not have already been set");
      result_->SetValue(value);
      return CastState<kValueSet>();
    }

    std::unique_ptr<SetEffectivePropertyValueForNodeParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetEffectivePropertyValueForNodeParams;
    SetEffectivePropertyValueForNodeParamsBuilder() : result_(new SetEffectivePropertyValueForNodeParams()) { }

    template<int STEP> SetEffectivePropertyValueForNodeParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetEffectivePropertyValueForNodeParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetEffectivePropertyValueForNodeParams> result_;
  };

  static SetEffectivePropertyValueForNodeParamsBuilder<0> Builder() {
    return SetEffectivePropertyValueForNodeParamsBuilder<0>();
  }

 private:
  SetEffectivePropertyValueForNodeParams() { }

  int node_id_;
  std::string property_name_;
  std::string value_;
};


// Result for the SetEffectivePropertyValueForNode command.
class SetEffectivePropertyValueForNodeResult {
 public:
  static std::unique_ptr<SetEffectivePropertyValueForNodeResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetEffectivePropertyValueForNodeResult(const SetEffectivePropertyValueForNodeResult&) = delete;
  SetEffectivePropertyValueForNodeResult& operator=(const SetEffectivePropertyValueForNodeResult&) = delete;
  ~SetEffectivePropertyValueForNodeResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetEffectivePropertyValueForNodeResult> Clone() const;

  template<int STATE>
  class SetEffectivePropertyValueForNodeResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetEffectivePropertyValueForNodeResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetEffectivePropertyValueForNodeResult;
    SetEffectivePropertyValueForNodeResultBuilder() : result_(new SetEffectivePropertyValueForNodeResult()) { }

    template<int STEP> SetEffectivePropertyValueForNodeResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetEffectivePropertyValueForNodeResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetEffectivePropertyValueForNodeResult> result_;
  };

  static SetEffectivePropertyValueForNodeResultBuilder<0> Builder() {
    return SetEffectivePropertyValueForNodeResultBuilder<0>();
  }

 private:
  SetEffectivePropertyValueForNodeResult() { }

};


// Parameters for the SetKeyframeKey command.
class SetKeyframeKeyParams {
 public:
  static std::unique_ptr<SetKeyframeKeyParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetKeyframeKeyParams(const SetKeyframeKeyParams&) = delete;
  SetKeyframeKeyParams& operator=(const SetKeyframeKeyParams&) = delete;
  ~SetKeyframeKeyParams() { }

  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  const ::autofill_assistant::css::SourceRange* GetRange() const { return range_.get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  std::string GetKeyText() const { return key_text_; }
  void SetKeyText(const std::string& value) { key_text_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetKeyframeKeyParams> Clone() const;

  template<int STATE>
  class SetKeyframeKeyParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
    kRangeSet = 1 << 2,
    kKeyTextSet = 1 << 3,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | kRangeSet | kKeyTextSet | 0)
    };

    SetKeyframeKeyParamsBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    SetKeyframeKeyParamsBuilder<STATE | kRangeSet>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      static_assert(!(STATE & kRangeSet), "property range should not have already been set");
      result_->SetRange(std::move(value));
      return CastState<kRangeSet>();
    }

    SetKeyframeKeyParamsBuilder<STATE | kKeyTextSet>& SetKeyText(const std::string& value) {
      static_assert(!(STATE & kKeyTextSet), "property keyText should not have already been set");
      result_->SetKeyText(value);
      return CastState<kKeyTextSet>();
    }

    std::unique_ptr<SetKeyframeKeyParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetKeyframeKeyParams;
    SetKeyframeKeyParamsBuilder() : result_(new SetKeyframeKeyParams()) { }

    template<int STEP> SetKeyframeKeyParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetKeyframeKeyParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetKeyframeKeyParams> result_;
  };

  static SetKeyframeKeyParamsBuilder<0> Builder() {
    return SetKeyframeKeyParamsBuilder<0>();
  }

 private:
  SetKeyframeKeyParams() { }

  std::string style_sheet_id_;
  std::unique_ptr<::autofill_assistant::css::SourceRange> range_;
  std::string key_text_;
};


// Result for the SetKeyframeKey command.
class SetKeyframeKeyResult {
 public:
  static std::unique_ptr<SetKeyframeKeyResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetKeyframeKeyResult(const SetKeyframeKeyResult&) = delete;
  SetKeyframeKeyResult& operator=(const SetKeyframeKeyResult&) = delete;
  ~SetKeyframeKeyResult() { }

  // The resulting key text after modification.
  const ::autofill_assistant::css::Value* GetKeyText() const { return key_text_.get(); }
  void SetKeyText(std::unique_ptr<::autofill_assistant::css::Value> value) { key_text_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetKeyframeKeyResult> Clone() const;

  template<int STATE>
  class SetKeyframeKeyResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kKeyTextSet = 1 << 1,
      kAllRequiredFieldsSet = (kKeyTextSet | 0)
    };

    SetKeyframeKeyResultBuilder<STATE | kKeyTextSet>& SetKeyText(std::unique_ptr<::autofill_assistant::css::Value> value) {
      static_assert(!(STATE & kKeyTextSet), "property keyText should not have already been set");
      result_->SetKeyText(std::move(value));
      return CastState<kKeyTextSet>();
    }

    std::unique_ptr<SetKeyframeKeyResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetKeyframeKeyResult;
    SetKeyframeKeyResultBuilder() : result_(new SetKeyframeKeyResult()) { }

    template<int STEP> SetKeyframeKeyResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetKeyframeKeyResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetKeyframeKeyResult> result_;
  };

  static SetKeyframeKeyResultBuilder<0> Builder() {
    return SetKeyframeKeyResultBuilder<0>();
  }

 private:
  SetKeyframeKeyResult() { }

  std::unique_ptr<::autofill_assistant::css::Value> key_text_;
};


// Parameters for the SetMediaText command.
class SetMediaTextParams {
 public:
  static std::unique_ptr<SetMediaTextParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetMediaTextParams(const SetMediaTextParams&) = delete;
  SetMediaTextParams& operator=(const SetMediaTextParams&) = delete;
  ~SetMediaTextParams() { }

  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  const ::autofill_assistant::css::SourceRange* GetRange() const { return range_.get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetMediaTextParams> Clone() const;

  template<int STATE>
  class SetMediaTextParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
    kRangeSet = 1 << 2,
    kTextSet = 1 << 3,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | kRangeSet | kTextSet | 0)
    };

    SetMediaTextParamsBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    SetMediaTextParamsBuilder<STATE | kRangeSet>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      static_assert(!(STATE & kRangeSet), "property range should not have already been set");
      result_->SetRange(std::move(value));
      return CastState<kRangeSet>();
    }

    SetMediaTextParamsBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    std::unique_ptr<SetMediaTextParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetMediaTextParams;
    SetMediaTextParamsBuilder() : result_(new SetMediaTextParams()) { }

    template<int STEP> SetMediaTextParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetMediaTextParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetMediaTextParams> result_;
  };

  static SetMediaTextParamsBuilder<0> Builder() {
    return SetMediaTextParamsBuilder<0>();
  }

 private:
  SetMediaTextParams() { }

  std::string style_sheet_id_;
  std::unique_ptr<::autofill_assistant::css::SourceRange> range_;
  std::string text_;
};


// Result for the SetMediaText command.
class SetMediaTextResult {
 public:
  static std::unique_ptr<SetMediaTextResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetMediaTextResult(const SetMediaTextResult&) = delete;
  SetMediaTextResult& operator=(const SetMediaTextResult&) = delete;
  ~SetMediaTextResult() { }

  // The resulting CSS media rule after modification.
  const ::autofill_assistant::css::CSSMedia* GetMedia() const { return media_.get(); }
  void SetMedia(std::unique_ptr<::autofill_assistant::css::CSSMedia> value) { media_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetMediaTextResult> Clone() const;

  template<int STATE>
  class SetMediaTextResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kMediaSet = 1 << 1,
      kAllRequiredFieldsSet = (kMediaSet | 0)
    };

    SetMediaTextResultBuilder<STATE | kMediaSet>& SetMedia(std::unique_ptr<::autofill_assistant::css::CSSMedia> value) {
      static_assert(!(STATE & kMediaSet), "property media should not have already been set");
      result_->SetMedia(std::move(value));
      return CastState<kMediaSet>();
    }

    std::unique_ptr<SetMediaTextResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetMediaTextResult;
    SetMediaTextResultBuilder() : result_(new SetMediaTextResult()) { }

    template<int STEP> SetMediaTextResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetMediaTextResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetMediaTextResult> result_;
  };

  static SetMediaTextResultBuilder<0> Builder() {
    return SetMediaTextResultBuilder<0>();
  }

 private:
  SetMediaTextResult() { }

  std::unique_ptr<::autofill_assistant::css::CSSMedia> media_;
};


// Parameters for the SetContainerQueryText command.
class SetContainerQueryTextParams {
 public:
  static std::unique_ptr<SetContainerQueryTextParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetContainerQueryTextParams(const SetContainerQueryTextParams&) = delete;
  SetContainerQueryTextParams& operator=(const SetContainerQueryTextParams&) = delete;
  ~SetContainerQueryTextParams() { }

  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  const ::autofill_assistant::css::SourceRange* GetRange() const { return range_.get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetContainerQueryTextParams> Clone() const;

  template<int STATE>
  class SetContainerQueryTextParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
    kRangeSet = 1 << 2,
    kTextSet = 1 << 3,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | kRangeSet | kTextSet | 0)
    };

    SetContainerQueryTextParamsBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    SetContainerQueryTextParamsBuilder<STATE | kRangeSet>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      static_assert(!(STATE & kRangeSet), "property range should not have already been set");
      result_->SetRange(std::move(value));
      return CastState<kRangeSet>();
    }

    SetContainerQueryTextParamsBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    std::unique_ptr<SetContainerQueryTextParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetContainerQueryTextParams;
    SetContainerQueryTextParamsBuilder() : result_(new SetContainerQueryTextParams()) { }

    template<int STEP> SetContainerQueryTextParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetContainerQueryTextParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetContainerQueryTextParams> result_;
  };

  static SetContainerQueryTextParamsBuilder<0> Builder() {
    return SetContainerQueryTextParamsBuilder<0>();
  }

 private:
  SetContainerQueryTextParams() { }

  std::string style_sheet_id_;
  std::unique_ptr<::autofill_assistant::css::SourceRange> range_;
  std::string text_;
};


// Result for the SetContainerQueryText command.
class SetContainerQueryTextResult {
 public:
  static std::unique_ptr<SetContainerQueryTextResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetContainerQueryTextResult(const SetContainerQueryTextResult&) = delete;
  SetContainerQueryTextResult& operator=(const SetContainerQueryTextResult&) = delete;
  ~SetContainerQueryTextResult() { }

  // The resulting CSS container query rule after modification.
  const ::autofill_assistant::css::CSSContainerQuery* GetContainerQuery() const { return container_query_.get(); }
  void SetContainerQuery(std::unique_ptr<::autofill_assistant::css::CSSContainerQuery> value) { container_query_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetContainerQueryTextResult> Clone() const;

  template<int STATE>
  class SetContainerQueryTextResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kContainerQuerySet = 1 << 1,
      kAllRequiredFieldsSet = (kContainerQuerySet | 0)
    };

    SetContainerQueryTextResultBuilder<STATE | kContainerQuerySet>& SetContainerQuery(std::unique_ptr<::autofill_assistant::css::CSSContainerQuery> value) {
      static_assert(!(STATE & kContainerQuerySet), "property containerQuery should not have already been set");
      result_->SetContainerQuery(std::move(value));
      return CastState<kContainerQuerySet>();
    }

    std::unique_ptr<SetContainerQueryTextResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetContainerQueryTextResult;
    SetContainerQueryTextResultBuilder() : result_(new SetContainerQueryTextResult()) { }

    template<int STEP> SetContainerQueryTextResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetContainerQueryTextResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetContainerQueryTextResult> result_;
  };

  static SetContainerQueryTextResultBuilder<0> Builder() {
    return SetContainerQueryTextResultBuilder<0>();
  }

 private:
  SetContainerQueryTextResult() { }

  std::unique_ptr<::autofill_assistant::css::CSSContainerQuery> container_query_;
};


// Parameters for the SetSupportsText command.
class SetSupportsTextParams {
 public:
  static std::unique_ptr<SetSupportsTextParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetSupportsTextParams(const SetSupportsTextParams&) = delete;
  SetSupportsTextParams& operator=(const SetSupportsTextParams&) = delete;
  ~SetSupportsTextParams() { }

  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  const ::autofill_assistant::css::SourceRange* GetRange() const { return range_.get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetSupportsTextParams> Clone() const;

  template<int STATE>
  class SetSupportsTextParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
    kRangeSet = 1 << 2,
    kTextSet = 1 << 3,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | kRangeSet | kTextSet | 0)
    };

    SetSupportsTextParamsBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    SetSupportsTextParamsBuilder<STATE | kRangeSet>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      static_assert(!(STATE & kRangeSet), "property range should not have already been set");
      result_->SetRange(std::move(value));
      return CastState<kRangeSet>();
    }

    SetSupportsTextParamsBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    std::unique_ptr<SetSupportsTextParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetSupportsTextParams;
    SetSupportsTextParamsBuilder() : result_(new SetSupportsTextParams()) { }

    template<int STEP> SetSupportsTextParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetSupportsTextParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetSupportsTextParams> result_;
  };

  static SetSupportsTextParamsBuilder<0> Builder() {
    return SetSupportsTextParamsBuilder<0>();
  }

 private:
  SetSupportsTextParams() { }

  std::string style_sheet_id_;
  std::unique_ptr<::autofill_assistant::css::SourceRange> range_;
  std::string text_;
};


// Result for the SetSupportsText command.
class SetSupportsTextResult {
 public:
  static std::unique_ptr<SetSupportsTextResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetSupportsTextResult(const SetSupportsTextResult&) = delete;
  SetSupportsTextResult& operator=(const SetSupportsTextResult&) = delete;
  ~SetSupportsTextResult() { }

  // The resulting CSS Supports rule after modification.
  const ::autofill_assistant::css::CSSSupports* GetSupports() const { return supports_.get(); }
  void SetSupports(std::unique_ptr<::autofill_assistant::css::CSSSupports> value) { supports_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetSupportsTextResult> Clone() const;

  template<int STATE>
  class SetSupportsTextResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSupportsSet = 1 << 1,
      kAllRequiredFieldsSet = (kSupportsSet | 0)
    };

    SetSupportsTextResultBuilder<STATE | kSupportsSet>& SetSupports(std::unique_ptr<::autofill_assistant::css::CSSSupports> value) {
      static_assert(!(STATE & kSupportsSet), "property supports should not have already been set");
      result_->SetSupports(std::move(value));
      return CastState<kSupportsSet>();
    }

    std::unique_ptr<SetSupportsTextResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetSupportsTextResult;
    SetSupportsTextResultBuilder() : result_(new SetSupportsTextResult()) { }

    template<int STEP> SetSupportsTextResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetSupportsTextResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetSupportsTextResult> result_;
  };

  static SetSupportsTextResultBuilder<0> Builder() {
    return SetSupportsTextResultBuilder<0>();
  }

 private:
  SetSupportsTextResult() { }

  std::unique_ptr<::autofill_assistant::css::CSSSupports> supports_;
};


// Parameters for the SetScopeText command.
class SetScopeTextParams {
 public:
  static std::unique_ptr<SetScopeTextParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetScopeTextParams(const SetScopeTextParams&) = delete;
  SetScopeTextParams& operator=(const SetScopeTextParams&) = delete;
  ~SetScopeTextParams() { }

  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  const ::autofill_assistant::css::SourceRange* GetRange() const { return range_.get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetScopeTextParams> Clone() const;

  template<int STATE>
  class SetScopeTextParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
    kRangeSet = 1 << 2,
    kTextSet = 1 << 3,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | kRangeSet | kTextSet | 0)
    };

    SetScopeTextParamsBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    SetScopeTextParamsBuilder<STATE | kRangeSet>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      static_assert(!(STATE & kRangeSet), "property range should not have already been set");
      result_->SetRange(std::move(value));
      return CastState<kRangeSet>();
    }

    SetScopeTextParamsBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    std::unique_ptr<SetScopeTextParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetScopeTextParams;
    SetScopeTextParamsBuilder() : result_(new SetScopeTextParams()) { }

    template<int STEP> SetScopeTextParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetScopeTextParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetScopeTextParams> result_;
  };

  static SetScopeTextParamsBuilder<0> Builder() {
    return SetScopeTextParamsBuilder<0>();
  }

 private:
  SetScopeTextParams() { }

  std::string style_sheet_id_;
  std::unique_ptr<::autofill_assistant::css::SourceRange> range_;
  std::string text_;
};


// Result for the SetScopeText command.
class SetScopeTextResult {
 public:
  static std::unique_ptr<SetScopeTextResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetScopeTextResult(const SetScopeTextResult&) = delete;
  SetScopeTextResult& operator=(const SetScopeTextResult&) = delete;
  ~SetScopeTextResult() { }

  // The resulting CSS Scope rule after modification.
  const ::autofill_assistant::css::CSSScope* GetScope() const { return scope_.get(); }
  void SetScope(std::unique_ptr<::autofill_assistant::css::CSSScope> value) { scope_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetScopeTextResult> Clone() const;

  template<int STATE>
  class SetScopeTextResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kScopeSet = 1 << 1,
      kAllRequiredFieldsSet = (kScopeSet | 0)
    };

    SetScopeTextResultBuilder<STATE | kScopeSet>& SetScope(std::unique_ptr<::autofill_assistant::css::CSSScope> value) {
      static_assert(!(STATE & kScopeSet), "property scope should not have already been set");
      result_->SetScope(std::move(value));
      return CastState<kScopeSet>();
    }

    std::unique_ptr<SetScopeTextResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetScopeTextResult;
    SetScopeTextResultBuilder() : result_(new SetScopeTextResult()) { }

    template<int STEP> SetScopeTextResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetScopeTextResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetScopeTextResult> result_;
  };

  static SetScopeTextResultBuilder<0> Builder() {
    return SetScopeTextResultBuilder<0>();
  }

 private:
  SetScopeTextResult() { }

  std::unique_ptr<::autofill_assistant::css::CSSScope> scope_;
};


// Parameters for the SetRuleSelector command.
class SetRuleSelectorParams {
 public:
  static std::unique_ptr<SetRuleSelectorParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetRuleSelectorParams(const SetRuleSelectorParams&) = delete;
  SetRuleSelectorParams& operator=(const SetRuleSelectorParams&) = delete;
  ~SetRuleSelectorParams() { }

  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  const ::autofill_assistant::css::SourceRange* GetRange() const { return range_.get(); }
  void SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) { range_ = std::move(value); }

  std::string GetSelector() const { return selector_; }
  void SetSelector(const std::string& value) { selector_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetRuleSelectorParams> Clone() const;

  template<int STATE>
  class SetRuleSelectorParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
    kRangeSet = 1 << 2,
    kSelectorSet = 1 << 3,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | kRangeSet | kSelectorSet | 0)
    };

    SetRuleSelectorParamsBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    SetRuleSelectorParamsBuilder<STATE | kRangeSet>& SetRange(std::unique_ptr<::autofill_assistant::css::SourceRange> value) {
      static_assert(!(STATE & kRangeSet), "property range should not have already been set");
      result_->SetRange(std::move(value));
      return CastState<kRangeSet>();
    }

    SetRuleSelectorParamsBuilder<STATE | kSelectorSet>& SetSelector(const std::string& value) {
      static_assert(!(STATE & kSelectorSet), "property selector should not have already been set");
      result_->SetSelector(value);
      return CastState<kSelectorSet>();
    }

    std::unique_ptr<SetRuleSelectorParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetRuleSelectorParams;
    SetRuleSelectorParamsBuilder() : result_(new SetRuleSelectorParams()) { }

    template<int STEP> SetRuleSelectorParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetRuleSelectorParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetRuleSelectorParams> result_;
  };

  static SetRuleSelectorParamsBuilder<0> Builder() {
    return SetRuleSelectorParamsBuilder<0>();
  }

 private:
  SetRuleSelectorParams() { }

  std::string style_sheet_id_;
  std::unique_ptr<::autofill_assistant::css::SourceRange> range_;
  std::string selector_;
};


// Result for the SetRuleSelector command.
class SetRuleSelectorResult {
 public:
  static std::unique_ptr<SetRuleSelectorResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetRuleSelectorResult(const SetRuleSelectorResult&) = delete;
  SetRuleSelectorResult& operator=(const SetRuleSelectorResult&) = delete;
  ~SetRuleSelectorResult() { }

  // The resulting selector list after modification.
  const ::autofill_assistant::css::SelectorList* GetSelectorList() const { return selector_list_.get(); }
  void SetSelectorList(std::unique_ptr<::autofill_assistant::css::SelectorList> value) { selector_list_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetRuleSelectorResult> Clone() const;

  template<int STATE>
  class SetRuleSelectorResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSelectorListSet = 1 << 1,
      kAllRequiredFieldsSet = (kSelectorListSet | 0)
    };

    SetRuleSelectorResultBuilder<STATE | kSelectorListSet>& SetSelectorList(std::unique_ptr<::autofill_assistant::css::SelectorList> value) {
      static_assert(!(STATE & kSelectorListSet), "property selectorList should not have already been set");
      result_->SetSelectorList(std::move(value));
      return CastState<kSelectorListSet>();
    }

    std::unique_ptr<SetRuleSelectorResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetRuleSelectorResult;
    SetRuleSelectorResultBuilder() : result_(new SetRuleSelectorResult()) { }

    template<int STEP> SetRuleSelectorResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetRuleSelectorResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetRuleSelectorResult> result_;
  };

  static SetRuleSelectorResultBuilder<0> Builder() {
    return SetRuleSelectorResultBuilder<0>();
  }

 private:
  SetRuleSelectorResult() { }

  std::unique_ptr<::autofill_assistant::css::SelectorList> selector_list_;
};


// Parameters for the SetStyleSheetText command.
class SetStyleSheetTextParams {
 public:
  static std::unique_ptr<SetStyleSheetTextParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetStyleSheetTextParams(const SetStyleSheetTextParams&) = delete;
  SetStyleSheetTextParams& operator=(const SetStyleSheetTextParams&) = delete;
  ~SetStyleSheetTextParams() { }

  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  std::string GetText() const { return text_; }
  void SetText(const std::string& value) { text_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetStyleSheetTextParams> Clone() const;

  template<int STATE>
  class SetStyleSheetTextParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
    kTextSet = 1 << 2,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | kTextSet | 0)
    };

    SetStyleSheetTextParamsBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    SetStyleSheetTextParamsBuilder<STATE | kTextSet>& SetText(const std::string& value) {
      static_assert(!(STATE & kTextSet), "property text should not have already been set");
      result_->SetText(value);
      return CastState<kTextSet>();
    }

    std::unique_ptr<SetStyleSheetTextParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetStyleSheetTextParams;
    SetStyleSheetTextParamsBuilder() : result_(new SetStyleSheetTextParams()) { }

    template<int STEP> SetStyleSheetTextParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetStyleSheetTextParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetStyleSheetTextParams> result_;
  };

  static SetStyleSheetTextParamsBuilder<0> Builder() {
    return SetStyleSheetTextParamsBuilder<0>();
  }

 private:
  SetStyleSheetTextParams() { }

  std::string style_sheet_id_;
  std::string text_;
};


// Result for the SetStyleSheetText command.
class SetStyleSheetTextResult {
 public:
  static std::unique_ptr<SetStyleSheetTextResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetStyleSheetTextResult(const SetStyleSheetTextResult&) = delete;
  SetStyleSheetTextResult& operator=(const SetStyleSheetTextResult&) = delete;
  ~SetStyleSheetTextResult() { }

  // URL of source map associated with script (if any).
  bool HasSourceMapURL() const { return !!source_mapurl_; }
  std::string GetSourceMapURL() const { DCHECK(HasSourceMapURL()); return source_mapurl_.value(); }
  void SetSourceMapURL(const std::string& value) { source_mapurl_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetStyleSheetTextResult> Clone() const;

  template<int STATE>
  class SetStyleSheetTextResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    SetStyleSheetTextResultBuilder<STATE>& SetSourceMapURL(const std::string& value) {
      result_->SetSourceMapURL(value);
      return *this;
    }

    std::unique_ptr<SetStyleSheetTextResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetStyleSheetTextResult;
    SetStyleSheetTextResultBuilder() : result_(new SetStyleSheetTextResult()) { }

    template<int STEP> SetStyleSheetTextResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetStyleSheetTextResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetStyleSheetTextResult> result_;
  };

  static SetStyleSheetTextResultBuilder<0> Builder() {
    return SetStyleSheetTextResultBuilder<0>();
  }

 private:
  SetStyleSheetTextResult() { }

  absl::optional<std::string> source_mapurl_;
};


// Parameters for the SetStyleTexts command.
class SetStyleTextsParams {
 public:
  static std::unique_ptr<SetStyleTextsParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetStyleTextsParams(const SetStyleTextsParams&) = delete;
  SetStyleTextsParams& operator=(const SetStyleTextsParams&) = delete;
  ~SetStyleTextsParams() { }

  const std::vector<std::unique_ptr<::autofill_assistant::css::StyleDeclarationEdit>>* GetEdits() const { return &edits_; }
  void SetEdits(std::vector<std::unique_ptr<::autofill_assistant::css::StyleDeclarationEdit>> value) { edits_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetStyleTextsParams> Clone() const;

  template<int STATE>
  class SetStyleTextsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kEditsSet = 1 << 1,
      kAllRequiredFieldsSet = (kEditsSet | 0)
    };

    SetStyleTextsParamsBuilder<STATE | kEditsSet>& SetEdits(std::vector<std::unique_ptr<::autofill_assistant::css::StyleDeclarationEdit>> value) {
      static_assert(!(STATE & kEditsSet), "property edits should not have already been set");
      result_->SetEdits(std::move(value));
      return CastState<kEditsSet>();
    }

    std::unique_ptr<SetStyleTextsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetStyleTextsParams;
    SetStyleTextsParamsBuilder() : result_(new SetStyleTextsParams()) { }

    template<int STEP> SetStyleTextsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetStyleTextsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetStyleTextsParams> result_;
  };

  static SetStyleTextsParamsBuilder<0> Builder() {
    return SetStyleTextsParamsBuilder<0>();
  }

 private:
  SetStyleTextsParams() { }

  std::vector<std::unique_ptr<::autofill_assistant::css::StyleDeclarationEdit>> edits_;
};


// Result for the SetStyleTexts command.
class SetStyleTextsResult {
 public:
  static std::unique_ptr<SetStyleTextsResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetStyleTextsResult(const SetStyleTextsResult&) = delete;
  SetStyleTextsResult& operator=(const SetStyleTextsResult&) = delete;
  ~SetStyleTextsResult() { }

  // The resulting styles after modification.
  const std::vector<std::unique_ptr<::autofill_assistant::css::CSSStyle>>* GetStyles() const { return &styles_; }
  void SetStyles(std::vector<std::unique_ptr<::autofill_assistant::css::CSSStyle>> value) { styles_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetStyleTextsResult> Clone() const;

  template<int STATE>
  class SetStyleTextsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStylesSet = 1 << 1,
      kAllRequiredFieldsSet = (kStylesSet | 0)
    };

    SetStyleTextsResultBuilder<STATE | kStylesSet>& SetStyles(std::vector<std::unique_ptr<::autofill_assistant::css::CSSStyle>> value) {
      static_assert(!(STATE & kStylesSet), "property styles should not have already been set");
      result_->SetStyles(std::move(value));
      return CastState<kStylesSet>();
    }

    std::unique_ptr<SetStyleTextsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetStyleTextsResult;
    SetStyleTextsResultBuilder() : result_(new SetStyleTextsResult()) { }

    template<int STEP> SetStyleTextsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetStyleTextsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetStyleTextsResult> result_;
  };

  static SetStyleTextsResultBuilder<0> Builder() {
    return SetStyleTextsResultBuilder<0>();
  }

 private:
  SetStyleTextsResult() { }

  std::vector<std::unique_ptr<::autofill_assistant::css::CSSStyle>> styles_;
};


// Parameters for the StartRuleUsageTracking command.
class StartRuleUsageTrackingParams {
 public:
  static std::unique_ptr<StartRuleUsageTrackingParams> Parse(const base::Value& value, ErrorReporter* errors);
  StartRuleUsageTrackingParams(const StartRuleUsageTrackingParams&) = delete;
  StartRuleUsageTrackingParams& operator=(const StartRuleUsageTrackingParams&) = delete;
  ~StartRuleUsageTrackingParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StartRuleUsageTrackingParams> Clone() const;

  template<int STATE>
  class StartRuleUsageTrackingParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StartRuleUsageTrackingParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StartRuleUsageTrackingParams;
    StartRuleUsageTrackingParamsBuilder() : result_(new StartRuleUsageTrackingParams()) { }

    template<int STEP> StartRuleUsageTrackingParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StartRuleUsageTrackingParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StartRuleUsageTrackingParams> result_;
  };

  static StartRuleUsageTrackingParamsBuilder<0> Builder() {
    return StartRuleUsageTrackingParamsBuilder<0>();
  }

 private:
  StartRuleUsageTrackingParams() { }

};


// Result for the StartRuleUsageTracking command.
class StartRuleUsageTrackingResult {
 public:
  static std::unique_ptr<StartRuleUsageTrackingResult> Parse(const base::Value& value, ErrorReporter* errors);
  StartRuleUsageTrackingResult(const StartRuleUsageTrackingResult&) = delete;
  StartRuleUsageTrackingResult& operator=(const StartRuleUsageTrackingResult&) = delete;
  ~StartRuleUsageTrackingResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StartRuleUsageTrackingResult> Clone() const;

  template<int STATE>
  class StartRuleUsageTrackingResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StartRuleUsageTrackingResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StartRuleUsageTrackingResult;
    StartRuleUsageTrackingResultBuilder() : result_(new StartRuleUsageTrackingResult()) { }

    template<int STEP> StartRuleUsageTrackingResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StartRuleUsageTrackingResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StartRuleUsageTrackingResult> result_;
  };

  static StartRuleUsageTrackingResultBuilder<0> Builder() {
    return StartRuleUsageTrackingResultBuilder<0>();
  }

 private:
  StartRuleUsageTrackingResult() { }

};


// Parameters for the StopRuleUsageTracking command.
class StopRuleUsageTrackingParams {
 public:
  static std::unique_ptr<StopRuleUsageTrackingParams> Parse(const base::Value& value, ErrorReporter* errors);
  StopRuleUsageTrackingParams(const StopRuleUsageTrackingParams&) = delete;
  StopRuleUsageTrackingParams& operator=(const StopRuleUsageTrackingParams&) = delete;
  ~StopRuleUsageTrackingParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StopRuleUsageTrackingParams> Clone() const;

  template<int STATE>
  class StopRuleUsageTrackingParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<StopRuleUsageTrackingParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StopRuleUsageTrackingParams;
    StopRuleUsageTrackingParamsBuilder() : result_(new StopRuleUsageTrackingParams()) { }

    template<int STEP> StopRuleUsageTrackingParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StopRuleUsageTrackingParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StopRuleUsageTrackingParams> result_;
  };

  static StopRuleUsageTrackingParamsBuilder<0> Builder() {
    return StopRuleUsageTrackingParamsBuilder<0>();
  }

 private:
  StopRuleUsageTrackingParams() { }

};


// Result for the StopRuleUsageTracking command.
class StopRuleUsageTrackingResult {
 public:
  static std::unique_ptr<StopRuleUsageTrackingResult> Parse(const base::Value& value, ErrorReporter* errors);
  StopRuleUsageTrackingResult(const StopRuleUsageTrackingResult&) = delete;
  StopRuleUsageTrackingResult& operator=(const StopRuleUsageTrackingResult&) = delete;
  ~StopRuleUsageTrackingResult() { }

  const std::vector<std::unique_ptr<::autofill_assistant::css::RuleUsage>>* GetRuleUsage() const { return &rule_usage_; }
  void SetRuleUsage(std::vector<std::unique_ptr<::autofill_assistant::css::RuleUsage>> value) { rule_usage_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StopRuleUsageTrackingResult> Clone() const;

  template<int STATE>
  class StopRuleUsageTrackingResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kRuleUsageSet = 1 << 1,
      kAllRequiredFieldsSet = (kRuleUsageSet | 0)
    };

    StopRuleUsageTrackingResultBuilder<STATE | kRuleUsageSet>& SetRuleUsage(std::vector<std::unique_ptr<::autofill_assistant::css::RuleUsage>> value) {
      static_assert(!(STATE & kRuleUsageSet), "property ruleUsage should not have already been set");
      result_->SetRuleUsage(std::move(value));
      return CastState<kRuleUsageSet>();
    }

    std::unique_ptr<StopRuleUsageTrackingResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StopRuleUsageTrackingResult;
    StopRuleUsageTrackingResultBuilder() : result_(new StopRuleUsageTrackingResult()) { }

    template<int STEP> StopRuleUsageTrackingResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StopRuleUsageTrackingResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StopRuleUsageTrackingResult> result_;
  };

  static StopRuleUsageTrackingResultBuilder<0> Builder() {
    return StopRuleUsageTrackingResultBuilder<0>();
  }

 private:
  StopRuleUsageTrackingResult() { }

  std::vector<std::unique_ptr<::autofill_assistant::css::RuleUsage>> rule_usage_;
};


// Parameters for the TakeCoverageDelta command.
class TakeCoverageDeltaParams {
 public:
  static std::unique_ptr<TakeCoverageDeltaParams> Parse(const base::Value& value, ErrorReporter* errors);
  TakeCoverageDeltaParams(const TakeCoverageDeltaParams&) = delete;
  TakeCoverageDeltaParams& operator=(const TakeCoverageDeltaParams&) = delete;
  ~TakeCoverageDeltaParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TakeCoverageDeltaParams> Clone() const;

  template<int STATE>
  class TakeCoverageDeltaParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<TakeCoverageDeltaParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TakeCoverageDeltaParams;
    TakeCoverageDeltaParamsBuilder() : result_(new TakeCoverageDeltaParams()) { }

    template<int STEP> TakeCoverageDeltaParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TakeCoverageDeltaParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TakeCoverageDeltaParams> result_;
  };

  static TakeCoverageDeltaParamsBuilder<0> Builder() {
    return TakeCoverageDeltaParamsBuilder<0>();
  }

 private:
  TakeCoverageDeltaParams() { }

};


// Result for the TakeCoverageDelta command.
class TakeCoverageDeltaResult {
 public:
  static std::unique_ptr<TakeCoverageDeltaResult> Parse(const base::Value& value, ErrorReporter* errors);
  TakeCoverageDeltaResult(const TakeCoverageDeltaResult&) = delete;
  TakeCoverageDeltaResult& operator=(const TakeCoverageDeltaResult&) = delete;
  ~TakeCoverageDeltaResult() { }

  const std::vector<std::unique_ptr<::autofill_assistant::css::RuleUsage>>* GetCoverage() const { return &coverage_; }
  void SetCoverage(std::vector<std::unique_ptr<::autofill_assistant::css::RuleUsage>> value) { coverage_ = std::move(value); }

  // Monotonically increasing time, in seconds.
  double GetTimestamp() const { return timestamp_; }
  void SetTimestamp(double value) { timestamp_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TakeCoverageDeltaResult> Clone() const;

  template<int STATE>
  class TakeCoverageDeltaResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCoverageSet = 1 << 1,
    kTimestampSet = 1 << 2,
      kAllRequiredFieldsSet = (kCoverageSet | kTimestampSet | 0)
    };

    TakeCoverageDeltaResultBuilder<STATE | kCoverageSet>& SetCoverage(std::vector<std::unique_ptr<::autofill_assistant::css::RuleUsage>> value) {
      static_assert(!(STATE & kCoverageSet), "property coverage should not have already been set");
      result_->SetCoverage(std::move(value));
      return CastState<kCoverageSet>();
    }

    TakeCoverageDeltaResultBuilder<STATE | kTimestampSet>& SetTimestamp(double value) {
      static_assert(!(STATE & kTimestampSet), "property timestamp should not have already been set");
      result_->SetTimestamp(value);
      return CastState<kTimestampSet>();
    }

    std::unique_ptr<TakeCoverageDeltaResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TakeCoverageDeltaResult;
    TakeCoverageDeltaResultBuilder() : result_(new TakeCoverageDeltaResult()) { }

    template<int STEP> TakeCoverageDeltaResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TakeCoverageDeltaResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TakeCoverageDeltaResult> result_;
  };

  static TakeCoverageDeltaResultBuilder<0> Builder() {
    return TakeCoverageDeltaResultBuilder<0>();
  }

 private:
  TakeCoverageDeltaResult() { }

  std::vector<std::unique_ptr<::autofill_assistant::css::RuleUsage>> coverage_;
  double timestamp_;
};


// Parameters for the SetLocalFontsEnabled command.
class SetLocalFontsEnabledParams {
 public:
  static std::unique_ptr<SetLocalFontsEnabledParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetLocalFontsEnabledParams(const SetLocalFontsEnabledParams&) = delete;
  SetLocalFontsEnabledParams& operator=(const SetLocalFontsEnabledParams&) = delete;
  ~SetLocalFontsEnabledParams() { }

  // Whether rendering of local fonts is enabled.
  bool GetEnabled() const { return enabled_; }
  void SetEnabled(bool value) { enabled_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetLocalFontsEnabledParams> Clone() const;

  template<int STATE>
  class SetLocalFontsEnabledParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kEnabledSet = 1 << 1,
      kAllRequiredFieldsSet = (kEnabledSet | 0)
    };

    SetLocalFontsEnabledParamsBuilder<STATE | kEnabledSet>& SetEnabled(bool value) {
      static_assert(!(STATE & kEnabledSet), "property enabled should not have already been set");
      result_->SetEnabled(value);
      return CastState<kEnabledSet>();
    }

    std::unique_ptr<SetLocalFontsEnabledParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetLocalFontsEnabledParams;
    SetLocalFontsEnabledParamsBuilder() : result_(new SetLocalFontsEnabledParams()) { }

    template<int STEP> SetLocalFontsEnabledParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetLocalFontsEnabledParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetLocalFontsEnabledParams> result_;
  };

  static SetLocalFontsEnabledParamsBuilder<0> Builder() {
    return SetLocalFontsEnabledParamsBuilder<0>();
  }

 private:
  SetLocalFontsEnabledParams() { }

  bool enabled_;
};


// Result for the SetLocalFontsEnabled command.
class SetLocalFontsEnabledResult {
 public:
  static std::unique_ptr<SetLocalFontsEnabledResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetLocalFontsEnabledResult(const SetLocalFontsEnabledResult&) = delete;
  SetLocalFontsEnabledResult& operator=(const SetLocalFontsEnabledResult&) = delete;
  ~SetLocalFontsEnabledResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetLocalFontsEnabledResult> Clone() const;

  template<int STATE>
  class SetLocalFontsEnabledResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetLocalFontsEnabledResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetLocalFontsEnabledResult;
    SetLocalFontsEnabledResultBuilder() : result_(new SetLocalFontsEnabledResult()) { }

    template<int STEP> SetLocalFontsEnabledResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetLocalFontsEnabledResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetLocalFontsEnabledResult> result_;
  };

  static SetLocalFontsEnabledResultBuilder<0> Builder() {
    return SetLocalFontsEnabledResultBuilder<0>();
  }

 private:
  SetLocalFontsEnabledResult() { }

};


// Parameters for the FontsUpdated event.
class FontsUpdatedParams {
 public:
  static std::unique_ptr<FontsUpdatedParams> Parse(const base::Value& value, ErrorReporter* errors);
  FontsUpdatedParams(const FontsUpdatedParams&) = delete;
  FontsUpdatedParams& operator=(const FontsUpdatedParams&) = delete;
  ~FontsUpdatedParams() { }

  // The web font that has loaded.
  bool HasFont() const { return !!font_; }
  const ::autofill_assistant::css::FontFace* GetFont() const { DCHECK(HasFont()); return font_.value().get(); }
  void SetFont(std::unique_ptr<::autofill_assistant::css::FontFace> value) { font_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<FontsUpdatedParams> Clone() const;

  template<int STATE>
  class FontsUpdatedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    FontsUpdatedParamsBuilder<STATE>& SetFont(std::unique_ptr<::autofill_assistant::css::FontFace> value) {
      result_->SetFont(std::move(value));
      return *this;
    }

    std::unique_ptr<FontsUpdatedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class FontsUpdatedParams;
    FontsUpdatedParamsBuilder() : result_(new FontsUpdatedParams()) { }

    template<int STEP> FontsUpdatedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<FontsUpdatedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<FontsUpdatedParams> result_;
  };

  static FontsUpdatedParamsBuilder<0> Builder() {
    return FontsUpdatedParamsBuilder<0>();
  }

 private:
  FontsUpdatedParams() { }

  absl::optional<std::unique_ptr<::autofill_assistant::css::FontFace>> font_;
};


// Parameters for the MediaQueryResultChanged event.
class MediaQueryResultChangedParams {
 public:
  static std::unique_ptr<MediaQueryResultChangedParams> Parse(const base::Value& value, ErrorReporter* errors);
  MediaQueryResultChangedParams(const MediaQueryResultChangedParams&) = delete;
  MediaQueryResultChangedParams& operator=(const MediaQueryResultChangedParams&) = delete;
  ~MediaQueryResultChangedParams() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<MediaQueryResultChangedParams> Clone() const;

  template<int STATE>
  class MediaQueryResultChangedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<MediaQueryResultChangedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class MediaQueryResultChangedParams;
    MediaQueryResultChangedParamsBuilder() : result_(new MediaQueryResultChangedParams()) { }

    template<int STEP> MediaQueryResultChangedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<MediaQueryResultChangedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<MediaQueryResultChangedParams> result_;
  };

  static MediaQueryResultChangedParamsBuilder<0> Builder() {
    return MediaQueryResultChangedParamsBuilder<0>();
  }

 private:
  MediaQueryResultChangedParams() { }

};


// Parameters for the StyleSheetAdded event.
class StyleSheetAddedParams {
 public:
  static std::unique_ptr<StyleSheetAddedParams> Parse(const base::Value& value, ErrorReporter* errors);
  StyleSheetAddedParams(const StyleSheetAddedParams&) = delete;
  StyleSheetAddedParams& operator=(const StyleSheetAddedParams&) = delete;
  ~StyleSheetAddedParams() { }

  // Added stylesheet metainfo.
  const ::autofill_assistant::css::CSSStyleSheetHeader* GetHeader() const { return header_.get(); }
  void SetHeader(std::unique_ptr<::autofill_assistant::css::CSSStyleSheetHeader> value) { header_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StyleSheetAddedParams> Clone() const;

  template<int STATE>
  class StyleSheetAddedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kHeaderSet = 1 << 1,
      kAllRequiredFieldsSet = (kHeaderSet | 0)
    };

    StyleSheetAddedParamsBuilder<STATE | kHeaderSet>& SetHeader(std::unique_ptr<::autofill_assistant::css::CSSStyleSheetHeader> value) {
      static_assert(!(STATE & kHeaderSet), "property header should not have already been set");
      result_->SetHeader(std::move(value));
      return CastState<kHeaderSet>();
    }

    std::unique_ptr<StyleSheetAddedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StyleSheetAddedParams;
    StyleSheetAddedParamsBuilder() : result_(new StyleSheetAddedParams()) { }

    template<int STEP> StyleSheetAddedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StyleSheetAddedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StyleSheetAddedParams> result_;
  };

  static StyleSheetAddedParamsBuilder<0> Builder() {
    return StyleSheetAddedParamsBuilder<0>();
  }

 private:
  StyleSheetAddedParams() { }

  std::unique_ptr<::autofill_assistant::css::CSSStyleSheetHeader> header_;
};


// Parameters for the StyleSheetChanged event.
class StyleSheetChangedParams {
 public:
  static std::unique_ptr<StyleSheetChangedParams> Parse(const base::Value& value, ErrorReporter* errors);
  StyleSheetChangedParams(const StyleSheetChangedParams&) = delete;
  StyleSheetChangedParams& operator=(const StyleSheetChangedParams&) = delete;
  ~StyleSheetChangedParams() { }

  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StyleSheetChangedParams> Clone() const;

  template<int STATE>
  class StyleSheetChangedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | 0)
    };

    StyleSheetChangedParamsBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    std::unique_ptr<StyleSheetChangedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StyleSheetChangedParams;
    StyleSheetChangedParamsBuilder() : result_(new StyleSheetChangedParams()) { }

    template<int STEP> StyleSheetChangedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StyleSheetChangedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StyleSheetChangedParams> result_;
  };

  static StyleSheetChangedParamsBuilder<0> Builder() {
    return StyleSheetChangedParamsBuilder<0>();
  }

 private:
  StyleSheetChangedParams() { }

  std::string style_sheet_id_;
};


// Parameters for the StyleSheetRemoved event.
class StyleSheetRemovedParams {
 public:
  static std::unique_ptr<StyleSheetRemovedParams> Parse(const base::Value& value, ErrorReporter* errors);
  StyleSheetRemovedParams(const StyleSheetRemovedParams&) = delete;
  StyleSheetRemovedParams& operator=(const StyleSheetRemovedParams&) = delete;
  ~StyleSheetRemovedParams() { }

  // Identifier of the removed stylesheet.
  std::string GetStyleSheetId() const { return style_sheet_id_; }
  void SetStyleSheetId(const std::string& value) { style_sheet_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<StyleSheetRemovedParams> Clone() const;

  template<int STATE>
  class StyleSheetRemovedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kStyleSheetIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kStyleSheetIdSet | 0)
    };

    StyleSheetRemovedParamsBuilder<STATE | kStyleSheetIdSet>& SetStyleSheetId(const std::string& value) {
      static_assert(!(STATE & kStyleSheetIdSet), "property styleSheetId should not have already been set");
      result_->SetStyleSheetId(value);
      return CastState<kStyleSheetIdSet>();
    }

    std::unique_ptr<StyleSheetRemovedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class StyleSheetRemovedParams;
    StyleSheetRemovedParamsBuilder() : result_(new StyleSheetRemovedParams()) { }

    template<int STEP> StyleSheetRemovedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<StyleSheetRemovedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<StyleSheetRemovedParams> result_;
  };

  static StyleSheetRemovedParamsBuilder<0> Builder() {
    return StyleSheetRemovedParamsBuilder<0>();
  }

 private:
  StyleSheetRemovedParams() { }

  std::string style_sheet_id_;
};


}  // namespace css

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_CSS_H_
