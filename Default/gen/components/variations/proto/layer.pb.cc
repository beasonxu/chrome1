// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: layer.proto

#include "layer.pb.h"

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

namespace variations {
PROTOBUF_CONSTEXPR Layer_LayerMember_SlotRange::Layer_LayerMember_SlotRange(
    ::_pbi::ConstantInitialized)
  : start_(0u)
  , end_(0u){}
struct Layer_LayerMember_SlotRangeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Layer_LayerMember_SlotRangeDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~Layer_LayerMember_SlotRangeDefaultTypeInternal() {}
  union {
    Layer_LayerMember_SlotRange _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Layer_LayerMember_SlotRangeDefaultTypeInternal _Layer_LayerMember_SlotRange_default_instance_;
PROTOBUF_CONSTEXPR Layer_LayerMember::Layer_LayerMember(
    ::_pbi::ConstantInitialized)
  : slots_()
  , id_(0u){}
struct Layer_LayerMemberDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Layer_LayerMemberDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~Layer_LayerMemberDefaultTypeInternal() {}
  union {
    Layer_LayerMember _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Layer_LayerMemberDefaultTypeInternal _Layer_LayerMember_default_instance_;
PROTOBUF_CONSTEXPR Layer::Layer(
    ::_pbi::ConstantInitialized)
  : members_()
  , id_(0u)
  , num_slots_(0u)
  , salt_(0u)
  , entropy_mode_(0)
{}
struct LayerDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LayerDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~LayerDefaultTypeInternal() {}
  union {
    Layer _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LayerDefaultTypeInternal _Layer_default_instance_;
PROTOBUF_CONSTEXPR LayerMemberReference::LayerMemberReference(
    ::_pbi::ConstantInitialized)
  : layer_id_(0u)
  , layer_member_id_(0u){}
struct LayerMemberReferenceDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LayerMemberReferenceDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~LayerMemberReferenceDefaultTypeInternal() {}
  union {
    LayerMemberReference _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LayerMemberReferenceDefaultTypeInternal _LayerMemberReference_default_instance_;
}  // namespace variations
namespace variations {
bool Layer_EntropyMode_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> Layer_EntropyMode_strings[2] = {};

static const char Layer_EntropyMode_names[] =
  "DEFAULT"
  "LOW";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry Layer_EntropyMode_entries[] = {
  { {Layer_EntropyMode_names + 0, 7}, 0 },
  { {Layer_EntropyMode_names + 7, 3}, 1 },
};

static const int Layer_EntropyMode_entries_by_number[] = {
  0, // 0 -> DEFAULT
  1, // 1 -> LOW
};

const std::string& Layer_EntropyMode_Name(
    Layer_EntropyMode value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          Layer_EntropyMode_entries,
          Layer_EntropyMode_entries_by_number,
          2, Layer_EntropyMode_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      Layer_EntropyMode_entries,
      Layer_EntropyMode_entries_by_number,
      2, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     Layer_EntropyMode_strings[idx].get();
}
bool Layer_EntropyMode_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Layer_EntropyMode* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      Layer_EntropyMode_entries, 2, name, &int_value);
  if (success) {
    *value = static_cast<Layer_EntropyMode>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr Layer_EntropyMode Layer::DEFAULT;
constexpr Layer_EntropyMode Layer::LOW;
constexpr Layer_EntropyMode Layer::EntropyMode_MIN;
constexpr Layer_EntropyMode Layer::EntropyMode_MAX;
constexpr int Layer::EntropyMode_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class Layer_LayerMember_SlotRange::_Internal {
 public:
  using HasBits = decltype(std::declval<Layer_LayerMember_SlotRange>()._has_bits_);
  static void set_has_start(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_end(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

Layer_LayerMember_SlotRange::Layer_LayerMember_SlotRange(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:variations.Layer.LayerMember.SlotRange)
}
Layer_LayerMember_SlotRange::Layer_LayerMember_SlotRange(const Layer_LayerMember_SlotRange& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&start_, &from.start_,
    static_cast<size_t>(reinterpret_cast<char*>(&end_) -
    reinterpret_cast<char*>(&start_)) + sizeof(end_));
  // @@protoc_insertion_point(copy_constructor:variations.Layer.LayerMember.SlotRange)
}

inline void Layer_LayerMember_SlotRange::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&start_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&end_) -
    reinterpret_cast<char*>(&start_)) + sizeof(end_));
}

Layer_LayerMember_SlotRange::~Layer_LayerMember_SlotRange() {
  // @@protoc_insertion_point(destructor:variations.Layer.LayerMember.SlotRange)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Layer_LayerMember_SlotRange::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Layer_LayerMember_SlotRange::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Layer_LayerMember_SlotRange::Clear() {
// @@protoc_insertion_point(message_clear_start:variations.Layer.LayerMember.SlotRange)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&start_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&end_) -
        reinterpret_cast<char*>(&start_)) + sizeof(end_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Layer_LayerMember_SlotRange::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 start = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_start(&has_bits);
          start_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 end = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_end(&has_bits);
          end_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
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

uint8_t* Layer_LayerMember_SlotRange::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:variations.Layer.LayerMember.SlotRange)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 start = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_start(), target);
  }

  // optional uint32 end = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_end(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:variations.Layer.LayerMember.SlotRange)
  return target;
}

