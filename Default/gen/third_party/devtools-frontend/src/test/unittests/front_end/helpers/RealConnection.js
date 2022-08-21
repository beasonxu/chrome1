// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import * as Common from '../../../../front_end/core/common/common.js';
import * as Host from '../../../../front_end/core/host/host.js';
import * as Root from '../../../../front_end/core/root/root.js';
import * as SDK from '../../../../front_end/core/sdk/sdk.js';
import * as Main from '../../../../front_end/entrypoints/main/main.js';
import { deinitializeGlobalVars } from './EnvironmentHelpers.js';
export let markStaticTestsLoaded;
const staticTestsLoaded = new Promise(resolve => {
    markStaticTestsLoaded = resolve;
});
let hasOnly = false;
let initialized = false;
function describeBody(title, fn) {
    before(async function () {
        if (initialized) {
            return;
        }
        await deinitializeGlobalVars();
        await import('../../../../front_end/entrypoints/shell/shell.js');
        await import('../../../../front_end/panels/elements/elements-meta.js');
        await import('../../../../front_end/panels/sensors/sensors-meta.js');
        await import('../../../../front_end/entrypoints/inspector_main/inspector_main-meta.js');
        const response = await fetch('/json/new');
        const target = await response.json();
        /* This value comes from the `client.targetDir` setting in `karma.conf.js` */
        // eslint-disable-next-line @typescript-eslint/naming-convention
        const { remoteDebuggingPort } = (globalThis.__karma__).config;
        Root.Runtime.Runtime.setQueryParamForTesting('ws', `localhost:${remoteDebuggingPort}/devtools/page/${target.id}`);
        const main = new Main.MainImpl.MainImpl();
        await main.readyForTest();
        initialized = true;
    });
    beforeEach(() => {
        resetHostBindingStubState();
        Common.Settings.Settings.instance().clearAll();
    });
    describe(title, fn);
}
export function describeWithRealConnection(title, fn) {
    if (fn.toString().match(/(^|\s)it.only\('[^]+',.*\)/)?.length) {
        describeWithRealConnection.only(title, fn);
        return;
    }
    staticTestsLoaded
        .then(event => {
        if (hasOnly || event.hasOnly) {
            return;
        }
        describe(`real-${title}`, () => {
            describeBody(title, fn);
        });
    })
        .catch(e => {
        throw e;
    });
}
describeWithRealConnection.only = function (title, fn) {
    hasOnly = true;
    // eslint-disable-next-line mocha/no-exclusive-tests
    describe.only(`real-${title}`, () => {
        describeBody(title, fn);
    });
};
export async function getExecutionContext(runtimeModel) {
    let executionContexts = runtimeModel.executionContexts();
    if (!executionContexts.length) {
        await new Promise(resolve => {
            const listener = () => {
                runtimeModel.removeEventListener(SDK.RuntimeModel.Events.ExecutionContextCreated, listener);
                executionContexts = runtimeModel.executionContexts();
                resolve();
            };
            runtimeModel.addEventListener(SDK.RuntimeModel.Events.ExecutionContextCreated, listener);
        });
    }
    if (!executionContexts.length) {
        throw new Error('Cannot get executionContext');
    }
    return executionContexts[0];
}
function resetHostBindingStubState() {
    Host.InspectorFrontendHost.InspectorFrontendHostInstance.recordedEnumeratedHistograms.splice(0);
    Host.InspectorFrontendHost.InspectorFrontendHostInstance.recordedPerformanceHistograms.splice(0);
}
//# sourceMappingURL=RealConnection.js.map