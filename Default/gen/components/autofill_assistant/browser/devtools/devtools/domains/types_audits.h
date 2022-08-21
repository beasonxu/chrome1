// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_AUDITS_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_AUDITS_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_audits.h"
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

namespace audits {

// Information about a cookie that is affected by an inspector issue.
class AffectedCookie {
 public:
  static std::unique_ptr<AffectedCookie> Parse(const base::Value& value, ErrorReporter* errors);
  AffectedCookie(const AffectedCookie&) = delete;
  AffectedCookie& operator=(const AffectedCookie&) = delete;
  ~AffectedCookie() { }

  // The following three properties uniquely identify a cookie
  std::string GetName() const { return name_; }
  void SetName(const std::string& value) { name_ = value; }

  std::string GetPath() const { return path_; }
  void SetPath(const std::string& value) { path_ = value; }

  std::string GetDomain() const { return domain_; }
  void SetDomain(const std::string& value) { domain_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<AffectedCookie> Clone() const;

  template<int STATE>
  class AffectedCookieBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kNameSet = 1 << 1,
    kPathSet = 1 << 2,
    kDomainSet = 1 << 3,
      kAllRequiredFieldsSet = (kNameSet | kPathSet | kDomainSet | 0)
    };

    AffectedCookieBuilder<STATE | kNameSet>& SetName(const std::string& value) {
      static_assert(!(STATE & kNameSet), "property name should not have already been set");
      result_->SetName(value);
      return CastState<kNameSet>();
    }

    AffectedCookieBuilder<STATE | kPathSet>& SetPath(const std::string& value) {
      static_assert(!(STATE & kPathSet), "property path should not have already been set");
      result_->SetPath(value);
      return CastState<kPathSet>();
    }

    AffectedCookieBuilder<STATE | kDomainSet>& SetDomain(const std::string& value) {
      static_assert(!(STATE & kDomainSet), "property domain should not have already been set");
      result_->SetDomain(value);
      return CastState<kDomainSet>();
    }

    std::unique_ptr<AffectedCookie> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class AffectedCookie;
    AffectedCookieBuilder() : result_(new AffectedCookie()) { }

    template<int STEP> AffectedCookieBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<AffectedCookieBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<AffectedCookie> result_;
  };

  static AffectedCookieBuilder<0> Builder() {
    return AffectedCookieBuilder<0>();
  }

 private:
  AffectedCookie() { }

  std::string name_;
  std::string path_;
  std::string domain_;
};


// Information about a request that is affected by an inspector issue.
class AffectedRequest {
 public:
  static std::unique_ptr<AffectedRequest> Parse(const base::Value& value, ErrorReporter* errors);
  AffectedRequest(const AffectedRequest&) = delete;
  AffectedRequest& operator=(const AffectedRequest&) = delete;
  ~AffectedRequest() { }

  // The unique request id.
  std::string GetRequestId() const { return request_id_; }
  void SetRequestId(const std::string& value) { request_id_ = value; }

  bool HasUrl() const { return !!url_; }
  std::string GetUrl() const { DCHECK(HasUrl()); return url_.value(); }
  void SetUrl(const std::string& value) { url_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<AffectedRequest> Clone() const;

  template<int STATE>
  class AffectedRequestBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kRequestIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kRequestIdSet | 0)
    };

    AffectedRequestBuilder<STATE | kRequestIdSet>& SetRequestId(const std::string& value) {
      static_assert(!(STATE & kRequestIdSet), "property requestId should not have already been set");
      result_->SetRequestId(value);
      return CastState<kRequestIdSet>();
    }

    AffectedRequestBuilder<STATE>& SetUrl(const std::string& value) {
      result_->SetUrl(value);
      return *this;
    }

    std::unique_ptr<AffectedRequest> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class AffectedRequest;
    AffectedRequestBuilder() : result_(new AffectedRequest()) { }

    template<int STEP> AffectedRequestBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<AffectedRequestBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<AffectedRequest> result_;
  };

  static AffectedRequestBuilder<0> Builder() {
    return AffectedRequestBuilder<0>();
  }

 private:
  AffectedRequest() { }

  std::string request_id_;
  absl::optional<std::string> url_;
};


// Information about the frame affected by an inspector issue.
class AffectedFrame {
 public:
  static std::unique_ptr<AffectedFrame> Parse(const base::Value& value, ErrorReporter* errors);
  AffectedFrame(const AffectedFrame&) = delete;
  AffectedFrame& operator=(const AffectedFrame&) = delete;
  ~AffectedFrame() { }

  std::string GetFrameId() const { return frame_id_; }
  void SetFrameId(const std::string& value) { frame_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<AffectedFrame> Clone() const;

  template<int STATE>
  class AffectedFrameBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kFrameIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kFrameIdSet | 0)
    };

    AffectedFrameBuilder<STATE | kFrameIdSet>& SetFrameId(const std::string& value) {
      static_assert(!(STATE & kFrameIdSet), "property frameId should not have already been set");
      result_->SetFrameId(value);
      return CastState<kFrameIdSet>();
    }

    std::unique_ptr<AffectedFrame> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class AffectedFrame;
    AffectedFrameBuilder() : result_(new AffectedFrame()) { }

    template<int STEP> AffectedFrameBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<AffectedFrameBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<AffectedFrame> result_;
  };

  static AffectedFrameBuilder<0> Builder() {
    return AffectedFrameBuilder<0>();
  }

 private:
  AffectedFrame() { }

  std::string frame_id_;
};


// This information is currently necessary, as the front-end has a difficult
// time finding a specific cookie. With this, we can convey specific error
// information without the cookie.
class CookieIssueDetails {
 public:
  static std::unique_ptr<CookieIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  CookieIssueDetails(const CookieIssueDetails&) = delete;
  CookieIssueDetails& operator=(const CookieIssueDetails&) = delete;
  ~CookieIssueDetails() { }

  // If AffectedCookie is not set then rawCookieLine contains the raw
  // Set-Cookie header string. This hints at a problem where the
  // cookie line is syntactically or semantically malformed in a way
  // that no valid cookie could be created.
  bool HasCookie() const { return !!cookie_; }
  const ::autofill_assistant::audits::AffectedCookie* GetCookie() const { DCHECK(HasCookie()); return cookie_.value().get(); }
  void SetCookie(std::unique_ptr<::autofill_assistant::audits::AffectedCookie> value) { cookie_ = std::move(value); }

  bool HasRawCookieLine() const { return !!raw_cookie_line_; }
  std::string GetRawCookieLine() const { DCHECK(HasRawCookieLine()); return raw_cookie_line_.value(); }
  void SetRawCookieLine(const std::string& value) { raw_cookie_line_ = value; }

  const std::vector<::autofill_assistant::audits::CookieWarningReason>* GetCookieWarningReasons() const { return &cookie_warning_reasons_; }
  void SetCookieWarningReasons(std::vector<::autofill_assistant::audits::CookieWarningReason> value) { cookie_warning_reasons_ = std::move(value); }

  const std::vector<::autofill_assistant::audits::CookieExclusionReason>* GetCookieExclusionReasons() const { return &cookie_exclusion_reasons_; }
  void SetCookieExclusionReasons(std::vector<::autofill_assistant::audits::CookieExclusionReason> value) { cookie_exclusion_reasons_ = std::move(value); }

  // Optionally identifies the site-for-cookies and the cookie url, which
  // may be used by the front-end as additional context.
  ::autofill_assistant::audits::CookieOperation GetOperation() const { return operation_; }
  void SetOperation(::autofill_assistant::audits::CookieOperation value) { operation_ = value; }

  bool HasSiteForCookies() const { return !!site_for_cookies_; }
  std::string GetSiteForCookies() const { DCHECK(HasSiteForCookies()); return site_for_cookies_.value(); }
  void SetSiteForCookies(const std::string& value) { site_for_cookies_ = value; }

  bool HasCookieUrl() const { return !!cookie_url_; }
  std::string GetCookieUrl() const { DCHECK(HasCookieUrl()); return cookie_url_.value(); }
  void SetCookieUrl(const std::string& value) { cookie_url_ = value; }

  bool HasRequest() const { return !!request_; }
  const ::autofill_assistant::audits::AffectedRequest* GetRequest() const { DCHECK(HasRequest()); return request_.value().get(); }
  void SetRequest(std::unique_ptr<::autofill_assistant::audits::AffectedRequest> value) { request_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CookieIssueDetails> Clone() const;

  template<int STATE>
  class CookieIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCookieWarningReasonsSet = 1 << 1,
    kCookieExclusionReasonsSet = 1 << 2,
    kOperationSet = 1 << 3,
      kAllRequiredFieldsSet = (kCookieWarningReasonsSet | kCookieExclusionReasonsSet | kOperationSet | 0)
    };

    CookieIssueDetailsBuilder<STATE>& SetCookie(std::unique_ptr<::autofill_assistant::audits::AffectedCookie> value) {
      result_->SetCookie(std::move(value));
      return *this;
    }

    CookieIssueDetailsBuilder<STATE>& SetRawCookieLine(const std::string& value) {
      result_->SetRawCookieLine(value);
      return *this;
    }

    CookieIssueDetailsBuilder<STATE | kCookieWarningReasonsSet>& SetCookieWarningReasons(std::vector<::autofill_assistant::audits::CookieWarningReason> value) {
      static_assert(!(STATE & kCookieWarningReasonsSet), "property cookieWarningReasons should not have already been set");
      result_->SetCookieWarningReasons(std::move(value));
      return CastState<kCookieWarningReasonsSet>();
    }

    CookieIssueDetailsBuilder<STATE | kCookieExclusionReasonsSet>& SetCookieExclusionReasons(std::vector<::autofill_assistant::audits::CookieExclusionReason> value) {
      static_assert(!(STATE & kCookieExclusionReasonsSet), "property cookieExclusionReasons should not have already been set");
      result_->SetCookieExclusionReasons(std::move(value));
      return CastState<kCookieExclusionReasonsSet>();
    }

    CookieIssueDetailsBuilder<STATE | kOperationSet>& SetOperation(::autofill_assistant::audits::CookieOperation value) {
      static_assert(!(STATE & kOperationSet), "property operation should not have already been set");
      result_->SetOperation(value);
      return CastState<kOperationSet>();
    }

    CookieIssueDetailsBuilder<STATE>& SetSiteForCookies(const std::string& value) {
      result_->SetSiteForCookies(value);
      return *this;
    }

    CookieIssueDetailsBuilder<STATE>& SetCookieUrl(const std::string& value) {
      result_->SetCookieUrl(value);
      return *this;
    }

    CookieIssueDetailsBuilder<STATE>& SetRequest(std::unique_ptr<::autofill_assistant::audits::AffectedRequest> value) {
      result_->SetRequest(std::move(value));
      return *this;
    }

    std::unique_ptr<CookieIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CookieIssueDetails;
    CookieIssueDetailsBuilder() : result_(new CookieIssueDetails()) { }

    template<int STEP> CookieIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CookieIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CookieIssueDetails> result_;
  };

  static CookieIssueDetailsBuilder<0> Builder() {
    return CookieIssueDetailsBuilder<0>();
  }

 private:
  CookieIssueDetails() { }

  absl::optional<std::unique_ptr<::autofill_assistant::audits::AffectedCookie>> cookie_;
  absl::optional<std::string> raw_cookie_line_;
  std::vector<::autofill_assistant::audits::CookieWarningReason> cookie_warning_reasons_;
  std::vector<::autofill_assistant::audits::CookieExclusionReason> cookie_exclusion_reasons_;
  ::autofill_assistant::audits::CookieOperation operation_;
  absl::optional<std::string> site_for_cookies_;
  absl::optional<std::string> cookie_url_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::AffectedRequest>> request_;
};


