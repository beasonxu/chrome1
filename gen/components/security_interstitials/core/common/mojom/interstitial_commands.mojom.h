// components/security_interstitials/core/common/mojom/interstitial_commands.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_MOJOM_INTERSTITIAL_COMMANDS_MOJOM_H_
#define COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_MOJOM_INTERSTITIAL_COMMANDS_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "components/security_interstitials/core/common/mojom/interstitial_commands.mojom-shared.h"
#include "components/security_interstitials/core/common/mojom/interstitial_commands.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace security_interstitials {
namespace mojom {

class InterstitialCommandsProxy;

template <typename ImplRefTraits>
class InterstitialCommandsStub;

class InterstitialCommandsRequestValidator;


class  InterstitialCommands
    : public InterstitialCommandsInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = InterstitialCommandsInterfaceBase;
  using Proxy_ = InterstitialCommandsProxy;

  template <typename ImplRefTraits>
  using Stub_ = InterstitialCommandsStub<ImplRefTraits>;

  using RequestValidator_ = InterstitialCommandsRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kDontProceedMinVersion = 0,
    kProceedMinVersion = 0,
    kShowMoreSectionMinVersion = 0,
    kOpenHelpCenterMinVersion = 0,
    kOpenDiagnosticMinVersion = 0,
    kReloadMinVersion = 0,
    kOpenDateSettingsMinVersion = 0,
    kOpenLoginMinVersion = 0,
    kDoReportMinVersion = 0,
    kDontReportMinVersion = 0,
    kOpenReportingPrivacyMinVersion = 0,
    kOpenWhitepaperMinVersion = 0,
    kReportPhishingErrorMinVersion = 0,
    kOpenEnhancedProtectionSettingsMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct DontProceed_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Proceed_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ShowMoreSection_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OpenHelpCenter_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OpenDiagnostic_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct Reload_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OpenDateSettings_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OpenLogin_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DoReport_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct DontReport_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OpenReportingPrivacy_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OpenWhitepaper_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReportPhishingError_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OpenEnhancedProtectionSettings_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~InterstitialCommands() = default;

  
  virtual void DontProceed() = 0;

  
  virtual void Proceed() = 0;

  
  virtual void ShowMoreSection() = 0;

  
  virtual void OpenHelpCenter() = 0;

  
  virtual void OpenDiagnostic() = 0;

  
  virtual void Reload() = 0;

  
  virtual void OpenDateSettings() = 0;

  
  virtual void OpenLogin() = 0;

  
  virtual void DoReport() = 0;

  
  virtual void DontReport() = 0;

  
  virtual void OpenReportingPrivacy() = 0;

  
  virtual void OpenWhitepaper() = 0;

  
  virtual void ReportPhishingError() = 0;

  
  virtual void OpenEnhancedProtectionSettings() = 0;
};



class  InterstitialCommandsProxy
    : public InterstitialCommands {
 public:
  using InterfaceType = InterstitialCommands;

  explicit InterstitialCommandsProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void DontProceed() final;
  
  void Proceed() final;
  
  void ShowMoreSection() final;
  
  void OpenHelpCenter() final;
  
  void OpenDiagnostic() final;
  
  void Reload() final;
  
  void OpenDateSettings() final;
  
  void OpenLogin() final;
  
  void DoReport() final;
  
  void DontReport() final;
  
  void OpenReportingPrivacy() final;
  
  void OpenWhitepaper() final;
  
  void ReportPhishingError() final;
  
  void OpenEnhancedProtectionSettings() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  InterstitialCommandsStubDispatch {
 public:
  static bool Accept(InterstitialCommands* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      InterstitialCommands* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<InterstitialCommands>>
class InterstitialCommandsStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  InterstitialCommandsStub() = default;
  ~InterstitialCommandsStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterstitialCommandsStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return InterstitialCommandsStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  InterstitialCommandsRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





}  // namespace mojom
}  // namespace security_interstitials

namespace mojo {

}  // namespace mojo

#endif  // COMPONENTS_SECURITY_INTERSTITIALS_CORE_COMMON_MOJOM_INTERSTITIAL_COMMANDS_MOJOM_H_