package org.chromium.components.browser_ui.photo_picker;

import java.lang.Override;
import org.chromium.base.JniStaticTestMocker;
import org.chromium.base.NativeLibraryLoadedStatus;
import org.chromium.base.annotations.CheckDiscard;
import org.chromium.base.natives.GEN_JNI;

@CheckDiscard("crbug.com/993421")
class PhotoPickerFeaturesJni implements PhotoPickerFeatures.Natives {
  private static PhotoPickerFeatures.Natives testInstance;

  public static final JniStaticTestMocker<PhotoPickerFeatures.Natives> TEST_HOOKS = new org.chromium.base.JniStaticTestMocker<org.chromium.components.browser_ui.photo_picker.PhotoPickerFeatures.Natives>() {
    @java.lang.Override
    public void setInstanceForTesting(
        org.chromium.components.browser_ui.photo_picker.PhotoPickerFeatures.Natives instance) {
      if (!org.chromium.base.natives.GEN_JNI.TESTING_ENABLED) {
        throw new RuntimeException("Tried to set a JNI mock when mocks aren't enabled!");
      }
      testInstance = instance;
    }
  };

  @Override
  public long getFeature(int ordinal) {
    return (long)GEN_JNI.org_chromium_components_browser_1ui_photo_1picker_PhotoPickerFeatures_getFeature(ordinal);
  }

  public static PhotoPickerFeatures.Natives get() {
    if (GEN_JNI.TESTING_ENABLED) {
      if (testInstance != null) {
        return testInstance;
      }
      if (GEN_JNI.REQUIRE_MOCK) {
        throw new UnsupportedOperationException("No mock found for the native implementation for org.chromium.components.browser_ui.photo_picker.PhotoPickerFeatures.Natives. The current configuration requires all native implementations to have a mock instance.");
      }
    }
    NativeLibraryLoadedStatus.checkLoaded(false);
    return new PhotoPickerFeaturesJni();
  }
}
