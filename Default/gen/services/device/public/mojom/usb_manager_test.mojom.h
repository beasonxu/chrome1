// services/device/public/mojom/usb_manager_test.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_DEVICE_PUBLIC_MOJOM_USB_MANAGER_TEST_MOJOM_H_
#define SERVICES_DEVICE_PUBLIC_MOJOM_USB_MANAGER_TEST_MOJOM_H_

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

#include "services/device/public/mojom/usb_manager_test.mojom-shared.h"
#include "services/device/public/mojom/usb_manager_test.mojom-forward.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"






namespace device {
namespace mojom {

class UsbDeviceManagerTestProxy;

template <typename ImplRefTraits>
class UsbDeviceManagerTestStub;

class UsbDeviceManagerTestRequestValidator;
class UsbDeviceManagerTestResponseValidator;


class  UsbDeviceManagerTest
    : public UsbDeviceManagerTestInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = UsbDeviceManagerTestInterfaceBase;
  using Proxy_ = UsbDeviceManagerTestProxy;

  template <typename ImplRefTraits>
  using Stub_ = UsbDeviceManagerTestStub<ImplRefTraits>;

  using RequestValidator_ = UsbDeviceManagerTestRequestValidator;
  using ResponseValidator_ = UsbDeviceManagerTestResponseValidator;
  enum MethodMinVersions : uint32_t {
    kAddDeviceForTestingMinVersion = 0,
    kRemoveDeviceForTestingMinVersion = 0,
    kGetTestDevicesMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct AddDeviceForTesting_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct RemoveDeviceForTesting_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct GetTestDevices_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~UsbDeviceManagerTest() = default;


  using AddDeviceForTestingCallback = base::OnceCallback<void(bool, const std::string&)>;
  
  virtual void AddDeviceForTesting(const std::string& name, const std::string& serial_number, const std::string& landing_page, AddDeviceForTestingCallback callback) = 0;


  using RemoveDeviceForTestingCallback = base::OnceCallback<void()>;
  
  virtual void RemoveDeviceForTesting(const std::string& guid, RemoveDeviceForTestingCallback callback) = 0;


  using GetTestDevicesCallback = base::OnceCallback<void(std::vector<TestDeviceInfoPtr>)>;
  
  virtual void GetTestDevices(GetTestDevicesCallback callback) = 0;
};



class  UsbDeviceManagerTestProxy
    : public UsbDeviceManagerTest {
 public:
  using InterfaceType = UsbDeviceManagerTest;

  explicit UsbDeviceManagerTestProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void AddDeviceForTesting(const std::string& name, const std::string& serial_number, const std::string& landing_page, AddDeviceForTestingCallback callback) final;
  
  void RemoveDeviceForTesting(const std::string& guid, RemoveDeviceForTestingCallback callback) final;
  
  void GetTestDevices(GetTestDevicesCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  UsbDeviceManagerTestStubDispatch {
 public:
  static bool Accept(UsbDeviceManagerTest* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      UsbDeviceManagerTest* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<UsbDeviceManagerTest>>
class UsbDeviceManagerTestStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  UsbDeviceManagerTestStub() = default;
  ~UsbDeviceManagerTestStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceManagerTestStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return UsbDeviceManagerTestStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  UsbDeviceManagerTestRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  UsbDeviceManagerTestResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class  TestDeviceInfo {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<TestDeviceInfo, T>::value>;
  using DataView = TestDeviceInfoDataView;
  using Data_ = internal::TestDeviceInfo_Data;

  template <typename... Args>
  static TestDeviceInfoPtr New(Args&&... args) {
    return TestDeviceInfoPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static TestDeviceInfoPtr From(const U& u) {
    return mojo::TypeConverter<TestDeviceInfoPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, TestDeviceInfo>::Convert(*this);
  }


  TestDeviceInfo();

  TestDeviceInfo(
      const std::string& guid,
      const std::string& name,
      const std::string& serial_number,
      const ::GURL& landing_page);


  ~TestDeviceInfo();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = TestDeviceInfoPtr>
  TestDeviceInfoPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, TestDeviceInfo::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, TestDeviceInfo::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        TestDeviceInfo::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        TestDeviceInfo::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::TestDeviceInfo_UnserializedMessageContext<
            UserType, TestDeviceInfo::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<TestDeviceInfo::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return TestDeviceInfo::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::TestDeviceInfo_UnserializedMessageContext<
            UserType, TestDeviceInfo::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<TestDeviceInfo::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  std::string guid;
  
  std::string name;
  
  std::string serial_number;
  
  ::GURL landing_page;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, TestDeviceInfo::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, TestDeviceInfo::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, TestDeviceInfo::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, TestDeviceInfo::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
TestDeviceInfoPtr TestDeviceInfo::Clone() const {
  return New(
      mojo::Clone(guid),
      mojo::Clone(name),
      mojo::Clone(serial_number),
      mojo::Clone(landing_page)
  );
}

template <typename T, TestDeviceInfo::EnableIfSame<T>*>
bool TestDeviceInfo::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->guid, other_struct.guid))
    return false;
  if (!mojo::Equals(this->name, other_struct.name))
    return false;
  if (!mojo::Equals(this->serial_number, other_struct.serial_number))
    return false;
  if (!mojo::Equals(this->landing_page, other_struct.landing_page))
    return false;
  return true;
}

template <typename T, TestDeviceInfo::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.guid < rhs.guid)
    return true;
  if (rhs.guid < lhs.guid)
    return false;
  if (lhs.name < rhs.name)
    return true;
  if (rhs.name < lhs.name)
    return false;
  if (lhs.serial_number < rhs.serial_number)
    return true;
  if (rhs.serial_number < lhs.serial_number)
    return false;
  if (lhs.landing_page < rhs.landing_page)
    return true;
  if (rhs.landing_page < lhs.landing_page)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace device

namespace mojo {


template <>
struct  StructTraits<::device::mojom::TestDeviceInfo::DataView,
                                         ::device::mojom::TestDeviceInfoPtr> {
  static bool IsNull(const ::device::mojom::TestDeviceInfoPtr& input) { return !input; }
  static void SetToNull(::device::mojom::TestDeviceInfoPtr* output) { output->reset(); }

  static const decltype(::device::mojom::TestDeviceInfo::guid)& guid(
      const ::device::mojom::TestDeviceInfoPtr& input) {
    return input->guid;
  }

  static const decltype(::device::mojom::TestDeviceInfo::name)& name(
      const ::device::mojom::TestDeviceInfoPtr& input) {
    return input->name;
  }

  static const decltype(::device::mojom::TestDeviceInfo::serial_number)& serial_number(
      const ::device::mojom::TestDeviceInfoPtr& input) {
    return input->serial_number;
  }

  static const decltype(::device::mojom::TestDeviceInfo::landing_page)& landing_page(
      const ::device::mojom::TestDeviceInfoPtr& input) {
    return input->landing_page;
  }

  static bool Read(::device::mojom::TestDeviceInfo::DataView input, ::device::mojom::TestDeviceInfoPtr* output);
};

}  // namespace mojo

#endif  // SERVICES_DEVICE_PUBLIC_MOJOM_USB_MANAGER_TEST_MOJOM_H_