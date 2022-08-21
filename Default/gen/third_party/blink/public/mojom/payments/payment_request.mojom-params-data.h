// third_party/blink/public/mojom/payments/payment_request.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace payments {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnPaymentMethodChange_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> method_name;
  mojo::internal::Pointer<mojo::internal::String_Data> stringified_details;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequestClient_OnPaymentMethodChange_Params_Data>;

  PaymentRequestClient_OnPaymentMethodChange_Params_Data();
  ~PaymentRequestClient_OnPaymentMethodChange_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnPaymentMethodChange_Params_Data) == 24,
              "Bad sizeof(PaymentRequestClient_OnPaymentMethodChange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnShippingAddressChange_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::payments::mojom::internal::PaymentAddress_Data> address;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequestClient_OnShippingAddressChange_Params_Data>;

  PaymentRequestClient_OnShippingAddressChange_Params_Data();
  ~PaymentRequestClient_OnShippingAddressChange_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnShippingAddressChange_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnShippingAddressChange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnShippingOptionChange_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<mojo::internal::String_Data> shipping_option_id;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequestClient_OnShippingOptionChange_Params_Data>;

  PaymentRequestClient_OnShippingOptionChange_Params_Data();
  ~PaymentRequestClient_OnShippingOptionChange_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnShippingOptionChange_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnShippingOptionChange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnPayerDetailChange_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PayerDetail_Data> detail;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequestClient_OnPayerDetailChange_Params_Data>;

  PaymentRequestClient_OnPayerDetailChange_Params_Data();
  ~PaymentRequestClient_OnPayerDetailChange_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnPayerDetailChange_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnPayerDetailChange_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnPaymentResponse_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentResponse_Data> response;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequestClient_OnPaymentResponse_Params_Data>;

  PaymentRequestClient_OnPaymentResponse_Params_Data();
  ~PaymentRequestClient_OnPaymentResponse_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnPaymentResponse_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnPaymentResponse_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnError_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t error;
  uint8_t pad0_[4];
  mojo::internal::Pointer<mojo::internal::String_Data> error_message;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequestClient_OnError_Params_Data>;

  PaymentRequestClient_OnError_Params_Data();
  ~PaymentRequestClient_OnError_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnError_Params_Data) == 24,
              "Bad sizeof(PaymentRequestClient_OnError_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnComplete_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequestClient_OnComplete_Params_Data>;

  PaymentRequestClient_OnComplete_Params_Data();
  ~PaymentRequestClient_OnComplete_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnComplete_Params_Data) == 8,
              "Bad sizeof(PaymentRequestClient_OnComplete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnAbort_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t aborted_successfully : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<PaymentRequestClient_OnAbort_Params_Data>;

  PaymentRequestClient_OnAbort_Params_Data();
  ~PaymentRequestClient_OnAbort_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnAbort_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnAbort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnCanMakePayment_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<PaymentRequestClient_OnCanMakePayment_Params_Data>;

  PaymentRequestClient_OnCanMakePayment_Params_Data();
  ~PaymentRequestClient_OnCanMakePayment_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnCanMakePayment_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnCanMakePayment_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_OnHasEnrolledInstrument_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<PaymentRequestClient_OnHasEnrolledInstrument_Params_Data>;

  PaymentRequestClient_OnHasEnrolledInstrument_Params_Data();
  ~PaymentRequestClient_OnHasEnrolledInstrument_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_OnHasEnrolledInstrument_Params_Data) == 16,
              "Bad sizeof(PaymentRequestClient_OnHasEnrolledInstrument_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequestClient_WarnNoFavicon_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequestClient_WarnNoFavicon_Params_Data>;

  PaymentRequestClient_WarnNoFavicon_Params_Data();
  ~PaymentRequestClient_WarnNoFavicon_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequestClient_WarnNoFavicon_Params_Data) == 8,
              "Bad sizeof(PaymentRequestClient_WarnNoFavicon_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_Init_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Interface_Data client;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<internal::PaymentMethodData_Data>>> method_data;
  mojo::internal::Pointer<internal::PaymentDetails_Data> details;
  mojo::internal::Pointer<internal::PaymentOptions_Data> options;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequest_Init_Params_Data>;

  PaymentRequest_Init_Params_Data();
  ~PaymentRequest_Init_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Init_Params_Data) == 40,
              "Bad sizeof(PaymentRequest_Init_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_Show_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t wait_for_updated_details : 1;
  uint8_t padfinal_[7];

 private:
  friend class mojo::internal::MessageFragment<PaymentRequest_Show_Params_Data>;

  PaymentRequest_Show_Params_Data();
  ~PaymentRequest_Show_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Show_Params_Data) == 16,
              "Bad sizeof(PaymentRequest_Show_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_UpdateWith_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PaymentDetails_Data> details;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequest_UpdateWith_Params_Data>;

  PaymentRequest_UpdateWith_Params_Data();
  ~PaymentRequest_UpdateWith_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_UpdateWith_Params_Data) == 16,
              "Bad sizeof(PaymentRequest_UpdateWith_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_OnPaymentDetailsNotUpdated_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequest_OnPaymentDetailsNotUpdated_Params_Data>;

  PaymentRequest_OnPaymentDetailsNotUpdated_Params_Data();
  ~PaymentRequest_OnPaymentDetailsNotUpdated_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_OnPaymentDetailsNotUpdated_Params_Data) == 8,
              "Bad sizeof(PaymentRequest_OnPaymentDetailsNotUpdated_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_Abort_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequest_Abort_Params_Data>;

  PaymentRequest_Abort_Params_Data();
  ~PaymentRequest_Abort_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Abort_Params_Data) == 8,
              "Bad sizeof(PaymentRequest_Abort_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_Complete_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t result;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<PaymentRequest_Complete_Params_Data>;

  PaymentRequest_Complete_Params_Data();
  ~PaymentRequest_Complete_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Complete_Params_Data) == 16,
              "Bad sizeof(PaymentRequest_Complete_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_Retry_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::payments::mojom::internal::PaymentValidationErrors_Data> errors;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequest_Retry_Params_Data>;

  PaymentRequest_Retry_Params_Data();
  ~PaymentRequest_Retry_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_Retry_Params_Data) == 16,
              "Bad sizeof(PaymentRequest_Retry_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_CanMakePayment_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequest_CanMakePayment_Params_Data>;

  PaymentRequest_CanMakePayment_Params_Data();
  ~PaymentRequest_CanMakePayment_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_CanMakePayment_Params_Data) == 8,
              "Bad sizeof(PaymentRequest_CanMakePayment_Params_Data)");
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) PaymentRequest_HasEnrolledInstrument_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;

 private:
  friend class mojo::internal::MessageFragment<PaymentRequest_HasEnrolledInstrument_Params_Data>;

  PaymentRequest_HasEnrolledInstrument_Params_Data();
  ~PaymentRequest_HasEnrolledInstrument_Params_Data() = delete;
};
static_assert(sizeof(PaymentRequest_HasEnrolledInstrument_Params_Data) == 8,
              "Bad sizeof(PaymentRequest_HasEnrolledInstrument_Params_Data)");

}  // namespace internal