class MixedContentIssueDetails {
 public:
  static std::unique_ptr<MixedContentIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  MixedContentIssueDetails(const MixedContentIssueDetails&) = delete;
  MixedContentIssueDetails& operator=(const MixedContentIssueDetails&) = delete;
  ~MixedContentIssueDetails() { }

  // The type of resource causing the mixed content issue (css, js, iframe,
  // form,...). Marked as optional because it is mapped to from
  // blink::mojom::RequestContextType, which will be replaced
  // by network::mojom::RequestDestination
  bool HasResourceType() const { return !!resource_type_; }
  ::autofill_assistant::audits::MixedContentResourceType GetResourceType() const { DCHECK(HasResourceType()); return resource_type_.value(); }
  void SetResourceType(::autofill_assistant::audits::MixedContentResourceType value) { resource_type_ = value; }

  // The way the mixed content issue is being resolved.
  ::autofill_assistant::audits::MixedContentResolutionStatus GetResolutionStatus() const { return resolution_status_; }
  void SetResolutionStatus(::autofill_assistant::audits::MixedContentResolutionStatus value) { resolution_status_ = value; }

  // The unsafe http url causing the mixed content issue.
  std::string GetInsecureURL() const { return insecureurl_; }
  void SetInsecureURL(const std::string& value) { insecureurl_ = value; }

  // The url responsible for the call to an unsafe url.
  std::string GetMainResourceURL() const { return main_resourceurl_; }
  void SetMainResourceURL(const std::string& value) { main_resourceurl_ = value; }

  // The mixed content request.
  // Does not always exist (e.g. for unsafe form submission urls).
  bool HasRequest() const { return !!request_; }
  const ::autofill_assistant::audits::AffectedRequest* GetRequest() const { DCHECK(HasRequest()); return request_.value().get(); }
  void SetRequest(std::unique_ptr<::autofill_assistant::audits::AffectedRequest> value) { request_ = std::move(value); }

  // Optional because not every mixed content issue is necessarily linked to a frame.
  bool HasFrame() const { return !!frame_; }
  const ::autofill_assistant::audits::AffectedFrame* GetFrame() const { DCHECK(HasFrame()); return frame_.value().get(); }
  void SetFrame(std::unique_ptr<::autofill_assistant::audits::AffectedFrame> value) { frame_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<MixedContentIssueDetails> Clone() const;

  template<int STATE>
  class MixedContentIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kResolutionStatusSet = 1 << 1,
    kInsecureURLSet = 1 << 2,
    kMainResourceURLSet = 1 << 3,
      kAllRequiredFieldsSet = (kResolutionStatusSet | kInsecureURLSet | kMainResourceURLSet | 0)
    };

    MixedContentIssueDetailsBuilder<STATE>& SetResourceType(::autofill_assistant::audits::MixedContentResourceType value) {
      result_->SetResourceType(value);
      return *this;
    }

    MixedContentIssueDetailsBuilder<STATE | kResolutionStatusSet>& SetResolutionStatus(::autofill_assistant::audits::MixedContentResolutionStatus value) {
      static_assert(!(STATE & kResolutionStatusSet), "property resolutionStatus should not have already been set");
      result_->SetResolutionStatus(value);
      return CastState<kResolutionStatusSet>();
    }

    MixedContentIssueDetailsBuilder<STATE | kInsecureURLSet>& SetInsecureURL(const std::string& value) {
      static_assert(!(STATE & kInsecureURLSet), "property insecureURL should not have already been set");
      result_->SetInsecureURL(value);
      return CastState<kInsecureURLSet>();
    }

    MixedContentIssueDetailsBuilder<STATE | kMainResourceURLSet>& SetMainResourceURL(const std::string& value) {
      static_assert(!(STATE & kMainResourceURLSet), "property mainResourceURL should not have already been set");
      result_->SetMainResourceURL(value);
      return CastState<kMainResourceURLSet>();
    }

    MixedContentIssueDetailsBuilder<STATE>& SetRequest(std::unique_ptr<::autofill_assistant::audits::AffectedRequest> value) {
      result_->SetRequest(std::move(value));
      return *this;
    }

    MixedContentIssueDetailsBuilder<STATE>& SetFrame(std::unique_ptr<::autofill_assistant::audits::AffectedFrame> value) {
      result_->SetFrame(std::move(value));
      return *this;
    }

    std::unique_ptr<MixedContentIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class MixedContentIssueDetails;
    MixedContentIssueDetailsBuilder() : result_(new MixedContentIssueDetails()) { }

    template<int STEP> MixedContentIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<MixedContentIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<MixedContentIssueDetails> result_;
  };

  static MixedContentIssueDetailsBuilder<0> Builder() {
    return MixedContentIssueDetailsBuilder<0>();
  }

 private:
  MixedContentIssueDetails() { }

  absl::optional<::autofill_assistant::audits::MixedContentResourceType> resource_type_;
  ::autofill_assistant::audits::MixedContentResolutionStatus resolution_status_;
  std::string insecureurl_;
  std::string main_resourceurl_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::AffectedRequest>> request_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::AffectedFrame>> frame_;
};


// Details for a request that has been blocked with the BLOCKED_BY_RESPONSE
// code. Currently only used for COEP/COOP, but may be extended to include
// some CSP errors in the future.
class BlockedByResponseIssueDetails {
 public:
  static std::unique_ptr<BlockedByResponseIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  BlockedByResponseIssueDetails(const BlockedByResponseIssueDetails&) = delete;
  BlockedByResponseIssueDetails& operator=(const BlockedByResponseIssueDetails&) = delete;
  ~BlockedByResponseIssueDetails() { }

  const ::autofill_assistant::audits::AffectedRequest* GetRequest() const { return request_.get(); }
  void SetRequest(std::unique_ptr<::autofill_assistant::audits::AffectedRequest> value) { request_ = std::move(value); }

  bool HasParentFrame() const { return !!parent_frame_; }
  const ::autofill_assistant::audits::AffectedFrame* GetParentFrame() const { DCHECK(HasParentFrame()); return parent_frame_.value().get(); }
  void SetParentFrame(std::unique_ptr<::autofill_assistant::audits::AffectedFrame> value) { parent_frame_ = std::move(value); }

  bool HasBlockedFrame() const { return !!blocked_frame_; }
  const ::autofill_assistant::audits::AffectedFrame* GetBlockedFrame() const { DCHECK(HasBlockedFrame()); return blocked_frame_.value().get(); }
  void SetBlockedFrame(std::unique_ptr<::autofill_assistant::audits::AffectedFrame> value) { blocked_frame_ = std::move(value); }

  ::autofill_assistant::audits::BlockedByResponseReason GetReason() const { return reason_; }
  void SetReason(::autofill_assistant::audits::BlockedByResponseReason value) { reason_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<BlockedByResponseIssueDetails> Clone() const;

  template<int STATE>
  class BlockedByResponseIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kRequestSet = 1 << 1,
    kReasonSet = 1 << 2,
      kAllRequiredFieldsSet = (kRequestSet | kReasonSet | 0)
    };

    BlockedByResponseIssueDetailsBuilder<STATE | kRequestSet>& SetRequest(std::unique_ptr<::autofill_assistant::audits::AffectedRequest> value) {
      static_assert(!(STATE & kRequestSet), "property request should not have already been set");
      result_->SetRequest(std::move(value));
      return CastState<kRequestSet>();
    }

    BlockedByResponseIssueDetailsBuilder<STATE>& SetParentFrame(std::unique_ptr<::autofill_assistant::audits::AffectedFrame> value) {
      result_->SetParentFrame(std::move(value));
      return *this;
    }

    BlockedByResponseIssueDetailsBuilder<STATE>& SetBlockedFrame(std::unique_ptr<::autofill_assistant::audits::AffectedFrame> value) {
      result_->SetBlockedFrame(std::move(value));
      return *this;
    }

    BlockedByResponseIssueDetailsBuilder<STATE | kReasonSet>& SetReason(::autofill_assistant::audits::BlockedByResponseReason value) {
      static_assert(!(STATE & kReasonSet), "property reason should not have already been set");
      result_->SetReason(value);
      return CastState<kReasonSet>();
    }

    std::unique_ptr<BlockedByResponseIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class BlockedByResponseIssueDetails;
    BlockedByResponseIssueDetailsBuilder() : result_(new BlockedByResponseIssueDetails()) { }

    template<int STEP> BlockedByResponseIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<BlockedByResponseIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<BlockedByResponseIssueDetails> result_;
  };

  static BlockedByResponseIssueDetailsBuilder<0> Builder() {
    return BlockedByResponseIssueDetailsBuilder<0>();
  }

 private:
  BlockedByResponseIssueDetails() { }

  std::unique_ptr<::autofill_assistant::audits::AffectedRequest> request_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::AffectedFrame>> parent_frame_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::AffectedFrame>> blocked_frame_;
  ::autofill_assistant::audits::BlockedByResponseReason reason_;
};


class HeavyAdIssueDetails {
 public:
  static std::unique_ptr<HeavyAdIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  HeavyAdIssueDetails(const HeavyAdIssueDetails&) = delete;
  HeavyAdIssueDetails& operator=(const HeavyAdIssueDetails&) = delete;
  ~HeavyAdIssueDetails() { }

  // The resolution status, either blocking the content or warning.
  ::autofill_assistant::audits::HeavyAdResolutionStatus GetResolution() const { return resolution_; }
  void SetResolution(::autofill_assistant::audits::HeavyAdResolutionStatus value) { resolution_ = value; }

  // The reason the ad was blocked, total network or cpu or peak cpu.
  ::autofill_assistant::audits::HeavyAdReason GetReason() const { return reason_; }
  void SetReason(::autofill_assistant::audits::HeavyAdReason value) { reason_ = value; }

  // The frame that was blocked.
  const ::autofill_assistant::audits::AffectedFrame* GetFrame() const { return frame_.get(); }
  void SetFrame(std::unique_ptr<::autofill_assistant::audits::AffectedFrame> value) { frame_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<HeavyAdIssueDetails> Clone() const;

  template<int STATE>
  class HeavyAdIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kResolutionSet = 1 << 1,
    kReasonSet = 1 << 2,
    kFrameSet = 1 << 3,
      kAllRequiredFieldsSet = (kResolutionSet | kReasonSet | kFrameSet | 0)
    };

    HeavyAdIssueDetailsBuilder<STATE | kResolutionSet>& SetResolution(::autofill_assistant::audits::HeavyAdResolutionStatus value) {
      static_assert(!(STATE & kResolutionSet), "property resolution should not have already been set");
      result_->SetResolution(value);
      return CastState<kResolutionSet>();
    }

    HeavyAdIssueDetailsBuilder<STATE | kReasonSet>& SetReason(::autofill_assistant::audits::HeavyAdReason value) {
      static_assert(!(STATE & kReasonSet), "property reason should not have already been set");
      result_->SetReason(value);
      return CastState<kReasonSet>();
    }

    HeavyAdIssueDetailsBuilder<STATE | kFrameSet>& SetFrame(std::unique_ptr<::autofill_assistant::audits::AffectedFrame> value) {
      static_assert(!(STATE & kFrameSet), "property frame should not have already been set");
      result_->SetFrame(std::move(value));
      return CastState<kFrameSet>();
    }

    std::unique_ptr<HeavyAdIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class HeavyAdIssueDetails;
    HeavyAdIssueDetailsBuilder() : result_(new HeavyAdIssueDetails()) { }

