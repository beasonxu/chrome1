// ui/display/mojom/display_snapshot.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef UI_DISPLAY_MOJOM_DISPLAY_SNAPSHOT_MOJOM_H_
#define UI_DISPLAY_MOJOM_DISPLAY_SNAPSHOT_MOJOM_H_

#include <stdint.h>

#include <limits>
#include <type_traits>
#include <utility>

#include "third_party/abseil-cpp/absl/types/optional.h"
#include "mojo/public/cpp/bindings/clone_traits.h"
#include "mojo/public/cpp/bindings/equals_traits.h"
#include "mojo/public/cpp/bindings/lib/serialization.h"
#include "mojo/public/cpp/bindings/struct_ptr.h"
#include "mojo/public/cpp/bindings/struct_traits.h"
#include "mojo/public/cpp/bindings/union_traits.h"

#include "third_party/perfetto/include/perfetto/tracing/traced_value_forward.h"

#include "ui/display/mojom/display_snapshot.mojom-shared.h"
#include "ui/display/mojom/display_snapshot.mojom-forward.h"
#include "mojo/public/mojom/base/file_path.mojom.h"
#include "ui/display/mojom/display_constants.mojom.h"
#include "ui/display/mojom/display_mode.mojom.h"
#include "ui/gfx/geometry/mojom/geometry.mojom.h"
#include "ui/gfx/mojom/color_space.mojom.h"
#include "ui/gfx/mojom/hdr_static_metadata.mojom.h"
#include <string>
#include <vector>




#include "ui/display/mojom/display_snapshot_mojom_traits.h"




namespace display {
namespace mojom {








class  DisplaySnapshot {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<DisplaySnapshot, T>::value>;
  using DataView = DisplaySnapshotDataView;
  using Data_ = internal::DisplaySnapshot_Data;

  template <typename... Args>
  static DisplaySnapshotPtr New(Args&&... args) {
    return DisplaySnapshotPtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static DisplaySnapshotPtr From(const U& u) {
    return mojo::TypeConverter<DisplaySnapshotPtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, DisplaySnapshot>::Convert(*this);
  }


  DisplaySnapshot();

  DisplaySnapshot(
      int64_t display_id,
      int64_t port_display_id,
      int64_t edid_display_id,
      uint16_t connector_index,
      const ::gfx::Point& origin,
      const ::gfx::Size& physical_size,
      ::display::DisplayConnectionType type,
      uint64_t base_connector_id,
      std::vector<uint64_t> path_topology,
      bool is_aspect_preserving_scaling,
      bool has_overscan,
      ::display::PrivacyScreenState privacy_screen_state,
      bool has_color_correction_matrix,
      bool color_correction_in_linear_space,
      const ::gfx::ColorSpace& color_space,
      uint32_t bits_per_channel,
      const absl::optional<::gfx::HDRStaticMetadata>& hdr_static_metadata,
      const std::string& display_name,
      const ::base::FilePath& sys_path,
      std::vector<::std::unique_ptr<::display::DisplayMode>> modes,
      ::display::mojom::PanelOrientation panel_orientation,
      std::vector<uint8_t> edid,
      uint64_t current_mode_index,
      bool has_current_mode,
      uint64_t native_mode_index,
      bool has_native_mode,
      int64_t product_code,
      int32_t year_of_manufacture,
      const ::gfx::Size& maximum_cursor_size);

DisplaySnapshot(const DisplaySnapshot&) = delete;
DisplaySnapshot& operator=(const DisplaySnapshot&) = delete;

  ~DisplaySnapshot();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = DisplaySnapshotPtr>
  DisplaySnapshotPtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, DisplaySnapshot::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, DisplaySnapshot::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }
  template <typename UserType>
  static std::vector<uint8_t> Serialize(UserType* input) {
    return mojo::internal::SerializeImpl<
        DisplaySnapshot::DataView, std::vector<uint8_t>>(input);
  }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        DisplaySnapshot::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::DisplaySnapshot_UnserializedMessageContext<
            UserType, DisplaySnapshot::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<DisplaySnapshot::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return DisplaySnapshot::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::DisplaySnapshot_UnserializedMessageContext<
            UserType, DisplaySnapshot::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<DisplaySnapshot::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  int64_t display_id;
  
  int64_t port_display_id;
  
  int64_t edid_display_id;
  
  uint16_t connector_index;
  
  ::gfx::Point origin;
  
  ::gfx::Size physical_size;
  
  ::display::DisplayConnectionType type;
  
  uint64_t base_connector_id;
  
  std::vector<uint64_t> path_topology;
  
  bool is_aspect_preserving_scaling;
  
  bool has_overscan;
  
