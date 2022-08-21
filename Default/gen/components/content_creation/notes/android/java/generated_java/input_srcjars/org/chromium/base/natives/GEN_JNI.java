package org.chromium.base.natives;

import java.lang.Object;
import java.lang.String;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.content_creation.notes.bridges.NoteServiceBridge.getTemplates
   * @param nativeNoteServiceBridge (long)
   * @param caller (org.chromium.components.content_creation.notes.bridges.NoteServiceBridge)
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.components.content_creation.notes.models.NoteTemplate>>)
   * @return (void)
   */
  public static final native void org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_getTemplates(
      long nativeNoteServiceBridge, Object caller, Object callback);

  /**
   * org.chromium.components.content_creation.notes.bridges.NoteServiceBridge.isPublishAvailable
   * @param nativeNoteServiceBridge (long)
   * @param caller (org.chromium.components.content_creation.notes.bridges.NoteServiceBridge)
   * @return (boolean)
   */
  public static final native boolean org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_isPublishAvailable(
      long nativeNoteServiceBridge, Object caller);

  /**
   * org.chromium.components.content_creation.notes.bridges.NoteServiceBridge.publishNote
   * @param nativeNoteServiceBridge (long)
   * @param caller (org.chromium.components.content_creation.notes.bridges.NoteServiceBridge)
   * @param selectedText (java.lang.String)
   * @param shareUrl (java.lang.String)
   * @param callback (org.chromium.base.Callback<java.lang.String>)
   * @return (void)
   */
  public static final native void org_chromium_components_content_1creation_notes_bridges_NoteServiceBridge_publishNote(
      long nativeNoteServiceBridge, Object caller, String selectedText, String shareUrl,
      Object callback);
}
