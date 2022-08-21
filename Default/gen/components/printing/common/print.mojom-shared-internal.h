// components/printing/common/print.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef COMPONENTS_PRINTING_COMMON_PRINT_MOJOM_SHARED_INTERNAL_H_
#define COMPONENTS_PRINTING_COMMON_PRINT_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "mojo/public/mojom/base/shared_memory.mojom-shared-internal.h"
#include "mojo/public/mojom/base/string16.mojom-shared-internal.h"
#include "mojo/public/mojom/base/values.mojom-shared-internal.h"
#include "mojo/public/mojom/base/unguessable_token.mojom-shared-internal.h"
#include "printing/mojom/print.mojom-shared-internal.h"
#include "ui/gfx/geometry/mojom/geometry.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace printing {
namespace mojom {
namespace internal {
class PrintFrameContentParams_Data;
class OptionsFromDocumentParams_Data;
class DidPrintContentParams_Data;
class DidStartPreviewParams_Data;
class DidPreviewPageParams_Data;
class DidPreviewDocumentParams_Data;
class PrintParams_Data;
class PrintPagesParams_Data;
class DidPrintDocumentParams_Data;
class ScriptedPrintParams_Data;
class PrintWithParamsResult_Data;

struct PrintFailureReason_Data {
 public:
  static bool constexpr kIsExtensible = false;

  static bool IsKnownValue(int32_t value) {
    switch (value) {
      case 0:
      case 1:
        return true;
    }
    return false;
  }

  static bool Validate(int32_t value,
                       mojo::internal::ValidationContext* validation_context) {
    if (kIsExtensible || IsKnownValue(value))
      return true;

    ReportValidationError(validation_context,
                          mojo::internal::VALIDATION_ERROR_UNKNOWN_ENUM_VALUE);
    return false;
  }
};

#pragma pack(push, 1)


class  PrintWithParamsResult_Data {
 public:
  // Used to identify Mojom Union Data Classes.
  typedef void MojomUnionDataType;

  PrintWithParamsResult_Data() = default;
  // Do nothing in the destructor since it won't be called when it is a
  // non-inlined union.
  ~PrintWithParamsResult_Data() = default;

  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context,
                       bool inlined);

  bool is_null() const { return size == 0; }

  void set_null() {
    size = 0U;
    tag = static_cast<PrintWithParamsResult_Tag>(0);
    data.unknown = 0U;
  }

  // TODO(crbug.com/1148486): SHOUTY_CASE values are being deprecated per C++ code style
  // guidelines (https://google.github.io/styleguide/cppguide.html#Enumerator_Names),
  // please use kCamelCase values instead.  Cleanup NULL_VALUE, BOOL_VALUE, INT_VALUE, etc.
  // generation once codebase is transitioned to kNullValue, kBoolValue, kIntValue, etc.
  enum class PrintWithParamsResult_Tag : uint32_t {

    
    kParams,
    
    kFailureReason,
  };

  // A note on layout:
  // "Each non-static data member is allocated as if it were the sole member of
  // a struct." - Section 9.5.2 ISO/IEC 14882:2011 (The C++ Spec)
  union MOJO_ALIGNAS(8) Union_ {
    Union_() : unknown(0) {}
    mojo::internal::Pointer<internal::DidPrintDocumentParams_Data> f_params;
    int32_t f_failure_reason;
    uint64_t unknown;
  };

  uint32_t size;
  PrintWithParamsResult_Tag tag;
  Union_ data;
};
static_assert(sizeof(PrintWithParamsResult_Data) == mojo::internal::kUnionDataSize,
              "Bad sizeof(PrintWithParamsResult_Data)");
class  PrintFrameContentParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> printable_area;
  int32_t document_cookie;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<PrintFrameContentParams_Data>;

  PrintFrameContentParams_Data();
  ~PrintFrameContentParams_Data() = delete;
};
static_assert(sizeof(PrintFrameContentParams_Data) == 24,
              "Bad sizeof(PrintFrameContentParams_Data)");
// Used by PrintFrameContentParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PrintFrameContentParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PrintFrameContentParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PrintFrameContentParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<PrintFrameContentParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PrintFrameContentParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  OptionsFromDocumentParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint8_t is_scaling_disabled : 1;
  uint8_t pad0_[3];
  int32_t copies;
  int32_t duplex;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<OptionsFromDocumentParams_Data>;

  OptionsFromDocumentParams_Data();
  ~OptionsFromDocumentParams_Data() = delete;
};
static_assert(sizeof(OptionsFromDocumentParams_Data) == 24,
              "Bad sizeof(OptionsFromDocumentParams_Data)");
// Used by OptionsFromDocumentParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct OptionsFromDocumentParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  OptionsFromDocumentParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~OptionsFromDocumentParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<OptionsFromDocumentParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    OptionsFromDocumentParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DidPrintContentParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::mojo_base::mojom::internal::ReadOnlySharedMemoryRegion_Data> metafile_data_region;
  mojo::internal::Pointer<mojo::internal::Map_Data<uint32_t, mojo::internal::Pointer<::mojo_base::mojom::internal::UnguessableToken_Data>>> subframe_content_info;

 private:
  friend class mojo::internal::MessageFragment<DidPrintContentParams_Data>;

  DidPrintContentParams_Data();
  ~DidPrintContentParams_Data() = delete;
};
static_assert(sizeof(DidPrintContentParams_Data) == 24,
              "Bad sizeof(DidPrintContentParams_Data)");
