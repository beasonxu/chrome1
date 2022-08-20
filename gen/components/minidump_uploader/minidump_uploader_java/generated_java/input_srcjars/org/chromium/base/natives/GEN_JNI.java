package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.minidump_uploader.CrashReportMimeWriter.rewriteAnrsAsMIMEs
   * @param anrFiles (java.lang.String[])
   * @param versionNumbers (java.lang.String[])
   * @param destDir (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_minidump_1uploader_CrashReportMimeWriter_rewriteAnrsAsMIMEs(
      String[] anrFiles, String[] versionNumbers, String destDir);

  /**
   * org.chromium.components.minidump_uploader.CrashReportMimeWriter.rewriteMinidumpsAsMIMEs
   * @param srcDir (java.lang.String)
   * @param destDir (java.lang.String)
   * @return (void)
   */
  public static final native void org_chromium_components_minidump_1uploader_CrashReportMimeWriter_rewriteMinidumpsAsMIMEs(
      String srcDir, String destDir);

  /**
   * org.chromium.components.minidump_uploader.CrashReportMimeWriter.rewriteMinidumpsAsMIMEsAndGetCrashKeys
   * @param srcDir (java.lang.String)
   * @param destDir (java.lang.String)
   * @return (java.lang.String[])
   */
  public static final native String[] org_chromium_components_minidump_1uploader_CrashReportMimeWriter_rewriteMinidumpsAsMIMEsAndGetCrashKeys(
      String srcDir, String destDir);
}
