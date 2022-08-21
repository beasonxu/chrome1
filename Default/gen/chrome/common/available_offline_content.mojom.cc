// chrome/common/available_offline_content.mojom.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunused-private-field"
#endif

#include "chrome/common/available_offline_content.mojom.h"

#include <math.h>
#include <stdint.h>
#include <utility>

#include "base/debug/alias.h"
#include "base/hash/md5_constexpr.h"
#include "base/run_loop.h"
#include "base/strings/string_number_conversions.h"
#include "base/trace_event/trace_event.h"
#include "base/trace_event/typed_macros.h"
#include "mojo/public/cpp/bindings/lib/generated_code_util.h"
#include "mojo/public/cpp/bindings/lib/message_internal.h"
#include "mojo/public/cpp/bindings/lib/send_message_helper.h"
#include "mojo/public/cpp/bindings/lib/proxy_to_responder.h"
#include "mojo/public/cpp/bindings/lib/serialization_util.h"
#include "mojo/public/cpp/bindings/lib/unserialized_message_context.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/mojo_buildflags.h"
#include "mojo/public/interfaces/bindings/interface_control_messages.mojom.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "chrome/common/available_offline_content.mojom-params-data.h"
#include "chrome/common/available_offline_content.mojom-shared-message-ids.h"

#include "chrome/common/available_offline_content.mojom-import-headers.h"
#include "chrome/common/available_offline_content.mojom-test-utils.h"


#ifndef CHROME_COMMON_AVAILABLE_OFFLINE_CONTENT_MOJOM_JUMBO_H_
#define CHROME_COMMON_AVAILABLE_OFFLINE_CONTENT_MOJOM_JUMBO_H_
#endif



namespace chrome {
namespace mojom {
AvailableOfflineContent::AvailableOfflineContent()
    : id(),
      name_space(),
      title(),
      snippet(),
      date_modified(),
      attribution(),
      thumbnail_data_uri(),
      favicon_data_uri(),
      content_type() {}

AvailableOfflineContent::AvailableOfflineContent(
    const std::string& id_in,
    const std::string& name_space_in,
    const std::string& title_in,
    const std::string& snippet_in,
    const std::string& date_modified_in,
    const std::string& attribution_in,
    const ::GURL& thumbnail_data_uri_in,
    const ::GURL& favicon_data_uri_in,
    AvailableContentType content_type_in)
    : id(std::move(id_in)),
      name_space(std::move(name_space_in)),
      title(std::move(title_in)),
      snippet(std::move(snippet_in)),
      date_modified(std::move(date_modified_in)),
      attribution(std::move(attribution_in)),
      thumbnail_data_uri(std::move(thumbnail_data_uri_in)),
      favicon_data_uri(std::move(favicon_data_uri_in)),
      content_type(std::move(content_type_in)) {}

AvailableOfflineContent::~AvailableOfflineContent() = default;

void AvailableOfflineContent::WriteIntoTrace(
    perfetto::TracedValue traced_context) const {
  [[maybe_unused]] auto dict = std::move(traced_context).WriteDictionary();
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "id"), this->id,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "name_space"), this->name_space,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "title"), this->title,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "snippet"), this->snippet,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "date_modified"), this->date_modified,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "attribution"), this->attribution,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const std::string&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "thumbnail_data_uri"), this->thumbnail_data_uri,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::GURL&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "favicon_data_uri"), this->favicon_data_uri,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type const ::GURL&>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
  perfetto::WriteIntoTracedValueWithFallback(
    dict.AddItem(
      "content_type"), this->content_type,
#if BUILDFLAG(MOJO_TRACE_ENABLED)
      "<value of type AvailableContentType>"
#else
      "<value>"
#endif  // BUILDFLAG(MOJO_TRACE_ENABLED)
    );
}

bool AvailableOfflineContent::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  return Data_::Validate(data, validation_context);
}
const char AvailableOfflineContentProvider::Name_[] = "chrome.mojom.AvailableOfflineContentProvider";

