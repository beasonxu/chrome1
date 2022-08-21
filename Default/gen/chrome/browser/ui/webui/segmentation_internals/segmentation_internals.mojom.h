// chrome/browser/ui/webui/segmentation_internals/segmentation_internals.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_SEGMENTATION_INTERNALS_SEGMENTATION_INTERNALS_MOJOM_H_
#define CHROME_BROWSER_UI_WEBUI_SEGMENTATION_INTERNALS_SEGMENTATION_INTERNALS_MOJOM_H_

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

#include "chrome/browser/ui/webui/segmentation_internals/segmentation_internals.mojom-shared.h"
#include "chrome/browser/ui/webui/segmentation_internals/segmentation_internals.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace segmentation_internals {
namespace mojom {

class PageHandlerFactoryProxy;

template <typename ImplRefTraits>
class PageHandlerFactoryStub;

class PageHandlerFactoryRequestValidator;


class  PageHandlerFactory
    : public PageHandlerFactoryInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PageHandlerFactoryInterfaceBase;
  using Proxy_ = PageHandlerFactoryProxy;

  template <typename ImplRefTraits>
  using Stub_ = PageHandlerFactoryStub<ImplRefTraits>;

  using RequestValidator_ = PageHandlerFactoryRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kCreatePageHandlerMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct CreatePageHandler_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~PageHandlerFactory() = default;

  
  virtual void CreatePageHandler(::mojo::PendingRemote<Page> page, ::mojo::PendingReceiver<PageHandler> handler) = 0;
};

class PageHandlerProxy;

template <typename ImplRefTraits>
class PageHandlerStub;

class PageHandlerRequestValidator;


class  PageHandler
    : public PageHandlerInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PageHandlerInterfaceBase;
  using Proxy_ = PageHandlerProxy;

  template <typename ImplRefTraits>
  using Stub_ = PageHandlerStub<ImplRefTraits>;

  using RequestValidator_ = PageHandlerRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kGetServiceStatusMinVersion = 0,
    kExecuteModelMinVersion = 0,
    kOverwriteResultMinVersion = 0,
    kSetSelectedMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct GetServiceStatus_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ExecuteModel_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OverwriteResult_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct SetSelected_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~PageHandler() = default;

  
  virtual void GetServiceStatus() = 0;

  
  virtual void ExecuteModel(int32_t segment_id) = 0;

  
  virtual void OverwriteResult(int32_t segment_id, float result) = 0;

  
  virtual void SetSelected(const std::string& segmentation_key, int32_t optimization_target) = 0;
};

class PageProxy;

template <typename ImplRefTraits>
class PageStub;

class PageRequestValidator;


class  Page
    : public PageInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = PageInterfaceBase;
  using Proxy_ = PageProxy;

  template <typename ImplRefTraits>
  using Stub_ = PageStub<ImplRefTraits>;

  using RequestValidator_ = PageRequestValidator;
  using ResponseValidator_ = mojo::PassThroughFilter;
  enum MethodMinVersions : uint32_t {
    kOnServiceStatusChangedMinVersion = 0,
    kOnClientInfoAvailableMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct OnServiceStatusChanged_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct OnClientInfoAvailable_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~Page() = default;

  
  virtual void OnServiceStatusChanged(bool is_initialized, int32_t status_flag) = 0;

  
  virtual void OnClientInfoAvailable(std::vector<ClientInfoPtr> client_info) = 0;
};



