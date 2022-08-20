// Copyright (c) 2020 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
import * as SDK from '../../../../../../front_end/core/sdk/sdk.js';
import * as LinearMemoryInspector from '../../../../../../front_end/ui/components/linear_memory_inspector/linear_memory_inspector.js';
import { describeWithEnvironment } from '../../../helpers/EnvironmentHelpers.js';
const { assert } = chai;
const { LinearMemoryInspectorController, ValueInterpreterDisplayUtils } = LinearMemoryInspector;
class MockRemoteObject extends SDK.RemoteObject.LocalJSONObject {
    objSubtype;
    constructor(array) {
        super(array);
    }
    arrayBufferByteLength() {
        return this.value.byteLength;
    }
    get subtype() {
        return 'arraybuffer';
    }
}
function createWrapper(array) {
    const mockRemoteObj = new MockRemoteObject(array.buffer);
    const mockRemoteArrayBuffer = new SDK.RemoteObject.RemoteArrayBuffer(mockRemoteObj);
    return new LinearMemoryInspectorController.RemoteArrayBufferWrapper(mockRemoteArrayBuffer);
}
describeWithEnvironment('LinearMemoryInspectorController', () => {
    it('throws an error on an invalid (out-of-bounds) memory range request', async () => {
        const array = new Uint8Array([2, 4, 6, 2, 4]);
        const wrapper = createWrapper(array);
        try {
            await LinearMemoryInspectorController.LinearMemoryInspectorController.getMemoryRange(wrapper, 10, 20);
            throw new Error('Function did now throw.');
        }
        catch (e) {
            const error = e;
            assert.strictEqual(error.message, 'Requested range is out of bounds.');
        }
    });
    it('throws an error on an invalid memory range request', async () => {
        const array = new Uint8Array([2, 4, 6, 2, 4]);
        const wrapper = createWrapper(array);
        try {
            await LinearMemoryInspectorController.LinearMemoryInspectorController.getMemoryRange(wrapper, 20, 10);
            throw new Error('Function did now throw.');
        }
        catch (e) {
            const error = e;
            assert.strictEqual(error.message, 'Requested range is out of bounds.');
        }
    });
    it('can pull updated data on memory range request', async () => {
        const array = new Uint8Array([2, 4, 6, 2, 4]);
        const wrapper = createWrapper(array);
        const valuesBefore = await LinearMemoryInspectorController.LinearMemoryInspectorController.getMemoryRange(wrapper, 0, array.length);
        assert.strictEqual(valuesBefore.length, array.length);
        for (let i = 0; i < array.length; ++i) {
            assert.strictEqual(valuesBefore[i], array[i]);
        }
        const changedIndex = 0;
        const changedValue = 10;
        array[changedIndex] = changedValue;
        const valuesAfter = await LinearMemoryInspectorController.LinearMemoryInspectorController.getMemoryRange(wrapper, 0, array.length);
        assert.strictEqual(valuesAfter.length, valuesBefore.length);
        for (let i = 0; i < valuesBefore.length; ++i) {
            if (i === changedIndex) {
                assert.strictEqual(valuesAfter[i], changedValue);
            }
            else {
                assert.strictEqual(valuesAfter[i], valuesBefore[i]);
            }
        }
    });
    it('triggers saving and loading of settings on settings changed event', () => {
        const instance = LinearMemoryInspectorController.LinearMemoryInspectorController.instance();
        const valueTypes = new Set(["Integer 16-bit" /* ValueInterpreterDisplayUtils.ValueType.Int16 */, "Float 32-bit" /* ValueInterpreterDisplayUtils.ValueType.Float32 */]);
        const valueTypeModes = new Map([["Integer 16-bit" /* ValueInterpreterDisplayUtils.ValueType.Int16 */, "hex" /* ValueInterpreterDisplayUtils.ValueTypeMode.Hexadecimal */]]);
        const settings = {
            valueTypes,
            modes: valueTypeModes,
            endianness: "Little Endian" /* ValueInterpreterDisplayUtils.Endianness.Little */,
        };
        const defaultSettings = instance.loadSettings();
        instance.saveSettings(settings);
        assert.notDeepEqual(defaultSettings, settings);
        const actualSettings = instance.loadSettings();
        assert.deepEqual(actualSettings, settings);
    });
    it('retrieves size of non-pointer ValueNode', () => {
        const expectedSize = 20;
        const mockValueNode = {
            sourceType: {
                typeMap: new Map([
                    [1, {}],
                ]),
                typeInfo: {
                    size: expectedSize,
                    members: [{ name: 'not_a_pointer', typeId: 1 }],
                },
            },
        };
        const size = LinearMemoryInspectorController.LinearMemoryInspectorController.extractObjectSize(mockValueNode);
        assert.strictEqual(size, expectedSize);
    });
    it('retrieves object size for a pointer ValueNode', () => {
        const expectedSize = 8;
        const pointerSize = 4;
        const nestedValueNode = {
            sourceType: {
                typeInfo: {
                    size: expectedSize,
                },
            },
        };
        const pointerValueNode = {
            sourceType: {
                typeMap: new Map([
                    [1, nestedValueNode.sourceType],
                ]),
                typeInfo: {
                    size: pointerSize,
                    members: [{ name: '*', typeId: 1 }],
                },
            },
        };
        const size = LinearMemoryInspectorController.LinearMemoryInspectorController.extractObjectSize(pointerValueNode);
        assert.strictEqual(size, expectedSize);
    });
    it('retrieves pointer size for a pointer-to-pointer ValueNode', () => {
        const expectedSize = 4;
        const pointerSize = 4;
        const nestedValueNode = {
            sourceType: {
                typeInfo: {
                    size: 8,
                },
            },
        };
        const nestedPointerValueNode = {
            sourceType: {
                typeInfo: {
                    size: expectedSize,
                    members: [{ name: '*', typeId: 2 }],
                },
            },
        };
        const pointerValueNode = {
            sourceType: {
                typeMap: new Map([
                    [1, nestedPointerValueNode.sourceType],
                    [2, nestedValueNode.sourceType],
                ]),
                typeInfo: {
                    size: pointerSize,
                    members: [{ name: '*', typeId: 1 }],
                },
            },
        };
        const size = LinearMemoryInspectorController.LinearMemoryInspectorController.extractObjectSize(pointerValueNode);
        assert.strictEqual(size, expectedSize);
    });
    it('throws an error when retrieving size of non-conforming (multiple pointer members) ValueNode', () => {
        const expectedSize = 8;
        const pointerSize = 4;
        const nestedValueNode = {
            sourceType: {
                typeInfo: {
                    size: expectedSize,
                },
            },
        };
        const pointerValueNode = {
            sourceType: {
                typeMap: new Map([
                    [1, nestedValueNode.sourceType],
                    [2, nestedValueNode.sourceType],
                ]),
                typeInfo: {
                    size: pointerSize,
                    members: [{ name: '*', typeId: 1 }, { name: '*', typeId: 2 }],
                },
            },
        };
        try {
            LinearMemoryInspectorController.LinearMemoryInspectorController.extractObjectSize(pointerValueNode);
            throw new Error('Function did now throw an error.');
        }
        catch (e) {
            const error = e;
            assert.strictEqual(error.message, 'The number of pointers in typeInfo.members should not be greater than one.');
        }
    });
    it('throws an error when retrieving size of non-conforming (typedId not in typeMap) ValueNode', () => {
        const pointerValueNode = {
            sourceType: {
                typeMap: new Map([
                    [42, {}],
                ]),
                typeInfo: {
                    size: 4,
                    members: [{ name: '*', typeId: 1 }],
                },
            },
        };
        try {
            LinearMemoryInspectorController.LinearMemoryInspectorController.extractObjectSize(pointerValueNode);
            throw new Error('Function did now throw an error.');
        }
        catch (e) {
            const error = e;
            assert.strictEqual(error.message, 'Cannot find the source type information for typeId 1.');
        }
    });
    it('returns undefined when error happens in evaluateExpression', async () => {
        const errorText = 'This is a test error';
        const callFrame = {
            evaluate: ({}) => {
                return new Promise(resolve => {
                    resolve({ error: errorText });
                });
            },
        };
        const stub = sinon.stub(console, 'error');
        const instance = LinearMemoryInspectorController.LinearMemoryInspectorController.instance();
        const expressionName = 'myCar';
        const result = await instance.evaluateExpression(callFrame, expressionName);
        assert.strictEqual(result, undefined);
        assert.isTrue(stub.calledOnceWithExactly(`Tried to evaluate the expression '${expressionName}' but got an error: ${errorText}`));
    });
    it('returns undefined when exceptionDetails is set on the result of evaluateExpression', async () => {
        const exceptionText = 'This is a test exception\'s detail text';
        const callFrame = {
            evaluate: ({}) => {
                return new Promise(resolve => {
                    resolve({
                        object: { type: 'object' },
                        exceptionDetails: { text: exceptionText },
                    });
                });
            },
        };
        const stub = sinon.stub(console, 'error');
        const instance = LinearMemoryInspectorController.LinearMemoryInspectorController.instance();
        const expressionName = 'myCar.manufacturer';
        const result = await instance.evaluateExpression(callFrame, expressionName);
        assert.strictEqual(result, undefined);
        assert.isTrue(stub.calledOnceWithExactly(`Tried to evaluate the expression '${expressionName}' but got an exception: ${exceptionText}`));
    });
    it('returns RemoteObject when no exception happens in evaluateExpression', async () => {
        const expectedObj = { type: 'object' };
        const callFrame = {
            evaluate: ({}) => {
                return new Promise(resolve => {
                    resolve({
                        object: expectedObj,
                    });
                });
            },
        };
        const instance = LinearMemoryInspectorController.LinearMemoryInspectorController.instance();
        const result = await instance.evaluateExpression(callFrame, 'myCar.manufacturer');
        assert.deepEqual(result, expectedObj);
    });
    it('extracts array type correctly', () => {
        const obj = { description: 'int[]' };
        const extractedType = LinearMemoryInspector.LinearMemoryInspectorController.LinearMemoryInspectorController
            .extractObjectTypeDescription(obj);
        assert.strictEqual(extractedType, 'int[]');
    });
    it('extracts multi-level pointer correctly', () => {
        const obj = { description: 'int **' };
        const extractedType = LinearMemoryInspector.LinearMemoryInspectorController.LinearMemoryInspectorController
            .extractObjectTypeDescription(obj);
        assert.strictEqual(extractedType, 'int *');
    });
    it('extracts reference type correctly', () => {
        const obj = { description: 'int &' };
        const extractedType = LinearMemoryInspector.LinearMemoryInspectorController.LinearMemoryInspectorController
            .extractObjectTypeDescription(obj);
        assert.strictEqual(extractedType, 'int');
    });
    it('extracts pointer type correctly', () => {
        const obj = { description: 'int *' };
        const extractedType = LinearMemoryInspector.LinearMemoryInspectorController.LinearMemoryInspectorController
            .extractObjectTypeDescription(obj);
        assert.strictEqual(extractedType, 'int');
    });
    it('removes the provided highlightInfo when it is stored in the Controller', () => {
        const highlightInfo = { startAddress: 0, size: 16, name: 'myNumbers', type: 'int[]' };
        const bufferId = 'someBufferId';
        const instance = LinearMemoryInspectorController.LinearMemoryInspectorController.instance();
        instance.setHighlightInfo(bufferId, highlightInfo);
        assert.deepEqual(instance.getHighlightInfo(bufferId), highlightInfo);
        instance.removeHighlight(bufferId, highlightInfo);
        assert.deepEqual(instance.getHighlightInfo(bufferId), undefined);
    });
    it('does not change the stored highlight when the provided highlightInfo does not match', () => {
        const highlightInfo = { startAddress: 0, size: 16, name: 'myNumbers', type: 'int[]' };
        const differentHighlightInfo = { startAddress: 20, size: 50, name: 'myBytes', type: 'bool[]' };
        const bufferId = 'someBufferId';
        const instance = LinearMemoryInspectorController.LinearMemoryInspectorController.instance();
        instance.setHighlightInfo(bufferId, highlightInfo);
        assert.deepEqual(instance.getHighlightInfo(bufferId), highlightInfo);
        instance.removeHighlight(bufferId, differentHighlightInfo);
        assert.deepEqual(instance.getHighlightInfo(bufferId), highlightInfo);
    });
    it('extracts name unchanged when object is not pointer', () => {
        const name = 'myNumbers';
        const obj = { description: 'int[]' };
        const extractedName = LinearMemoryInspector.LinearMemoryInspectorController.LinearMemoryInspectorController.extractObjectName(obj, name);
        assert.strictEqual(extractedName, name);
    });
    it('extracts name with preprended \'*\' when object is a pointer', () => {
        const name = 'myPointerObject';
        const obj = { description: 'int *' };
        const extractedName = LinearMemoryInspector.LinearMemoryInspectorController.LinearMemoryInspectorController.extractObjectName(obj, name);
        assert.strictEqual(extractedName, '*' + name);
    });
});
describe('RemoteArrayBufferWrapper', () => {
    it('correctly wraps the remote object', async () => {
        const array = new Uint8Array([2, 4, 6, 2, 4]);
        const wrapper = createWrapper(array);
        assert.strictEqual(wrapper.length(), array.length);
        const extractedArray = await wrapper.getRange(0, 3);
        assert.lengthOf(extractedArray, 3);
        for (let i = 0; i < 3; ++i) {
            assert.deepEqual(array[i], extractedArray[i]);
        }
    });
});
//# sourceMappingURL=LinearMemoryInspectorController_test.js.map