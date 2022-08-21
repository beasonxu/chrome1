// mojo/public/mojom/base/read_only_file.mojom.h is auto generated by mojom_bindings_generator.py, do not edit

// Copyright 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef MOJO_PUBLIC_MOJOM_BASE_READ_ONLY_FILE_MOJOM_H_
#define MOJO_PUBLIC_MOJOM_BASE_READ_ONLY_FILE_MOJOM_H_

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

#include "mojo/public/mojom/base/read_only_file.mojom-shared.h"
#include "mojo/public/mojom/base/read_only_file.mojom-forward.h"
#include <string>
#include <vector>

#include "mojo/public/cpp/bindings/lib/control_message_handler.h"
#include "mojo/public/cpp/bindings/raw_ptr_impl_ref_traits.h"


#include "mojo/public/cpp/base/read_only_file_mojom_traits.h"
#include "base/component_export.h"




namespace mojo_base {
namespace mojom {








class COMPONENT_EXPORT(MOJO_BASE_MOJOM) ReadOnlyFile {
 public:
  template <typename T>
  using EnableIfSame = std::enable_if_t<std::is_same<ReadOnlyFile, T>::value>;
  using DataView = ReadOnlyFileDataView;
  using Data_ = internal::ReadOnlyFile_Data;

  template <typename... Args>
  static ReadOnlyFilePtr New(Args&&... args) {
    return ReadOnlyFilePtr(
        absl::in_place, std::forward<Args>(args)...);
  }

  template <typename U>
  static ReadOnlyFilePtr From(const U& u) {
    return mojo::TypeConverter<ReadOnlyFilePtr, U>::Convert(u);
  }

  template <typename U>
  U To() const {
    return mojo::TypeConverter<U, ReadOnlyFile>::Convert(*this);
  }


  ReadOnlyFile();

  ReadOnlyFile(
      ::mojo::PlatformHandle fd,
      bool async);

ReadOnlyFile(const ReadOnlyFile&) = delete;
ReadOnlyFile& operator=(const ReadOnlyFile&) = delete;

  ~ReadOnlyFile();

  // Clone() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Clone() or copy
  // constructor/assignment are available for members.
  template <typename StructPtrType = ReadOnlyFilePtr>
  ReadOnlyFilePtr Clone() const;

  // Equals() is a template so it is only instantiated if it is used. Thus, the
  // bindings generator does not need to know whether Equals() or == operator
  // are available for members.
  template <typename T, ReadOnlyFile::EnableIfSame<T>* = nullptr>
  bool Equals(const T& other) const;

  template <typename T, ReadOnlyFile::EnableIfSame<T>* = nullptr>
  bool operator==(const T& rhs) const { return Equals(rhs); }

  template <typename UserType>
  static mojo::Message SerializeAsMessage(UserType* input) {
    return mojo::internal::SerializeAsMessageImpl<
        ReadOnlyFile::DataView>(input);
  }

  // The returned Message is serialized only if the message is moved
  // cross-process or cross-language. Otherwise if the message is Deserialized
  // as the same UserType |input| will just be moved to |output| in
  // DeserializeFromMessage.
  template <typename UserType>
  static mojo::Message WrapAsMessage(UserType input) {
    return mojo::Message(std::make_unique<
        internal::ReadOnlyFile_UnserializedMessageContext<
            UserType, ReadOnlyFile::DataView>>(0, 0, std::move(input)),
        MOJO_CREATE_MESSAGE_FLAG_NONE);
  }

  template <typename UserType>
  static bool Deserialize(const void* data,
                          size_t data_num_bytes,
                          UserType* output) {
    mojo::Message message;
    return mojo::internal::DeserializeImpl<ReadOnlyFile::DataView>(
        message, data, data_num_bytes, output, Validate);
  }

