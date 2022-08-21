// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import * as SDK from '../../../../../front_end/core/sdk/sdk.js';
import { createTarget } from '../../helpers/EnvironmentHelpers.js';
import { describeWithMockConnection } from '../../helpers/MockConnection.js';
const { assert } = chai;
describeWithMockConnection('SourceMapManager', () => {
    const sourceMapContent = JSON.stringify({
        'version': 3,
        'file': '/script.js',
        'mappings': '',
        'sources': [
            '/original-script.js',
        ],
    });
    const loadSourceMap = async (_url) => {
        return {
            success: true,
            content: sourceMapContent,
            errorDescription: { message: '', statusCode: 0, netError: 0, netErrorName: '', urlValid: true },
        };
    };
    it('uses url for a worker\'s source maps from frame', async () => {
        SDK.PageResourceLoader.PageResourceLoader.instance({ forceNew: true, loadOverride: loadSourceMap, maxConcurrentLoads: 1, loadTimeout: 2000 });
        const frameUrl = 'https://frame-host/index.html';
        const scriptUrl = 'https://script-host/script.js';
        const sourceUrl = 'script.js';
        const sourceMapUrl = 'script.js.map';
        const mainTarget = createTarget({ id: 'main', name: 'main', type: SDK.Target.Type.Frame });
        mainTarget.setInspectedURL(frameUrl);
        const workerTarget = createTarget({
            id: 'worker',
            name: 'worker',
            type: SDK.Target.Type.Worker,
            parentTarget: mainTarget,
        });
        const debuggerModel = workerTarget.model(SDK.DebuggerModel.DebuggerModel);
        assert.isNotNull(debuggerModel);
        if (debuggerModel === null) {
            return;
        }
        const sourceMapManager = debuggerModel.sourceMapManager();
        const script = new SDK.Script.Script(debuggerModel, '1', scriptUrl, 0, 0, 0, 0, 0, '', false, false, sourceMapUrl, false, 0, null, null, null, null, null, null);
        sourceMapManager.attachSourceMap(script, sourceUrl, sourceMapUrl);
        const sourceMap = await sourceMapManager.sourceMapForClientPromise(script);
        // Check that the URLs are resolved relative to the frame.
        assert.strictEqual(sourceMap?.url(), 'https://frame-host/script.js.map');
        assert.deepEqual(sourceMap?.sourceURLs(), ['https://frame-host/original-script.js']);
    });
});
//# sourceMappingURL=SourceMapManager_test.js.map