/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class PageMetricsHostPendingReceiver implements mojo.internal.interfaceSupport.PendingReceiver {
    /**
     * @param {!MojoHandle|!mojo.internal.interfaceSupport.Endpoint} handle
     */
    constructor(handle: MojoHandle | mojo.internal.interfaceSupport.Endpoint);
    /** @public {!mojo.internal.interfaceSupport.Endpoint} */
    public handle: mojo.internal.interfaceSupport.Endpoint;
    /** @param {string=} scope */
    bindInBrowser(scope?: string | undefined): void;
}
/** @interface */
export class PageMetricsHostInterface {
    /**
     * @param { !PageMetricsRemote } page
     */
    onPageRemoteCreated(page: PageMetricsRemote): void;
    /**
     * @param { !string } name
     * @return {!Promise<{
          markedTime: ?mojoBase_mojom_TimeDelta,
     *  }>}
     */
    onGetMark(name: string): Promise<{
        markedTime: mojoBase_mojom_TimeDelta | null;
    }>;
    /**
     * @param { !string } name
     */
    onClearMark(name: string): void;
    /**
     * @param { !string } name
     * @param { !mojoBase_mojom_TimeDelta } time
     */
    onUmaReportTime(name: string, time: mojoBase_mojom_TimeDelta): void;
}
/**
 * @implements { PageMetricsHostInterface }
 */
export class PageMetricsHostRemote implements PageMetricsHostInterface {
    /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
    constructor(handle?: (MojoHandle | mojo.internal.interfaceSupport.Endpoint) | undefined);
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!PageMetricsHostPendingReceiver>}
     */
    private proxy;
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!PageMetricsHostPendingReceiver>}
     */
    public $: any;
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    public onConnectionError: any;
    /**
     * @param { !PageMetricsRemote } page
     */
    onPageRemoteCreated(page: PageMetricsRemote): void;
    /**
     * @param { !string } name
     * @return {!Promise<{
          markedTime: ?mojoBase_mojom_TimeDelta,
     *  }>}
     */
    onGetMark(name: string): Promise<{
        markedTime: mojoBase_mojom_TimeDelta | null;
    }>;
    /**
     * @param { !string } name
     */
    onClearMark(name: string): void;
    /**
     * @param { !string } name
     * @param { !mojoBase_mojom_TimeDelta } time
     */
    onUmaReportTime(name: string, time: mojoBase_mojom_TimeDelta): void;
}
/**
 * An object which receives request messages for the PageMetricsHost
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class PageMetricsHostReceiver {
    /**
     * @param {!PageMetricsHostInterface } impl
     */
    constructor(impl: PageMetricsHostInterface);
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!PageMetricsHostRemote>} */
    private helper_internal_;
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageMetricsHostRemote>}
     */
    public $: any;
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    public onConnectionError: any;
}
export class PageMetricsHost {
    /**
     * @return {!string}
     */
    static get $interfaceName(): string;
    /**
     * Returns a remote for this interface which sends messages to the browser.
     * The browser must have an interface request binder registered for this
     * interface and accessible to the calling document's frame.
     *
     * @return {!PageMetricsHostRemote}
     */
    static getRemote(): PageMetricsHostRemote;
}
/**
 * An object which receives request messages for the PageMetricsHost
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class PageMetricsHostCallbackRouter {
    helper_internal_: any;
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageMetricsHostRemote>}
     */
    public $: any;
    router_: any;
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    public onPageRemoteCreated: any;
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    public onGetMark: any;
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    public onClearMark: any;
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    public onUmaReportTime: any;
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    public onConnectionError: any;
    /**
     * @param {number} id An ID returned by a prior call to addListener.
     * @return {boolean} True iff the identified listener was found and removed.
     */
    removeListener(id: number): boolean;
}
/**
 * @implements {mojo.internal.interfaceSupport.PendingReceiver}
 */
export class PageMetricsPendingReceiver implements mojo.internal.interfaceSupport.PendingReceiver {
    /**
     * @param {!MojoHandle|!mojo.internal.interfaceSupport.Endpoint} handle
     */
    constructor(handle: MojoHandle | mojo.internal.interfaceSupport.Endpoint);
    /** @public {!mojo.internal.interfaceSupport.Endpoint} */
    public handle: mojo.internal.interfaceSupport.Endpoint;
    /** @param {string=} scope */
    bindInBrowser(scope?: string | undefined): void;
}
/** @interface */
export class PageMetricsInterface {
    /**
     * @param { !string } name
     * @return {!Promise<{
          markedTime: ?mojoBase_mojom_TimeDelta,
     *  }>}
     */
    onGetMark(name: string): Promise<{
        markedTime: mojoBase_mojom_TimeDelta | null;
    }>;
    /**
     * @param { !string } name
     */
    onClearMark(name: string): void;
}
/**
 * @implements { PageMetricsInterface }
 */