    template<int STEP> HeavyAdIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<HeavyAdIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<HeavyAdIssueDetails> result_;
  };

  static HeavyAdIssueDetailsBuilder<0> Builder() {
    return HeavyAdIssueDetailsBuilder<0>();
  }

 private:
  HeavyAdIssueDetails() { }

  ::autofill_assistant::audits::HeavyAdResolutionStatus resolution_;
  ::autofill_assistant::audits::HeavyAdReason reason_;
  std::unique_ptr<::autofill_assistant::audits::AffectedFrame> frame_;
};


class SourceCodeLocation {
 public:
  static std::unique_ptr<SourceCodeLocation> Parse(const base::Value& value, ErrorReporter* errors);
  SourceCodeLocation(const SourceCodeLocation&) = delete;
  SourceCodeLocation& operator=(const SourceCodeLocation&) = delete;
  ~SourceCodeLocation() { }

  bool HasScriptId() const { return !!script_id_; }
  std::string GetScriptId() const { DCHECK(HasScriptId()); return script_id_.value(); }
  void SetScriptId(const std::string& value) { script_id_ = value; }

  std::string GetUrl() const { return url_; }
  void SetUrl(const std::string& value) { url_ = value; }

  int GetLineNumber() const { return line_number_; }
  void SetLineNumber(int value) { line_number_ = value; }

  int GetColumnNumber() const { return column_number_; }
  void SetColumnNumber(int value) { column_number_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SourceCodeLocation> Clone() const;

  template<int STATE>
  class SourceCodeLocationBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kUrlSet = 1 << 1,
    kLineNumberSet = 1 << 2,
    kColumnNumberSet = 1 << 3,
      kAllRequiredFieldsSet = (kUrlSet | kLineNumberSet | kColumnNumberSet | 0)
    };

    SourceCodeLocationBuilder<STATE>& SetScriptId(const std::string& value) {
      result_->SetScriptId(value);
      return *this;
    }

    SourceCodeLocationBuilder<STATE | kUrlSet>& SetUrl(const std::string& value) {
      static_assert(!(STATE & kUrlSet), "property url should not have already been set");
      result_->SetUrl(value);
      return CastState<kUrlSet>();
    }

    SourceCodeLocationBuilder<STATE | kLineNumberSet>& SetLineNumber(int value) {
      static_assert(!(STATE & kLineNumberSet), "property lineNumber should not have already been set");
      result_->SetLineNumber(value);
      return CastState<kLineNumberSet>();
    }

    SourceCodeLocationBuilder<STATE | kColumnNumberSet>& SetColumnNumber(int value) {
      static_assert(!(STATE & kColumnNumberSet), "property columnNumber should not have already been set");
      result_->SetColumnNumber(value);
      return CastState<kColumnNumberSet>();
    }

    std::unique_ptr<SourceCodeLocation> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SourceCodeLocation;
    SourceCodeLocationBuilder() : result_(new SourceCodeLocation()) { }

    template<int STEP> SourceCodeLocationBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SourceCodeLocationBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SourceCodeLocation> result_;
  };

  static SourceCodeLocationBuilder<0> Builder() {
    return SourceCodeLocationBuilder<0>();
  }

 private:
  SourceCodeLocation() { }

  absl::optional<std::string> script_id_;
  std::string url_;
  int line_number_;
  int column_number_;
};


class ContentSecurityPolicyIssueDetails {
 public:
  static std::unique_ptr<ContentSecurityPolicyIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  ContentSecurityPolicyIssueDetails(const ContentSecurityPolicyIssueDetails&) = delete;
  ContentSecurityPolicyIssueDetails& operator=(const ContentSecurityPolicyIssueDetails&) = delete;
  ~ContentSecurityPolicyIssueDetails() { }

  // The url not included in allowed sources.
  bool HasBlockedURL() const { return !!blockedurl_; }
  std::string GetBlockedURL() const { DCHECK(HasBlockedURL()); return blockedurl_.value(); }
  void SetBlockedURL(const std::string& value) { blockedurl_ = value; }

  // Specific directive that is violated, causing the CSP issue.
  std::string GetViolatedDirective() const { return violated_directive_; }
  void SetViolatedDirective(const std::string& value) { violated_directive_ = value; }

  bool GetIsReportOnly() const { return is_report_only_; }
  void SetIsReportOnly(bool value) { is_report_only_ = value; }

  ::autofill_assistant::audits::ContentSecurityPolicyViolationType GetContentSecurityPolicyViolationType() const { return content_security_policy_violation_type_; }
  void SetContentSecurityPolicyViolationType(::autofill_assistant::audits::ContentSecurityPolicyViolationType value) { content_security_policy_violation_type_ = value; }

  bool HasFrameAncestor() const { return !!frame_ancestor_; }
  const ::autofill_assistant::audits::AffectedFrame* GetFrameAncestor() const { DCHECK(HasFrameAncestor()); return frame_ancestor_.value().get(); }
  void SetFrameAncestor(std::unique_ptr<::autofill_assistant::audits::AffectedFrame> value) { frame_ancestor_ = std::move(value); }

  bool HasSourceCodeLocation() const { return !!source_code_location_; }
  const ::autofill_assistant::audits::SourceCodeLocation* GetSourceCodeLocation() const { DCHECK(HasSourceCodeLocation()); return source_code_location_.value().get(); }
  void SetSourceCodeLocation(std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> value) { source_code_location_ = std::move(value); }

  bool HasViolatingNodeId() const { return !!violating_node_id_; }
  int GetViolatingNodeId() const { DCHECK(HasViolatingNodeId()); return violating_node_id_.value(); }
  void SetViolatingNodeId(int value) { violating_node_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ContentSecurityPolicyIssueDetails> Clone() const;

  template<int STATE>
  class ContentSecurityPolicyIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kViolatedDirectiveSet = 1 << 1,
    kIsReportOnlySet = 1 << 2,
    kContentSecurityPolicyViolationTypeSet = 1 << 3,
      kAllRequiredFieldsSet = (kViolatedDirectiveSet | kIsReportOnlySet | kContentSecurityPolicyViolationTypeSet | 0)
    };

    ContentSecurityPolicyIssueDetailsBuilder<STATE>& SetBlockedURL(const std::string& value) {
      result_->SetBlockedURL(value);
      return *this;
    }

    ContentSecurityPolicyIssueDetailsBuilder<STATE | kViolatedDirectiveSet>& SetViolatedDirective(const std::string& value) {
      static_assert(!(STATE & kViolatedDirectiveSet), "property violatedDirective should not have already been set");
      result_->SetViolatedDirective(value);
      return CastState<kViolatedDirectiveSet>();
    }

    ContentSecurityPolicyIssueDetailsBuilder<STATE | kIsReportOnlySet>& SetIsReportOnly(bool value) {
      static_assert(!(STATE & kIsReportOnlySet), "property isReportOnly should not have already been set");
      result_->SetIsReportOnly(value);
      return CastState<kIsReportOnlySet>();
    }

    ContentSecurityPolicyIssueDetailsBuilder<STATE | kContentSecurityPolicyViolationTypeSet>& SetContentSecurityPolicyViolationType(::autofill_assistant::audits::ContentSecurityPolicyViolationType value) {
      static_assert(!(STATE & kContentSecurityPolicyViolationTypeSet), "property contentSecurityPolicyViolationType should not have already been set");
      result_->SetContentSecurityPolicyViolationType(value);
      return CastState<kContentSecurityPolicyViolationTypeSet>();
    }

    ContentSecurityPolicyIssueDetailsBuilder<STATE>& SetFrameAncestor(std::unique_ptr<::autofill_assistant::audits::AffectedFrame> value) {
      result_->SetFrameAncestor(std::move(value));
      return *this;
    }

    ContentSecurityPolicyIssueDetailsBuilder<STATE>& SetSourceCodeLocation(std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> value) {
      result_->SetSourceCodeLocation(std::move(value));
      return *this;
    }

    ContentSecurityPolicyIssueDetailsBuilder<STATE>& SetViolatingNodeId(int value) {
      result_->SetViolatingNodeId(value);
      return *this;
    }

    std::unique_ptr<ContentSecurityPolicyIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ContentSecurityPolicyIssueDetails;
    ContentSecurityPolicyIssueDetailsBuilder() : result_(new ContentSecurityPolicyIssueDetails()) { }

    template<int STEP> ContentSecurityPolicyIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ContentSecurityPolicyIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ContentSecurityPolicyIssueDetails> result_;
  };

  static ContentSecurityPolicyIssueDetailsBuilder<0> Builder() {
    return ContentSecurityPolicyIssueDetailsBuilder<0>();
  }

 private:
  ContentSecurityPolicyIssueDetails() { }

  absl::optional<std::string> blockedurl_;
  std::string violated_directive_;
  bool is_report_only_;
  ::autofill_assistant::audits::ContentSecurityPolicyViolationType content_security_policy_violation_type_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::AffectedFrame>> frame_ancestor_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation>> source_code_location_;
  absl::optional<int> violating_node_id_;
};


// Details for a issue arising from an SAB being instantiated in, or
// transferred to a context that is not cross-origin isolated.
class SharedArrayBufferIssueDetails {
 public:
  static std::unique_ptr<SharedArrayBufferIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  SharedArrayBufferIssueDetails(const SharedArrayBufferIssueDetails&) = delete;
  SharedArrayBufferIssueDetails& operator=(const SharedArrayBufferIssueDetails&) = delete;
  ~SharedArrayBufferIssueDetails() { }

  const ::autofill_assistant::audits::SourceCodeLocation* GetSourceCodeLocation() const { return source_code_location_.get(); }
  void SetSourceCodeLocation(std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> value) { source_code_location_ = std::move(value); }

  bool GetIsWarning() const { return is_warning_; }
  void SetIsWarning(bool value) { is_warning_ = value; }

  ::autofill_assistant::audits::SharedArrayBufferIssueType GetType() const { return type_; }
  void SetType(::autofill_assistant::audits::SharedArrayBufferIssueType value) { type_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SharedArrayBufferIssueDetails> Clone() const;

  template<int STATE>
  class SharedArrayBufferIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSourceCodeLocationSet = 1 << 1,
    kIsWarningSet = 1 << 2,
    kTypeSet = 1 << 3,
      kAllRequiredFieldsSet = (kSourceCodeLocationSet | kIsWarningSet | kTypeSet | 0)
    };

    SharedArrayBufferIssueDetailsBuilder<STATE | kSourceCodeLocationSet>& SetSourceCodeLocation(std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> value) {
      static_assert(!(STATE & kSourceCodeLocationSet), "property sourceCodeLocation should not have already been set");
      result_->SetSourceCodeLocation(std::move(value));
      return CastState<kSourceCodeLocationSet>();
    }

    SharedArrayBufferIssueDetailsBuilder<STATE | kIsWarningSet>& SetIsWarning(bool value) {
      static_assert(!(STATE & kIsWarningSet), "property isWarning should not have already been set");
      result_->SetIsWarning(value);
      return CastState<kIsWarningSet>();
    }

    SharedArrayBufferIssueDetailsBuilder<STATE | kTypeSet>& SetType(::autofill_assistant::audits::SharedArrayBufferIssueType value) {
      static_assert(!(STATE & kTypeSet), "property type should not have already been set");
      result_->SetType(value);
      return CastState<kTypeSet>();
    }

    std::unique_ptr<SharedArrayBufferIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SharedArrayBufferIssueDetails;
    SharedArrayBufferIssueDetailsBuilder() : result_(new SharedArrayBufferIssueDetails()) { }

    template<int STEP> SharedArrayBufferIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SharedArrayBufferIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SharedArrayBufferIssueDetails> result_;
  };

  static SharedArrayBufferIssueDetailsBuilder<0> Builder() {
    return SharedArrayBufferIssueDetailsBuilder<0>();
  }

 private:
  SharedArrayBufferIssueDetails() { }

  std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> source_code_location_;
  bool is_warning_;
  ::autofill_assistant::audits::SharedArrayBufferIssueType type_;
};


