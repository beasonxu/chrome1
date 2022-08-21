// gpu/ipc/common/mailbox_holder.mojom-shared-internal.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_SHARED_INTERNAL_H_
#define GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_SHARED_INTERNAL_H_
#include "mojo/public/cpp/bindings/lib/array_internal.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/map_data_internal.h"
#include "mojo/public/cpp/bindings/lib/buffer.h"
#include "gpu/ipc/common/mailbox.mojom-shared-internal.h"
#include "gpu/ipc/common/sync_token.mojom-shared-internal.h"
#include "mojo/public/cpp/bindings/lib/native_enum_data.h"
#include "mojo/public/interfaces/bindings/native_struct.mojom-shared-internal.h"
#include "base/component_export.h"



namespace mojo {
namespace internal {
class ValidationContext;
}
}
namespace gpu {
namespace mojom {
namespace internal {
class MailboxHolder_Data;

#pragma pack(push, 1)
class COMPONENT_EXPORT(MOJOM_SHARED_GPU_EXPORT) MailboxHolder_Data {
 public:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);

  mojo::internal::StructHeader header_;
  mojo::internal::Pointer<::gpu::mojom::internal::Mailbox_Data> mailbox;
  mojo::internal::Pointer<::gpu::mojom::internal::SyncToken_Data> sync_token;
  uint32_t texture_target;
  uint8_t padfinal_[4];

 private:
  friend class mojo::internal::MessageFragment<MailboxHolder_Data>;

  MailboxHolder_Data();
  ~MailboxHolder_Data() = delete;
};
static_assert(sizeof(MailboxHolder_Data) == 32,
              "Bad sizeof(MailboxHolder_Data)");
// Used by MailboxHolder::WrapAsMessage to lazily serialize the struct.
template <typename UserType, typename DataView>
struct MailboxHolder_UnserializedMessageContext
    : public mojo::internal::UnserializedMessageContext {
 public:
  static const mojo::internal::UnserializedMessageContext::Tag kMessageTag;

  MailboxHolder_UnserializedMessageContext(
    uint32_t message_name,
    uint32_t message_flags,
    UserType input)
      : mojo::internal::UnserializedMessageContext(&kMessageTag, message_name, message_flags)
      , user_data_(std::move(input)) {}
  ~MailboxHolder_UnserializedMessageContext() override = default;

  UserType TakeData() {
    return std::move(user_data_);
  }

 private:
  // mojo::internal::UnserializedMessageContext:
  void Serialize(mojo::Message& message) override {
    mojo::internal::MessageFragment<MailboxHolder_Data> fragment(message);
    mojo::internal::Serialize<DataView>(user_data_, fragment);
  }

  UserType user_data_;
};

template <typename UserType, typename DataView>
const mojo::internal::UnserializedMessageContext::Tag
    MailboxHolder_UnserializedMessageContext<UserType, DataView>::kMessageTag = {};

#pragma pack(pop)

}  // namespace internal
}  // namespace mojom
}  // namespace gpu

#endif  // GPU_IPC_COMMON_MAILBOX_HOLDER_MOJOM_SHARED_INTERNAL_H_