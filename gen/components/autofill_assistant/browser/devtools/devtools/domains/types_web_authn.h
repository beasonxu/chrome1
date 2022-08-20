// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// Copied and modified from
// https://chromium.googlesource.com/chromium/src/+/a3f9d4fac81fc86065d867ab08fa4912ddf662c7/headless/lib/browser/devtools_api/domain_types_h.template
// Modifications include namespace and path.

#ifndef COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_WEB_AUTHN_H_
#define COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_WEB_AUTHN_H_

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "base/values.h"
#include "components/autofill_assistant/browser/devtools/devtools/internal/types_forward_declarations_web_authn.h"

namespace autofill_assistant {

class ErrorReporter;

namespace web_authn {

class VirtualAuthenticatorOptions {
 public:
  static std::unique_ptr<VirtualAuthenticatorOptions> Parse(const base::Value& value, ErrorReporter* errors);
  VirtualAuthenticatorOptions(const VirtualAuthenticatorOptions&) = delete;
  VirtualAuthenticatorOptions& operator=(const VirtualAuthenticatorOptions&) = delete;
  ~VirtualAuthenticatorOptions() { }

  ::autofill_assistant::web_authn::AuthenticatorProtocol GetProtocol() const { return protocol_; }
  void SetProtocol(::autofill_assistant::web_authn::AuthenticatorProtocol value) { protocol_ = value; }

  // Defaults to ctap2_0. Ignored if |protocol| == u2f.
  bool HasCtap2Version() const { return !!ctap2_version_; }
  ::autofill_assistant::web_authn::Ctap2Version GetCtap2Version() const { DCHECK(HasCtap2Version()); return ctap2_version_.value(); }
  void SetCtap2Version(::autofill_assistant::web_authn::Ctap2Version value) { ctap2_version_ = value; }

  ::autofill_assistant::web_authn::AuthenticatorTransport GetTransport() const { return transport_; }
  void SetTransport(::autofill_assistant::web_authn::AuthenticatorTransport value) { transport_ = value; }

  // Defaults to false.
  bool HasHasResidentKey() const { return !!has_resident_key_; }
  bool GetHasResidentKey() const { DCHECK(HasHasResidentKey()); return has_resident_key_.value(); }
  void SetHasResidentKey(bool value) { has_resident_key_ = value; }

  // Defaults to false.
  bool HasHasUserVerification() const { return !!has_user_verification_; }
  bool GetHasUserVerification() const { DCHECK(HasHasUserVerification()); return has_user_verification_.value(); }
  void SetHasUserVerification(bool value) { has_user_verification_ = value; }

  // If set to true, the authenticator will support the largeBlob extension.
  // https://w3c.github.io/webauthn#largeBlob
  // Defaults to false.
  bool HasHasLargeBlob() const { return !!has_large_blob_; }
  bool GetHasLargeBlob() const { DCHECK(HasHasLargeBlob()); return has_large_blob_.value(); }
  void SetHasLargeBlob(bool value) { has_large_blob_ = value; }

  // If set to true, the authenticator will support the credBlob extension.
  // https://fidoalliance.org/specs/fido-v2.1-rd-20201208/fido-client-to-authenticator-protocol-v2.1-rd-20201208.html#sctn-credBlob-extension
  // Defaults to false.
  bool HasHasCredBlob() const { return !!has_cred_blob_; }
  bool GetHasCredBlob() const { DCHECK(HasHasCredBlob()); return has_cred_blob_.value(); }
  void SetHasCredBlob(bool value) { has_cred_blob_ = value; }

  // If set to true, the authenticator will support the minPinLength extension.
  // https://fidoalliance.org/specs/fido-v2.1-ps-20210615/fido-client-to-authenticator-protocol-v2.1-ps-20210615.html#sctn-minpinlength-extension
  // Defaults to false.
  bool HasHasMinPinLength() const { return !!has_min_pin_length_; }
  bool GetHasMinPinLength() const { DCHECK(HasHasMinPinLength()); return has_min_pin_length_.value(); }
  void SetHasMinPinLength(bool value) { has_min_pin_length_ = value; }

  // If set to true, tests of user presence will succeed immediately.
  // Otherwise, they will not be resolved. Defaults to true.
  bool HasAutomaticPresenceSimulation() const { return !!automatic_presence_simulation_; }
  bool GetAutomaticPresenceSimulation() const { DCHECK(HasAutomaticPresenceSimulation()); return automatic_presence_simulation_.value(); }
  void SetAutomaticPresenceSimulation(bool value) { automatic_presence_simulation_ = value; }

  // Sets whether User Verification succeeds or fails for an authenticator.
  // Defaults to false.
  bool HasIsUserVerified() const { return !!is_user_verified_; }
  bool GetIsUserVerified() const { DCHECK(HasIsUserVerified()); return is_user_verified_.value(); }
  void SetIsUserVerified(bool value) { is_user_verified_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<VirtualAuthenticatorOptions> Clone() const;

  template<int STATE>
  class VirtualAuthenticatorOptionsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kProtocolSet = 1 << 1,
    kTransportSet = 1 << 2,
      kAllRequiredFieldsSet = (kProtocolSet | kTransportSet | 0)
    };

    VirtualAuthenticatorOptionsBuilder<STATE | kProtocolSet>& SetProtocol(::autofill_assistant::web_authn::AuthenticatorProtocol value) {
      static_assert(!(STATE & kProtocolSet), "property protocol should not have already been set");
      result_->SetProtocol(value);
      return CastState<kProtocolSet>();
    }