class TrustedWebActivityIssueDetails {
 public:
  static std::unique_ptr<TrustedWebActivityIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  TrustedWebActivityIssueDetails(const TrustedWebActivityIssueDetails&) = delete;
  TrustedWebActivityIssueDetails& operator=(const TrustedWebActivityIssueDetails&) = delete;
  ~TrustedWebActivityIssueDetails() { }

  // The url that triggers the violation.
  std::string GetUrl() const { return url_; }
  void SetUrl(const std::string& value) { url_ = value; }

  ::autofill_assistant::audits::TwaQualityEnforcementViolationType GetViolationType() const { return violation_type_; }
  void SetViolationType(::autofill_assistant::audits::TwaQualityEnforcementViolationType value) { violation_type_ = value; }

  bool HasHttpStatusCode() const { return !!http_status_code_; }
  int GetHttpStatusCode() const { DCHECK(HasHttpStatusCode()); return http_status_code_.value(); }
  void SetHttpStatusCode(int value) { http_status_code_ = value; }

  // The package name of the Trusted Web Activity client app. This field is
  // only used when violation type is kDigitalAssetLinks.
  bool HasPackageName() const { return !!package_name_; }
  std::string GetPackageName() const { DCHECK(HasPackageName()); return package_name_.value(); }
  void SetPackageName(const std::string& value) { package_name_ = value; }

  // The signature of the Trusted Web Activity client app. This field is only
  // used when violation type is kDigitalAssetLinks.
  bool HasSignature() const { return !!signature_; }
  std::string GetSignature() const { DCHECK(HasSignature()); return signature_.value(); }
  void SetSignature(const std::string& value) { signature_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<TrustedWebActivityIssueDetails> Clone() const;

  template<int STATE>
  class TrustedWebActivityIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kUrlSet = 1 << 1,
    kViolationTypeSet = 1 << 2,
      kAllRequiredFieldsSet = (kUrlSet | kViolationTypeSet | 0)
    };

    TrustedWebActivityIssueDetailsBuilder<STATE | kUrlSet>& SetUrl(const std::string& value) {
      static_assert(!(STATE & kUrlSet), "property url should not have already been set");
      result_->SetUrl(value);
      return CastState<kUrlSet>();
    }

    TrustedWebActivityIssueDetailsBuilder<STATE | kViolationTypeSet>& SetViolationType(::autofill_assistant::audits::TwaQualityEnforcementViolationType value) {
      static_assert(!(STATE & kViolationTypeSet), "property violationType should not have already been set");
      result_->SetViolationType(value);
      return CastState<kViolationTypeSet>();
    }

    TrustedWebActivityIssueDetailsBuilder<STATE>& SetHttpStatusCode(int value) {
      result_->SetHttpStatusCode(value);
      return *this;
    }

    TrustedWebActivityIssueDetailsBuilder<STATE>& SetPackageName(const std::string& value) {
      result_->SetPackageName(value);
      return *this;
    }

    TrustedWebActivityIssueDetailsBuilder<STATE>& SetSignature(const std::string& value) {
      result_->SetSignature(value);
      return *this;
    }

    std::unique_ptr<TrustedWebActivityIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class TrustedWebActivityIssueDetails;
    TrustedWebActivityIssueDetailsBuilder() : result_(new TrustedWebActivityIssueDetails()) { }

    template<int STEP> TrustedWebActivityIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<TrustedWebActivityIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<TrustedWebActivityIssueDetails> result_;
  };

  static TrustedWebActivityIssueDetailsBuilder<0> Builder() {
    return TrustedWebActivityIssueDetailsBuilder<0>();
  }

 private:
  TrustedWebActivityIssueDetails() { }

  std::string url_;
  ::autofill_assistant::audits::TwaQualityEnforcementViolationType violation_type_;
  absl::optional<int> http_status_code_;
  absl::optional<std::string> package_name_;
  absl::optional<std::string> signature_;
};


class LowTextContrastIssueDetails {
 public:
  static std::unique_ptr<LowTextContrastIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  LowTextContrastIssueDetails(const LowTextContrastIssueDetails&) = delete;
  LowTextContrastIssueDetails& operator=(const LowTextContrastIssueDetails&) = delete;
  ~LowTextContrastIssueDetails() { }

  int GetViolatingNodeId() const { return violating_node_id_; }
  void SetViolatingNodeId(int value) { violating_node_id_ = value; }

  std::string GetViolatingNodeSelector() const { return violating_node_selector_; }
  void SetViolatingNodeSelector(const std::string& value) { violating_node_selector_ = value; }

  double GetContrastRatio() const { return contrast_ratio_; }
  void SetContrastRatio(double value) { contrast_ratio_ = value; }

  double GetThresholdAA() const { return thresholdaa_; }
  void SetThresholdAA(double value) { thresholdaa_ = value; }

  double GetThresholdAAA() const { return thresholdaaa_; }
  void SetThresholdAAA(double value) { thresholdaaa_ = value; }

  std::string GetFontSize() const { return font_size_; }
  void SetFontSize(const std::string& value) { font_size_ = value; }

  std::string GetFontWeight() const { return font_weight_; }
  void SetFontWeight(const std::string& value) { font_weight_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<LowTextContrastIssueDetails> Clone() const;

  template<int STATE>
  class LowTextContrastIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kViolatingNodeIdSet = 1 << 1,
    kViolatingNodeSelectorSet = 1 << 2,
    kContrastRatioSet = 1 << 3,
    kThresholdAASet = 1 << 4,
    kThresholdAAASet = 1 << 5,
    kFontSizeSet = 1 << 6,
    kFontWeightSet = 1 << 7,
      kAllRequiredFieldsSet = (kViolatingNodeIdSet | kViolatingNodeSelectorSet | kContrastRatioSet | kThresholdAASet | kThresholdAAASet | kFontSizeSet | kFontWeightSet | 0)
    };

    LowTextContrastIssueDetailsBuilder<STATE | kViolatingNodeIdSet>& SetViolatingNodeId(int value) {
      static_assert(!(STATE & kViolatingNodeIdSet), "property violatingNodeId should not have already been set");
      result_->SetViolatingNodeId(value);
      return CastState<kViolatingNodeIdSet>();
    }

    LowTextContrastIssueDetailsBuilder<STATE | kViolatingNodeSelectorSet>& SetViolatingNodeSelector(const std::string& value) {
      static_assert(!(STATE & kViolatingNodeSelectorSet), "property violatingNodeSelector should not have already been set");
      result_->SetViolatingNodeSelector(value);
      return CastState<kViolatingNodeSelectorSet>();
    }

    LowTextContrastIssueDetailsBuilder<STATE | kContrastRatioSet>& SetContrastRatio(double value) {
      static_assert(!(STATE & kContrastRatioSet), "property contrastRatio should not have already been set");
      result_->SetContrastRatio(value);
      return CastState<kContrastRatioSet>();
    }

    LowTextContrastIssueDetailsBuilder<STATE | kThresholdAASet>& SetThresholdAA(double value) {
      static_assert(!(STATE & kThresholdAASet), "property thresholdAA should not have already been set");
      result_->SetThresholdAA(value);
      return CastState<kThresholdAASet>();
    }

    LowTextContrastIssueDetailsBuilder<STATE | kThresholdAAASet>& SetThresholdAAA(double value) {
      static_assert(!(STATE & kThresholdAAASet), "property thresholdAAA should not have already been set");
      result_->SetThresholdAAA(value);
      return CastState<kThresholdAAASet>();
    }

    LowTextContrastIssueDetailsBuilder<STATE | kFontSizeSet>& SetFontSize(const std::string& value) {
      static_assert(!(STATE & kFontSizeSet), "property fontSize should not have already been set");
      result_->SetFontSize(value);
      return CastState<kFontSizeSet>();
    }

    LowTextContrastIssueDetailsBuilder<STATE | kFontWeightSet>& SetFontWeight(const std::string& value) {
      static_assert(!(STATE & kFontWeightSet), "property fontWeight should not have already been set");
      result_->SetFontWeight(value);
      return CastState<kFontWeightSet>();
    }

    std::unique_ptr<LowTextContrastIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class LowTextContrastIssueDetails;
    LowTextContrastIssueDetailsBuilder() : result_(new LowTextContrastIssueDetails()) { }

    template<int STEP> LowTextContrastIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<LowTextContrastIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<LowTextContrastIssueDetails> result_;
  };

  static LowTextContrastIssueDetailsBuilder<0> Builder() {
    return LowTextContrastIssueDetailsBuilder<0>();
  }

 private:
  LowTextContrastIssueDetails() { }

  int violating_node_id_;
  std::string violating_node_selector_;
  double contrast_ratio_;
  double thresholdaa_;
  double thresholdaaa_;
  std::string font_size_;
  std::string font_weight_;
};


// Details for a CORS related issue, e.g. a warning or error related to
// CORS RFC1918 enforcement.
class CorsIssueDetails {
 public:
  static std::unique_ptr<CorsIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  CorsIssueDetails(const CorsIssueDetails&) = delete;
  CorsIssueDetails& operator=(const CorsIssueDetails&) = delete;
  ~CorsIssueDetails() { }

  const ::autofill_assistant::network::CorsErrorStatus* GetCorsErrorStatus() const { return cors_error_status_.get(); }
  void SetCorsErrorStatus(std::unique_ptr<::autofill_assistant::network::CorsErrorStatus> value) { cors_error_status_ = std::move(value); }

  bool GetIsWarning() const { return is_warning_; }
  void SetIsWarning(bool value) { is_warning_ = value; }

  const ::autofill_assistant::audits::AffectedRequest* GetRequest() const { return request_.get(); }
  void SetRequest(std::unique_ptr<::autofill_assistant::audits::AffectedRequest> value) { request_ = std::move(value); }

  bool HasLocation() const { return !!location_; }
  const ::autofill_assistant::audits::SourceCodeLocation* GetLocation() const { DCHECK(HasLocation()); return location_.value().get(); }
  void SetLocation(std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> value) { location_ = std::move(value); }

  bool HasInitiatorOrigin() const { return !!initiator_origin_; }
  std::string GetInitiatorOrigin() const { DCHECK(HasInitiatorOrigin()); return initiator_origin_.value(); }
  void SetInitiatorOrigin(const std::string& value) { initiator_origin_ = value; }

  bool HasResourceIPAddressSpace() const { return !!resourceip_address_space_; }
  ::autofill_assistant::network::IPAddressSpace GetResourceIPAddressSpace() const { DCHECK(HasResourceIPAddressSpace()); return resourceip_address_space_.value(); }
  void SetResourceIPAddressSpace(::autofill_assistant::network::IPAddressSpace value) { resourceip_address_space_ = value; }

  bool HasClientSecurityState() const { return !!client_security_state_; }
  const ::autofill_assistant::network::ClientSecurityState* GetClientSecurityState() const { DCHECK(HasClientSecurityState()); return client_security_state_.value().get(); }
  void SetClientSecurityState(std::unique_ptr<::autofill_assistant::network::ClientSecurityState> value) { client_security_state_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CorsIssueDetails> Clone() const;

  template<int STATE>
  class CorsIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCorsErrorStatusSet = 1 << 1,
    kIsWarningSet = 1 << 2,
    kRequestSet = 1 << 3,
      kAllRequiredFieldsSet = (kCorsErrorStatusSet | kIsWarningSet | kRequestSet | 0)
    };

    CorsIssueDetailsBuilder<STATE | kCorsErrorStatusSet>& SetCorsErrorStatus(std::unique_ptr<::autofill_assistant::network::CorsErrorStatus> value) {
      static_assert(!(STATE & kCorsErrorStatusSet), "property corsErrorStatus should not have already been set");
      result_->SetCorsErrorStatus(std::move(value));
      return CastState<kCorsErrorStatusSet>();
    }

