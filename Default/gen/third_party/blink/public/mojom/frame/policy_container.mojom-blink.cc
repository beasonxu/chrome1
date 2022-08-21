// third_party/blink/public/mojom/frame/policy_container.mojom-blink.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "third_party/blink/public/mojom/frame/policy_container.mojom-blink.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/debug/alias.h"
#include "base/hash/md5_constexpr.h"
#include "base/run_loop.h"
#include "base/strings/string_number_conversions.h"
#include "base/trace_event/trace_event.h"
#include "base/trace_event/typed_macros.h"
#include "mojo/public/cpp/bindings/lib/generated_code_util.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/send_message_helper.h"
#include "mojo/public/cpp/bindings/lib/proxy_to_responder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "third_party/blink/public/mojom/frame/policy_container.mojom-params-data.h"
#include "third_party/blink/public/mojom/frame/policy_container.mojom-shared-message-ids.h"

#include "third_party/blink/public/mojom/frame/policy_container.mojom-blink-import-headers.h"
#include "third_party/blink/public/mojom/frame/policy_container.mojom-blink-test-utils.h"
#include "mojo/public/cpp/bindings/lib/wtf_serialization.h"


#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_POLICY_CONTAINER_MOJOM_BLINK_JUMBO_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_FRAME_POLICY_CONTAINER_MOJOM_BLINK_JUMBO_H_
#endif



namespace blink {
namespace mojom {
namespace blink {
PolicyContainerPolicies::PolicyContainerPolicies()
    : cross_origin_embedder_policy(::network::mojom::blink::CrossOriginEmbedderPolicyValue::kNone),
      referrer_policy(::network::mojom::blink::ReferrerPolicy::kDefault),
      content_security_policies(),
      is_anonymous(false),
      sandbox_flags(::network::mojom::blink::WebSandboxFlags::kNone) {}

PolicyContainerPolicies::PolicyContainerPolicies(
    ::network::mojom::blink::CrossOriginEmbedderPolicyValue cross_origin_embedder_policy_in,
    ::network::mojom::blink::ReferrerPolicy referrer_policy_in,
    WTF::Vector<::network::mojom::blink::ContentSecurityPolicyPtr> content_security_policies_in,
    bool is_anonymous_in,
    ::network::mojom::blink::WebSandboxFlags sandbox_flags_in)
    : cross_origin_embedder_policy(std::move(cross_origin_embedder_policy_in)),
      referrer_policy(std::move(referrer_policy_in)),
      content_security_policies(std::move(content_security_policies_in)),
      is_anonymous(std::move(is_anonymous_in)),
      sandbox_flags(std::move(sandbox_flags_in)) {}

PolicyContainerPolicies::~PolicyContainerPolicies() = default;

void PolicyContainerPolicies::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "cross_origin_embedder_policy"), this->cross_origin_embedder_policy,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::network::mojom::blink::CrossOriginEmbedderPolicyValue>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "referrer_policy"), this->referrer_policy,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::network::mojom::blink::ReferrerPolicy>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "content_security_policies"), this->content_security_policies,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type WTF::Vector<::network::mojom::blink::ContentSecurityPolicyPtr>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "is_anonymous"), this->is_anonymous,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type bool>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "sandbox_flags"), this->sandbox_flags,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::network::mojom::blink::WebSandboxFlags>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool PolicyContainerPolicies::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PolicyContainer::PolicyContainer()
    : policies(),
      remote() {}

PolicyContainer::PolicyContainer(
    PolicyContainerPoliciesPtr policies_in,
    ::mojo::PendingAssociatedRemote<PolicyContainerHost> remote_in)
    : policies(std::move(policies_in)),
      remote(std::move(remote_in)) {}

PolicyContainer::~PolicyContainer() = default;

void PolicyContainer::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "policies"), this->policies,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type PolicyContainerPoliciesPtr>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "remote"), this->remote,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::PendingAssociatedRemote<PolicyContainerHost>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool PolicyContainer::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
PolicyContainerBindParams::PolicyContainerBindParams()
    : receiver() {}

PolicyContainerBindParams::PolicyContainerBindParams(
    ::mojo::PendingAssociatedReceiver<PolicyContainerHost> receiver_in)
    : receiver(std::move(receiver_in)) {}

PolicyContainerBindParams::~PolicyContainerBindParams() = default;

void PolicyContainerBindParams::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "receiver"), this->receiver,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type ::mojo::PendingAssociatedReceiver<PolicyContainerHost>>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool PolicyContainerBindParams::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char PolicyContainerHost::Name_[] = "blink.mojom.PolicyContainerHost";