    VirtualAuthenticatorOptionsBuilder<STATE>& SetCtap2Version(::autofill_assistant::web_authn::Ctap2Version value) {
      result_->SetCtap2Version(value);
      return *this;
    }

    VirtualAuthenticatorOptionsBuilder<STATE | kTransportSet>& SetTransport(::autofill_assistant::web_authn::AuthenticatorTransport value) {
      static_assert(!(STATE & kTransportSet), "property transport should not have already been set");
      result_->SetTransport(value);
      return CastState<kTransportSet>();
    }

    VirtualAuthenticatorOptionsBuilder<STATE>& SetHasResidentKey(bool value) {
      result_->SetHasResidentKey(value);
      return *this;
    }

    VirtualAuthenticatorOptionsBuilder<STATE>& SetHasUserVerification(bool value) {
      result_->SetHasUserVerification(value);
      return *this;
    }

    VirtualAuthenticatorOptionsBuilder<STATE>& SetHasLargeBlob(bool value) {
      result_->SetHasLargeBlob(value);
      return *this;
    }

    VirtualAuthenticatorOptionsBuilder<STATE>& SetHasCredBlob(bool value) {
      result_->SetHasCredBlob(value);
      return *this;
    }

    VirtualAuthenticatorOptionsBuilder<STATE>& SetHasMinPinLength(bool value) {
      result_->SetHasMinPinLength(value);
      return *this;
    }

    VirtualAuthenticatorOptionsBuilder<STATE>& SetAutomaticPresenceSimulation(bool value) {
      result_->SetAutomaticPresenceSimulation(value);
      return *this;
    }

    VirtualAuthenticatorOptionsBuilder<STATE>& SetIsUserVerified(bool value) {
      result_->SetIsUserVerified(value);
      return *this;
    }

    std::unique_ptr<VirtualAuthenticatorOptions> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class VirtualAuthenticatorOptions;
    VirtualAuthenticatorOptionsBuilder() : result_(new VirtualAuthenticatorOptions()) { }

    template<int STEP> VirtualAuthenticatorOptionsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<VirtualAuthenticatorOptionsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<VirtualAuthenticatorOptions> result_;
  };

  static VirtualAuthenticatorOptionsBuilder<0> Builder() {
    return VirtualAuthenticatorOptionsBuilder<0>();
  }

 private:
  VirtualAuthenticatorOptions() { }

  ::autofill_assistant::web_authn::AuthenticatorProtocol protocol_;
  absl::optional<::autofill_assistant::web_authn::Ctap2Version> ctap2_version_;
  ::autofill_assistant::web_authn::AuthenticatorTransport transport_;
  absl::optional<bool> has_resident_key_;
  absl::optional<bool> has_user_verification_;
  absl::optional<bool> has_large_blob_;
  absl::optional<bool> has_cred_blob_;
  absl::optional<bool> has_min_pin_length_;
  absl::optional<bool> automatic_presence_simulation_;
  absl::optional<bool> is_user_verified_;
};


class Credential {
 public:
  static std::unique_ptr<Credential> Parse(const base::Value& value, ErrorReporter* errors);
  Credential(const Credential&) = delete;
  Credential& operator=(const Credential&) = delete;
  ~Credential() { }

  std::string GetCredentialId() const { return credential_id_; }
  void SetCredentialId(const std::string& value) { credential_id_ = value; }

  bool GetIsResidentCredential() const { return is_resident_credential_; }
  void SetIsResidentCredential(bool value) { is_resident_credential_ = value; }

  // Relying Party ID the credential is scoped to. Must be set when adding a
  // credential.
  bool HasRpId() const { return !!rp_id_; }
  std::string GetRpId() const { DCHECK(HasRpId()); return rp_id_.value(); }
  void SetRpId(const std::string& value) { rp_id_ = value; }

  // The ECDSA P-256 private key in PKCS#8 format.
  std::string GetPrivateKey() const { return private_key_; }
  void SetPrivateKey(const std::string& value) { private_key_ = value; }

  // An opaque byte sequence with a maximum size of 64 bytes mapping the
  // credential to a specific user.
  bool HasUserHandle() const { return !!user_handle_; }
  std::string GetUserHandle() const { DCHECK(HasUserHandle()); return user_handle_.value(); }
  void SetUserHandle(const std::string& value) { user_handle_ = value; }

  // Signature counter. This is incremented by one for each successful
  // assertion.
  // See https://w3c.github.io/webauthn/#signature-counter
  int GetSignCount() const { return sign_count_; }
  void SetSignCount(int value) { sign_count_ = value; }

  // The large blob associated with the credential.
  // See https://w3c.github.io/webauthn/#sctn-large-blob-extension
  bool HasLargeBlob() const { return !!large_blob_; }
  std::string GetLargeBlob() const { DCHECK(HasLargeBlob()); return large_blob_.value(); }
  void SetLargeBlob(const std::string& value) { large_blob_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<Credential> Clone() const;

  template<int STATE>
  class CredentialBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCredentialIdSet = 1 << 1,
    kIsResidentCredentialSet = 1 << 2,
    kPrivateKeySet = 1 << 3,
    kSignCountSet = 1 << 4,
      kAllRequiredFieldsSet = (kCredentialIdSet | kIsResidentCredentialSet | kPrivateKeySet | kSignCountSet | 0)
    };

    CredentialBuilder<STATE | kCredentialIdSet>& SetCredentialId(const std::string& value) {
      static_assert(!(STATE & kCredentialIdSet), "property credentialId should not have already been set");
      result_->SetCredentialId(value);
      return CastState<kCredentialIdSet>();
    }