    CorsIssueDetailsBuilder<STATE | kIsWarningSet>& SetIsWarning(bool value) {
      static_assert(!(STATE & kIsWarningSet), "property isWarning should not have already been set");
      result_->SetIsWarning(value);
      return CastState<kIsWarningSet>();
    }

    CorsIssueDetailsBuilder<STATE | kRequestSet>& SetRequest(std::unique_ptr<::autofill_assistant::audits::AffectedRequest> value) {
      static_assert(!(STATE & kRequestSet), "property request should not have already been set");
      result_->SetRequest(std::move(value));
      return CastState<kRequestSet>();
    }

    CorsIssueDetailsBuilder<STATE>& SetLocation(std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> value) {
      result_->SetLocation(std::move(value));
      return *this;
    }

    CorsIssueDetailsBuilder<STATE>& SetInitiatorOrigin(const std::string& value) {
      result_->SetInitiatorOrigin(value);
      return *this;
    }

    CorsIssueDetailsBuilder<STATE>& SetResourceIPAddressSpace(::autofill_assistant::network::IPAddressSpace value) {
      result_->SetResourceIPAddressSpace(value);
      return *this;
    }

    CorsIssueDetailsBuilder<STATE>& SetClientSecurityState(std::unique_ptr<::autofill_assistant::network::ClientSecurityState> value) {
      result_->SetClientSecurityState(std::move(value));
      return *this;
    }

    std::unique_ptr<CorsIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CorsIssueDetails;
    CorsIssueDetailsBuilder() : result_(new CorsIssueDetails()) { }

    template<int STEP> CorsIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CorsIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CorsIssueDetails> result_;
  };

  static CorsIssueDetailsBuilder<0> Builder() {
    return CorsIssueDetailsBuilder<0>();
  }

 private:
  CorsIssueDetails() { }

  std::unique_ptr<::autofill_assistant::network::CorsErrorStatus> cors_error_status_;
  bool is_warning_;
  std::unique_ptr<::autofill_assistant::audits::AffectedRequest> request_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation>> location_;
  absl::optional<std::string> initiator_origin_;
  absl::optional<::autofill_assistant::network::IPAddressSpace> resourceip_address_space_;
  absl::optional<std::unique_ptr<::autofill_assistant::network::ClientSecurityState>> client_security_state_;
};


// Details for issues around "Attribution Reporting API" usage.
// Explainer: https://github.com/WICG/attribution-reporting-api
class AttributionReportingIssueDetails {
 public:
  static std::unique_ptr<AttributionReportingIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  AttributionReportingIssueDetails(const AttributionReportingIssueDetails&) = delete;
  AttributionReportingIssueDetails& operator=(const AttributionReportingIssueDetails&) = delete;
  ~AttributionReportingIssueDetails() { }

  ::autofill_assistant::audits::AttributionReportingIssueType GetViolationType() const { return violation_type_; }
  void SetViolationType(::autofill_assistant::audits::AttributionReportingIssueType value) { violation_type_ = value; }

  bool HasRequest() const { return !!request_; }
  const ::autofill_assistant::audits::AffectedRequest* GetRequest() const { DCHECK(HasRequest()); return request_.value().get(); }
  void SetRequest(std::unique_ptr<::autofill_assistant::audits::AffectedRequest> value) { request_ = std::move(value); }

  bool HasViolatingNodeId() const { return !!violating_node_id_; }
  int GetViolatingNodeId() const { DCHECK(HasViolatingNodeId()); return violating_node_id_.value(); }
  void SetViolatingNodeId(int value) { violating_node_id_ = value; }

  bool HasInvalidParameter() const { return !!invalid_parameter_; }
  std::string GetInvalidParameter() const { DCHECK(HasInvalidParameter()); return invalid_parameter_.value(); }
  void SetInvalidParameter(const std::string& value) { invalid_parameter_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<AttributionReportingIssueDetails> Clone() const;

  template<int STATE>
  class AttributionReportingIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kViolationTypeSet = 1 << 1,
      kAllRequiredFieldsSet = (kViolationTypeSet | 0)
    };

    AttributionReportingIssueDetailsBuilder<STATE | kViolationTypeSet>& SetViolationType(::autofill_assistant::audits::AttributionReportingIssueType value) {
      static_assert(!(STATE & kViolationTypeSet), "property violationType should not have already been set");
      result_->SetViolationType(value);
      return CastState<kViolationTypeSet>();
    }

    AttributionReportingIssueDetailsBuilder<STATE>& SetRequest(std::unique_ptr<::autofill_assistant::audits::AffectedRequest> value) {
      result_->SetRequest(std::move(value));
      return *this;
    }

    AttributionReportingIssueDetailsBuilder<STATE>& SetViolatingNodeId(int value) {
      result_->SetViolatingNodeId(value);
      return *this;
    }

    AttributionReportingIssueDetailsBuilder<STATE>& SetInvalidParameter(const std::string& value) {
      result_->SetInvalidParameter(value);
      return *this;
    }

    std::unique_ptr<AttributionReportingIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class AttributionReportingIssueDetails;
    AttributionReportingIssueDetailsBuilder() : result_(new AttributionReportingIssueDetails()) { }

    template<int STEP> AttributionReportingIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<AttributionReportingIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<AttributionReportingIssueDetails> result_;
  };

  static AttributionReportingIssueDetailsBuilder<0> Builder() {
    return AttributionReportingIssueDetailsBuilder<0>();
  }

 private:
  AttributionReportingIssueDetails() { }

  ::autofill_assistant::audits::AttributionReportingIssueType violation_type_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::AffectedRequest>> request_;
  absl::optional<int> violating_node_id_;
  absl::optional<std::string> invalid_parameter_;
};


// Details for issues about documents in Quirks Mode
// or Limited Quirks Mode that affects page layouting.
class QuirksModeIssueDetails {
 public:
  static std::unique_ptr<QuirksModeIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  QuirksModeIssueDetails(const QuirksModeIssueDetails&) = delete;
  QuirksModeIssueDetails& operator=(const QuirksModeIssueDetails&) = delete;
  ~QuirksModeIssueDetails() { }

  // If false, it means the document's mode is "quirks"
  // instead of "limited-quirks".
  bool GetIsLimitedQuirksMode() const { return is_limited_quirks_mode_; }
  void SetIsLimitedQuirksMode(bool value) { is_limited_quirks_mode_ = value; }

  int GetDocumentNodeId() const { return document_node_id_; }
  void SetDocumentNodeId(int value) { document_node_id_ = value; }

  std::string GetUrl() const { return url_; }
  void SetUrl(const std::string& value) { url_ = value; }

  std::string GetFrameId() const { return frame_id_; }
  void SetFrameId(const std::string& value) { frame_id_ = value; }

  std::string GetLoaderId() const { return loader_id_; }
  void SetLoaderId(const std::string& value) { loader_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<QuirksModeIssueDetails> Clone() const;

  template<int STATE>
  class QuirksModeIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kIsLimitedQuirksModeSet = 1 << 1,
    kDocumentNodeIdSet = 1 << 2,
    kUrlSet = 1 << 3,
    kFrameIdSet = 1 << 4,
    kLoaderIdSet = 1 << 5,
      kAllRequiredFieldsSet = (kIsLimitedQuirksModeSet | kDocumentNodeIdSet | kUrlSet | kFrameIdSet | kLoaderIdSet | 0)
    };

    QuirksModeIssueDetailsBuilder<STATE | kIsLimitedQuirksModeSet>& SetIsLimitedQuirksMode(bool value) {
      static_assert(!(STATE & kIsLimitedQuirksModeSet), "property isLimitedQuirksMode should not have already been set");
      result_->SetIsLimitedQuirksMode(value);
      return CastState<kIsLimitedQuirksModeSet>();
    }

    QuirksModeIssueDetailsBuilder<STATE | kDocumentNodeIdSet>& SetDocumentNodeId(int value) {
      static_assert(!(STATE & kDocumentNodeIdSet), "property documentNodeId should not have already been set");
      result_->SetDocumentNodeId(value);
      return CastState<kDocumentNodeIdSet>();
    }

    QuirksModeIssueDetailsBuilder<STATE | kUrlSet>& SetUrl(const std::string& value) {
      static_assert(!(STATE & kUrlSet), "property url should not have already been set");
      result_->SetUrl(value);
      return CastState<kUrlSet>();
    }

    QuirksModeIssueDetailsBuilder<STATE | kFrameIdSet>& SetFrameId(const std::string& value) {
      static_assert(!(STATE & kFrameIdSet), "property frameId should not have already been set");
      result_->SetFrameId(value);
      return CastState<kFrameIdSet>();
    }

    QuirksModeIssueDetailsBuilder<STATE | kLoaderIdSet>& SetLoaderId(const std::string& value) {
      static_assert(!(STATE & kLoaderIdSet), "property loaderId should not have already been set");
      result_->SetLoaderId(value);
      return CastState<kLoaderIdSet>();
    }

    std::unique_ptr<QuirksModeIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class QuirksModeIssueDetails;
    QuirksModeIssueDetailsBuilder() : result_(new QuirksModeIssueDetails()) { }

    template<int STEP> QuirksModeIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<QuirksModeIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<QuirksModeIssueDetails> result_;
  };

  static QuirksModeIssueDetailsBuilder<0> Builder() {
    return QuirksModeIssueDetailsBuilder<0>();
  }

 private:
  QuirksModeIssueDetails() { }

  bool is_limited_quirks_mode_;
  int document_node_id_;
  std::string url_;
  std::string frame_id_;
  std::string loader_id_;
};


class NavigatorUserAgentIssueDetails {
 public:
  static std::unique_ptr<NavigatorUserAgentIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  NavigatorUserAgentIssueDetails(const NavigatorUserAgentIssueDetails&) = delete;
  NavigatorUserAgentIssueDetails& operator=(const NavigatorUserAgentIssueDetails&) = delete;
  ~NavigatorUserAgentIssueDetails() { }

  std::string GetUrl() const { return url_; }
  void SetUrl(const std::string& value) { url_ = value; }

  bool HasLocation() const { return !!location_; }
  const ::autofill_assistant::audits::SourceCodeLocation* GetLocation() const { DCHECK(HasLocation()); return location_.value().get(); }
  void SetLocation(std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> value) { location_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<NavigatorUserAgentIssueDetails> Clone() const;

  template<int STATE>
  class NavigatorUserAgentIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kUrlSet = 1 << 1,
      kAllRequiredFieldsSet = (kUrlSet | 0)
    };

    NavigatorUserAgentIssueDetailsBuilder<STATE | kUrlSet>& SetUrl(const std::string& value) {
      static_assert(!(STATE & kUrlSet), "property url should not have already been set");
      result_->SetUrl(value);
      return CastState<kUrlSet>();
    }

    NavigatorUserAgentIssueDetailsBuilder<STATE>& SetLocation(std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> value) {
      result_->SetLocation(std::move(value));
      return *this;
    }

    std::unique_ptr<NavigatorUserAgentIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class NavigatorUserAgentIssueDetails;
    NavigatorUserAgentIssueDetailsBuilder() : result_(new NavigatorUserAgentIssueDetails()) { }

    template<int STEP> NavigatorUserAgentIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<NavigatorUserAgentIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<NavigatorUserAgentIssueDetails> result_;
  };

  static NavigatorUserAgentIssueDetailsBuilder<0> Builder() {
    return NavigatorUserAgentIssueDetailsBuilder<0>();
  }

 private:
  NavigatorUserAgentIssueDetails() { }

  std::string url_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation>> location_;
};


