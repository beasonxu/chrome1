// services/media_session/public/mojom/media_controller.mojom-shared.cc is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "services/media_session/public/mojom/media_controller.mojom-shared.h"

// Used to support stream output operator for enums.
// TODO(dcheng): Consider omitting this somehow if not needed.
#include <ostream>
#include <utility>

#include "base/strings/stringprintf.h"
#include "mojo/public/cpp/bindings/lib/validate_params.h"
#include "mojo/public/cpp/bindings/lib/validation_errors.h"
#include "mojo/public/cpp/bindings/lib/validation_util.h"
#include "third_party/perfetto/include/perfetto/tracing/traced_value.h"

#include "services/media_session/public/mojom/media_controller.mojom-params-data.h"
namespace media_session {
namespace mojom {

namespace internal {


// static
bool MediaControllerManager_CreateMediaControllerForSession_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaControllerManager_CreateMediaControllerForSession_Params_Data* object =
      static_cast<const MediaControllerManager_CreateMediaControllerForSession_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->receiver, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->receiver,
                                                 validation_context)) {
    return false;
  }

  if (!mojo::internal::ValidatePointerNonNullable(
          object->request_id, 2, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->request_id, validation_context))
    return false;

  return true;
}

MediaControllerManager_CreateMediaControllerForSession_Params_Data::MediaControllerManager_CreateMediaControllerForSession_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaControllerManager_CreateActiveMediaController_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaControllerManager_CreateActiveMediaController_Params_Data* object =
      static_cast<const MediaControllerManager_CreateActiveMediaController_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->receiver, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->receiver,
                                                 validation_context)) {
    return false;
  }

  return true;
}

MediaControllerManager_CreateActiveMediaController_Params_Data::MediaControllerManager_CreateActiveMediaController_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaControllerManager_SuspendAllSessions_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaControllerManager_SuspendAllSessions_Params_Data* object =
      static_cast<const MediaControllerManager_SuspendAllSessions_Params_Data*>(data);

  return true;
}

MediaControllerManager_SuspendAllSessions_Params_Data::MediaControllerManager_SuspendAllSessions_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_Suspend_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_Suspend_Params_Data* object =
      static_cast<const MediaController_Suspend_Params_Data*>(data);

  return true;
}

MediaController_Suspend_Params_Data::MediaController_Suspend_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_Resume_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_Resume_Params_Data* object =
      static_cast<const MediaController_Resume_Params_Data*>(data);

  return true;
}

MediaController_Resume_Params_Data::MediaController_Resume_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_Stop_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_Stop_Params_Data* object =
      static_cast<const MediaController_Stop_Params_Data*>(data);

  return true;
}

MediaController_Stop_Params_Data::MediaController_Stop_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_ToggleSuspendResume_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_ToggleSuspendResume_Params_Data* object =
      static_cast<const MediaController_ToggleSuspendResume_Params_Data*>(data);

  return true;
}

MediaController_ToggleSuspendResume_Params_Data::MediaController_ToggleSuspendResume_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_AddObserver_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_AddObserver_Params_Data* object =
      static_cast<const MediaController_AddObserver_Params_Data*>(data);

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->observer, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->observer,
                                                 validation_context)) {
    return false;
  }

  return true;
}

MediaController_AddObserver_Params_Data::MediaController_AddObserver_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_PreviousTrack_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_PreviousTrack_Params_Data* object =
      static_cast<const MediaController_PreviousTrack_Params_Data*>(data);

  return true;
}

MediaController_PreviousTrack_Params_Data::MediaController_PreviousTrack_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_NextTrack_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_NextTrack_Params_Data* object =
      static_cast<const MediaController_NextTrack_Params_Data*>(data);

  return true;
}

MediaController_NextTrack_Params_Data::MediaController_NextTrack_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_Seek_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_Seek_Params_Data* object =
      static_cast<const MediaController_Seek_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->seek_time, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->seek_time, validation_context))
    return false;

  return true;
}

MediaController_Seek_Params_Data::MediaController_Seek_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_ObserveImages_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 32, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_ObserveImages_Params_Data* object =
      static_cast<const MediaController_ObserveImages_Params_Data*>(data);


  if (!::media_session::mojom::internal::MediaSessionImageType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidateHandleOrInterfaceNonNullable(
          object->observer, 4, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateHandleOrInterface(object->observer,
                                                 validation_context)) {
    return false;
  }

  return true;
}

MediaController_ObserveImages_Params_Data::MediaController_ObserveImages_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_SeekTo_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_SeekTo_Params_Data* object =
      static_cast<const MediaController_SeekTo_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->seek_time, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->seek_time, validation_context))
    return false;

  return true;
}

MediaController_SeekTo_Params_Data::MediaController_SeekTo_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_ScrubTo_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_ScrubTo_Params_Data* object =
      static_cast<const MediaController_ScrubTo_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->seek_time, 1, validation_context)) {
    return false;
  }
  if (!mojo::internal::ValidateStruct(object->seek_time, validation_context))
    return false;

  return true;
}

MediaController_ScrubTo_Params_Data::MediaController_ScrubTo_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_EnterPictureInPicture_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_EnterPictureInPicture_Params_Data* object =
      static_cast<const MediaController_EnterPictureInPicture_Params_Data*>(data);

  return true;
}

MediaController_EnterPictureInPicture_Params_Data::MediaController_EnterPictureInPicture_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_ExitPictureInPicture_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_ExitPictureInPicture_Params_Data* object =
      static_cast<const MediaController_ExitPictureInPicture_Params_Data*>(data);

  return true;
}

