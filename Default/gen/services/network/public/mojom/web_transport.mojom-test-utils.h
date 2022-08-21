// services/network/public/mojom/web_transport.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_WEB_TRANSPORT_MOJOM_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_WEB_TRANSPORT_MOJOM_TEST_UTILS_H_

#include "services/network/public/mojom/web_transport.mojom.h"


namespace network {
namespace mojom {


class  WebTransportInterceptorForTesting : public WebTransport {
  virtual WebTransport* GetForwardingInterface() = 0;
  void SendDatagram(::base::span<const ::uint8_t> data, SendDatagramCallback callback) override;
  void CreateStream(::mojo::ScopedDataPipeConsumerHandle readable, ::mojo::ScopedDataPipeProducerHandle writable, CreateStreamCallback callback) override;
  void AcceptBidirectionalStream(AcceptBidirectionalStreamCallback callback) override;
  void AcceptUnidirectionalStream(AcceptUnidirectionalStreamCallback callback) override;
  void SendFin(uint32_t stream_id) override;
  void AbortStream(uint32_t stream_id, uint8_t code) override;
  void StopSending(uint32_t stream_id, uint8_t code) override;
  void SetOutgoingDatagramExpirationDuration(::base::TimeDelta duration) override;
  void Close(WebTransportCloseInfoPtr close_info) override;
};
class  WebTransportAsyncWaiter {
 public:
  explicit WebTransportAsyncWaiter(WebTransport* proxy);

  WebTransportAsyncWaiter(const WebTransportAsyncWaiter&) = delete;
  WebTransportAsyncWaiter& operator=(const WebTransportAsyncWaiter&) = delete;

  ~WebTransportAsyncWaiter();
  void SendDatagram(
      ::base::span<const ::uint8_t> data, bool* out_result);
  void CreateStream(
      ::mojo::ScopedDataPipeConsumerHandle readable, ::mojo::ScopedDataPipeProducerHandle writable, bool* out_succeeded, uint32_t* out_stream_id);
  void AcceptBidirectionalStream(
      uint32_t* out_stream_id, ::mojo::ScopedDataPipeConsumerHandle* out_readable, ::mojo::ScopedDataPipeProducerHandle* out_writable);
  void AcceptUnidirectionalStream(
      uint32_t* out_stream_id, ::mojo::ScopedDataPipeConsumerHandle* out_readable);

 private:
  WebTransport* const proxy_;
};


class  WebTransportClientInterceptorForTesting : public WebTransportClient {
  virtual WebTransportClient* GetForwardingInterface() = 0;
  void OnDatagramReceived(::base::span<const ::uint8_t> data) override;
  void OnIncomingStreamClosed(uint32_t stream_id, bool fin_received) override;
  void OnOutgoingStreamClosed(uint32_t stream_id) override;
  void OnReceivedStopSending(uint32_t stream_id, uint8_t code) override;
  void OnReceivedResetStream(uint32_t stream_id, uint8_t code) override;
  void OnClosed(WebTransportCloseInfoPtr close_info) override;
};
class  WebTransportClientAsyncWaiter {
 public:
  explicit WebTransportClientAsyncWaiter(WebTransportClient* proxy);

  WebTransportClientAsyncWaiter(const WebTransportClientAsyncWaiter&) = delete;
  WebTransportClientAsyncWaiter& operator=(const WebTransportClientAsyncWaiter&) = delete;

  ~WebTransportClientAsyncWaiter();

 private:
  WebTransportClient* const proxy_;
};


class  WebTransportHandshakeClientInterceptorForTesting : public WebTransportHandshakeClient {
  virtual WebTransportHandshakeClient* GetForwardingInterface() = 0;
  void OnConnectionEstablished(::mojo::PendingRemote<WebTransport> transport, ::mojo::PendingReceiver<WebTransportClient> client, const ::scoped_refptr<::net::HttpResponseHeaders>& response_headers) override;
  void OnHandshakeFailed(const absl::optional<::net::WebTransportError>& error) override;
};
class  WebTransportHandshakeClientAsyncWaiter {
 public:
  explicit WebTransportHandshakeClientAsyncWaiter(WebTransportHandshakeClient* proxy);

  WebTransportHandshakeClientAsyncWaiter(const WebTransportHandshakeClientAsyncWaiter&) = delete;
  WebTransportHandshakeClientAsyncWaiter& operator=(const WebTransportHandshakeClientAsyncWaiter&) = delete;

  ~WebTransportHandshakeClientAsyncWaiter();

 private:
  WebTransportHandshakeClient* const proxy_;
};




}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_WEB_TRANSPORT_MOJOM_TEST_UTILS_H_