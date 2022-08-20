// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/feed/core/proto/v2/wire/feed_response.proto

#include "components/feed/core/proto/v2/wire/feed_response.pb.h"

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
PROTOBUF_CONSTEXPR FeedResponse::FeedResponse(
    ::_pbi::ConstantInitialized)
  : data_operation_()
  , feed_response_metadata_(nullptr){}
struct FeedResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FeedResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FeedResponseDefaultTypeInternal() {}
  union {
    FeedResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FeedResponseDefaultTypeInternal _FeedResponse_default_instance_;
PROTOBUF_CONSTEXPR FeedResponseMetadata::FeedResponseMetadata(
    ::_pbi::ConstantInitialized)
  : event_id_(nullptr)
  , server_experiment_data_(nullptr)
  , content_lifetime_(nullptr)
  , info_card_serving_info_(nullptr)
  , chrome_feed_response_metadata_(nullptr)
  , response_time_ms_(int64_t{0})
  , pinned_content_fulfilled_(false){}
struct FeedResponseMetadataDefaultTypeInternal {
  PROTOBUF_CONSTEXPR FeedResponseMetadataDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~FeedResponseMetadataDefaultTypeInternal() {}
  union {
    FeedResponseMetadata _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT_WITH_PTR PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 FeedResponseMetadataDefaultTypeInternal _FeedResponseMetadata_default_instance_;
}  // namespace feedwire
namespace feedwire {

// ===================================================================

class FeedResponse::_Internal {
 public:
  using HasBits = decltype(std::declval<FeedResponse>()._has_bits_);
  static const ::feedwire::FeedResponseMetadata& feed_response_metadata(const FeedResponse* msg);
  static void set_has_feed_response_metadata(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::feedwire::FeedResponseMetadata&
FeedResponse::_Internal::feed_response_metadata(const FeedResponse* msg) {
  return *msg->feed_response_metadata_;
}
void FeedResponse::clear_data_operation() {
  data_operation_.Clear();
}
FeedResponse::FeedResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned),
  data_operation_(arena) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:feedwire.FeedResponse)
}
FeedResponse::FeedResponse(const FeedResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_),
      data_operation_(from.data_operation_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  if (from._internal_has_feed_response_metadata()) {
    feed_response_metadata_ = new ::feedwire::FeedResponseMetadata(*from.feed_response_metadata_);
  } else {
    feed_response_metadata_ = nullptr;
  }
  // @@protoc_insertion_point(copy_constructor:feedwire.FeedResponse)
}

inline void FeedResponse::SharedCtor() {
feed_response_metadata_ = nullptr;
}

FeedResponse::~FeedResponse() {
  // @@protoc_insertion_point(destructor:feedwire.FeedResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FeedResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete feed_response_metadata_;
}

void FeedResponse::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FeedResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:feedwire.FeedResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  data_operation_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(feed_response_metadata_ != nullptr);
    feed_response_metadata_->Clear();
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FeedResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .feedwire.DataOperation data_operation = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_data_operation(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // optional .feedwire.FeedResponseMetadata feed_response_metadata = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_feed_response_metadata(), ptr);
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

uint8_t* FeedResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:feedwire.FeedResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .feedwire.DataOperation data_operation = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_data_operation_size()); i < n; i++) {
    const auto& repfield = this->_internal_data_operation(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  cached_has_bits = _has_bits_[0];
  // optional .feedwire.FeedResponseMetadata feed_response_metadata = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::feed_response_metadata(this),
        _Internal::feed_response_metadata(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:feedwire.FeedResponse)
  return target;
}

size_t FeedResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:feedwire.FeedResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .feedwire.DataOperation data_operation = 1;
  total_size += 1UL * this->_internal_data_operation_size();
  for (const auto& msg : this->data_operation_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // optional .feedwire.FeedResponseMetadata feed_response_metadata = 2;
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *feed_response_metadata_);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FeedResponse::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const FeedResponse*>(
      &from));
}

