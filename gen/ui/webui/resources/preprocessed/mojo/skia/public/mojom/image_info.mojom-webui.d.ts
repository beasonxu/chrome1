export namespace ColorTypeSpec {
    const $: any;
}
export type ColorType = number;
export namespace ColorType {
    const UNKNOWN: number;
    const ALPHA_8: number;
    const RGB_565: number;
    const ARGB_4444: number;
    const RGBA_8888: number;
    const BGRA_8888: number;
    const DEPRECATED_INDEX_8: number;
    const GRAY_8: number;
    const MIN_VALUE: number;
    const MAX_VALUE: number;
}
export namespace AlphaTypeSpec {
    const $_1: any;
    export { $_1 as $ };
}
export type AlphaType = number;
export namespace AlphaType {
    const UNKNOWN_1: number;
    export { UNKNOWN_1 as UNKNOWN };
    export const ALPHA_TYPE_OPAQUE: number;
    export const PREMUL: number;
    export const UNPREMUL: number;
    const MIN_VALUE_1: number;
    export { MIN_VALUE_1 as MIN_VALUE };
    const MAX_VALUE_1: number;
    export { MAX_VALUE_1 as MAX_VALUE };
}
export namespace ImageInfoSpec {
    const $_2: mojo.internal.MojomType;
    export { $_2 as $ };
}
export namespace BitmapN32ImageInfoSpec {
    const $_3: mojo.internal.MojomType;
    export { $_3 as $ };
}
/**
 * @record
 */
export class ImageInfo {
    /** @type { !ColorType } */
    colorType: ColorType;
    /** @type { !AlphaType } */
    alphaType: AlphaType;
    /** @type { !number } */
    width: number;
    /** @type { !number } */
    height: number;
    /** @type { (Array<!number>|undefined) } */
    colorTransferFunction: (Array<number> | undefined);
    /** @type { (Array<!number>|undefined) } */
    colorToXyzMatrix: (Array<number> | undefined);
}
/**
 * @record
 */
export class BitmapN32ImageInfo {
    /** @type { !AlphaType } */
    alphaType: AlphaType;
    /** @type { !number } */
    width: number;
    /** @type { !number } */
    height: number;
    /** @type { (Array<!number>|undefined) } */
    colorTransferFunction: (Array<number> | undefined);
    /** @type { (Array<!number>|undefined) } */
    colorToXyzMatrix: (Array<number> | undefined);
}
import { mojo } from "//resources/mojo/mojo/public/js/bindings.js";
