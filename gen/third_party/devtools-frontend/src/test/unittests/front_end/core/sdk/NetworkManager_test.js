// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
const { assert } = chai;
import * as SDK from '../../../../../front_end/core/sdk/sdk.js';
import * as Common from '../../../../../front_end/core/common/common.js';
import { createTarget, describeWithEnvironment } from '../../helpers/EnvironmentHelpers.js';
import { createWorkspaceProject } from '../../helpers/OverridesHelpers.js';
import * as Root from '../../../../../front_end/core/root/root.js';
import { describeWithMockConnection } from '../../helpers/MockConnection.js';
describe('MultitargetNetworkManager', () => {
    describe('Trust Token done event', () => {
        it('is not lost when arriving before the corresponding requestWillBeSent event', () => {
            // 1) Setup a NetworkManager and listen to "RequestStarted" events.
            const networkManager = new Common.ObjectWrapper.ObjectWrapper();
            const startedRequests = [];
            networkManager.addEventListener(SDK.NetworkManager.Events.RequestStarted, event => {
                startedRequests.push(event.data.request);
            });
            const networkDispatcher = new SDK.NetworkManager.NetworkDispatcher(networkManager);
            // 2) Fire a trust token event, followed by a requestWillBeSent event.
            const mockEvent = { requestId: 'mockId' };
            networkDispatcher.trustTokenOperationDone(mockEvent);
            networkDispatcher.requestWillBeSent({ requestId: 'mockId', request: { url: 'example.com' } });
            // 3) Check that the resulting NetworkRequest has the Trust Token Event data associated with it.
            assert.strictEqual(startedRequests.length, 1);
            assert.strictEqual(startedRequests[0].trustTokenOperationDoneEvent(), mockEvent);
        });
    });
});
describe('NetworkDispatcher', () => {
    const requestWillBeSentEvent = { requestId: 'mockId', request: { url: 'example.com' } };
    const loadingFinishedEvent = { requestId: 'mockId', timestamp: 42, encodedDataLength: 42, shouldReportCorbBlocking: false };
    describeWithEnvironment('request', () => {
        let networkDispatcher;
        beforeEach(() => {
            const networkManager = new Common.ObjectWrapper.ObjectWrapper();
            networkDispatcher = new SDK.NetworkManager.NetworkDispatcher(networkManager);
        });
        it('is preserved after loadingFinished', () => {
            networkDispatcher.requestWillBeSent(requestWillBeSentEvent);
            networkDispatcher.loadingFinished(loadingFinishedEvent);
            assert.exists(networkDispatcher.requestForId('mockId'));
        });
        it('clears finished requests on clearRequests()', () => {
            networkDispatcher.requestWillBeSent(requestWillBeSentEvent);
            networkDispatcher.loadingFinished(loadingFinishedEvent);
            const unfinishedRequestWillBeSentEvent = { requestId: 'unfinishedRequestId', request: { url: 'example.com' } };
            networkDispatcher.requestWillBeSent(unfinishedRequestWillBeSentEvent);
            networkDispatcher.clearRequests();
            assert.notExists(networkDispatcher.requestForId('mockId'));
            assert.exists(networkDispatcher.requestForId('unfinishedRequestId'));
        });
        it('preserves extra info for unfinished clearRequests()', () => {
            const requestWillBeSentExtraInfoEvent = {
                requestId: 'mockId',
                associatedCookies: [],
                headers: { 'Header-From-Extra-Info': 'foo' },
                connectTiming: { requestTime: 0 },
            };
            networkDispatcher.requestWillBeSentExtraInfo(requestWillBeSentExtraInfoEvent);
            networkDispatcher.clearRequests();
            networkDispatcher.requestWillBeSent(requestWillBeSentEvent);
            assert.exists(networkDispatcher.requestForId('mockId'));
            assert.deepEqual(networkDispatcher.requestForId('mockId')?.requestHeaders(), [{ name: 'Header-From-Extra-Info', value: 'foo' }]);
        });
        it('response headers are overwritten by request interception', () => {
            const responseReceivedExtraInfoEvent = {
                requestId: 'mockId',
                blockedCookies: [],
                headers: {
                    'test-header': 'first',
                },
                resourceIPAddressSpace: "Public" /* Protocol.Network.IPAddressSpace.Public */,
                statusCode: 200,
            };
            const mockResponseReceivedEventWithHeaders = (headers) => {
                return {
                    requestId: 'mockId',
                    loaderId: 'mockLoaderId',
                    frameId: 'mockFrameId',
                    timestamp: 581734.083213,
                    type: "Document" /* Protocol.Network.ResourceType.Document */,
                    response: {
                        url: 'example.com',
                        status: 200,
                        statusText: '',
                        headers,
                        mimeType: 'text/html',
                        connectionReused: true,
                        connectionId: 12345,
                        encodedDataLength: 100,
                        securityState: 'secure',
                    },
                };
            };
            networkDispatcher.requestWillBeSent(requestWillBeSentEvent);
            networkDispatcher.responseReceivedExtraInfo(responseReceivedExtraInfoEvent);
            // ResponseReceived does not overwrite response headers.
            networkDispatcher.responseReceived(mockResponseReceivedEventWithHeaders({ 'test-header': 'second' }));
            assert.deepEqual(networkDispatcher.requestForId('mockId')?.responseHeaders, [{ name: 'test-header', value: 'first' }]);
            // ResponseReceived does overwrite response headers if request is marked as intercepted.
            SDK.NetworkManager.MultitargetNetworkManager.instance().dispatchEventToListeners(SDK.NetworkManager.MultitargetNetworkManager.Events.RequestIntercepted, 'example.com');
            networkDispatcher.responseReceived(mockResponseReceivedEventWithHeaders({ 'test-header': 'third' }));
            assert.deepEqual(networkDispatcher.requestForId('mockId')?.responseHeaders, [{ name: 'test-header', value: 'third' }]);
        });
    });
    describeWithEnvironment('WebBundle requests', () => {
        let networkDispatcher;
        const webBundleMetadataReceivedEvent = { requestId: 'mockId', urls: ['foo'] };
        const webBundleInnerResponseParsedEvent = { bundleRequestId: 'bundleRequestId', innerRequestId: 'mockId' };
        const resourceUrlsFoo = ['foo'];
        beforeEach(() => {
            const networkManager = new Common.ObjectWrapper.ObjectWrapper();
            networkDispatcher = new SDK.NetworkManager.NetworkDispatcher(networkManager);
        });
        it('have webbundle info when webbundle event happen between browser events', () => {
            networkDispatcher.requestWillBeSent(requestWillBeSentEvent);
            networkDispatcher.subresourceWebBundleMetadataReceived(webBundleMetadataReceivedEvent);
            networkDispatcher.loadingFinished(loadingFinishedEvent);
            assert.deepEqual(networkDispatcher.requestForId('mockId')?.webBundleInfo()?.resourceUrls, resourceUrlsFoo);
        });
        it('have webbundle info when webbundle event happen before browser events', () => {
            networkDispatcher.subresourceWebBundleMetadataReceived(webBundleMetadataReceivedEvent);
            networkDispatcher.requestWillBeSent(requestWillBeSentEvent);
            networkDispatcher.loadingFinished(loadingFinishedEvent);
            assert.deepEqual(networkDispatcher.requestForId('mockId')?.webBundleInfo()?.resourceUrls, resourceUrlsFoo);
        });
        it('have webbundle info when webbundle event happen after browser events', () => {
            networkDispatcher.requestWillBeSent(requestWillBeSentEvent);
            networkDispatcher.loadingFinished(loadingFinishedEvent);
            networkDispatcher.subresourceWebBundleMetadataReceived(webBundleMetadataReceivedEvent);
            assert.deepEqual(networkDispatcher.requestForId('mockId')?.webBundleInfo()?.resourceUrls, resourceUrlsFoo);
        });
        it('have webbundle info only for the final request but nor redirect', () => {
            networkDispatcher.requestWillBeSent(requestWillBeSentEvent);
            networkDispatcher.requestWillBeSent({ requestId: 'mockId', request: { url: 'redirect.example.com' }, redirectResponse: { url: 'example.com' } });
            networkDispatcher.subresourceWebBundleMetadataReceived(webBundleMetadataReceivedEvent);
            networkDispatcher.loadingFinished(loadingFinishedEvent);
            assert.deepEqual(networkDispatcher.requestForId('mockId')?.webBundleInfo()?.resourceUrls, resourceUrlsFoo);
            assert.exists(networkDispatcher.requestForId('mockId')?.redirectSource());
            assert.notExists(networkDispatcher.requestForId('mockId')?.redirectSource()?.webBundleInfo());
        });
        it('have webbundle info on error', () => {
            networkDispatcher.requestWillBeSent(requestWillBeSentEvent);
            networkDispatcher.loadingFinished(loadingFinishedEvent);
            networkDispatcher.subresourceWebBundleMetadataError({ requestId: 'mockId', errorMessage: 'Kaboom!' });
            assert.deepEqual(networkDispatcher.requestForId('mockId')?.webBundleInfo()?.errorMessage, 'Kaboom!');
        });
        it('have webbundle inner request info when webbundle event happen between browser events', () => {
            networkDispatcher.requestWillBeSent(requestWillBeSentEvent);
            networkDispatcher.subresourceWebBundleInnerResponseParsed(webBundleInnerResponseParsedEvent);
            networkDispatcher.loadingFinished(loadingFinishedEvent);
            assert.deepEqual(networkDispatcher.requestForId('mockId')?.webBundleInnerRequestInfo()?.bundleRequestId, 'bundleRequestId');
        });
        it('have webbundle inner request info when webbundle event happen before browser events', () => {
            networkDispatcher.subresourceWebBundleInnerResponseParsed(webBundleInnerResponseParsedEvent);
            networkDispatcher.requestWillBeSent(requestWillBeSentEvent);
            networkDispatcher.loadingFinished(loadingFinishedEvent);
            assert.deepEqual(networkDispatcher.requestForId('mockId')?.webBundleInnerRequestInfo()?.bundleRequestId, 'bundleRequestId');
        });
        it('have webbundle inner request info when webbundle event happen after browser events', () => {
            networkDispatcher.requestWillBeSent(requestWillBeSentEvent);
            networkDispatcher.loadingFinished(loadingFinishedEvent);
            networkDispatcher.subresourceWebBundleInnerResponseParsed(webBundleInnerResponseParsedEvent);
            assert.deepEqual(networkDispatcher.requestForId('mockId')?.webBundleInnerRequestInfo()?.bundleRequestId, 'bundleRequestId');
        });
        it('have webbundle inner request info on error', () => {
            networkDispatcher.requestWillBeSent(requestWillBeSentEvent);
            networkDispatcher.loadingFinished(loadingFinishedEvent);
            networkDispatcher.subresourceWebBundleInnerResponseError({ innerRequestId: 'mockId', errorMessage: 'Kaboom!' });
            assert.deepEqual(networkDispatcher.requestForId('mockId')?.webBundleInnerRequestInfo()?.errorMessage, 'Kaboom!');
        });
    });
});
async function checkRequestOverride(target, request, requestId, responseStatusCode, responseHeaders, responseBody, expectedOverriddenResponse) {
    const multitargetNetworkManager = SDK.NetworkManager.MultitargetNetworkManager.instance();
    const fetchAgent = target.fetchAgent();
    const spy = sinon.spy(fetchAgent, 'invoke_fulfillRequest');
    const fulfilledRequest = new Promise(resolve => {
        multitargetNetworkManager.addEventListener(SDK.NetworkManager.MultitargetNetworkManager.Events.RequestFulfilled, resolve);
    });
    const interceptedRequest = new SDK.NetworkManager.InterceptedRequest(fetchAgent, request, "Document" /* Protocol.Network.ResourceType.Document */, requestId, responseStatusCode, responseHeaders);
    interceptedRequest.responseBody = async () => {
        return { error: null, content: responseBody, encoded: true };
    };
    assert.isTrue(spy.notCalled);
    await multitargetNetworkManager.requestIntercepted(interceptedRequest);
    await fulfilledRequest;
    assert.isTrue(spy.calledOnceWithExactly(expectedOverriddenResponse));
}
describeWithMockConnection('InterceptedRequest', () => {
    let target;
    beforeEach(async () => {
        SDK.NetworkManager.MultitargetNetworkManager.dispose();
        Root.Runtime.experiments.register(Root.Runtime.ExperimentName.HEADER_OVERRIDES, '');
        Root.Runtime.experiments.enableForTest(Root.Runtime.ExperimentName.HEADER_OVERRIDES);
        target = createTarget();
        const networkPersistenceManager = await createWorkspaceProject('file:///path/to/overrides', [
            {
                name: '.headers',
                path: 'www.example.com/',
                content: `[
            {
              "applyTo": "index.html",
              "headers": {
                "index-only": "only added to index.html"
              }
            },
            {
              "applyTo": "*.css",
              "headers": {
                "css-only": "only added to css files"
              }
            },
            {
              "applyTo": "path/to/*.js",
              "headers": {
                "another-header": "only added to specific path"
              }
            }
          ]`,
            },
            {
                name: '.headers',
                path: '',
                content: `[
            {
              "applyTo": "*",
              "headers": {
                "age": "overridden"
              }
            }
          ]`,
            },
            { name: 'helloWorld.html', path: 'www.example.com/', content: 'Hello World!' },
        ]);
        sinon.stub(target.fetchAgent(), 'invoke_enable');
        await networkPersistenceManager.updateInterceptionPatternsForTests();
    });
    it('can override headers-only for a status 200 request', async () => {
        const responseCode = 200;
        const requestId = 'request_id_1';
        const responseBody = 'interceptedRequest content';
        await checkRequestOverride(target, {
            method: 'GET',
            url: 'https://www.example.com/styles.css',
        }, requestId, responseCode, [{ name: 'content-type', value: 'text/html; charset=utf-8' }], responseBody, {
            requestId,
            responseCode,
            body: responseBody,
            responseHeaders: [
                { name: 'content-type', value: 'text/html; charset=utf-8' },
                { name: 'age', value: 'overridden' },
                { name: 'css-only', value: 'only added to css files' },
            ],
        });
    });
    it('can override headers and content for a status 200 request', async () => {
        const responseCode = 200;
        const requestId = 'request_id_2';
        const responseBody = 'interceptedRequest content';
        await checkRequestOverride(target, {
            method: 'GET',
            url: 'https://www.example.com/helloWorld.html',
        }, requestId, responseCode, [{ name: 'content-type', value: 'text/html; charset=utf-8' }], responseBody, {
            requestId,
            responseCode,
            body: btoa('Hello World!'),
            responseHeaders: [
                { name: 'content-type', value: 'text/html; charset=utf-8' },
                { name: 'age', value: 'overridden' },
            ],
        });
    });
    it('can override headers-only for a status 300 (redirect) request', async () => {
        const responseCode = 300;
        const requestId = 'request_id_3';
        const responseBody = 'interceptedRequest content';
        await checkRequestOverride(target, {
            method: 'GET',
            url: 'https://www.example.com/path/to/foo.js',
        }, requestId, responseCode, [{ name: 'content-type', value: 'text/html; charset=utf-8' }], responseBody, {
            requestId,
            responseCode,
            body: '',
            responseHeaders: [
                { name: 'content-type', value: 'text/html; charset=utf-8' },
                { name: 'age', value: 'overridden' },
                { name: 'another-header', value: 'only added to specific path' },
            ],
        });
    });
    it('can override headers and content for a status 300 (redirect) request', async () => {
        const responseCode = 300;
        const requestId = 'request_id_4';
        const responseBody = 'interceptedRequest content';
        await checkRequestOverride(target, {
            method: 'GET',
            url: 'https://www.example.com/helloWorld.html',
        }, requestId, responseCode, [{ name: 'content-type', value: 'text/html; charset=utf-8' }], responseBody, {
            requestId,
            responseCode: 200,
            body: btoa('Hello World!'),
            responseHeaders: [
                { name: 'content-type', value: 'text/html; charset=utf-8' },
                { name: 'age', value: 'overridden' },
            ],
        });
    });
    it('can override headers-only for a status 404 (not found) request', async () => {
        const responseCode = 404;
        const requestId = 'request_id_5';
        const responseBody = 'interceptedRequest content';
        await checkRequestOverride(target, {
            method: 'GET',
            url: 'https://www.example.com/doesNotExist.html',
        }, requestId, responseCode, [{ name: 'content-type', value: 'text/html; charset=utf-8' }], responseBody, {
            requestId,
            responseCode,
            body: 'interceptedRequest content',
            responseHeaders: [
                { name: 'content-type', value: 'text/html; charset=utf-8' },
                { name: 'age', value: 'overridden' },
            ],
        });
    });
    it('can override headers and content for a status 404 (not found) request', async () => {
        const responseCode = 404;
        const requestId = 'request_id_6';
        const responseBody = 'interceptedRequest content';
        await checkRequestOverride(target, {
            method: 'GET',
            url: 'https://www.example.com/helloWorld.html',
        }, requestId, responseCode, [{ name: 'content-type', value: 'text/html; charset=utf-8' }], responseBody, {
            requestId,
            responseCode: 200,
            body: btoa('Hello World!'),
            responseHeaders: [
                { name: 'content-type', value: 'text/html; charset=utf-8' },
                { name: 'age', value: 'overridden' },
            ],
        });
    });
});
//# sourceMappingURL=NetworkManager_test.js.map