    CredentialBuilder<STATE | kIsResidentCredentialSet>& SetIsResidentCredential(bool value) {
      static_assert(!(STATE & kIsResidentCredentialSet), "property isResidentCredential should not have already been set");
      result_->SetIsResidentCredential(value);
      return CastState<kIsResidentCredentialSet>();
    }

    CredentialBuilder<STATE>& SetRpId(const std::string& value) {
      result_->SetRpId(value);
      return *this;
    }

    CredentialBuilder<STATE | kPrivateKeySet>& SetPrivateKey(const std::string& value) {
      static_assert(!(STATE & kPrivateKeySet), "property privateKey should not have already been set");
      result_->SetPrivateKey(value);
      return CastState<kPrivateKeySet>();
    }

    CredentialBuilder<STATE>& SetUserHandle(const std::string& value) {
      result_->SetUserHandle(value);
      return *this;
    }

    CredentialBuilder<STATE | kSignCountSet>& SetSignCount(int value) {
      static_assert(!(STATE & kSignCountSet), "property signCount should not have already been set");
      result_->SetSignCount(value);
      return CastState<kSignCountSet>();
    }

    CredentialBuilder<STATE>& SetLargeBlob(const std::string& value) {
      result_->SetLargeBlob(value);
      return *this;
    }

    std::unique_ptr<Credential> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class Credential;
    CredentialBuilder() : result_(new Credential()) { }

    template<int STEP> CredentialBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<CredentialBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<Credential> result_;
  };

  static CredentialBuilder<0> Builder() {
    return CredentialBuilder<0>();
  }

 private:
  Credential() { }

  std::string credential_id_;
  bool is_resident_credential_;
  absl::optional<std::string> rp_id_;
  std::string private_key_;
  absl::optional<std::string> user_handle_;
  int sign_count_;
  absl::optional<std::string> large_blob_;
};


// Parameters for the Enable command.
class EnableParams {
 public:
  static std::unique_ptr<EnableParams> Parse(const base::Value& value, ErrorReporter* errors);
  EnableParams(const EnableParams&) = delete;
  EnableParams& operator=(const EnableParams&) = delete;
  ~EnableParams() { }

  // Whether to enable the WebAuthn user interface. Enabling the UI is
  // recommended for debugging and demo purposes, as it is closer to the real
  // experience. Disabling the UI is recommended for automated testing.
  // Supported at the embedder's discretion if UI is available.
  // Defaults to false.
  bool HasEnableUI() const { return !!enableui_; }
  bool GetEnableUI() const { DCHECK(HasEnableUI()); return enableui_.value(); }
  void SetEnableUI(bool value) { enableui_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<EnableParams> Clone() const;

  template<int STATE>
  class EnableParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    EnableParamsBuilder<STATE>& SetEnableUI(bool value) {
      result_->SetEnableUI(value);
      return *this;
    }

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

  absl::optional<bool> enableui_;
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


// Parameters for the AddVirtualAuthenticator command.
class AddVirtualAuthenticatorParams {
 public:
  static std::unique_ptr<AddVirtualAuthenticatorParams> Parse(const base::Value& value, ErrorReporter* errors);
  AddVirtualAuthenticatorParams(const AddVirtualAuthenticatorParams&) = delete;
  AddVirtualAuthenticatorParams& operator=(const AddVirtualAuthenticatorParams&) = delete;
  ~AddVirtualAuthenticatorParams() { }

  const ::autofill_assistant::web_authn::VirtualAuthenticatorOptions* GetOptions() const { return options_.get(); }
  void SetOptions(std::unique_ptr<::autofill_assistant::web_authn::VirtualAuthenticatorOptions> value) { options_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<AddVirtualAuthenticatorParams> Clone() const;

  template<int STATE>
  class AddVirtualAuthenticatorParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kOptionsSet = 1 << 1,
      kAllRequiredFieldsSet = (kOptionsSet | 0)
    };

    AddVirtualAuthenticatorParamsBuilder<STATE | kOptionsSet>& SetOptions(std::unique_ptr<::autofill_assistant::web_authn::VirtualAuthenticatorOptions> value) {
      static_assert(!(STATE & kOptionsSet), "property options should not have already been set");
      result_->SetOptions(std::move(value));
      return CastState<kOptionsSet>();
    }

    std::unique_ptr<AddVirtualAuthenticatorParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class AddVirtualAuthenticatorParams;
    AddVirtualAuthenticatorParamsBuilder() : result_(new AddVirtualAuthenticatorParams()) { }

    template<int STEP> AddVirtualAuthenticatorParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<AddVirtualAuthenticatorParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<AddVirtualAuthenticatorParams> result_;
  };

  static AddVirtualAuthenticatorParamsBuilder<0> Builder() {
    return AddVirtualAuthenticatorParamsBuilder<0>();
  }

 private:
  AddVirtualAuthenticatorParams() { }

  std::unique_ptr<::autofill_assistant::web_authn::VirtualAuthenticatorOptions> options_;
};


// Result for the AddVirtualAuthenticator command.
class AddVirtualAuthenticatorResult {
 public:
  static std::unique_ptr<AddVirtualAuthenticatorResult> Parse(const base::Value& value, ErrorReporter* errors);
  AddVirtualAuthenticatorResult(const AddVirtualAuthenticatorResult&) = delete;
  AddVirtualAuthenticatorResult& operator=(const AddVirtualAuthenticatorResult&) = delete;
  ~AddVirtualAuthenticatorResult() { }

