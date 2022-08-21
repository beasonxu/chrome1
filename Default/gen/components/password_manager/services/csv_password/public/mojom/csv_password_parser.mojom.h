// components/password_manager/services/csv_password/public/mojom/csv_password_parser.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PASSWORD_MANAGER_SERVICES_CSV_PASSWORD_PUBLIC_MOJOM_CSV_PASSWORD_PARSER_MOJOM_H_
#define COMPONENTS_PASSWORD_MANAGER_SERVICES_CSV_PASSWORD_PUBLIC_MOJOM_CSV_PASSWORD_PARSER_MOJOM_H_

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

#include "components/password_manager/services/csv_password/public/mojom/csv_password_parser.mojom-shared.h"
#include "components/password_manager/services/csv_password/public/mojom/csv_password_parser.mojom-forward.h"
#include "sandbox/policy/mojom/sandbox.mojom-forward.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "components/password_manager/services/csv_password/public/mojom/csv_password_parser_traits.h"




namespace password_manager {
namespace mojom {

class CSVPasswordParserProxy;

template <typename ImplRefTraits>
class CSVPasswordParserStub;

class CSVPasswordParserRequestValidator;
class CSVPasswordParserResponseValidator;


class  CSVPasswordParser
    : public CSVPasswordParserInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr auto kServiceSandbox = sandbox::mojom::Sandbox::kService;
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = false;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = CSVPasswordParserInterfaceBase;
  using Proxy_ = CSVPasswordParserProxy;

  template <typename ImplRefTraits>
  using Stub_ = CSVPasswordParserStub<ImplRefTraits>;

  using RequestValidator_ = CSVPasswordParserRequestValidator;
  using ResponseValidator_ = CSVPasswordParserResponseValidator;
  enum MethodMinVersions : uint32_t {
    kParseCSVMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct ParseCSV_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  virtual ~CSVPasswordParser() = default;


  using ParseCSVCallback = base::OnceCallback<void(CSVPasswordSequencePtr)>;
  
  virtual void ParseCSV(const std::string& raw_csv, ParseCSVCallback callback) = 0;
};



class  CSVPasswordParserProxy
    : public CSVPasswordParser {
 public:
  using InterfaceType = CSVPasswordParser;

  explicit CSVPasswordParserProxy(mojo::MessageReceiverWithResponder* receiver);
  
  void ParseCSV(const std::string& raw_csv, ParseCSVCallback callback) final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class  CSVPasswordParserStubDispatch {
 public:
  static bool Accept(CSVPasswordParser* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      CSVPasswordParser* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<CSVPasswordParser>>
class CSVPasswordParserStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  CSVPasswordParserStub() = default;
  ~CSVPasswordParserStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CSVPasswordParserStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return CSVPasswordParserStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class  CSVPasswordParserRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class  CSVPasswordParserResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};









class  CSVPasswordSequence {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<CSVPasswordSequence, T>::value>;
  using DataView = CSVPasswordSequenceDataView;
  using Data_ = internal::CSVPasswordSequence_Data;

  template <typename... Args>
  static CSVPasswordSequencePtr New(Args&&... args) {
    return CSVPasswordSequencePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CSVPasswordSequencePtr From(const U& u) {
    return mojo::TypeConverter<CSVPasswordSequencePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CSVPasswordSequence>::Convert(*this);
  }


  CSVPasswordSequence();

  explicit CSVPasswordSequence(
      std::vector<::password_manager::CSVPassword> csv_passwords);


  ~CSVPasswordSequence();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CSVPasswordSequencePtr>
  CSVPasswordSequencePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, CSVPasswordSequence::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, CSVPasswordSequence::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CSVPasswordSequence::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CSVPasswordSequence::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CSVPasswordSequence_UnserializedMessageContext<
            UserType, CSVPasswordSequence::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<CSVPasswordSequence::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CSVPasswordSequence::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CSVPasswordSequence_UnserializedMessageContext<
            UserType, CSVPasswordSequence::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CSVPasswordSequence::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  std::vector<::password_manager::CSVPassword> csv_passwords;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, CSVPasswordSequence::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, CSVPasswordSequence::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, CSVPasswordSequence::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, CSVPasswordSequence::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}





class  CSVPassword {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<CSVPassword, T>::value>;
  using DataView = CSVPasswordDataView;
  using Data_ = internal::CSVPassword_Data;

  template <typename... Args>
  static CSVPasswordPtr New(Args&&... args) {
    return CSVPasswordPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static CSVPasswordPtr From(const U& u) {
    return mojo::TypeConverter<CSVPasswordPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, CSVPassword>::Convert(*this);
  }


  CSVPassword();

  CSVPassword(
      const std::string& username,
      const std::string& password,
      const ::GURL& url);


  ~CSVPassword();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = CSVPasswordPtr>
  CSVPasswordPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, CSVPassword::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, CSVPassword::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        CSVPassword::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        CSVPassword::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::CSVPassword_UnserializedMessageContext<
            UserType, CSVPassword::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<CSVPassword::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return CSVPassword::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::CSVPassword_UnserializedMessageContext<
            UserType, CSVPassword::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<CSVPassword::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  std::string username;
  
  std::string password;
  
  ::GURL url;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, CSVPassword::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, CSVPassword::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, CSVPassword::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, CSVPassword::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
CSVPasswordSequencePtr CSVPasswordSequence::Clone() const {
  return New(
      mojo::Clone(csv_passwords)
  );
}

template <typename T, CSVPasswordSequence::EnableIfSame<T>*>
bool CSVPasswordSequence::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->csv_passwords, other_struct.csv_passwords))
    return false;
  return true;
}

template <typename T, CSVPasswordSequence::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.csv_passwords < rhs.csv_passwords)
    return true;
  if (rhs.csv_passwords < lhs.csv_passwords)
    return false;
  return false;
}
template <typename StructPtrType>
CSVPasswordPtr CSVPassword::Clone() const {
  return New(
      mojo::Clone(username),
      mojo::Clone(password),
      mojo::Clone(url)
  );
}

template <typename T, CSVPassword::EnableIfSame<T>*>
bool CSVPassword::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->username, other_struct.username))
    return false;
  if (!mojo::Equals(this->password, other_struct.password))
    return false;
  if (!mojo::Equals(this->url, other_struct.url))
    return false;
  return true;
}