class  PageHandlerFactoryProxy
    : public PageHandlerFactory {
 public:
  using InterfaceType = PageHandlerFactory;

  explicit PageHandlerFactoryProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void CreatePageHandler(::mojo::PendingRemote<Page> page, ::mojo::PendingReceiver<PageHandler> handler) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  PageHandlerProxy
    : public PageHandler {
 public:
  using InterfaceType = PageHandler;

  explicit PageHandlerProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void GetServiceStatus() final;
  
  void ExecuteModel(int32_t segment_id) final;
  
  void OverwriteResult(int32_t segment_id, float result) final;
  
  void SetSelected(const std::string& segmentation_key, int32_t optimization_target) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};



class  PageProxy
    : public Page {
 public:
  using InterfaceType = Page;

  explicit PageProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void OnServiceStatusChanged(bool is_initialized, int32_t status_flag) final;
  
  void OnClientInfoAvailable(std::vector<ClientInfoPtr> client_info) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  PageHandlerFactoryStubDispatch {
 public:
  static bool Accept(PageHandlerFactory* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PageHandlerFactory* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PageHandlerFactory>>
class PageHandlerFactoryStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PageHandlerFactoryStub() = default;
  ~PageHandlerFactoryStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageHandlerFactoryStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageHandlerFactoryStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PageHandlerStubDispatch {
 public:
  static bool Accept(PageHandler* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      PageHandler* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<PageHandler>>
class PageHandlerStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PageHandlerStub() = default;
  ~PageHandlerStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageHandlerStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageHandlerStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PageStubDispatch {
 public:
  static bool Accept(Page* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      Page* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<Page>>
class PageStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  PageStub() = default;
  ~PageStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return PageStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  PageHandlerFactoryRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PageHandlerRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  PageRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};





class  ServiceStatus {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ServiceStatus, T>::value>;
  using DataView = ServiceStatusDataView;
  using Data_ = internal::ServiceStatus_Data;

  template <typename... Args>
  static ServiceStatusPtr New(Args&&... args) {
    return ServiceStatusPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ServiceStatusPtr From(const U& u) {
    return mojo::TypeConverter<ServiceStatusPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ServiceStatus>::Convert(*this);
  }


  ServiceStatus();

  ServiceStatus(
      bool is_initialized,
      int32_t intialization_status);


  ~ServiceStatus();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ServiceStatusPtr>
  ServiceStatusPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ServiceStatus::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ServiceStatus::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ServiceStatus::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ServiceStatus::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ServiceStatus_UnserializedMessageContext<
            UserType, ServiceStatus::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ServiceStatus::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ServiceStatus::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ServiceStatus_UnserializedMessageContext<
            UserType, ServiceStatus::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ServiceStatus::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  bool is_initialized;
  
  int32_t intialization_status;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ServiceStatus::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ServiceStatus::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ServiceStatus::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ServiceStatus::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}










class  SegmentInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<SegmentInfo, T>::value>;
  using DataView = SegmentInfoDataView;
  using Data_ = internal::SegmentInfo_Data;

  template <typename... Args>
  static SegmentInfoPtr New(Args&&... args) {
    return SegmentInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static SegmentInfoPtr From(const U& u) {
    return mojo::TypeConverter<SegmentInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, SegmentInfo>::Convert(*this);
  }


  SegmentInfo();

  SegmentInfo(
      const std::string& segment_name,
      int32_t segment_id,
      const std::string& segment_data,
      bool can_execute_segment,
      const std::string& prediction_result);


  ~SegmentInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = SegmentInfoPtr>
  SegmentInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, SegmentInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, SegmentInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  size_t Hash(size_t seed) const;
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        SegmentInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        SegmentInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::SegmentInfo_UnserializedMessageContext<
            UserType, SegmentInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<SegmentInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return SegmentInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::SegmentInfo_UnserializedMessageContext<
            UserType, SegmentInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<SegmentInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  std::string segment_name;
  
  int32_t segment_id;
  
  std::string segment_data;
  
  bool can_execute_segment;
  
  std::string prediction_result;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, SegmentInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, SegmentInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, SegmentInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, SegmentInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class  ClientInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ClientInfo, T>::value>;
  using DataView = ClientInfoDataView;
  using Data_ = internal::ClientInfo_Data;

  template <typename... Args>
  static ClientInfoPtr New(Args&&... args) {
    return ClientInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ClientInfoPtr From(const U& u) {
    return mojo::TypeConverter<ClientInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ClientInfo>::Convert(*this);
  }


  ClientInfo();

  ClientInfo(
      const std::string& segmentation_key,
      const std::string& selected_segment,
      std::vector<SegmentInfoPtr> segment_info);

ClientInfo(const ClientInfo&) = delete;
ClientInfo& operator=(const ClientInfo&) = delete;

  ~ClientInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ClientInfoPtr>
  ClientInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ClientInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ClientInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        ClientInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ClientInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ClientInfo_UnserializedMessageContext<
            UserType, ClientInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ClientInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ClientInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ClientInfo_UnserializedMessageContext<
            UserType, ClientInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ClientInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  std::string segmentation_key;
  
  std::string selected_segment;
  
  std::vector<SegmentInfoPtr> segment_info;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ClientInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ClientInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ClientInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ClientInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
ServiceStatusPtr ServiceStatus::Clone() const {
  return New(
      mojo::Clone(is_initialized),
      mojo::Clone(intialization_status)
  );
}

template <typename T, ServiceStatus::EnableIfSame<T>*>
bool ServiceStatus::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->is_initialized, other_struct.is_initialized))
    return false;
  if (!mojo::Equals(this->intialization_status, other_struct.intialization_status))
    return false;
  return true;
}

template <typename T, ServiceStatus::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.is_initialized < rhs.is_initialized)
    return true;
  if (rhs.is_initialized < lhs.is_initialized)
    return false;
  if (lhs.intialization_status < rhs.intialization_status)
    return true;
  if (rhs.intialization_status < lhs.intialization_status)
    return false;
  return false;
}
template <typename StructPtrType>
SegmentInfoPtr SegmentInfo::Clone() const {
  return New(
      mojo::Clone(segment_name),
      mojo::Clone(segment_id),
      mojo::Clone(segment_data),
      mojo::Clone(can_execute_segment),
      mojo::Clone(prediction_result)
  );
}

template <typename T, SegmentInfo::EnableIfSame<T>*>
bool SegmentInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->segment_name, other_struct.segment_name))
    return false;
  if (!mojo::Equals(this->segment_id, other_struct.segment_id))
    return false;
  if (!mojo::Equals(this->segment_data, other_struct.segment_data))
    return false;
  if (!mojo::Equals(this->can_execute_segment, other_struct.can_execute_segment))
    return false;
  if (!mojo::Equals(this->prediction_result, other_struct.prediction_result))
    return false;
  return true;
}

template <typename T, SegmentInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.segment_name < rhs.segment_name)
    return true;
  if (rhs.segment_name < lhs.segment_name)
    return false;
  if (lhs.segment_id < rhs.segment_id)
    return true;
  if (rhs.segment_id < lhs.segment_id)
    return false;
  if (lhs.segment_data < rhs.segment_data)
    return true;
  if (rhs.segment_data < lhs.segment_data)
    return false;
  if (lhs.can_execute_segment < rhs.can_execute_segment)
    return true;
  if (rhs.can_execute_segment < lhs.can_execute_segment)
    return false;
  if (lhs.prediction_result < rhs.prediction_result)
    return true;
  if (rhs.prediction_result < lhs.prediction_result)
    return false;
  return false;
}
template <typename StructPtrType>
ClientInfoPtr ClientInfo::Clone() const {
  return New(
      mojo::Clone(segmentation_key),
      mojo::Clone(selected_segment),
      mojo::Clone(segment_info)
  );
}