  std::string GetAuthenticatorId() const { return authenticator_id_; }
  void SetAuthenticatorId(const std::string& value) { authenticator_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<AddVirtualAuthenticatorResult> Clone() const;

  template<int STATE>
  class AddVirtualAuthenticatorResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kAuthenticatorIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kAuthenticatorIdSet | 0)
    };

    AddVirtualAuthenticatorResultBuilder<STATE | kAuthenticatorIdSet>& SetAuthenticatorId(const std::string& value) {
      static_assert(!(STATE & kAuthenticatorIdSet), "property authenticatorId should not have already been set");
      result_->SetAuthenticatorId(value);
      return CastState<kAuthenticatorIdSet>();
    }

    std::unique_ptr<AddVirtualAuthenticatorResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class AddVirtualAuthenticatorResult;
    AddVirtualAuthenticatorResultBuilder() : result_(new AddVirtualAuthenticatorResult()) { }

    template<int STEP> AddVirtualAuthenticatorResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<AddVirtualAuthenticatorResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<AddVirtualAuthenticatorResult> result_;
  };

  static AddVirtualAuthenticatorResultBuilder<0> Builder() {
    return AddVirtualAuthenticatorResultBuilder<0>();
  }

 private:
  AddVirtualAuthenticatorResult() { }

  std::string authenticator_id_;
};


// Parameters for the RemoveVirtualAuthenticator command.
class RemoveVirtualAuthenticatorParams {
 public:
  static std::unique_ptr<RemoveVirtualAuthenticatorParams> Parse(const base::Value& value, ErrorReporter* errors);
  RemoveVirtualAuthenticatorParams(const RemoveVirtualAuthenticatorParams&) = delete;
  RemoveVirtualAuthenticatorParams& operator=(const RemoveVirtualAuthenticatorParams&) = delete;
  ~RemoveVirtualAuthenticatorParams() { }

  std::string GetAuthenticatorId() const { return authenticator_id_; }
  void SetAuthenticatorId(const std::string& value) { authenticator_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RemoveVirtualAuthenticatorParams> Clone() const;

  template<int STATE>
  class RemoveVirtualAuthenticatorParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kAuthenticatorIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kAuthenticatorIdSet | 0)
    };

    RemoveVirtualAuthenticatorParamsBuilder<STATE | kAuthenticatorIdSet>& SetAuthenticatorId(const std::string& value) {
      static_assert(!(STATE & kAuthenticatorIdSet), "property authenticatorId should not have already been set");
      result_->SetAuthenticatorId(value);
      return CastState<kAuthenticatorIdSet>();
    }

    std::unique_ptr<RemoveVirtualAuthenticatorParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RemoveVirtualAuthenticatorParams;
    RemoveVirtualAuthenticatorParamsBuilder() : result_(new RemoveVirtualAuthenticatorParams()) { }

    template<int STEP> RemoveVirtualAuthenticatorParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RemoveVirtualAuthenticatorParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RemoveVirtualAuthenticatorParams> result_;
  };

  static RemoveVirtualAuthenticatorParamsBuilder<0> Builder() {
    return RemoveVirtualAuthenticatorParamsBuilder<0>();
  }

 private:
  RemoveVirtualAuthenticatorParams() { }

  std::string authenticator_id_;
};


// Result for the RemoveVirtualAuthenticator command.
class RemoveVirtualAuthenticatorResult {
 public:
  static std::unique_ptr<RemoveVirtualAuthenticatorResult> Parse(const base::Value& value, ErrorReporter* errors);
  RemoveVirtualAuthenticatorResult(const RemoveVirtualAuthenticatorResult&) = delete;
  RemoveVirtualAuthenticatorResult& operator=(const RemoveVirtualAuthenticatorResult&) = delete;
  ~RemoveVirtualAuthenticatorResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RemoveVirtualAuthenticatorResult> Clone() const;

  template<int STATE>
  class RemoveVirtualAuthenticatorResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<RemoveVirtualAuthenticatorResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RemoveVirtualAuthenticatorResult;
    RemoveVirtualAuthenticatorResultBuilder() : result_(new RemoveVirtualAuthenticatorResult()) { }

    template<int STEP> RemoveVirtualAuthenticatorResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RemoveVirtualAuthenticatorResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RemoveVirtualAuthenticatorResult> result_;
  };

  static RemoveVirtualAuthenticatorResultBuilder<0> Builder() {
    return RemoveVirtualAuthenticatorResultBuilder<0>();
  }

 private:
  RemoveVirtualAuthenticatorResult() { }

};


// Parameters for the AddCredential command.
class AddCredentialParams {
 public:
  static std::unique_ptr<AddCredentialParams> Parse(const base::Value& value, ErrorReporter* errors);
  AddCredentialParams(const AddCredentialParams&) = delete;
  AddCredentialParams& operator=(const AddCredentialParams&) = delete;
  ~AddCredentialParams() { }

  std::string GetAuthenticatorId() const { return authenticator_id_; }
  void SetAuthenticatorId(const std::string& value) { authenticator_id_ = value; }

  const ::autofill_assistant::web_authn::Credential* GetCredential() const { return credential_.get(); }
  void SetCredential(std::unique_ptr<::autofill_assistant::web_authn::Credential> value) { credential_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<AddCredentialParams> Clone() const;

  template<int STATE>
  class AddCredentialParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kAuthenticatorIdSet = 1 << 1,
    kCredentialSet = 1 << 2,
      kAllRequiredFieldsSet = (kAuthenticatorIdSet | kCredentialSet | 0)
    };