AvailableOfflineContentProvider::IPCStableHashFunction AvailableOfflineContentProvider::MessageToMethodInfo_(mojo::Message& message) {
#if !BUILDFLAG(IS_FUCHSIA)
  switch (message.name()) {
    case internal::kAvailableOfflineContentProvider_List_Name: {
      return &AvailableOfflineContentProvider::List_Sym::IPCStableHash;
    }
    case internal::kAvailableOfflineContentProvider_LaunchItem_Name: {
      return &AvailableOfflineContentProvider::LaunchItem_Sym::IPCStableHash;
    }
    case internal::kAvailableOfflineContentProvider_LaunchDownloadsPage_Name: {
      return &AvailableOfflineContentProvider::LaunchDownloadsPage_Sym::IPCStableHash;
    }
    case internal::kAvailableOfflineContentProvider_ListVisibilityChanged_Name: {
      return &AvailableOfflineContentProvider::ListVisibilityChanged_Sym::IPCStableHash;
    }
  }
#endif  // !BUILDFLAG(IS_FUCHSIA)
  return nullptr;
}


const char* AvailableOfflineContentProvider::MessageToMethodName_(mojo::Message& message) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (!is_response) {
    switch (message.name()) {
      case internal::kAvailableOfflineContentProvider_List_Name:
            return "Receive chrome::mojom::AvailableOfflineContentProvider::List";
      case internal::kAvailableOfflineContentProvider_LaunchItem_Name:
            return "Receive chrome::mojom::AvailableOfflineContentProvider::LaunchItem";
      case internal::kAvailableOfflineContentProvider_LaunchDownloadsPage_Name:
            return "Receive chrome::mojom::AvailableOfflineContentProvider::LaunchDownloadsPage";
      case internal::kAvailableOfflineContentProvider_ListVisibilityChanged_Name:
            return "Receive chrome::mojom::AvailableOfflineContentProvider::ListVisibilityChanged";
    }
  } else {
    switch (message.name()) {
      case internal::kAvailableOfflineContentProvider_List_Name:
            return "Receive reply chrome::mojom::AvailableOfflineContentProvider::List";
      case internal::kAvailableOfflineContentProvider_LaunchItem_Name:
            return "Receive reply chrome::mojom::AvailableOfflineContentProvider::LaunchItem";
      case internal::kAvailableOfflineContentProvider_LaunchDownloadsPage_Name:
            return "Receive reply chrome::mojom::AvailableOfflineContentProvider::LaunchDownloadsPage";
      case internal::kAvailableOfflineContentProvider_ListVisibilityChanged_Name:
            return "Receive reply chrome::mojom::AvailableOfflineContentProvider::ListVisibilityChanged";
    }
  }
  return "Receive unknown mojo message";
#else
  bool is_response = message.has_flag(mojo::Message::kFlagIsResponse);
  if (is_response) {
    return "Receive mojo reply";
  } else {
    return "Receive mojo message";
  }
#endif // BUILDFLAG(MOJO_TRACE_ENABLED)
}

#if !BUILDFLAG(IS_FUCHSIA)
uint32_t AvailableOfflineContentProvider::List_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)chrome::mojom::AvailableOfflineContentProvider::List");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t AvailableOfflineContentProvider::LaunchItem_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)chrome::mojom::AvailableOfflineContentProvider::LaunchItem");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t AvailableOfflineContentProvider::LaunchDownloadsPage_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)chrome::mojom::AvailableOfflineContentProvider::LaunchDownloadsPage");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
uint32_t AvailableOfflineContentProvider::ListVisibilityChanged_Sym::IPCStableHash() {
  // This method's address is used for indetifiying the mojo method name after
  // symbolization. So each IPCStableHash should have a unique address.
  // We cannot use NO_CODE_FOLDING() here - it relies on the uniqueness of
  // __LINE__ value, which is not unique accross different mojo modules.
  // The code below is very similar to NO_CODE_FOLDING, but it uses a unique
  // hash instead of __LINE__.
  constexpr uint32_t kHash = base::MD5Hash32Constexpr(
          "(Impl)chrome::mojom::AvailableOfflineContentProvider::ListVisibilityChanged");
  const uint32_t hash = kHash;
  base::debug::Alias(&hash);
  return hash;
}
# endif // !BUILDFLAG(IS_FUCHSIA)

