#ifndef SPECULA_GEOMETRY_POINT_HPP_
#define SPECULA_GEOMETRY_POINT_HPP_

#include <cassert>
#include <cmath>

#include "vector.hpp"

namespace specula {
namespace geometry {
template <typename _T> class Point2 {
public:
  Point2() : x(), y() {}
  Point2(const _T &x, const _T &y) : x(x), y(y) { assert(!has_nan()); }
  template <typename _U>
  Point2(const Point2<_U> &p)
      : x(static_cast<_T>(p.x)), y(static_cast<_T>(p.y)) {
    assert(!has_nan());
  }

  template <typename _U> explicit operator Vector2<_U>() const {
    return Vector2<_U>(x, y);
  }

  Point2<_T> operator+(const Vector2<_T> &v) const {
    return Point2<_T>(x+v.x, y+v.y);
  }
  Point2<_T> &operator+=(const Vector2<_T> &v) {
    x += v.x;
    y += v.y;
    return *this;
  }

  _T x, y;

private:
  bool has_nan() const { return (std::isnan(x) || std::isnan(y)); }
};
template <typename _T> class Point3 {
public:
  Point3() : x(), y(), z() {}
  Point3(const _T &x, const _T &y, const _T &z) : x(x), y(y), z(z) {
    assert(!has_nan());
  }
  template <typename _U>
  Point3(const Point2<_U> &p)
      : x(static_cast<_T>(p.x)), y(static_cast<_T>(p.y)),
        z(static_cast<_T>(p.z)) {
    assert(!has_nan());
  }

  template <typename _U> explicit operator Vector3<_U>() const {
    return Vector3<_U>(x, y, z);
  }

  Point3<_T> operator+(const Vector3<_T> &v) const {
    return Point2<_T>(x+v.x, y+v.y);
  }
  Point3<_T> &operator+=(const Vector3<_T> &v) {
    x += v.x;
    y += v.y;
    return *this;
  }

  _T x, y, z;

private:
  bool has_nan() const {
    return (std::isnan(x) || std::isnan(y) || std::isnan(z));
  }
};

typedef Point2<double> Point2f;
typedef Point2<int> Point2i;
typedef Point3<double> Point3f;
typedef Point3<int> Point3i;
} // namespace geometry
} // namespace specula

#endif // SPECULA_GEOMETRY_POINT_HPP_
