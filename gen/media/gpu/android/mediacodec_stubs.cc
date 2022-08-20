// This is generated file. Do not modify directly.

#include "media/gpu/android/mediacodec_stubs.h"

#include <dlfcn.h>   // For dlsym, dlopen, RTLD_LAZY.

#include <cstdarg>

#include "base/compiler_specific.h"
#include "base/logging.h"

// The extra include header needed in the generated stub file for defining
// various MediaCodec types.

extern "C" {

#include <media/NdkMediaCodec.h>

}
namespace  {

void LogDlerror(const char* symbol) {
  VLOG(1) << "Couldn't load " << symbol << ", dlerror() says:\n" << dlerror();
}

}  // namespace 

extern "C" {

// Static pointers that will hold the location of the real function
// implementations after the module has been loaded.
static AMediaCodec* (*AMediaCodec_createCodecByName_ptr)(const char *name) = nullptr;
static AMediaCodec* (*AMediaCodec_createDecoderByType_ptr)(const char *mime_type) = nullptr;
static AMediaCodec* (*AMediaCodec_createEncoderByType_ptr)(const char *mime_type) = nullptr;
static media_status_t (*AMediaCodec_delete_ptr)(AMediaCodec* codec) = nullptr;
static media_status_t (*AMediaCodec_configure_ptr)(AMediaCodec* codec, const AMediaFormat* format, ANativeWindow* surface, AMediaCrypto *crypto, uint32_t flags) = nullptr;
static media_status_t (*AMediaCodec_start_ptr)(AMediaCodec* codec) = nullptr;
static media_status_t (*AMediaCodec_stop_ptr)(AMediaCodec* codec) = nullptr;
static media_status_t (*AMediaCodec_flush_ptr)(AMediaCodec* codec) = nullptr;
static uint8_t* (*AMediaCodec_getInputBuffer_ptr)(AMediaCodec* codec, size_t idx, size_t *out_size) = nullptr;
static uint8_t* (*AMediaCodec_getOutputBuffer_ptr)(AMediaCodec* codec, size_t idx, size_t *out_size) = nullptr;
static media_status_t (*AMediaCodec_queueInputBuffer_ptr)(AMediaCodec* codec, size_t idx, off_t offset, size_t size, uint64_t time, uint32_t flags) = nullptr;
static AMediaFormat* (*AMediaCodec_getOutputFormat_ptr)(AMediaCodec* codec) = nullptr;
static media_status_t (*AMediaCodec_releaseOutputBuffer_ptr)(AMediaCodec* codec, size_t idx, bool render) = nullptr;
static media_status_t (*AMediaCodec_setOutputSurface_ptr)(AMediaCodec* codec, ANativeWindow* surface) = nullptr;
static media_status_t (*AMediaCodec_setParameters_ptr)(AMediaCodec *codec, const AMediaFormat* params) = nullptr;
static media_status_t (*AMediaCodec_signalEndOfInputStream_ptr)(AMediaCodec *codec) = nullptr;
static media_status_t (*AMediaCodec_setAsyncNotifyCallback_ptr)(AMediaCodec* codec, AMediaCodecOnAsyncNotifyCallback callback, void *userdata) = nullptr;
static AMediaFormat* (*AMediaCodec_getInputFormat_ptr)(AMediaCodec* codec) = nullptr;
static AMediaFormat * (*AMediaFormat_new_ptr)() = nullptr;
static media_status_t (*AMediaFormat_delete_ptr)(AMediaFormat* format) = nullptr;
static bool (*AMediaFormat_getInt32_ptr)(AMediaFormat* format, const char *name, int32_t *out) = nullptr;
static bool (*AMediaFormat_getInt64_ptr)(AMediaFormat* format, const char *name, int64_t *out) = nullptr;
static bool (*AMediaFormat_getFloat_ptr)(AMediaFormat* format, const char *name, float *out) = nullptr;
static bool (*AMediaFormat_getString_ptr)(AMediaFormat* format, const char *name, const char **out) = nullptr;
static void (*AMediaFormat_setInt32_ptr)(AMediaFormat* format, const char* name, int32_t value) = nullptr;
static void (*AMediaFormat_setInt64_ptr)(AMediaFormat* format, const char* name, int64_t value) = nullptr;
static void (*AMediaFormat_setFloat_ptr)(AMediaFormat* format, const char* name, float value) = nullptr;
static void (*AMediaFormat_setString_ptr)(AMediaFormat* format, const char* name, const char* value) = nullptr;

// Stubs that dispatch to the real implementations.
extern AMediaCodec* AMediaCodec_createCodecByName(const char *name) __attribute__((weak));
DISABLE_CFI_ICALL
AMediaCodec*  AMediaCodec_createCodecByName(const char *name) {
  return AMediaCodec_createCodecByName_ptr(name);
}
extern AMediaCodec* AMediaCodec_createDecoderByType(const char *mime_type) __attribute__((weak));
DISABLE_CFI_ICALL
AMediaCodec*  AMediaCodec_createDecoderByType(const char *mime_type) {
  return AMediaCodec_createDecoderByType_ptr(mime_type);
}
extern AMediaCodec* AMediaCodec_createEncoderByType(const char *mime_type) __attribute__((weak));
DISABLE_CFI_ICALL
AMediaCodec*  AMediaCodec_createEncoderByType(const char *mime_type) {
  return AMediaCodec_createEncoderByType_ptr(mime_type);
}
extern media_status_t AMediaCodec_delete(AMediaCodec* codec) __attribute__((weak));
DISABLE_CFI_ICALL
media_status_t  AMediaCodec_delete(AMediaCodec* codec) {
  return AMediaCodec_delete_ptr(codec);
}
extern media_status_t AMediaCodec_configure(AMediaCodec* codec, const AMediaFormat* format, ANativeWindow* surface, AMediaCrypto *crypto, uint32_t flags) __attribute__((weak));
DISABLE_CFI_ICALL
media_status_t  AMediaCodec_configure(AMediaCodec* codec, const AMediaFormat* format, ANativeWindow* surface, AMediaCrypto *crypto, uint32_t flags) {
  return AMediaCodec_configure_ptr(codec, format, surface, crypto, flags);
}
extern media_status_t AMediaCodec_start(AMediaCodec* codec) __attribute__((weak));
DISABLE_CFI_ICALL
media_status_t  AMediaCodec_start(AMediaCodec* codec) {
  return AMediaCodec_start_ptr(codec);
}
extern media_status_t AMediaCodec_stop(AMediaCodec* codec) __attribute__((weak));
DISABLE_CFI_ICALL
media_status_t  AMediaCodec_stop(AMediaCodec* codec) {
  return AMediaCodec_stop_ptr(codec);
}
extern media_status_t AMediaCodec_flush(AMediaCodec* codec) __attribute__((weak));
DISABLE_CFI_ICALL
media_status_t  AMediaCodec_flush(AMediaCodec* codec) {
  return AMediaCodec_flush_ptr(codec);
}
extern uint8_t* AMediaCodec_getInputBuffer(AMediaCodec* codec, size_t idx, size_t *out_size) __attribute__((weak));
DISABLE_CFI_ICALL
uint8_t*  AMediaCodec_getInputBuffer(AMediaCodec* codec, size_t idx, size_t *out_size) {
  return AMediaCodec_getInputBuffer_ptr(codec, idx, out_size);
}
extern uint8_t* AMediaCodec_getOutputBuffer(AMediaCodec* codec, size_t idx, size_t *out_size) __attribute__((weak));
DISABLE_CFI_ICALL
uint8_t*  AMediaCodec_getOutputBuffer(AMediaCodec* codec, size_t idx, size_t *out_size) {
  return AMediaCodec_getOutputBuffer_ptr(codec, idx, out_size);
}
extern media_status_t AMediaCodec_queueInputBuffer(AMediaCodec* codec, size_t idx, off_t offset, size_t size, uint64_t time, uint32_t flags) __attribute__((weak));
DISABLE_CFI_ICALL
media_status_t  AMediaCodec_queueInputBuffer(AMediaCodec* codec, size_t idx, off_t offset, size_t size, uint64_t time, uint32_t flags) {
  return AMediaCodec_queueInputBuffer_ptr(codec, idx, offset, size, time, flags);
}
extern AMediaFormat* AMediaCodec_getOutputFormat(AMediaCodec* codec) __attribute__((weak));
DISABLE_CFI_ICALL
AMediaFormat*  AMediaCodec_getOutputFormat(AMediaCodec* codec) {
  return AMediaCodec_getOutputFormat_ptr(codec);
}
extern media_status_t AMediaCodec_releaseOutputBuffer(AMediaCodec* codec, size_t idx, bool render) __attribute__((weak));
DISABLE_CFI_ICALL
media_status_t  AMediaCodec_releaseOutputBuffer(AMediaCodec* codec, size_t idx, bool render) {
  return AMediaCodec_releaseOutputBuffer_ptr(codec, idx, render);
}
extern media_status_t AMediaCodec_setOutputSurface(AMediaCodec* codec, ANativeWindow* surface) __attribute__((weak));
DISABLE_CFI_ICALL
media_status_t  AMediaCodec_setOutputSurface(AMediaCodec* codec, ANativeWindow* surface) {
  return AMediaCodec_setOutputSurface_ptr(codec, surface);
}
extern media_status_t AMediaCodec_setParameters(AMediaCodec *codec, const AMediaFormat* params) __attribute__((weak));
DISABLE_CFI_ICALL
media_status_t  AMediaCodec_setParameters(AMediaCodec *codec, const AMediaFormat* params) {
  return AMediaCodec_setParameters_ptr(codec, params);
}
extern media_status_t AMediaCodec_signalEndOfInputStream(AMediaCodec *codec) __attribute__((weak));
DISABLE_CFI_ICALL
media_status_t  AMediaCodec_signalEndOfInputStream(AMediaCodec *codec) {
  return AMediaCodec_signalEndOfInputStream_ptr(codec);
}
extern media_status_t AMediaCodec_setAsyncNotifyCallback(AMediaCodec* codec, AMediaCodecOnAsyncNotifyCallback callback, void *userdata) __attribute__((weak));
DISABLE_CFI_ICALL
media_status_t  AMediaCodec_setAsyncNotifyCallback(AMediaCodec* codec, AMediaCodecOnAsyncNotifyCallback callback, void *userdata) {
  return AMediaCodec_setAsyncNotifyCallback_ptr(codec, callback, userdata);
}
extern AMediaFormat* AMediaCodec_getInputFormat(AMediaCodec* codec) __attribute__((weak));
DISABLE_CFI_ICALL
AMediaFormat*  AMediaCodec_getInputFormat(AMediaCodec* codec) {
  return AMediaCodec_getInputFormat_ptr(codec);
}
extern AMediaFormat * AMediaFormat_new() __attribute__((weak));
DISABLE_CFI_ICALL
AMediaFormat *  AMediaFormat_new() {
  return AMediaFormat_new_ptr();
}
extern media_status_t AMediaFormat_delete(AMediaFormat* format) __attribute__((weak));
DISABLE_CFI_ICALL
media_status_t  AMediaFormat_delete(AMediaFormat* format) {
  return AMediaFormat_delete_ptr(format);
}
extern bool AMediaFormat_getInt32(AMediaFormat* format, const char *name, int32_t *out) __attribute__((weak));
DISABLE_CFI_ICALL
bool  AMediaFormat_getInt32(AMediaFormat* format, const char *name, int32_t *out) {
  return AMediaFormat_getInt32_ptr(format, name, out);
}
extern bool AMediaFormat_getInt64(AMediaFormat* format, const char *name, int64_t *out) __attribute__((weak));
DISABLE_CFI_ICALL
bool  AMediaFormat_getInt64(AMediaFormat* format, const char *name, int64_t *out) {
  return AMediaFormat_getInt64_ptr(format, name, out);
}
extern bool AMediaFormat_getFloat(AMediaFormat* format, const char *name, float *out) __attribute__((weak));
DISABLE_CFI_ICALL
bool  AMediaFormat_getFloat(AMediaFormat* format, const char *name, float *out) {
  return AMediaFormat_getFloat_ptr(format, name, out);
}
extern bool AMediaFormat_getString(AMediaFormat* format, const char *name, const char **out) __attribute__((weak));
DISABLE_CFI_ICALL
bool  AMediaFormat_getString(AMediaFormat* format, const char *name, const char **out) {
  return AMediaFormat_getString_ptr(format, name, out);
}
extern void AMediaFormat_setInt32(AMediaFormat* format, const char* name, int32_t value) __attribute__((weak));
DISABLE_CFI_ICALL
void  AMediaFormat_setInt32(AMediaFormat* format, const char* name, int32_t value) {
  AMediaFormat_setInt32_ptr(format, name, value);
}
extern void AMediaFormat_setInt64(AMediaFormat* format, const char* name, int64_t value) __attribute__((weak));
DISABLE_CFI_ICALL
void  AMediaFormat_setInt64(AMediaFormat* format, const char* name, int64_t value) {
  AMediaFormat_setInt64_ptr(format, name, value);
}
extern void AMediaFormat_setFloat(AMediaFormat* format, const char* name, float value) __attribute__((weak));
DISABLE_CFI_ICALL
void  AMediaFormat_setFloat(AMediaFormat* format, const char* name, float value) {
  AMediaFormat_setFloat_ptr(format, name, value);
}
extern void AMediaFormat_setString(AMediaFormat* format, const char* name, const char* value) __attribute__((weak));
DISABLE_CFI_ICALL
void  AMediaFormat_setString(AMediaFormat* format, const char* name, const char* value) {
  AMediaFormat_setString_ptr(format, name, value);
}

}  // extern "C"


