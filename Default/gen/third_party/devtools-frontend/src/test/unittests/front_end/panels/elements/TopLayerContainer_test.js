// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import * as Adorners from '../../../../../front_end/ui/components/adorners/adorners.js';
import { createTarget } from '../../helpers/EnvironmentHelpers.js';
import { describeWithRealConnection } from '../../helpers/RealConnection.js';
const { assert } = chai;
const stubTopLayerDOMNode = (nodeName, backendNodeId) => {
    return {
        nodeName: () => nodeName,
        backendNodeId: () => backendNodeId,
    };
};
const stubElementsTreeElement = () => {
    return {
        // eslint-disable-next-line @typescript-eslint/no-unused-vars
        adorn: ({ name: string }, content) => new Adorners.Adorner.Adorner(),
    };
};
describeWithRealConnection('TopLayerContainer', async () => {
    let Elements;
    before(async () => {
        Elements = await import('../../../../../front_end/panels/elements/elements.js');
    });
    it('should update top layer elements correctly', async () => {
        const topLayerDOMNode1 = stubTopLayerDOMNode('dialog', 1);
        const topLayerDOMNode2 = stubTopLayerDOMNode('div', 2);
        const domModel = {
            target: () => createTarget(),
            getTopLayerElements: async () => Promise.resolve([1, 2]),
            idToDOMNode: new Map([
                [1, topLayerDOMNode1],
                [2, topLayerDOMNode2],
            ]),
        };
        const topLayerTreeNode1 = stubElementsTreeElement();
        const topLayerTreeNode2 = stubElementsTreeElement();
        const tree = {
            treeElementByNode: new WeakMap([
                [topLayerDOMNode1, topLayerTreeNode1],
                [topLayerDOMNode2, topLayerTreeNode2],
            ]),
        };
        const topLayerContainer = new Elements.TopLayerContainer.TopLayerContainer(tree, domModel);
        await topLayerContainer.updateTopLayerElements();
        assert.strictEqual(topLayerContainer.currentTopLayerElements.size, 2);
    });
});
//# sourceMappingURL=TopLayerContainer_test.js.map