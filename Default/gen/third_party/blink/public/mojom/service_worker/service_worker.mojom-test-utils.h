// third_party/blink/public/mojom/service_worker/service_worker.mojom-test-utils.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_TEST_UTILS_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_TEST_UTILS_H_

#include "third_party/blink/public/mojom/service_worker/service_worker.mojom.h"
#include "third_party/blink/public/common/common_export.h"


namespace blink {
namespace mojom {


class BLINK_COMMON_EXPORT ServiceWorkerHostInterceptorForTesting : public ServiceWorkerHost {
  virtual ServiceWorkerHost* GetForwardingInterface() = 0;
  void SetCachedMetadata(const ::GURL& url, ::base::span<const ::uint8_t> data) override;
  void ClearCachedMetadata(const ::GURL& url) override;
  void GetClients(::blink::mojom::ServiceWorkerClientQueryOptionsPtr options, GetClientsCallback callback) override;
  void GetClient(const std::string& client_uuid, GetClientCallback callback) override;
  void OpenNewTab(const ::GURL& url, OpenNewTabCallback callback) override;
  void OpenPaymentHandlerWindow(const ::GURL& url, OpenPaymentHandlerWindowCallback callback) override;
  void PostMessageToClient(const std::string& client_uuid, ::blink::TransferableMessage message) override;
  void FocusClient(const std::string& client_uuid, FocusClientCallback callback) override;
  void NavigateClient(const std::string& client_uuid, const ::GURL& url, NavigateClientCallback callback) override;
  void SkipWaiting(SkipWaitingCallback callback) override;
  void ClaimClients(ClaimClientsCallback callback) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerHostAsyncWaiter {
 public:
  explicit ServiceWorkerHostAsyncWaiter(ServiceWorkerHost* proxy);

  ServiceWorkerHostAsyncWaiter(const ServiceWorkerHostAsyncWaiter&) = delete;
  ServiceWorkerHostAsyncWaiter& operator=(const ServiceWorkerHostAsyncWaiter&) = delete;

  ~ServiceWorkerHostAsyncWaiter();
  void GetClients(
      ::blink::mojom::ServiceWorkerClientQueryOptionsPtr options, std::vector<::blink::mojom::ServiceWorkerClientInfoPtr>* out_clients);
  void GetClient(
      const std::string& client_uuid, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client);
  void OpenNewTab(
      const ::GURL& url, bool* out_success, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client, absl::optional<std::string>* out_error_msg);
  void OpenPaymentHandlerWindow(
      const ::GURL& url, bool* out_success, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client, absl::optional<std::string>* out_error_msg);
  void FocusClient(
      const std::string& client_uuid, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client);
  void NavigateClient(
      const std::string& client_uuid, const ::GURL& url, bool* out_success, ::blink::mojom::ServiceWorkerClientInfoPtr* out_client, absl::optional<std::string>* out_error_msg);
  void SkipWaiting(
      bool* out_success);
  void ClaimClients(
      ::blink::mojom::ServiceWorkerErrorType* out_error, absl::optional<std::string>* out_error_msg);

 private:
  ServiceWorkerHost* const proxy_;
};


class BLINK_COMMON_EXPORT ServiceWorkerInterceptorForTesting : public ServiceWorker {
  virtual ServiceWorker* GetForwardingInterface() = 0;
  void InitializeGlobalScope(::mojo::PendingAssociatedRemote<ServiceWorkerHost> service_worker_host, ::blink::mojom::ServiceWorkerRegistrationObjectInfoPtr registration_info, ::blink::mojom::ServiceWorkerObjectInfoPtr service_worker_info, FetchHandlerExistence fetch_handler_existence, ::mojo::PendingReceiver<::blink::mojom::ReportingObserver> reporting_observer_receiver, ::blink::mojom::AncestorFrameType ancestor_frame_type) override;
  void DispatchInstallEvent(DispatchInstallEventCallback callback) override;
  void DispatchActivateEvent(DispatchActivateEventCallback callback) override;
  void DispatchBackgroundFetchAbortEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchAbortEventCallback callback) override;
  void DispatchBackgroundFetchClickEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchClickEventCallback callback) override;
  void DispatchBackgroundFetchFailEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchFailEventCallback callback) override;
  void DispatchBackgroundFetchSuccessEvent(::blink::mojom::BackgroundFetchRegistrationPtr registration, DispatchBackgroundFetchSuccessEventCallback callback) override;
  void DispatchCookieChangeEvent(const ::net::CookieChangeInfo& change, DispatchCookieChangeEventCallback callback) override;
  void DispatchFetchEventForMainResource(::blink::mojom::DispatchFetchEventParamsPtr params, ::mojo::PendingRemote<::blink::mojom::ServiceWorkerFetchResponseCallback> response_callback, DispatchFetchEventForMainResourceCallback callback) override;
  void DispatchNotificationClickEvent(const std::string& notification_id, const ::blink::PlatformNotificationData& notification_data, int32_t action_index, const absl::optional<::std::u16string>& reply, DispatchNotificationClickEventCallback callback) override;
  void DispatchNotificationCloseEvent(const std::string& notification_id, const ::blink::PlatformNotificationData& notification_data, DispatchNotificationCloseEventCallback callback) override;
  void DispatchPushEvent(const absl::optional<std::string>& payload, DispatchPushEventCallback callback) override;
  void DispatchPushSubscriptionChangeEvent(::blink::mojom::PushSubscriptionPtr old_subscription, ::blink::mojom::PushSubscriptionPtr new_subscription, DispatchPushSubscriptionChangeEventCallback callback) override;
  void DispatchSyncEvent(const std::string& tag, bool last_chance, ::base::TimeDelta timeout, DispatchSyncEventCallback callback) override;
  void DispatchPeriodicSyncEvent(const std::string& tag, ::base::TimeDelta timeout, DispatchPeriodicSyncEventCallback callback) override;
  void DispatchAbortPaymentEvent(::mojo::PendingRemote<::payments::mojom::PaymentHandlerResponseCallback> result_of_abort_payment, DispatchAbortPaymentEventCallback callback) override;
  void DispatchCanMakePaymentEvent(::payments::mojom::CanMakePaymentEventDataPtr event_data, ::mojo::PendingRemote<::payments::mojom::PaymentHandlerResponseCallback> result_of_can_make_payment, DispatchCanMakePaymentEventCallback callback) override;
  void DispatchPaymentRequestEvent(::payments::mojom::PaymentRequestEventDataPtr request_data, ::mojo::PendingRemote<::payments::mojom::PaymentHandlerResponseCallback> response_callback, DispatchPaymentRequestEventCallback callback) override;
  void DispatchExtendableMessageEvent(ExtendableMessageEventPtr event, DispatchExtendableMessageEventCallback callback) override;
  void DispatchContentDeleteEvent(const std::string& id, DispatchContentDeleteEventCallback callback) override;
  void Ping(PingCallback callback) override;
  void SetIdleDelay(::base::TimeDelta delay) override;
  void AddMessageToConsole(::blink::mojom::ConsoleMessageLevel level, const std::string& message) override;
  void ExecuteScriptForTest(const ::std::u16string& javascript, bool wants_result, ExecuteScriptForTestCallback callback) override;
};
class BLINK_COMMON_EXPORT ServiceWorkerAsyncWaiter {
 public:
  explicit ServiceWorkerAsyncWaiter(ServiceWorker* proxy);

