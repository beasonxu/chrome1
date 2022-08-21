// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

import {PageCallbackRouter, PageHandlerFactory} from './history_clusters_internals.mojom-webui.js';

export class HistoryClustersInternalsBrowserProxy {
  private callbackRouter: PageCallbackRouter;

  constructor() {
    this.callbackRouter = new PageCallbackRouter();
    const factory = PageHandlerFactory.getRemote();
    factory.createPageHandler(this.callbackRouter.$.bindNewPipeAndPassRemote());
  }

  static getInstance(): HistoryClustersInternalsBrowserProxy {
    return instance || (instance = new HistoryClustersInternalsBrowserProxy());
  }

  getCallbackRouter(): PageCallbackRouter {
    return this.callbackRouter;
  }
}

let instance: HistoryClustersInternalsBrowserProxy|null = null;