// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { PageMetricsCallbackRouter, PageMetricsHost } from './metrics_reporter.mojom-webui.js';
export class BrowserProxyImpl {
    constructor() {
        this.callbackRouter = new PageMetricsCallbackRouter();
        this.host = PageMetricsHost.getRemote();
        this.host.onPageRemoteCreated(this.callbackRouter.$.bindNewPipeAndPassRemote());
    }
    getMark(name) {
        return this.host.onGetMark(name);
    }
    clearMark(name) {
        this.host.onClearMark(name);
    }
    umaReportTime(name, time) {
        this.host.onUmaReportTime(name, time);
    }
    now() {
        return chrome.timeTicks.nowInMicroseconds();
    }
    getCallbackRouter() {
        return this.callbackRouter;
    }
    static getInstance() {
        return instance || (instance = new BrowserProxyImpl());
    }
    static setInstance(obj) {
        instance = obj;
    }
}
let instance = null;