  ServiceWorkerAsyncWaiter(const ServiceWorkerAsyncWaiter&) = delete;
  ServiceWorkerAsyncWaiter& operator=(const ServiceWorkerAsyncWaiter&) = delete;

  ~ServiceWorkerAsyncWaiter();
  void DispatchInstallEvent(
      ::blink::mojom::ServiceWorkerEventStatus* out_status, uint32_t* out_fetch_count);
  void DispatchActivateEvent(
      ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchBackgroundFetchAbortEvent(
      ::blink::mojom::BackgroundFetchRegistrationPtr registration, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchBackgroundFetchClickEvent(
      ::blink::mojom::BackgroundFetchRegistrationPtr registration, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchBackgroundFetchFailEvent(
      ::blink::mojom::BackgroundFetchRegistrationPtr registration, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchBackgroundFetchSuccessEvent(
      ::blink::mojom::BackgroundFetchRegistrationPtr registration, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchCookieChangeEvent(
      const ::net::CookieChangeInfo& change, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchFetchEventForMainResource(
      ::blink::mojom::DispatchFetchEventParamsPtr params, ::mojo::PendingRemote<::blink::mojom::ServiceWorkerFetchResponseCallback> response_callback, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchNotificationClickEvent(
      const std::string& notification_id, const ::blink::PlatformNotificationData& notification_data, int32_t action_index, const absl::optional<::std::u16string>& reply, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchNotificationCloseEvent(
      const std::string& notification_id, const ::blink::PlatformNotificationData& notification_data, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchPushEvent(
      const absl::optional<std::string>& payload, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchPushSubscriptionChangeEvent(
      ::blink::mojom::PushSubscriptionPtr old_subscription, ::blink::mojom::PushSubscriptionPtr new_subscription, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchSyncEvent(
      const std::string& tag, bool last_chance, ::base::TimeDelta timeout, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchPeriodicSyncEvent(
      const std::string& tag, ::base::TimeDelta timeout, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchAbortPaymentEvent(
      ::mojo::PendingRemote<::payments::mojom::PaymentHandlerResponseCallback> result_of_abort_payment, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchCanMakePaymentEvent(
      ::payments::mojom::CanMakePaymentEventDataPtr event_data, ::mojo::PendingRemote<::payments::mojom::PaymentHandlerResponseCallback> result_of_can_make_payment, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchPaymentRequestEvent(
      ::payments::mojom::PaymentRequestEventDataPtr request_data, ::mojo::PendingRemote<::payments::mojom::PaymentHandlerResponseCallback> response_callback, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchExtendableMessageEvent(
      ExtendableMessageEventPtr event, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void DispatchContentDeleteEvent(
      const std::string& id, ::blink::mojom::ServiceWorkerEventStatus* out_status);
  void Ping(
      );
  void ExecuteScriptForTest(
      const ::std::u16string& javascript, bool wants_result, ::base::Value* out_result, absl::optional<std::string>* out_error);

 private:
  ServiceWorker* const proxy_;
};




}  // namespace mojom
}  // namespace blink

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_SERVICE_WORKER_SERVICE_WORKER_MOJOM_TEST_UTILS_H_