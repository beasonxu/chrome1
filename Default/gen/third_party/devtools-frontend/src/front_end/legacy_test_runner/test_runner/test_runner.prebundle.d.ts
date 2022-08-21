import * as TestRunner from './TestRunner.js';
export { TestRunner, };
export declare function _executeTestScript(): Promise<void>;
/**
 * @implements {SDK.TargetManager.Observer}
 */
export declare class _TestObserver {
    /**
     * @param {!SDK.Target} target
     * @override
     */
    targetAdded(target: any): void;
    /**
     * @param {!SDK.Target} target
     * @override
     */
    targetRemoved(target: any): void;
}
