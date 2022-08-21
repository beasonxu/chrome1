// chrome/services/media_gallery_util/public/mojom/media_parser.mojom-shared.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_SHARED_H_
#define CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_SHARED_H_

#include <stdint.h>

#include <functional>
#include <iosfwd>
#include <type_traits>
#include <utility>
#include "mojo/public/cpp/bindings/array_data_view.h"
#include "mojo/public/cpp/bindings/enum_traits.h"
#include "mojo/public/cpp/bindings/interface_data_view.h"
#include "mojo/public/cpp/bindings/lib/bindings_internal.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/map_data_view.h"
#include "mojo/public/cpp/bindings/string_data_view.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "chrome/services/media_gallery_util/public/mojom/media_parser.mojom-shared-internal.h"
#include "media/mojo/mojom/media_types.mojom-shared.h"
#include "mojo/public/mojom/base/read_only_file.mojom-shared.h"
#include "mojo/public/mojom/base/time.mojom-shared.h"
#include "mojo/public/mojom/base/values.mojom-shared.h"
#include "sandbox/policy/mojom/sandbox.mojom-shared.h"
#include "mojo/public/cpp/bindings/lib/interface_serialization.h"


#include "mojo/public/cpp/bindings/native_enum.h"
#include "mojo/public/cpp/bindings/lib/native_struct_serialization.h"




namespace chrome {
namespace mojom {
class ExtractVideoFrameResultDataView;

class MediaStreamInfoDataView;

class MediaMetadataDataView;

class AttachedImageDataView;

class VideoFrameDataDataView;


}  // namespace mojom
}  // namespace chrome

namespace mojo {
namespace internal {

template <>
struct MojomTypeTraits<::chrome::mojom::ExtractVideoFrameResultDataView> {
  using Data = ::chrome::mojom::internal::ExtractVideoFrameResult_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::chrome::mojom::MediaStreamInfoDataView> {
  using Data = ::chrome::mojom::internal::MediaStreamInfo_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::chrome::mojom::MediaMetadataDataView> {
  using Data = ::chrome::mojom::internal::MediaMetadata_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::chrome::mojom::AttachedImageDataView> {
  using Data = ::chrome::mojom::internal::AttachedImage_Data;
  using DataAsArrayElement = Pointer<Data>;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kStruct;
};

template <>
struct MojomTypeTraits<::chrome::mojom::VideoFrameDataDataView> {
  using Data = ::chrome::mojom::internal::VideoFrameData_Data;
  using DataAsArrayElement = Data;
  static constexpr MojomTypeCategory category = MojomTypeCategory::kUnion;
};

}  // namespace internal
}  // namespace mojo


namespace chrome {
namespace mojom {
// Interface base classes. They are used for type safety check.
class MediaParserInterfaceBase {};

using MediaParserPtrDataView =
    mojo::InterfacePtrDataView<MediaParserInterfaceBase>;
using MediaParserRequestDataView =
    mojo::InterfaceRequestDataView<MediaParserInterfaceBase>;
using MediaParserAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaParserInterfaceBase>;
using MediaParserAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaParserInterfaceBase>;
class MediaParserFactoryInterfaceBase {};

using MediaParserFactoryPtrDataView =
    mojo::InterfacePtrDataView<MediaParserFactoryInterfaceBase>;
using MediaParserFactoryRequestDataView =
    mojo::InterfaceRequestDataView<MediaParserFactoryInterfaceBase>;
using MediaParserFactoryAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaParserFactoryInterfaceBase>;
using MediaParserFactoryAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaParserFactoryInterfaceBase>;
class MediaDataSourceInterfaceBase {};

using MediaDataSourcePtrDataView =
    mojo::InterfacePtrDataView<MediaDataSourceInterfaceBase>;
using MediaDataSourceRequestDataView =
    mojo::InterfaceRequestDataView<MediaDataSourceInterfaceBase>;
using MediaDataSourceAssociatedPtrInfoDataView =
    mojo::AssociatedInterfacePtrInfoDataView<MediaDataSourceInterfaceBase>;
using MediaDataSourceAssociatedRequestDataView =
    mojo::AssociatedInterfaceRequestDataView<MediaDataSourceInterfaceBase>;


class ExtractVideoFrameResultDataView {
 public:
  ExtractVideoFrameResultDataView() = default;