  ::display::PrivacyScreenState privacy_screen_state;
  
  bool has_color_correction_matrix;
  
  bool color_correction_in_linear_space;
  
  ::gfx::ColorSpace color_space;
  
  uint32_t bits_per_channel;
  
  absl::optional<::gfx::HDRStaticMetadata> hdr_static_metadata;
  
  std::string display_name;
  
  ::base::FilePath sys_path;
  
  std::vector<::std::unique_ptr<::display::DisplayMode>> modes;
  
  ::display::mojom::PanelOrientation panel_orientation;
  
  std::vector<uint8_t> edid;
  
  uint64_t current_mode_index;
  
  bool has_current_mode;
  
  uint64_t native_mode_index;
  
  bool has_native_mode;
  
  int64_t product_code;
  
  int32_t year_of_manufacture;
  
  ::gfx::Size maximum_cursor_size;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, DisplaySnapshot::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, DisplaySnapshot::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, DisplaySnapshot::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, DisplaySnapshot::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
DisplaySnapshotPtr DisplaySnapshot::Clone() const {
  return New(
      mojo::Clone(display_id),
      mojo::Clone(port_display_id),
      mojo::Clone(edid_display_id),
      mojo::Clone(connector_index),
      mojo::Clone(origin),
      mojo::Clone(physical_size),
      mojo::Clone(type),
      mojo::Clone(base_connector_id),
      mojo::Clone(path_topology),
      mojo::Clone(is_aspect_preserving_scaling),
      mojo::Clone(has_overscan),
      mojo::Clone(privacy_screen_state),
      mojo::Clone(has_color_correction_matrix),
      mojo::Clone(color_correction_in_linear_space),
      mojo::Clone(color_space),
      mojo::Clone(bits_per_channel),
      mojo::Clone(hdr_static_metadata),
      mojo::Clone(display_name),
      mojo::Clone(sys_path),
      mojo::Clone(modes),
      mojo::Clone(panel_orientation),
      mojo::Clone(edid),
      mojo::Clone(current_mode_index),
      mojo::Clone(has_current_mode),
      mojo::Clone(native_mode_index),
      mojo::Clone(has_native_mode),
      mojo::Clone(product_code),
      mojo::Clone(year_of_manufacture),
      mojo::Clone(maximum_cursor_size)
  );
}

template <typename T, DisplaySnapshot::EnableIfSame<T>*>
bool DisplaySnapshot::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->display_id, other_struct.display_id))
    return false;
  if (!mojo::Equals(this->port_display_id, other_struct.port_display_id))
    return false;
  if (!mojo::Equals(this->edid_display_id, other_struct.edid_display_id))
    return false;
  if (!mojo::Equals(this->connector_index, other_struct.connector_index))
    return false;
  if (!mojo::Equals(this->origin, other_struct.origin))
    return false;
  if (!mojo::Equals(this->physical_size, other_struct.physical_size))
    return false;
  if (!mojo::Equals(this->type, other_struct.type))
    return false;
  if (!mojo::Equals(this->base_connector_id, other_struct.base_connector_id))
    return false;
  if (!mojo::Equals(this->path_topology, other_struct.path_topology))
    return false;
  if (!mojo::Equals(this->is_aspect_preserving_scaling, other_struct.is_aspect_preserving_scaling))
    return false;
  if (!mojo::Equals(this->has_overscan, other_struct.has_overscan))
    return false;
  if (!mojo::Equals(this->privacy_screen_state, other_struct.privacy_screen_state))
    return false;
  if (!mojo::Equals(this->has_color_correction_matrix, other_struct.has_color_correction_matrix))
    return false;
  if (!mojo::Equals(this->color_correction_in_linear_space, other_struct.color_correction_in_linear_space))
    return false;
  if (!mojo::Equals(this->color_space, other_struct.color_space))
    return false;
  if (!mojo::Equals(this->bits_per_channel, other_struct.bits_per_channel))
    return false;
  if (!mojo::Equals(this->hdr_static_metadata, other_struct.hdr_static_metadata))
    return false;
  if (!mojo::Equals(this->display_name, other_struct.display_name))
    return false;
  if (!mojo::Equals(this->sys_path, other_struct.sys_path))
    return false;
  if (!mojo::Equals(this->modes, other_struct.modes))
    return false;
  if (!mojo::Equals(this->panel_orientation, other_struct.panel_orientation))
    return false;
  if (!mojo::Equals(this->edid, other_struct.edid))
    return false;
  if (!mojo::Equals(this->current_mode_index, other_struct.current_mode_index))
    return false;
  if (!mojo::Equals(this->has_current_mode, other_struct.has_current_mode))
    return false;
  if (!mojo::Equals(this->native_mode_index, other_struct.native_mode_index))
    return false;
  if (!mojo::Equals(this->has_native_mode, other_struct.has_native_mode))
    return false;
  if (!mojo::Equals(this->product_code, other_struct.product_code))
    return false;
  if (!mojo::Equals(this->year_of_manufacture, other_struct.year_of_manufacture))
    return false;
  if (!mojo::Equals(this->maximum_cursor_size, other_struct.maximum_cursor_size))
    return false;
  return true;
}