void FeedResponse::MergeFrom(const FeedResponse& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:feedwire.FeedResponse)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  data_operation_.MergeFrom(from.data_operation_);
  if (from._internal_has_feed_response_metadata()) {
    _internal_mutable_feed_response_metadata()->::feedwire::FeedResponseMetadata::MergeFrom(from._internal_feed_response_metadata());
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FeedResponse::CopyFrom(const FeedResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:feedwire.FeedResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FeedResponse::IsInitialized() const {
  if (_internal_has_feed_response_metadata()) {
    if (!feed_response_metadata_->IsInitialized()) return false;
  }
  return true;
}

void FeedResponse::InternalSwap(FeedResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  data_operation_.InternalSwap(&other->data_operation_);
  swap(feed_response_metadata_, other->feed_response_metadata_);
}

std::string FeedResponse::GetTypeName() const {
  return "feedwire.FeedResponse";
}


// ===================================================================

class FeedResponseMetadata::_Internal {
 public:
  using HasBits = decltype(std::declval<FeedResponseMetadata>()._has_bits_);
  static void set_has_response_time_ms(HasBits* has_bits) {
    (*has_bits)[0] |= 32u;
  }
  static const ::feedwire::EventIdMessage& event_id(const FeedResponseMetadata* msg);
  static void set_has_event_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
  static void set_has_pinned_content_fulfilled(HasBits* has_bits) {
    (*has_bits)[0] |= 64u;
  }
  static const ::feedwire::ServerExperimentData& server_experiment_data(const FeedResponseMetadata* msg);
  static void set_has_server_experiment_data(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static const ::feedwire::ContentLifetime& content_lifetime(const FeedResponseMetadata* msg);
  static void set_has_content_lifetime(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::feedwire::InfoCardServingInfo& info_card_serving_info(const FeedResponseMetadata* msg);
  static void set_has_info_card_serving_info(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static const ::feedwire::ChromeFeedResponseMetadata& chrome_feed_response_metadata(const FeedResponseMetadata* msg);
  static void set_has_chrome_feed_response_metadata(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
};

const ::feedwire::EventIdMessage&
FeedResponseMetadata::_Internal::event_id(const FeedResponseMetadata* msg) {
  return *msg->event_id_;
}
const ::feedwire::ServerExperimentData&
FeedResponseMetadata::_Internal::server_experiment_data(const FeedResponseMetadata* msg) {
  return *msg->server_experiment_data_;
}
const ::feedwire::ContentLifetime&
FeedResponseMetadata::_Internal::content_lifetime(const FeedResponseMetadata* msg) {
  return *msg->content_lifetime_;
}
const ::feedwire::InfoCardServingInfo&
FeedResponseMetadata::_Internal::info_card_serving_info(const FeedResponseMetadata* msg) {
  return *msg->info_card_serving_info_;
}
const ::feedwire::ChromeFeedResponseMetadata&
FeedResponseMetadata::_Internal::chrome_feed_response_metadata(const FeedResponseMetadata* msg) {
  return *msg->chrome_feed_response_metadata_;
}
void FeedResponseMetadata::clear_event_id() {
  if (event_id_ != nullptr) event_id_->Clear();
  _has_bits_[0] &= ~0x00000001u;
}
void FeedResponseMetadata::clear_server_experiment_data() {
  if (server_experiment_data_ != nullptr) server_experiment_data_->Clear();
  _has_bits_[0] &= ~0x00000002u;
}
void FeedResponseMetadata::clear_content_lifetime() {
  if (content_lifetime_ != nullptr) content_lifetime_->Clear();
  _has_bits_[0] &= ~0x00000004u;
}
void FeedResponseMetadata::clear_info_card_serving_info() {
  if (info_card_serving_info_ != nullptr) info_card_serving_info_->Clear();
  _has_bits_[0] &= ~0x00000008u;
}
void FeedResponseMetadata::clear_chrome_feed_response_metadata() {
  if (chrome_feed_response_metadata_ != nullptr) chrome_feed_response_metadata_->Clear();
  _has_bits_[0] &= ~0x00000010u;
}
FeedResponseMetadata::FeedResponseMetadata(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(arena, is_message_owned) {
  SharedCtor();
  // @@protoc_insertion_point(arena_constructor:feedwire.FeedResponseMetadata)
}
FeedResponseMetadata::FeedResponseMetadata(const FeedResponseMetadata& from)
  : ::PROTOBUF_NAMESPACE_ID::MessageLite(),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
  if (from._internal_has_event_id()) {
    event_id_ = new ::feedwire::EventIdMessage(*from.event_id_);
  } else {
    event_id_ = nullptr;
  }
  if (from._internal_has_server_experiment_data()) {
    server_experiment_data_ = new ::feedwire::ServerExperimentData(*from.server_experiment_data_);
  } else {
    server_experiment_data_ = nullptr;
  }
  if (from._internal_has_content_lifetime()) {
    content_lifetime_ = new ::feedwire::ContentLifetime(*from.content_lifetime_);
  } else {
    content_lifetime_ = nullptr;
  }
  if (from._internal_has_info_card_serving_info()) {
    info_card_serving_info_ = new ::feedwire::InfoCardServingInfo(*from.info_card_serving_info_);
  } else {
    info_card_serving_info_ = nullptr;
  }
  if (from._internal_has_chrome_feed_response_metadata()) {
    chrome_feed_response_metadata_ = new ::feedwire::ChromeFeedResponseMetadata(*from.chrome_feed_response_metadata_);
  } else {
    chrome_feed_response_metadata_ = nullptr;
  }
  ::memcpy(&response_time_ms_, &from.response_time_ms_,
    static_cast<size_t>(reinterpret_cast<char*>(&pinned_content_fulfilled_) -
    reinterpret_cast<char*>(&response_time_ms_)) + sizeof(pinned_content_fulfilled_));
  // @@protoc_insertion_point(copy_constructor:feedwire.FeedResponseMetadata)
}

inline void FeedResponseMetadata::SharedCtor() {
::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
    reinterpret_cast<char*>(&event_id_) - reinterpret_cast<char*>(this)),
    0, static_cast<size_t>(reinterpret_cast<char*>(&pinned_content_fulfilled_) -
    reinterpret_cast<char*>(&event_id_)) + sizeof(pinned_content_fulfilled_));
}

FeedResponseMetadata::~FeedResponseMetadata() {
  // @@protoc_insertion_point(destructor:feedwire.FeedResponseMetadata)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<std::string>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void FeedResponseMetadata::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete event_id_;
  if (this != internal_default_instance()) delete server_experiment_data_;
  if (this != internal_default_instance()) delete content_lifetime_;
  if (this != internal_default_instance()) delete info_card_serving_info_;
  if (this != internal_default_instance()) delete chrome_feed_response_metadata_;
}

void FeedResponseMetadata::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void FeedResponseMetadata::Clear() {
// @@protoc_insertion_point(message_clear_start:feedwire.FeedResponseMetadata)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(event_id_ != nullptr);
      event_id_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(server_experiment_data_ != nullptr);
      server_experiment_data_->Clear();
    }
    if (cached_has_bits & 0x00000004u) {
      GOOGLE_DCHECK(content_lifetime_ != nullptr);
      content_lifetime_->Clear();
    }
    if (cached_has_bits & 0x00000008u) {
      GOOGLE_DCHECK(info_card_serving_info_ != nullptr);
      info_card_serving_info_->Clear();
    }
    if (cached_has_bits & 0x00000010u) {
      GOOGLE_DCHECK(chrome_feed_response_metadata_ != nullptr);
      chrome_feed_response_metadata_->Clear();
    }
  }
  if (cached_has_bits & 0x00000060u) {
    ::memset(&response_time_ms_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&pinned_content_fulfilled_) -
        reinterpret_cast<char*>(&response_time_ms_)) + sizeof(pinned_content_fulfilled_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear<std::string>();
}

const char* FeedResponseMetadata::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional int64 response_time_ms = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_response_time_ms(&has_bits);
          response_time_ms_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .feedwire.EventIdMessage event_id = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_event_id(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional bool pinned_content_fulfilled = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _Internal::set_has_pinned_content_fulfilled(&has_bits);
          pinned_content_fulfilled_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .feedwire.ServerExperimentData server_experiment_data = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_server_experiment_data(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .feedwire.ContentLifetime content_lifetime = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_content_lifetime(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .feedwire.InfoCardServingInfo info_card_serving_info = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_info_card_serving_info(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .feedwire.ChromeFeedResponseMetadata chrome_feed_response_metadata = 326233599;
      case 326233599:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 250)) {
          ptr = ctx->ParseMessage(_internal_mutable_chrome_feed_response_metadata(), ptr);
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

uint8_t* FeedResponseMetadata::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:feedwire.FeedResponseMetadata)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional int64 response_time_ms = 1;
  if (cached_has_bits & 0x00000020u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_response_time_ms(), target);
  }

  // optional .feedwire.EventIdMessage event_id = 2;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::event_id(this),
        _Internal::event_id(this).GetCachedSize(), target, stream);
  }

  // optional bool pinned_content_fulfilled = 4;
  if (cached_has_bits & 0x00000040u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(4, this->_internal_pinned_content_fulfilled(), target);
  }

  // optional .feedwire.ServerExperimentData server_experiment_data = 5;
  if (cached_has_bits & 0x00000002u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, _Internal::server_experiment_data(this),
        _Internal::server_experiment_data(this).GetCachedSize(), target, stream);
  }

  // optional .feedwire.ContentLifetime content_lifetime = 6;
  if (cached_has_bits & 0x00000004u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(6, _Internal::content_lifetime(this),
        _Internal::content_lifetime(this).GetCachedSize(), target, stream);
  }

  // optional .feedwire.InfoCardServingInfo info_card_serving_info = 7;
  if (cached_has_bits & 0x00000008u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(7, _Internal::info_card_serving_info(this),
        _Internal::info_card_serving_info(this).GetCachedSize(), target, stream);
  }

  // optional .feedwire.ChromeFeedResponseMetadata chrome_feed_response_metadata = 326233599;
  if (cached_has_bits & 0x00000010u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(326233599, _Internal::chrome_feed_response_metadata(this),
        _Internal::chrome_feed_response_metadata(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = stream->WriteRaw(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).data(),
        static_cast<int>(_internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:feedwire.FeedResponseMetadata)
  return target;
}

size_t FeedResponseMetadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:feedwire.FeedResponseMetadata)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    // optional .feedwire.EventIdMessage event_id = 2;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *event_id_);
    }

    // optional .feedwire.ServerExperimentData server_experiment_data = 5;
    if (cached_has_bits & 0x00000002u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *server_experiment_data_);
    }

    // optional .feedwire.ContentLifetime content_lifetime = 6;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *content_lifetime_);
    }

    // optional .feedwire.InfoCardServingInfo info_card_serving_info = 7;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *info_card_serving_info_);
    }

    // optional .feedwire.ChromeFeedResponseMetadata chrome_feed_response_metadata = 326233599;
    if (cached_has_bits & 0x00000010u) {
      total_size += 5 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *chrome_feed_response_metadata_);
    }

    // optional int64 response_time_ms = 1;
    if (cached_has_bits & 0x00000020u) {
      total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_response_time_ms());
    }

    // optional bool pinned_content_fulfilled = 4;
    if (cached_has_bits & 0x00000040u) {
      total_size += 1 + 1;
    }

  }
  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    total_size += _internal_metadata_.unknown_fields<std::string>(::PROTOBUF_NAMESPACE_ID::internal::GetEmptyString).size();
  }
  int cached_size = ::_pbi::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void FeedResponseMetadata::CheckTypeAndMergeFrom(
    const ::PROTOBUF_NAMESPACE_ID::MessageLite& from) {
  MergeFrom(*::_pbi::DownCast<const FeedResponseMetadata*>(
      &from));
}

