package org.chromium.base.natives;

import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.module_installer.builder.Module.loadNative
   * @param name (java.lang.String)
   * @param libraries (java.lang.String[])
   * @param paks (java.lang.String[])
   * @return (void)
   */
  public static final native void org_chromium_components_module_1installer_builder_Module_loadNative(
      String name, String[] libraries, String[] paks);
}
