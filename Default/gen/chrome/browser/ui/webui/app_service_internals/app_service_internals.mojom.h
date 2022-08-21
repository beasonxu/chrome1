// chrome/browser/ui/webui/app_service_internals/app_service_internals.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_APP_SERVICE_INTERNALS_APP_SERVICE_INTERNALS_MOJOM_H_
#define CHROME_BROWSER_UI_WEBUI_APP_SERVICE_INTERNALS_APP_SERVICE_INTERNALS_MOJOM_H_

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

#include "chrome/browser/ui/webui/app_service_internals/app_service_internals.mojom-shared.h"
#include "chrome/browser/ui/webui/app_service_internals/app_service_internals.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace mojom {
namespace app_service_internals {

class AppServiceInternalsPageHandlerProxy;

template <typename ImplRefTraits>
class AppServiceInternalsPageHandlerStub;

class AppServiceInternalsPageHandlerRequestValidator;
class AppServiceInternalsPageHandlerResponseValidator;


class  AppServiceInternalsPageHandler
    : public AppServiceInternalsPageHandlerInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = AppServiceInternalsPageHandlerInterfaceBase;
  using Proxy_ = AppServiceInternalsPageHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = AppServiceInternalsPageHandlerStub<ImplRefTraits>;

  using RequestValidator_ = AppServiceInternalsPageHandlerRequestValidator;
  using ResponseValidator_ = AppServiceInternalsPageHandlerResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetAppsMinVersion = 0,
    kGetPreferredAppsMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct GetApps_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetPreferredApps_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~AppServiceInternalsPageHandler() = default;


  using GetAppsCallback = base::OnceCallback<void(std::vector<AppInfoPtr>)>;
  
  virtual void GetApps(GetAppsCallback callback) = 0;


  using GetPreferredAppsCallback = base::OnceCallback<void(std::vector<PreferredAppInfoPtr>)>;
  
  virtual void GetPreferredApps(GetPreferredAppsCallback callback) = 0;
};



class  AppServiceInternalsPageHandlerProxy
    : public AppServiceInternalsPageHandler {
 public:
  using InterfaceType = AppServiceInternalsPageHandler;

  explicit AppServiceInternalsPageHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void GetApps(GetAppsCallback callback) final;
  
  void GetPreferredApps(GetPreferredAppsCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  AppServiceInternalsPageHandlerStubDispatch {
 public:
  static bool Accept(AppServiceInternalsPageHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      AppServiceInternalsPageHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<AppServiceInternalsPageHandler>>
class AppServiceInternalsPageHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  AppServiceInternalsPageHandlerStub() = default;
  ~AppServiceInternalsPageHandlerStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppServiceInternalsPageHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return AppServiceInternalsPageHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  AppServiceInternalsPageHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  AppServiceInternalsPageHandlerResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  AppInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<AppInfo, T>::value>;
  using DataView = AppInfoDataView;
  using Data_ = internal::AppInfo_Data;

  template <typename... Args>
  static AppInfoPtr New(Args&&... args) {
    return AppInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static AppInfoPtr From(const U& u) {
    return mojo::TypeConverter<AppInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, AppInfo>::Convert(*this);
  }


  AppInfo();

  AppInfo(
      const std::string& id,
      const std::string& name,
      const std::string& debug_info);


  ~AppInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = AppInfoPtr>
  AppInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, AppInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, AppInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        AppInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        AppInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::AppInfo_UnserializedMessageContext<
            UserType, AppInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<AppInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return AppInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::AppInfo_UnserializedMessageContext<
            UserType, AppInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<AppInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  std::string id;
  
  std::string name;
  
  std::string debug_info;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, AppInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, AppInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, AppInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, AppInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class  PreferredAppInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<PreferredAppInfo, T>::value>;
  using DataView = PreferredAppInfoDataView;
  using Data_ = internal::PreferredAppInfo_Data;

  template <typename... Args>
  static PreferredAppInfoPtr New(Args&&... args) {
    return PreferredAppInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static PreferredAppInfoPtr From(const U& u) {
    return mojo::TypeConverter<PreferredAppInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, PreferredAppInfo>::Convert(*this);
  }


  PreferredAppInfo();

  PreferredAppInfo(
      const std::string& id,
      const std::string& name,
      const std::string& preferred_filters);


  ~PreferredAppInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = PreferredAppInfoPtr>
  PreferredAppInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, PreferredAppInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, PreferredAppInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        PreferredAppInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        PreferredAppInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::PreferredAppInfo_UnserializedMessageContext<
            UserType, PreferredAppInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<PreferredAppInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return PreferredAppInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::PreferredAppInfo_UnserializedMessageContext<
            UserType, PreferredAppInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<PreferredAppInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  std::string id;
  
  std::string name;
  
  std::string preferred_filters;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, PreferredAppInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, PreferredAppInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, PreferredAppInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, PreferredAppInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





template <typename StructPtrType>
AppInfoPtr AppInfo::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(debug_info)
  );
}

template <typename T, AppInfo::EnableIfSame<T>*>
bool AppInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->debug_info, other_struct.debug_info))
    return false;
  return true;
}

template <typename T, AppInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.id < rhs.id)
    return true;
  if (rhs.id < lhs.id)
    return false;
  if (lhs.name < rhs.name)
    return true;
  if (rhs.name < lhs.name)
    return false;
  if (lhs.debug_info < rhs.debug_info)
    return true;
  if (rhs.debug_info < lhs.debug_info)
    return false;
  return false;
}
template <typename StructPtrType>
PreferredAppInfoPtr PreferredAppInfo::Clone() const {
  return New(
      mojo::Clone(id),
      mojo::Clone(name),
      mojo::Clone(preferred_filters)
  );
}

