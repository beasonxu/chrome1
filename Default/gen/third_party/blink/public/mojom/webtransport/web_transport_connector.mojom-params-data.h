// third_party/blink/public/mojom/webtransport/web_transport_connector.mojom-params-data.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBTRANSPORT_WEB_TRANSPORT_CONNECTOR_MOJOM_PARAMS_DATA_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBTRANSPORT_WEB_TRANSPORT_CONNECTOR_MOJOM_PARAMS_DATA_H_

#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif
namespace blink {
namespace mojom {
namespace internal {

class ValidationContext;
class COMPONENT_EXPORT(MOJOM_SHARED_BLINK_COMMON_EXPORT) WebTransportConnector_Connect_Params_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::url::mojom::internal::Url_Data> url;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::network::mojom::internal::WebTransportCertificateFingerprint_Data>>> fingerprints;
  mojo::internal::Interface_Data client;

 private:
  friend class mojo::internal::MessageFragment<WebTransportConnector_Connect_Params_Data>;

  WebTransportConnector_Connect_Params_Data();
  ~WebTransportConnector_Connect_Params_Data() = delete;
};
static_assert(sizeof(WebTransportConnector_Connect_Params_Data) == 32,
              "Bad sizeof(WebTransportConnector_Connect_Params_Data)");

}  // namespace internal


class WebTransportConnector_Connect_ParamsDataView {
 public:
  WebTransportConnector_Connect_ParamsDataView() = default;

  WebTransportConnector_Connect_ParamsDataView(
      internal::WebTransportConnector_Connect_Params_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetUrlDataView(
      ::url::mojom::UrlDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadUrl(UserType* output) {
    
    auto* pointer = data_->url.Get();
    return mojo::internal::Deserialize<::url::mojom::UrlDataView>(
        pointer, output, message_);
  }
  inline void GetFingerprintsDataView(
      mojo::ArrayDataView<::network::mojom::WebTransportCertificateFingerprintDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadFingerprints(UserType* output) {
    
    auto* pointer = data_->fingerprints.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::network::mojom::WebTransportCertificateFingerprintDataView>>(
        pointer, output, message_);
  }
  template <typename UserType>
  UserType TakeClient() {
    UserType result;
    bool ret =
        mojo::internal::Deserialize<mojo::InterfacePtrDataView<::network::mojom::WebTransportHandshakeClientInterfaceBase>>(
            &data_->client, &result, message_);
    DCHECK(ret);
    return result;
  }
 private:
  internal::WebTransportConnector_Connect_Params_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};


inline void WebTransportConnector_Connect_ParamsDataView::GetUrlDataView(
    ::url::mojom::UrlDataView* output) {
  auto pointer = data_->url.Get();
  *output = ::url::mojom::UrlDataView(pointer, message_);
}
inline void WebTransportConnector_Connect_ParamsDataView::GetFingerprintsDataView(
    mojo::ArrayDataView<::network::mojom::WebTransportCertificateFingerprintDataView>* output) {
  auto pointer = data_->fingerprints.Get();
  *output = mojo::ArrayDataView<::network::mojom::WebTransportCertificateFingerprintDataView>(pointer, message_);
}

}  // namespace mojom
}  // namespace blink

#if defined(__clang__)
#pragma clang diagnostic pop
#endif

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WEBTRANSPORT_WEB_TRANSPORT_CONNECTOR_MOJOM_PARAMS_DATA_H_