// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

package org.chromium.ui;

import android.content.Context;
import android.os.Build;
import android.view.View;
import android.widget.AdapterView;
import android.widget.ListAdapter;
import android.widget.ListView;
import android.widget.PopupWindow;

/**
 * The dropdown popup window that decides what widget should be used for the popup.
 * For Android K+, DropdownPopupWindow is used, which is based on AnchoredPopupWindow.
 * For devices before Android K, DropdowPopupWindowJellyBean is used, which is based
 * on ListPopupWindow.
 * Note that AnchoredPopupWindow can not be used on Android J due to a focus issue
 * that blocks user from selecting the items.
 */
public class DropdownPopupWindow {
    private DropdownPopupWindowInterface mPopup;

    /**
     * Creates an DropdownPopupWindow with specified parameters.
     * @param context Application context.
     * @param anchorView Popup view to be anchored.
     */
    public DropdownPopupWindow(Context context, View anchorView) {
        if (Build.VERSION.SDK_INT >= Build.VERSION_CODES.N) {
            mPopup = new DropdownPopupWindowImpl(context, anchorView);
        } else {
            mPopup = new DropdownPopupWindowJellyBean(context, anchorView);
        }
    }

    /**
     * Sets the adapter that provides the data and the views to represent the data
     * in this popup window.
     *
     * @param adapter The adapter to use to create this window's content.
     */
    public void setAdapter(ListAdapter adapter) {
        mPopup.setAdapter(adapter);
    }

    public void setInitialSelection(int initialSelection) {
        mPopup.setInitialSelection(initialSelection);
    }

    /**
     * Shows the popup. The adapter should be set before calling this method.
     */
    public void show() {
        mPopup.show();
    }

    /**
     * Set a listener to receive a callback when the popup is dismissed.
     *
     * @param listener Listener that will be notified when the popup is dismissed.
     */
    public void setOnDismissListener(PopupWindow.OnDismissListener listener) {
        mPopup.setOnDismissListener(listener);
    }

    /**
     * Sets the text direction in the dropdown. Should be called before show().
     * @param isRtl If true, then dropdown text direction is right to left.
     */
    public void setRtl(boolean isRtl) {
        mPopup.setRtl(isRtl);
    }

    /**
     * Disable hiding on outside tap so that tapping on a text input field associated with the popup
     * will not hide the popup.
     */
    public void disableHideOnOutsideTap() {
        mPopup.disableHideOnOutsideTap();
    }

    /**
     * Sets the content description to be announced by accessibility services when the dropdown is
     * shown.
     * @param description The description of the content to be announced.
     */
    public void setContentDescriptionForAccessibility(CharSequence description) {
        mPopup.setContentDescriptionForAccessibility(description);
    }

    /**
     * Sets a listener to receive events when a list item is clicked.
     *
     * @param clickListener Listener to register
     */
    public void setOnItemClickListener(AdapterView.OnItemClickListener clickListener) {
        mPopup.setOnItemClickListener(clickListener);
    }

    /**
     * Show the popup. Will have no effect if the popup is already showing.
     * Post a {@link #show()} call to the UI thread.
     */
    public void postShow() {
        mPopup.postShow();
    }

    /**
     * Disposes of the popup window.
     */
    public void dismiss() {
        mPopup.dismiss();
    }

    /**
     * @return The {@link ListView} displayed within the popup window.
     */
    public ListView getListView() {
        return mPopup.getListView();
    }

    /**
     * @return Whether the popup is currently showing.
     */
    public boolean isShowing() {
        return mPopup.isShowing();
    }

    /**
     * See {@link DropdownPopupWindowInterface#setFooterView(View)}.
     */
    protected void setFooterView(View footerItem) {
        mPopup.setFooterView(footerItem);
    }
}
