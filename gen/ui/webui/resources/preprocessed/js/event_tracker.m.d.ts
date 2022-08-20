export class EventTracker {
    static removeEventListener(entry: EventTrackerEntry): void;
    private listeners_;
    add(target: EventTarget, eventType: string, listener: EventListener | Function, capture?: boolean | undefined): void;
    remove(target: EventTarget, eventType: string | null): void;
    removeAll(): void;
}
type EventTrackerEntry = {
    target: EventTarget;
    eventType: string;
    listener: (EventListener | Function);
    capture: boolean;
};
declare let EventTrackerEntry: any;
export {};
