// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
const { assert } = chai;
import { createTarget } from '../../helpers/EnvironmentHelpers.js';
import { describeWithMockConnection } from '../../helpers/MockConnection.js';
describeWithMockConnection('AccessibilityModel', () => {
    let SDK;
    before(async () => {
        SDK = await import('../../../../../front_end/core/sdk/sdk.js');
    });
    it('can be instantiated', () => {
        assert.doesNotThrow(() => {
            const target = createTarget();
            new SDK.AccessibilityModel.AccessibilityModel(target);
        });
    });
});
//# sourceMappingURL=AccessibilityModel_test.js.map