class AvailableOfflineContentProvider_List_ForwardToCallback
    : public mojo::MessageReceiver {
 public:
  AvailableOfflineContentProvider_List_ForwardToCallback(
      AvailableOfflineContentProvider::ListCallback callback
      ) : callback_(std::move(callback)) {
  }

  AvailableOfflineContentProvider_List_ForwardToCallback(const AvailableOfflineContentProvider_List_ForwardToCallback&) = delete;
  AvailableOfflineContentProvider_List_ForwardToCallback& operator=(const AvailableOfflineContentProvider_List_ForwardToCallback&) = delete;

  bool Accept(mojo::Message* message) override;
 private:
  AvailableOfflineContentProvider::ListCallback callback_;
};

AvailableOfflineContentProviderProxy::AvailableOfflineContentProviderProxy(mojo::MessageReceiverWithResponder* receiver)
    : receiver_(receiver) {
}

void AvailableOfflineContentProviderProxy::List(
    ListCallback callback) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT0("mojom", "Send chrome::mojom::AvailableOfflineContentProvider::List");
#endif
  const bool kExpectsResponse = true;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kAvailableOfflineContentProvider_List_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::chrome::mojom::internal::AvailableOfflineContentProvider_List_Params_Data> params(
          message);
  params.Allocate();

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AvailableOfflineContentProvider::Name_);
  message.set_method_name("List");
#endif
  std::unique_ptr<mojo::MessageReceiver> responder(
      new AvailableOfflineContentProvider_List_ForwardToCallback(
          std::move(callback)));
  ::mojo::internal::SendMojoMessage(*receiver_, message, std::move(responder));
}

void AvailableOfflineContentProviderProxy::LaunchItem(
    const std::string& in_item_id, const std::string& in_name_space) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send chrome::mojom::AvailableOfflineContentProvider::LaunchItem", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("item_id"), in_item_id,
                        "<value of type const std::string&>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("name_space"), in_name_space,
                        "<value of type const std::string&>");
   });
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kAvailableOfflineContentProvider_LaunchItem_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::chrome::mojom::internal::AvailableOfflineContentProvider_LaunchItem_Params_Data> params(
          message);
  params.Allocate();
  mojo::internal::MessageFragment<
      typename decltype(params->item_id)::BaseType> item_id_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_item_id, item_id_fragment);
  params->item_id.Set(
      item_id_fragment.is_null() ? nullptr : item_id_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->item_id.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null item_id in AvailableOfflineContentProvider.LaunchItem request");
  mojo::internal::MessageFragment<
      typename decltype(params->name_space)::BaseType> name_space_fragment(
          params.message());
  mojo::internal::Serialize<mojo::StringDataView>(
      in_name_space, name_space_fragment);
  params->name_space.Set(
      name_space_fragment.is_null() ? nullptr : name_space_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->name_space.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null name_space in AvailableOfflineContentProvider.LaunchItem request");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AvailableOfflineContentProvider::Name_);
  message.set_method_name("LaunchItem");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void AvailableOfflineContentProviderProxy::LaunchDownloadsPage(
    bool in_open_prefetched_articles_tab) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send chrome::mojom::AvailableOfflineContentProvider::LaunchDownloadsPage", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("open_prefetched_articles_tab"), in_open_prefetched_articles_tab,
                        "<value of type bool>");
   });
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kAvailableOfflineContentProvider_LaunchDownloadsPage_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::chrome::mojom::internal::AvailableOfflineContentProvider_LaunchDownloadsPage_Params_Data> params(
          message);
  params.Allocate();
  params->open_prefetched_articles_tab = in_open_prefetched_articles_tab;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AvailableOfflineContentProvider::Name_);
  message.set_method_name("LaunchDownloadsPage");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}