template <typename T, ClientInfo::EnableIfSame<T>*>
bool ClientInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->segmentation_key, other_struct.segmentation_key))
    return false;
  if (!mojo::Equals(this->selected_segment, other_struct.selected_segment))
    return false;
  if (!mojo::Equals(this->segment_info, other_struct.segment_info))
    return false;
  return true;
}

template <typename T, ClientInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.segmentation_key < rhs.segmentation_key)
    return true;
  if (rhs.segmentation_key < lhs.segmentation_key)
    return false;
  if (lhs.selected_segment < rhs.selected_segment)
    return true;
  if (rhs.selected_segment < lhs.selected_segment)
    return false;
  if (lhs.segment_info < rhs.segment_info)
    return true;
  if (rhs.segment_info < lhs.segment_info)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace segmentation_internals

namespace mojo {


template <>
struct  StructTraits<::segmentation_internals::mojom::ServiceStatus::DataView,
                                         ::segmentation_internals::mojom::ServiceStatusPtr> {
  static bool IsNull(const ::segmentation_internals::mojom::ServiceStatusPtr& input) { return !input; }
  static void SetToNull(::segmentation_internals::mojom::ServiceStatusPtr* output) { output->reset(); }

  static decltype(::segmentation_internals::mojom::ServiceStatus::is_initialized) is_initialized(
      const ::segmentation_internals::mojom::ServiceStatusPtr& input) {
    return input->is_initialized;
  }

  static decltype(::segmentation_internals::mojom::ServiceStatus::intialization_status) intialization_status(
      const ::segmentation_internals::mojom::ServiceStatusPtr& input) {
    return input->intialization_status;
  }

  static bool Read(::segmentation_internals::mojom::ServiceStatus::DataView input, ::segmentation_internals::mojom::ServiceStatusPtr* output);
};


template <>
struct  StructTraits<::segmentation_internals::mojom::SegmentInfo::DataView,
                                         ::segmentation_internals::mojom::SegmentInfoPtr> {
  static bool IsNull(const ::segmentation_internals::mojom::SegmentInfoPtr& input) { return !input; }
  static void SetToNull(::segmentation_internals::mojom::SegmentInfoPtr* output) { output->reset(); }

  static const decltype(::segmentation_internals::mojom::SegmentInfo::segment_name)& segment_name(
      const ::segmentation_internals::mojom::SegmentInfoPtr& input) {
    return input->segment_name;
  }

  static decltype(::segmentation_internals::mojom::SegmentInfo::segment_id) segment_id(
      const ::segmentation_internals::mojom::SegmentInfoPtr& input) {
    return input->segment_id;
  }

  static const decltype(::segmentation_internals::mojom::SegmentInfo::segment_data)& segment_data(
      const ::segmentation_internals::mojom::SegmentInfoPtr& input) {
    return input->segment_data;
  }

  static decltype(::segmentation_internals::mojom::SegmentInfo::can_execute_segment) can_execute_segment(
      const ::segmentation_internals::mojom::SegmentInfoPtr& input) {
    return input->can_execute_segment;
  }

  static const decltype(::segmentation_internals::mojom::SegmentInfo::prediction_result)& prediction_result(
      const ::segmentation_internals::mojom::SegmentInfoPtr& input) {
    return input->prediction_result;
  }

  static bool Read(::segmentation_internals::mojom::SegmentInfo::DataView input, ::segmentation_internals::mojom::SegmentInfoPtr* output);
};


template <>
struct  StructTraits<::segmentation_internals::mojom::ClientInfo::DataView,
                                         ::segmentation_internals::mojom::ClientInfoPtr> {
  static bool IsNull(const ::segmentation_internals::mojom::ClientInfoPtr& input) { return !input; }
  static void SetToNull(::segmentation_internals::mojom::ClientInfoPtr* output) { output->reset(); }

  static const decltype(::segmentation_internals::mojom::ClientInfo::segmentation_key)& segmentation_key(
      const ::segmentation_internals::mojom::ClientInfoPtr& input) {
    return input->segmentation_key;
  }

  static const decltype(::segmentation_internals::mojom::ClientInfo::selected_segment)& selected_segment(
      const ::segmentation_internals::mojom::ClientInfoPtr& input) {
    return input->selected_segment;
  }

  static const decltype(::segmentation_internals::mojom::ClientInfo::segment_info)& segment_info(
      const ::segmentation_internals::mojom::ClientInfoPtr& input) {
    return input->segment_info;
  }

  static bool Read(::segmentation_internals::mojom::ClientInfo::DataView input, ::segmentation_internals::mojom::ClientInfoPtr* output);
};

}  // namespace mojo

#endif  // CHROME_BROWSER_UI_WEBUI_SEGMENTATION_INTERNALS_SEGMENTATION_INTERNALS_MOJOM_H_