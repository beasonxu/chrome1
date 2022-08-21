// services/network/public/mojom/mdns_responder.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_PARAMS_DATA_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace network {
namespace mojom {
namespace internal {

class ValidationContext;
class  MdnsResponder_CreateNameForAddress_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPAddress_Data> address;

 private:
  friend class mojo::internal::MessageFragment<MdnsResponder_CreateNameForAddress_Params_Data>;

  MdnsResponder_CreateNameForAddress_Params_Data();
  ~MdnsResponder_CreateNameForAddress_Params_Data() = delete;
};
static_assert(sizeof(MdnsResponder_CreateNameForAddress_Params_Data) == 16,
              "Bad sizeof(MdnsResponder_CreateNameForAddress_Params_Data)");
class  MdnsResponder_CreateNameForAddress_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> name;
  uint8_t announcement_scheduled : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<MdnsResponder_CreateNameForAddress_ResponseParams_Data>;

  MdnsResponder_CreateNameForAddress_ResponseParams_Data();
  ~MdnsResponder_CreateNameForAddress_ResponseParams_Data() = delete;
};
static_assert(sizeof(MdnsResponder_CreateNameForAddress_ResponseParams_Data) == 24,
              "Bad sizeof(MdnsResponder_CreateNameForAddress_ResponseParams_Data)");
class  MdnsResponder_RemoveNameForAddress_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::network::mojom::internal::IPAddress_Data> address;

 private:
  friend class mojo::internal::MessageFragment<MdnsResponder_RemoveNameForAddress_Params_Data>;

  MdnsResponder_RemoveNameForAddress_Params_Data();
  ~MdnsResponder_RemoveNameForAddress_Params_Data() = delete;
};
static_assert(sizeof(MdnsResponder_RemoveNameForAddress_Params_Data) == 16,
              "Bad sizeof(MdnsResponder_RemoveNameForAddress_Params_Data)");
class  MdnsResponder_RemoveNameForAddress_ResponseParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t removed : 1;
  uint8_t goodbye_scheduled : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<MdnsResponder_RemoveNameForAddress_ResponseParams_Data>;

  MdnsResponder_RemoveNameForAddress_ResponseParams_Data();
  ~MdnsResponder_RemoveNameForAddress_ResponseParams_Data() = delete;
};
static_assert(sizeof(MdnsResponder_RemoveNameForAddress_ResponseParams_Data) == 16,
              "Bad sizeof(MdnsResponder_RemoveNameForAddress_ResponseParams_Data)");

}  // namespace internal


class MdnsResponder_CreateNameForAddress_ParamsDataView {
 public:
  MdnsResponder_CreateNameForAddress_ParamsDataView() = default;

  MdnsResponder_CreateNameForAddress_ParamsDataView(
      internal::MdnsResponder_CreateNameForAddress_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetAddressDataView(
      ::network::mojom::IPAddressDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadAddress(UserType* output) {
    
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPAddressDataView>(
        pointer, output, message_);
  }
 private:
  internal::MdnsResponder_CreateNameForAddress_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class MdnsResponder_CreateNameForAddress_ResponseParamsDataView {
 public:
  MdnsResponder_CreateNameForAddress_ResponseParamsDataView() = default;

  MdnsResponder_CreateNameForAddress_ResponseParamsDataView(
      internal::MdnsResponder_CreateNameForAddress_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadName(UserType* output) {
    
    auto* pointer = data_->name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  bool announcement_scheduled() const {
    return data_->announcement_scheduled;
  }
 private:
  internal::MdnsResponder_CreateNameForAddress_ResponseParams_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class MdnsResponder_RemoveNameForAddress_ParamsDataView {
 public:
  MdnsResponder_RemoveNameForAddress_ParamsDataView() = default;

  MdnsResponder_RemoveNameForAddress_ParamsDataView(
      internal::MdnsResponder_RemoveNameForAddress_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetAddressDataView(
      ::network::mojom::IPAddressDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadAddress(UserType* output) {
    
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<::network::mojom::IPAddressDataView>(
        pointer, output, message_);
  }
 private:
  internal::MdnsResponder_RemoveNameForAddress_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class MdnsResponder_RemoveNameForAddress_ResponseParamsDataView {
 public:
  MdnsResponder_RemoveNameForAddress_ResponseParamsDataView() = default;

  MdnsResponder_RemoveNameForAddress_ResponseParamsDataView(
      internal::MdnsResponder_RemoveNameForAddress_ResponseParams_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool removed() const {
    return data_->removed;
  }
  bool goodbye_scheduled() const {
    return data_->goodbye_scheduled;
  }
 private:
  internal::MdnsResponder_RemoveNameForAddress_ResponseParams_Data* data_ = nullptr;
};


inline void MdnsResponder_CreateNameForAddress_ParamsDataView::GetAddressDataView(
    ::network::mojom::IPAddressDataView* output) {
  auto pointer = data_->address.Get();
  *output = ::network::mojom::IPAddressDataView(pointer, message_);
}


inline void MdnsResponder_CreateNameForAddress_ResponseParamsDataView::GetNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->name.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void MdnsResponder_RemoveNameForAddress_ParamsDataView::GetAddressDataView(
    ::network::mojom::IPAddressDataView* output) {
  auto pointer = data_->address.Get();
  *output = ::network::mojom::IPAddressDataView(pointer, message_);
}



}  // namespace mojom
}  // namespace network

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_MDNS_RESPONDER_MOJOM_PARAMS_DATA_H_