// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: components/feed/core/proto/v2/wire/action_surface.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fsurface_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fsurface_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fsurface_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fsurface_2eproto {
  static const uint32_t offsets[];
};
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace feedwire {

enum ActionSurface : int {
  UNKNOWN_SURFACE = 0,
  ANDROID_CHROME_NEW_TAB = 7,
  IOS_CHROME_NEW_TAB = 8,
  ActionSurface_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  ActionSurface_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool ActionSurface_IsValid(int value);
constexpr ActionSurface ActionSurface_MIN = UNKNOWN_SURFACE;
constexpr ActionSurface ActionSurface_MAX = IOS_CHROME_NEW_TAB;
constexpr int ActionSurface_ARRAYSIZE = ActionSurface_MAX + 1;

const std::string& ActionSurface_Name(ActionSurface value);
template<typename T>
inline const std::string& ActionSurface_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ActionSurface>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ActionSurface_Name.");
  return ActionSurface_Name(static_cast<ActionSurface>(enum_t_value));
}
bool ActionSurface_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ActionSurface* value);
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

}  // namespace feedwire

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::feedwire::ActionSurface> : ::std::true_type {};

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_components_2ffeed_2fcore_2fproto_2fv2_2fwire_2faction_5fsurface_2eproto
