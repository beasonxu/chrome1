// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CONTENT_PUBLIC_BROWSER_SPECULATION_HOST_DELEGATE_H_
#define CONTENT_PUBLIC_BROWSER_SPECULATION_HOST_DELEGATE_H_

#include "content/common/content_export.h"
#include "services/network/public/cpp/resource_request.h"
#include "services/network/public/cpp/url_loader_completion_status.h"
#include "services/network/public/mojom/url_response_head.mojom-forward.h"
#include "third_party/blink/public/mojom/speculation_rules/speculation_rules.mojom.h"

namespace Network::mojom {
class DevToolsObserver;
}  // namespace Network::mojom

namespace content {
class CONTENT_EXPORT SpeculationHostDevToolsObserver {
 public:
  virtual void OnStartSinglePrefetch(
      const std::string& request_id,
      const network::ResourceRequest& request) = 0;
  virtual void OnPrefetchResponseReceived(
      const GURL& url,
      const std::string& request_id,
      const network::mojom::URLResponseHead& response) = 0;
  virtual void OnPrefetchRequestComplete(
      const std::string& request_id,
      const network::URLLoaderCompletionStatus& status) = 0;
  virtual void OnPrefetchBodyDataReceived(const std::string& request_id,
                                          const std::string& body,
                                          bool is_base64_encoded) = 0;
  virtual mojo::PendingRemote<network::mojom::DevToolsObserver>
  MakeSelfOwnedNetworkServiceDevToolsObserver() = 0;
};

// Allow embedders to handle speculation candidates with their own strategies.
// See third_party/blink/renderer/core/speculation_rules/README.md for more
// context.
class CONTENT_EXPORT SpeculationHostDelegate {
 public:
  virtual ~SpeculationHostDelegate() = default;

  // Called when the caller has encountered the given speculation candidates
  // and gives this delegate a chance to take action on them. The caller may
  // take action on `candidates` after this function returns. Therefore, the
  // delegate should remove elements that it decided to take an action on.
  virtual void ProcessCandidates(
      std::vector<blink::mojom::SpeculationCandidatePtr>& candidates,
      base::WeakPtr<SpeculationHostDevToolsObserver> devtools_observer) = 0;
};

}  // namespace content

#endif  // CONTENT_PUBLIC_BROWSER_SPECULATION_HOST_DELEGATE_H_