template <typename T, PreferredAppInfo::EnableIfSame<T>*>
bool PreferredAppInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->id, other_struct.id))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->preferred_filters, other_struct.preferred_filters))
    return false;
  return true;
}

template <typename T, PreferredAppInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.id < rhs.id)
    return true;
  if (rhs.id < lhs.id)
    return false;
  if (lhs.name < rhs.name)
    return true;
  if (rhs.name < lhs.name)
    return false;
  if (lhs.preferred_filters < rhs.preferred_filters)
    return true;
  if (rhs.preferred_filters < lhs.preferred_filters)
    return false;
  return false;
}


}  // namespace app_service_internals
}  // namespace mojom

namespace mojo {


template <>
struct  StructTraits<::mojom::app_service_internals::AppInfo::DataView,
                                         ::mojom::app_service_internals::AppInfoPtr> {
  static bool IsNull(const ::mojom::app_service_internals::AppInfoPtr& input) { return !input; }
  static void SetToNull(::mojom::app_service_internals::AppInfoPtr* output) { output->reset(); }

  static const decltype(::mojom::app_service_internals::AppInfo::id)& id(
      const ::mojom::app_service_internals::AppInfoPtr& input) {
    return input->id;
  }

  static const decltype(::mojom::app_service_internals::AppInfo::name)& name(
      const ::mojom::app_service_internals::AppInfoPtr& input) {
    return input->name;
  }

  static const decltype(::mojom::app_service_internals::AppInfo::debug_info)& debug_info(
      const ::mojom::app_service_internals::AppInfoPtr& input) {
    return input->debug_info;
  }

  static bool Read(::mojom::app_service_internals::AppInfo::DataView input, ::mojom::app_service_internals::AppInfoPtr* output);
};


template <>
struct  StructTraits<::mojom::app_service_internals::PreferredAppInfo::DataView,
                                         ::mojom::app_service_internals::PreferredAppInfoPtr> {
  static bool IsNull(const ::mojom::app_service_internals::PreferredAppInfoPtr& input) { return !input; }
  static void SetToNull(::mojom::app_service_internals::PreferredAppInfoPtr* output) { output->reset(); }

  static const decltype(::mojom::app_service_internals::PreferredAppInfo::id)& id(
      const ::mojom::app_service_internals::PreferredAppInfoPtr& input) {
    return input->id;
  }

  static const decltype(::mojom::app_service_internals::PreferredAppInfo::name)& name(
      const ::mojom::app_service_internals::PreferredAppInfoPtr& input) {
    return input->name;
  }

  static const decltype(::mojom::app_service_internals::PreferredAppInfo::preferred_filters)& preferred_filters(
      const ::mojom::app_service_internals::PreferredAppInfoPtr& input) {
    return input->preferred_filters;
  }

  static bool Read(::mojom::app_service_internals::PreferredAppInfo::DataView input, ::mojom::app_service_internals::PreferredAppInfoPtr* output);
};

}  // namespace mojo

#endif  // CHROME_BROWSER_UI_WEBUI_APP_SERVICE_INTERNALS_APP_SERVICE_INTERNALS_MOJOM_H_