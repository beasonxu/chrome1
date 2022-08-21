package org.chromium.base.natives;

import java.lang.Object;

public final class GEN_JNI {
  public static boolean TESTING_ENABLED;

  public static boolean REQUIRE_MOCK;

  /**
   * org.chromium.components.content_creation.reactions.ReactionServiceBridge.getReactions
   * @param nativeReactionServiceBridge (long)
   * @param caller (org.chromium.components.content_creation.reactions.ReactionServiceBridge)
   * @param callback (org.chromium.base.Callback<java.util.List<org.chromium.components.content_creation.reactions.ReactionMetadata>>)
   * @return (void)
   */
  public static final native void org_chromium_components_content_1creation_reactions_ReactionServiceBridge_getReactions(
      long nativeReactionServiceBridge, Object caller, Object callback);
}