namespace media_gpu_android {

// Returns true if all stubs have been properly initialized.
bool IsMediacodecInitialized() {
  return AMediaCodec_createCodecByName_ptr &&
         AMediaCodec_createDecoderByType_ptr &&
         AMediaCodec_createEncoderByType_ptr &&
         AMediaCodec_delete_ptr &&
         AMediaCodec_configure_ptr &&
         AMediaCodec_start_ptr &&
         AMediaCodec_stop_ptr &&
         AMediaCodec_flush_ptr &&
         AMediaCodec_getInputBuffer_ptr &&
         AMediaCodec_getOutputBuffer_ptr &&
         AMediaCodec_queueInputBuffer_ptr &&
         AMediaCodec_getOutputFormat_ptr &&
         AMediaCodec_releaseOutputBuffer_ptr &&
         AMediaCodec_setOutputSurface_ptr &&
         AMediaCodec_setParameters_ptr &&
         AMediaCodec_signalEndOfInputStream_ptr &&
         AMediaCodec_setAsyncNotifyCallback_ptr &&
         AMediaCodec_getInputFormat_ptr &&
         AMediaFormat_new_ptr &&
         AMediaFormat_delete_ptr &&
         AMediaFormat_getInt32_ptr &&
         AMediaFormat_getInt64_ptr &&
         AMediaFormat_getFloat_ptr &&
         AMediaFormat_getString_ptr &&
         AMediaFormat_setInt32_ptr &&
         AMediaFormat_setInt64_ptr &&
         AMediaFormat_setFloat_ptr &&
         AMediaFormat_setString_ptr;
}

// Initializes the module stubs.
void InitializeMediacodec(void* module) {
  const char AMediaCodec_createCodecByName_name[] = "AMediaCodec_createCodecByName";
  AMediaCodec_createCodecByName_ptr =
    reinterpret_cast<AMediaCodec* (*)(const char *name)>(
      dlsym(module, AMediaCodec_createCodecByName_name));
  if (!AMediaCodec_createCodecByName_ptr)
    LogDlerror(AMediaCodec_createCodecByName_name);
  const char AMediaCodec_createDecoderByType_name[] = "AMediaCodec_createDecoderByType";
  AMediaCodec_createDecoderByType_ptr =
    reinterpret_cast<AMediaCodec* (*)(const char *mime_type)>(
      dlsym(module, AMediaCodec_createDecoderByType_name));
  if (!AMediaCodec_createDecoderByType_ptr)
    LogDlerror(AMediaCodec_createDecoderByType_name);
  const char AMediaCodec_createEncoderByType_name[] = "AMediaCodec_createEncoderByType";
  AMediaCodec_createEncoderByType_ptr =
    reinterpret_cast<AMediaCodec* (*)(const char *mime_type)>(
      dlsym(module, AMediaCodec_createEncoderByType_name));
  if (!AMediaCodec_createEncoderByType_ptr)
    LogDlerror(AMediaCodec_createEncoderByType_name);
  const char AMediaCodec_delete_name[] = "AMediaCodec_delete";
  AMediaCodec_delete_ptr =
    reinterpret_cast<media_status_t (*)(AMediaCodec* codec)>(
      dlsym(module, AMediaCodec_delete_name));
  if (!AMediaCodec_delete_ptr)
    LogDlerror(AMediaCodec_delete_name);
  const char AMediaCodec_configure_name[] = "AMediaCodec_configure";
  AMediaCodec_configure_ptr =
    reinterpret_cast<media_status_t (*)(AMediaCodec* codec, const AMediaFormat* format, ANativeWindow* surface, AMediaCrypto *crypto, uint32_t flags)>(
      dlsym(module, AMediaCodec_configure_name));
  if (!AMediaCodec_configure_ptr)
    LogDlerror(AMediaCodec_configure_name);
  const char AMediaCodec_start_name[] = "AMediaCodec_start";
  AMediaCodec_start_ptr =
    reinterpret_cast<media_status_t (*)(AMediaCodec* codec)>(
      dlsym(module, AMediaCodec_start_name));
  if (!AMediaCodec_start_ptr)
    LogDlerror(AMediaCodec_start_name);
  const char AMediaCodec_stop_name[] = "AMediaCodec_stop";
  AMediaCodec_stop_ptr =
    reinterpret_cast<media_status_t (*)(AMediaCodec* codec)>(
      dlsym(module, AMediaCodec_stop_name));
  if (!AMediaCodec_stop_ptr)
    LogDlerror(AMediaCodec_stop_name);
  const char AMediaCodec_flush_name[] = "AMediaCodec_flush";
  AMediaCodec_flush_ptr =
    reinterpret_cast<media_status_t (*)(AMediaCodec* codec)>(
      dlsym(module, AMediaCodec_flush_name));
  if (!AMediaCodec_flush_ptr)
    LogDlerror(AMediaCodec_flush_name);
  const char AMediaCodec_getInputBuffer_name[] = "AMediaCodec_getInputBuffer";
  AMediaCodec_getInputBuffer_ptr =
    reinterpret_cast<uint8_t* (*)(AMediaCodec* codec, size_t idx, size_t *out_size)>(
      dlsym(module, AMediaCodec_getInputBuffer_name));
  if (!AMediaCodec_getInputBuffer_ptr)
    LogDlerror(AMediaCodec_getInputBuffer_name);
  const char AMediaCodec_getOutputBuffer_name[] = "AMediaCodec_getOutputBuffer";
  AMediaCodec_getOutputBuffer_ptr =
    reinterpret_cast<uint8_t* (*)(AMediaCodec* codec, size_t idx, size_t *out_size)>(
      dlsym(module, AMediaCodec_getOutputBuffer_name));
  if (!AMediaCodec_getOutputBuffer_ptr)
    LogDlerror(AMediaCodec_getOutputBuffer_name);
  const char AMediaCodec_queueInputBuffer_name[] = "AMediaCodec_queueInputBuffer";
  AMediaCodec_queueInputBuffer_ptr =
    reinterpret_cast<media_status_t (*)(AMediaCodec* codec, size_t idx, off_t offset, size_t size, uint64_t time, uint32_t flags)>(
      dlsym(module, AMediaCodec_queueInputBuffer_name));
  if (!AMediaCodec_queueInputBuffer_ptr)
    LogDlerror(AMediaCodec_queueInputBuffer_name);
  const char AMediaCodec_getOutputFormat_name[] = "AMediaCodec_getOutputFormat";
  AMediaCodec_getOutputFormat_ptr =
    reinterpret_cast<AMediaFormat* (*)(AMediaCodec* codec)>(
      dlsym(module, AMediaCodec_getOutputFormat_name));
  if (!AMediaCodec_getOutputFormat_ptr)
    LogDlerror(AMediaCodec_getOutputFormat_name);
  const char AMediaCodec_releaseOutputBuffer_name[] = "AMediaCodec_releaseOutputBuffer";
  AMediaCodec_releaseOutputBuffer_ptr =
    reinterpret_cast<media_status_t (*)(AMediaCodec* codec, size_t idx, bool render)>(
      dlsym(module, AMediaCodec_releaseOutputBuffer_name));
  if (!AMediaCodec_releaseOutputBuffer_ptr)
    LogDlerror(AMediaCodec_releaseOutputBuffer_name);
  const char AMediaCodec_setOutputSurface_name[] = "AMediaCodec_setOutputSurface";
  AMediaCodec_setOutputSurface_ptr =
    reinterpret_cast<media_status_t (*)(AMediaCodec* codec, ANativeWindow* surface)>(
      dlsym(module, AMediaCodec_setOutputSurface_name));
  if (!AMediaCodec_setOutputSurface_ptr)
    LogDlerror(AMediaCodec_setOutputSurface_name);
  const char AMediaCodec_setParameters_name[] = "AMediaCodec_setParameters";
  AMediaCodec_setParameters_ptr =
    reinterpret_cast<media_status_t (*)(AMediaCodec *codec, const AMediaFormat* params)>(
      dlsym(module, AMediaCodec_setParameters_name));
  if (!AMediaCodec_setParameters_ptr)
    LogDlerror(AMediaCodec_setParameters_name);
  const char AMediaCodec_signalEndOfInputStream_name[] = "AMediaCodec_signalEndOfInputStream";
  AMediaCodec_signalEndOfInputStream_ptr =
    reinterpret_cast<media_status_t (*)(AMediaCodec *codec)>(
      dlsym(module, AMediaCodec_signalEndOfInputStream_name));
  if (!AMediaCodec_signalEndOfInputStream_ptr)
    LogDlerror(AMediaCodec_signalEndOfInputStream_name);
  const char AMediaCodec_setAsyncNotifyCallback_name[] = "AMediaCodec_setAsyncNotifyCallback";
  AMediaCodec_setAsyncNotifyCallback_ptr =
    reinterpret_cast<media_status_t (*)(AMediaCodec* codec, AMediaCodecOnAsyncNotifyCallback callback, void *userdata)>(
      dlsym(module, AMediaCodec_setAsyncNotifyCallback_name));
  if (!AMediaCodec_setAsyncNotifyCallback_ptr)
    LogDlerror(AMediaCodec_setAsyncNotifyCallback_name);
  const char AMediaCodec_getInputFormat_name[] = "AMediaCodec_getInputFormat";
  AMediaCodec_getInputFormat_ptr =
    reinterpret_cast<AMediaFormat* (*)(AMediaCodec* codec)>(
      dlsym(module, AMediaCodec_getInputFormat_name));
  if (!AMediaCodec_getInputFormat_ptr)
    LogDlerror(AMediaCodec_getInputFormat_name);
  const char AMediaFormat_new_name[] = "AMediaFormat_new";
  AMediaFormat_new_ptr =
    reinterpret_cast<AMediaFormat * (*)()>(
      dlsym(module, AMediaFormat_new_name));
  if (!AMediaFormat_new_ptr)
    LogDlerror(AMediaFormat_new_name);
  const char AMediaFormat_delete_name[] = "AMediaFormat_delete";
  AMediaFormat_delete_ptr =
    reinterpret_cast<media_status_t (*)(AMediaFormat* format)>(
      dlsym(module, AMediaFormat_delete_name));
  if (!AMediaFormat_delete_ptr)
    LogDlerror(AMediaFormat_delete_name);
  const char AMediaFormat_getInt32_name[] = "AMediaFormat_getInt32";
  AMediaFormat_getInt32_ptr =
    reinterpret_cast<bool (*)(AMediaFormat* format, const char *name, int32_t *out)>(
      dlsym(module, AMediaFormat_getInt32_name));
  if (!AMediaFormat_getInt32_ptr)
    LogDlerror(AMediaFormat_getInt32_name);
  const char AMediaFormat_getInt64_name[] = "AMediaFormat_getInt64";
  AMediaFormat_getInt64_ptr =
    reinterpret_cast<bool (*)(AMediaFormat* format, const char *name, int64_t *out)>(
      dlsym(module, AMediaFormat_getInt64_name));
  if (!AMediaFormat_getInt64_ptr)
    LogDlerror(AMediaFormat_getInt64_name);
  const char AMediaFormat_getFloat_name[] = "AMediaFormat_getFloat";
  AMediaFormat_getFloat_ptr =
    reinterpret_cast<bool (*)(AMediaFormat* format, const char *name, float *out)>(
      dlsym(module, AMediaFormat_getFloat_name));
  if (!AMediaFormat_getFloat_ptr)
    LogDlerror(AMediaFormat_getFloat_name);
  const char AMediaFormat_getString_name[] = "AMediaFormat_getString";
  AMediaFormat_getString_ptr =
    reinterpret_cast<bool (*)(AMediaFormat* format, const char *name, const char **out)>(
      dlsym(module, AMediaFormat_getString_name));
  if (!AMediaFormat_getString_ptr)
    LogDlerror(AMediaFormat_getString_name);
  const char AMediaFormat_setInt32_name[] = "AMediaFormat_setInt32";
  AMediaFormat_setInt32_ptr =
    reinterpret_cast<void (*)(AMediaFormat* format, const char* name, int32_t value)>(
      dlsym(module, AMediaFormat_setInt32_name));
  if (!AMediaFormat_setInt32_ptr)
    LogDlerror(AMediaFormat_setInt32_name);
  const char AMediaFormat_setInt64_name[] = "AMediaFormat_setInt64";
  AMediaFormat_setInt64_ptr =
    reinterpret_cast<void (*)(AMediaFormat* format, const char* name, int64_t value)>(
      dlsym(module, AMediaFormat_setInt64_name));
  if (!AMediaFormat_setInt64_ptr)
    LogDlerror(AMediaFormat_setInt64_name);
  const char AMediaFormat_setFloat_name[] = "AMediaFormat_setFloat";
  AMediaFormat_setFloat_ptr =
    reinterpret_cast<void (*)(AMediaFormat* format, const char* name, float value)>(
      dlsym(module, AMediaFormat_setFloat_name));
  if (!AMediaFormat_setFloat_ptr)
    LogDlerror(AMediaFormat_setFloat_name);
  const char AMediaFormat_setString_name[] = "AMediaFormat_setString";
  AMediaFormat_setString_ptr =
    reinterpret_cast<void (*)(AMediaFormat* format, const char* name, const char* value)>(
      dlsym(module, AMediaFormat_setString_name));
  if (!AMediaFormat_setString_ptr)
    LogDlerror(AMediaFormat_setString_name);
}

// Uninitialize the module stubs.  Reset pointers to nullptr.
void UninitializeMediacodec() {
  AMediaCodec_createCodecByName_ptr = nullptr;
  AMediaCodec_createDecoderByType_ptr = nullptr;
  AMediaCodec_createEncoderByType_ptr = nullptr;
  AMediaCodec_delete_ptr = nullptr;
  AMediaCodec_configure_ptr = nullptr;
  AMediaCodec_start_ptr = nullptr;
  AMediaCodec_stop_ptr = nullptr;
  AMediaCodec_flush_ptr = nullptr;
  AMediaCodec_getInputBuffer_ptr = nullptr;
  AMediaCodec_getOutputBuffer_ptr = nullptr;
  AMediaCodec_queueInputBuffer_ptr = nullptr;
  AMediaCodec_getOutputFormat_ptr = nullptr;
  AMediaCodec_releaseOutputBuffer_ptr = nullptr;
  AMediaCodec_setOutputSurface_ptr = nullptr;
  AMediaCodec_setParameters_ptr = nullptr;
  AMediaCodec_signalEndOfInputStream_ptr = nullptr;
  AMediaCodec_setAsyncNotifyCallback_ptr = nullptr;
  AMediaCodec_getInputFormat_ptr = nullptr;
  AMediaFormat_new_ptr = nullptr;
  AMediaFormat_delete_ptr = nullptr;
  AMediaFormat_getInt32_ptr = nullptr;
  AMediaFormat_getInt64_ptr = nullptr;
  AMediaFormat_getFloat_ptr = nullptr;
  AMediaFormat_getString_ptr = nullptr;
  AMediaFormat_setInt32_ptr = nullptr;
  AMediaFormat_setInt64_ptr = nullptr;
  AMediaFormat_setFloat_ptr = nullptr;
  AMediaFormat_setString_ptr = nullptr;
}

}  // namespace media_gpu_android