void AvailableOfflineContentProviderProxy::ListVisibilityChanged(
    bool in_is_visible) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send chrome::mojom::AvailableOfflineContentProvider::ListVisibilityChanged", "input_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("is_visible"), in_is_visible,
                        "<value of type bool>");
   });
#endif
  const bool kExpectsResponse = false;
  const bool kIsSync = false;
  const bool kAllowInterrupt = true;
  
  const uint32_t kFlags =
      ((kExpectsResponse) ? mojo::Message::kFlagExpectsResponse : 0) |
      ((kIsSync) ? mojo::Message::kFlagIsSync : 0) |
      ((kAllowInterrupt) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kAvailableOfflineContentProvider_ListVisibilityChanged_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::chrome::mojom::internal::AvailableOfflineContentProvider_ListVisibilityChanged_Params_Data> params(
          message);
  params.Allocate();
  params->is_visible = in_is_visible;

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AvailableOfflineContentProvider::Name_);
  message.set_method_name("ListVisibilityChanged");
#endif
  // This return value may be ignored as false implies the Connector has
  // encountered an error, which will be visible through other means.
  ::mojo::internal::SendMojoMessage(*receiver_, message);
}
class AvailableOfflineContentProvider_List_ProxyToResponder : public ::mojo::internal::ProxyToResponder {
 public:
  static AvailableOfflineContentProvider::ListCallback CreateCallback(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
    std::unique_ptr<AvailableOfflineContentProvider_List_ProxyToResponder> proxy(
        new AvailableOfflineContentProvider_List_ProxyToResponder(
            message, std::move(responder)));
    return base::BindOnce(&AvailableOfflineContentProvider_List_ProxyToResponder::Run,
                          std::move(proxy));
  }

  ~AvailableOfflineContentProvider_List_ProxyToResponder() {
#if DCHECK_IS_ON()
    if (responder_) {
      // If we're being destroyed without being run, we want to ensure the
      // binding endpoint has been closed. This checks for that asynchronously.
      // We pass a bound generated callback to handle the response so that any
      // resulting DCHECK stack will have useful interface type information.
      responder_->IsConnectedAsync(base::BindOnce(&OnIsConnectedComplete));
    }
#endif
  }

 private:
  AvailableOfflineContentProvider_List_ProxyToResponder(
      ::mojo::Message& message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder)
      : ::mojo::internal::ProxyToResponder(message, std::move(responder)) {
  }

#if DCHECK_IS_ON()
  static void OnIsConnectedComplete(bool connected) {
    DCHECK(!connected)
        << "AvailableOfflineContentProvider::ListCallback was destroyed without "
        << "first either being run or its corresponding binding being closed. "
        << "It is an error to drop response callbacks which still correspond "
        << "to an open interface pipe.";
  }
#endif

  void Run(
      bool in_list_visible_by_prefs, std::vector<AvailableOfflineContentPtr> in_out);
};

bool AvailableOfflineContentProvider_List_ForwardToCallback::Accept(
    mojo::Message* message) {

  DCHECK(message->is_serialized());
  internal::AvailableOfflineContentProvider_List_ResponseParams_Data* params =
      reinterpret_cast<
          internal::AvailableOfflineContentProvider_List_ResponseParams_Data*>(
              message->mutable_payload());
  
  bool success = true;
  bool p_list_visible_by_prefs{};
  std::vector<AvailableOfflineContentPtr> p_out{};
  AvailableOfflineContentProvider_List_ResponseParamsDataView input_data_view(params, message);
  
  if (success)
    p_list_visible_by_prefs = input_data_view.list_visible_by_prefs();
  if (success && !input_data_view.ReadOut(&p_out))
    success = false;
  if (!success) {
    ReportValidationErrorForMessage(
        message,
        mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
        AvailableOfflineContentProvider::Name_, 0, true);
    return false;
  }
  if (!callback_.is_null())
    std::move(callback_).Run(
std::move(p_list_visible_by_prefs), 
std::move(p_out));
  return true;
}