PolicyContainerHost::IPCStableHashFunction PolicyContainerHost::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kPolicyContainerHost_SetReferrerPolicy_Name: {
      return &PolicyContainerHost::SetReferrerPolicy_Sym::IPCStableHash;
    }
    case internal::kPolicyContainerHost_AddContentSecurityPolicies_Name: {
      return &PolicyContainerHost::AddContentSecurityPolicies_Sym::IPCStableHash;
    }
    case internal::kPolicyContainerHost_IssueKeepAliveHandle_Name: {
      return &PolicyContainerHost::IssueKeepAliveHandle_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* PolicyContainerHost::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kPolicyContainerHost_SetReferrerPolicy_Name:
            return "Receive blink::mojom::PolicyContainerHost::SetReferrerPolicy";
      case internal::kPolicyContainerHost_AddContentSecurityPolicies_Name:
            return "Receive blink::mojom::PolicyContainerHost::AddContentSecurityPolicies";
      case internal::kPolicyContainerHost_IssueKeepAliveHandle_Name:
            return "Receive blink::mojom::PolicyContainerHost::IssueKeepAliveHandle";
    }
  } else {
    switch (message.name()) {
      case internal::kPolicyContainerHost_SetReferrerPolicy_Name:
            return "Receive reply blink::mojom::PolicyContainerHost::SetReferrerPolicy";
      case internal::kPolicyContainerHost_AddContentSecurityPolicies_Name:
            return "Receive reply blink::mojom::PolicyContainerHost::AddContentSecurityPolicies";
      case internal::kPolicyContainerHost_IssueKeepAliveHandle_Name:
            return "Receive reply blink::mojom::PolicyContainerHost::IssueKeepAliveHandle";
    }
  }
  return "Receive unknown mojo message";
#else
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (is_response) {
    return "Receive mojo reply";
  } else {
    return "Receive mojo message";
  }
#endif // BUILDFLAG(MOJO_TRACE_ENABLED)
}

#if !BUILDFLAG(IS_FUCHSIA)
uint32_t PolicyContainerHost::SetReferrerPolicy_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::PolicyContainerHost::SetReferrerPolicy");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t PolicyContainerHost::AddContentSecurityPolicies_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::PolicyContainerHost::AddContentSecurityPolicies");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t PolicyContainerHost::IssueKeepAliveHandle_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)blink::mojom::PolicyContainerHost::IssueKeepAliveHandle");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

PolicyContainerHostProxy::PolicyContainerHostProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void PolicyContainerHostProxy::SetReferrerPolicy(
    ::network::mojom::blink::ReferrerPolicy in_referrer_policy) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::PolicyContainerHost::SetReferrerPolicy", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("referrer_policy"), in_referrer_policy,
                        "<value of type ::network::mojom::blink::ReferrerPolicy>");
   });
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kPolicyContainerHost_SetReferrerPolicy_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::PolicyContainerHost_SetReferrerPolicy_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<::network::mojom::ReferrerPolicy>(
      in_referrer_policy, &params->referrer_policy);

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PolicyContainerHost::Name_);
  message.set_method_name("SetReferrerPolicy");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void PolicyContainerHostProxy::AddContentSecurityPolicies(
    WTF::Vector<::network::mojom::blink::ContentSecurityPolicyPtr> in_content_security_policies) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::PolicyContainerHost::AddContentSecurityPolicies", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("content_security_policies"), in_content_security_policies,
                        "<value of type WTF::Vector<::network::mojom::blink::ContentSecurityPolicyPtr>>");
   });
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kPolicyContainerHost_AddContentSecurityPolicies_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::PolicyContainerHost_AddContentSecurityPolicies_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->content_security_policies)::BaseType>
      content_security_policies_fragment(params.message());
  const mojo::internal::ContainerValidateParams content_security_policies_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::network::mojom::ContentSecurityPolicyDataView>>(
      in_content_security_policies, content_security_policies_fragment, &content_security_policies_validate_params);
  params->content_security_policies.Set(
      content_security_policies_fragment.is_null() ? nullptr : content_security_policies_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->content_security_policies.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null content_security_policies in PolicyContainerHost.AddContentSecurityPolicies request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PolicyContainerHost::Name_);
  message.set_method_name("AddContentSecurityPolicies");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void PolicyContainerHostProxy::IssueKeepAliveHandle(
    ::mojo::PendingReceiver<PolicyContainerHostKeepAliveHandle> in_receiver) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send blink::mojom::PolicyContainerHost::IssueKeepAliveHandle", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("receiver"), in_receiver,
                        "<value of type ::mojo::PendingReceiver<PolicyContainerHostKeepAliveHandle>>");
   });
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kPolicyContainerHost_IssueKeepAliveHandle_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::blink::mojom::internal::PolicyContainerHost_IssueKeepAliveHandle_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::Serialize<mojo::InterfaceRequestDataView<::blink::mojom::PolicyContainerHostKeepAliveHandleInterfaceBase>>(
      in_receiver, &params->receiver, &params.message());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      !mojo::internal::IsHandleOrInterfaceValid(params->receiver),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_INVALID_HANDLE,
      "invalid receiver in PolicyContainerHost.IssueKeepAliveHandle request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(PolicyContainerHost::Name_);
  message.set_method_name("IssueKeepAliveHandle");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

