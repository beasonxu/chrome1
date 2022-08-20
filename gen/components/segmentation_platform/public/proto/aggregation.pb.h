// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/segmentation_platform/public/proto/aggregation.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_components_2fsegmentation_5fplatform_2fpublic_2fproto_2faggregation_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_components_2fsegmentation_5fplatform_2fpublic_2fproto_2faggregation_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3020000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3020000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_components_2fsegmentation_5fplatform_2fpublic_2fproto_2faggregation_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_components_2fsegmentation_5fplatform_2fpublic_2fproto_2faggregation_2eproto {
  static const uint32_t offsets[];
};
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace segmentation_platform {
namespace proto {

enum Aggregation : int {
  UNKNOWN = 0,
  COUNT = 1,
  COUNT_BOOLEAN = 2,
  BUCKETED_COUNT = 3,
  BUCKETED_COUNT_BOOLEAN = 4,
  BUCKETED_COUNT_BOOLEAN_TRUE_COUNT = 5,
  BUCKETED_CUMULATIVE_COUNT = 6,
  SUM = 7,
  SUM_BOOLEAN = 8,
  BUCKETED_SUM = 9,
  BUCKETED_SUM_BOOLEAN = 10,
  BUCKETED_SUM_BOOLEAN_TRUE_COUNT = 11,
  BUCKETED_CUMULATIVE_SUM = 12
};
bool Aggregation_IsValid(int value);
constexpr Aggregation Aggregation_MIN = UNKNOWN;
constexpr Aggregation Aggregation_MAX = BUCKETED_CUMULATIVE_SUM;
constexpr int Aggregation_ARRAYSIZE = Aggregation_MAX + 1;

const std::string& Aggregation_Name(Aggregation value);
template<typename T>
inline const std::string& Aggregation_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Aggregation>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Aggregation_Name.");
  return Aggregation_Name(static_cast<Aggregation>(enum_t_value));
}
bool Aggregation_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, Aggregation* value);
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace segmentation_platform

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::segmentation_platform::proto::Aggregation> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_components_2fsegmentation_5fplatform_2fpublic_2fproto_2faggregation_2eproto
