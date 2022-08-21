// Copyright 2017 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { sendWithPromise } from 'chrome://resources/js/cr.m.js';
/**
 * Contains the possible states a ServiceEntry can be in.
 */
export var ServiceEntryState;
(function (ServiceEntryState) {
    ServiceEntryState["NEW"] = "NEW";
    ServiceEntryState["AVAILABLE"] = "AVAILABLE";
    ServiceEntryState["ACTIVE"] = "ACTIVE";
    ServiceEntryState["PAUSED"] = "PAUSED";
    ServiceEntryState["COMPLETE"] = "COMPLETE";
})(ServiceEntryState || (ServiceEntryState = {}));
/**
 * Contains the possible states a ServiceEntry's driver can be in.
 */
export var DriverEntryState;
(function (DriverEntryState) {
    DriverEntryState["IN_PROGRESS"] = "IN_PROGRESS";
    DriverEntryState["COMPLETE"] = "COMPLETE";
    DriverEntryState["CANCELLED"] = "CANCELLED";
    DriverEntryState["INTERRUPTED"] = "INTERRUPTED";
})(DriverEntryState || (DriverEntryState = {}));
/**
 * Contains the possible results a ServiceEntry can have.
 */
export var ServiceEntryResult;
(function (ServiceEntryResult) {
    ServiceEntryResult["SUCCEED"] = "SUCCEED";
    ServiceEntryResult["FAIL"] = "FAIL";
    ServiceEntryResult["ABORT"] = "ABORT";
    ServiceEntryResult["TIMEOUT"] = "TIMEOUT";
    ServiceEntryResult["UNKNOWN"] = "UNKNOWN";
    ServiceEntryResult["CANCEL"] = "CANCEL";
    ServiceEntryResult["OUT_OF_RETRIES"] = "OUT_OF_RETRIES";
    ServiceEntryResult["OUT_OF_RESUMPTIONS"] = "OUT_OF_RESUMPTIONS";
})(ServiceEntryResult || (ServiceEntryResult = {}));
/**
 * Contains the possible results of a ServiceRequest.
 */
export var ServiceRequestResult;
(function (ServiceRequestResult) {
    ServiceRequestResult["ACCEPTED"] = "ACCEPTED";
    ServiceRequestResult["BACKOFF"] = "BACKOFF";
    ServiceRequestResult["UNEXPECTED_CLIENT"] = "UNEXPECTED_CLIENT";
    ServiceRequestResult["UNEXPECTED_GUID"] = "UNEXPECTED_GUID";
    ServiceRequestResult["CLIENT_CANCELLED"] = "CLIENT_CANCELLED";
    ServiceRequestResult["INTERNAL_ERROR"] = "INTERNAL_ERROR";
})(ServiceRequestResult || (ServiceRequestResult = {}));
export class DownloadInternalsBrowserProxyImpl {
    getServiceStatus() {
        return sendWithPromise('getServiceStatus');
    }
    getServiceDownloads() {
        return sendWithPromise('getServiceDownloads');
    }
    startDownload(url) {
        return sendWithPromise('startDownload', url);
    }
    static getInstance() {
        return instance || (instance = new DownloadInternalsBrowserProxyImpl());
    }
    static setInstance(obj) {
        instance = obj;
    }
}
let instance = null;
