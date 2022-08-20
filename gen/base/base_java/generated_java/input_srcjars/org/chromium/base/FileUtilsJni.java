package org.chromium.base;

import java.lang.Override;
import java.lang.String;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;

@CheckDiscard("crbug.com/993421")
public class FileUtilsJni implements FileUtils.Natives {
  private static FileUtils.Natives testInstance;

  public static final JniStaticTestMocker<FileUtils.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.base.FileUtils.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(org.chromium.base.FileUtils.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public String getAbsoluteFilePath(String filePath) {
    return (String)GEN_JNI.org_chromium_base_FileUtils_getAbsoluteFilePath(filePath);
  }

  public static FileUtils.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.base.FileUtils.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new FileUtilsJni();
  }
}