void AvailableOfflineContentProvider_List_ProxyToResponder::Run(
    bool in_list_visible_by_prefs, std::vector<AvailableOfflineContentPtr> in_out) {
#if BUILDFLAG(MOJO_TRACE_ENABLED)
  TRACE_EVENT1(
    "mojom", "Send reply chrome::mojom::AvailableOfflineContentProvider::List", "async_response_parameters",
    [&](perfetto::TracedValue context){
      auto dict = std::move(context).WriteDictionary();
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("list_visible_by_prefs"), in_list_visible_by_prefs,
                        "<value of type bool>");
      perfetto::WriteIntoTracedValueWithFallback(
           dict.AddItem("out"), in_out,
                        "<value of type std::vector<AvailableOfflineContentPtr>>");
   });
#endif
  
  const uint32_t kFlags = mojo::Message::kFlagIsResponse |
      ((is_sync_) ? mojo::Message::kFlagIsSync : 0) |
      ((true) ? 0 : mojo::Message::kFlagNoInterrupt);
  
  mojo::Message message(
      internal::kAvailableOfflineContentProvider_List_Name, kFlags, 0, 0, nullptr);
  mojo::internal::MessageFragment<
      ::chrome::mojom::internal::AvailableOfflineContentProvider_List_ResponseParams_Data> params(
          message);
  params.Allocate();
  params->list_visible_by_prefs = in_list_visible_by_prefs;
  mojo::internal::MessageFragment<
      typename decltype(params->out)::BaseType>
      out_fragment(params.message());
  const mojo::internal::ContainerValidateParams out_validate_params(
      0, false, nullptr);
  mojo::internal::Serialize<mojo::ArrayDataView<::chrome::mojom::AvailableOfflineContentDataView>>(
      in_out, out_fragment, &out_validate_params);
  params->out.Set(
      out_fragment.is_null() ? nullptr : out_fragment.data());
  MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
      params->out.is_null(),
      mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
      "null out in ");

#if defined(ENABLE_IPC_FUZZER)
  message.set_interface_name(AvailableOfflineContentProvider::Name_);
  message.set_method_name("List");
#endif

  message.set_request_id(request_id_);
  message.set_trace_nonce(trace_nonce_);
  ::mojo::internal::SendMojoMessage(*responder_, message);
  // SendMojoMessage() fails silently if the responder connection is closed,
  // or if the message is malformed.
  //
  // TODO(darin): If Accept() returns false due to a malformed message, that
  // may be good reason to close the connection. However, we don't have a
  // way to do that from here. We should add a way.
  responder_ = nullptr;
}

