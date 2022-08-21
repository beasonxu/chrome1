export namespace TimeSpec {
    const $: mojo.internal.MojomType;
}
export namespace TimeDeltaSpec {
    const $_1: mojo.internal.MojomType;
    export { $_1 as $ };
}
export namespace TimeTicksSpec {
    const $_2: mojo.internal.MojomType;
    export { $_2 as $ };
}
/**
 * @record
 */
export class Time {
    /** @type { !bigint } */
    internalValue: bigint;
}
/**
 * @record
 */
export class TimeDelta {
    /** @type { !bigint } */
    microseconds: bigint;
}
/**
 * @record
 */
export class TimeTicks {
    /** @type { !bigint } */
    internalValue: bigint;
}
import { mojo } from "//resources/mojo/mojo/public/js/bindings.js";
