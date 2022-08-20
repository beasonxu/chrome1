// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_BROWSER_UI_WEBUI_PRINT_PREVIEW_PRINT_PREVIEW_UI_H_
#define CHROME_BROWSER_UI_WEBUI_PRINT_PREVIEW_PRINT_PREVIEW_UI_H_

#include <stdint.h>

#include <memory>
#include <string>
#include <vector>

#include "base/callback_forward.h"
#include "base/gtest_prod_util.h"
#include "base/memory/raw_ptr.h"
#include "base/memory/read_only_shared_memory_region.h"
#include "base/memory/ref_counted.h"
#include "base/memory/weak_ptr.h"
#include "base/time/time.h"
#include "build/chromeos_buildflags.h"
#include "chrome/browser/ui/webui/constrained_web_dialog_ui.h"
#include "chrome/services/printing/public/mojom/pdf_nup_converter.mojom.h"
#include "components/printing/common/print.mojom.h"
#include "components/services/print_compositor/public/mojom/print_compositor.mojom.h"
#include "mojo/public/cpp/bindings/associated_receiver.h"
#include "printing/buildflags/buildflags.h"
#include "printing/mojom/print.mojom-forward.h"
#include "third_party/abseil-cpp/absl/types/optional.h"
#include "ui/gfx/geometry/rect.h"
#include "ui/gfx/geometry/size.h"

namespace base {
class FilePath;
class RefCountedMemory;
}  // namespace base

