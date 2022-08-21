// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/perfetto/trace/track_event/chrome_thread_descriptor.proto

#include "protos/perfetto/trace/track_event/chrome_thread_descriptor.pb.h"

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

namespace perfetto {
namespace protos {
PROTOBUF_CONSTEXPR ChromeThreadDescriptor::ChromeThreadDescriptor(
    ::_pbi::ConstantInitialized)
  : thread_type_(0)

  , legacy_sort_index_(0){}
struct ChromeThreadDescriptorDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChromeThreadDescriptorDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChromeThreadDescriptorDefaultTypeInternal() {}
  union {
    ChromeThreadDescriptor _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChromeThreadDescriptorDefaultTypeInternal _ChromeThreadDescriptor_default_instance_;
}  // namespace protos
}  // namespace perfetto
namespace perfetto {
namespace protos {
bool ChromeThreadDescriptor_ThreadType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
    case 25:
    case 26:
    case 27:
    case 28:
    case 29:
    case 30:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 38:
    case 39:
    case 40:
    case 41:
    case 50:
    case 51:
      return true;
    default:
      return false;
  }
}

static ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<std::string> ChromeThreadDescriptor_ThreadType_strings[44] = {};

static const char ChromeThreadDescriptor_ThreadType_names[] =
  "THREAD_AUDIO_INPUTDEVICE"
  "THREAD_AUDIO_OUTPUTDEVICE"
  "THREAD_BROWSER_IO"
  "THREAD_BROWSER_MAIN"
  "THREAD_BROWSER_WATCHDOG"
  "THREAD_CACHE_BLOCKFILE"
  "THREAD_CHILD_IO"
  "THREAD_COMPOSITOR"
  "THREAD_COMPOSITOR_WORKER"
  "THREAD_DATABASE"
  "THREAD_DEVTOOLSADB"
  "THREAD_DXA_VIDEODECODER"
  "THREAD_GAMEPAD_POLLING"
  "THREAD_GPU_MAIN"
  "THREAD_GPU_MEMORY"
  "THREAD_GPU_VSYNC"
  "THREAD_GPU_WATCHDOG"
  "THREAD_IO"
  "THREAD_LOADER_LOCK_SAMPLER"
  "THREAD_MAIN"
  "THREAD_MEDIA"
  "THREAD_MEMORY_INFRA"
  "THREAD_NETWORKCONFIGWATCHER"
  "THREAD_NETWORK_SERVICE"
  "THREAD_POOL_BG_BLOCKING"
  "THREAD_POOL_BG_WORKER"
  "THREAD_POOL_FG_BLOCKING"
  "THREAD_POOL_FG_WORKER"
  "THREAD_POOL_SERVICE"
  "THREAD_PPAPI_MAIN"
  "THREAD_PROXYRESOLVER"
  "THREAD_RENDERER_MAIN"
  "THREAD_SAMPLING_PROFILER"
  "THREAD_SERVICE_WORKER"
  "THREAD_SWAPPER"
  "THREAD_UNSPECIFIED"
  "THREAD_UTILITY_MAIN"
  "THREAD_VIZ_COMPOSITOR"
  "THREAD_WASAPI_RENDER"
  "THREAD_WEBCRYPTO"
  "THREAD_WEBRTC_NETWORK"
  "THREAD_WEBRTC_SIGNALING"
  "THREAD_WEBRTC_WORKER"
  "THREAD_WINDOW_OWNER";

static const ::PROTOBUF_NAMESPACE_ID::internal::EnumEntry ChromeThreadDescriptor_ThreadType_entries[] = {
  { {ChromeThreadDescriptor_ThreadType_names + 0, 24}, 22 },
  { {ChromeThreadDescriptor_ThreadType_names + 24, 25}, 21 },
  { {ChromeThreadDescriptor_ThreadType_names + 49, 17}, 14 },
  { {ChromeThreadDescriptor_ThreadType_names + 66, 19}, 15 },
  { {ChromeThreadDescriptor_ThreadType_names + 85, 23}, 26 },
  { {ChromeThreadDescriptor_ThreadType_names + 108, 22}, 19 },
  { {ChromeThreadDescriptor_ThreadType_names + 130, 15}, 13 },
  { {ChromeThreadDescriptor_ThreadType_names + 145, 17}, 8 },
  { {ChromeThreadDescriptor_ThreadType_names + 162, 24}, 10 },
  { {ChromeThreadDescriptor_ThreadType_names + 186, 15}, 36 },
  { {ChromeThreadDescriptor_ThreadType_names + 201, 18}, 38 },
  { {ChromeThreadDescriptor_ThreadType_names + 219, 23}, 25 },
  { {ChromeThreadDescriptor_ThreadType_names + 242, 22}, 34 },
  { {ChromeThreadDescriptor_ThreadType_names + 264, 15}, 18 },
  { {ChromeThreadDescriptor_ThreadType_names + 279, 17}, 23 },
  { {ChromeThreadDescriptor_ThreadType_names + 296, 16}, 24 },
  { {ChromeThreadDescriptor_ThreadType_names + 312, 19}, 32 },
  { {ChromeThreadDescriptor_ThreadType_names + 331, 9}, 2 },
  { {ChromeThreadDescriptor_ThreadType_names + 340, 26}, 41 },
  { {ChromeThreadDescriptor_ThreadType_names + 366, 11}, 1 },
  { {ChromeThreadDescriptor_ThreadType_names + 377, 12}, 20 },
  { {ChromeThreadDescriptor_ThreadType_names + 389, 19}, 50 },
  { {ChromeThreadDescriptor_ThreadType_names + 408, 27}, 39 },
  { {ChromeThreadDescriptor_ThreadType_names + 435, 22}, 12 },
  { {ChromeThreadDescriptor_ThreadType_names + 457, 23}, 6 },
  { {ChromeThreadDescriptor_ThreadType_names + 480, 21}, 3 },
  { {ChromeThreadDescriptor_ThreadType_names + 501, 23}, 5 },
  { {ChromeThreadDescriptor_ThreadType_names + 524, 21}, 4 },
  { {ChromeThreadDescriptor_ThreadType_names + 545, 19}, 7 },
  { {ChromeThreadDescriptor_ThreadType_names + 564, 17}, 31 },
  { {ChromeThreadDescriptor_ThreadType_names + 581, 20}, 37 },
  { {ChromeThreadDescriptor_ThreadType_names + 601, 20}, 16 },
  { {ChromeThreadDescriptor_ThreadType_names + 621, 24}, 51 },
  { {ChromeThreadDescriptor_ThreadType_names + 645, 21}, 11 },
  { {ChromeThreadDescriptor_ThreadType_names + 666, 14}, 33 },
  { {ChromeThreadDescriptor_ThreadType_names + 680, 18}, 0 },
  { {ChromeThreadDescriptor_ThreadType_names + 698, 19}, 17 },
  { {ChromeThreadDescriptor_ThreadType_names + 717, 21}, 9 },
  { {ChromeThreadDescriptor_ThreadType_names + 738, 20}, 40 },
  { {ChromeThreadDescriptor_ThreadType_names + 758, 16}, 35 },
  { {ChromeThreadDescriptor_ThreadType_names + 774, 21}, 27 },
  { {ChromeThreadDescriptor_ThreadType_names + 795, 23}, 29 },
  { {ChromeThreadDescriptor_ThreadType_names + 818, 20}, 30 },
  { {ChromeThreadDescriptor_ThreadType_names + 838, 19}, 28 },
};

static const int ChromeThreadDescriptor_ThreadType_entries_by_number[] = {
  35, // 0 -> THREAD_UNSPECIFIED
  19, // 1 -> THREAD_MAIN
  17, // 2 -> THREAD_IO
  25, // 3 -> THREAD_POOL_BG_WORKER
  27, // 4 -> THREAD_POOL_FG_WORKER
  26, // 5 -> THREAD_POOL_FG_BLOCKING
  24, // 6 -> THREAD_POOL_BG_BLOCKING
  28, // 7 -> THREAD_POOL_SERVICE
  7, // 8 -> THREAD_COMPOSITOR
  37, // 9 -> THREAD_VIZ_COMPOSITOR
  8, // 10 -> THREAD_COMPOSITOR_WORKER
  33, // 11 -> THREAD_SERVICE_WORKER
  23, // 12 -> THREAD_NETWORK_SERVICE
  6, // 13 -> THREAD_CHILD_IO
  2, // 14 -> THREAD_BROWSER_IO
  3, // 15 -> THREAD_BROWSER_MAIN
  31, // 16 -> THREAD_RENDERER_MAIN
  36, // 17 -> THREAD_UTILITY_MAIN
  13, // 18 -> THREAD_GPU_MAIN
  5, // 19 -> THREAD_CACHE_BLOCKFILE
  20, // 20 -> THREAD_MEDIA
  1, // 21 -> THREAD_AUDIO_OUTPUTDEVICE
  0, // 22 -> THREAD_AUDIO_INPUTDEVICE
  14, // 23 -> THREAD_GPU_MEMORY
  15, // 24 -> THREAD_GPU_VSYNC
  11, // 25 -> THREAD_DXA_VIDEODECODER
  4, // 26 -> THREAD_BROWSER_WATCHDOG
  40, // 27 -> THREAD_WEBRTC_NETWORK
  43, // 28 -> THREAD_WINDOW_OWNER
  41, // 29 -> THREAD_WEBRTC_SIGNALING
  42, // 30 -> THREAD_WEBRTC_WORKER
  29, // 31 -> THREAD_PPAPI_MAIN
  16, // 32 -> THREAD_GPU_WATCHDOG
  34, // 33 -> THREAD_SWAPPER
  12, // 34 -> THREAD_GAMEPAD_POLLING
  39, // 35 -> THREAD_WEBCRYPTO
  9, // 36 -> THREAD_DATABASE
  30, // 37 -> THREAD_PROXYRESOLVER
  10, // 38 -> THREAD_DEVTOOLSADB
  22, // 39 -> THREAD_NETWORKCONFIGWATCHER
  38, // 40 -> THREAD_WASAPI_RENDER
  18, // 41 -> THREAD_LOADER_LOCK_SAMPLER
  21, // 50 -> THREAD_MEMORY_INFRA
  32, // 51 -> THREAD_SAMPLING_PROFILER
};

const std::string& ChromeThreadDescriptor_ThreadType_Name(
    ChromeThreadDescriptor_ThreadType value) {
  static const bool dummy =
      ::PROTOBUF_NAMESPACE_ID::internal::InitializeEnumStrings(
          ChromeThreadDescriptor_ThreadType_entries,
          ChromeThreadDescriptor_ThreadType_entries_by_number,
          44, ChromeThreadDescriptor_ThreadType_strings);
  (void) dummy;
  int idx = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumName(
      ChromeThreadDescriptor_ThreadType_entries,
      ChromeThreadDescriptor_ThreadType_entries_by_number,
      44, value);
  return idx == -1 ? ::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString() :
                     ChromeThreadDescriptor_ThreadType_strings[idx].get();
}
bool ChromeThreadDescriptor_ThreadType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ChromeThreadDescriptor_ThreadType* value) {
  int int_value;
  bool success = ::PROTOBUF_NAMESPACE_ID::internal::LookUpEnumValue(
      ChromeThreadDescriptor_ThreadType_entries, 44, name, &int_value);
  if (success) {
    *value = static_cast<ChromeThreadDescriptor_ThreadType>(int_value);
  }
  return success;
}
#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_UNSPECIFIED;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_MAIN;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_IO;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_POOL_BG_WORKER;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_POOL_FG_WORKER;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_POOL_FG_BLOCKING;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_POOL_BG_BLOCKING;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_POOL_SERVICE;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_COMPOSITOR;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_VIZ_COMPOSITOR;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_COMPOSITOR_WORKER;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_SERVICE_WORKER;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_NETWORK_SERVICE;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_CHILD_IO;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_BROWSER_IO;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_BROWSER_MAIN;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_RENDERER_MAIN;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_UTILITY_MAIN;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_GPU_MAIN;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_CACHE_BLOCKFILE;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_MEDIA;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_AUDIO_OUTPUTDEVICE;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_AUDIO_INPUTDEVICE;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_GPU_MEMORY;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_GPU_VSYNC;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_DXA_VIDEODECODER;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_BROWSER_WATCHDOG;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_WEBRTC_NETWORK;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_WINDOW_OWNER;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_WEBRTC_SIGNALING;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_WEBRTC_WORKER;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_PPAPI_MAIN;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_GPU_WATCHDOG;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_SWAPPER;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_GAMEPAD_POLLING;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_WEBCRYPTO;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_DATABASE;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_PROXYRESOLVER;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_DEVTOOLSADB;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_NETWORKCONFIGWATCHER;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_WASAPI_RENDER;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_LOADER_LOCK_SAMPLER;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_MEMORY_INFRA;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::THREAD_SAMPLING_PROFILER;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::ThreadType_MIN;
constexpr ChromeThreadDescriptor_ThreadType ChromeThreadDescriptor::ThreadType_MAX;
constexpr int ChromeThreadDescriptor::ThreadType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class ChromeThreadDescriptor::_Internal {
 public:
  using HasBits = decltype(std::declval<ChromeThreadDescriptor>()._has_bits_);
  static void set_has_thread_type(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_legacy_sort_index(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
};

ChromeThreadDescriptor::ChromeThreadDescriptor(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:perfetto.protos.ChromeThreadDescriptor)
}
ChromeThreadDescriptor::ChromeThreadDescriptor(const ChromeThreadDescriptor& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  ::memcpy(&thread_type_, &from.thread_type_,
    static_cast<size_t>(reinterpret_cast<char*>(&legacy_sort_index_) -
    reinterpret_cast<char*>(&thread_type_)) + sizeof(legacy_sort_index_));
  // @@protoc_insertion_point(copy_constructor:perfetto.protos.ChromeThreadDescriptor)
}

inline void ChromeThreadDescriptor::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&thread_type_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&legacy_sort_index_) -
    reinterpret_cast<char*>(&thread_type_)) + sizeof(legacy_sort_index_));
}

