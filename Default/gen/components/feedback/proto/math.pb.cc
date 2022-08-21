// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: math.proto

#include "math.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace userfeedback {
PROTOBUF_CONSTEXPR Dimensions::Dimensions(
    ::_pbi::ConstantInitialized)
  : width_(0)
  , height_(0){}
struct DimensionsDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DimensionsDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~DimensionsDefaultTypeInternal() {}
  union {
    Dimensions _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DimensionsDefaultTypeInternal _Dimensions_default_instance_;
PROTOBUF_CONSTEXPR Rectangle::Rectangle(
    ::_pbi::ConstantInitialized)
  : left_(0)
  , top_(0)
  , width_(0)
  , height_(0){}
struct RectangleDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RectangleDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RectangleDefaultTypeInternal() {}
  union {
    Rectangle _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RectangleDefaultTypeInternal _Rectangle_default_instance_;
}  // namespace userfeedback
namespace userfeedback {

// ===================================================================

class Dimensions::_Internal {
 public:
  using HasBits = decltype(std::declval<Dimensions>()._has_bits_);
  static void set_has_width(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_height(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x00000003) ^ 0x00000003) != 0;
  }
};

Dimensions::Dimensions(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:userfeedback.Dimensions)
}
Dimensions::Dimensions(const Dimensions& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&width_, &from.width_,
    static_cast<size_t>(reinterpret_cast<char*>(&height_) -
    reinterpret_cast<char*>(&width_)) + sizeof(height_));
  // @@protoc_insertion_point(copy_constructor:userfeedback.Dimensions)
}

inline void Dimensions::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&width_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&height_) -
    reinterpret_cast<char*>(&width_)) + sizeof(height_));
}

Dimensions::~Dimensions() {
  // @@protoc_insertion_point(destructor:userfeedback.Dimensions)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Dimensions::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Dimensions::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Dimensions::Clear() {
// @@protoc_insertion_point(message_clear_start:userfeedback.Dimensions)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&width_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&height_) -
        reinterpret_cast<char*>(&width_)) + sizeof(height_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Dimensions::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required float width = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          _Internal::set_has_width(&has_bits);
          width_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // required float height = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          _Internal::set_has_height(&has_bits);
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Dimensions::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:userfeedback.Dimensions)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required float width = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(1, this->_internal_width(), target);
  }

  // required float height = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(2, this->_internal_height(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:userfeedback.Dimensions)
  return target;
}

size_t Dimensions::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:userfeedback.Dimensions)
  size_t total_size = 0;

  if (_internal_has_width()) {
    // required float width = 1;
    total_size += 1 + 4;
  }

  if (_internal_has_height()) {
    // required float height = 2;
    total_size += 1 + 4;
  }

  return total_size;
}
size_t Dimensions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:userfeedback.Dimensions)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required float width = 1;
    total_size += 1 + 4;

    // required float height = 2;
    total_size += 1 + 4;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Dimensions::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Dimensions*>(
      &from));
}

void Dimensions::MergeFrom(const Dimensions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:userfeedback.Dimensions)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      width_ = from.width_;
    }
    if (cached_has_bits & 0x00000002u) {
      height_ = from.height_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Dimensions::CopyFrom(const Dimensions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:userfeedback.Dimensions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Dimensions::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Dimensions::InternalSwap(Dimensions* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Dimensions, height_)
      + sizeof(Dimensions::height_)
      - PROTOBUF_FIELD_OFFSET(Dimensions, width_)>(
          reinterpret_cast<char*>(&width_),
          reinterpret_cast<char*>(&other->width_));
}

std::string Dimensions::GetTypeName() const {
  return "userfeedback.Dimensions";
}


// ===================================================================

class Rectangle::_Internal {
 public:
  using HasBits = decltype(std::declval<Rectangle>()._has_bits_);
  static void set_has_left(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_top(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_width(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_height(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static bool MissingRequiredFields(const HasBits& has_bits) {
    return ((has_bits[0] & 0x0000000f) ^ 0x0000000f) != 0;
  }
};

Rectangle::Rectangle(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:userfeedback.Rectangle)
}
Rectangle::Rectangle(const Rectangle& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&left_, &from.left_,
    static_cast<size_t>(reinterpret_cast<char*>(&height_) -
    reinterpret_cast<char*>(&left_)) + sizeof(height_));
  // @@protoc_insertion_point(copy_constructor:userfeedback.Rectangle)
}

inline void Rectangle::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&left_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&height_) -
    reinterpret_cast<char*>(&left_)) + sizeof(height_));
}