size_t Layer_LayerMember_SlotRange::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:variations.Layer.LayerMember.SlotRange)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional uint32 start = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_start());
    }

    // optional uint32 end = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_end());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Layer_LayerMember_SlotRange::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Layer_LayerMember_SlotRange*>(
      &from));
}

void Layer_LayerMember_SlotRange::MergeFrom(const Layer_LayerMember_SlotRange& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:variations.Layer.LayerMember.SlotRange)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      start_ = from.start_;
    }
    if (cached_has_bits & 0x00000002u) {
      end_ = from.end_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Layer_LayerMember_SlotRange::CopyFrom(const Layer_LayerMember_SlotRange& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:variations.Layer.LayerMember.SlotRange)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Layer_LayerMember_SlotRange::IsInitialized() const {
  return true;
}

void Layer_LayerMember_SlotRange::InternalSwap(Layer_LayerMember_SlotRange* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Layer_LayerMember_SlotRange, end_)
      + sizeof(Layer_LayerMember_SlotRange::end_)
      - PROTOBUF_FIELD_OFFSET(Layer_LayerMember_SlotRange, start_)>(
          reinterpret_cast<char*>(&start_),
          reinterpret_cast<char*>(&other->start_));
}

std::string Layer_LayerMember_SlotRange::GetTypeName() const {
  return "variations.Layer.LayerMember.SlotRange";
}


// ===================================================================

class Layer_LayerMember::_Internal {
 public:
  using HasBits = decltype(std::declval<Layer_LayerMember>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

Layer_LayerMember::Layer_LayerMember(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  slots_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:variations.Layer.LayerMember)
}
Layer_LayerMember::Layer_LayerMember(const Layer_LayerMember& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_),
      slots_(from.slots_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:variations.Layer.LayerMember)
}

inline void Layer_LayerMember::SharedCtor() {
id_ = 0u;
}

Layer_LayerMember::~Layer_LayerMember() {
  // @@protoc_insertion_point(destructor:variations.Layer.LayerMember)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Layer_LayerMember::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Layer_LayerMember::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Layer_LayerMember::Clear() {
// @@protoc_insertion_point(message_clear_start:variations.Layer.LayerMember)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  slots_.Clear();
  id_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Layer_LayerMember::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .variations.Layer.LayerMember.SlotRange slots = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_slots(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* Layer_LayerMember::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:variations.Layer.LayerMember)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // repeated .variations.Layer.LayerMember.SlotRange slots = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_slots_size()); i < n; i++) {
    const auto& repfield = this->_internal_slots(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:variations.Layer.LayerMember)
  return target;
}

size_t Layer_LayerMember::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:variations.Layer.LayerMember)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .variations.Layer.LayerMember.SlotRange slots = 2;
  total_size += 1UL * this->_internal_slots_size();
  for (const auto& msg : this->slots_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional uint32 id = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_id());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Layer_LayerMember::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Layer_LayerMember*>(
      &from));
}