// Depending on the concrete errorType, different properties are set.
class GenericIssueDetails {
 public:
  static std::unique_ptr<GenericIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  GenericIssueDetails(const GenericIssueDetails&) = delete;
  GenericIssueDetails& operator=(const GenericIssueDetails&) = delete;
  ~GenericIssueDetails() { }

  // Issues with the same errorType are aggregated in the frontend.
  ::autofill_assistant::audits::GenericIssueErrorType GetErrorType() const { return error_type_; }
  void SetErrorType(::autofill_assistant::audits::GenericIssueErrorType value) { error_type_ = value; }

  bool HasFrameId() const { return !!frame_id_; }
  std::string GetFrameId() const { DCHECK(HasFrameId()); return frame_id_.value(); }
  void SetFrameId(const std::string& value) { frame_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GenericIssueDetails> Clone() const;

  template<int STATE>
  class GenericIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kErrorTypeSet = 1 << 1,
      kAllRequiredFieldsSet = (kErrorTypeSet | 0)
    };

    GenericIssueDetailsBuilder<STATE | kErrorTypeSet>& SetErrorType(::autofill_assistant::audits::GenericIssueErrorType value) {
      static_assert(!(STATE & kErrorTypeSet), "property errorType should not have already been set");
      result_->SetErrorType(value);
      return CastState<kErrorTypeSet>();
    }

    GenericIssueDetailsBuilder<STATE>& SetFrameId(const std::string& value) {
      result_->SetFrameId(value);
      return *this;
    }

    std::unique_ptr<GenericIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GenericIssueDetails;
    GenericIssueDetailsBuilder() : result_(new GenericIssueDetails()) { }

    template<int STEP> GenericIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GenericIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GenericIssueDetails> result_;
  };

  static GenericIssueDetailsBuilder<0> Builder() {
    return GenericIssueDetailsBuilder<0>();
  }

 private:
  GenericIssueDetails() { }

  ::autofill_assistant::audits::GenericIssueErrorType error_type_;
  absl::optional<std::string> frame_id_;
};


// This issue tracks information needed to print a deprecation message.
// https://source.chromium.org/chromium/chromium/src/+/main:third_party/blink/renderer/core/frame/third_party/blink/renderer/core/frame/deprecation/README.md
class DeprecationIssueDetails {
 public:
  static std::unique_ptr<DeprecationIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  DeprecationIssueDetails(const DeprecationIssueDetails&) = delete;
  DeprecationIssueDetails& operator=(const DeprecationIssueDetails&) = delete;
  ~DeprecationIssueDetails() { }

  bool HasAffectedFrame() const { return !!affected_frame_; }
  const ::autofill_assistant::audits::AffectedFrame* GetAffectedFrame() const { DCHECK(HasAffectedFrame()); return affected_frame_.value().get(); }
  void SetAffectedFrame(std::unique_ptr<::autofill_assistant::audits::AffectedFrame> value) { affected_frame_ = std::move(value); }

  const ::autofill_assistant::audits::SourceCodeLocation* GetSourceCodeLocation() const { return source_code_location_.get(); }
  void SetSourceCodeLocation(std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> value) { source_code_location_ = std::move(value); }

  ::autofill_assistant::audits::DeprecationIssueType GetType() const { return type_; }
  void SetType(::autofill_assistant::audits::DeprecationIssueType value) { type_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<DeprecationIssueDetails> Clone() const;

  template<int STATE>
  class DeprecationIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSourceCodeLocationSet = 1 << 1,
    kTypeSet = 1 << 2,
      kAllRequiredFieldsSet = (kSourceCodeLocationSet | kTypeSet | 0)
    };

    DeprecationIssueDetailsBuilder<STATE>& SetAffectedFrame(std::unique_ptr<::autofill_assistant::audits::AffectedFrame> value) {
      result_->SetAffectedFrame(std::move(value));
      return *this;
    }

    DeprecationIssueDetailsBuilder<STATE | kSourceCodeLocationSet>& SetSourceCodeLocation(std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> value) {
      static_assert(!(STATE & kSourceCodeLocationSet), "property sourceCodeLocation should not have already been set");
      result_->SetSourceCodeLocation(std::move(value));
      return CastState<kSourceCodeLocationSet>();
    }

    DeprecationIssueDetailsBuilder<STATE | kTypeSet>& SetType(::autofill_assistant::audits::DeprecationIssueType value) {
      static_assert(!(STATE & kTypeSet), "property type should not have already been set");
      result_->SetType(value);
      return CastState<kTypeSet>();
    }

    std::unique_ptr<DeprecationIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class DeprecationIssueDetails;
    DeprecationIssueDetailsBuilder() : result_(new DeprecationIssueDetails()) { }

    template<int STEP> DeprecationIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<DeprecationIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<DeprecationIssueDetails> result_;
  };

  static DeprecationIssueDetailsBuilder<0> Builder() {
    return DeprecationIssueDetailsBuilder<0>();
  }

 private:
  DeprecationIssueDetails() { }

  absl::optional<std::unique_ptr<::autofill_assistant::audits::AffectedFrame>> affected_frame_;
  std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> source_code_location_;
  ::autofill_assistant::audits::DeprecationIssueType type_;
};


class FederatedAuthRequestIssueDetails {
 public:
  static std::unique_ptr<FederatedAuthRequestIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  FederatedAuthRequestIssueDetails(const FederatedAuthRequestIssueDetails&) = delete;
  FederatedAuthRequestIssueDetails& operator=(const FederatedAuthRequestIssueDetails&) = delete;
  ~FederatedAuthRequestIssueDetails() { }

  ::autofill_assistant::audits::FederatedAuthRequestIssueReason GetFederatedAuthRequestIssueReason() const { return federated_auth_request_issue_reason_; }
  void SetFederatedAuthRequestIssueReason(::autofill_assistant::audits::FederatedAuthRequestIssueReason value) { federated_auth_request_issue_reason_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<FederatedAuthRequestIssueDetails> Clone() const;

  template<int STATE>
  class FederatedAuthRequestIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kFederatedAuthRequestIssueReasonSet = 1 << 1,
      kAllRequiredFieldsSet = (kFederatedAuthRequestIssueReasonSet | 0)
    };

    FederatedAuthRequestIssueDetailsBuilder<STATE | kFederatedAuthRequestIssueReasonSet>& SetFederatedAuthRequestIssueReason(::autofill_assistant::audits::FederatedAuthRequestIssueReason value) {
      static_assert(!(STATE & kFederatedAuthRequestIssueReasonSet), "property federatedAuthRequestIssueReason should not have already been set");
      result_->SetFederatedAuthRequestIssueReason(value);
      return CastState<kFederatedAuthRequestIssueReasonSet>();
    }

    std::unique_ptr<FederatedAuthRequestIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class FederatedAuthRequestIssueDetails;
    FederatedAuthRequestIssueDetailsBuilder() : result_(new FederatedAuthRequestIssueDetails()) { }

    template<int STEP> FederatedAuthRequestIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<FederatedAuthRequestIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<FederatedAuthRequestIssueDetails> result_;
  };

  static FederatedAuthRequestIssueDetailsBuilder<0> Builder() {
    return FederatedAuthRequestIssueDetailsBuilder<0>();
  }

 private:
  FederatedAuthRequestIssueDetails() { }

  ::autofill_assistant::audits::FederatedAuthRequestIssueReason federated_auth_request_issue_reason_;
};


// This issue tracks client hints related issues. It's used to deprecate old
// features, encourage the use of new ones, and provide general guidance.
class ClientHintIssueDetails {
 public:
  static std::unique_ptr<ClientHintIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  ClientHintIssueDetails(const ClientHintIssueDetails&) = delete;
  ClientHintIssueDetails& operator=(const ClientHintIssueDetails&) = delete;
  ~ClientHintIssueDetails() { }

  const ::autofill_assistant::audits::SourceCodeLocation* GetSourceCodeLocation() const { return source_code_location_.get(); }
  void SetSourceCodeLocation(std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> value) { source_code_location_ = std::move(value); }

  ::autofill_assistant::audits::ClientHintIssueReason GetClientHintIssueReason() const { return client_hint_issue_reason_; }
  void SetClientHintIssueReason(::autofill_assistant::audits::ClientHintIssueReason value) { client_hint_issue_reason_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClientHintIssueDetails> Clone() const;

  template<int STATE>
  class ClientHintIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kSourceCodeLocationSet = 1 << 1,
    kClientHintIssueReasonSet = 1 << 2,
      kAllRequiredFieldsSet = (kSourceCodeLocationSet | kClientHintIssueReasonSet | 0)
    };

    ClientHintIssueDetailsBuilder<STATE | kSourceCodeLocationSet>& SetSourceCodeLocation(std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> value) {
      static_assert(!(STATE & kSourceCodeLocationSet), "property sourceCodeLocation should not have already been set");
      result_->SetSourceCodeLocation(std::move(value));
      return CastState<kSourceCodeLocationSet>();
    }

    ClientHintIssueDetailsBuilder<STATE | kClientHintIssueReasonSet>& SetClientHintIssueReason(::autofill_assistant::audits::ClientHintIssueReason value) {
      static_assert(!(STATE & kClientHintIssueReasonSet), "property clientHintIssueReason should not have already been set");
      result_->SetClientHintIssueReason(value);
      return CastState<kClientHintIssueReasonSet>();
    }

    std::unique_ptr<ClientHintIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClientHintIssueDetails;
    ClientHintIssueDetailsBuilder() : result_(new ClientHintIssueDetails()) { }

    template<int STEP> ClientHintIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClientHintIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClientHintIssueDetails> result_;
  };

  static ClientHintIssueDetailsBuilder<0> Builder() {
    return ClientHintIssueDetailsBuilder<0>();
  }

 private:
  ClientHintIssueDetails() { }

  std::unique_ptr<::autofill_assistant::audits::SourceCodeLocation> source_code_location_;
  ::autofill_assistant::audits::ClientHintIssueReason client_hint_issue_reason_;
};


// This struct holds a list of optional fields with additional information
// specific to the kind of issue. When adding a new issue code, please also
// add a new optional field to this type.
class InspectorIssueDetails {
 public:
  static std::unique_ptr<InspectorIssueDetails> Parse(const base::Value& value, ErrorReporter* errors);
  InspectorIssueDetails(const InspectorIssueDetails&) = delete;
  InspectorIssueDetails& operator=(const InspectorIssueDetails&) = delete;
  ~InspectorIssueDetails() { }

  bool HasCookieIssueDetails() const { return !!cookie_issue_details_; }
  const ::autofill_assistant::audits::CookieIssueDetails* GetCookieIssueDetails() const { DCHECK(HasCookieIssueDetails()); return cookie_issue_details_.value().get(); }
  void SetCookieIssueDetails(std::unique_ptr<::autofill_assistant::audits::CookieIssueDetails> value) { cookie_issue_details_ = std::move(value); }

  bool HasMixedContentIssueDetails() const { return !!mixed_content_issue_details_; }
  const ::autofill_assistant::audits::MixedContentIssueDetails* GetMixedContentIssueDetails() const { DCHECK(HasMixedContentIssueDetails()); return mixed_content_issue_details_.value().get(); }
  void SetMixedContentIssueDetails(std::unique_ptr<::autofill_assistant::audits::MixedContentIssueDetails> value) { mixed_content_issue_details_ = std::move(value); }

  bool HasBlockedByResponseIssueDetails() const { return !!blocked_by_response_issue_details_; }
  const ::autofill_assistant::audits::BlockedByResponseIssueDetails* GetBlockedByResponseIssueDetails() const { DCHECK(HasBlockedByResponseIssueDetails()); return blocked_by_response_issue_details_.value().get(); }
  void SetBlockedByResponseIssueDetails(std::unique_ptr<::autofill_assistant::audits::BlockedByResponseIssueDetails> value) { blocked_by_response_issue_details_ = std::move(value); }

