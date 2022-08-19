// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "content/public/test/service_worker_test_helpers.h"
#include "base/memory/raw_ptr.h"

#include <memory>
#include <utility>

#include "base/bind.h"
#include "base/callback_helpers.h"
#include "base/run_loop.h"
#include "content/browser/service_worker/service_worker_context_core_observer.h"
#include "content/browser/service_worker/service_worker_context_wrapper.h"
#include "content/public/browser/browser_task_traits.h"
#include "content/public/browser/browser_thread.h"
#include "content/public/browser/service_worker_context.h"
#include "third_party/blink/public/common/notifications/platform_notification_data.h"
#include "third_party/blink/public/common/storage_key/storage_key.h"
#include "url/gurl.h"

namespace content {

namespace {

class StoppedObserver : public base::RefCountedThreadSafe<StoppedObserver> {
 public:
  StoppedObserver(const StoppedObserver&) = delete;
  StoppedObserver& operator=(const StoppedObserver&) = delete;

  static void StartObserving(ServiceWorkerContextWrapper* context,
                             int64_t service_worker_version_id,
                             base::OnceClosure completion_callback_ui) {
    auto observer = base::WrapRefCounted(
        new StoppedObserver(std::move(completion_callback_ui)));
    // Adds a ref to StoppedObserver to keep |this| around until the worker is
    // stopped.
    observer->inner_observer_ = std::make_unique<Observer>(
        context, service_worker_version_id,
        base::BindOnce(&StoppedObserver::OnStopped, observer));
  }

 private:
  friend class base::RefCountedThreadSafe<StoppedObserver>;

  explicit StoppedObserver(base::OnceClosure completion_callback_ui)
      : completion_callback_ui_(std::move(completion_callback_ui)) {}
  ~StoppedObserver() {}

  class Observer : public ServiceWorkerContextCoreObserver {
   public:
    Observer(ServiceWorkerContextWrapper* context,
             int64_t service_worker_version_id,
             base::OnceClosure stopped_callback)
        : context_(context),
          version_id_(service_worker_version_id),
          stopped_callback_(std::move(stopped_callback)) {
      context_->AddObserver(this);
    }

    // ServiceWorkerContextCoreObserver:
    void OnStopped(int64_t version_id) override {
      DCHECK_CURRENTLY_ON(BrowserThread::UI);
      if (version_id != version_id_)
        return;
      std::move(stopped_callback_).Run();
    }
    ~Observer() override { context_->RemoveObserver(this); }

   private:
    const raw_ptr<ServiceWorkerContextWrapper> context_;
    int64_t version_id_;
    base::OnceClosure stopped_callback_;
  };

  void OnStopped() {
    if (!BrowserThread::CurrentlyOn(BrowserThread::UI)) {
      GetUIThreadTaskRunner({})->PostTask(
          FROM_HERE, base::BindOnce(&StoppedObserver::OnStopped, this));
      return;
    }
    std::move(completion_callback_ui_).Run();
  }

  std::unique_ptr<Observer> inner_observer_;
  base::OnceClosure completion_callback_ui_;
};

void StopServiceWorkerForRegistration(
    scoped_refptr<ServiceWorkerContextWrapper> context_wrapper,
    base::OnceClosure completion_callback_ui,
    blink::ServiceWorkerStatusCode service_worker_status,
    scoped_refptr<ServiceWorkerRegistration> service_worker_registration) {
  DCHECK_CURRENTLY_ON(BrowserThread::UI);
  DCHECK_EQ(blink::ServiceWorkerStatusCode::kOk, service_worker_status);
  int64_t version_id =
      service_worker_registration->active_version()->version_id();
  StoppedObserver::StartObserving(context_wrapper.get(), version_id,
                                  std::move(completion_callback_ui));
  service_worker_registration->active_version()->embedded_worker()->Stop();
}

void DispatchNotificationClickForRegistration(
    const blink::PlatformNotificationData& notification_data,
    blink::ServiceWorkerStatusCode service_worker_status,
    scoped_refptr<ServiceWorkerRegistration> service_worker_registration) {
  DCHECK_CURRENTLY_ON(BrowserThread::UI);
  DCHECK_EQ(blink::ServiceWorkerStatusCode::kOk, service_worker_status);
  scoped_refptr<ServiceWorkerVersion> version =
      service_worker_registration->active_version();
  version->StartRequest(ServiceWorkerMetrics::EventType::NOTIFICATION_CLICK,
                        base::DoNothing());
  version->endpoint()->DispatchNotificationClickEvent(
      "notification_id", notification_data, -1 /* action_index */,
      absl::nullopt /* reply */,
      base::BindOnce([](blink::mojom::ServiceWorkerEventStatus event_status) {
        DCHECK_EQ(blink::mojom::ServiceWorkerEventStatus::COMPLETED,
                  event_status);
      }));
}

}  // namespace

void StopServiceWorkerForScope(ServiceWorkerContext* context,
                               const GURL& scope,
                               base::OnceClosure completion_callback_ui) {
  DCHECK(context);
  scoped_refptr<ServiceWorkerContextWrapper> context_wrapper(
      static_cast<ServiceWorkerContextWrapper*>(context));

  context_wrapper->FindReadyRegistrationForScope(
      scope, blink::StorageKey(url::Origin::Create(scope)),
      base::BindOnce(&StopServiceWorkerForRegistration, context_wrapper,
                     std::move(completion_callback_ui)));
}

void DispatchServiceWorkerNotificationClick(
    ServiceWorkerContext* context,
    const GURL& scope,
    const blink::PlatformNotificationData& notification_data) {
  DCHECK(context);
  scoped_refptr<ServiceWorkerContextWrapper> context_wrapper(
      static_cast<ServiceWorkerContextWrapper*>(context));

  context_wrapper->FindReadyRegistrationForScope(
      scope, blink::StorageKey(url::Origin::Create(scope)),
      base::BindOnce(&DispatchNotificationClickForRegistration,
                     notification_data));
}

}  // namespace content
