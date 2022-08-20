// Copyright 2021 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_AUTOFILL_EDIT_ADDRESS_PROFILE_DIALOG_CONTROLLER_H_
#define CHROME_BROWSER_UI_AUTOFILL_EDIT_ADDRESS_PROFILE_DIALOG_CONTROLLER_H_

#include "components/autofill/core/browser/autofill_client.h"

namespace autofill {

// Interface that exposes controller functionality to EditAddressProfileView
// bubble.
class EditAddressProfileDialogController {
 public:
  virtual ~EditAddressProfileDialogController() = default;

  virtual std::u16string GetWindowTitle() const = 0;
  virtual std::u16string GetOkButtonLabel() const = 0;
  virtual const AutofillProfile& GetProfileToEdit() const = 0;
  // Gets invoked when the user click either OK or Cancel buttons in the address
  // profile dialog. `decision` reflects which button has been clicked.
  // `profile_with_edits` contains the address profile including the edits
  // performed by the user.
  virtual void OnUserDecision(
      AutofillClient::SaveAddressProfileOfferUserDecision decision,
      const AutofillProfile& profile_with_edits) = 0;
  virtual void OnDialogClosed() = 0;
};

}  // namespace autofill

#endif  // CHROME_BROWSER_UI_AUTOFILL_EDIT_ADDRESS_PROFILE_DIALOG_CONTROLLER_H_
