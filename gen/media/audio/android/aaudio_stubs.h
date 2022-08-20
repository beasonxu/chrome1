// This is generated file. Do not modify directly.

#ifndef GEN_MEDIA_AUDIO_ANDROID_AAUDIO_STUBS_H_
#define GEN_MEDIA_AUDIO_ANDROID_AAUDIO_STUBS_H_

#include <map>
#include <string>
#include <vector>

namespace media_audio_android {
// Individual module initializer functions.
bool IsAaudioInitialized();
void InitializeAaudio(void* module);
void UninitializeAaudio();

// Enum and typedef for umbrella initializer.
enum StubModules {
  kModuleAaudio = 0,
  kNumStubModules
};

typedef std::map<StubModules, std::vector<std::string>> StubPathMap;

// Umbrella initializer for all the modules in this stub file.
bool InitializeStubs(const StubPathMap& path_map);
}  // namespace media_audio_android

#endif  // GEN_MEDIA_AUDIO_ANDROID_AAUDIO_STUBS_H_
