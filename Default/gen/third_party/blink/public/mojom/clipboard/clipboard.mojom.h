// third_party/blink/public/mojom/clipboard/clipboard.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_H_
#define THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-shared.h"
#include "third_party/blink/public/mojom/clipboard/clipboard.mojom-forward.h"
#include "mojo/public/mojom/base/big_buffer.mojom.h"
#include "mojo/public/mojom/base/big_string.mojom.h"
#include "mojo/public/mojom/base/string16.mojom.h"
#include "skia/public/mojom/bitmap.mojom.h"
#include "third_party/blink/public/mojom/data_transfer/data_transfer.mojom.h"
#include "third_party/blink/public/mojom/tokens/tokens.mojom.h"
#include "url/mojom/url.mojom.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "ui/base/mojom/clipboard_blink_mojom_traits.h"
#include "third_party/blink/public/common/common_export.h"




namespace blink {
namespace mojom {

class ClipboardHostProxy;

template <typename ImplRefTraits>
class ClipboardHostStub;

class ClipboardHostRequestValidator;
class ClipboardHostResponseValidator;


class BLINK_COMMON_EXPORT ClipboardHost
    : public ClipboardHostInterfaceBase {
 public:
  using IPCStableHashFunction = uint32_t(*)();

  static const char Name_[];
  static IPCStableHashFunction MessageToMethodInfo_(mojo::Message& message);
  static const char* MessageToMethodName_(mojo::Message& message);
  static constexpr uint32_t Version_ = 0;
  static constexpr bool PassesAssociatedKinds_ = false;
  static constexpr bool HasSyncMethods_ = true;
  static constexpr bool HasUninterruptableMethods_ = false;

  using Base_ = ClipboardHostInterfaceBase;
  using Proxy_ = ClipboardHostProxy;

  template <typename ImplRefTraits>
  using Stub_ = ClipboardHostStub<ImplRefTraits>;

  using RequestValidator_ = ClipboardHostRequestValidator;
  using ResponseValidator_ = ClipboardHostResponseValidator;
  enum MethodMinVersions : uint32_t {
    kGetSequenceNumberMinVersion = 0,
    kIsFormatAvailableMinVersion = 0,
    kReadAvailableTypesMinVersion = 0,
    kReadTextMinVersion = 0,
    kReadHtmlMinVersion = 0,
    kReadSvgMinVersion = 0,
    kReadRtfMinVersion = 0,
    kReadPngMinVersion = 0,
    kReadFilesMinVersion = 0,
    kReadCustomDataMinVersion = 0,
    kReadAvailableCustomAndStandardFormatsMinVersion = 0,
    kReadUnsanitizedCustomFormatMinVersion = 0,
    kWriteTextMinVersion = 0,
    kWriteHtmlMinVersion = 0,
    kWriteSvgMinVersion = 0,
    kWriteSmartPasteMarkerMinVersion = 0,
    kWriteCustomDataMinVersion = 0,
    kWriteBookmarkMinVersion = 0,
    kWriteImageMinVersion = 0,
    kWriteUnsanitizedCustomFormatMinVersion = 0,
    kCommitWriteMinVersion = 0,
  };

// crbug.com/1340245 - this causes binary size bloat on Fuchsia, and we're OK
// with not having this data in traces there.
#if !BUILDFLAG(IS_FUCHSIA)
  struct GetSequenceNumber_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct IsFormatAvailable_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReadAvailableTypes_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReadText_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReadHtml_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReadSvg_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReadRtf_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReadPng_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReadFiles_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReadCustomData_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReadAvailableCustomAndStandardFormats_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct ReadUnsanitizedCustomFormat_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct WriteText_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct WriteHtml_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct WriteSvg_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct WriteSmartPasteMarker_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct WriteCustomData_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct WriteBookmark_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct WriteImage_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct WriteUnsanitizedCustomFormat_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
  struct CommitWrite_Sym {
    NOINLINE static uint32_t IPCStableHash();
  };
#endif // !BUILDFLAG(IS_FUCHSIA)
  
  static constexpr uint32_t kMaxFormatSize = 1024U;
  
  static constexpr uint32_t kMaxDataSize = 1073741824U;
  virtual ~ClipboardHost() = default;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool GetSequenceNumber(::ui::ClipboardBuffer buffer, ::blink::ClipboardSequenceNumberToken* out_result);

  using GetSequenceNumberCallback = base::OnceCallback<void(const ::blink::ClipboardSequenceNumberToken&)>;
  
  virtual void GetSequenceNumber(::ui::ClipboardBuffer buffer, GetSequenceNumberCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool IsFormatAvailable(ClipboardFormat format, ::ui::ClipboardBuffer buffer, bool* out_result);

  using IsFormatAvailableCallback = base::OnceCallback<void(bool)>;
  
  virtual void IsFormatAvailable(ClipboardFormat format, ::ui::ClipboardBuffer buffer, IsFormatAvailableCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadAvailableTypes(::ui::ClipboardBuffer buffer, std::vector<::std::u16string>* out_types);

  using ReadAvailableTypesCallback = base::OnceCallback<void(const std::vector<::std::u16string>&)>;
  
  virtual void ReadAvailableTypes(::ui::ClipboardBuffer buffer, ReadAvailableTypesCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadText(::ui::ClipboardBuffer buffer, ::std::u16string* out_result);

  using ReadTextCallback = base::OnceCallback<void(const ::std::u16string&)>;
  
  virtual void ReadText(::ui::ClipboardBuffer buffer, ReadTextCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadHtml(::ui::ClipboardBuffer buffer, ::std::u16string* out_markup, ::GURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end);

  using ReadHtmlCallback = base::OnceCallback<void(const ::std::u16string&, const ::GURL&, uint32_t, uint32_t)>;
  
  virtual void ReadHtml(::ui::ClipboardBuffer buffer, ReadHtmlCallback callback) = 0;


  using ReadSvgCallback = base::OnceCallback<void(const ::std::u16string&)>;
  
  virtual void ReadSvg(::ui::ClipboardBuffer buffer, ReadSvgCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadRtf(::ui::ClipboardBuffer buffer, ::std::string* out_result);

  using ReadRtfCallback = base::OnceCallback<void(const ::std::string&)>;
  
  virtual void ReadRtf(::ui::ClipboardBuffer buffer, ReadRtfCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadPng(::ui::ClipboardBuffer buffer, ::mojo_base::BigBuffer* out_png);

  using ReadPngCallback = base::OnceCallback<void(::mojo_base::BigBuffer)>;
  
  virtual void ReadPng(::ui::ClipboardBuffer buffer, ReadPngCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadFiles(::ui::ClipboardBuffer buffer, ClipboardFilesPtr* out_result);

  using ReadFilesCallback = base::OnceCallback<void(ClipboardFilesPtr)>;
  
  virtual void ReadFiles(::ui::ClipboardBuffer buffer, ReadFilesCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadCustomData(::ui::ClipboardBuffer buffer, const ::std::u16string& type, ::std::u16string* out_result);

  using ReadCustomDataCallback = base::OnceCallback<void(const ::std::u16string&)>;
  
  virtual void ReadCustomData(::ui::ClipboardBuffer buffer, const ::std::u16string& type, ReadCustomDataCallback callback) = 0;

  // Sync method. This signature is used by the client side; the service side
  // should implement the signature with callback below.
  
  virtual bool ReadAvailableCustomAndStandardFormats(std::vector<::std::u16string>* out_format_types);

  using ReadAvailableCustomAndStandardFormatsCallback = base::OnceCallback<void(const std::vector<::std::u16string>&)>;
  
  virtual void ReadAvailableCustomAndStandardFormats(ReadAvailableCustomAndStandardFormatsCallback callback) = 0;


  using ReadUnsanitizedCustomFormatCallback = base::OnceCallback<void(::mojo_base::BigBuffer)>;
  
  virtual void ReadUnsanitizedCustomFormat(const ::std::u16string& format, ReadUnsanitizedCustomFormatCallback callback) = 0;

  
  virtual void WriteText(const ::std::u16string& text) = 0;

  
  virtual void WriteHtml(const ::std::u16string& markup, const ::GURL& url) = 0;

  
  virtual void WriteSvg(const ::std::u16string& markup) = 0;

  
  virtual void WriteSmartPasteMarker() = 0;

  
  virtual void WriteCustomData(const base::flat_map<::std::u16string, ::std::u16string>& data) = 0;

  
  virtual void WriteBookmark(const std::string& url, const ::std::u16string& title) = 0;

  
  virtual void WriteImage(const ::SkBitmap& image) = 0;

  
  virtual void WriteUnsanitizedCustomFormat(const ::std::u16string& format, ::mojo_base::BigBuffer data) = 0;

  
  virtual void CommitWrite() = 0;
};



class BLINK_COMMON_EXPORT ClipboardHostProxy
    : public ClipboardHost {
 public:
  using InterfaceType = ClipboardHost;

  explicit ClipboardHostProxy(mojo::MessageReceiverWithResponder* receiver);
  
  bool GetSequenceNumber(::ui::ClipboardBuffer buffer, ::blink::ClipboardSequenceNumberToken* out_result) final;
  
  void GetSequenceNumber(::ui::ClipboardBuffer buffer, GetSequenceNumberCallback callback) final;
  
  bool IsFormatAvailable(ClipboardFormat format, ::ui::ClipboardBuffer buffer, bool* out_result) final;
  
  void IsFormatAvailable(ClipboardFormat format, ::ui::ClipboardBuffer buffer, IsFormatAvailableCallback callback) final;
  
  bool ReadAvailableTypes(::ui::ClipboardBuffer buffer, std::vector<::std::u16string>* out_types) final;
  
  void ReadAvailableTypes(::ui::ClipboardBuffer buffer, ReadAvailableTypesCallback callback) final;
  
  bool ReadText(::ui::ClipboardBuffer buffer, ::std::u16string* out_result) final;
  
  void ReadText(::ui::ClipboardBuffer buffer, ReadTextCallback callback) final;
  
  bool ReadHtml(::ui::ClipboardBuffer buffer, ::std::u16string* out_markup, ::GURL* out_url, uint32_t* out_fragment_start, uint32_t* out_fragment_end) final;
  
  void ReadHtml(::ui::ClipboardBuffer buffer, ReadHtmlCallback callback) final;
  
  void ReadSvg(::ui::ClipboardBuffer buffer, ReadSvgCallback callback) final;
  
  bool ReadRtf(::ui::ClipboardBuffer buffer, ::std::string* out_result) final;
  
  void ReadRtf(::ui::ClipboardBuffer buffer, ReadRtfCallback callback) final;
  
  bool ReadPng(::ui::ClipboardBuffer buffer, ::mojo_base::BigBuffer* out_png) final;
  
  void ReadPng(::ui::ClipboardBuffer buffer, ReadPngCallback callback) final;
  
  bool ReadFiles(::ui::ClipboardBuffer buffer, ClipboardFilesPtr* out_result) final;
  
  void ReadFiles(::ui::ClipboardBuffer buffer, ReadFilesCallback callback) final;
  
  bool ReadCustomData(::ui::ClipboardBuffer buffer, const ::std::u16string& type, ::std::u16string* out_result) final;
  
  void ReadCustomData(::ui::ClipboardBuffer buffer, const ::std::u16string& type, ReadCustomDataCallback callback) final;
  
  bool ReadAvailableCustomAndStandardFormats(std::vector<::std::u16string>* out_format_types) final;
  
  void ReadAvailableCustomAndStandardFormats(ReadAvailableCustomAndStandardFormatsCallback callback) final;
  
  void ReadUnsanitizedCustomFormat(const ::std::u16string& format, ReadUnsanitizedCustomFormatCallback callback) final;
  
  void WriteText(const ::std::u16string& text) final;
  
  void WriteHtml(const ::std::u16string& markup, const ::GURL& url) final;
  
  void WriteSvg(const ::std::u16string& markup) final;
  
  void WriteSmartPasteMarker() final;
  
  void WriteCustomData(const base::flat_map<::std::u16string, ::std::u16string>& data) final;
  
  void WriteBookmark(const std::string& url, const ::std::u16string& title) final;
  
  void WriteImage(const ::SkBitmap& image) final;
  
  void WriteUnsanitizedCustomFormat(const ::std::u16string& format, ::mojo_base::BigBuffer data) final;
  
  void CommitWrite() final;

 private:
  mojo::MessageReceiverWithResponder* receiver_;
};
class BLINK_COMMON_EXPORT ClipboardHostStubDispatch {
 public:
  static bool Accept(ClipboardHost* impl, mojo::Message* message);
  static bool AcceptWithResponder(
      ClipboardHost* impl,
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder);
};

template <typename ImplRefTraits =
              mojo::RawPtrImplRefTraits<ClipboardHost>>
class ClipboardHostStub
    : public mojo::MessageReceiverWithResponderStatus {
 public:
  using ImplPointerType = typename ImplRefTraits::PointerType;

  ClipboardHostStub() = default;
  ~ClipboardHostStub() override = default;

  void set_sink(ImplPointerType sink) { sink_ = std::move(sink); }
  ImplPointerType& sink() { return sink_; }

  bool Accept(mojo::Message* message) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClipboardHostStubDispatch::Accept(
        ImplRefTraits::GetRawPointer(&sink_), message);
  }

  bool AcceptWithResponder(
      mojo::Message* message,
      std::unique_ptr<mojo::MessageReceiverWithStatus> responder) override {
    if (ImplRefTraits::IsNull(sink_))
      return false;
    return ClipboardHostStubDispatch::AcceptWithResponder(
        ImplRefTraits::GetRawPointer(&sink_), message, std::move(responder));
  }

 private:
  ImplPointerType sink_;
};
class BLINK_COMMON_EXPORT ClipboardHostRequestValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};
class BLINK_COMMON_EXPORT ClipboardHostResponseValidator : public mojo::MessageReceiver {
 public:
  bool Accept(mojo::Message* message) override;
};








class BLINK_COMMON_EXPORT ClipboardFiles {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ClipboardFiles, T>::value>;
  using DataView = ClipboardFilesDataView;
  using Data_ = internal::ClipboardFiles_Data;

  template <typename... Args>
  static ClipboardFilesPtr New(Args&&... args) {
    return ClipboardFilesPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ClipboardFilesPtr From(const U& u) {
    return mojo::TypeConverter<ClipboardFilesPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ClipboardFiles>::Convert(*this);
  }


  ClipboardFiles();

  ClipboardFiles(
      std::vector<::blink::mojom::DataTransferFilePtr> files,
      const absl::optional<std::string>& file_system_id);

ClipboardFiles(const ClipboardFiles&) = delete;
ClipboardFiles& operator=(const ClipboardFiles&) = delete;

  ~ClipboardFiles();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ClipboardFilesPtr>
  ClipboardFilesPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ClipboardFiles::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ClipboardFiles::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ClipboardFiles::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ClipboardFiles_UnserializedMessageContext<
            UserType, ClipboardFiles::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ClipboardFiles::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ClipboardFiles::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ClipboardFiles_UnserializedMessageContext<
            UserType, ClipboardFiles::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ClipboardFiles::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  std::vector<::blink::mojom::DataTransferFilePtr> files;
  
  absl::optional<std::string> file_system_id;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ClipboardFiles::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ClipboardFiles::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ClipboardFiles::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ClipboardFiles::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
ClipboardFilesPtr ClipboardFiles::Clone() const {
  return New(
      mojo::Clone(files),
      mojo::Clone(file_system_id)
  );
}

template <typename T, ClipboardFiles::EnableIfSame<T>*>
bool ClipboardFiles::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->files, other_struct.files))
    return false;
  if (!mojo::Equals(this->file_system_id, other_struct.file_system_id))
    return false;
  return true;
}

template <typename T, ClipboardFiles::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.files < rhs.files)
    return true;
  if (rhs.files < lhs.files)
    return false;
  if (lhs.file_system_id < rhs.file_system_id)
    return true;
  if (rhs.file_system_id < lhs.file_system_id)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace blink

namespace mojo {


template <>
struct BLINK_COMMON_EXPORT StructTraits<::blink::mojom::ClipboardFiles::DataView,
                                         ::blink::mojom::ClipboardFilesPtr> {
  static bool IsNull(const ::blink::mojom::ClipboardFilesPtr& input) { return !input; }
  static void SetToNull(::blink::mojom::ClipboardFilesPtr* output) { output->reset(); }

  static  decltype(::blink::mojom::ClipboardFiles::files)& files(
       ::blink::mojom::ClipboardFilesPtr& input) {
    return input->files;
  }

  static const decltype(::blink::mojom::ClipboardFiles::file_system_id)& file_system_id(
      const ::blink::mojom::ClipboardFilesPtr& input) {
    return input->file_system_id;
  }

  static bool Read(::blink::mojom::ClipboardFiles::DataView input, ::blink::mojom::ClipboardFilesPtr* output);
};

}  // namespace mojo

#endif  // THIRD_PARTY_BLINK_PUBLIC_MOJOM_CLIPBOARD_CLIPBOARD_MOJOM_H_