// third_party/blink/public/mojom/worker/dedicated_worker_host_factory.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/dedicated_worker_host_factory.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT DedicatedWorkerHostFactoryClientInterceptorForTesting : public DedicatedWorkerHostFactoryClient {
  virtual DedicatedWorkerHostFactoryClient* GetForwardingInterface() = 0;
  void OnWorkerHostCreated(::mojo::PendingRemote<::blink::mojom::BrowserInterfaceBroker> browser_interface_broker, ::mojo::PendingRemote<::blink::mojom::DedicatedWorkerHost> host) override;
  void OnScriptLoadStarted(::blink::mojom::ServiceWorkerContainerInfoForClientPtr service_worker_container_info, ::blink::mojom::WorkerMainScriptLoadParamsPtr main_script_load_params, ::std::unique_ptr<::blink::PendingURLLoaderFactoryBundle> subresource_loader_factories, ::mojo::PendingReceiver<::blink::mojom::SubresourceLoaderUpdater> subresource_loader_updater, ::blink::mojom::ControllerServiceWorkerInfoPtr controller_info, ::mojo::PendingRemote<::blink::mojom::BackForwardCacheControllerHost> back_forward_cache_controller_host) override;
  void OnScriptLoadStartFailed() override;
};
class BLINK_COMMON_EXPORT DedicatedWorkerHostFactoryClientAsyncWaiter {
 public:
  explicit DedicatedWorkerHostFactoryClientAsyncWaiter(DedicatedWorkerHostFactoryClient* proxy);

  DedicatedWorkerHostFactoryClientAsyncWaiter(const DedicatedWorkerHostFactoryClientAsyncWaiter&) = delete;
  DedicatedWorkerHostFactoryClientAsyncWaiter& operator=(const DedicatedWorkerHostFactoryClientAsyncWaiter&) = delete;

  ~DedicatedWorkerHostFactoryClientAsyncWaiter();

 private:
  DedicatedWorkerHostFactoryClient* const proxy_;
};


class BLINK_COMMON_EXPORT DedicatedWorkerHostFactoryInterceptorForTesting : public DedicatedWorkerHostFactory {
  virtual DedicatedWorkerHostFactory* GetForwardingInterface() = 0;
  void CreateWorkerHost(const ::blink::DedicatedWorkerToken& token, const ::GURL& script_url, ::mojo::PendingReceiver<::blink::mojom::BrowserInterfaceBroker> browser_interface_broker, ::mojo::PendingReceiver<::blink::mojom::DedicatedWorkerHost> host, CreateWorkerHostCallback callback) override;
  void CreateWorkerHostAndStartScriptLoad(const ::blink::DedicatedWorkerToken& token, const ::GURL& script_url, ::network::mojom::CredentialsMode credentials_mode, ::blink::mojom::FetchClientSettingsObjectPtr outside_fetch_client_settings_object, ::mojo::PendingRemote<::blink::mojom::BlobURLToken> blob_url_token, ::mojo::PendingRemote<DedicatedWorkerHostFactoryClient> client) override;
};
class BLINK_COMMON_EXPORT DedicatedWorkerHostFactoryAsyncWaiter {
 public:
  explicit DedicatedWorkerHostFactoryAsyncWaiter(DedicatedWorkerHostFactory* proxy);

  DedicatedWorkerHostFactoryAsyncWaiter(const DedicatedWorkerHostFactoryAsyncWaiter&) = delete;
  DedicatedWorkerHostFactoryAsyncWaiter& operator=(const DedicatedWorkerHostFactoryAsyncWaiter&) = delete;

  ~DedicatedWorkerHostFactoryAsyncWaiter();
  void CreateWorkerHost(
      const ::blink::DedicatedWorkerToken& token, const ::GURL& script_url, ::mojo::PendingReceiver<::blink::mojom::BrowserInterfaceBroker> browser_interface_broker, ::mojo::PendingReceiver<::blink::mojom::DedicatedWorkerHost> host, ::network::CrossOriginEmbedderPolicy* out_parent_coep, ::mojo::PendingRemote<::blink::mojom::BackForwardCacheControllerHost>* out_back_forward_cache_controller_host);

 private:
  DedicatedWorkerHostFactory* const proxy_;
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_DEDICATED_WORKER_HOST_FACTORY_MOJOM_TEST_UTILS_H_