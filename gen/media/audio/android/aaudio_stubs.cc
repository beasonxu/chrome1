// This is generated file. Do not modify directly.

#include "media/audio/android/aaudio_stubs.h"

#include <dlfcn.h>   // For dlsym, dlopen, RTLD_LAZY.

#include <cstdarg>

#include "base/compiler_specific.h"
#include "base/logging.h"

// The extra include header needed in the generated stub file for defining
// various AAudio types.

extern "C" {

#include <aaudio/AAudio.h>

}

namespace  {

void LogDlerror(const char* symbol) {
  VLOG(1) << "Couldn't load " << symbol << ", dlerror() says:\n" << dlerror();
}

}  // namespace 

extern "C" {

// Static pointers that will hold the location of the real function
// implementations after the module has been loaded.
static const char * (*AAudio_convertResultToText_ptr)(aaudio_result_t returnCode) = nullptr;
static aaudio_result_t (*AAudio_createStreamBuilder_ptr)(AAudioStreamBuilder** builder) = nullptr;
static void (*AAudioStreamBuilder_setDeviceId_ptr)(AAudioStreamBuilder* builder, int32_t deviceId) = nullptr;
static void (*AAudioStreamBuilder_setSampleRate_ptr)(AAudioStreamBuilder* builder, int32_t sampleRate) = nullptr;
static void (*AAudioStreamBuilder_setChannelCount_ptr)(AAudioStreamBuilder* builder, int32_t channelCount) = nullptr;
static void (*AAudioStreamBuilder_setSamplesPerFrame_ptr)(AAudioStreamBuilder* builder, int32_t samplesPerFrame) = nullptr;
static void (*AAudioStreamBuilder_setFormat_ptr)(AAudioStreamBuilder* builder, aaudio_format_t format) = nullptr;
static void (*AAudioStreamBuilder_setDirection_ptr)(AAudioStreamBuilder* builder, aaudio_direction_t direction) = nullptr;
static void (*AAudioStreamBuilder_setBufferCapacityInFrames_ptr)(AAudioStreamBuilder* builder, int32_t numFrames) = nullptr;
static void (*AAudioStreamBuilder_setPerformanceMode_ptr)(AAudioStreamBuilder* builder, aaudio_performance_mode_t mode) = nullptr;
static void (*AAudioStreamBuilder_setFramesPerDataCallback_ptr)(AAudioStreamBuilder* builder, int32_t numFrames) = nullptr;
static void (*AAudioStreamBuilder_setUsage_ptr)(AAudioStreamBuilder* builder, aaudio_usage_t usage) = nullptr;
static void (*AAudioStreamBuilder_setDataCallback_ptr)(AAudioStreamBuilder* builder, AAudioStream_dataCallback callback, void *userData) = nullptr;
static void (*AAudioStreamBuilder_setErrorCallback_ptr)(AAudioStreamBuilder* builder, AAudioStream_errorCallback callback, void *userData) = nullptr;
static aaudio_result_t (*AAudioStreamBuilder_openStream_ptr)(AAudioStreamBuilder* builder, AAudioStream** stream) = nullptr;
static aaudio_result_t (*AAudioStreamBuilder_delete_ptr)(AAudioStreamBuilder* builder) = nullptr;
static aaudio_result_t (*AAudioStream_close_ptr)(AAudioStream* stream) = nullptr;
static aaudio_result_t (*AAudioStream_requestStart_ptr)(AAudioStream* stream) = nullptr;
static aaudio_result_t (*AAudioStream_requestStop_ptr)(AAudioStream* stream) = nullptr;
static aaudio_result_t (*AAudioStream_getTimestamp_ptr)(AAudioStream* stream, clockid_t clockid, int64_t *framePosition, int64_t *timeNanoseconds) = nullptr;
static aaudio_result_t (*AAudioStream_setBufferSizeInFrames_ptr)(AAudioStream* stream, int32_t numFrames) = nullptr;
static int32_t (*AAudioStream_getFramesPerBurst_ptr)(AAudioStream* stream) = nullptr;
static int64_t (*AAudioStream_getFramesWritten_ptr)(AAudioStream* stream) = nullptr;
static aaudio_result_t (*AAudioStream_waitForStateChange_ptr)(AAudioStream* stream, aaudio_stream_state_t inputState, aaudio_stream_state_t *nextState, int64_t timeoutNanoseconds) = nullptr;

// Stubs that dispatch to the real implementations.
extern const char * AAudio_convertResultToText(aaudio_result_t returnCode) __attribute__((weak));
DISABLE_CFI_ICALL
const char *  AAudio_convertResultToText(aaudio_result_t returnCode) {
  return AAudio_convertResultToText_ptr(returnCode);
}
extern aaudio_result_t AAudio_createStreamBuilder(AAudioStreamBuilder** builder) __attribute__((weak));
DISABLE_CFI_ICALL
aaudio_result_t  AAudio_createStreamBuilder(AAudioStreamBuilder** builder) {
  return AAudio_createStreamBuilder_ptr(builder);
}
extern void AAudioStreamBuilder_setDeviceId(AAudioStreamBuilder* builder, int32_t deviceId) __attribute__((weak));
DISABLE_CFI_ICALL
void  AAudioStreamBuilder_setDeviceId(AAudioStreamBuilder* builder, int32_t deviceId) {
  AAudioStreamBuilder_setDeviceId_ptr(builder, deviceId);
}
extern void AAudioStreamBuilder_setSampleRate(AAudioStreamBuilder* builder, int32_t sampleRate) __attribute__((weak));
DISABLE_CFI_ICALL
void  AAudioStreamBuilder_setSampleRate(AAudioStreamBuilder* builder, int32_t sampleRate) {
  AAudioStreamBuilder_setSampleRate_ptr(builder, sampleRate);
}
extern void AAudioStreamBuilder_setChannelCount(AAudioStreamBuilder* builder, int32_t channelCount) __attribute__((weak));
DISABLE_CFI_ICALL
void  AAudioStreamBuilder_setChannelCount(AAudioStreamBuilder* builder, int32_t channelCount) {
  AAudioStreamBuilder_setChannelCount_ptr(builder, channelCount);
}
extern void AAudioStreamBuilder_setSamplesPerFrame(AAudioStreamBuilder* builder, int32_t samplesPerFrame) __attribute__((weak));
DISABLE_CFI_ICALL
void  AAudioStreamBuilder_setSamplesPerFrame(AAudioStreamBuilder* builder, int32_t samplesPerFrame) {
  AAudioStreamBuilder_setSamplesPerFrame_ptr(builder, samplesPerFrame);
}
extern void AAudioStreamBuilder_setFormat(AAudioStreamBuilder* builder, aaudio_format_t format) __attribute__((weak));
DISABLE_CFI_ICALL
void  AAudioStreamBuilder_setFormat(AAudioStreamBuilder* builder, aaudio_format_t format) {
  AAudioStreamBuilder_setFormat_ptr(builder, format);
}
extern void AAudioStreamBuilder_setDirection(AAudioStreamBuilder* builder, aaudio_direction_t direction) __attribute__((weak));
DISABLE_CFI_ICALL
void  AAudioStreamBuilder_setDirection(AAudioStreamBuilder* builder, aaudio_direction_t direction) {
  AAudioStreamBuilder_setDirection_ptr(builder, direction);
}
extern void AAudioStreamBuilder_setBufferCapacityInFrames(AAudioStreamBuilder* builder, int32_t numFrames) __attribute__((weak));
DISABLE_CFI_ICALL
void  AAudioStreamBuilder_setBufferCapacityInFrames(AAudioStreamBuilder* builder, int32_t numFrames) {
  AAudioStreamBuilder_setBufferCapacityInFrames_ptr(builder, numFrames);
}
extern void AAudioStreamBuilder_setPerformanceMode(AAudioStreamBuilder* builder, aaudio_performance_mode_t mode) __attribute__((weak));
DISABLE_CFI_ICALL
void  AAudioStreamBuilder_setPerformanceMode(AAudioStreamBuilder* builder, aaudio_performance_mode_t mode) {
  AAudioStreamBuilder_setPerformanceMode_ptr(builder, mode);
}
extern void AAudioStreamBuilder_setFramesPerDataCallback(AAudioStreamBuilder* builder, int32_t numFrames) __attribute__((weak));
DISABLE_CFI_ICALL
void  AAudioStreamBuilder_setFramesPerDataCallback(AAudioStreamBuilder* builder, int32_t numFrames) {
  AAudioStreamBuilder_setFramesPerDataCallback_ptr(builder, numFrames);
}
extern void AAudioStreamBuilder_setUsage(AAudioStreamBuilder* builder, aaudio_usage_t usage) __attribute__((weak));
DISABLE_CFI_ICALL
void  AAudioStreamBuilder_setUsage(AAudioStreamBuilder* builder, aaudio_usage_t usage) {
  AAudioStreamBuilder_setUsage_ptr(builder, usage);
}
extern void AAudioStreamBuilder_setDataCallback(AAudioStreamBuilder* builder, AAudioStream_dataCallback callback, void *userData) __attribute__((weak));
DISABLE_CFI_ICALL
void  AAudioStreamBuilder_setDataCallback(AAudioStreamBuilder* builder, AAudioStream_dataCallback callback, void *userData) {
  AAudioStreamBuilder_setDataCallback_ptr(builder, callback, userData);
}
extern void AAudioStreamBuilder_setErrorCallback(AAudioStreamBuilder* builder, AAudioStream_errorCallback callback, void *userData) __attribute__((weak));
DISABLE_CFI_ICALL
void  AAudioStreamBuilder_setErrorCallback(AAudioStreamBuilder* builder, AAudioStream_errorCallback callback, void *userData) {
  AAudioStreamBuilder_setErrorCallback_ptr(builder, callback, userData);
}
extern aaudio_result_t AAudioStreamBuilder_openStream(AAudioStreamBuilder* builder, AAudioStream** stream) __attribute__((weak));
DISABLE_CFI_ICALL
aaudio_result_t  AAudioStreamBuilder_openStream(AAudioStreamBuilder* builder, AAudioStream** stream) {
  return AAudioStreamBuilder_openStream_ptr(builder, stream);
}
extern aaudio_result_t AAudioStreamBuilder_delete(AAudioStreamBuilder* builder) __attribute__((weak));
DISABLE_CFI_ICALL
aaudio_result_t  AAudioStreamBuilder_delete(AAudioStreamBuilder* builder) {
  return AAudioStreamBuilder_delete_ptr(builder);
}
extern aaudio_result_t AAudioStream_close(AAudioStream* stream) __attribute__((weak));
DISABLE_CFI_ICALL
aaudio_result_t  AAudioStream_close(AAudioStream* stream) {
  return AAudioStream_close_ptr(stream);
}
extern aaudio_result_t AAudioStream_requestStart(AAudioStream* stream) __attribute__((weak));
DISABLE_CFI_ICALL
aaudio_result_t  AAudioStream_requestStart(AAudioStream* stream) {
  return AAudioStream_requestStart_ptr(stream);
}
extern aaudio_result_t AAudioStream_requestStop(AAudioStream* stream) __attribute__((weak));
DISABLE_CFI_ICALL
aaudio_result_t  AAudioStream_requestStop(AAudioStream* stream) {
  return AAudioStream_requestStop_ptr(stream);
}
extern aaudio_result_t AAudioStream_getTimestamp(AAudioStream* stream, clockid_t clockid, int64_t *framePosition, int64_t *timeNanoseconds) __attribute__((weak));
DISABLE_CFI_ICALL
aaudio_result_t  AAudioStream_getTimestamp(AAudioStream* stream, clockid_t clockid, int64_t *framePosition, int64_t *timeNanoseconds) {
  return AAudioStream_getTimestamp_ptr(stream, clockid, framePosition, timeNanoseconds);
}
extern aaudio_result_t AAudioStream_setBufferSizeInFrames(AAudioStream* stream, int32_t numFrames) __attribute__((weak));
DISABLE_CFI_ICALL
aaudio_result_t  AAudioStream_setBufferSizeInFrames(AAudioStream* stream, int32_t numFrames) {
  return AAudioStream_setBufferSizeInFrames_ptr(stream, numFrames);
}
extern int32_t AAudioStream_getFramesPerBurst(AAudioStream* stream) __attribute__((weak));
DISABLE_CFI_ICALL
int32_t  AAudioStream_getFramesPerBurst(AAudioStream* stream) {
  return AAudioStream_getFramesPerBurst_ptr(stream);
}
extern int64_t AAudioStream_getFramesWritten(AAudioStream* stream) __attribute__((weak));
DISABLE_CFI_ICALL
int64_t  AAudioStream_getFramesWritten(AAudioStream* stream) {
  return AAudioStream_getFramesWritten_ptr(stream);
}
extern aaudio_result_t AAudioStream_waitForStateChange(AAudioStream* stream, aaudio_stream_state_t inputState, aaudio_stream_state_t *nextState, int64_t timeoutNanoseconds) __attribute__((weak));
DISABLE_CFI_ICALL
aaudio_result_t  AAudioStream_waitForStateChange(AAudioStream* stream, aaudio_stream_state_t inputState, aaudio_stream_state_t *nextState, int64_t timeoutNanoseconds) {
  return AAudioStream_waitForStateChange_ptr(stream, inputState, nextState, timeoutNanoseconds);
}

}  // extern "C"


