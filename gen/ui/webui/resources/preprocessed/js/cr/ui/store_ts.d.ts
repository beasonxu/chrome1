export interface Action {
    name: string;
}
export declare type DeferredAction = (callback: (p: Action | null) => void) => void;
export interface StoreObserver<T> {
    onStateChanged(newState: T): void;
}
/**
 * A generic datastore for the state of a page, where the state is publicly
 * readable but can only be modified by dispatching an Action.
 * The Store should be extended by specifying T, the page state type
 * associated with the store.
 */
export declare class Store<T> {
    data: T;
    private reducer_;
    protected initialized_: boolean;
    private queuedActions_;
    private observers_;
    private batchMode_;
    constructor(emptyState: T, reducer: (state: T, action: Action) => T);
    init(initialState: T): void;
    isInitialized(): boolean;
    addObserver(observer: StoreObserver<T>): void;
    removeObserver(observer: StoreObserver<T>): void;
    /**
     * Begin a batch update to store data, which will disable updates to the
     * UI until `endBatchUpdate` is called. This is useful when a single UI
     * operation is likely to cause many sequential model updates (eg, deleting
     * 100 bookmarks).
     */
    beginBatchUpdate(): void;
    /**
     * End a batch update to the store data, notifying the UI of any changes
     * which occurred while batch mode was enabled.
     */
    endBatchUpdate(): void;
    /**
     * Handles a 'deferred' action, which can asynchronously dispatch actions
     * to the Store in order to reach a new UI state. DeferredActions have the
     * form `dispatchAsync(function(dispatch) { ... })`). Inside that function,
     * the |dispatch| callback can be called asynchronously to dispatch Actions
     * directly to the Store.
     */
    dispatchAsync(action: DeferredAction): void;
    /**
     * Transition to a new UI state based on the supplied |action|, and notify
     * observers of the change. If the Store has not yet been initialized, the
     * action will be queued and performed upon initialization.
     */
    dispatch(action: Action | null): void;
    private dispatchInternal_;
    reduce(action: Action | null): void;
    protected notifyObservers_(state: T): void;
}