class PaymentRequestClient_OnPaymentMethodChange_ParamsDataView {
 public:
  PaymentRequestClient_OnPaymentMethodChange_ParamsDataView() = default;

  PaymentRequestClient_OnPaymentMethodChange_ParamsDataView(
      internal::PaymentRequestClient_OnPaymentMethodChange_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetMethodNameDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMethodName(UserType* output) {
    
    auto* pointer = data_->method_name.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetStringifiedDetailsDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadStringifiedDetails(UserType* output) {
    
    auto* pointer = data_->stringified_details.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::PaymentRequestClient_OnPaymentMethodChange_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class PaymentRequestClient_OnShippingAddressChange_ParamsDataView {
 public:
  PaymentRequestClient_OnShippingAddressChange_ParamsDataView() = default;

  PaymentRequestClient_OnShippingAddressChange_ParamsDataView(
      internal::PaymentRequestClient_OnShippingAddressChange_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetAddressDataView(
      ::payments::mojom::PaymentAddressDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadAddress(UserType* output) {
    
    auto* pointer = data_->address.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentAddressDataView>(
        pointer, output, message_);
  }
 private:
  internal::PaymentRequestClient_OnShippingAddressChange_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class PaymentRequestClient_OnShippingOptionChange_ParamsDataView {
 public:
  PaymentRequestClient_OnShippingOptionChange_ParamsDataView() = default;

  PaymentRequestClient_OnShippingOptionChange_ParamsDataView(
      internal::PaymentRequestClient_OnShippingOptionChange_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetShippingOptionIdDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadShippingOptionId(UserType* output) {
    
    auto* pointer = data_->shipping_option_id.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::PaymentRequestClient_OnShippingOptionChange_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class PaymentRequestClient_OnPayerDetailChange_ParamsDataView {
 public:
  PaymentRequestClient_OnPayerDetailChange_ParamsDataView() = default;

  PaymentRequestClient_OnPayerDetailChange_ParamsDataView(
      internal::PaymentRequestClient_OnPayerDetailChange_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetDetailDataView(
      PayerDetailDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadDetail(UserType* output) {
    
    auto* pointer = data_->detail.Get();
    return mojo::internal::Deserialize<::payments::mojom::PayerDetailDataView>(
        pointer, output, message_);
  }
 private:
  internal::PaymentRequestClient_OnPayerDetailChange_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class PaymentRequestClient_OnPaymentResponse_ParamsDataView {
 public:
  PaymentRequestClient_OnPaymentResponse_ParamsDataView() = default;

  PaymentRequestClient_OnPaymentResponse_ParamsDataView(
      internal::PaymentRequestClient_OnPaymentResponse_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetResponseDataView(
      PaymentResponseDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadResponse(UserType* output) {
    
    auto* pointer = data_->response.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentResponseDataView>(
        pointer, output, message_);
  }
 private:
  internal::PaymentRequestClient_OnPaymentResponse_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class PaymentRequestClient_OnError_ParamsDataView {
 public:
  PaymentRequestClient_OnError_ParamsDataView() = default;

  PaymentRequestClient_OnError_ParamsDataView(
      internal::PaymentRequestClient_OnError_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadError(UserType* output) const {
    auto data_value = data_->error;
    return mojo::internal::Deserialize<::payments::mojom::PaymentErrorReason>(
        data_value, output);
  }
  PaymentErrorReason error() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::payments::mojom::PaymentErrorReason>(data_->error));
  }
  inline void GetErrorMessageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadErrorMessage(UserType* output) {
    
    auto* pointer = data_->error_message.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
 private:
  internal::PaymentRequestClient_OnError_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class PaymentRequestClient_OnComplete_ParamsDataView {
 public:
  PaymentRequestClient_OnComplete_ParamsDataView() = default;

  PaymentRequestClient_OnComplete_ParamsDataView(
      internal::PaymentRequestClient_OnComplete_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentRequestClient_OnComplete_Params_Data* data_ = nullptr;
};



class PaymentRequestClient_OnAbort_ParamsDataView {
 public:
  PaymentRequestClient_OnAbort_ParamsDataView() = default;

  PaymentRequestClient_OnAbort_ParamsDataView(
      internal::PaymentRequestClient_OnAbort_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool aborted_successfully() const {
    return data_->aborted_successfully;
  }
 private:
  internal::PaymentRequestClient_OnAbort_Params_Data* data_ = nullptr;
};



class PaymentRequestClient_OnCanMakePayment_ParamsDataView {
 public:
  PaymentRequestClient_OnCanMakePayment_ParamsDataView() = default;

  PaymentRequestClient_OnCanMakePayment_ParamsDataView(
      internal::PaymentRequestClient_OnCanMakePayment_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::payments::mojom::CanMakePaymentQueryResult>(
        data_value, output);
  }
  CanMakePaymentQueryResult result() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::payments::mojom::CanMakePaymentQueryResult>(data_->result));
  }
 private:
  internal::PaymentRequestClient_OnCanMakePayment_Params_Data* data_ = nullptr;
};



class PaymentRequestClient_OnHasEnrolledInstrument_ParamsDataView {
 public:
  PaymentRequestClient_OnHasEnrolledInstrument_ParamsDataView() = default;

  PaymentRequestClient_OnHasEnrolledInstrument_ParamsDataView(
      internal::PaymentRequestClient_OnHasEnrolledInstrument_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::payments::mojom::HasEnrolledInstrumentQueryResult>(
        data_value, output);
  }
  HasEnrolledInstrumentQueryResult result() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::payments::mojom::HasEnrolledInstrumentQueryResult>(data_->result));
  }
 private:
  internal::PaymentRequestClient_OnHasEnrolledInstrument_Params_Data* data_ = nullptr;
};



class PaymentRequestClient_WarnNoFavicon_ParamsDataView {
 public:
  PaymentRequestClient_WarnNoFavicon_ParamsDataView() = default;

  PaymentRequestClient_WarnNoFavicon_ParamsDataView(
      internal::PaymentRequestClient_WarnNoFavicon_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentRequestClient_WarnNoFavicon_Params_Data* data_ = nullptr;
};



class PaymentRequest_Init_ParamsDataView {
 public:
  PaymentRequest_Init_ParamsDataView() = default;

  PaymentRequest_Init_ParamsDataView(
      internal::PaymentRequest_Init_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::payments::mojom::PaymentRequestClientInterfaceBase>>(
            &data_->client, &result, message_);
    DCHECK(ret);
    return result;
  }
  inline void GetMethodDataDataView(
      mojo::ArrayDataView<PaymentMethodDataDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMethodData(UserType* output) {
    
    auto* pointer = data_->method_data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::payments::mojom::PaymentMethodDataDataView>>(
        pointer, output, message_);
  }
  inline void GetDetailsDataView(
      PaymentDetailsDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadDetails(UserType* output) {
    
    auto* pointer = data_->details.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentDetailsDataView>(
        pointer, output, message_);
  }
  inline void GetOptionsDataView(
      PaymentOptionsDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadOptions(UserType* output) {
    
    auto* pointer = data_->options.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentOptionsDataView>(
        pointer, output, message_);
  }
 private:
  internal::PaymentRequest_Init_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class PaymentRequest_Show_ParamsDataView {
 public:
  PaymentRequest_Show_ParamsDataView() = default;

  PaymentRequest_Show_ParamsDataView(
      internal::PaymentRequest_Show_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  bool wait_for_updated_details() const {
    return data_->wait_for_updated_details;
  }
 private:
  internal::PaymentRequest_Show_Params_Data* data_ = nullptr;
};



class PaymentRequest_UpdateWith_ParamsDataView {
 public:
  PaymentRequest_UpdateWith_ParamsDataView() = default;

  PaymentRequest_UpdateWith_ParamsDataView(
      internal::PaymentRequest_UpdateWith_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetDetailsDataView(
      PaymentDetailsDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadDetails(UserType* output) {
    
    auto* pointer = data_->details.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentDetailsDataView>(
        pointer, output, message_);
  }
 private:
  internal::PaymentRequest_UpdateWith_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class PaymentRequest_OnPaymentDetailsNotUpdated_ParamsDataView {
 public:
  PaymentRequest_OnPaymentDetailsNotUpdated_ParamsDataView() = default;

  PaymentRequest_OnPaymentDetailsNotUpdated_ParamsDataView(
      internal::PaymentRequest_OnPaymentDetailsNotUpdated_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentRequest_OnPaymentDetailsNotUpdated_Params_Data* data_ = nullptr;
};



class PaymentRequest_Abort_ParamsDataView {
 public:
  PaymentRequest_Abort_ParamsDataView() = default;

  PaymentRequest_Abort_ParamsDataView(
      internal::PaymentRequest_Abort_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentRequest_Abort_Params_Data* data_ = nullptr;
};



class PaymentRequest_Complete_ParamsDataView {
 public:
  PaymentRequest_Complete_ParamsDataView() = default;

  PaymentRequest_Complete_ParamsDataView(
      internal::PaymentRequest_Complete_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
  template <typename UserType>
  [[nodiscard]] bool ReadResult(UserType* output) const {
    auto data_value = data_->result;
    return mojo::internal::Deserialize<::payments::mojom::PaymentComplete>(
        data_value, output);
  }
  PaymentComplete result() const {
    return ::mojo::internal::ToKnownEnumValueHelper(
          static_cast<::payments::mojom::PaymentComplete>(data_->result));
  }
 private:
  internal::PaymentRequest_Complete_Params_Data* data_ = nullptr;
};



class PaymentRequest_Retry_ParamsDataView {
 public:
  PaymentRequest_Retry_ParamsDataView() = default;

  PaymentRequest_Retry_ParamsDataView(
      internal::PaymentRequest_Retry_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetErrorsDataView(
      ::payments::mojom::PaymentValidationErrorsDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadErrors(UserType* output) {
    
    auto* pointer = data_->errors.Get();
    return mojo::internal::Deserialize<::payments::mojom::PaymentValidationErrorsDataView>(
        pointer, output, message_);
  }
 private:
  internal::PaymentRequest_Retry_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class PaymentRequest_CanMakePayment_ParamsDataView {
 public:
  PaymentRequest_CanMakePayment_ParamsDataView() = default;

  PaymentRequest_CanMakePayment_ParamsDataView(
      internal::PaymentRequest_CanMakePayment_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentRequest_CanMakePayment_Params_Data* data_ = nullptr;
};



class PaymentRequest_HasEnrolledInstrument_ParamsDataView {
 public:
  PaymentRequest_HasEnrolledInstrument_ParamsDataView() = default;

  PaymentRequest_HasEnrolledInstrument_ParamsDataView(
      internal::PaymentRequest_HasEnrolledInstrument_Params_Data* data,
      mojo::Message* message)
      : data_(data) {}

  bool is_null() const { return !data_; }
 private:
  internal::PaymentRequest_HasEnrolledInstrument_Params_Data* data_ = nullptr;
};


inline void PaymentRequestClient_OnPaymentMethodChange_ParamsDataView::GetMethodNameDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->method_name.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void PaymentRequestClient_OnPaymentMethodChange_ParamsDataView::GetStringifiedDetailsDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->stringified_details.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void PaymentRequestClient_OnShippingAddressChange_ParamsDataView::GetAddressDataView(
    ::payments::mojom::PaymentAddressDataView* output) {
  auto pointer = data_->address.Get();
  *output = ::payments::mojom::PaymentAddressDataView(pointer, message_);
}


inline void PaymentRequestClient_OnShippingOptionChange_ParamsDataView::GetShippingOptionIdDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->shipping_option_id.Get();
  *output = mojo::StringDataView(pointer, message_);
}


inline void PaymentRequestClient_OnPayerDetailChange_ParamsDataView::GetDetailDataView(
    PayerDetailDataView* output) {
  auto pointer = data_->detail.Get();
  *output = PayerDetailDataView(pointer, message_);
}


inline void PaymentRequestClient_OnPaymentResponse_ParamsDataView::GetResponseDataView(
    PaymentResponseDataView* output) {
  auto pointer = data_->response.Get();
  *output = PaymentResponseDataView(pointer, message_);
}


inline void PaymentRequestClient_OnError_ParamsDataView::GetErrorMessageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->error_message.Get();
  *output = mojo::StringDataView(pointer, message_);
}












inline void PaymentRequest_Init_ParamsDataView::GetMethodDataDataView(
    mojo::ArrayDataView<PaymentMethodDataDataView>* output) {
  auto pointer = data_->method_data.Get();
  *output = mojo::ArrayDataView<PaymentMethodDataDataView>(pointer, message_);
}
inline void PaymentRequest_Init_ParamsDataView::GetDetailsDataView(
    PaymentDetailsDataView* output) {
  auto pointer = data_->details.Get();
  *output = PaymentDetailsDataView(pointer, message_);
}
inline void PaymentRequest_Init_ParamsDataView::GetOptionsDataView(
    PaymentOptionsDataView* output) {
  auto pointer = data_->options.Get();
  *output = PaymentOptionsDataView(pointer, message_);
}




inline void PaymentRequest_UpdateWith_ParamsDataView::GetDetailsDataView(
    PaymentDetailsDataView* output) {
  auto pointer = data_->details.Get();
  *output = PaymentDetailsDataView(pointer, message_);
}








inline void PaymentRequest_Retry_ParamsDataView::GetErrorsDataView(
    ::payments::mojom::PaymentValidationErrorsDataView* output) {
  auto pointer = data_->errors.Get();
  *output = ::payments::mojom::PaymentValidationErrorsDataView(pointer, message_);
}





}  // namespace mojom
}  // namespace payments

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_PAYMENTS_PAYMENT_REQUEST_MOJOM_PARAMS_DATA_H_