// Used by DidPrintContentParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DidPrintContentParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DidPrintContentParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DidPrintContentParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DidPrintContentParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DidPrintContentParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DidStartPreviewParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  uint32_t page_count;
  int32_t pages_per_sheet;
  mojo::internal::Pointer<mojo::internal::Array_Data<uint32_t>> pages_to_render;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> page_size;
  int32_t fit_to_page_scaling;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<DidStartPreviewParams_Data>;

  DidStartPreviewParams_Data();
  ~DidStartPreviewParams_Data() = delete;
};
static_assert(sizeof(DidStartPreviewParams_Data) == 40,
              "Bad sizeof(DidStartPreviewParams_Data)");
// Used by DidStartPreviewParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DidStartPreviewParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DidStartPreviewParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DidStartPreviewParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DidStartPreviewParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DidStartPreviewParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DidPreviewPageParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DidPrintContentParams_Data> content;
  uint32_t page_number;
  int32_t document_cookie;

 private:
  friend class mojo::internal::MessageFragment<DidPreviewPageParams_Data>;

  DidPreviewPageParams_Data();
  ~DidPreviewPageParams_Data() = delete;
};
static_assert(sizeof(DidPreviewPageParams_Data) == 24,
              "Bad sizeof(DidPreviewPageParams_Data)");
// Used by DidPreviewPageParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DidPreviewPageParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DidPreviewPageParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DidPreviewPageParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DidPreviewPageParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DidPreviewPageParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DidPreviewDocumentParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DidPrintContentParams_Data> content;
  int32_t document_cookie;
  uint32_t expected_pages_count;

 private:
  friend class mojo::internal::MessageFragment<DidPreviewDocumentParams_Data>;

  DidPreviewDocumentParams_Data();
  ~DidPreviewDocumentParams_Data() = delete;
};
static_assert(sizeof(DidPreviewDocumentParams_Data) == 24,
              "Bad sizeof(DidPreviewDocumentParams_Data)");
// Used by DidPreviewDocumentParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DidPreviewDocumentParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DidPreviewDocumentParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DidPreviewDocumentParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DidPreviewDocumentParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DidPreviewDocumentParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PrintParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> page_size;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> content_size;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> printable_area;
  int32_t margin_top;
  int32_t margin_left;
  int32_t page_orientation;
  int32_t document_cookie;
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> dpi;
  double scale_factor;
  uint8_t selection_only : 1;
  uint8_t supports_alpha_blend : 1;
  uint8_t is_first_request : 1;
  uint8_t print_to_pdf : 1;
  uint8_t display_header_footer : 1;
  uint8_t rasterize_pdf : 1;
  uint8_t should_print_backgrounds : 1;
  uint8_t prefer_css_page_size : 1;
  uint8_t pad16_[3];
  int32_t preview_ui_id;
  int32_t preview_request_id;
  int32_t print_scaling_option;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> title;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> url;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> header_template;
  mojo::internal::Pointer<::mojo_base::mojom::internal::String16_Data> footer_template;
  int32_t rasterize_pdf_dpi;
  int32_t printed_doc_type;
  uint32_t pages_per_sheet;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<PrintParams_Data>;

  PrintParams_Data();
  ~PrintParams_Data() = delete;
};
static_assert(sizeof(PrintParams_Data) == 128,
              "Bad sizeof(PrintParams_Data)");
// Used by PrintParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PrintParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PrintParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PrintParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<PrintParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PrintParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  PrintPagesParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::PrintParams_Data> params;
  mojo::internal::Pointer<mojo::internal::Array_Data<mojo::internal::Pointer<::printing::mojom::internal::PageRange_Data>>> pages;

 private:
  friend class mojo::internal::MessageFragment<PrintPagesParams_Data>;

  PrintPagesParams_Data();
  ~PrintPagesParams_Data() = delete;
};
static_assert(sizeof(PrintPagesParams_Data) == 24,
              "Bad sizeof(PrintPagesParams_Data)");
// Used by PrintPagesParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct PrintPagesParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  PrintPagesParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~PrintPagesParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<PrintPagesParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    PrintPagesParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  DidPrintDocumentParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<internal::DidPrintContentParams_Data> content;
  int32_t document_cookie;
  uint8_t pad1_[4];
  mojo::internal::Pointer<::gfx::mojom::internal::Size_Data> page_size;
  mojo::internal::Pointer<::gfx::mojom::internal::Rect_Data> content_area;
  mojo::internal::Pointer<::gfx::mojom::internal::Point_Data> physical_offsets;

 private:
  friend class mojo::internal::MessageFragment<DidPrintDocumentParams_Data>;

  DidPrintDocumentParams_Data();
  ~DidPrintDocumentParams_Data() = delete;
};
static_assert(sizeof(DidPrintDocumentParams_Data) == 48,
              "Bad sizeof(DidPrintDocumentParams_Data)");
// Used by DidPrintDocumentParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct DidPrintDocumentParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  DidPrintDocumentParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~DidPrintDocumentParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<DidPrintDocumentParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    DidPrintDocumentParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};
class  ScriptedPrintParams_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  int32_t cookie;
  uint32_t expected_pages_count;
  uint8_t has_selection : 1;
  uint8_t is_scripted : 1;
  uint8_t pad3_[3];
  int32_t margin_type;

 private:
  friend class mojo::internal::MessageFragment<ScriptedPrintParams_Data>;

  ScriptedPrintParams_Data();
  ~ScriptedPrintParams_Data() = delete;
};
static_assert(sizeof(ScriptedPrintParams_Data) == 24,
              "Bad sizeof(ScriptedPrintParams_Data)");
// Used by ScriptedPrintParams::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct ScriptedPrintParams_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  ScriptedPrintParams_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~ScriptedPrintParams_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<ScriptedPrintParams_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    ScriptedPrintParams_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace printing

#endif  // COMPONENTS_PRINTING_COMMON_PRINT_MOJOM_SHARED_INTERNAL_H_