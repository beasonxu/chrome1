// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.chrome.browser.password_entry_edit;

import static org.chromium.chrome.browser.password_entry_edit.CredentialEditProperties.ALL_KEYS;
import static org.chromium.chrome.browser.password_entry_edit.CredentialEditProperties.FEDERATION_ORIGIN;
import static org.chromium.chrome.browser.password_entry_edit.CredentialEditProperties.UI_ACTION_HANDLER;
import static org.chromium.chrome.browser.password_entry_edit.CredentialEditProperties.URL_OR_APP;

import org.chromium.chrome.browser.feedback.HelpAndFeedbackLauncher;
import org.chromium.chrome.browser.password_entry_edit.CredentialEntryFragmentViewBase.ComponentStateDelegate;
import org.chromium.chrome.browser.password_manager.ConfirmationDialogHelper;
import org.chromium.chrome.browser.password_manager.settings.PasswordAccessReauthenticationHelper;
import org.chromium.chrome.browser.profiles.Profile;
import org.chromium.ui.modelutil.PropertyModel;
import org.chromium.ui.modelutil.PropertyModelChangeProcessor;

import java.lang.ref.WeakReference;

/**
 * Creates the credential edit UI and is responsible for managing it.
 */
class CredentialEditCoordinator implements ComponentStateDelegate {
    private final CredentialEntryFragmentViewBase mFragmentView;
    private final PasswordAccessReauthenticationHelper mReauthenticationHelper;
    private final CredentialEditMediator mMediator;
    private final UiDismissalHandler mDismissalHandler;
    private final HelpAndFeedbackLauncher mHelpAndFeedbackLauncher;

    private PropertyModel mModel;

    interface UiDismissalHandler {
        /**
         * Issued when the Ui is being permanently dismissed.
         */
        void onUiDismissed();
    }

    interface CredentialActionDelegate {
        /**
         * Called when the user has decided to save the changes to the credential.
         */
        void saveChanges(String username, String password);

        /**
         * Called when the user has confirmed the credential deletion.
         */
        void deleteCredential();
    }

    CredentialEditCoordinator(CredentialEntryFragmentViewBase fragmentView,
            UiDismissalHandler dismissalHandler, CredentialActionDelegate credentialActionDelegate,
            HelpAndFeedbackLauncher helpAndFeedbackLauncher) {
        mFragmentView = fragmentView;
        mReauthenticationHelper = new PasswordAccessReauthenticationHelper(
                fragmentView.getActivity(), fragmentView.getParentFragmentManager());
        mMediator = new CredentialEditMediator(mReauthenticationHelper,
                new ConfirmationDialogHelper(new WeakReference<>(mFragmentView.getContext())),
                credentialActionDelegate, this::handleHelp,
                fragmentView instanceof BlockedCredentialFragmentView);
        mDismissalHandler = dismissalHandler;
        mFragmentView.setComponentStateDelegate(this);
        mHelpAndFeedbackLauncher = helpAndFeedbackLauncher;
    }

    void setCredential(String displayUrlOrAppName, String username, String password,
            String displayFederationOrigin, boolean isInsecureCredential) {
        mModel = new PropertyModel.Builder(ALL_KEYS)
                         .with(URL_OR_APP, displayUrlOrAppName)
                         .with(FEDERATION_ORIGIN, displayFederationOrigin)
                         .build();
        mMediator.initialize(mModel);
        mMediator.setCredential(username, password, isInsecureCredential);
    }

    void setExistingUsernames(String[] existingUsernames) {
        mMediator.setExistingUsernames(existingUsernames);
    }

    void dismiss() {
        mMediator.dismiss();
    }

    void handleHelp() {
        mHelpAndFeedbackLauncher.show(mFragmentView.getActivity(),
                mFragmentView.getActivity().getString(R.string.help_context_passwords),
                Profile.getLastUsedRegularProfile(), null);
    }

    @Override
    public void onStartFragment() {
        CredentialEditCoordinator.setupModelChangeProcessor(mModel, mFragmentView);
        mModel.set(UI_ACTION_HANDLER, mMediator);
    }

    @Override
    public void onResumeFragment() {
        mReauthenticationHelper.onReauthenticationMaybeHappened();
    }

    @Override
    public void onDestroy() {
        mDismissalHandler.onUiDismissed();
    }

    static void setupModelChangeProcessor(
            PropertyModel model, CredentialEntryFragmentViewBase view) {
        if (view instanceof CredentialEditFragmentView) {
            PropertyModelChangeProcessor.create(model, (CredentialEditFragmentView) view,
                    CredentialEditViewBinder::bindCredentialEditView);
            return;
        }

        if (view instanceof BlockedCredentialFragmentView) {
            PropertyModelChangeProcessor.create(model, (BlockedCredentialFragmentView) view,
                    BlockedCredentialViewBinder::bindBlockedCredentialView);
            return;
        }

        if (view instanceof FederatedCredentialFragmentView) {
            PropertyModelChangeProcessor.create(model, (FederatedCredentialFragmentView) view,
                    FederatedCredentialViewBinder::bindFederatedCredentialView);
            return;
        }
    }
}