    AddCredentialParamsBuilder<STATE | kAuthenticatorIdSet>& SetAuthenticatorId(const std::string& value) {
      static_assert(!(STATE & kAuthenticatorIdSet), "property authenticatorId should not have already been set");
      result_->SetAuthenticatorId(value);
      return CastState<kAuthenticatorIdSet>();
    }

    AddCredentialParamsBuilder<STATE | kCredentialSet>& SetCredential(std::unique_ptr<::autofill_assistant::web_authn::Credential> value) {
      static_assert(!(STATE & kCredentialSet), "property credential should not have already been set");
      result_->SetCredential(std::move(value));
      return CastState<kCredentialSet>();
    }

    std::unique_ptr<AddCredentialParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class AddCredentialParams;
    AddCredentialParamsBuilder() : result_(new AddCredentialParams()) { }

    template<int STEP> AddCredentialParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<AddCredentialParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<AddCredentialParams> result_;
  };

  static AddCredentialParamsBuilder<0> Builder() {
    return AddCredentialParamsBuilder<0>();
  }

 private:
  AddCredentialParams() { }

  std::string authenticator_id_;
  std::unique_ptr<::autofill_assistant::web_authn::Credential> credential_;
};


// Result for the AddCredential command.
class AddCredentialResult {
 public:
  static std::unique_ptr<AddCredentialResult> Parse(const base::Value& value, ErrorReporter* errors);
  AddCredentialResult(const AddCredentialResult&) = delete;
  AddCredentialResult& operator=(const AddCredentialResult&) = delete;
  ~AddCredentialResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<AddCredentialResult> Clone() const;

  template<int STATE>
  class AddCredentialResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<AddCredentialResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class AddCredentialResult;
    AddCredentialResultBuilder() : result_(new AddCredentialResult()) { }

    template<int STEP> AddCredentialResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<AddCredentialResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<AddCredentialResult> result_;
  };

  static AddCredentialResultBuilder<0> Builder() {
    return AddCredentialResultBuilder<0>();
  }

 private:
  AddCredentialResult() { }

};


// Parameters for the GetCredential command.
class GetCredentialParams {
 public:
  static std::unique_ptr<GetCredentialParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetCredentialParams(const GetCredentialParams&) = delete;
  GetCredentialParams& operator=(const GetCredentialParams&) = delete;
  ~GetCredentialParams() { }

  std::string GetAuthenticatorId() const { return authenticator_id_; }
  void SetAuthenticatorId(const std::string& value) { authenticator_id_ = value; }

  std::string GetCredentialId() const { return credential_id_; }
  void SetCredentialId(const std::string& value) { credential_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetCredentialParams> Clone() const;

  template<int STATE>
  class GetCredentialParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kAuthenticatorIdSet = 1 << 1,
    kCredentialIdSet = 1 << 2,
      kAllRequiredFieldsSet = (kAuthenticatorIdSet | kCredentialIdSet | 0)
    };

    GetCredentialParamsBuilder<STATE | kAuthenticatorIdSet>& SetAuthenticatorId(const std::string& value) {
      static_assert(!(STATE & kAuthenticatorIdSet), "property authenticatorId should not have already been set");
      result_->SetAuthenticatorId(value);
      return CastState<kAuthenticatorIdSet>();
    }

    GetCredentialParamsBuilder<STATE | kCredentialIdSet>& SetCredentialId(const std::string& value) {
      static_assert(!(STATE & kCredentialIdSet), "property credentialId should not have already been set");
      result_->SetCredentialId(value);
      return CastState<kCredentialIdSet>();
    }

    std::unique_ptr<GetCredentialParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetCredentialParams;
    GetCredentialParamsBuilder() : result_(new GetCredentialParams()) { }

    template<int STEP> GetCredentialParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetCredentialParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetCredentialParams> result_;
  };

  static GetCredentialParamsBuilder<0> Builder() {
    return GetCredentialParamsBuilder<0>();
  }

 private:
  GetCredentialParams() { }

  std::string authenticator_id_;
  std::string credential_id_;
};


// Result for the GetCredential command.
class GetCredentialResult {
 public:
  static std::unique_ptr<GetCredentialResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetCredentialResult(const GetCredentialResult&) = delete;
  GetCredentialResult& operator=(const GetCredentialResult&) = delete;
  ~GetCredentialResult() { }

  const ::autofill_assistant::web_authn::Credential* GetCredential() const { return credential_.get(); }
  void SetCredential(std::unique_ptr<::autofill_assistant::web_authn::Credential> value) { credential_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetCredentialResult> Clone() const;

  template<int STATE>
  class GetCredentialResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCredentialSet = 1 << 1,
      kAllRequiredFieldsSet = (kCredentialSet | 0)
    };

    GetCredentialResultBuilder<STATE | kCredentialSet>& SetCredential(std::unique_ptr<::autofill_assistant::web_authn::Credential> value) {
      static_assert(!(STATE & kCredentialSet), "property credential should not have already been set");
      result_->SetCredential(std::move(value));
      return CastState<kCredentialSet>();
    }

    std::unique_ptr<GetCredentialResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetCredentialResult;
    GetCredentialResultBuilder() : result_(new GetCredentialResult()) { }

    template<int STEP> GetCredentialResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetCredentialResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetCredentialResult> result_;
  };

  static GetCredentialResultBuilder<0> Builder() {
    return GetCredentialResultBuilder<0>();
  }

 private:
  GetCredentialResult() { }

  std::unique_ptr<::autofill_assistant::web_authn::Credential> credential_;
};


