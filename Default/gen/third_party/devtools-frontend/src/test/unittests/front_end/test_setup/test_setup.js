// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import * as ThemeSupport from '../../../../front_end/ui/legacy/theme_support/theme_support.js';
import { resetTestDOM } from '../helpers/DOMHelpers.js';
import { markStaticTestsLoaded } from '../helpers/RealConnection.js';
beforeEach(resetTestDOM);
before(async function () {
    /* Larger than normal timeout because we've seen some slowness on the bots */
    this.timeout(10000);
    // @ts-ignore
    markStaticTestsLoaded({ hasOnly: this.test.parent.hasOnly() });
});
afterEach(() => {
    // Clear out any Sinon stubs or spies between individual tests.
    sinon.restore();
});
beforeEach(() => {
    // Some unit tests exercise code that assumes a ThemeSupport instance is available.
    // Run this in a beforeEach in case an individual test overrides it.
    const setting = {
        get() {
            return 'default';
        },
    };
    ThemeSupport.ThemeSupport.instance({ forceNew: true, setting });
});
//# sourceMappingURL=test_setup.js.map