ChromeThreadDescriptor::~ChromeThreadDescriptor() {
  // @@protoc_insertion_point(destructor:perfetto.protos.ChromeThreadDescriptor)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ChromeThreadDescriptor::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ChromeThreadDescriptor::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ChromeThreadDescriptor::Clear() {
// @@protoc_insertion_point(message_clear_start:perfetto.protos.ChromeThreadDescriptor)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    ::memset(&thread_type_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&legacy_sort_index_) -
        reinterpret_cast<char*>(&thread_type_)) + sizeof(legacy_sort_index_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* ChromeThreadDescriptor::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional .perfetto.protos.ChromeThreadDescriptor.ThreadType thread_type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::perfetto::protos::ChromeThreadDescriptor_ThreadType_IsValid(val))) {
            _internal_set_thread_type(static_cast<::perfetto::protos::ChromeThreadDescriptor_ThreadType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(1, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional int32 legacy_sort_index = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _Internal::set_has_legacy_sort_index(&has_bits);
          legacy_sort_index_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* ChromeThreadDescriptor::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:perfetto.protos.ChromeThreadDescriptor)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional .perfetto.protos.ChromeThreadDescriptor.ThreadType thread_type = 1;
  if (cached_has_bits & 0x00000001u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_thread_type(), target);
  }

  // optional int32 legacy_sort_index = 2;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_legacy_sort_index(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:perfetto.protos.ChromeThreadDescriptor)
  return target;
}

