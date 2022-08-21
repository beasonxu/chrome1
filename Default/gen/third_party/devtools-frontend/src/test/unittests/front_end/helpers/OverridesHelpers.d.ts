import * as Persistence from '../../../../front_end/models/persistence/persistence.js';
import type * as Platform from '../../../../front_end/core/platform/platform.js';
export declare function setUpEnvironment(): Promise<{
    networkPersistenceManager: Persistence.NetworkPersistenceManager.NetworkPersistenceManager;
}>;
export declare function createWorkspaceProject(baseUrl: Platform.DevToolsPath.UrlString, files: Array<{
    path: string;
    content: string;
    name: string;
}>): Promise<Persistence.NetworkPersistenceManager.NetworkPersistenceManager>;
