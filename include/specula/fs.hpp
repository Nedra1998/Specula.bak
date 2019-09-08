#if defined(__cplusplus) && __cplusplus >= 201703L && defined(__has_include)
#if __has_include(<filesystem>)
#define GHC_USE_STD_FS
#include <filesystem>
namespace specula {
namespace fs = std::filesystem;
} // namespace specula
#endif
#endif
#ifndef GHC_USE_STD_FS
#include <ghc/filesystem.hpp>
namespace specula {
namespace fs = ghc::filesystem;
} // namespace specula
#endif