void Layer_LayerMember::MergeFrom(const Layer_LayerMember& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:variations.Layer.LayerMember)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  slots_.MergeFrom(from.slots_);
  if (from._internal_has_id()) {
    _internal_set_id(from._internal_id());
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Layer_LayerMember::CopyFrom(const Layer_LayerMember& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:variations.Layer.LayerMember)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Layer_LayerMember::IsInitialized() const {
  return true;
}

void Layer_LayerMember::InternalSwap(Layer_LayerMember* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  slots_.InternalSwap(&other->slots_);
  swap(id_, other->id_);
}

std::string Layer_LayerMember::GetTypeName() const {
  return "variations.Layer.LayerMember";
}


// ===================================================================

class Layer::_Internal {
 public:
  using HasBits = decltype(std::declval<Layer>()._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_num_slots(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_salt(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static void set_has_entropy_mode(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
};

Layer::Layer(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  members_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:variations.Layer)
}
Layer::Layer(const Layer& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_),
      members_(from.members_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&id_, &from.id_,
    static_cast<size_t>(reinterpret_cast<char*>(&entropy_mode_) -
    reinterpret_cast<char*>(&id_)) + sizeof(entropy_mode_));
  // @@protoc_insertion_point(copy_constructor:variations.Layer)
}

inline void Layer::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&id_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&entropy_mode_) -
    reinterpret_cast<char*>(&id_)) + sizeof(entropy_mode_));
}

Layer::~Layer() {
  // @@protoc_insertion_point(destructor:variations.Layer)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Layer::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void Layer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void Layer::Clear() {
// @@protoc_insertion_point(message_clear_start:variations.Layer)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  members_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    ::memset(&id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&entropy_mode_) -
        reinterpret_cast<char*>(&id_)) + sizeof(entropy_mode_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* Layer::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_id(&has_bits);
          id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 num_slots = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_num_slots(&has_bits);
          num_slots_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .variations.Layer.LayerMember members = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_members(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional uint32 salt = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_salt(&has_bits);
          salt_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .variations.Layer.EntropyMode entropy_mode = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::variations::Layer_EntropyMode_IsValid(val))) {
            _internal_set_entropy_mode(static_cast<::variations::Layer_EntropyMode>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(5, val, mutable_unknown_fields());
          }
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

uint8_t* Layer::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:variations.Layer)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_id(), target);
  }

  // optional uint32 num_slots = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_num_slots(), target);
  }

  // repeated .variations.Layer.LayerMember members = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_members_size()); i < n; i++) {
    const auto& repfield = this->_internal_members(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // optional uint32 salt = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(4, this->_internal_salt(), target);
  }

  // optional .variations.Layer.EntropyMode entropy_mode = 5;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      5, this->_internal_entropy_mode(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:variations.Layer)
  return target;
}

size_t Layer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:variations.Layer)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .variations.Layer.LayerMember members = 3;
  total_size += 1UL * this->_internal_members_size();
  for (const auto& msg : this->members_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    // optional uint32 id = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_id());
    }

    // optional uint32 num_slots = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_num_slots());
    }

    // optional uint32 salt = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_salt());
    }

    // optional .variations.Layer.EntropyMode entropy_mode = 5;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_entropy_mode());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Layer::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const Layer*>(
      &from));
}

