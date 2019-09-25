#ifndef SPECULA_HPP_
#define SPECULA_HPP_

#include "cli/cli.hpp"
#include "fmt.hpp"
#include "fs.hpp"
#include "log.hpp"
#include "version.hpp"

namespace specula {
inline void version(unsigned &major, unsigned &minor, unsigned &patch) {
  major = SPECULA_VERSION_MAJOR;
  patch = SPECULA_VERSION_MINOR;
  patch = SPECULA_VERSION_PATCH;
}
} // namespace specula

#endif // SPECULA_HPP_