Rectangle::~Rectangle() {
  // @@protoc_insertion_point(destructor:userfeedback.Rectangle)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Rectangle::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Rectangle::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Rectangle::Clear() {
// @@protoc_insertion_point(message_clear_start:userfeedback.Rectangle)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&left_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&height_) -
        reinterpret_cast<char*>(&left_)) + sizeof(height_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Rectangle::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // required float left = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          _Internal::set_has_left(&has_bits);
          left_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // required float top = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          _Internal::set_has_top(&has_bits);
          top_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // required float width = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 29)) {
          _Internal::set_has_width(&has_bits);
          width_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      // required float height = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 37)) {
          _Internal::set_has_height(&has_bits);
          height_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<float>(ptr);
          ptr += sizeof(float);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<std::string>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* Rectangle::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:userfeedback.Rectangle)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required float left = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(1, this->_internal_left(), target);
  }

  // required float top = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(2, this->_internal_top(), target);
  }

  // required float width = 3;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(3, this->_internal_width(), target);
  }

  // required float height = 4;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFloatToArray(4, this->_internal_height(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:userfeedback.Rectangle)
  return target;
}

size_t Rectangle::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:userfeedback.Rectangle)
  size_t total_size = 0;

  if (_internal_has_left()) {
    // required float left = 1;
    total_size += 1 + 4;
  }

  if (_internal_has_top()) {
    // required float top = 2;
    total_size += 1 + 4;
  }

  if (_internal_has_width()) {
    // required float width = 3;
    total_size += 1 + 4;
  }

  if (_internal_has_height()) {
    // required float height = 4;
    total_size += 1 + 4;
  }

  return total_size;
}
size_t Rectangle::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:userfeedback.Rectangle)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required float left = 1;
    total_size += 1 + 4;

    // required float top = 2;
    total_size += 1 + 4;

    // required float width = 3;
    total_size += 1 + 4;

    // required float height = 4;
    total_size += 1 + 4;

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Rectangle::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Rectangle*>(
      &from));
}

void Rectangle::MergeFrom(const Rectangle& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:userfeedback.Rectangle)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      left_ = from.left_;
    }
    if (cached_has_bits & 0x00000002u) {
      top_ = from.top_;
    }
    if (cached_has_bits & 0x00000004u) {
      width_ = from.width_;
    }
    if (cached_has_bits & 0x00000008u) {
      height_ = from.height_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Rectangle::CopyFrom(const Rectangle& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:userfeedback.Rectangle)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Rectangle::IsInitialized() const {
  if (_Internal::MissingRequiredFields(_has_bits_)) return false;
  return true;
}

void Rectangle::InternalSwap(Rectangle* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Rectangle, height_)
      + sizeof(Rectangle::height_)
      - PROTOBUF_FIELD_OFFSET(Rectangle, left_)>(
          reinterpret_cast<char*>(&left_),
          reinterpret_cast<char*>(&other->left_));
}

std::string Rectangle::GetTypeName() const {
  return "userfeedback.Rectangle";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace userfeedback
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::userfeedback::Dimensions*
Arena::CreateMaybeMessage< ::userfeedback::Dimensions >(Arena* arena) {
  return Arena::CreateMessageInternal< ::userfeedback::Dimensions >(arena);
}
template<> PROTOBUF_NOINLINE ::userfeedback::Rectangle*
Arena::CreateMaybeMessage< ::userfeedback::Rectangle >(Arena* arena) {
  return Arena::CreateMessageInternal< ::userfeedback::Rectangle >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
