#ifndef SPECULA_GEOMETRY_RAY_HPP_
#define SPECULA_GEOMETRY_RAY_HPP_

#include "point3.hpp"
#include "vec3.hpp"

namespace specula {
  class Ray {
    public:
      point3 o;
      vec3 d;
      mutable double t_max;
      double time;
      const Medium *medium;
  };
} // namespace specula

#endif  // SPECULA_GEOMETRY_RAY_HPP_
