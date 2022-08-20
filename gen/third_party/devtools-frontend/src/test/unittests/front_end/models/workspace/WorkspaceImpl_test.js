// Copyright 2022 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
const { assert } = chai;
import * as Workspace from '../../../../../front_end/models/workspace/workspace.js';
import * as Persistence from '../../../../../front_end/models/persistence/persistence.js';
import { createFileSystemUISourceCode } from '../../helpers/UISourceCodeHelpers.js';
describe('WorkspaceImpl', () => {
    it('allows renaming for file names with special characters', () => {
        const platformFileSystem = new Persistence.PlatformFileSystem.PlatformFileSystem('Test Path', 'Test Type');
        const workspace = Workspace.Workspace.WorkspaceImpl.instance();
        const fileSystem = new Persistence.FileSystemWorkspaceBinding.FileSystem({}, platformFileSystem, workspace);
        const URL = 'file:///tmp/NewFile';
        const { uiSourceCode } = createFileSystemUISourceCode({ url: URL, content: 'const data={original:true}', mimeType: 'text/javascript' });
        fileSystem.addUISourceCode(uiSourceCode);
        assert.isNotNull(fileSystem.uiSourceCodeForURL('file:///tmp/NewFile'));
        assert.isNull(fileSystem.uiSourceCodeForURL('file:///tmp/equals=question%3Fpercent%25space%20dollar$semi%3Bhash%23amper&'));
        fileSystem.renameUISourceCode(uiSourceCode, 'equals=question?percent%space dollar$semi;hash#amper&');
        assert.isNull(fileSystem.uiSourceCodeForURL('file:///tmp/NewFile'));
        assert.isNotNull(fileSystem.uiSourceCodeForURL('file:///tmp/equals=question%3Fpercent%25space%20dollar$semi%3Bhash%23amper&'));
    });
});
//# sourceMappingURL=WorkspaceImpl_test.js.map