size_t ChromeThreadDescriptor::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:perfetto.protos.ChromeThreadDescriptor)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    // optional .perfetto.protos.ChromeThreadDescriptor.ThreadType thread_type = 1;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_thread_type());
    }

    // optional int32 legacy_sort_index = 2;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_legacy_sort_index());
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ChromeThreadDescriptor::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const ChromeThreadDescriptor*>(
      &from));
}

void ChromeThreadDescriptor::MergeFrom(const ChromeThreadDescriptor& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:perfetto.protos.ChromeThreadDescriptor)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      thread_type_ = from.thread_type_;
    }
    if (cached_has_bits & 0x00000002u) {
      legacy_sort_index_ = from.legacy_sort_index_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void ChromeThreadDescriptor::CopyFrom(const ChromeThreadDescriptor& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:perfetto.protos.ChromeThreadDescriptor)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChromeThreadDescriptor::IsInitialized() const {
  return true;
}

void ChromeThreadDescriptor::InternalSwap(ChromeThreadDescriptor* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ChromeThreadDescriptor, legacy_sort_index_)
      + sizeof(ChromeThreadDescriptor::legacy_sort_index_)
      - PROTOBUF_FIELD_OFFSET(ChromeThreadDescriptor, thread_type_)>(
          reinterpret_cast<char*>(&thread_type_),
          reinterpret_cast<char*>(&other->thread_type_));
}

std::string ChromeThreadDescriptor::GetTypeName() const {
  return "perfetto.protos.ChromeThreadDescriptor";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace protos
}  // namespace perfetto
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::perfetto::protos::ChromeThreadDescriptor*
Arena::CreateMaybeMessage< ::perfetto::protos::ChromeThreadDescriptor >(Arena* arena) {
  return Arena::CreateMessageInternal< ::perfetto::protos::ChromeThreadDescriptor >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