  ExtractVideoFrameResultDataView(
      internal::ExtractVideoFrameResult_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetFrameDataDataView(
      VideoFrameDataDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadFrameData(UserType* output) {
    
    auto* pointer = !data_->frame_data.is_null() ? &data_->frame_data : nullptr;
    return mojo::internal::Deserialize<::chrome::mojom::VideoFrameDataDataView>(
        pointer, output, message_);
  }
  inline void GetConfigDataView(
      ::media::mojom::VideoDecoderConfigDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadConfig(UserType* output) {
    
    auto* pointer = data_->config.Get();
    return mojo::internal::Deserialize<::media::mojom::VideoDecoderConfigDataView>(
        pointer, output, message_);
  }
 private:
  internal::ExtractVideoFrameResult_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class MediaStreamInfoDataView {
 public:
  MediaStreamInfoDataView() = default;

  MediaStreamInfoDataView(
      internal::MediaStreamInfo_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadType(UserType* output) {
    
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetAdditionalPropertiesDataView(
      ::mojo_base::mojom::DeprecatedDictionaryValueDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadAdditionalProperties(UserType* output) {
    
    auto* pointer = data_->additional_properties.Get();
    return mojo::internal::Deserialize<::mojo_base::mojom::DeprecatedDictionaryValueDataView>(
        pointer, output, message_);
  }
 private:
  internal::MediaStreamInfo_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class MediaMetadataDataView {
 public:
  MediaMetadataDataView() = default;

  MediaMetadataDataView(
      internal::MediaMetadata_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetMimeTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadMimeType(UserType* output) {
    
    auto* pointer = data_->mime_type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  int32_t height() const {
    return data_->height;
  }
  int32_t width() const {
    return data_->width;
  }
  double duration() const {
    return data_->duration;
  }
  int32_t rotation() const {
    return data_->rotation;
  }
  inline void GetAlbumDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadAlbum(UserType* output) {
    
    auto* pointer = data_->album.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetArtistDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadArtist(UserType* output) {
    
    auto* pointer = data_->artist.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetCommentDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadComment(UserType* output) {
    
    auto* pointer = data_->comment.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetCopyrightDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadCopyright(UserType* output) {
    
    auto* pointer = data_->copyright.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  int32_t disc() const {
    return data_->disc;
  }
  inline void GetGenreDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadGenre(UserType* output) {
    
    auto* pointer = data_->genre.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetLanguageDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadLanguage(UserType* output) {
    
    auto* pointer = data_->language.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetTitleDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadTitle(UserType* output) {
    
    auto* pointer = data_->title.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  int32_t track() const {
    return data_->track;
  }
  inline void GetRawTagsDataView(
      mojo::ArrayDataView<MediaStreamInfoDataView>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadRawTags(UserType* output) {
    
    auto* pointer = data_->raw_tags.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<::chrome::mojom::MediaStreamInfoDataView>>(
        pointer, output, message_);
  }
 private:
  internal::MediaMetadata_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class AttachedImageDataView {
 public:
  AttachedImageDataView() = default;

  AttachedImageDataView(
      internal::AttachedImage_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const { return !data_; }
  inline void GetTypeDataView(
      mojo::StringDataView* output);

  template <typename UserType>
  [[nodiscard]] bool ReadType(UserType* output) {
    
    auto* pointer = data_->type.Get();
    return mojo::internal::Deserialize<mojo::StringDataView>(
        pointer, output, message_);
  }
  inline void GetDataDataView(
      mojo::ArrayDataView<uint8_t>* output);

  template <typename UserType>
  [[nodiscard]] bool ReadData(UserType* output) {
    
    auto* pointer = data_->data.Get();
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        pointer, output, message_);
  }
 private:
  internal::AttachedImage_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



class VideoFrameDataDataView {
 public:
  using Tag = internal::VideoFrameData_Data::VideoFrameData_Tag;

  VideoFrameDataDataView() = default;

  VideoFrameDataDataView(
      internal::VideoFrameData_Data* data,
      mojo::Message* message)
      : data_(data), message_(message) {}

  bool is_null() const {
    // For inlined unions, |data_| is always non-null. In that case we need to
    // check |data_->is_null()|.
    return !data_ || data_->is_null();
  }

  Tag tag() const { return data_->tag; }
  bool is_encoded_data() const { return data_->tag == Tag::kEncodedData; }
  inline void GetEncodedDataDataView(
      mojo::ArrayDataView<uint8_t>* output) const;

  template <typename UserType>
  [[nodiscard]] bool ReadEncodedData(UserType* output) const {
    
    CHECK(is_encoded_data());
    return mojo::internal::Deserialize<mojo::ArrayDataView<uint8_t>>(
        data_->data.f_encoded_data.Get(), output, message_);
  }
  bool is_decoded_frame() const { return data_->tag == Tag::kDecodedFrame; }
  inline void GetDecodedFrameDataView(
      ::media::mojom::VideoFrameDataView* output) const;

  template <typename UserType>
  [[nodiscard]] bool ReadDecodedFrame(UserType* output) const {
    
static_assert(
    mojo::internal::IsValidUserTypeForOptionalValue<
        ::media::mojom::VideoFrameDataView, UserType>(),
    "Attempting to read the optional `decoded_frame` field into a type which "
    "cannot represent a null value. Either wrap the destination object "
    "with absl::optional, ensure that any corresponding "
    "{Struct/Union/Array/String}Traits define the necessary IsNull and "
    "SetToNull methods, or use `MaybeReadDecodedFrame` instead "
    "of `ReadDecodedFrame if you're fine with null values being "
    "silently ignored in this case.");
    CHECK(is_decoded_frame());
    return mojo::internal::Deserialize<::media::mojom::VideoFrameDataView>(
        data_->data.f_decoded_frame.Get(), output, message_);
  }

 private:
  internal::VideoFrameData_Data* data_ = nullptr;
  mojo::Message* message_ = nullptr;
};



}  // namespace mojom
}  // namespace chrome

namespace std {

}  // namespace std

namespace mojo {


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome::mojom::ExtractVideoFrameResultDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::chrome::mojom::ExtractVideoFrameResultDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::chrome::mojom::internal::ExtractVideoFrameResult_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::frame_data(input)) in_frame_data = Traits::frame_data(input);
    mojo::internal::MessageFragment<decltype(fragment->frame_data)>
        frame_data_fragment(fragment.message());
    frame_data_fragment.Claim(&fragment->frame_data);
    mojo::internal::Serialize<::chrome::mojom::VideoFrameDataDataView>(
        in_frame_data, frame_data_fragment, true);
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->frame_data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null frame_data in ExtractVideoFrameResult struct");
    decltype(Traits::config(input)) in_config = Traits::config(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->config)::BaseType> config_fragment(
            fragment.message());
    mojo::internal::Serialize<::media::mojom::VideoDecoderConfigDataView>(
        in_config, config_fragment);
    fragment->config.Set(
        config_fragment.is_null() ? nullptr : config_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->config.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null config in ExtractVideoFrameResult struct");
  }

  static bool Deserialize(::chrome::mojom::internal::ExtractVideoFrameResult_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::chrome::mojom::ExtractVideoFrameResultDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome::mojom::MediaStreamInfoDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::chrome::mojom::MediaStreamInfoDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::chrome::mojom::internal::MediaStreamInfo_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::type(input)) in_type = Traits::type(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->type)::BaseType> type_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_type, type_fragment);
    fragment->type.Set(
        type_fragment.is_null() ? nullptr : type_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null type in MediaStreamInfo struct");
    decltype(Traits::additional_properties(input)) in_additional_properties = Traits::additional_properties(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->additional_properties)::BaseType> additional_properties_fragment(
            fragment.message());
    mojo::internal::Serialize<::mojo_base::mojom::DeprecatedDictionaryValueDataView>(
        in_additional_properties, additional_properties_fragment);
    fragment->additional_properties.Set(
        additional_properties_fragment.is_null() ? nullptr : additional_properties_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->additional_properties.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null additional_properties in MediaStreamInfo struct");
  }

  static bool Deserialize(::chrome::mojom::internal::MediaStreamInfo_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::chrome::mojom::MediaStreamInfoDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome::mojom::MediaMetadataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::chrome::mojom::MediaMetadataDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::chrome::mojom::internal::MediaMetadata_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::mime_type(input)) in_mime_type = Traits::mime_type(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->mime_type)::BaseType> mime_type_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_mime_type, mime_type_fragment);
    fragment->mime_type.Set(
        mime_type_fragment.is_null() ? nullptr : mime_type_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->mime_type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null mime_type in MediaMetadata struct");
    fragment->height = Traits::height(input);
    fragment->width = Traits::width(input);
    fragment->duration = Traits::duration(input);
    fragment->rotation = Traits::rotation(input);
    decltype(Traits::album(input)) in_album = Traits::album(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->album)::BaseType> album_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_album, album_fragment);
    fragment->album.Set(
        album_fragment.is_null() ? nullptr : album_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->album.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null album in MediaMetadata struct");
    decltype(Traits::artist(input)) in_artist = Traits::artist(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->artist)::BaseType> artist_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_artist, artist_fragment);
    fragment->artist.Set(
        artist_fragment.is_null() ? nullptr : artist_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->artist.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null artist in MediaMetadata struct");
    decltype(Traits::comment(input)) in_comment = Traits::comment(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->comment)::BaseType> comment_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_comment, comment_fragment);
    fragment->comment.Set(
        comment_fragment.is_null() ? nullptr : comment_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->comment.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null comment in MediaMetadata struct");
    decltype(Traits::copyright(input)) in_copyright = Traits::copyright(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->copyright)::BaseType> copyright_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_copyright, copyright_fragment);
    fragment->copyright.Set(
        copyright_fragment.is_null() ? nullptr : copyright_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->copyright.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null copyright in MediaMetadata struct");
    fragment->disc = Traits::disc(input);
    decltype(Traits::genre(input)) in_genre = Traits::genre(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->genre)::BaseType> genre_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_genre, genre_fragment);
    fragment->genre.Set(
        genre_fragment.is_null() ? nullptr : genre_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->genre.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null genre in MediaMetadata struct");
    decltype(Traits::language(input)) in_language = Traits::language(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->language)::BaseType> language_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_language, language_fragment);
    fragment->language.Set(
        language_fragment.is_null() ? nullptr : language_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->language.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null language in MediaMetadata struct");
    decltype(Traits::title(input)) in_title = Traits::title(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->title)::BaseType> title_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_title, title_fragment);
    fragment->title.Set(
        title_fragment.is_null() ? nullptr : title_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->title.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null title in MediaMetadata struct");
    fragment->track = Traits::track(input);
    decltype(Traits::raw_tags(input)) in_raw_tags = Traits::raw_tags(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->raw_tags)::BaseType>
        raw_tags_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams raw_tags_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<::chrome::mojom::MediaStreamInfoDataView>>(
        in_raw_tags, raw_tags_fragment, &raw_tags_validate_params);
    fragment->raw_tags.Set(
        raw_tags_fragment.is_null() ? nullptr : raw_tags_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->raw_tags.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null raw_tags in MediaMetadata struct");
  }

  static bool Deserialize(::chrome::mojom::internal::MediaMetadata_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::chrome::mojom::MediaMetadataDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome::mojom::AttachedImageDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = StructTraits<::chrome::mojom::AttachedImageDataView, UserType>;

  static void Serialize(
      MaybeConstUserType& input,
      mojo::internal::MessageFragment<::chrome::mojom::internal::AttachedImage_Data>& fragment) {
    if (CallIsNullIfExists<Traits>(input))
      return;
    fragment.Allocate();
    decltype(Traits::type(input)) in_type = Traits::type(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->type)::BaseType> type_fragment(
            fragment.message());
    mojo::internal::Serialize<mojo::StringDataView>(
        in_type, type_fragment);
    fragment->type.Set(
        type_fragment.is_null() ? nullptr : type_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->type.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null type in AttachedImage struct");
    decltype(Traits::data(input)) in_data = Traits::data(input);
    mojo::internal::MessageFragment<
        typename decltype(fragment->data)::BaseType>
        data_fragment(fragment.message());
    const mojo::internal::ContainerValidateParams data_validate_params(
        0, false, nullptr);
    mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
        in_data, data_fragment, &data_validate_params);
    fragment->data.Set(
        data_fragment.is_null() ? nullptr : data_fragment.data());
    MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
        fragment->data.is_null(),
        mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
        "null data in AttachedImage struct");
  }

  static bool Deserialize(::chrome::mojom::internal::AttachedImage_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input)
      return CallSetToNullIfExists<Traits>(output);

    ::chrome::mojom::AttachedImageDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal


namespace internal {

template <typename MaybeConstUserType>
struct Serializer<::chrome::mojom::VideoFrameDataDataView, MaybeConstUserType> {
  using UserType = typename std::remove_const<MaybeConstUserType>::type;
  using Traits = UnionTraits<::chrome::mojom::VideoFrameDataDataView, UserType>;

  static void Serialize(MaybeConstUserType& input,
                        MessageFragment<::chrome::mojom::internal::VideoFrameData_Data>& fragment,
                        bool inlined) {
    if (CallIsNullIfExists<Traits>(input)) {
       if (inlined)
        fragment->set_null();
      return;
    }

    if (!inlined)
      fragment.Allocate();

    // TODO(azani): Handle unknown and objects.
    // Set the not-null flag.
    fragment->size = kUnionDataSize;
    fragment->tag = Traits::GetTag(input);
    switch (fragment->tag) {
      case ::chrome::mojom::VideoFrameDataDataView::Tag::kEncodedData: {
        decltype(Traits::encoded_data(input))
            in_encoded_data = Traits::encoded_data(input);
        mojo::internal::MessageFragment<
            typename decltype(fragment->data.f_encoded_data)::BaseType>
            value_fragment(fragment.message());
        const ContainerValidateParams encoded_data_validate_params(
            0, false, nullptr);
        mojo::internal::Serialize<mojo::ArrayDataView<uint8_t>>(
            in_encoded_data, value_fragment, &encoded_data_validate_params);
        MOJO_INTERNAL_DLOG_SERIALIZATION_WARNING(
            value_fragment.is_null(),
            mojo::internal::VALIDATION_ERROR_UNEXPECTED_NULL_POINTER,
            "null encoded_data in VideoFrameData union");
        fragment->data.f_encoded_data.Set(
            value_fragment.is_null() ? nullptr : value_fragment.data());
        break;
      }
      case ::chrome::mojom::VideoFrameDataDataView::Tag::kDecodedFrame: {
        decltype(Traits::decoded_frame(input))
            in_decoded_frame = Traits::decoded_frame(input);
        mojo::internal::MessageFragment<
            typename decltype(fragment->data.f_decoded_frame)::BaseType>
            value_fragment(fragment.message());
        mojo::internal::Serialize<::media::mojom::VideoFrameDataView>(
            in_decoded_frame, value_fragment);
        fragment->data.f_decoded_frame.Set(
            value_fragment.is_null() ? nullptr : value_fragment.data());
        break;
      }
    }
  }

  static bool Deserialize(::chrome::mojom::internal::VideoFrameData_Data* input,
                          UserType* output,
                          Message* message) {
    if (!input || input->is_null())
      return CallSetToNullIfExists<Traits>(output);

    ::chrome::mojom::VideoFrameDataDataView data_view(input, message);
    return Traits::Read(data_view, output);
  }
};

}  // namespace internal

}  // namespace mojo


namespace chrome {
namespace mojom {

inline void ExtractVideoFrameResultDataView::GetFrameDataDataView(
    VideoFrameDataDataView* output) {
  auto pointer = &data_->frame_data;
  *output = VideoFrameDataDataView(pointer, message_);
}
inline void ExtractVideoFrameResultDataView::GetConfigDataView(
    ::media::mojom::VideoDecoderConfigDataView* output) {
  auto pointer = data_->config.Get();
  *output = ::media::mojom::VideoDecoderConfigDataView(pointer, message_);
}


inline void MediaStreamInfoDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void MediaStreamInfoDataView::GetAdditionalPropertiesDataView(
    ::mojo_base::mojom::DeprecatedDictionaryValueDataView* output) {
  auto pointer = data_->additional_properties.Get();
  *output = ::mojo_base::mojom::DeprecatedDictionaryValueDataView(pointer, message_);
}


inline void MediaMetadataDataView::GetMimeTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->mime_type.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void MediaMetadataDataView::GetAlbumDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->album.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void MediaMetadataDataView::GetArtistDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->artist.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void MediaMetadataDataView::GetCommentDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->comment.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void MediaMetadataDataView::GetCopyrightDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->copyright.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void MediaMetadataDataView::GetGenreDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->genre.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void MediaMetadataDataView::GetLanguageDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->language.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void MediaMetadataDataView::GetTitleDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->title.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void MediaMetadataDataView::GetRawTagsDataView(
    mojo::ArrayDataView<MediaStreamInfoDataView>* output) {
  auto pointer = data_->raw_tags.Get();
  *output = mojo::ArrayDataView<MediaStreamInfoDataView>(pointer, message_);
}


inline void AttachedImageDataView::GetTypeDataView(
    mojo::StringDataView* output) {
  auto pointer = data_->type.Get();
  *output = mojo::StringDataView(pointer, message_);
}
inline void AttachedImageDataView::GetDataDataView(
    mojo::ArrayDataView<uint8_t>* output) {
  auto pointer = data_->data.Get();
  *output = mojo::ArrayDataView<uint8_t>(pointer, message_);
}


inline void VideoFrameDataDataView::GetEncodedDataDataView(
    mojo::ArrayDataView<uint8_t>* output) const {
  CHECK(is_encoded_data());
  *output = mojo::ArrayDataView<uint8_t>(data_->data.f_encoded_data.Get(), message_);
}
inline void VideoFrameDataDataView::GetDecodedFrameDataView(
    ::media::mojom::VideoFrameDataView* output) const {
  CHECK(is_decoded_frame());
  *output = ::media::mojom::VideoFrameDataView(data_->data.f_decoded_frame.Get(), message_);
}


}  // namespace mojom
}  // namespace chrome

// Declare TraceFormatTraits for enums, which should be defined in ::perfetto
// namespace.

#endif  // CHROME_SERVICES_MEDIA_GALLERY_UTIL_PUBLIC_MOJOM_MEDIA_PARSER_MOJOM_SHARED_H_