void FeedResponseMetadata::MergeFrom(const FeedResponseMetadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:feedwire.FeedResponseMetadata)
  GOOGLE_DCHECK_NE(&from, this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x0000007fu) {
    if (cached_has_bits & 0x00000001u) {
      _internal_mutable_event_id()->::feedwire::EventIdMessage::MergeFrom(from._internal_event_id());
    }
    if (cached_has_bits & 0x00000002u) {
      _internal_mutable_server_experiment_data()->::feedwire::ServerExperimentData::MergeFrom(from._internal_server_experiment_data());
    }
    if (cached_has_bits & 0x00000004u) {
      _internal_mutable_content_lifetime()->::feedwire::ContentLifetime::MergeFrom(from._internal_content_lifetime());
    }
    if (cached_has_bits & 0x00000008u) {
      _internal_mutable_info_card_serving_info()->::feedwire::InfoCardServingInfo::MergeFrom(from._internal_info_card_serving_info());
    }
    if (cached_has_bits & 0x00000010u) {
      _internal_mutable_chrome_feed_response_metadata()->::feedwire::ChromeFeedResponseMetadata::MergeFrom(from._internal_chrome_feed_response_metadata());
    }
    if (cached_has_bits & 0x00000020u) {
      response_time_ms_ = from.response_time_ms_;
    }
    if (cached_has_bits & 0x00000040u) {
      pinned_content_fulfilled_ = from.pinned_content_fulfilled_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
  _internal_metadata_.MergeFrom<std::string>(from._internal_metadata_);
}

void FeedResponseMetadata::CopyFrom(const FeedResponseMetadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:feedwire.FeedResponseMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FeedResponseMetadata::IsInitialized() const {
  if (_internal_has_event_id()) {
    if (!event_id_->IsInitialized()) return false;
  }
  return true;
}

void FeedResponseMetadata::InternalSwap(FeedResponseMetadata* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(FeedResponseMetadata, pinned_content_fulfilled_)
      + sizeof(FeedResponseMetadata::pinned_content_fulfilled_)
      - PROTOBUF_FIELD_OFFSET(FeedResponseMetadata, event_id_)>(
          reinterpret_cast<char*>(&event_id_),
          reinterpret_cast<char*>(&other->event_id_));
}

std::string FeedResponseMetadata::GetTypeName() const {
  return "feedwire.FeedResponseMetadata";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace feedwire
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::feedwire::FeedResponse*
Arena::CreateMaybeMessage< ::feedwire::FeedResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::feedwire::FeedResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::feedwire::FeedResponseMetadata*
Arena::CreateMaybeMessage< ::feedwire::FeedResponseMetadata >(Arena* arena) {
  return Arena::CreateMessageInternal< ::feedwire::FeedResponseMetadata >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
