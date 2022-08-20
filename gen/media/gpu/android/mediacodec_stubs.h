// This is generated file. Do not modify directly.

#ifndef GEN_MEDIA_GPU_ANDROID_MEDIACODEC_STUBS_H_
#define GEN_MEDIA_GPU_ANDROID_MEDIACODEC_STUBS_H_

#include <map>
#include <string>
#include <vector>

namespace media_gpu_android {
// Individual module initializer functions.
bool IsMediacodecInitialized();
void InitializeMediacodec(void* module);
void UninitializeMediacodec();

// Enum and typedef for umbrella initializer.
enum StubModules {
  kModuleMediacodec = 0,
  kNumStubModules
};

typedef std::map<StubModules, std::vector<std::string>> StubPathMap;

// Umbrella initializer for all the modules in this stub file.
bool InitializeStubs(const StubPathMap& path_map);
}  // namespace media_gpu_android

#endif  // GEN_MEDIA_GPU_ANDROID_MEDIACODEC_STUBS_H_