template <typename T, DisplaySnapshot::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.display_id < rhs.display_id)
    return true;
  if (rhs.display_id < lhs.display_id)
    return false;
  if (lhs.port_display_id < rhs.port_display_id)
    return true;
  if (rhs.port_display_id < lhs.port_display_id)
    return false;
  if (lhs.edid_display_id < rhs.edid_display_id)
    return true;
  if (rhs.edid_display_id < lhs.edid_display_id)
    return false;
  if (lhs.connector_index < rhs.connector_index)
    return true;
  if (rhs.connector_index < lhs.connector_index)
    return false;
  if (lhs.origin < rhs.origin)
    return true;
  if (rhs.origin < lhs.origin)
    return false;
  if (lhs.physical_size < rhs.physical_size)
    return true;
  if (rhs.physical_size < lhs.physical_size)
    return false;
  if (lhs.type < rhs.type)
    return true;
  if (rhs.type < lhs.type)
    return false;
  if (lhs.base_connector_id < rhs.base_connector_id)
    return true;
  if (rhs.base_connector_id < lhs.base_connector_id)
    return false;
  if (lhs.path_topology < rhs.path_topology)
    return true;
  if (rhs.path_topology < lhs.path_topology)
    return false;
  if (lhs.is_aspect_preserving_scaling < rhs.is_aspect_preserving_scaling)
    return true;
  if (rhs.is_aspect_preserving_scaling < lhs.is_aspect_preserving_scaling)
    return false;
  if (lhs.has_overscan < rhs.has_overscan)
    return true;
  if (rhs.has_overscan < lhs.has_overscan)
    return false;
  if (lhs.privacy_screen_state < rhs.privacy_screen_state)
    return true;
  if (rhs.privacy_screen_state < lhs.privacy_screen_state)
    return false;
  if (lhs.has_color_correction_matrix < rhs.has_color_correction_matrix)
    return true;
  if (rhs.has_color_correction_matrix < lhs.has_color_correction_matrix)
    return false;
  if (lhs.color_correction_in_linear_space < rhs.color_correction_in_linear_space)
    return true;
  if (rhs.color_correction_in_linear_space < lhs.color_correction_in_linear_space)
    return false;
  if (lhs.color_space < rhs.color_space)
    return true;
  if (rhs.color_space < lhs.color_space)
    return false;
  if (lhs.bits_per_channel < rhs.bits_per_channel)
    return true;
  if (rhs.bits_per_channel < lhs.bits_per_channel)
    return false;
  if (lhs.hdr_static_metadata < rhs.hdr_static_metadata)
    return true;
  if (rhs.hdr_static_metadata < lhs.hdr_static_metadata)
    return false;
  if (lhs.display_name < rhs.display_name)
    return true;
  if (rhs.display_name < lhs.display_name)
    return false;
  if (lhs.sys_path < rhs.sys_path)
    return true;
  if (rhs.sys_path < lhs.sys_path)
    return false;
  if (lhs.modes < rhs.modes)
    return true;
  if (rhs.modes < lhs.modes)
    return false;
  if (lhs.panel_orientation < rhs.panel_orientation)
    return true;
  if (rhs.panel_orientation < lhs.panel_orientation)
    return false;
  if (lhs.edid < rhs.edid)
    return true;
  if (rhs.edid < lhs.edid)
    return false;
  if (lhs.current_mode_index < rhs.current_mode_index)
    return true;
  if (rhs.current_mode_index < lhs.current_mode_index)
    return false;
  if (lhs.has_current_mode < rhs.has_current_mode)
    return true;
  if (rhs.has_current_mode < lhs.has_current_mode)
    return false;
  if (lhs.native_mode_index < rhs.native_mode_index)
    return true;
  if (rhs.native_mode_index < lhs.native_mode_index)
    return false;
  if (lhs.has_native_mode < rhs.has_native_mode)
    return true;
  if (rhs.has_native_mode < lhs.has_native_mode)
    return false;
  if (lhs.product_code < rhs.product_code)
    return true;
  if (rhs.product_code < lhs.product_code)
    return false;
  if (lhs.year_of_manufacture < rhs.year_of_manufacture)
    return true;
  if (rhs.year_of_manufacture < lhs.year_of_manufacture)
    return false;
  if (lhs.maximum_cursor_size < rhs.maximum_cursor_size)
    return true;
  if (rhs.maximum_cursor_size < lhs.maximum_cursor_size)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace display

