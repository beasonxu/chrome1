// Copyright 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
const { assert } = chai;
import * as SDK from '../../../../../front_end/core/sdk/sdk.js';
import * as Common from '../../../../../front_end/core/common/common.js';
class MockResourceTreeModel extends Common.ObjectWrapper.ObjectWrapper {
    targetId;
    constructor(id) {
        super();
        this.targetId = id;
    }
    target() {
        return {
            id: () => this.targetId,
            parentTarget: () => null,
        };
    }
}
class MockResourceTreeFrame {
    targetId;
    id;
    getCreationStackTraceData = () => { };
    constructor(frameId, targetId) {
        this.id = frameId;
        this.targetId = targetId;
    }
    resourceTreeModel = () => ({
        target: () => ({
            id: () => this.targetId,
        }),
    });
    isMainFrame = () => true;
    isTopFrame = () => true;
    setCreationStackTrace = () => { };
    getAdScriptId = () => null;
    setAdScriptId = () => { };
    getDebuggerId = () => null;
    setDebuggerId = () => { };
}
function mockFrameToObjectForAssertion(mockFrame) {
    return {
        targetId: mockFrame.targetId,
        id: mockFrame.id,
    };
}
const fakeScriptId = '1';
describe('FrameManager', () => {
    const Events = SDK.FrameManager.Events;
    function attachMockModel(frameManager, targetId) {
        const mockModel = new MockResourceTreeModel(targetId);
        frameManager.modelAdded(mockModel);
        return mockModel;
    }
    function addMockFrame(model, frameId) {
        const targetId = model.target().id();
        const mockFrame = new MockResourceTreeFrame(frameId, targetId);
        model.dispatchEventToListeners(SDK.ResourceTreeModel.Events.FrameAdded, mockFrame);
        return mockFrame;
    }
    function setupEventSink(
    // eslint-disable-next-line @typescript-eslint/no-explicit-any
    frameManager, events) {
        const dispatchedEvents = [];
        for (const event of events) {
            frameManager.addEventListener(event, e => dispatchedEvents.push({ type: event || '', data: e.data }));
        }
        return dispatchedEvents;
    }
    const frameId = 'frame-id';
    const parentFrameId = 'parent-frame-id';
    const childFrameId = 'child-frame-id';
    const targetId = 'target-id';
    const parentTargetId = 'parent-frame-id';
    const childTargetId = 'child-frame-id';
    it('collects frames from a ResourceTreeModel', () => {
        const frameManager = new SDK.FrameManager.FrameManager();
        const dispatchedEvents = setupEventSink(frameManager, [Events.FrameAddedToTarget]);
        const mockModel = attachMockModel(frameManager, targetId);
        addMockFrame(mockModel, frameId);
        const frameIds = dispatchedEvents.map(event => event.data.frame.id);
        assert.deepStrictEqual(frameIds, [frameId]);
        const frameFromId = frameManager.getFrame(frameId);
        assert.strictEqual(frameFromId?.id, frameId);
    });
    it('handles attachment and detachment of frames', () => {
        const frameManager = new SDK.FrameManager.FrameManager();
        const dispatchedEvents = setupEventSink(frameManager, [Events.FrameAddedToTarget, Events.FrameRemoved]);
        const mockModel = attachMockModel(frameManager, targetId);
        addMockFrame(mockModel, parentFrameId);
        const mockChildFrame = addMockFrame(mockModel, childFrameId);
        mockModel.dispatchEventToListeners(SDK.ResourceTreeModel.Events.FrameDetached, { frame: mockChildFrame, isSwap: false });
        assert.strictEqual(dispatchedEvents[0].type, 'FrameAddedToTarget');
        assert.deepEqual(mockFrameToObjectForAssertion(dispatchedEvents[0].data.frame), {
            targetId: targetId,
            id: parentFrameId,
        });
        assert.strictEqual(dispatchedEvents[1].type, 'FrameAddedToTarget');
        assert.deepEqual(mockFrameToObjectForAssertion(dispatchedEvents[1].data.frame), {
            targetId: targetId,
            id: childFrameId,
        });
        assert.strictEqual(dispatchedEvents[2].type, 'FrameRemoved');
        assert.deepEqual(dispatchedEvents[2].data, { frameId: childFrameId });
        let frameFromId = frameManager.getFrame(parentFrameId);
        assert.strictEqual(frameFromId?.id, parentFrameId);
        assert.strictEqual(frameFromId?.resourceTreeModel().target().id(), targetId);
        frameFromId = frameManager.getFrame(childFrameId);
        assert.strictEqual(frameFromId, null);
    });
    it('handles removal of target', () => {
        const frameManager = new SDK.FrameManager.FrameManager();
        const dispatchedEvents = setupEventSink(frameManager, [Events.FrameAddedToTarget, Events.FrameRemoved]);
        const mockModel = attachMockModel(frameManager, targetId);
        addMockFrame(mockModel, parentFrameId);
        addMockFrame(mockModel, childFrameId);
        frameManager.modelRemoved(mockModel);
        assert.strictEqual(dispatchedEvents[0].type, 'FrameAddedToTarget');
        assert.deepEqual(mockFrameToObjectForAssertion(dispatchedEvents[0].data.frame), {
            targetId: targetId,
            id: parentFrameId,
        });
        assert.strictEqual(dispatchedEvents[1].type, 'FrameAddedToTarget');
        assert.deepEqual(mockFrameToObjectForAssertion(dispatchedEvents[1].data.frame), {
            targetId: targetId,
            id: childFrameId,
        });
        assert.strictEqual(dispatchedEvents[2].type, 'FrameRemoved');
        assert.deepEqual(dispatchedEvents[2].data, { frameId: parentFrameId });
        assert.strictEqual(dispatchedEvents[3].type, 'FrameRemoved');
        assert.deepEqual(dispatchedEvents[3].data, { frameId: childFrameId });
        let frameFromId = frameManager.getFrame(parentFrameId);
        assert.strictEqual(frameFromId, null);
        frameFromId = frameManager.getFrame(childFrameId);
        assert.strictEqual(frameFromId, null);
    });
    it('handles a frame transferring to a different target', () => {
        const frameManager = new SDK.FrameManager.FrameManager();
        const dispatchedEvents = setupEventSink(frameManager, [Events.FrameAddedToTarget, Events.FrameRemoved]);
        const mockParentModel = attachMockModel(frameManager, parentTargetId);
        addMockFrame(mockParentModel, parentFrameId);
        const mockChildModel = attachMockModel(frameManager, childTargetId);
        const mockChildFrameParentTarget = addMockFrame(mockParentModel, childFrameId);
        addMockFrame(mockChildModel, childFrameId);
        mockParentModel.dispatchEventToListeners(SDK.ResourceTreeModel.Events.FrameDetached, { frame: mockChildFrameParentTarget, isSwap: true });
        assert.strictEqual(dispatchedEvents[0].type, 'FrameAddedToTarget');
        assert.deepEqual(mockFrameToObjectForAssertion(dispatchedEvents[0].data.frame), {
            targetId: parentTargetId,
            id: parentFrameId,
        });
        assert.strictEqual(dispatchedEvents[1].type, 'FrameAddedToTarget');
        assert.deepEqual(mockFrameToObjectForAssertion(dispatchedEvents[1].data.frame), {
            targetId: parentTargetId,
            id: childFrameId,
        });
        assert.strictEqual(dispatchedEvents[2].type, 'FrameAddedToTarget');
        assert.deepEqual(mockFrameToObjectForAssertion(dispatchedEvents[2].data.frame), {
            targetId: childTargetId,
            id: childFrameId,
        });
        let frameFromId = frameManager.getFrame(parentFrameId);
        assert.strictEqual(frameFromId?.id, parentFrameId);
        assert.strictEqual(frameFromId?.resourceTreeModel().target().id(), parentTargetId);
        frameFromId = frameManager.getFrame(childFrameId);
        assert.strictEqual(frameFromId?.id, childFrameId);
        assert.strictEqual(frameFromId?.resourceTreeModel().target().id(), childTargetId);
    });
    it('transfers frame creation stack traces during OOPIF transfer (case 1)', () => {
        const frameManager = new SDK.FrameManager.FrameManager();
        const mockParentModel = attachMockModel(frameManager, parentTargetId);
        const mockChildModel = attachMockModel(frameManager, childTargetId);
        const trace = {
            callFrames: [
                {
                    functionName: 'function1',
                    url: 'http://www.example.com/script1.js',
                    lineNumber: 15,
                    columnNumber: 10,
                    scriptId: fakeScriptId,
                },
                {
                    functionName: 'function2',
                    url: 'http://www.example.com/script2.js',
                    lineNumber: 20,
                    columnNumber: 5,
                    scriptId: fakeScriptId,
                },
            ],
        };
        const adScriptId = { scriptId: 'myAdScriptId', debuggerId: 'myDebuggerId' };
        // step 1) frame added to existing target
        const frameOldTarget = new SDK.ResourceTreeModel.ResourceTreeFrame(mockParentModel, null, frameId, null, trace, adScriptId);
        mockParentModel.dispatchEventToListeners(SDK.ResourceTreeModel.Events.FrameAdded, frameOldTarget);
        // step 2) frame added to new target
        const frameNewTarget = new SDK.ResourceTreeModel.ResourceTreeFrame(mockChildModel, null, frameId, null, null, null);
        mockChildModel.dispatchEventToListeners(SDK.ResourceTreeModel.Events.FrameAdded, frameNewTarget);
        // step 3) frame removed from existing target
        mockParentModel.dispatchEventToListeners(SDK.ResourceTreeModel.Events.FrameDetached, { frame: frameOldTarget, isSwap: true });
        const frame = frameManager.getFrame(frameId);
        assert.isNotNull(frame);
        if (frame) {
            const { creationStackTrace, creationStackTraceTarget } = frame.getCreationStackTraceData();
            assert.deepEqual(creationStackTrace, trace);
            assert.strictEqual(creationStackTraceTarget.id(), parentTargetId);
            assert.strictEqual(frame.getAdScriptId(), adScriptId.scriptId);
            assert.strictEqual(frame.getDebuggerId(), adScriptId.debuggerId);
        }
    });
    it('transfers frame creation stack traces during OOPIF transfer (case 2)', () => {
        const frameManager = new SDK.FrameManager.FrameManager();
        const mockParentModel = attachMockModel(frameManager, parentTargetId);
        const mockChildModel = attachMockModel(frameManager, childTargetId);
        const trace = {
            callFrames: [
                {
                    functionName: 'function1',
                    url: 'http://www.example.com/script1.js',
                    lineNumber: 15,
                    columnNumber: 10,
                    scriptId: fakeScriptId,
                },
                {
                    functionName: 'function2',
                    url: 'http://www.example.com/script2.js',
                    lineNumber: 20,
                    columnNumber: 5,
                    scriptId: fakeScriptId,
                },
            ],
        };
        const adScriptId = { scriptId: 'myAdScriptId', debuggerId: 'myDebuggerId' };
        // step 1) frame added to existing target
        const frameOldTarget = new SDK.ResourceTreeModel.ResourceTreeFrame(mockParentModel, null, frameId, null, trace, adScriptId);
        mockParentModel.dispatchEventToListeners(SDK.ResourceTreeModel.Events.FrameAdded, frameOldTarget);
        // step 2) frame removed from existing target
        mockParentModel.dispatchEventToListeners(SDK.ResourceTreeModel.Events.FrameDetached, { frame: frameOldTarget, isSwap: true });
        // step 3) frame added to new target
        const frameNewTarget = new SDK.ResourceTreeModel.ResourceTreeFrame(mockChildModel, null, frameId, null, null, null);
        mockChildModel.dispatchEventToListeners(SDK.ResourceTreeModel.Events.FrameAdded, frameNewTarget);
        const frame = frameManager.getFrame(frameId);
        assert.isNotNull(frame);
        if (frame) {
            const { creationStackTrace, creationStackTraceTarget } = frame.getCreationStackTraceData();
            assert.deepEqual(creationStackTrace, trace);
            assert.strictEqual(creationStackTraceTarget.id(), parentTargetId);
            assert.strictEqual(frame.getAdScriptId(), adScriptId.scriptId);
            assert.strictEqual(frame.getDebuggerId(), adScriptId.debuggerId);
        }
    });
    describe('getTopFrame', () => {
        it('returns null when no frames are attached', () => {
            const frameManager = new SDK.FrameManager.FrameManager();
            assert.isNull(frameManager.getTopFrame());
        });
        it('returns the top main frame', () => {
            const frameManager = new SDK.FrameManager.FrameManager();
            const mockModel = attachMockModel(frameManager, targetId);
            addMockFrame(mockModel, frameId);
            assert.strictEqual(frameManager.getTopFrame()?.id, frameId);
        });
    });
});
//# sourceMappingURL=FrameManager_test.js.map