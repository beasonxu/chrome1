// third_party/blink/public/mojom/webauthn/authenticator.mojom-blink-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_FORWARD_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"
#include "third_party/blink/renderer/platform/platform_export.h"




namespace blink {
namespace mojom {

enum class AuthenticatorStatus : int32_t;

enum class AuthenticatorTransport : int32_t;

enum class UserVerificationRequirement : int32_t;

enum class AttestationConveyancePreference : int32_t;

enum class ResidentKeyRequirement : int32_t;

enum class AuthenticatorAttachment : int32_t;

enum class ProtectionPolicy : int32_t;

enum class LargeBlobSupport : int32_t;

enum class PublicKeyCredentialType : int32_t;
class AuthenticatorInterfaceBase;
}  // namespace blink
}  // namespace mojom


namespace blink {
namespace mojom {
namespace blink {
// Aliases for definition in the parent namespace.
using AuthenticatorStatus = AuthenticatorStatus;
using AuthenticatorTransport = AuthenticatorTransport;
using UserVerificationRequirement = UserVerificationRequirement;
using AttestationConveyancePreference = AttestationConveyancePreference;
using ResidentKeyRequirement = ResidentKeyRequirement;
using AuthenticatorAttachment = AuthenticatorAttachment;
using ProtectionPolicy = ProtectionPolicy;
using LargeBlobSupport = LargeBlobSupport;
using PublicKeyCredentialType = PublicKeyCredentialType;
using AuthenticatorInterfaceBase = AuthenticatorInterfaceBase;

constexpr uint32_t kPublicKeyCredentialDescriptorListMaxSize = 64U;
class CommonCredentialInfo;
using CommonCredentialInfoPtr = mojo::StructPtr<CommonCredentialInfo>;

class UvmEntry;
using UvmEntryPtr = mojo::InlinedStructPtr<UvmEntry>;

class MakeCredentialAuthenticatorResponse;
using MakeCredentialAuthenticatorResponsePtr = mojo::StructPtr<MakeCredentialAuthenticatorResponse>;

class GetAssertionAuthenticatorResponse;
using GetAssertionAuthenticatorResponsePtr = mojo::StructPtr<GetAssertionAuthenticatorResponse>;

class PublicKeyCredentialRpEntity;
using PublicKeyCredentialRpEntityPtr = mojo::StructPtr<PublicKeyCredentialRpEntity>;

class PublicKeyCredentialUserEntity;
using PublicKeyCredentialUserEntityPtr = mojo::StructPtr<PublicKeyCredentialUserEntity>;

class PublicKeyCredentialParameters;
using PublicKeyCredentialParametersPtr = mojo::InlinedStructPtr<PublicKeyCredentialParameters>;

class CableAuthentication;
using CableAuthenticationPtr = mojo::StructPtr<CableAuthentication>;

class CableRegistration;
using CableRegistrationPtr = mojo::StructPtr<CableRegistration>;

class PRFValues;
using PRFValuesPtr = mojo::StructPtr<PRFValues>;

class PaymentOptions;
using PaymentOptionsPtr = mojo::StructPtr<PaymentOptions>;

class PaymentCredentialInstrument;
using PaymentCredentialInstrumentPtr = mojo::StructPtr<PaymentCredentialInstrument>;

class RemoteDesktopClientOverride;
using RemoteDesktopClientOverridePtr = mojo::StructPtr<RemoteDesktopClientOverride>;

class PublicKeyCredentialRequestOptions;
using PublicKeyCredentialRequestOptionsPtr = mojo::StructPtr<PublicKeyCredentialRequestOptions>;

class AuthenticatorSelectionCriteria;
using AuthenticatorSelectionCriteriaPtr = mojo::InlinedStructPtr<AuthenticatorSelectionCriteria>;

class PublicKeyCredentialCreationOptions;
using PublicKeyCredentialCreationOptionsPtr = mojo::StructPtr<PublicKeyCredentialCreationOptions>;

class PublicKeyCredentialDescriptor;
using PublicKeyCredentialDescriptorPtr = mojo::StructPtr<PublicKeyCredentialDescriptor>;

class WebAuthnDOMExceptionDetails;
using WebAuthnDOMExceptionDetailsPtr = mojo::InlinedStructPtr<WebAuthnDOMExceptionDetails>;

class Authenticator;




}  // namespace blink
}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBAUTHN_AUTHENTICATOR_MOJOM_BLINK_FORWARD_H_