void Layer::MergeFrom(const Layer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:variations.Layer)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  members_.MergeFrom(from.members_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000000fu) {
    if (cached_has_bits & 0x00000001u) {
      id_ = from.id_;
    }
    if (cached_has_bits & 0x00000002u) {
      num_slots_ = from.num_slots_;
    }
    if (cached_has_bits & 0x00000004u) {
      salt_ = from.salt_;
    }
    if (cached_has_bits & 0x00000008u) {
      entropy_mode_ = from.entropy_mode_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void Layer::CopyFrom(const Layer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:variations.Layer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Layer::IsInitialized() const {
  return true;
}

void Layer::InternalSwap(Layer* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  members_.InternalSwap(&other->members_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Layer, entropy_mode_)
      + sizeof(Layer::entropy_mode_)
      - PROTOBUF_FIELD_OFFSET(Layer, id_)>(
          reinterpret_cast<char*>(&id_),
          reinterpret_cast<char*>(&other->id_));
}

std::string Layer::GetTypeName() const {
  return "variations.Layer";
}


// ===================================================================

class LayerMemberReference::_Internal {
 public:
  using HasBits = decltype(std::declval<LayerMemberReference>()._has_bits_);
  static void set_has_layer_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_layer_member_id(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

LayerMemberReference::LayerMemberReference(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:variations.LayerMemberReference)
}
LayerMemberReference::LayerMemberReference(const LayerMemberReference& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&layer_id_, &from.layer_id_,
    static_cast<size_t>(reinterpret_cast<char*>(&layer_member_id_) -
    reinterpret_cast<char*>(&layer_id_)) + sizeof(layer_member_id_));
  // @@protoc_insertion_point(copy_constructor:variations.LayerMemberReference)
}

inline void LayerMemberReference::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&layer_id_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&layer_member_id_) -
    reinterpret_cast<char*>(&layer_id_)) + sizeof(layer_member_id_));
}

LayerMemberReference::~LayerMemberReference() {
  // @@protoc_insertion_point(destructor:variations.LayerMemberReference)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void LayerMemberReference::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void LayerMemberReference::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void LayerMemberReference::Clear() {
// @@protoc_insertion_point(message_clear_start:variations.LayerMemberReference)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&layer_id_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&layer_member_id_) -
        reinterpret_cast<char*>(&layer_id_)) + sizeof(layer_member_id_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* LayerMemberReference::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint32 layer_id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_layer_id(&has_bits);
          layer_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional uint32 layer_member_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_layer_member_id(&has_bits);
          layer_member_id_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
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

uint8_t* LayerMemberReference::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:variations.LayerMemberReference)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 layer_id = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(1, this->_internal_layer_id(), target);
  }

  // optional uint32 layer_member_id = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(2, this->_internal_layer_member_id(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:variations.LayerMemberReference)
  return target;
}

size_t LayerMemberReference::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:variations.LayerMemberReference)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional uint32 layer_id = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_layer_id());
    }

    // optional uint32 layer_member_id = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_layer_member_id());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void LayerMemberReference::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const LayerMemberReference*>(
      &from));
}

void LayerMemberReference::MergeFrom(const LayerMemberReference& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:variations.LayerMemberReference)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      layer_id_ = from.layer_id_;
    }
    if (cached_has_bits & 0x00000002u) {
      layer_member_id_ = from.layer_member_id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void LayerMemberReference::CopyFrom(const LayerMemberReference& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:variations.LayerMemberReference)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LayerMemberReference::IsInitialized() const {
  return true;
}

void LayerMemberReference::InternalSwap(LayerMemberReference* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LayerMemberReference, layer_member_id_)
      + sizeof(LayerMemberReference::layer_member_id_)
      - PROTOBUF_FIELD_OFFSET(LayerMemberReference, layer_id_)>(
          reinterpret_cast<char*>(&layer_id_),
          reinterpret_cast<char*>(&other->layer_id_));
}

std::string LayerMemberReference::GetTypeName() const {
  return "variations.LayerMemberReference";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace variations
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::variations::Layer_LayerMember_SlotRange*
Arena::CreateMaybeMessage< ::variations::Layer_LayerMember_SlotRange >(Arena* arena) {
  return Arena::CreateMessageInternal< ::variations::Layer_LayerMember_SlotRange >(arena);
}
template<> PROTOBUF_NOINLINE ::variations::Layer_LayerMember*
Arena::CreateMaybeMessage< ::variations::Layer_LayerMember >(Arena* arena) {
  return Arena::CreateMessageInternal< ::variations::Layer_LayerMember >(arena);
}
template<> PROTOBUF_NOINLINE ::variations::Layer*
Arena::CreateMaybeMessage< ::variations::Layer >(Arena* arena) {
  return Arena::CreateMessageInternal< ::variations::Layer >(arena);
}
template<> PROTOBUF_NOINLINE ::variations::LayerMemberReference*
Arena::CreateMaybeMessage< ::variations::LayerMemberReference >(Arena* arena) {
  return Arena::CreateMessageInternal< ::variations::LayerMemberReference >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