namespace printing {

class PrintPreviewHandler;

class PrintPreviewUI : public ConstrainedWebDialogUI,
                       public mojom::PrintPreviewUI {
 public:
  explicit PrintPreviewUI(content::WebUI* web_ui);

  PrintPreviewUI(const PrintPreviewUI&) = delete;
  PrintPreviewUI& operator=(const PrintPreviewUI&) = delete;

  ~PrintPreviewUI() override;

  mojo::PendingAssociatedRemote<mojom::PrintPreviewUI> BindPrintPreviewUI();

  // Gets the print preview |data|. |index| is zero-based, and can be
  // |COMPLETE_PREVIEW_DOCUMENT_INDEX| to get the entire preview document.
  virtual void GetPrintPreviewDataForIndex(
      int index,
      scoped_refptr<base::RefCountedMemory>* data) const;

  // printing::mojo::PrintPreviewUI:
  void SetOptionsFromDocument(const mojom::OptionsFromDocumentParamsPtr params,
                              int32_t request_id) override;
  void DidPrepareDocumentForPreview(int32_t document_cookie,
                                    int32_t request_id) override;
  void DidPreviewPage(mojom::DidPreviewPageParamsPtr params,
                      int32_t request_id) override;
  void MetafileReadyForPrinting(mojom::DidPreviewDocumentParamsPtr params,
                                int32_t request_id) override;
  void PrintPreviewFailed(int32_t document_cookie, int32_t request_id) override;
  void PrintPreviewCancelled(int32_t document_cookie,
                             int32_t request_id) override;
  void PrinterSettingsInvalid(int32_t document_cookie,
                              int32_t request_id) override;
  void DidGetDefaultPageLayout(mojom::PageSizeMarginsPtr page_layout_in_points,
                               const gfx::Rect& printable_area_in_points,
                               bool has_custom_page_size_style,
                               int32_t request_id) override;
  void DidStartPreview(mojom::DidStartPreviewParamsPtr params,
                       int32_t request_id) override;

  bool IsBound() const;

  // Setters
  void SetInitiatorTitle(const std::u16string& initiator_title);

  const std::u16string& initiator_title() const { return initiator_title_; }

#if BUILDFLAG(IS_CHROMEOS_ASH)
  bool source_is_arc() const { return source_is_arc_; }
#endif

  bool source_is_modifiable() const { return source_is_modifiable_; }

  bool source_has_selection() const { return source_has_selection_; }

  bool print_selection_only() const { return print_selection_only_; }

  int pages_per_sheet() const { return pages_per_sheet_; }

  const gfx::Rect& printable_area() const { return printable_area_; }

  const gfx::Size& page_size() const { return page_size_; }

  PrintPreviewHandler* handler() const { return handler_; }

  // Returns true if |page_number| is the last page in |pages_to_render_|.
  // |page_number| is a 0-based number.
  bool LastPageComposited(uint32_t page_number) const;

  // Get the 0-based index of the |page_number| in |pages_to_render_|.
  // Same as above, |page_number| is a 0-based number.
  uint32_t GetPageToNupConvertIndex(uint32_t page_number) const;

  std::vector<base::ReadOnlySharedMemoryRegion> TakePagesForNupConvert();

  // Save pdf pages temporarily before ready to do N-up conversion.
  void AddPdfPageForNupConversion(base::ReadOnlySharedMemoryRegion pdf_page);

  // Set initial settings for PrintPreviewUI.
  static void SetInitialParams(content::WebContents* print_preview_dialog,
                               const mojom::RequestPrintPreviewParams& params);

  // Determines whether to cancel a print preview request based on the request
  // id.
  // Can be called from any thread.
  static bool ShouldCancelRequest(const absl::optional<int32_t>& preview_ui_id,
                                  int request_id);

  // Returns an id to uniquely identify this PrintPreviewUI.
  absl::optional<int32_t> GetIDForPrintPreviewUI() const;

  // Notifies the Web UI of a print preview request with |request_id|.
  virtual void OnPrintPreviewRequest(int request_id);

  // Notifies the Web UI that the 0-based page |page_number| rendering is being
  // processed and an OnPendingPreviewPage() call is imminent. Returns whether
  // |page_number| is the expected page.
  bool OnPendingPreviewPage(uint32_t page_number);

  // Notifies the Web UI that the print preview failed to render for the request
  // with id = |request_id|.
  void OnPrintPreviewFailed(int request_id);

  // Notified the Web UI that this print preview dialog's RenderProcess has been
  // closed, which may occur for several reasons, e.g. tab closure or crash.
  void OnPrintPreviewDialogClosed();

  // Notifies the Web UI that initiator is closed, so we can disable all the
  // controls that need the initiator for generating the preview data.
  void OnInitiatorClosed();

  // Notifies the Web UI to cancel the pending preview request.
  virtual void OnCancelPendingPreviewRequest();

  // Hides the print preview dialog.
  virtual void OnHidePreviewDialog();

  // Closes the print preview dialog.
  virtual void OnClosePrintPreviewDialog();

  // Allows tests to wait until the print preview dialog is loaded.
  class TestDelegate {
   public:
    // Provides the total number of pages requested for the preview.
    virtual void DidGetPreviewPageCount(uint32_t page_count) = 0;

    // Notifies that a page was rendered for the preview.  This occurs after
    // any possible N-up processing, so each rendered page could represent
    // multiple pages that were counted in `DidGetPreviewPageCount()`.
    virtual void DidRenderPreviewPage(content::WebContents* preview_dialog) = 0;

   protected:
    virtual ~TestDelegate() = default;
  };

  static void SetDelegateForTesting(TestDelegate* delegate);

  // Allows for tests to set a file path to print a PDF to. This also initiates
  // the printing without having to click a button on the print preview dialog.
  void SetSelectedFileForTesting(const base::FilePath& path);

  // Passes |closure| to PrintPreviewHandler::SetPdfSavedClosureForTesting().
  void SetPdfSavedClosureForTesting(base::OnceClosure closure);

  // See SetPrintPreviewDataForIndex().
  void SetPrintPreviewDataForIndexForTest(
      int index,
      scoped_refptr<base::RefCountedMemory> data);

  // See ClearAllPreviewData().
  void ClearAllPreviewDataForTest();

  // Sets a new valid Print Preview UI ID for this instance. Called by
  // PrintPreviewHandler in OnJavascriptAllowed().
  void SetPreviewUIId();

  // Clears the UI ID. Called by PrintPreviewHandler in
  // OnJavascriptDisallowed().
  void ClearPreviewUIId();

 protected:
  // Alternate constructor for tests
  PrintPreviewUI(content::WebUI* web_ui,
                 std::unique_ptr<PrintPreviewHandler> handler);

 private:
  FRIEND_TEST_ALL_PREFIXES(PrintPreviewDialogControllerUnitTest,
                           TitleAfterReload);
  FRIEND_TEST_ALL_PREFIXES(PrintPreviewUIUnitTest,
                           PrintPreviewFailureCancelsPendingActions);

  // Sets the print preview |data|. |index| is zero-based, and can be
  // |COMPLETE_PREVIEW_DOCUMENT_INDEX| to set the entire preview document.
  void SetPrintPreviewDataForIndex(int index,
                                   scoped_refptr<base::RefCountedMemory> data);

  // Clear the existing print preview data.
  void ClearAllPreviewData();

  // Notifies the Web UI that the 0-based page |page_number| has been rendered.
  // |request_id| indicates which request resulted in this response.
  void NotifyUIPreviewPageReady(
      uint32_t page_number,
      int request_id,
      scoped_refptr<base::RefCountedMemory> data_bytes);

  // Notifies the Web UI renderer that preview data is available. |request_id|
  // indicates which request resulted in this response.
  void NotifyUIPreviewDocumentReady(
      int request_id,
      scoped_refptr<base::RefCountedMemory> data_bytes);

  // Callbacks for print compositor client.
  void OnPrepareForDocumentToPdfDone(int32_t request_id,
                                     mojom::PrintCompositor::Status status);
  void OnCompositePdfPageDone(uint32_t page_number,
                              int32_t document_cookie,
                              int32_t request_id,
                              mojom::PrintCompositor::Status status,
                              base::ReadOnlySharedMemoryRegion region);
  void OnNupPdfConvertDone(uint32_t page_number,
                           int32_t request_id,
                           mojom::PdfNupConverter::Status status,
                           base::ReadOnlySharedMemoryRegion region);
  void OnNupPdfDocumentConvertDone(int32_t request_id,
                                   mojom::PdfNupConverter::Status status,
                                   base::ReadOnlySharedMemoryRegion region);
  void OnCompositeToPdfDone(int document_cookie,
                            int32_t request_id,
                            mojom::PrintCompositor::Status status,
                            base::ReadOnlySharedMemoryRegion region);

  WEB_UI_CONTROLLER_TYPE_DECL();

  base::TimeTicks initial_preview_start_time_;

  // The unique ID for this class instance. Stored here to avoid calling
  // GetIDForPrintPreviewUI() everywhere.
  absl::optional<int32_t> id_;

#if BUILDFLAG(ENABLE_OOP_PRINTING)
  // This UI's client ID with the print backend service manager.
  uint32_t service_manager_client_id_;
#endif

  // Weak pointer to the WebUI handler.
  const raw_ptr<PrintPreviewHandler> handler_;

#if BUILDFLAG(IS_CHROMEOS_ASH)
  // Indicates whether the source document is from ARC.
  bool source_is_arc_ = false;
#endif

  // Indicates whether the source document can be modified.
  bool source_is_modifiable_ = true;

  // Indicates whether the source document has selection.
  bool source_has_selection_ = false;

  // Indicates whether only the selection should be printed.
  bool print_selection_only_ = false;

  // Keeps track of whether OnClosePrintPreviewDialog() has been called or not.
  bool dialog_closed_ = false;

  // Store the initiator title, used for populating the print preview dialog
  // title.
  std::u16string initiator_title_;

  // The list of 0-based page numbers that will be rendered.
  std::vector<uint32_t> pages_to_render_;

  // The list of pages to be converted.
  std::vector<base::ReadOnlySharedMemoryRegion> pages_for_nup_convert_;

  // Index into |pages_to_render_| for the page number to expect.
  size_t pages_to_render_index_ = 0;

  // number of pages per sheet and should be greater or equal to 1.
  int pages_per_sheet_ = 1;

  // Physical size of the page, including non-printable margins.
  gfx::Size page_size_;

  // The printable area of the printed document pages.
  gfx::Rect printable_area_;

  mojo::AssociatedReceiver<mojom::PrintPreviewUI> receiver_{this};

  base::WeakPtrFactory<PrintPreviewUI> weak_ptr_factory_{this};
};

}  // namespace printing

#endif  // CHROME_BROWSER_UI_WEBUI_PRINT_PREVIEW_PRINT_PREVIEW_UI_H_