  template <typename UserType>
  static bool Deserialize(const std::vector<uint8_t>& input,
                          UserType* output) {
    return ReadOnlyFile::Deserialize(
        input.size() == 0 ? nullptr : &input.front(), input.size(), output);
  }

  template <typename UserType>
  static bool DeserializeFromMessage(mojo::Message input,
                                     UserType* output) {
    auto context = input.TakeUnserializedContext<
        internal::ReadOnlyFile_UnserializedMessageContext<
            UserType, ReadOnlyFile::DataView>>();
    if (context) {
      *output = std::move(context->TakeData());
      return true;
    }
    input.SerializeIfNecessary();
    return mojo::internal::DeserializeImpl<ReadOnlyFile::DataView>(
        input, input.payload(), input.payload_num_bytes(), output, Validate);
  }

  
  ::mojo::PlatformHandle fd;
  
  bool async;

  // Serialise this struct into a trace.
  void WriteIntoTrace(perfetto::TracedValue traced_context) const;

 private:
  static bool Validate(const void* data,
                       mojo::internal::ValidationContext* validation_context);
};

// The comparison operators are templates, so they are only instantiated if they
// are used. Thus, the bindings generator does not need to know whether
// comparison operators are available for members.
template <typename T, ReadOnlyFile::EnableIfSame<T>* = nullptr>
bool operator<(const T& lhs, const T& rhs);

template <typename T, ReadOnlyFile::EnableIfSame<T>* = nullptr>
bool operator<=(const T& lhs, const T& rhs) {
  return !(rhs < lhs);
}

template <typename T, ReadOnlyFile::EnableIfSame<T>* = nullptr>
bool operator>(const T& lhs, const T& rhs) {
  return rhs < lhs;
}

template <typename T, ReadOnlyFile::EnableIfSame<T>* = nullptr>
bool operator>=(const T& lhs, const T& rhs) {
  return !(lhs < rhs);
}

template <typename StructPtrType>
ReadOnlyFilePtr ReadOnlyFile::Clone() const {
  return New(
      mojo::Clone(fd),
      mojo::Clone(async)
  );
}

template <typename T, ReadOnlyFile::EnableIfSame<T>*>
bool ReadOnlyFile::Equals(const T& other_struct) const {
  if (!mojo::Equals(this->fd, other_struct.fd))
    return false;
  if (!mojo::Equals(this->async, other_struct.async))
    return false;
  return true;
}

template <typename T, ReadOnlyFile::EnableIfSame<T>*>
bool operator<(const T& lhs, const T& rhs) {
  if (lhs.fd < rhs.fd)
    return true;
  if (rhs.fd < lhs.fd)
    return false;
  if (lhs.async < rhs.async)
    return true;
  if (rhs.async < lhs.async)
    return false;
  return false;
}


}  // namespace mojom
}  // namespace mojo_base

namespace mojo {


template <>
struct COMPONENT_EXPORT(MOJO_BASE_MOJOM) StructTraits<::mojo_base::mojom::ReadOnlyFile::DataView,
                                         ::mojo_base::mojom::ReadOnlyFilePtr> {
  static bool IsNull(const ::mojo_base::mojom::ReadOnlyFilePtr& input) { return !input; }
  static void SetToNull(::mojo_base::mojom::ReadOnlyFilePtr* output) { output->reset(); }

  static  decltype(::mojo_base::mojom::ReadOnlyFile::fd)& fd(
       ::mojo_base::mojom::ReadOnlyFilePtr& input) {
    return input->fd;
  }

  static decltype(::mojo_base::mojom::ReadOnlyFile::async) async(
      const ::mojo_base::mojom::ReadOnlyFilePtr& input) {
    return input->async;
  }

  static bool Read(::mojo_base::mojom::ReadOnlyFile::DataView input, ::mojo_base::mojom::ReadOnlyFilePtr* output);
};

}  // namespace mojo

#endif  // MOJO_PUBLIC_MOJOM_BASE_READ_ONLY_FILE_MOJOM_H_