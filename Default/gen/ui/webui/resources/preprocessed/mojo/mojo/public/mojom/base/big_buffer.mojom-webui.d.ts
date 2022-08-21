export namespace BigBufferSharedMemoryRegionSpec {
    const $: mojo.internal.MojomType;
}
export namespace BigBufferSpec {
    const $_1: mojo.internal.MojomType;
    export { $_1 as $ };
}
/**
 * @record
 */
export class BigBufferSharedMemoryRegion {
    /** @type { !MojoHandle } */
    bufferHandle: MojoHandle;
    /** @type { !number } */
    size: number;
}
export type BigBuffer = {
    bytes: (Array<number> | undefined);
    sharedMemory: (BigBufferSharedMemoryRegion | undefined);
    invalidBuffer: (boolean | undefined);
};
/**
 * @typedef { {
 *   bytes: (!Array<!number>|undefined),
 *   sharedMemory: (!BigBufferSharedMemoryRegion|undefined),
 *   invalidBuffer: (!boolean|undefined),
 * } }
 */
export const BigBuffer: {};
import { mojo } from "//resources/mojo/mojo/public/js/bindings.js";