export class PageMetricsRemote implements PageMetricsInterface {
    /** @param {MojoHandle|mojo.internal.interfaceSupport.Endpoint=} handle */
    constructor(handle?: (MojoHandle | mojo.internal.interfaceSupport.Endpoint) | undefined);
    /**
     * @private {!mojo.internal.interfaceSupport.InterfaceRemoteBase<!PageMetricsPendingReceiver>}
     */
    private proxy;
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceRemoteBaseWrapper<!PageMetricsPendingReceiver>}
     */
    public $: any;
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    public onConnectionError: any;
    /**
     * @param { !string } name
     * @return {!Promise<{
          markedTime: ?mojoBase_mojom_TimeDelta,
     *  }>}
     */
    onGetMark(name: string): Promise<{
        markedTime: mojoBase_mojom_TimeDelta | null;
    }>;
    /**
     * @param { !string } name
     */
    onClearMark(name: string): void;
}
/**
 * An object which receives request messages for the PageMetrics
 * mojom interface. Must be constructed over an object which implements that
 * interface.
 */
export class PageMetricsReceiver {
    /**
     * @param {!PageMetricsInterface } impl
     */
    constructor(impl: PageMetricsInterface);
    /** @private {!mojo.internal.interfaceSupport.InterfaceReceiverHelperInternal<!PageMetricsRemote>} */
    private helper_internal_;
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageMetricsRemote>}
     */
    public $: any;
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    public onConnectionError: any;
}
export class PageMetrics {
    /**
     * @return {!string}
     */
    static get $interfaceName(): string;
    /**
     * Returns a remote for this interface which sends messages to the browser.
     * The browser must have an interface request binder registered for this
     * interface and accessible to the calling document's frame.
     *
     * @return {!PageMetricsRemote}
     */
    static getRemote(): PageMetricsRemote;
}
/**
 * An object which receives request messages for the PageMetrics
 * mojom interface and dispatches them as callbacks. One callback receiver exists
 * on this object for each message defined in the mojom interface, and each
 * receiver can have any number of listeners added to it.
 */
export class PageMetricsCallbackRouter {
    helper_internal_: any;
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceReceiverHelper<!PageMetricsRemote>}
     */
    public $: any;
    router_: any;
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    public onGetMark: any;
    /**
     * @public {!mojo.internal.interfaceSupport.InterfaceCallbackReceiver}
     */
    public onClearMark: any;
    /** @public {!mojo.internal.interfaceSupport.ConnectionErrorEventRouter} */
    public onConnectionError: any;
    /**
     * @param {number} id An ID returned by a prior call to addListener.
     * @return {boolean} True iff the identified listener was found and removed.
     */
    removeListener(id: number): boolean;
}
export namespace PageMetricsHost_OnPageRemoteCreated_ParamsSpec {
    const $: mojo.internal.MojomType;
}
export namespace PageMetricsHost_OnGetMark_ParamsSpec {
    const $_1: mojo.internal.MojomType;
    export { $_1 as $ };
}
export namespace PageMetricsHost_OnGetMark_ResponseParamsSpec {
    const $_2: mojo.internal.MojomType;
    export { $_2 as $ };
}
export namespace PageMetricsHost_OnClearMark_ParamsSpec {
    const $_3: mojo.internal.MojomType;
    export { $_3 as $ };
}
export namespace PageMetricsHost_OnUmaReportTime_ParamsSpec {
    const $_4: mojo.internal.MojomType;
    export { $_4 as $ };
}
export namespace PageMetrics_OnGetMark_ParamsSpec {
    const $_5: mojo.internal.MojomType;
    export { $_5 as $ };
}
export namespace PageMetrics_OnGetMark_ResponseParamsSpec {
    const $_6: mojo.internal.MojomType;
    export { $_6 as $ };
}
export namespace PageMetrics_OnClearMark_ParamsSpec {
    const $_7: mojo.internal.MojomType;
    export { $_7 as $ };
}
/**
 * @record
 */
export class PageMetricsHost_OnPageRemoteCreated_Params {
    /** @type { !PageMetricsRemote } */
    page: PageMetricsRemote;
}
/**
 * @record
 */
export class PageMetricsHost_OnGetMark_Params {
    /** @type { !string } */
    name: string;
}
/**
 * @record
 */
export class PageMetricsHost_OnGetMark_ResponseParams {
    /** @type { (mojoBase_mojom_TimeDelta|undefined) } */
    markedTime: (mojoBase_mojom_TimeDelta | undefined);
}
/**
 * @record
 */
export class PageMetricsHost_OnClearMark_Params {
    /** @type { !string } */
    name: string;
}
/**
 * @record
 */
export class PageMetricsHost_OnUmaReportTime_Params {
    /** @type { !string } */
    name: string;
    /** @type { !mojoBase_mojom_TimeDelta } */
    time: mojoBase_mojom_TimeDelta;
}
/**
 * @record
 */
export class PageMetrics_OnGetMark_Params {
    /** @type { !string } */
    name: string;
}
/**
 * @record
 */
export class PageMetrics_OnGetMark_ResponseParams {
    /** @type { (mojoBase_mojom_TimeDelta|undefined) } */
    markedTime: (mojoBase_mojom_TimeDelta | undefined);
}
/**
 * @record
 */
export class PageMetrics_OnClearMark_Params {
    /** @type { !string } */
    name: string;
}
import { mojo } from "//resources/mojo/mojo/public/js/bindings.js";
import { TimeDelta as mojoBase_mojom_TimeDelta } from "chrome://resources/mojo/mojo/public/mojom/base/time.mojom-webui.js";
