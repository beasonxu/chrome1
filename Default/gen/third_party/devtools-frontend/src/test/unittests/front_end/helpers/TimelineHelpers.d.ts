import * as SDK from '../../../../front_end/core/sdk/sdk.js';
export declare class FakeStorage extends SDK.TracingModel.BackingStorage {
    appendString(): void;
    appendAccessibleString(): () => Promise<string | null>;
    finishWriting(): void;
    reset(): void;
}
