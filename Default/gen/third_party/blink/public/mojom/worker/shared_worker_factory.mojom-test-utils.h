// third_party/blink/public/mojom/worker/shared_worker_factory.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/worker/shared_worker_factory.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT SharedWorkerFactoryInterceptorForTesting : public SharedWorkerFactory {
  virtual SharedWorkerFactory* GetForwardingInterface() = 0;
  void CreateSharedWorker(::blink::mojom::SharedWorkerInfoPtr info, const ::blink::SharedWorkerToken& token, const ::url::Origin& constructor_origin, bool is_constructor_secure_context, const std::string& user_agent, const std::string& full_user_agent, const std::string& reduced_user_agent, const ::blink::UserAgentMetadata& ua_metadata, bool pause_on_start, const ::base::UnguessableToken& devtools_worker_token, const ::blink::RendererPreferences& renderer_preferences, ::mojo::PendingReceiver<::blink::mojom::RendererPreferenceWatcher> preference_watcher_receiver, ::mojo::PendingRemote<::blink::mojom::WorkerContentSettingsProxy> content_settings, ::blink::mojom::ServiceWorkerContainerInfoForClientPtr service_worker_container_info, ::blink::mojom::WorkerMainScriptLoadParamsPtr main_script_load_params, ::std::unique_ptr<::blink::PendingURLLoaderFactoryBundle> subresource_loader_factories, ::blink::mojom::ControllerServiceWorkerInfoPtr controller_info, ::blink::mojom::PolicyContainerPtr policy_container, ::mojo::PendingRemote<::blink::mojom::SharedWorkerHost> host, ::mojo::PendingReceiver<::blink::mojom::SharedWorker> shared_worker, ::mojo::PendingRemote<::blink::mojom::BrowserInterfaceBroker> browser_interface_broker, int64_t ukm_source_id) override;
};
class BLINK_COMMON_EXPORT SharedWorkerFactoryAsyncWaiter {
 public:
  explicit SharedWorkerFactoryAsyncWaiter(SharedWorkerFactory* proxy);

  SharedWorkerFactoryAsyncWaiter(const SharedWorkerFactoryAsyncWaiter&) = delete;
  SharedWorkerFactoryAsyncWaiter& operator=(const SharedWorkerFactoryAsyncWaiter&) = delete;

  ~SharedWorkerFactoryAsyncWaiter();

 private:
  SharedWorkerFactory* const proxy_;
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_WORKER_SHARED_WORKER_FACTORY_MOJOM_TEST_UTILS_H_