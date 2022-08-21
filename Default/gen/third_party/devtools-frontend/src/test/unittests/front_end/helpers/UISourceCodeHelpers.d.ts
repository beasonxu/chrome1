import * as Common from '../../../../front_end/core/common/common.js';
import type * as Platform from '../../../../front_end/core/platform/platform.js';
import * as TextUtils from '../../../../front_end/models/text_utils/text_utils.js';
import * as Bindings from '../../../../front_end/models/bindings/bindings.js';
import * as Workspace from '../../../../front_end/models/workspace/workspace.js';
import * as Persistence from '../../../../front_end/models/persistence/persistence.js';
export declare function createContentProviderUISourceCode(options: {
    url: Platform.DevToolsPath.UrlString;
    content?: string;
    mimeType: string;
    projectType?: Workspace.Workspace.projectTypes;
    projectId?: string;
    metadata?: Workspace.UISourceCode.UISourceCodeMetadata;
}): {
    project: Bindings.ContentProviderBasedProject.ContentProviderBasedProject;
    uiSourceCode: Workspace.UISourceCode.UISourceCode;
};
declare class TestFileSystem extends Persistence.FileSystemWorkspaceBinding.FileSystem {
    #private;
    constructor(options: {
        fileSystemWorkspaceBinding: Persistence.FileSystemWorkspaceBinding.FileSystemWorkspaceBinding;
        platformFileSystem: Persistence.PlatformFileSystem.PlatformFileSystem;
        workspace: Workspace.Workspace.WorkspaceImpl;
        content: string;
        metadata: Workspace.UISourceCode.UISourceCodeMetadata;
    });
    requestFileContent(_uiSourceCode: Workspace.UISourceCode.UISourceCode): Promise<TextUtils.ContentProvider.DeferredContent>;
    requestMetadata(_uiSourceCode: Workspace.UISourceCode.UISourceCode): Promise<Workspace.UISourceCode.UISourceCodeMetadata | null>;
}
export declare function createFileSystemUISourceCode(options: {
    url: Platform.DevToolsPath.UrlString;
    mimeType: string;
    content?: string;
    fileSystemPath?: string;
    autoMapping?: boolean;
    type?: string;
    metadata?: Workspace.UISourceCode.UISourceCodeMetadata;
}): {
    uiSourceCode: Workspace.UISourceCode.UISourceCode;
    project: TestFileSystem;
};
export declare function setupMockedUISourceCode(url?: string): {
    sut: Workspace.UISourceCode.UISourceCode;
    projectStub: import("sinon").SinonStubbedInstance<Bindings.ContentProviderBasedProject.ContentProviderBasedProject>;
    contentTypeStub: import("sinon").SinonStubbedInstance<Common.ResourceType.ResourceType>;
};
export {};
