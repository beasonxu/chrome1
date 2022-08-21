"use strict";
// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
Object.defineProperty(exports, "__esModule", { value: true });
exports.makeCustomWrappedIt = exports.it = exports.describe = exports.wrapDescribe = exports.takeScreenshots = exports.beforeEach = void 0;
const FS = require("fs");
const Mocha = require("mocha");
const Path = require("path");
const puppeteer_state_js_1 = require("../conductor/puppeteer-state.js");
const async_scope_js_1 = require("./async-scope.js");
const config_js_1 = require("./config.js");
const helper_js_1 = require("./helper.js");
var mocha_1 = require("mocha");
Object.defineProperty(exports, "beforeEach", { enumerable: true, get: function () { return mocha_1.beforeEach; } });
function htmlEscape(raw) {
    return raw.replaceAll('&', '&amp;').replaceAll('<', '&lt;').replaceAll('>', '&gt;').replaceAll('"', '&quot;');
}
async function takeScreenshots(testName) {
    try {
        const { target, frontend } = (0, puppeteer_state_js_1.getBrowserAndPages)();
        const opts = {
            encoding: 'base64',
        };
        const targetScreenshot = await target.screenshot(opts);
        const frontendScreenshot = await frontend.screenshot(opts);
        const prefix = 'data:image/png;base64,';
        const screenshotFile = (0, config_js_1.getEnvVar)('HTML_OUTPUT_FILE');
        if (screenshotFile) {
            try {
                FS.appendFileSync(screenshotFile, `<div><h3>${htmlEscape(testName)}</h3><p>Target page screenshot</p><p><img src="${prefix + targetScreenshot}"/></p><p>Frontend screenshot</p><p><img src="${prefix + frontendScreenshot}"/></p></div>\n`);
                console.error(`Screenshots saved to "${screenshotFile}"`);
            }
            catch (err) {
                console.error(`Error saving to file "${screenshotFile}": `, err);
            }
        }
        else {
            console.error('Target page screenshot (copy the next line and open in the browser):');
            console.error(prefix + targetScreenshot);
            console.error('Frontend screenshot (copy the next line and open in the browser):');
            console.error(prefix + frontendScreenshot);
        }
    }
    catch (err) {
        console.error('Error taking a screenshot', err);
    }
}
exports.takeScreenshots = takeScreenshots;
function wrapSuiteFunction(fn) {
    return function () {
        const hookCreationHook = (hook) => {
            const originalFn = hook.fn;
            if (!originalFn) {
                return;
            }
            hook.fn = function (args) {
                hookTestTimeout(hook);
                return originalFn.call(this, args);
            };
        };
        this.on('beforeEach', hookCreationHook);
        this.on('beforeAll', hookCreationHook);
        this.on('afterEach', hookCreationHook);
        this.on('afterAll', hookCreationHook);
        fn.call(this);
    };
}
function wrapDescribe(mochaFn, title, fn) {
    const originalFn = Error.prepareStackTrace;
    try {
        Error.prepareStackTrace = (err, stackTraces) => {
            if (stackTraces.length < 3) {
                return '<unknown>';
            }
            const filename = stackTraces[2].getFileName();
            if (!filename) {
                return '<unknown>';
            }
            const parsedPath = Path.parse(filename);
            const directories = parsedPath.dir.split(Path.sep);
            const index = directories.lastIndexOf('e2e');
            if (index < 0) {
                return parsedPath.name;
            }
            return Path.join(...directories.slice(index + 1), `${parsedPath.name}.ts`);
        };
        const err = new Error();
        return mochaFn(`${err.stack}: ${title}`, wrapSuiteFunction(fn));
    }
    finally {
        Error.prepareStackTrace = originalFn;
    }
}
exports.wrapDescribe = wrapDescribe;
function describe(title, fn) {
    return wrapDescribe(Mocha.describe, title, fn);
}
exports.describe = describe;
describe.only = function (title, fn) {
    return wrapDescribe(Mocha.describe.only, title, fn);
};
describe.skip = function (title, fn) {
    return wrapDescribe(Mocha.describe.skip, title, fn);
};
describe.skipOnPlatforms = function (platforms, name, fn) {
    const shouldSkip = platforms.includes(helper_js_1.platform);
    if (shouldSkip) {
        wrapDescribe(Mocha.describe.skip, name, fn);
    }
    else {
        describe(name, fn);
    }
};
// eslint-disable-next-line @typescript-eslint/no-explicit-any
async function timeoutHook(done, err) {
    function* joinStacks() {
        const scopes = async_scope_js_1.AsyncScope.scopes;
        if (scopes.size === 0) {
            return;
        }
        for (const scope of scopes.values()) {
            const stack = scope.stack;
            scope.setCanceled();
            if (stack) {
                yield `${stack.join('\n')}\n`;
            }
        }
    }
    const stacks = Array.from(joinStacks());
    if (stacks.length > 0) {
        console.error(`Pending async operations during failure:\n${stacks.join('\n\n')}`);
    }
    if (err && !(0, config_js_1.getEnvVar)('DEBUG_TEST')) {
        await takeScreenshots(this.fullTitle());
    }
    if (done) {
        // This workaround is needed to allow timeoutHook to be async.
        this.timedOut = false;
        done(err);
        this.timedOut = true;
    }
}
exports.it = makeCustomWrappedIt();
const iterations = (0, config_js_1.getEnvVar)('ITERATIONS', 1);
function iterationSuffix(iteration) {
    if (iteration === 0) {
        return '';
    }
    return ` (#${iteration})`;
}
function makeCustomWrappedIt(namePrefix = '') {
    const newMochaItFunc = function (name, callback) {
        for (let i = 0; i < iterations; i++) {
            const testName = namePrefix ? `${namePrefix} ${name}` : name;
            wrapMochaCall(Mocha.it, testName + iterationSuffix(i), callback);
        }
    };
    newMochaItFunc.skip = function (name, callback) {
        wrapMochaCall(Mocha.it.skip, name, callback);
    };
    newMochaItFunc.skipOnPlatforms = function (platforms, name, callback) {
        const shouldSkip = platforms.includes(helper_js_1.platform);
        if (shouldSkip) {
            wrapMochaCall(Mocha.it.skip, name, callback);
        }
        else {
            (0, exports.it)(name, callback);
        }
    };
    newMochaItFunc.only = function (name, callback) {
        for (let i = 0; i < iterations; i++) {
            wrapMochaCall(Mocha.it.only, name + iterationSuffix(i), callback);
        }
    };
    newMochaItFunc.repeat = function (repeat, name, callback) {
        for (let i = 0; i < repeat; i++) {
            wrapMochaCall(Mocha.it.only, name, callback);
        }
    };
    return newMochaItFunc;
}
exports.makeCustomWrappedIt = makeCustomWrappedIt;
function hookTestTimeout(test) {
    if (test) {
        const originalDone = test.callback;
        test.callback = timeoutHook.bind(test, originalDone);
        // If a timeout is already scheduled, reset it to install our new hook
        test.resetTimeout();
    }
}
function wrapMochaCall(call, name, callback) {
    const test = call(name, function (done) {
        hookTestTimeout(test);
        if (callback.length === 0) {
            callback.bind(this)().then(done, done);
        }
        else {
            callback.bind(this)(done);
        }
    });
}
//# sourceMappingURL=mocha-extensions.js.map