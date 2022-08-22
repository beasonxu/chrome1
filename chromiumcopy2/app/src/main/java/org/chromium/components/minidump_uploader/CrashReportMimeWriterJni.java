package org.chromium.components.minidump_uploader;

import java.lang.Override;
import java.lang.String;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;

@CheckDiscard("crbug.com/993421")
class CrashReportMimeWriterJni implements CrashReportMimeWriter.Natives {
  private static CrashReportMimeWriter.Natives testInstance;

  public static final JniStaticTestMocker<CrashReportMimeWriter.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.components.minidump_uploader.CrashReportMimeWriter.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.components.minidump_uploader.CrashReportMimeWriter.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public void rewriteMinidumpsAsMIMEs(String srcDir, String destDir) {
    GEN_JNI.org_chromium_components_minidump_1uploader_CrashReportMimeWriter_rewriteMinidumpsAsMIMEs(srcDir, destDir);
  }

  @Override
  public String[] rewriteMinidumpsAsMIMEsAndGetCrashKeys(String srcDir, String destDir) {
    return (String[])GEN_JNI.org_chromium_components_minidump_1uploader_CrashReportMimeWriter_rewriteMinidumpsAsMIMEsAndGetCrashKeys(srcDir, destDir);
  }

  @Override
  public void rewriteAnrsAsMIMEs(String[] anrFiles, String[] versionNumbers, String destDir) {
    GEN_JNI.org_chromium_components_minidump_1uploader_CrashReportMimeWriter_rewriteAnrsAsMIMEs(anrFiles, versionNumbers, destDir);
  }

  public static CrashReportMimeWriter.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.components.minidump_uploader.CrashReportMimeWriter.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new CrashReportMimeWriterJni();
  }
}
