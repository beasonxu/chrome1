#include "perfetto/protozero/message.h"
#include "perfetto/protozero/packed_repeated_fields.h"
#include "perfetto/protozero/proto_decoder.h"
#include "perfetto/protozero/scattered_heap_buffer.h"
// DO NOT EDIT. Autogenerated by Perfetto cppgen_plugin
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wfloat-equal"
#endif
#include "protos/perfetto/config/power/android_power_config.gen.h"

namespace perfetto {
namespace protos {
namespace gen {

AndroidPowerConfig::AndroidPowerConfig() = default;
AndroidPowerConfig::~AndroidPowerConfig() = default;
AndroidPowerConfig::AndroidPowerConfig(const AndroidPowerConfig&) = default;
AndroidPowerConfig& AndroidPowerConfig::operator=(const AndroidPowerConfig&) = default;
AndroidPowerConfig::AndroidPowerConfig(AndroidPowerConfig&&) noexcept = default;
AndroidPowerConfig& AndroidPowerConfig::operator=(AndroidPowerConfig&&) = default;

bool AndroidPowerConfig::operator==(const AndroidPowerConfig& other) const {
  return unknown_fields_ == other.unknown_fields_
   && battery_poll_ms_ == other.battery_poll_ms_
   && battery_counters_ == other.battery_counters_
   && collect_power_rails_ == other.collect_power_rails_
   && collect_energy_estimation_breakdown_ == other.collect_energy_estimation_breakdown_;
}

bool AndroidPowerConfig::ParseFromArray(const void* raw, size_t size) {
  battery_counters_.clear();
  unknown_fields_.clear();
  bool packed_error = false;

  ::protozero::ProtoDecoder dec(raw, size);
  for (auto field = dec.ReadField(); field.valid(); field = dec.ReadField()) {
    if (field.id() < _has_field_.size()) {
      _has_field_.set(field.id());
    }
    switch (field.id()) {
      case 1 /* battery_poll_ms */:
        field.get(&battery_poll_ms_);
        break;
      case 2 /* battery_counters */:
        battery_counters_.emplace_back();
        field.get(&battery_counters_.back());
        break;
      case 3 /* collect_power_rails */:
        field.get(&collect_power_rails_);
        break;
      case 4 /* collect_energy_estimation_breakdown */:
        field.get(&collect_energy_estimation_breakdown_);
        break;
      default:
        field.SerializeAndAppendTo(&unknown_fields_);
        break;
    }
  }
  return !packed_error && !dec.bytes_left();
}

std::string AndroidPowerConfig::SerializeAsString() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsString();
}

std::vector<uint8_t> AndroidPowerConfig::SerializeAsArray() const {
  ::protozero::HeapBuffered<::protozero::Message> msg;
  Serialize(msg.get());
  return msg.SerializeAsArray();
}

void AndroidPowerConfig::Serialize(::protozero::Message* msg) const {
  // Field 1: battery_poll_ms
  if (_has_field_[1]) {
    msg->AppendVarInt(1, battery_poll_ms_);
  }

  // Field 2: battery_counters
  for (auto& it : battery_counters_) {
    msg->AppendVarInt(2, it);
  }

  // Field 3: collect_power_rails
  if (_has_field_[3]) {
    msg->AppendTinyVarInt(3, collect_power_rails_);
  }

  // Field 4: collect_energy_estimation_breakdown
  if (_has_field_[4]) {
    msg->AppendTinyVarInt(4, collect_energy_estimation_breakdown_);
  }

  msg->AppendRawProtoBytes(unknown_fields_.data(), unknown_fields_.size());
}

}  // namespace perfetto
}  // namespace protos
}  // namespace gen
#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic pop
#endif