// Parameters for the GetCredentials command.
class GetCredentialsParams {
 public:
  static std::unique_ptr<GetCredentialsParams> Parse(const base::Value& value, ErrorReporter* errors);
  GetCredentialsParams(const GetCredentialsParams&) = delete;
  GetCredentialsParams& operator=(const GetCredentialsParams&) = delete;
  ~GetCredentialsParams() { }

  std::string GetAuthenticatorId() const { return authenticator_id_; }
  void SetAuthenticatorId(const std::string& value) { authenticator_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetCredentialsParams> Clone() const;

  template<int STATE>
  class GetCredentialsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kAuthenticatorIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kAuthenticatorIdSet | 0)
    };

    GetCredentialsParamsBuilder<STATE | kAuthenticatorIdSet>& SetAuthenticatorId(const std::string& value) {
      static_assert(!(STATE & kAuthenticatorIdSet), "property authenticatorId should not have already been set");
      result_->SetAuthenticatorId(value);
      return CastState<kAuthenticatorIdSet>();
    }

    std::unique_ptr<GetCredentialsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetCredentialsParams;
    GetCredentialsParamsBuilder() : result_(new GetCredentialsParams()) { }

    template<int STEP> GetCredentialsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetCredentialsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetCredentialsParams> result_;
  };

  static GetCredentialsParamsBuilder<0> Builder() {
    return GetCredentialsParamsBuilder<0>();
  }

 private:
  GetCredentialsParams() { }

  std::string authenticator_id_;
};


// Result for the GetCredentials command.
class GetCredentialsResult {
 public:
  static std::unique_ptr<GetCredentialsResult> Parse(const base::Value& value, ErrorReporter* errors);
  GetCredentialsResult(const GetCredentialsResult&) = delete;
  GetCredentialsResult& operator=(const GetCredentialsResult&) = delete;
  ~GetCredentialsResult() { }

  const std::vector<std::unique_ptr<::autofill_assistant::web_authn::Credential>>* GetCredentials() const { return &credentials_; }
  void SetCredentials(std::vector<std::unique_ptr<::autofill_assistant::web_authn::Credential>> value) { credentials_ = std::move(value); }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<GetCredentialsResult> Clone() const;

  template<int STATE>
  class GetCredentialsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kCredentialsSet = 1 << 1,
      kAllRequiredFieldsSet = (kCredentialsSet | 0)
    };

    GetCredentialsResultBuilder<STATE | kCredentialsSet>& SetCredentials(std::vector<std::unique_ptr<::autofill_assistant::web_authn::Credential>> value) {
      static_assert(!(STATE & kCredentialsSet), "property credentials should not have already been set");
      result_->SetCredentials(std::move(value));
      return CastState<kCredentialsSet>();
    }

    std::unique_ptr<GetCredentialsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class GetCredentialsResult;
    GetCredentialsResultBuilder() : result_(new GetCredentialsResult()) { }

    template<int STEP> GetCredentialsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<GetCredentialsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<GetCredentialsResult> result_;
  };

  static GetCredentialsResultBuilder<0> Builder() {
    return GetCredentialsResultBuilder<0>();
  }

 private:
  GetCredentialsResult() { }

  std::vector<std::unique_ptr<::autofill_assistant::web_authn::Credential>> credentials_;
};


// Parameters for the RemoveCredential command.
class RemoveCredentialParams {
 public:
  static std::unique_ptr<RemoveCredentialParams> Parse(const base::Value& value, ErrorReporter* errors);
  RemoveCredentialParams(const RemoveCredentialParams&) = delete;
  RemoveCredentialParams& operator=(const RemoveCredentialParams&) = delete;
  ~RemoveCredentialParams() { }

  std::string GetAuthenticatorId() const { return authenticator_id_; }
  void SetAuthenticatorId(const std::string& value) { authenticator_id_ = value; }

  std::string GetCredentialId() const { return credential_id_; }
  void SetCredentialId(const std::string& value) { credential_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RemoveCredentialParams> Clone() const;

  template<int STATE>
  class RemoveCredentialParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kAuthenticatorIdSet = 1 << 1,
    kCredentialIdSet = 1 << 2,
      kAllRequiredFieldsSet = (kAuthenticatorIdSet | kCredentialIdSet | 0)
    };

    RemoveCredentialParamsBuilder<STATE | kAuthenticatorIdSet>& SetAuthenticatorId(const std::string& value) {
      static_assert(!(STATE & kAuthenticatorIdSet), "property authenticatorId should not have already been set");
      result_->SetAuthenticatorId(value);
      return CastState<kAuthenticatorIdSet>();
    }

    RemoveCredentialParamsBuilder<STATE | kCredentialIdSet>& SetCredentialId(const std::string& value) {
      static_assert(!(STATE & kCredentialIdSet), "property credentialId should not have already been set");
      result_->SetCredentialId(value);
      return CastState<kCredentialIdSet>();
    }

    std::unique_ptr<RemoveCredentialParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RemoveCredentialParams;
    RemoveCredentialParamsBuilder() : result_(new RemoveCredentialParams()) { }

    template<int STEP> RemoveCredentialParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RemoveCredentialParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RemoveCredentialParams> result_;
  };

  static RemoveCredentialParamsBuilder<0> Builder() {
    return RemoveCredentialParamsBuilder<0>();
  }

 private:
  RemoveCredentialParams() { }

  std::string authenticator_id_;
  std::string credential_id_;
};