// static
bool AvailableOfflineContentProviderStubDispatch::Accept(
    AvailableOfflineContentProvider* impl,
    mojo::Message* message) {
  switch (message->header()->name) {
    case internal::kAvailableOfflineContentProvider_List_Name: {
      break;
    }
    case internal::kAvailableOfflineContentProvider_LaunchItem_Name: {

      DCHECK(message->is_serialized());
      internal::AvailableOfflineContentProvider_LaunchItem_Params_Data* params =
          reinterpret_cast<internal::AvailableOfflineContentProvider_LaunchItem_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      std::string p_item_id{};
      std::string p_name_space{};
      AvailableOfflineContentProvider_LaunchItem_ParamsDataView input_data_view(params, message);
      
      if (success && !input_data_view.ReadItemId(&p_item_id))
        success = false;
      if (success && !input_data_view.ReadNameSpace(&p_name_space))
        success = false;
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AvailableOfflineContentProvider::Name_, 1, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->LaunchItem(
std::move(p_item_id), 
std::move(p_name_space));
      return true;
    }
    case internal::kAvailableOfflineContentProvider_LaunchDownloadsPage_Name: {

      DCHECK(message->is_serialized());
      internal::AvailableOfflineContentProvider_LaunchDownloadsPage_Params_Data* params =
          reinterpret_cast<internal::AvailableOfflineContentProvider_LaunchDownloadsPage_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      bool p_open_prefetched_articles_tab{};
      AvailableOfflineContentProvider_LaunchDownloadsPage_ParamsDataView input_data_view(params, message);
      
      if (success)
        p_open_prefetched_articles_tab = input_data_view.open_prefetched_articles_tab();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AvailableOfflineContentProvider::Name_, 2, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->LaunchDownloadsPage(
std::move(p_open_prefetched_articles_tab));
      return true;
    }
    case internal::kAvailableOfflineContentProvider_ListVisibilityChanged_Name: {

      DCHECK(message->is_serialized());
      internal::AvailableOfflineContentProvider_ListVisibilityChanged_Params_Data* params =
          reinterpret_cast<internal::AvailableOfflineContentProvider_ListVisibilityChanged_Params_Data*>(
              message->mutable_payload());
      
      bool success = true;
      bool p_is_visible{};
      AvailableOfflineContentProvider_ListVisibilityChanged_ParamsDataView input_data_view(params, message);
      
      if (success)
        p_is_visible = input_data_view.is_visible();
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AvailableOfflineContentProvider::Name_, 3, false);
        return false;
      }
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->ListVisibilityChanged(
std::move(p_is_visible));
      return true;
    }
  }
  return false;
}

// static
bool AvailableOfflineContentProviderStubDispatch::AcceptWithResponder(
    AvailableOfflineContentProvider* impl,
    mojo::Message* message,
    std::unique_ptr<mojo::MessageReceiverWithStatus> responder) {
  [[maybe_unused]] const bool message_is_sync =
      message->has_flag(mojo::Message::kFlagIsSync);
  [[maybe_unused]] const uint64_t request_id = message->request_id();
  switch (message->header()->name) {
    case internal::kAvailableOfflineContentProvider_List_Name: {

      internal::AvailableOfflineContentProvider_List_Params_Data* params =
          reinterpret_cast<
              internal::AvailableOfflineContentProvider_List_Params_Data*>(
                  message->mutable_payload());
      
      bool success = true;
      AvailableOfflineContentProvider_List_ParamsDataView input_data_view(params, message);
      
      if (!success) {
        ReportValidationErrorForMessage(
            message,
            mojo::internal::VALIDATION_ERROR_DESERIALIZATION_FAILED,
            AvailableOfflineContentProvider::Name_, 0, false);
        return false;
      }
      AvailableOfflineContentProvider::ListCallback callback =
          AvailableOfflineContentProvider_List_ProxyToResponder::CreateCallback(
              *message, std::move(responder));
      // A null |impl| means no implementation was bound.
      DCHECK(impl);
      impl->List(std::move(callback));
      return true;
    }
    case internal::kAvailableOfflineContentProvider_LaunchItem_Name: {
      break;
    }
    case internal::kAvailableOfflineContentProvider_LaunchDownloadsPage_Name: {
      break;
    }
    case internal::kAvailableOfflineContentProvider_ListVisibilityChanged_Name: {
      break;
    }
  }
  return false;
}


static const mojo::internal::GenericValidationInfo kAvailableOfflineContentProviderValidationInfo[] = {
    {&internal::AvailableOfflineContentProvider_List_Params_Data::Validate,
     &internal::AvailableOfflineContentProvider_List_ResponseParams_Data::Validate},
    {&internal::AvailableOfflineContentProvider_LaunchItem_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::AvailableOfflineContentProvider_LaunchDownloadsPage_Params_Data::Validate,
     nullptr /* no response */},
    {&internal::AvailableOfflineContentProvider_ListVisibilityChanged_Params_Data::Validate,
     nullptr /* no response */},
};

