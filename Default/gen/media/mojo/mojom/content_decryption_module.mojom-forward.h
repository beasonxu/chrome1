// media/mojo/mojom/content_decryption_module.mojom-forward.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2019 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MEDIA_MOJO_MOJOM_CONTENT_DECRYPTION_MODULE_MOJOM_FORWARD_H_
#define MEDIA_MOJO_MOJOM_CONTENT_DECRYPTION_MODULE_MOJOM_FORWARD_H_

#include <stdint.h>

#include "mojo/public/cpp/bindings/struct_forward.h"

#include "mojo/public/cpp/bindings/deprecated_interface_types_forward.h"


#include "mojo/public/interfaces/bindings/native_struct.mojom-forward.h"



namespace mojo {
enum class NativeEnum;
}  // namespace mojo


namespace media {
namespace mojom {
using CdmConfigDataView = mojo::native::NativeStructDataView;

class CdmPromiseResultDataView;

class CdmKeyInformationDataView;

class CdmContextDataView;

using EmeInitDataType = mojo::NativeEnum;
using CdmSessionType = mojo::NativeEnum;
using CdmMessageType = mojo::NativeEnum;

enum class CdmKeyStatus : int32_t;
using HdcpVersion = mojo::NativeEnum;
using CdmPromiseResult_Exception = mojo::NativeEnum;
using CdmConfig = mojo::native::NativeStruct;
using CdmConfigPtr = mojo::native::NativeStructPtr;

class CdmPromiseResult;
using CdmPromiseResultPtr = mojo::InlinedStructPtr<CdmPromiseResult>;

class CdmKeyInformation;
using CdmKeyInformationPtr = mojo::StructPtr<CdmKeyInformation>;

class CdmContext;
using CdmContextPtr = mojo::StructPtr<CdmContext>;

class ContentDecryptionModule;

class ContentDecryptionModuleClient;

class CdmFactory;




}  // namespace mojom
}  // namespace media

#endif  // MEDIA_MOJO_MOJOM_CONTENT_DECRYPTION_MODULE_MOJOM_FORWARD_H_