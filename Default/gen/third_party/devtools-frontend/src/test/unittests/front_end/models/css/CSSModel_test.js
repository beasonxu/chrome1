// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
const { assert } = chai;
import * as SDK from '../../../../../front_end/core/sdk/sdk.js';
import { createTarget } from '../../helpers/EnvironmentHelpers.js';
import { describeWithMockConnection } from '../../helpers/MockConnection.js';
describeWithMockConnection('FontFace', function () {
    it('gets the FontFace of a source URL', () => {
        const target = createTarget();
        const cssModel = new SDK.CSSModel.CSSModel(target);
        const src = 'mock.com';
        const fontFace = { fontFamily: 'Roboto', src, fontDisplay: 'swap' };
        cssModel.fontsUpdated(fontFace);
        const fontFaceForSource = cssModel.fontFaceForSource(src);
        assert.strictEqual(fontFaceForSource?.getFontFamily(), fontFace.fontFamily);
        assert.strictEqual(fontFaceForSource?.getSrc(), fontFace.src);
        assert.strictEqual(fontFaceForSource?.getFontDisplay(), fontFace.fontDisplay);
    });
});
//# sourceMappingURL=CSSModel_test.js.map