MediaController_ExitPictureInPicture_Params_Data::MediaController_ExitPictureInPicture_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_SetAudioSinkId_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_SetAudioSinkId_Params_Data* object =
      static_cast<const MediaController_SetAudioSinkId_Params_Data*>(data);

  const mojo::internal::ContainerValidateParams id_validate_params(
      0, false, nullptr);
  if (!mojo::internal::ValidateContainer(object->id, validation_context,
                                         &id_validate_params)) {
    return false;
  }

  return true;
}

MediaController_SetAudioSinkId_Params_Data::MediaController_SetAudioSinkId_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_ToggleMicrophone_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_ToggleMicrophone_Params_Data* object =
      static_cast<const MediaController_ToggleMicrophone_Params_Data*>(data);

  return true;
}

MediaController_ToggleMicrophone_Params_Data::MediaController_ToggleMicrophone_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_ToggleCamera_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_ToggleCamera_Params_Data* object =
      static_cast<const MediaController_ToggleCamera_Params_Data*>(data);

  return true;
}

MediaController_ToggleCamera_Params_Data::MediaController_ToggleCamera_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_HangUp_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_HangUp_Params_Data* object =
      static_cast<const MediaController_HangUp_Params_Data*>(data);

  return true;
}

MediaController_HangUp_Params_Data::MediaController_HangUp_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_Raise_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 8, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_Raise_Params_Data* object =
      static_cast<const MediaController_Raise_Params_Data*>(data);

  return true;
}

MediaController_Raise_Params_Data::MediaController_Raise_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaController_SetMute_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaController_SetMute_Params_Data* object =
      static_cast<const MediaController_SetMute_Params_Data*>(data);

  return true;
}

MediaController_SetMute_Params_Data::MediaController_SetMute_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaControllerObserver_MediaSessionInfoChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaControllerObserver_MediaSessionInfoChanged_Params_Data* object =
      static_cast<const MediaControllerObserver_MediaSessionInfoChanged_Params_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->info, validation_context))
    return false;

  return true;
}

MediaControllerObserver_MediaSessionInfoChanged_Params_Data::MediaControllerObserver_MediaSessionInfoChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaControllerObserver_MediaSessionMetadataChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaControllerObserver_MediaSessionMetadataChanged_Params_Data* object =
      static_cast<const MediaControllerObserver_MediaSessionMetadataChanged_Params_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->metadata, validation_context))
    return false;

  return true;
}

MediaControllerObserver_MediaSessionMetadataChanged_Params_Data::MediaControllerObserver_MediaSessionMetadataChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaControllerObserver_MediaSessionActionsChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaControllerObserver_MediaSessionActionsChanged_Params_Data* object =
      static_cast<const MediaControllerObserver_MediaSessionActionsChanged_Params_Data*>(data);

  if (!mojo::internal::ValidatePointerNonNullable(
          object->action, 1, validation_context)) {
    return false;
  }
  const mojo::internal::ContainerValidateParams action_validate_params(
      0, ::media_session::mojom::internal::MediaSessionAction_Data::Validate);
  if (!mojo::internal::ValidateContainer(object->action, validation_context,
                                         &action_validate_params)) {
    return false;
  }

  return true;
}

MediaControllerObserver_MediaSessionActionsChanged_Params_Data::MediaControllerObserver_MediaSessionActionsChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaControllerObserver_MediaSessionChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaControllerObserver_MediaSessionChanged_Params_Data* object =
      static_cast<const MediaControllerObserver_MediaSessionChanged_Params_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->request_id, validation_context))
    return false;

  return true;
}

MediaControllerObserver_MediaSessionChanged_Params_Data::MediaControllerObserver_MediaSessionChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaControllerObserver_MediaSessionPositionChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 16, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaControllerObserver_MediaSessionPositionChanged_Params_Data* object =
      static_cast<const MediaControllerObserver_MediaSessionPositionChanged_Params_Data*>(data);

  if (!mojo::internal::ValidateStruct(object->position, validation_context))
    return false;

  return true;
}

MediaControllerObserver_MediaSessionPositionChanged_Params_Data::MediaControllerObserver_MediaSessionPositionChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}


// static
bool MediaControllerImageObserver_MediaControllerImageChanged_Params_Data::Validate(
    const void* data,
    mojo::internal::ValidationContext* validation_context) {
  if (!data)
    return true;
  if (!ValidateUnversionedStructHeaderAndSizeAndClaimMemory(
          data, 24, validation_context)) {
    return false;
  }

  // NOTE: The memory backing |object| may be smaller than |sizeof(*object)| if
  // the message comes from an older version.
  [[maybe_unused]] const MediaControllerImageObserver_MediaControllerImageChanged_Params_Data* object =
      static_cast<const MediaControllerImageObserver_MediaControllerImageChanged_Params_Data*>(data);


  if (!::media_session::mojom::internal::MediaSessionImageType_Data
        ::Validate(object->type, validation_context))
    return false;

  if (!mojo::internal::ValidateStruct(object->bitmap, validation_context))
    return false;

  return true;
}

MediaControllerImageObserver_MediaControllerImageChanged_Params_Data::MediaControllerImageObserver_MediaControllerImageChanged_Params_Data()
    : header_({sizeof(*this), 0}) {}

}  // namespace internal
}  // namespace mojom
}  // namespace media_session