  bool HasHeavyAdIssueDetails() const { return !!heavy_ad_issue_details_; }
  const ::autofill_assistant::audits::HeavyAdIssueDetails* GetHeavyAdIssueDetails() const { DCHECK(HasHeavyAdIssueDetails()); return heavy_ad_issue_details_.value().get(); }
  void SetHeavyAdIssueDetails(std::unique_ptr<::autofill_assistant::audits::HeavyAdIssueDetails> value) { heavy_ad_issue_details_ = std::move(value); }

  bool HasContentSecurityPolicyIssueDetails() const { return !!content_security_policy_issue_details_; }
  const ::autofill_assistant::audits::ContentSecurityPolicyIssueDetails* GetContentSecurityPolicyIssueDetails() const { DCHECK(HasContentSecurityPolicyIssueDetails()); return content_security_policy_issue_details_.value().get(); }
  void SetContentSecurityPolicyIssueDetails(std::unique_ptr<::autofill_assistant::audits::ContentSecurityPolicyIssueDetails> value) { content_security_policy_issue_details_ = std::move(value); }

  bool HasSharedArrayBufferIssueDetails() const { return !!shared_array_buffer_issue_details_; }
  const ::autofill_assistant::audits::SharedArrayBufferIssueDetails* GetSharedArrayBufferIssueDetails() const { DCHECK(HasSharedArrayBufferIssueDetails()); return shared_array_buffer_issue_details_.value().get(); }
  void SetSharedArrayBufferIssueDetails(std::unique_ptr<::autofill_assistant::audits::SharedArrayBufferIssueDetails> value) { shared_array_buffer_issue_details_ = std::move(value); }

  bool HasTwaQualityEnforcementDetails() const { return !!twa_quality_enforcement_details_; }
  const ::autofill_assistant::audits::TrustedWebActivityIssueDetails* GetTwaQualityEnforcementDetails() const { DCHECK(HasTwaQualityEnforcementDetails()); return twa_quality_enforcement_details_.value().get(); }
  void SetTwaQualityEnforcementDetails(std::unique_ptr<::autofill_assistant::audits::TrustedWebActivityIssueDetails> value) { twa_quality_enforcement_details_ = std::move(value); }

  bool HasLowTextContrastIssueDetails() const { return !!low_text_contrast_issue_details_; }
  const ::autofill_assistant::audits::LowTextContrastIssueDetails* GetLowTextContrastIssueDetails() const { DCHECK(HasLowTextContrastIssueDetails()); return low_text_contrast_issue_details_.value().get(); }
  void SetLowTextContrastIssueDetails(std::unique_ptr<::autofill_assistant::audits::LowTextContrastIssueDetails> value) { low_text_contrast_issue_details_ = std::move(value); }

  bool HasCorsIssueDetails() const { return !!cors_issue_details_; }
  const ::autofill_assistant::audits::CorsIssueDetails* GetCorsIssueDetails() const { DCHECK(HasCorsIssueDetails()); return cors_issue_details_.value().get(); }
  void SetCorsIssueDetails(std::unique_ptr<::autofill_assistant::audits::CorsIssueDetails> value) { cors_issue_details_ = std::move(value); }

  bool HasAttributionReportingIssueDetails() const { return !!attribution_reporting_issue_details_; }
  const ::autofill_assistant::audits::AttributionReportingIssueDetails* GetAttributionReportingIssueDetails() const { DCHECK(HasAttributionReportingIssueDetails()); return attribution_reporting_issue_details_.value().get(); }
  void SetAttributionReportingIssueDetails(std::unique_ptr<::autofill_assistant::audits::AttributionReportingIssueDetails> value) { attribution_reporting_issue_details_ = std::move(value); }

  bool HasQuirksModeIssueDetails() const { return !!quirks_mode_issue_details_; }
  const ::autofill_assistant::audits::QuirksModeIssueDetails* GetQuirksModeIssueDetails() const { DCHECK(HasQuirksModeIssueDetails()); return quirks_mode_issue_details_.value().get(); }
  void SetQuirksModeIssueDetails(std::unique_ptr<::autofill_assistant::audits::QuirksModeIssueDetails> value) { quirks_mode_issue_details_ = std::move(value); }

  bool HasNavigatorUserAgentIssueDetails() const { return !!navigator_user_agent_issue_details_; }
  const ::autofill_assistant::audits::NavigatorUserAgentIssueDetails* GetNavigatorUserAgentIssueDetails() const { DCHECK(HasNavigatorUserAgentIssueDetails()); return navigator_user_agent_issue_details_.value().get(); }
  void SetNavigatorUserAgentIssueDetails(std::unique_ptr<::autofill_assistant::audits::NavigatorUserAgentIssueDetails> value) { navigator_user_agent_issue_details_ = std::move(value); }

  bool HasGenericIssueDetails() const { return !!generic_issue_details_; }
  const ::autofill_assistant::audits::GenericIssueDetails* GetGenericIssueDetails() const { DCHECK(HasGenericIssueDetails()); return generic_issue_details_.value().get(); }
  void SetGenericIssueDetails(std::unique_ptr<::autofill_assistant::audits::GenericIssueDetails> value) { generic_issue_details_ = std::move(value); }

  bool HasDeprecationIssueDetails() const { return !!deprecation_issue_details_; }
  const ::autofill_assistant::audits::DeprecationIssueDetails* GetDeprecationIssueDetails() const { DCHECK(HasDeprecationIssueDetails()); return deprecation_issue_details_.value().get(); }
  void SetDeprecationIssueDetails(std::unique_ptr<::autofill_assistant::audits::DeprecationIssueDetails> value) { deprecation_issue_details_ = std::move(value); }

  bool HasClientHintIssueDetails() const { return !!client_hint_issue_details_; }
  const ::autofill_assistant::audits::ClientHintIssueDetails* GetClientHintIssueDetails() const { DCHECK(HasClientHintIssueDetails()); return client_hint_issue_details_.value().get(); }
  void SetClientHintIssueDetails(std::unique_ptr<::autofill_assistant::audits::ClientHintIssueDetails> value) { client_hint_issue_details_ = std::move(value); }