namespace media_gpu_android {
typedef std::map<StubModules, void*> StubHandleMap;
static void CloseLibraries(StubHandleMap* stub_handles) {
  for (StubHandleMap::const_iterator it = stub_handles->begin();
       it != stub_handles->end();
       ++it) {
    dlclose(it->second);
  }

  stub_handles->clear();
}
bool InitializeStubs(const StubPathMap& path_map) {
  StubHandleMap opened_libraries;
  for (int i = 0; i < kNumStubModules; ++i) {
    StubModules cur_module = static_cast<StubModules>(i);
    // If a module is missing, we fail.
    StubPathMap::const_iterator it = path_map.find(cur_module);
    if (it == path_map.end()) {
      CloseLibraries(&opened_libraries);
      return false;
    }

    // Otherwise, attempt to dlopen the library.
    const std::vector<std::string>& paths = it->second;
    bool module_opened = false;
    for (std::vector<std::string>::const_iterator dso_path = paths.begin();
         !module_opened && dso_path != paths.end();
         ++dso_path) {
      void* handle = dlopen(dso_path->c_str(), RTLD_LAZY);
      if (handle) {
        module_opened = true;
        opened_libraries[cur_module] = handle;
      } else {
        VLOG(1) << "dlopen(" << dso_path->c_str() << ") failed.";
        if (char *errstr = dlerror()) {
          VLOG(1) << "dlerror() says:\n" << errstr;
        } else {
          VLOG(1) << "dlerror() is nullptr";
        }

      }
    }

    if (!module_opened) {
      CloseLibraries(&opened_libraries);
      return false;
    }
  }

  // Initialize each module if we have not already failed.
  InitializeMediacodec(opened_libraries[kModuleMediacodec]);

  // Check that each module is initialized correctly.
  // Close all previously opened libraries on failure.
  if (!IsMediacodecInitialized()) {
    UninitializeMediacodec();
    CloseLibraries(&opened_libraries);
    return false;
  }

  return true;
}

}  // namespace media_gpu_android