// static
bool PolicyContainerHostStubDispatch::Accept(
    PolicyContainerHost* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kPolicyContainerHost_SetReferrerPolicy_Name: {

      DCHECK(message->is_serialized());
      internal::PolicyContainerHost_SetReferrerPolicy_Params_Data* params =
          reinterpret_cast<internal::PolicyContainerHost_SetReferrerPolicy_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::network::mojom::blink::ReferrerPolicy p_referrer_policy{};
      PolicyContainerHost_SetReferrerPolicy_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadReferrerPolicy(&p_referrer_policy))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PolicyContainerHost::Name_, 0, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->SetReferrerPolicy(
std::move(p_referrer_policy));
      return true;
    }
    case internal::kPolicyContainerHost_AddContentSecurityPolicies_Name: {

      DCHECK(message->is_serialized());
      internal::PolicyContainerHost_AddContentSecurityPolicies_Params_Data* params =
          reinterpret_cast<internal::PolicyContainerHost_AddContentSecurityPolicies_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      WTF::Vector<::network::mojom::blink::ContentSecurityPolicyPtr> p_content_security_policies{};
      PolicyContainerHost_AddContentSecurityPolicies_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadContentSecurityPolicies(&p_content_security_policies))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PolicyContainerHost::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->AddContentSecurityPolicies(
std::move(p_content_security_policies));
      return true;
    }
    case internal::kPolicyContainerHost_IssueKeepAliveHandle_Name: {

      DCHECK(message->is_serialized());
      internal::PolicyContainerHost_IssueKeepAliveHandle_Params_Data* params =
          reinterpret_cast<internal::PolicyContainerHost_IssueKeepAliveHandle_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      ::mojo::PendingReceiver<PolicyContainerHostKeepAliveHandle> p_receiver{};
      PolicyContainerHost_IssueKeepAliveHandle_ParamsDataView input_data_view(params, message);
      
      if (success) {
        p_receiver =
            input_data_view.TakeReceiver<decltype(p_receiver)>();
      }
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            PolicyContainerHost::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->IssueKeepAliveHandle(
std::move(p_receiver));
      return true;
    }
  }
  return false;
}

// static
bool PolicyContainerHostStubDispatch::AcceptWithResponder(
    PolicyContainerHost* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kPolicyContainerHost_SetReferrerPolicy_Name: {
      break;
    }
    case internal::kPolicyContainerHost_AddContentSecurityPolicies_Name: {
      break;
    }
    case internal::kPolicyContainerHost_IssueKeepAliveHandle_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kPolicyContainerHostValidationInfo[] = {
    {&internal::PolicyContainerHost_SetReferrerPolicy_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::PolicyContainerHost_AddContentSecurityPolicies_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::PolicyContainerHost_IssueKeepAliveHandle_Params_Data::Validate,
     nullptr /* no response */},
};

bool PolicyContainerHostRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::blink::PolicyContainerHost::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kPolicyContainerHostValidationInfo);
}

const char PolicyContainerHostKeepAliveHandle::Name_[] = "blink.mojom.PolicyContainerHostKeepAliveHandle";

PolicyContainerHostKeepAliveHandle::IPCStableHashFunction PolicyContainerHostKeepAliveHandle::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* PolicyContainerHostKeepAliveHandle::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  return "Receive unknown mojo message";
#else
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (is_response) {
    return "Receive mojo reply";
  } else {
    return "Receive mojo message";
  }
#endif // BUILDFLAG(MOJO_TRACE_ENABLED)
}

#if !BUILDFLAG(IS_FUCHSIA)
# endif // !BUILDFLAG(IS_FUCHSIA)