template <typename T, CSVPassword::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.username < rhs.username)
    return true;
  if (rhs.username < lhs.username)
    return false;
  if (lhs.password < rhs.password)
    return true;
  if (rhs.password < lhs.password)
    return false;
  if (lhs.url < rhs.url)
    return true;
  if (rhs.url < lhs.url)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace password_manager

namespace mojo {


template <>
struct  StructTraits<::password_manager::mojom::CSVPasswordSequence::DataView,
                                         ::password_manager::mojom::CSVPasswordSequencePtr> {
  static bool IsNull(const ::password_manager::mojom::CSVPasswordSequencePtr& input) { return !input; }
  static void SetToNull(::password_manager::mojom::CSVPasswordSequencePtr* output) { output->reset(); }

  static const decltype(::password_manager::mojom::CSVPasswordSequence::csv_passwords)& csv_passwords(
      const ::password_manager::mojom::CSVPasswordSequencePtr& input) {
    return input->csv_passwords;
  }

  static bool Read(::password_manager::mojom::CSVPasswordSequence::DataView input, ::password_manager::mojom::CSVPasswordSequencePtr* output);
};


template <>
struct  StructTraits<::password_manager::mojom::CSVPassword::DataView,
                                         ::password_manager::mojom::CSVPasswordPtr> {
  static bool IsNull(const ::password_manager::mojom::CSVPasswordPtr& input) { return !input; }
  static void SetToNull(::password_manager::mojom::CSVPasswordPtr* output) { output->reset(); }

  static const decltype(::password_manager::mojom::CSVPassword::username)& username(
      const ::password_manager::mojom::CSVPasswordPtr& input) {
    return input->username;
  }

  static const decltype(::password_manager::mojom::CSVPassword::password)& password(
      const ::password_manager::mojom::CSVPasswordPtr& input) {
    return input->password;
  }

  static const decltype(::password_manager::mojom::CSVPassword::url)& url(
      const ::password_manager::mojom::CSVPasswordPtr& input) {
    return input->url;
  }

  static bool Read(::password_manager::mojom::CSVPassword::DataView input, ::password_manager::mojom::CSVPasswordPtr* output);
};

}  // namespace mojo

#endif  // COMPONENTS_PASSWORD_MANAGER_SERVICES_CSV_PASSWORD_PUBLIC_MOJOM_CSV_PASSWORD_PARSER_MOJOM_H_