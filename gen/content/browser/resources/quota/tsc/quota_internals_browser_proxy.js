// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { Origin } from 'chrome://resources/mojo/url/mojom/origin.mojom-webui.js';
import { QuotaInternalsHandler } from './quota_internals.mojom-webui.js';
var StorageType;
(function (StorageType) {
    StorageType[StorageType["TEMPORARY"] = 0] = "TEMPORARY";
    StorageType[StorageType["PERSISTENT"] = 1] = "PERSISTENT";
    StorageType[StorageType["SYNCABLE"] = 2] = "SYNCABLE";
})(StorageType || (StorageType = {}));
function urlPort(url) {
    if (url.port) {
        return Number.parseInt(url.port, 10);
    }
    if (url.protocol === 'https:') {
        return 443;
    }
    else if (url.protocol === 'http:') {
        return 80;
    }
    else {
        return 0;
    }
}
function enumerateStorageType(storageType) {
    switch (storageType) {
        case 'temporary':
            return 0;
        case 'persistent':
            return 1;
        case 'syncable':
            return 2;
        default:
            return 0;
    }
}
export class QuotaInternalsBrowserProxy {
    constructor() {
        this.handler = QuotaInternalsHandler.getRemote();
    }
    getDiskAvailabilityAndTempPoolSize() {
        return this.handler.getDiskAvailabilityAndTempPoolSize();
    }
    getGlobalUsage(storageType) {
        return this.handler.getGlobalUsageForInternals(enumerateStorageType(storageType));
    }
    getStatistics() {
        return this.handler.getStatistics();
    }
    simulateStoragePressure() {
        const originToTest = (document.body.querySelector('#origin-to-test')).value;
        const originUrl = new URL(originToTest);
        const newOrigin = new Origin();
        newOrigin.scheme = originUrl.protocol.replace(/:$/, '');
        newOrigin.host = originUrl.host;
        newOrigin.port = urlPort(originUrl);
        this.handler.simulateStoragePressure(newOrigin);
    }
    retrieveBucketsTable() {
        return this.handler.retrieveBucketsTable();
    }
    static getInstance() {
        return instance || (instance = new QuotaInternalsBrowserProxy());
    }
}
let instance = null;