namespace media_audio_android {

// Returns true if all stubs have been properly initialized.
bool IsAaudioInitialized() {
  return AAudio_convertResultToText_ptr &&
         AAudio_createStreamBuilder_ptr &&
         AAudioStreamBuilder_setDeviceId_ptr &&
         AAudioStreamBuilder_setSampleRate_ptr &&
         AAudioStreamBuilder_setChannelCount_ptr &&
         AAudioStreamBuilder_setSamplesPerFrame_ptr &&
         AAudioStreamBuilder_setFormat_ptr &&
         AAudioStreamBuilder_setDirection_ptr &&
         AAudioStreamBuilder_setBufferCapacityInFrames_ptr &&
         AAudioStreamBuilder_setPerformanceMode_ptr &&
         AAudioStreamBuilder_setFramesPerDataCallback_ptr &&
         AAudioStreamBuilder_setUsage_ptr &&
         AAudioStreamBuilder_setDataCallback_ptr &&
         AAudioStreamBuilder_setErrorCallback_ptr &&
         AAudioStreamBuilder_openStream_ptr &&
         AAudioStreamBuilder_delete_ptr &&
         AAudioStream_close_ptr &&
         AAudioStream_requestStart_ptr &&
         AAudioStream_requestStop_ptr &&
         AAudioStream_getTimestamp_ptr &&
         AAudioStream_setBufferSizeInFrames_ptr &&
         AAudioStream_getFramesPerBurst_ptr &&
         AAudioStream_getFramesWritten_ptr &&
         AAudioStream_waitForStateChange_ptr;
}

// Initializes the module stubs.
void InitializeAaudio(void* module) {
  const char AAudio_convertResultToText_name[] = "AAudio_convertResultToText";
  AAudio_convertResultToText_ptr =
    reinterpret_cast<const char * (*)(aaudio_result_t returnCode)>(
      dlsym(module, AAudio_convertResultToText_name));
  if (!AAudio_convertResultToText_ptr)
    LogDlerror(AAudio_convertResultToText_name);
  const char AAudio_createStreamBuilder_name[] = "AAudio_createStreamBuilder";
  AAudio_createStreamBuilder_ptr =
    reinterpret_cast<aaudio_result_t (*)(AAudioStreamBuilder** builder)>(
      dlsym(module, AAudio_createStreamBuilder_name));
  if (!AAudio_createStreamBuilder_ptr)
    LogDlerror(AAudio_createStreamBuilder_name);
  const char AAudioStreamBuilder_setDeviceId_name[] = "AAudioStreamBuilder_setDeviceId";
  AAudioStreamBuilder_setDeviceId_ptr =
    reinterpret_cast<void (*)(AAudioStreamBuilder* builder, int32_t deviceId)>(
      dlsym(module, AAudioStreamBuilder_setDeviceId_name));
  if (!AAudioStreamBuilder_setDeviceId_ptr)
    LogDlerror(AAudioStreamBuilder_setDeviceId_name);
  const char AAudioStreamBuilder_setSampleRate_name[] = "AAudioStreamBuilder_setSampleRate";
  AAudioStreamBuilder_setSampleRate_ptr =
    reinterpret_cast<void (*)(AAudioStreamBuilder* builder, int32_t sampleRate)>(
      dlsym(module, AAudioStreamBuilder_setSampleRate_name));
  if (!AAudioStreamBuilder_setSampleRate_ptr)
    LogDlerror(AAudioStreamBuilder_setSampleRate_name);
  const char AAudioStreamBuilder_setChannelCount_name[] = "AAudioStreamBuilder_setChannelCount";
  AAudioStreamBuilder_setChannelCount_ptr =
    reinterpret_cast<void (*)(AAudioStreamBuilder* builder, int32_t channelCount)>(
      dlsym(module, AAudioStreamBuilder_setChannelCount_name));
  if (!AAudioStreamBuilder_setChannelCount_ptr)
    LogDlerror(AAudioStreamBuilder_setChannelCount_name);
  const char AAudioStreamBuilder_setSamplesPerFrame_name[] = "AAudioStreamBuilder_setSamplesPerFrame";
  AAudioStreamBuilder_setSamplesPerFrame_ptr =
    reinterpret_cast<void (*)(AAudioStreamBuilder* builder, int32_t samplesPerFrame)>(
      dlsym(module, AAudioStreamBuilder_setSamplesPerFrame_name));
  if (!AAudioStreamBuilder_setSamplesPerFrame_ptr)
    LogDlerror(AAudioStreamBuilder_setSamplesPerFrame_name);
  const char AAudioStreamBuilder_setFormat_name[] = "AAudioStreamBuilder_setFormat";
  AAudioStreamBuilder_setFormat_ptr =
    reinterpret_cast<void (*)(AAudioStreamBuilder* builder, aaudio_format_t format)>(
      dlsym(module, AAudioStreamBuilder_setFormat_name));
  if (!AAudioStreamBuilder_setFormat_ptr)
    LogDlerror(AAudioStreamBuilder_setFormat_name);
  const char AAudioStreamBuilder_setDirection_name[] = "AAudioStreamBuilder_setDirection";
  AAudioStreamBuilder_setDirection_ptr =
    reinterpret_cast<void (*)(AAudioStreamBuilder* builder, aaudio_direction_t direction)>(
      dlsym(module, AAudioStreamBuilder_setDirection_name));
  if (!AAudioStreamBuilder_setDirection_ptr)
    LogDlerror(AAudioStreamBuilder_setDirection_name);
  const char AAudioStreamBuilder_setBufferCapacityInFrames_name[] = "AAudioStreamBuilder_setBufferCapacityInFrames";
  AAudioStreamBuilder_setBufferCapacityInFrames_ptr =
    reinterpret_cast<void (*)(AAudioStreamBuilder* builder, int32_t numFrames)>(
      dlsym(module, AAudioStreamBuilder_setBufferCapacityInFrames_name));
  if (!AAudioStreamBuilder_setBufferCapacityInFrames_ptr)
    LogDlerror(AAudioStreamBuilder_setBufferCapacityInFrames_name);
  const char AAudioStreamBuilder_setPerformanceMode_name[] = "AAudioStreamBuilder_setPerformanceMode";
  AAudioStreamBuilder_setPerformanceMode_ptr =
    reinterpret_cast<void (*)(AAudioStreamBuilder* builder, aaudio_performance_mode_t mode)>(
      dlsym(module, AAudioStreamBuilder_setPerformanceMode_name));
  if (!AAudioStreamBuilder_setPerformanceMode_ptr)
    LogDlerror(AAudioStreamBuilder_setPerformanceMode_name);
  const char AAudioStreamBuilder_setFramesPerDataCallback_name[] = "AAudioStreamBuilder_setFramesPerDataCallback";
  AAudioStreamBuilder_setFramesPerDataCallback_ptr =
    reinterpret_cast<void (*)(AAudioStreamBuilder* builder, int32_t numFrames)>(
      dlsym(module, AAudioStreamBuilder_setFramesPerDataCallback_name));
  if (!AAudioStreamBuilder_setFramesPerDataCallback_ptr)
    LogDlerror(AAudioStreamBuilder_setFramesPerDataCallback_name);
  const char AAudioStreamBuilder_setUsage_name[] = "AAudioStreamBuilder_setUsage";
  AAudioStreamBuilder_setUsage_ptr =
    reinterpret_cast<void (*)(AAudioStreamBuilder* builder, aaudio_usage_t usage)>(
      dlsym(module, AAudioStreamBuilder_setUsage_name));
  if (!AAudioStreamBuilder_setUsage_ptr)
    LogDlerror(AAudioStreamBuilder_setUsage_name);
  const char AAudioStreamBuilder_setDataCallback_name[] = "AAudioStreamBuilder_setDataCallback";
  AAudioStreamBuilder_setDataCallback_ptr =
    reinterpret_cast<void (*)(AAudioStreamBuilder* builder, AAudioStream_dataCallback callback, void *userData)>(
      dlsym(module, AAudioStreamBuilder_setDataCallback_name));
  if (!AAudioStreamBuilder_setDataCallback_ptr)
    LogDlerror(AAudioStreamBuilder_setDataCallback_name);
  const char AAudioStreamBuilder_setErrorCallback_name[] = "AAudioStreamBuilder_setErrorCallback";
  AAudioStreamBuilder_setErrorCallback_ptr =
    reinterpret_cast<void (*)(AAudioStreamBuilder* builder, AAudioStream_errorCallback callback, void *userData)>(
      dlsym(module, AAudioStreamBuilder_setErrorCallback_name));
  if (!AAudioStreamBuilder_setErrorCallback_ptr)
    LogDlerror(AAudioStreamBuilder_setErrorCallback_name);
  const char AAudioStreamBuilder_openStream_name[] = "AAudioStreamBuilder_openStream";
  AAudioStreamBuilder_openStream_ptr =
    reinterpret_cast<aaudio_result_t (*)(AAudioStreamBuilder* builder, AAudioStream** stream)>(
      dlsym(module, AAudioStreamBuilder_openStream_name));
  if (!AAudioStreamBuilder_openStream_ptr)
    LogDlerror(AAudioStreamBuilder_openStream_name);
  const char AAudioStreamBuilder_delete_name[] = "AAudioStreamBuilder_delete";
  AAudioStreamBuilder_delete_ptr =
    reinterpret_cast<aaudio_result_t (*)(AAudioStreamBuilder* builder)>(
      dlsym(module, AAudioStreamBuilder_delete_name));
  if (!AAudioStreamBuilder_delete_ptr)
    LogDlerror(AAudioStreamBuilder_delete_name);
  const char AAudioStream_close_name[] = "AAudioStream_close";
  AAudioStream_close_ptr =
    reinterpret_cast<aaudio_result_t (*)(AAudioStream* stream)>(
      dlsym(module, AAudioStream_close_name));
  if (!AAudioStream_close_ptr)
    LogDlerror(AAudioStream_close_name);
  const char AAudioStream_requestStart_name[] = "AAudioStream_requestStart";
  AAudioStream_requestStart_ptr =
    reinterpret_cast<aaudio_result_t (*)(AAudioStream* stream)>(
      dlsym(module, AAudioStream_requestStart_name));
  if (!AAudioStream_requestStart_ptr)
    LogDlerror(AAudioStream_requestStart_name);
  const char AAudioStream_requestStop_name[] = "AAudioStream_requestStop";
  AAudioStream_requestStop_ptr =
    reinterpret_cast<aaudio_result_t (*)(AAudioStream* stream)>(
      dlsym(module, AAudioStream_requestStop_name));
  if (!AAudioStream_requestStop_ptr)
    LogDlerror(AAudioStream_requestStop_name);
  const char AAudioStream_getTimestamp_name[] = "AAudioStream_getTimestamp";
  AAudioStream_getTimestamp_ptr =
    reinterpret_cast<aaudio_result_t (*)(AAudioStream* stream, clockid_t clockid, int64_t *framePosition, int64_t *timeNanoseconds)>(
      dlsym(module, AAudioStream_getTimestamp_name));
  if (!AAudioStream_getTimestamp_ptr)
    LogDlerror(AAudioStream_getTimestamp_name);
  const char AAudioStream_setBufferSizeInFrames_name[] = "AAudioStream_setBufferSizeInFrames";
  AAudioStream_setBufferSizeInFrames_ptr =
    reinterpret_cast<aaudio_result_t (*)(AAudioStream* stream, int32_t numFrames)>(
      dlsym(module, AAudioStream_setBufferSizeInFrames_name));
  if (!AAudioStream_setBufferSizeInFrames_ptr)
    LogDlerror(AAudioStream_setBufferSizeInFrames_name);
  const char AAudioStream_getFramesPerBurst_name[] = "AAudioStream_getFramesPerBurst";
  AAudioStream_getFramesPerBurst_ptr =
    reinterpret_cast<int32_t (*)(AAudioStream* stream)>(
      dlsym(module, AAudioStream_getFramesPerBurst_name));
  if (!AAudioStream_getFramesPerBurst_ptr)
    LogDlerror(AAudioStream_getFramesPerBurst_name);
  const char AAudioStream_getFramesWritten_name[] = "AAudioStream_getFramesWritten";
  AAudioStream_getFramesWritten_ptr =
    reinterpret_cast<int64_t (*)(AAudioStream* stream)>(
      dlsym(module, AAudioStream_getFramesWritten_name));
  if (!AAudioStream_getFramesWritten_ptr)
    LogDlerror(AAudioStream_getFramesWritten_name);
  const char AAudioStream_waitForStateChange_name[] = "AAudioStream_waitForStateChange";
  AAudioStream_waitForStateChange_ptr =
    reinterpret_cast<aaudio_result_t (*)(AAudioStream* stream, aaudio_stream_state_t inputState, aaudio_stream_state_t *nextState, int64_t timeoutNanoseconds)>(
      dlsym(module, AAudioStream_waitForStateChange_name));
  if (!AAudioStream_waitForStateChange_ptr)
    LogDlerror(AAudioStream_waitForStateChange_name);
}

// Uninitialize the module stubs.  Reset pointers to nullptr.
void UninitializeAaudio() {
  AAudio_convertResultToText_ptr = nullptr;
  AAudio_createStreamBuilder_ptr = nullptr;
  AAudioStreamBuilder_setDeviceId_ptr = nullptr;
  AAudioStreamBuilder_setSampleRate_ptr = nullptr;
  AAudioStreamBuilder_setChannelCount_ptr = nullptr;
  AAudioStreamBuilder_setSamplesPerFrame_ptr = nullptr;
  AAudioStreamBuilder_setFormat_ptr = nullptr;
  AAudioStreamBuilder_setDirection_ptr = nullptr;
  AAudioStreamBuilder_setBufferCapacityInFrames_ptr = nullptr;
  AAudioStreamBuilder_setPerformanceMode_ptr = nullptr;
  AAudioStreamBuilder_setFramesPerDataCallback_ptr = nullptr;
  AAudioStreamBuilder_setUsage_ptr = nullptr;
  AAudioStreamBuilder_setDataCallback_ptr = nullptr;
  AAudioStreamBuilder_setErrorCallback_ptr = nullptr;
  AAudioStreamBuilder_openStream_ptr = nullptr;
  AAudioStreamBuilder_delete_ptr = nullptr;
  AAudioStream_close_ptr = nullptr;
  AAudioStream_requestStart_ptr = nullptr;
  AAudioStream_requestStop_ptr = nullptr;
  AAudioStream_getTimestamp_ptr = nullptr;
  AAudioStream_setBufferSizeInFrames_ptr = nullptr;
  AAudioStream_getFramesPerBurst_ptr = nullptr;
  AAudioStream_getFramesWritten_ptr = nullptr;
  AAudioStream_waitForStateChange_ptr = nullptr;
}

}  // namespace media_audio_android

namespace media_audio_android {
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
  InitializeAaudio(opened_libraries[kModuleAaudio]);

  // Check that each module is initialized correctly.
  // Close all previously opened libraries on failure.
  if (!IsAaudioInitialized()) {
    UninitializeAaudio();
    CloseLibraries(&opened_libraries);
    return false;
  }

  return true;
}

}  // namespace media_audio_android
