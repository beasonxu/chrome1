// services/network/public/mojom/url_loader_network_service_observer.mojom-blink-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_NETWORK_SERVICE_OBSERVER_MOJOM_BLINK_TEST_UTILS_H_
#define SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_NETWORK_SERVICE_OBSERVER_MOJOM_BLINK_TEST_UTILS_H_

#include "services/network/public/mojom/url_loader_network_service_observer.mojom-blink.h"
#include "third_party/blink/public/platform/web_common.h"


namespace network {
namespace mojom {
namespace blink {


class BLINK_PLATFORM_EXPORT ClientCertificateResponderInterceptorForTesting : public ClientCertificateResponder {
  virtual ClientCertificateResponder* GetForwardingInterface() = 0;
  void ContinueWithCertificate(::network::mojom::blink::X509CertificatePtr x509_certificate, const WTF::String& provider_name, const WTF::Vector<uint16_t>& algorithm_preferences, ::mojo::PendingRemote<SSLPrivateKey> ssl_private_key) override;
  void ContinueWithoutCertificate() override;
  void CancelRequest() override;
};
class BLINK_PLATFORM_EXPORT ClientCertificateResponderAsyncWaiter {
 public:
  explicit ClientCertificateResponderAsyncWaiter(ClientCertificateResponder* proxy);

  ClientCertificateResponderAsyncWaiter(const ClientCertificateResponderAsyncWaiter&) = delete;
  ClientCertificateResponderAsyncWaiter& operator=(const ClientCertificateResponderAsyncWaiter&) = delete;

  ~ClientCertificateResponderAsyncWaiter();

 private:
  ClientCertificateResponder* const proxy_;
};


class BLINK_PLATFORM_EXPORT SSLPrivateKeyInterceptorForTesting : public SSLPrivateKey {
  virtual SSLPrivateKey* GetForwardingInterface() = 0;
  void Sign(uint16_t algorithm, const WTF::Vector<uint8_t>& input, SignCallback callback) override;
};
class BLINK_PLATFORM_EXPORT SSLPrivateKeyAsyncWaiter {
 public:
  explicit SSLPrivateKeyAsyncWaiter(SSLPrivateKey* proxy);

  SSLPrivateKeyAsyncWaiter(const SSLPrivateKeyAsyncWaiter&) = delete;
  SSLPrivateKeyAsyncWaiter& operator=(const SSLPrivateKeyAsyncWaiter&) = delete;

  ~SSLPrivateKeyAsyncWaiter();
  void Sign(
      uint16_t algorithm, const WTF::Vector<uint8_t>& input, int32_t* out_net_error, WTF::Vector<uint8_t>* out_signature);

 private:
  SSLPrivateKey* const proxy_;
};


class BLINK_PLATFORM_EXPORT AuthChallengeResponderInterceptorForTesting : public AuthChallengeResponder {
  virtual AuthChallengeResponder* GetForwardingInterface() = 0;
  void OnAuthCredentials(::network::mojom::blink::AuthCredentialsPtr credentials) override;
};
class BLINK_PLATFORM_EXPORT AuthChallengeResponderAsyncWaiter {
 public:
  explicit AuthChallengeResponderAsyncWaiter(AuthChallengeResponder* proxy);

  AuthChallengeResponderAsyncWaiter(const AuthChallengeResponderAsyncWaiter&) = delete;
  AuthChallengeResponderAsyncWaiter& operator=(const AuthChallengeResponderAsyncWaiter&) = delete;

  ~AuthChallengeResponderAsyncWaiter();

 private:
  AuthChallengeResponder* const proxy_;
};


class BLINK_PLATFORM_EXPORT URLLoaderNetworkServiceObserverInterceptorForTesting : public URLLoaderNetworkServiceObserver {
  virtual URLLoaderNetworkServiceObserver* GetForwardingInterface() = 0;
  void OnSSLCertificateError(const ::blink::KURL& url, int32_t net_error, ::network::mojom::blink::SSLInfoPtr ssl_info, bool fatal, OnSSLCertificateErrorCallback callback) override;
  void OnCertificateRequested(const absl::optional<::base::UnguessableToken>& window_id, ::network::mojom::blink::SSLCertRequestInfoPtr cert_info, ::mojo::PendingRemote<ClientCertificateResponder> cert_responder) override;
  void OnAuthRequired(const absl::optional<::base::UnguessableToken>& window_id, uint32_t request_id, const ::blink::KURL& url, bool first_auth_attempt, const ::net::AuthChallengeInfo& auth_info, ::network::mojom::blink::HttpResponseHeadersPtr head_headers, ::mojo::PendingRemote<AuthChallengeResponder> auth_challenge_responder) override;
  void OnClearSiteData(const ::blink::KURL& url, const WTF::String& header_value, int32_t load_flags, ::network::mojom::blink::CookiePartitionKeyPtr cookie_partition_key, OnClearSiteDataCallback callback) override;
  void OnLoadingStateUpdate(LoadInfoPtr info, OnLoadingStateUpdateCallback callback) override;
  void OnDataUseUpdate(int32_t network_traffic_annotation_id_hash, int64_t recv_bytes, int64_t sent_bytes) override;
  void Clone(::mojo::PendingReceiver<URLLoaderNetworkServiceObserver> listener) override;
};
class BLINK_PLATFORM_EXPORT URLLoaderNetworkServiceObserverAsyncWaiter {
 public:
  explicit URLLoaderNetworkServiceObserverAsyncWaiter(URLLoaderNetworkServiceObserver* proxy);

  URLLoaderNetworkServiceObserverAsyncWaiter(const URLLoaderNetworkServiceObserverAsyncWaiter&) = delete;
  URLLoaderNetworkServiceObserverAsyncWaiter& operator=(const URLLoaderNetworkServiceObserverAsyncWaiter&) = delete;

  ~URLLoaderNetworkServiceObserverAsyncWaiter();
  void OnSSLCertificateError(
      const ::blink::KURL& url, int32_t net_error, ::network::mojom::blink::SSLInfoPtr ssl_info, bool fatal, int32_t* out_net_error);
  void OnClearSiteData(
      const ::blink::KURL& url, const WTF::String& header_value, int32_t load_flags, ::network::mojom::blink::CookiePartitionKeyPtr cookie_partition_key);
  void OnLoadingStateUpdate(
      LoadInfoPtr info);

 private:
  URLLoaderNetworkServiceObserver* const proxy_;
};




}  // namespace blink
}  // namespace mojom
}  // namespace network

#endif  // SERVICES_NETWORK_PUBLIC_MOJOM_URL_LOADER_NETWORK_SERVICE_OBSERVER_MOJOM_BLINK_TEST_UTILS_H_