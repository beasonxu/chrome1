// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/feed/core/proto/v2/wire/xsurface_container.proto

#include "components/feed/core/proto/v2/wire/xsurface_container.pb.h"

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

namespace feedwire {
PROTOBUF_CONSTEXPR XSurfaceContainer::XSurfaceContainer(
    ::_pbi::ConstantInitialized)
  : render_data_(&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}){}
struct XSurfaceContainerDefaultTypeInternal {
  PROTOBUF_CONSTEXPR XSurfaceContainerDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~XSurfaceContainerDefaultTypeInternal() {}
  union {
    XSurfaceContainer _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 XSurfaceContainerDefaultTypeInternal _XSurfaceContainer_default_instance_;
}  // namespace feedwire
namespace feedwire {

// ===================================================================

class XSurfaceContainer::_Internal {
 public:
  using HasBits = decltype(std::declval<XSurfaceContainer>()._has_bits_);
  static void set_has_render_data(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

XSurfaceContainer::XSurfaceContainer(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:feedwire.XSurfaceContainer)
}
XSurfaceContainer::XSurfaceContainer(const XSurfaceContainer& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  render_data_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    render_data_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (from._internal_has_render_data()) {
    render_data_.Set(from._internal_render_data(), 
      GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:feedwire.XSurfaceContainer)
}

inline void XSurfaceContainer::SharedCtor() {
render_data_.InitDefault();
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  render_data_.Set("", GetArenaForAllocation());
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

XSurfaceContainer::~XSurfaceContainer() {
  // @@protoc_insertion_point(destructor:feedwire.XSurfaceContainer)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void XSurfaceContainer::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  render_data_.Destroy();
}

void XSurfaceContainer::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void XSurfaceContainer::Clear() {
// @@protoc_insertion_point(message_clear_start:feedwire.XSurfaceContainer)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    render_data_.ClearNonDefaultToEmpty();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* XSurfaceContainer::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional bytes render_data = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_render_data();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
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

uint8_t* XSurfaceContainer::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:feedwire.XSurfaceContainer)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional bytes render_data = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->WriteBytesMaybeAliased(
        1, this->_internal_render_data(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:feedwire.XSurfaceContainer)
  return target;
}

size_t XSurfaceContainer::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:feedwire.XSurfaceContainer)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional bytes render_data = 1;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_render_data());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void XSurfaceContainer::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const XSurfaceContainer*>(
      &from));
}

void XSurfaceContainer::MergeFrom(const XSurfaceContainer& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:feedwire.XSurfaceContainer)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_render_data()) {
    _internal_set_render_data(from._internal_render_data());
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void XSurfaceContainer::CopyFrom(const XSurfaceContainer& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:feedwire.XSurfaceContainer)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool XSurfaceContainer::IsInitialized() const {
  return true;
}

void XSurfaceContainer::InternalSwap(XSurfaceContainer* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &render_data_, lhs_arena,
      &other->render_data_, rhs_arena
  );
}

std::string XSurfaceContainer::GetTypeName() const {
  return "feedwire.XSurfaceContainer";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace feedwire
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::feedwire::XSurfaceContainer*
Arena::CreateMaybeMessage< ::feedwire::XSurfaceContainer >(Arena* arena) {
  return Arena::CreateMessageInternal< ::feedwire::XSurfaceContainer >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