bool AvailableOfflineContentProviderRequestValidator::Accept(mojo::Message* message) {
  const char* name = ::chrome::mojom::AvailableOfflineContentProvider::Name_;
  return mojo::internal::ValidateRequestGenericPacked(message, name, kAvailableOfflineContentProviderValidationInfo);
}

bool AvailableOfflineContentProviderResponseValidator::Accept(mojo::Message* message) {
  const char* name = ::chrome::mojom::AvailableOfflineContentProvider::Name_;
  return mojo::internal::ValidateResponseGenericPacked(message, name, kAvailableOfflineContentProviderValidationInfo);
}


}  // namespace mojom
}  // namespace chrome


namespace mojo {


// static
bool StructTraits<::chrome::mojom::AvailableOfflineContent::DataView, ::chrome::mojom::AvailableOfflineContentPtr>::Read(
    ::chrome::mojom::AvailableOfflineContent::DataView input,
    ::chrome::mojom::AvailableOfflineContentPtr* output) {
  bool success = true;
  ::chrome::mojom::AvailableOfflineContentPtr result(::chrome::mojom::AvailableOfflineContent::New());
  
      if (success && !input.ReadId(&result->id))
        success = false;
      if (success && !input.ReadNameSpace(&result->name_space))
        success = false;
      if (success && !input.ReadTitle(&result->title))
        success = false;
      if (success && !input.ReadSnippet(&result->snippet))
        success = false;
      if (success && !input.ReadDateModified(&result->date_modified))
        success = false;
      if (success && !input.ReadAttribution(&result->attribution))
        success = false;
      if (success && !input.ReadThumbnailDataUri(&result->thumbnail_data_uri))
        success = false;
      if (success && !input.ReadFaviconDataUri(&result->favicon_data_uri))
        success = false;
      if (success && !input.ReadContentType(&result->content_type))
        success = false;
  *output = std::move(result);
  return success;
}

}  // namespace mojo


// Symbols declared in the -test-utils.h header are defined here instead of a
// separate .cc file to save compile time.


namespace chrome {
namespace mojom {


void AvailableOfflineContentProviderInterceptorForTesting::List(ListCallback callback) {
  GetForwardingInterface()->List(std::move(callback));
}
void AvailableOfflineContentProviderInterceptorForTesting::LaunchItem(const std::string& item_id, const std::string& name_space) {
  GetForwardingInterface()->LaunchItem(std::move(item_id), std::move(name_space));
}
void AvailableOfflineContentProviderInterceptorForTesting::LaunchDownloadsPage(bool open_prefetched_articles_tab) {
  GetForwardingInterface()->LaunchDownloadsPage(std::move(open_prefetched_articles_tab));
}
void AvailableOfflineContentProviderInterceptorForTesting::ListVisibilityChanged(bool is_visible) {
  GetForwardingInterface()->ListVisibilityChanged(std::move(is_visible));
}
AvailableOfflineContentProviderAsyncWaiter::AvailableOfflineContentProviderAsyncWaiter(
    AvailableOfflineContentProvider* proxy) : proxy_(proxy) {}

AvailableOfflineContentProviderAsyncWaiter::~AvailableOfflineContentProviderAsyncWaiter() = default;

void AvailableOfflineContentProviderAsyncWaiter::List(
    bool* out_list_visible_by_prefs, std::vector<AvailableOfflineContentPtr>* out_out) {
  base::RunLoop loop;
  proxy_->List(
      base::BindOnce(
          [](base::RunLoop* loop,
             bool* out_list_visible_by_prefs
,
             std::vector<AvailableOfflineContentPtr>* out_out
,
             bool list_visible_by_prefs,
             std::vector<AvailableOfflineContentPtr> out) {*out_list_visible_by_prefs = std::move(list_visible_by_prefs);*out_out = std::move(out);
            loop->Quit();
          },
          &loop,
          out_list_visible_by_prefs,
          out_out));
  loop.Run();
}





}  // namespace mojom
}  // namespace chrome


#if defined(__clang__)
#pragma clang diagnostic pop
#endif