PolicyContainerHostKeepAliveHandleProxy::PolicyContainerHostKeepAliveHandleProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

// static
bool PolicyContainerHostKeepAliveHandleStubDispatch::Accept(
    PolicyContainerHostKeepAliveHandle* impl,
    mojo::Message* message) {
  return false;
}

// static
bool PolicyContainerHostKeepAliveHandleStubDispatch::AcceptWithResponder(
    PolicyContainerHostKeepAliveHandle* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  return false;
}



bool PolicyContainerHostKeepAliveHandleRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::blink::mojom::blink::PolicyContainerHostKeepAliveHandle::Name_;
  return mojo::internal::ValidateRequestGeneric(message, name, {});
}



}  // namespace blink
}  // namespace mojom
}  // namespace blink


namespace mojo {


// static
bool StructTraits<::blink::mojom::blink::PolicyContainerPolicies::DataView, ::blink::mojom::blink::PolicyContainerPoliciesPtr>::Read(
    ::blink::mojom::blink::PolicyContainerPolicies::DataView input,
    ::blink::mojom::blink::PolicyContainerPoliciesPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PolicyContainerPoliciesPtr result(::blink::mojom::blink::PolicyContainerPolicies::New());
  
      if (success && !input.ReadCrossOriginEmbedderPolicy(&result->cross_origin_embedder_policy))
        success = false;
      if (success && !input.ReadReferrerPolicy(&result->referrer_policy))
        success = false;
      if (success && !input.ReadContentSecurityPolicies(&result->content_security_policies))
        success = false;
      if (success)
        result->is_anonymous = input.is_anonymous();
      if (success && !input.ReadSandboxFlags(&result->sandbox_flags))
        success = false;
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PolicyContainer::DataView, ::blink::mojom::blink::PolicyContainerPtr>::Read(
    ::blink::mojom::blink::PolicyContainer::DataView input,
    ::blink::mojom::blink::PolicyContainerPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PolicyContainerPtr result(::blink::mojom::blink::PolicyContainer::New());
  
      if (success && !input.ReadPolicies(&result->policies))
        success = false;
      if (success) {
        result->remote =
            input.TakeRemote<decltype(result->remote)>();
      }
  *output = std::move(result);
  return success;
}


// static
bool StructTraits<::blink::mojom::blink::PolicyContainerBindParams::DataView, ::blink::mojom::blink::PolicyContainerBindParamsPtr>::Read(
    ::blink::mojom::blink::PolicyContainerBindParams::DataView input,
    ::blink::mojom::blink::PolicyContainerBindParamsPtr* output) {
  bool success = true;
  ::blink::mojom::blink::PolicyContainerBindParamsPtr result(::blink::mojom::blink::PolicyContainerBindParams::New());
  
      if (success) {
        result->receiver =
            input.TakeReceiver<decltype(result->receiver)>();
      }
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace blink {
namespace mojom {
namespace blink {


void PolicyContainerHostInterceptorForTesting::SetReferrerPolicy(::network::mojom::blink::ReferrerPolicy referrer_policy) {
  GetForwardingInterface()->SetReferrerPolicy(std::move(referrer_policy));
}
void PolicyContainerHostInterceptorForTesting::AddContentSecurityPolicies(WTF::Vector<::network::mojom::blink::ContentSecurityPolicyPtr> content_security_policies) {
  GetForwardingInterface()->AddContentSecurityPolicies(std::move(content_security_policies));
}
void PolicyContainerHostInterceptorForTesting::IssueKeepAliveHandle(::mojo::PendingReceiver<PolicyContainerHostKeepAliveHandle> receiver) {
  GetForwardingInterface()->IssueKeepAliveHandle(std::move(receiver));
}
PolicyContainerHostAsyncWaiter::PolicyContainerHostAsyncWaiter(
    PolicyContainerHost* proxy) : proxy_(proxy) {}

PolicyContainerHostAsyncWaiter::~PolicyContainerHostAsyncWaiter() = default;




PolicyContainerHostKeepAliveHandleAsyncWaiter::PolicyContainerHostKeepAliveHandleAsyncWaiter(
    PolicyContainerHostKeepAliveHandle* proxy) : proxy_(proxy) {}

PolicyContainerHostKeepAliveHandleAsyncWaiter::~PolicyContainerHostKeepAliveHandleAsyncWaiter() = default;






}  // namespace blink
}  // namespace mojom
}  // namespace blink


#if defined(__clang__)
#pragma clang diagnostic pop
#endif