  bool HasFederatedAuthRequestIssueDetails() const { return !!federated_auth_request_issue_details_; }
  const ::autofill_assistant::audits::FederatedAuthRequestIssueDetails* GetFederatedAuthRequestIssueDetails() const { DCHECK(HasFederatedAuthRequestIssueDetails()); return federated_auth_request_issue_details_.value().get(); }
  void SetFederatedAuthRequestIssueDetails(std::unique_ptr<::autofill_assistant::audits::FederatedAuthRequestIssueDetails> value) { federated_auth_request_issue_details_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<InspectorIssueDetails> Clone() const;

  template<int STATE>
  class InspectorIssueDetailsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    InspectorIssueDetailsBuilder<STATE>& SetCookieIssueDetails(std::unique_ptr<::autofill_assistant::audits::CookieIssueDetails> value) {
      result_->SetCookieIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetMixedContentIssueDetails(std::unique_ptr<::autofill_assistant::audits::MixedContentIssueDetails> value) {
      result_->SetMixedContentIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetBlockedByResponseIssueDetails(std::unique_ptr<::autofill_assistant::audits::BlockedByResponseIssueDetails> value) {
      result_->SetBlockedByResponseIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetHeavyAdIssueDetails(std::unique_ptr<::autofill_assistant::audits::HeavyAdIssueDetails> value) {
      result_->SetHeavyAdIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetContentSecurityPolicyIssueDetails(std::unique_ptr<::autofill_assistant::audits::ContentSecurityPolicyIssueDetails> value) {
      result_->SetContentSecurityPolicyIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetSharedArrayBufferIssueDetails(std::unique_ptr<::autofill_assistant::audits::SharedArrayBufferIssueDetails> value) {
      result_->SetSharedArrayBufferIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetTwaQualityEnforcementDetails(std::unique_ptr<::autofill_assistant::audits::TrustedWebActivityIssueDetails> value) {
      result_->SetTwaQualityEnforcementDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetLowTextContrastIssueDetails(std::unique_ptr<::autofill_assistant::audits::LowTextContrastIssueDetails> value) {
      result_->SetLowTextContrastIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetCorsIssueDetails(std::unique_ptr<::autofill_assistant::audits::CorsIssueDetails> value) {
      result_->SetCorsIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetAttributionReportingIssueDetails(std::unique_ptr<::autofill_assistant::audits::AttributionReportingIssueDetails> value) {
      result_->SetAttributionReportingIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetQuirksModeIssueDetails(std::unique_ptr<::autofill_assistant::audits::QuirksModeIssueDetails> value) {
      result_->SetQuirksModeIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetNavigatorUserAgentIssueDetails(std::unique_ptr<::autofill_assistant::audits::NavigatorUserAgentIssueDetails> value) {
      result_->SetNavigatorUserAgentIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetGenericIssueDetails(std::unique_ptr<::autofill_assistant::audits::GenericIssueDetails> value) {
      result_->SetGenericIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetDeprecationIssueDetails(std::unique_ptr<::autofill_assistant::audits::DeprecationIssueDetails> value) {
      result_->SetDeprecationIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetClientHintIssueDetails(std::unique_ptr<::autofill_assistant::audits::ClientHintIssueDetails> value) {
      result_->SetClientHintIssueDetails(std::move(value));
      return *this;
    }

    InspectorIssueDetailsBuilder<STATE>& SetFederatedAuthRequestIssueDetails(std::unique_ptr<::autofill_assistant::audits::FederatedAuthRequestIssueDetails> value) {
      result_->SetFederatedAuthRequestIssueDetails(std::move(value));
      return *this;
    }

    std::unique_ptr<InspectorIssueDetails> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class InspectorIssueDetails;
    InspectorIssueDetailsBuilder() : result_(new InspectorIssueDetails()) { }

    template<int STEP> InspectorIssueDetailsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<InspectorIssueDetailsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<InspectorIssueDetails> result_;
  };

  static InspectorIssueDetailsBuilder<0> Builder() {
    return InspectorIssueDetailsBuilder<0>();
  }

 private:
  InspectorIssueDetails() { }

  absl::optional<std::unique_ptr<::autofill_assistant::audits::CookieIssueDetails>> cookie_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::MixedContentIssueDetails>> mixed_content_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::BlockedByResponseIssueDetails>> blocked_by_response_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::HeavyAdIssueDetails>> heavy_ad_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::ContentSecurityPolicyIssueDetails>> content_security_policy_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::SharedArrayBufferIssueDetails>> shared_array_buffer_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::TrustedWebActivityIssueDetails>> twa_quality_enforcement_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::LowTextContrastIssueDetails>> low_text_contrast_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::CorsIssueDetails>> cors_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::AttributionReportingIssueDetails>> attribution_reporting_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::QuirksModeIssueDetails>> quirks_mode_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::NavigatorUserAgentIssueDetails>> navigator_user_agent_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::GenericIssueDetails>> generic_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::DeprecationIssueDetails>> deprecation_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::ClientHintIssueDetails>> client_hint_issue_details_;
  absl::optional<std::unique_ptr<::autofill_assistant::audits::FederatedAuthRequestIssueDetails>> federated_auth_request_issue_details_;
};


// An inspector issue reported from the back-end.
class InspectorIssue {
 public:
  static std::unique_ptr<InspectorIssue> Parse(const base::Value& value, ErrorReporter* errors);
  InspectorIssue(const InspectorIssue&) = delete;
  InspectorIssue& operator=(const InspectorIssue&) = delete;
  ~InspectorIssue() { }

  ::autofill_assistant::audits::InspectorIssueCode GetCode() const { return code_; }
  void SetCode(::autofill_assistant::audits::InspectorIssueCode value) { code_ = value; }

  const ::autofill_assistant::audits::InspectorIssueDetails* GetDetails() const { return details_.get(); }
  void SetDetails(std::unique_ptr<::autofill_assistant::audits::InspectorIssueDetails> value) { details_ = std::move(value); }

  // A unique id for this issue. May be omitted if no other entity (e.g.
  // exception, CDP message, etc.) is referencing this issue.
  bool HasIssueId() const { return !!issue_id_; }
  std::string GetIssueId() const { DCHECK(HasIssueId()); return issue_id_.value(); }
  void SetIssueId(const std::string& value) { issue_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<InspectorIssue> Clone() const;

  template<int STATE>
  class InspectorIssueBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCodeSet = 1 << 1,
    kDetailsSet = 1 << 2,
      kAllRequiredFieldsSet = (kCodeSet | kDetailsSet | 0)
    };

    InspectorIssueBuilder<STATE | kCodeSet>& SetCode(::autofill_assistant::audits::InspectorIssueCode value) {
      static_assert(!(STATE & kCodeSet), "property code should not have already been set");
      result_->SetCode(value);
      return CastState<kCodeSet>();
    }

    InspectorIssueBuilder<STATE | kDetailsSet>& SetDetails(std::unique_ptr<::autofill_assistant::audits::InspectorIssueDetails> value) {
      static_assert(!(STATE & kDetailsSet), "property details should not have already been set");
      result_->SetDetails(std::move(value));
      return CastState<kDetailsSet>();
    }

    InspectorIssueBuilder<STATE>& SetIssueId(const std::string& value) {
      result_->SetIssueId(value);
      return *this;
    }

    std::unique_ptr<InspectorIssue> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class InspectorIssue;
    InspectorIssueBuilder() : result_(new InspectorIssue()) { }

    template<int STEP> InspectorIssueBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<InspectorIssueBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<InspectorIssue> result_;
  };

  static InspectorIssueBuilder<0> Builder() {
    return InspectorIssueBuilder<0>();
  }

 private:
  InspectorIssue() { }

  ::autofill_assistant::audits::InspectorIssueCode code_;
  std::unique_ptr<::autofill_assistant::audits::InspectorIssueDetails> details_;
  absl::optional<std::string> issue_id_;
};


// Parameters for the GetEncodedResponse command.
class GetEncodedResponseParams {
 public:
  static std::unique_ptr<GetEncodedResponseParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetEncodedResponseParams(const GetEncodedResponseParams&) = delete;
  GetEncodedResponseParams& operator=(const GetEncodedResponseParams&) = delete;
  ~GetEncodedResponseParams() { }

  // Identifier of the network request to get content for.
  std::string GetRequestId() const { return request_id_; }
  void SetRequestId(const std::string& value) { request_id_ = value; }

  // The encoding to use.
  ::autofill_assistant::audits::GetEncodedResponseEncoding GetEncoding() const { return encoding_; }
  void SetEncoding(::autofill_assistant::audits::GetEncodedResponseEncoding value) { encoding_ = value; }

  // The quality of the encoding (0-1). (defaults to 1)
  bool HasQuality() const { return !!quality_; }
  double GetQuality() const { DCHECK(HasQuality()); return quality_.value(); }
  void SetQuality(double value) { quality_ = value; }

  // Whether to only return the size information (defaults to false).
  bool HasSizeOnly() const { return !!size_only_; }
  bool GetSizeOnly() const { DCHECK(HasSizeOnly()); return size_only_.value(); }
  void SetSizeOnly(bool value) { size_only_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetEncodedResponseParams> Clone() const;

  template<int STATE>
  class GetEncodedResponseParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kRequestIdSet = 1 << 1,
    kEncodingSet = 1 << 2,
      kAllRequiredFieldsSet = (kRequestIdSet | kEncodingSet | 0)
    };

    GetEncodedResponseParamsBuilder<STATE | kRequestIdSet>& SetRequestId(const std::string& value) {
      static_assert(!(STATE & kRequestIdSet), "property requestId should not have already been set");
      result_->SetRequestId(value);
      return CastState<kRequestIdSet>();
    }

    GetEncodedResponseParamsBuilder<STATE | kEncodingSet>& SetEncoding(::autofill_assistant::audits::GetEncodedResponseEncoding value) {
      static_assert(!(STATE & kEncodingSet), "property encoding should not have already been set");
      result_->SetEncoding(value);
      return CastState<kEncodingSet>();
    }

    GetEncodedResponseParamsBuilder<STATE>& SetQuality(double value) {
      result_->SetQuality(value);
      return *this;
    }

    GetEncodedResponseParamsBuilder<STATE>& SetSizeOnly(bool value) {
      result_->SetSizeOnly(value);
      return *this;
    }

    std::unique_ptr<GetEncodedResponseParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetEncodedResponseParams;
    GetEncodedResponseParamsBuilder() : result_(new GetEncodedResponseParams()) { }

    template<int STEP> GetEncodedResponseParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetEncodedResponseParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetEncodedResponseParams> result_;
  };

  static GetEncodedResponseParamsBuilder<0> Builder() {
    return GetEncodedResponseParamsBuilder<0>();
  }

 private:
  GetEncodedResponseParams() { }

  std::string request_id_;
  ::autofill_assistant::audits::GetEncodedResponseEncoding encoding_;
  absl::optional<double> quality_;
  absl::optional<bool> size_only_;
};


// Result for the GetEncodedResponse command.
class GetEncodedResponseResult {
 public:
  static std::unique_ptr<GetEncodedResponseResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetEncodedResponseResult(const GetEncodedResponseResult&) = delete;
  GetEncodedResponseResult& operator=(const GetEncodedResponseResult&) = delete;
  ~GetEncodedResponseResult() { }

  // The encoded body as a base64 string. Omitted if sizeOnly is true.
  bool HasBody() const { return !!body_; }
  std::string GetBody() const { DCHECK(HasBody()); return body_.value(); }
  void SetBody(const std::string& value) { body_ = value; }

  // Size before re-encoding.
  int GetOriginalSize() const { return original_size_; }
  void SetOriginalSize(int value) { original_size_ = value; }

  // Size after re-encoding.
  int GetEncodedSize() const { return encoded_size_; }
  void SetEncodedSize(int value) { encoded_size_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetEncodedResponseResult> Clone() const;

  template<int STATE>
  class GetEncodedResponseResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOriginalSizeSet = 1 << 1,
    kEncodedSizeSet = 1 << 2,
      kAllRequiredFieldsSet = (kOriginalSizeSet | kEncodedSizeSet | 0)
    };

    GetEncodedResponseResultBuilder<STATE>& SetBody(const std::string& value) {
      result_->SetBody(value);
      return *this;
    }

    GetEncodedResponseResultBuilder<STATE | kOriginalSizeSet>& SetOriginalSize(int value) {
      static_assert(!(STATE & kOriginalSizeSet), "property originalSize should not have already been set");
      result_->SetOriginalSize(value);
      return CastState<kOriginalSizeSet>();
    }

    GetEncodedResponseResultBuilder<STATE | kEncodedSizeSet>& SetEncodedSize(int value) {
      static_assert(!(STATE & kEncodedSizeSet), "property encodedSize should not have already been set");
      result_->SetEncodedSize(value);
      return CastState<kEncodedSizeSet>();
    }

    std::unique_ptr<GetEncodedResponseResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetEncodedResponseResult;
    GetEncodedResponseResultBuilder() : result_(new GetEncodedResponseResult()) { }

    template<int STEP> GetEncodedResponseResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetEncodedResponseResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetEncodedResponseResult> result_;
  };

  static GetEncodedResponseResultBuilder<0> Builder() {
    return GetEncodedResponseResultBuilder<0>();
  }

 private:
  GetEncodedResponseResult() { }

  absl::optional<std::string> body_;
  int original_size_;
  int encoded_size_;
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


// Parameters for the CheckContrast command.
class CheckContrastParams {
 public:
  static std::unique_ptr<CheckContrastParams> Parse(const base::Value& value, ErrorReporter* errors);
  CheckContrastParams(const CheckContrastParams&) = delete;
  CheckContrastParams& operator=(const CheckContrastParams&) = delete;
  ~CheckContrastParams() { }

  // Whether to report WCAG AAA level issues. Default is false.
  bool HasReportAAA() const { return !!reportaaa_; }
  bool GetReportAAA() const { DCHECK(HasReportAAA()); return reportaaa_.value(); }
  void SetReportAAA(bool value) { reportaaa_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CheckContrastParams> Clone() const;

  template<int STATE>
  class CheckContrastParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    CheckContrastParamsBuilder<STATE>& SetReportAAA(bool value) {
      result_->SetReportAAA(value);
      return *this;
    }

    std::unique_ptr<CheckContrastParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CheckContrastParams;
    CheckContrastParamsBuilder() : result_(new CheckContrastParams()) { }

    template<int STEP> CheckContrastParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CheckContrastParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CheckContrastParams> result_;
  };

  static CheckContrastParamsBuilder<0> Builder() {
    return CheckContrastParamsBuilder<0>();
  }

 private:
  CheckContrastParams() { }

  absl::optional<bool> reportaaa_;
};


// Result for the CheckContrast command.
class CheckContrastResult {
 public:
  static std::unique_ptr<CheckContrastResult> Parse(const base::Value& value, ErrorReporter* errors);
  CheckContrastResult(const CheckContrastResult&) = delete;
  CheckContrastResult& operator=(const CheckContrastResult&) = delete;
  ~CheckContrastResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<CheckContrastResult> Clone() const;

  template<int STATE>
  class CheckContrastResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<CheckContrastResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class CheckContrastResult;
    CheckContrastResultBuilder() : result_(new CheckContrastResult()) { }

    template<int STEP> CheckContrastResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CheckContrastResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<CheckContrastResult> result_;
  };

  static CheckContrastResultBuilder<0> Builder() {
    return CheckContrastResultBuilder<0>();
  }

 private:
  CheckContrastResult() { }

};


// Parameters for the IssueAdded event.
class IssueAddedParams {
 public:
  static std::unique_ptr<IssueAddedParams> Parse(const base::Value& value, ErrorReporter* errors);
  IssueAddedParams(const IssueAddedParams&) = delete;
  IssueAddedParams& operator=(const IssueAddedParams&) = delete;
  ~IssueAddedParams() { }

  const ::autofill_assistant::audits::InspectorIssue* GetIssue() const { return issue_.get(); }
  void SetIssue(std::unique_ptr<::autofill_assistant::audits::InspectorIssue> value) { issue_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<IssueAddedParams> Clone() const;

  template<int STATE>
  class IssueAddedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kIssueSet = 1 << 1,
      kAllRequiredFieldsSet = (kIssueSet | 0)
    };

    IssueAddedParamsBuilder<STATE | kIssueSet>& SetIssue(std::unique_ptr<::autofill_assistant::audits::InspectorIssue> value) {
      static_assert(!(STATE & kIssueSet), "property issue should not have already been set");
      result_->SetIssue(std::move(value));
      return CastState<kIssueSet>();
    }

    std::unique_ptr<IssueAddedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class IssueAddedParams;
    IssueAddedParamsBuilder() : result_(new IssueAddedParams()) { }

    template<int STEP> IssueAddedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<IssueAddedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<IssueAddedParams> result_;
  };

  static IssueAddedParamsBuilder<0> Builder() {
    return IssueAddedParamsBuilder<0>();
  }

 private:
  IssueAddedParams() { }

  std::unique_ptr<::autofill_assistant::audits::InspectorIssue> issue_;
};


}  // namespace audits

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_AUDITS_H_