namespace mojo {


template <>
struct  StructTraits<::display::mojom::DisplaySnapshot::DataView,
                                         ::display::mojom::DisplaySnapshotPtr> {
  static bool IsNull(const ::display::mojom::DisplaySnapshotPtr& input) { return !input; }
  static void SetToNull(::display::mojom::DisplaySnapshotPtr* output) { output->reset(); }

  static decltype(::display::mojom::DisplaySnapshot::display_id) display_id(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->display_id;
  }

  static decltype(::display::mojom::DisplaySnapshot::port_display_id) port_display_id(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->port_display_id;
  }

  static decltype(::display::mojom::DisplaySnapshot::edid_display_id) edid_display_id(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->edid_display_id;
  }

  static decltype(::display::mojom::DisplaySnapshot::connector_index) connector_index(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->connector_index;
  }

  static const decltype(::display::mojom::DisplaySnapshot::origin)& origin(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->origin;
  }

  static const decltype(::display::mojom::DisplaySnapshot::physical_size)& physical_size(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->physical_size;
  }

  static decltype(::display::mojom::DisplaySnapshot::type) type(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->type;
  }

  static decltype(::display::mojom::DisplaySnapshot::base_connector_id) base_connector_id(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->base_connector_id;
  }

  static const decltype(::display::mojom::DisplaySnapshot::path_topology)& path_topology(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->path_topology;
  }

  static decltype(::display::mojom::DisplaySnapshot::is_aspect_preserving_scaling) is_aspect_preserving_scaling(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->is_aspect_preserving_scaling;
  }

  static decltype(::display::mojom::DisplaySnapshot::has_overscan) has_overscan(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->has_overscan;
  }

  static decltype(::display::mojom::DisplaySnapshot::privacy_screen_state) privacy_screen_state(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->privacy_screen_state;
  }

  static decltype(::display::mojom::DisplaySnapshot::has_color_correction_matrix) has_color_correction_matrix(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->has_color_correction_matrix;
  }

  static decltype(::display::mojom::DisplaySnapshot::color_correction_in_linear_space) color_correction_in_linear_space(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->color_correction_in_linear_space;
  }

  static const decltype(::display::mojom::DisplaySnapshot::color_space)& color_space(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->color_space;
  }

  static decltype(::display::mojom::DisplaySnapshot::bits_per_channel) bits_per_channel(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->bits_per_channel;
  }

  static const decltype(::display::mojom::DisplaySnapshot::hdr_static_metadata)& hdr_static_metadata(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->hdr_static_metadata;
  }

  static const decltype(::display::mojom::DisplaySnapshot::display_name)& display_name(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->display_name;
  }

  static const decltype(::display::mojom::DisplaySnapshot::sys_path)& sys_path(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->sys_path;
  }

  static const decltype(::display::mojom::DisplaySnapshot::modes)& modes(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->modes;
  }

  static decltype(::display::mojom::DisplaySnapshot::panel_orientation) panel_orientation(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->panel_orientation;
  }

  static const decltype(::display::mojom::DisplaySnapshot::edid)& edid(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->edid;
  }

  static decltype(::display::mojom::DisplaySnapshot::current_mode_index) current_mode_index(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->current_mode_index;
  }

  static decltype(::display::mojom::DisplaySnapshot::has_current_mode) has_current_mode(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->has_current_mode;
  }

  static decltype(::display::mojom::DisplaySnapshot::native_mode_index) native_mode_index(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->native_mode_index;
  }

  static decltype(::display::mojom::DisplaySnapshot::has_native_mode) has_native_mode(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->has_native_mode;
  }

  static decltype(::display::mojom::DisplaySnapshot::product_code) product_code(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->product_code;
  }

  static decltype(::display::mojom::DisplaySnapshot::year_of_manufacture) year_of_manufacture(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->year_of_manufacture;
  }

  static const decltype(::display::mojom::DisplaySnapshot::maximum_cursor_size)& maximum_cursor_size(
      const ::display::mojom::DisplaySnapshotPtr& input) {
    return input->maximum_cursor_size;
  }

  static bool Read(::display::mojom::DisplaySnapshot::DataView input, ::display::mojom::DisplaySnapshotPtr* output);
};

}  // namespace mojo

#endif  // UI_DISPLAY_MOJOM_DISPLAY_SNAPSHOT_MOJOM_H_