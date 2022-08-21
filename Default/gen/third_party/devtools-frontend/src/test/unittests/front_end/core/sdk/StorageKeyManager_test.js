// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
const { assert } = chai;
import { createTarget } from '../../helpers/EnvironmentHelpers.js';
import { describeWithMockConnection } from '../../helpers/MockConnection.js';
describeWithMockConnection('StorageKeyManager', () => {
    let SDK;
    let manager;
    before(async () => {
        SDK = await import('../../../../../front_end/core/sdk/sdk.js');
    });
    beforeEach(() => {
        assert.doesNotThrow(() => {
            const target = createTarget();
            manager = new SDK.StorageKeyManager.StorageKeyManager(target);
        });
    });
    it('updates storage keys and emits events correctly', () => {
        let eventFired = false;
        const keys = ['storagekey1', 'storagekey2'];
        assert.isEmpty(manager.storageKeys());
        manager.addEventListener(SDK.StorageKeyManager.Events.StorageKeyAdded, () => {
            eventFired = true;
        });
        manager.updateStorageKeys(new Set(keys));
        assert.isTrue(eventFired);
        assert.deepEqual(manager.storageKeys(), keys);
        eventFired = false;
        manager.addEventListener(SDK.StorageKeyManager.Events.StorageKeyRemoved, () => {
            eventFired = true;
        });
        manager.updateStorageKeys(new Set());
        assert.isTrue(eventFired);
        assert.isEmpty(manager.storageKeys());
    });
    it('updates main storage key and emits event correctly', () => {
        const mainKey = 'storagekey1';
        let eventFired = false;
        assert.isEmpty(manager.mainStorageKey());
        manager.addEventListener(SDK.StorageKeyManager.Events.MainStorageKeyChanged, () => {
            eventFired = true;
        });
        manager.setMainStorageKey(mainKey);
        assert.isTrue(eventFired);
        assert.strictEqual(manager.mainStorageKey(), mainKey);
    });
});
//# sourceMappingURL=StorageKeyManager_test.js.map