// Result for the RemoveCredential command.
class RemoveCredentialResult {
 public:
  static std::unique_ptr<RemoveCredentialResult> Parse(const base::Value& value, ErrorReporter* errors);
  RemoveCredentialResult(const RemoveCredentialResult&) = delete;
  RemoveCredentialResult& operator=(const RemoveCredentialResult&) = delete;
  ~RemoveCredentialResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<RemoveCredentialResult> Clone() const;

  template<int STATE>
  class RemoveCredentialResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<RemoveCredentialResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class RemoveCredentialResult;
    RemoveCredentialResultBuilder() : result_(new RemoveCredentialResult()) { }

    template<int STEP> RemoveCredentialResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<RemoveCredentialResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<RemoveCredentialResult> result_;
  };

  static RemoveCredentialResultBuilder<0> Builder() {
    return RemoveCredentialResultBuilder<0>();
  }

 private:
  RemoveCredentialResult() { }

};


// Parameters for the ClearCredentials command.
class ClearCredentialsParams {
 public:
  static std::unique_ptr<ClearCredentialsParams> Parse(const base::Value& value, ErrorReporter* errors);
  ClearCredentialsParams(const ClearCredentialsParams&) = delete;
  ClearCredentialsParams& operator=(const ClearCredentialsParams&) = delete;
  ~ClearCredentialsParams() { }

  std::string GetAuthenticatorId() const { return authenticator_id_; }
  void SetAuthenticatorId(const std::string& value) { authenticator_id_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearCredentialsParams> Clone() const;

  template<int STATE>
  class ClearCredentialsParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kAuthenticatorIdSet = 1 << 1,
      kAllRequiredFieldsSet = (kAuthenticatorIdSet | 0)
    };

    ClearCredentialsParamsBuilder<STATE | kAuthenticatorIdSet>& SetAuthenticatorId(const std::string& value) {
      static_assert(!(STATE & kAuthenticatorIdSet), "property authenticatorId should not have already been set");
      result_->SetAuthenticatorId(value);
      return CastState<kAuthenticatorIdSet>();
    }

    std::unique_ptr<ClearCredentialsParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearCredentialsParams;
    ClearCredentialsParamsBuilder() : result_(new ClearCredentialsParams()) { }

    template<int STEP> ClearCredentialsParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearCredentialsParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearCredentialsParams> result_;
  };

  static ClearCredentialsParamsBuilder<0> Builder() {
    return ClearCredentialsParamsBuilder<0>();
  }

 private:
  ClearCredentialsParams() { }

  std::string authenticator_id_;
};


// Result for the ClearCredentials command.
class ClearCredentialsResult {
 public:
  static std::unique_ptr<ClearCredentialsResult> Parse(const base::Value& value, ErrorReporter* errors);
  ClearCredentialsResult(const ClearCredentialsResult&) = delete;
  ClearCredentialsResult& operator=(const ClearCredentialsResult&) = delete;
  ~ClearCredentialsResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<ClearCredentialsResult> Clone() const;

  template<int STATE>
  class ClearCredentialsResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<ClearCredentialsResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class ClearCredentialsResult;
    ClearCredentialsResultBuilder() : result_(new ClearCredentialsResult()) { }

    template<int STEP> ClearCredentialsResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<ClearCredentialsResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<ClearCredentialsResult> result_;
  };

  static ClearCredentialsResultBuilder<0> Builder() {
    return ClearCredentialsResultBuilder<0>();
  }

 private:
  ClearCredentialsResult() { }

};


// Parameters for the SetUserVerified command.
class SetUserVerifiedParams {
 public:
  static std::unique_ptr<SetUserVerifiedParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetUserVerifiedParams(const SetUserVerifiedParams&) = delete;
  SetUserVerifiedParams& operator=(const SetUserVerifiedParams&) = delete;
  ~SetUserVerifiedParams() { }

  std::string GetAuthenticatorId() const { return authenticator_id_; }
  void SetAuthenticatorId(const std::string& value) { authenticator_id_ = value; }

  bool GetIsUserVerified() const { return is_user_verified_; }
  void SetIsUserVerified(bool value) { is_user_verified_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetUserVerifiedParams> Clone() const;

  template<int STATE>
  class SetUserVerifiedParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kAuthenticatorIdSet = 1 << 1,
    kIsUserVerifiedSet = 1 << 2,
      kAllRequiredFieldsSet = (kAuthenticatorIdSet | kIsUserVerifiedSet | 0)
    };

    SetUserVerifiedParamsBuilder<STATE | kAuthenticatorIdSet>& SetAuthenticatorId(const std::string& value) {
      static_assert(!(STATE & kAuthenticatorIdSet), "property authenticatorId should not have already been set");
      result_->SetAuthenticatorId(value);
      return CastState<kAuthenticatorIdSet>();
    }

    SetUserVerifiedParamsBuilder<STATE | kIsUserVerifiedSet>& SetIsUserVerified(bool value) {
      static_assert(!(STATE & kIsUserVerifiedSet), "property isUserVerified should not have already been set");
      result_->SetIsUserVerified(value);
      return CastState<kIsUserVerifiedSet>();
    }

    std::unique_ptr<SetUserVerifiedParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetUserVerifiedParams;
    SetUserVerifiedParamsBuilder() : result_(new SetUserVerifiedParams()) { }

    template<int STEP> SetUserVerifiedParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetUserVerifiedParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetUserVerifiedParams> result_;
  };

  static SetUserVerifiedParamsBuilder<0> Builder() {
    return SetUserVerifiedParamsBuilder<0>();
  }

 private:
  SetUserVerifiedParams() { }

  std::string authenticator_id_;
  bool is_user_verified_;
};


