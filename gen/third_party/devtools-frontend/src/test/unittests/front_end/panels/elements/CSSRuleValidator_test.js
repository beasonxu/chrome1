// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import { describeWithEnvironment } from '../../helpers/EnvironmentHelpers.js';
const { assert } = chai;
describeWithEnvironment('CSSRuleValidator', async () => {
    let Elements;
    const tests = [
        {
            description: 'Reports a rule violation when element align-content is set on flex container whose flex-wrap property\'s value is nowrap',
            computedStyles: new Map([
                ['display', 'inline-flex'],
                ['flex-wrap', 'nowrap'],
                ['align-content', 'center'],
            ]),
            validator: () => new Elements.CSSRuleValidator.AlignContentValidator(),
            expectedResult: false,
        },
        {
            description: 'Passes the validation if flex-wrap is set to nowrap, but the element is not a flex container',
            computedStyles: new Map([
                ['display', 'block'],
                ['flex-wrap', 'nowrap'],
                ['align-content', 'center'],
            ]),
            validator: () => new Elements.CSSRuleValidator.AlignContentValidator(),
            expectedResult: true,
        },
        {
            description: 'Reports a rule validation when flex properties are set to non-flex items',
            computedStyles: new Map([
                ['flex', '1'],
            ]),
            parentsComputedStyles: new Map([
                ['display', 'table'],
            ]),
            validator: () => new Elements.CSSRuleValidator.FlexItemValidator(),
            expectedResult: false,
        },
        {
            description: 'Passes the validation when flex properties are set to flex items',
            computedStyles: new Map([
                ['flex', '1'],
            ]),
            parentsComputedStyles: new Map([
                ['display', 'flex'],
            ]),
            validator: () => new Elements.CSSRuleValidator.FlexItemValidator(),
            expectedResult: true,
        },
        {
            description: 'Passes the validation when flex container properties are set to flex container',
            computedStyles: new Map([
                ['display', 'flex'],
                ['flex-direction', 'column'],
            ]),
            parentsComputedStyles: new Map(),
            validator: () => new Elements.CSSRuleValidator.FlexContainerValidator(),
            expectedResult: true,
        },
        {
            description: 'Reports a rule validation when flex container properties are set to non-flex container',
            computedStyles: new Map([
                ['display', 'block'],
                ['flex-direction', 'column'],
            ]),
            parentsComputedStyles: new Map(),
            validator: () => new Elements.CSSRuleValidator.FlexContainerValidator(),
            expectedResult: false,
        },
        {
            description: 'Passes the validation when grid container properties are set to grid container',
            computedStyles: new Map([
                ['display', 'grid'],
                ['grid', '100px / 200px'],
            ]),
            parentsComputedStyles: new Map(),
            validator: () => new Elements.CSSRuleValidator.GridContainerValidator(),
            expectedResult: true,
        },
        {
            description: 'Reports a rule validation when grid container properties are set to non-grid container',
            computedStyles: new Map([
                ['display', 'flex'],
                ['grid', '100px / 200px'],
            ]),
            parentsComputedStyles: new Map(),
            validator: () => new Elements.CSSRuleValidator.GridContainerValidator(),
            expectedResult: false,
        },
        {
            description: 'Passes the validation when grid item properties are set to grid items',
            computedStyles: new Map([
                ['grid', '100px / 200px'],
            ]),
            parentsComputedStyles: new Map([
                ['display', 'grid'],
            ]),
            validator: () => new Elements.CSSRuleValidator.GridItemValidator(),
            expectedResult: true,
        },
        {
            description: 'Reports a rule validation when grid item properties are set to non-grid items',
            computedStyles: new Map([
                ['grid', '100px / 200px'],
            ]),
            parentsComputedStyles: new Map([
                ['display', 'flex'],
            ]),
            validator: () => new Elements.CSSRuleValidator.GridItemValidator(),
            expectedResult: false,
        },
        {
            description: 'Passes the validation when padding is not set to table elements',
            computedStyles: new Map([
                ['display', 'block'],
                ['padding', '15px'],
            ]),
            parentsComputedStyles: new Map(),
            validator: () => new Elements.CSSRuleValidator.PaddingValidator(),
            expectedResult: true,
        },
        {
            description: 'Reports a rule validation when padding is set to table elements',
            computedStyles: new Map([
                ['display', 'table-row'],
                ['padding', '15px'],
            ]),
            parentsComputedStyles: new Map(),
            validator: () => new Elements.CSSRuleValidator.PaddingValidator(),
            expectedResult: false,
        },
        {
            description: 'Passes the validation when top is set to non-static positioned element',
            computedStyles: new Map([
                ['position', 'absolute'],
                ['top', '20px'],
            ]),
            parentsComputedStyles: new Map(),
            validator: () => new Elements.CSSRuleValidator.PositionValidator(),
            expectedResult: true,
        },
        {
            description: 'Reports a rule validation when top is set to static positioned elements',
            computedStyles: new Map([
                ['position', 'static'],
                ['top', '20px'],
            ]),
            parentsComputedStyles: new Map(),
            validator: () => new Elements.CSSRuleValidator.PositionValidator(),
            expectedResult: false,
        },
        {
            description: 'Passes the validation when z-index is set to non-static positioned element',
            computedStyles: new Map([
                ['position', 'absolute'],
                ['z-index', '5'],
            ]),
            parentsComputedStyles: new Map(),
            validator: () => new Elements.CSSRuleValidator.ZIndexValidator(),
            expectedResult: true,
        },
        {
            description: 'Reports a rule validation when z-index is set to static positioned elements',
            computedStyles: new Map([
                ['position', 'static'],
                ['z-index', '5'],
            ]),
            parentsComputedStyles: new Map(),
            validator: () => new Elements.CSSRuleValidator.ZIndexValidator(),
            expectedResult: false,
        },
    ];
    before(async () => {
        Elements = await import('../../../../../front_end/panels/elements/elements.js');
    });
    for (const test of tests) {
        it(test.description, () => {
            const actualResult = test.validator().getHint(test.validator().getApplicableProperties()[0], test.computedStyles, test.parentsComputedStyles);
            if (test.expectedResult) {
                assert.isUndefined(actualResult);
            }
            else {
                assert.isDefined(actualResult);
            }
        });
    }
});
//# sourceMappingURL=CSSRuleValidator_test.js.map