// Result for the SetUserVerified command.
class SetUserVerifiedResult {
 public:
  static std::unique_ptr<SetUserVerifiedResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetUserVerifiedResult(const SetUserVerifiedResult&) = delete;
  SetUserVerifiedResult& operator=(const SetUserVerifiedResult&) = delete;
  ~SetUserVerifiedResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetUserVerifiedResult> Clone() const;

  template<int STATE>
  class SetUserVerifiedResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetUserVerifiedResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetUserVerifiedResult;
    SetUserVerifiedResultBuilder() : result_(new SetUserVerifiedResult()) { }

    template<int STEP> SetUserVerifiedResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetUserVerifiedResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetUserVerifiedResult> result_;
  };

  static SetUserVerifiedResultBuilder<0> Builder() {
    return SetUserVerifiedResultBuilder<0>();
  }

 private:
  SetUserVerifiedResult() { }

};


// Parameters for the SetAutomaticPresenceSimulation command.
class SetAutomaticPresenceSimulationParams {
 public:
  static std::unique_ptr<SetAutomaticPresenceSimulationParams> Parse(const base::Value& value, ErrorReporter* errors);
  SetAutomaticPresenceSimulationParams(const SetAutomaticPresenceSimulationParams&) = delete;
  SetAutomaticPresenceSimulationParams& operator=(const SetAutomaticPresenceSimulationParams&) = delete;
  ~SetAutomaticPresenceSimulationParams() { }

  std::string GetAuthenticatorId() const { return authenticator_id_; }
  void SetAuthenticatorId(const std::string& value) { authenticator_id_ = value; }

  bool GetEnabled() const { return enabled_; }
  void SetEnabled(bool value) { enabled_ = value; }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetAutomaticPresenceSimulationParams> Clone() const;

  template<int STATE>
  class SetAutomaticPresenceSimulationParamsBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
    kAuthenticatorIdSet = 1 << 1,
    kEnabledSet = 1 << 2,
      kAllRequiredFieldsSet = (kAuthenticatorIdSet | kEnabledSet | 0)
    };

    SetAutomaticPresenceSimulationParamsBuilder<STATE | kAuthenticatorIdSet>& SetAuthenticatorId(const std::string& value) {
      static_assert(!(STATE & kAuthenticatorIdSet), "property authenticatorId should not have already been set");
      result_->SetAuthenticatorId(value);
      return CastState<kAuthenticatorIdSet>();
    }

    SetAutomaticPresenceSimulationParamsBuilder<STATE | kEnabledSet>& SetEnabled(bool value) {
      static_assert(!(STATE & kEnabledSet), "property enabled should not have already been set");
      result_->SetEnabled(value);
      return CastState<kEnabledSet>();
    }

    std::unique_ptr<SetAutomaticPresenceSimulationParams> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetAutomaticPresenceSimulationParams;
    SetAutomaticPresenceSimulationParamsBuilder() : result_(new SetAutomaticPresenceSimulationParams()) { }

    template<int STEP> SetAutomaticPresenceSimulationParamsBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetAutomaticPresenceSimulationParamsBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetAutomaticPresenceSimulationParams> result_;
  };

  static SetAutomaticPresenceSimulationParamsBuilder<0> Builder() {
    return SetAutomaticPresenceSimulationParamsBuilder<0>();
  }

 private:
  SetAutomaticPresenceSimulationParams() { }

  std::string authenticator_id_;
  bool enabled_;
};


// Result for the SetAutomaticPresenceSimulation command.
class SetAutomaticPresenceSimulationResult {
 public:
  static std::unique_ptr<SetAutomaticPresenceSimulationResult> Parse(const base::Value& value, ErrorReporter* errors);
  SetAutomaticPresenceSimulationResult(const SetAutomaticPresenceSimulationResult&) = delete;
  SetAutomaticPresenceSimulationResult& operator=(const SetAutomaticPresenceSimulationResult&) = delete;
  ~SetAutomaticPresenceSimulationResult() { }

  std::unique_ptr<base::Value> Serialize() const;
  std::unique_ptr<SetAutomaticPresenceSimulationResult> Clone() const;

  template<int STATE>
  class SetAutomaticPresenceSimulationResultBuilder {
  public:
    enum {
      kNoFieldsSet = 0,
      kAllRequiredFieldsSet = (0)
    };

    std::unique_ptr<SetAutomaticPresenceSimulationResult> Build() {
      static_assert(STATE == kAllRequiredFieldsSet, "all required fields should have been set");
      return std::move(result_);
    }

   private:
    friend class SetAutomaticPresenceSimulationResult;
    SetAutomaticPresenceSimulationResultBuilder() : result_(new SetAutomaticPresenceSimulationResult()) { }

    template<int STEP> SetAutomaticPresenceSimulationResultBuilder<STATE | STEP>& CastState() {
      return *reinterpret_cast<SetAutomaticPresenceSimulationResultBuilder<STATE | STEP>*>(this);
    }

    std::unique_ptr<SetAutomaticPresenceSimulationResult> result_;
  };

  static SetAutomaticPresenceSimulationResultBuilder<0> Builder() {
    return SetAutomaticPresenceSimulationResultBuilder<0>();
  }

 private:
  SetAutomaticPresenceSimulationResult() { }

};


}  // namespace web_authn

}  // namespace autofill_assistant

#endif  // COMPONENTS_AUTOFILL_ASSISTANT_BROWSER_DEVTOOLS_DEVTOOLS_DOMAINS_TYPES_WEB_AUTHN_H_
