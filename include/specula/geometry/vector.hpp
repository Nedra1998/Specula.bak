#ifndef SPECULA_GEOMETRY_VECTOR_HPP_
#define SPECULA_GEOMETRY_VECTOR_HPP_

#include <cassert>
#include <cmath>
#include <string>

namespace specula {
namespace geometry {

template <typename _T> class Vector2 {
public:
  Vector2() : x(0), y(0) {}
  Vector2(const _T &x, const _T &y) : x(x), y(y) { assert(!has_nan()); }

  _T operator[](int i) const {
    assert(i >= 0 && i <= 1);
    if (i == 0)
      return x;
    return y;
  }
  _T &operator[](int i) {
    assert(i >= 0 && i <= 1);
    if (i == 0)
      return x;
    return y;
  }

  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value, Vector2<_T>>::type
  operator+(const Vector2<_U> &v) const {
    return Vector2<_T>{x + static_cast<_T>(v.x), y + static_cast<_T>(v.y)};
  }
  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value,
                          Vector2<_T> &>::type
  operator+=(const Vector2<_U> &v) {
    x += static_cast<_T>(v.x);
    y += static_cast<_T>(v.y);
    return *this;
  }

  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value, Vector2<_T>>::type
  operator-(const Vector2<_U> &v) const {
    return Vector2<_T>{x - static_cast<_T>(v.x), y - static_cast<_T>(v.y)};
  }
  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value,
                          Vector2<_T> &>::type
  operator-=(const Vector2<_U> &v) {
    x -= static_cast<_T>(v.x);
    y -= static_cast<_T>(v.y);
    return *this;
  }

  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value, Vector2<_T>>::type
  operator*(const _U &s) const {
    return Vector2<_T>{x * static_cast<_T>(s), y * static_cast<_T>(s)};
  }
  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value,
                          Vector2<_T> &>::type
  operator*=(const _U &s) {
    x *= static_cast<_T>(s);
    y *= static_cast<_T>(s);
    return *this;
  }

  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value, Vector2<_T>>::type
  operator/(const _U &f) const {
    assert(f != 0);
    _T inv = _T(1) / static_cast<_T>(f);
    return Vector2<_T>{x * inv, y * inv};
  }
  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value,
                          Vector2<_T> &>::type
  operator/=(const _U &f) {
    assert(f != 0);
    _T inv = _T(1) / static_cast<_T>(f);
    x *= inv;
    y *= inv;
    return *this;
  }

  Vector2<_T> operator-() const { return Vector2<_T>{-x, -y}; }

  const std::string str() const {
    return ('<' + std::to_string(x) + ',' + std::to_string(y) + '>');
  }

  inline _T length_squared() const { return x * x + y * y; }
  inline _T length() const { return std::sqrt(length_squared()); }

  _T x, y;

private:
  bool has_nan() const { return std::isnan(x) || std::isnan(y); }
};
template <typename _T> class Vector3 {
public:
  Vector3() : x(), y(), z() {}
  Vector3(const _T &x, const _T &y, const _T &z) : x(x), y(y), z(z) {
    assert(!has_nan());
  }

  _T operator[](int i) const {
    assert(i >= 0 && i <= 2);
    if (i == 0)
      return x;
    if (i == 1)
      return y;
    return z;
  }
  _T &operator[](int i) {
    assert(i >= 0 && i <= 2);
    if (i == 0)
      return x;
    if (i == 1)
      return y;
    return z;
  }

  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value, Vector3<_T>>::type
  operator+(const Vector3<_U> &v) const {
    return Vector3<_T>{x + static_cast<_T>(v.x), y + static_cast<_T>(v.y),
                       z + static_cast<_T>(v.z)};
  }
  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value,
                          Vector3<_T> &>::type
  operator+=(const Vector3<_U> &v) {
    x += static_cast<_T>(v.x);
    y += static_cast<_T>(v.y);
    z += static_cast<_T>(v.z);
    return *this;
  }

  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value, Vector3<_T>>::type
  operator-(const Vector3<_U> &v) const {
    return Vector3<_T>{x - static_cast<_T>(v.x), y - static_cast<_T>(v.y),
                       z - static_cast<_T>(v.z)};
  }
  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value,
                          Vector3<_T> &>::type
  operator-=(const Vector3<_U> &v) {
    x -= static_cast<_T>(v.x);
    y -= static_cast<_T>(v.y);
    z -= static_cast<_T>(v.z);
    return *this;
  }

  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value, Vector3<_T>>::type
  operator*(const _U &s) const {
    return Vector3<_T>{x * static_cast<_T>(s), y * static_cast<_T>(s),
                       z * static_cast<_T>(s)};
  }
  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value,
                          Vector3<_T> &>::type
  operator*=(const _U &s) {
    x *= static_cast<_T>(s);
    y *= static_cast<_T>(s);
    z *= static_cast<_T>(s);
    return *this;
  }

  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value, Vector3<_T>>::type
  operator/(const _U &f) const {
    assert(f != 0);
    _T inv = _T(1) / static_cast<_T>(f);
    return Vector3<_T>{x * inv, y * inv, z * inv};
  }
  template <typename _U>
  typename std::enable_if<std::is_convertible<_U, _T>::value,
                          Vector3<_T> &>::type
  operator/=(const _U &f) {
    assert(f != 0);
    _T inv = _T(1) / static_cast<_T>(f);
    x *= inv;
    y *= inv;
    z *= inv;
    return *this;
  }

  Vector3<_T> operator-() const { return Vector3<_T>{-x, -y, -z}; }

  const std::string str() const {
    return ('<' + std::to_string(x) + ',' + std::to_string(y) + ',' +
            std::to_string(z) + '>');
  }

  inline _T length_squared() const { return x * x + y * y + z * z; }
  inline _T length() const { return std::sqrt(length_squared()); }

  _T x, y, z;

private:
  bool has_nan() const {
    return (std::isnan(x) || std::isnan(y) || std::isnan(z));
  }
};

typedef Vector2<double> Vector2f;
typedef Vector2<int> Vector2i;
typedef Vector3<double> Vector3f;
typedef Vector3<int> Vector3i;

template <typename _T, typename _U>
inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                               Vector2<_T>>::type
operator*(const _U &s, const Vector2<_T> &v) {
  return v * s;
}
template <typename _T, typename _U>
inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                               Vector3<_T>>::type
operator*(const _U &s, const Vector3<_T> &v) {
  return v * s;
}

template <typename _T> Vector2<_T> inline abs(const Vector2<_T> &v) {
  return Vector2<_T>{std::abs(v.x), std::abs(v.y)};
}
template <typename _T> Vector3<_T> inline abs(const Vector3<_T> &v) {
  return Vector3<_T>{std::abs(v.x), std::abs(v.y), std::abs(v.z)};
}

template <typename _T>
inline _T dot(const Vector2<_T> &v1, const Vector2<_T> &v2) {
  return v1.x * v2.x + v1.y * v2.y;
}
template <typename _T>
inline _T dot(const Vector3<_T> &v1, const Vector3<_T> &v2) {
  return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

template <typename _T>
inline _T absdot(const Vector2<_T> &v1, const Vector2<_T> &v2) {
  return std::abs(dot(v1, v2));
}
template <typename _T>
inline _T absdot(const Vector3<_T> &v1, const Vector3<_T> &v2) {
  return std::abs(dot(v1, v2));
}

template <typename _T>
inline Vector3<_T> cross(const Vector3<_T> &v1, const Vector3<_T> &v2) {
  return Vector3<_T>{(v1.y * v2.z) - (v1.z * v2.y),
                     (v1.z * v2.x) - (v1.x * v2.z),
                     (v1.x * v2.y) - (v1.y * v2.x)};
}

template <typename _T> inline Vector2<_T> normalize(const Vector2<_T> &v) {
  return v / v.length();
}
template <typename _T> inline Vector3<_T> normalize(const Vector3<_T> &v) {
  return v / v.length();
}

template <typename _T> inline _T min_component(const Vector2<_T> &v) {
  return std::min(v.x, v.y);
}
template <typename _T> inline _T min_component(const Vector3<_T> &v) {
  return std::min(v.x, std::min(v.y, v.z));
}

template <typename _T> inline _T max_component(const Vector2<_T> &v) {
  return std::max(v.x, v.y);
}
template <typename _T> inline _T max_component(const Vector3<_T> &v) {
  return std::max(v.x, std::max(v.y, v.z));
}

template <typename _T> inline _T min_dimension(const Vector2<_T> &v) {
  return (v.x < v.y) ? 0 : 1;
}
template <typename _T> inline _T min_dimension(const Vector3<_T> &v) {
  return (v.x < v.y) ? ((v.x < v.z) ? 0 : 2) : ((v.y < v.z) ? 1 : 2);
}

template <typename _T> inline _T max_dimension(const Vector2<_T> &v) {
  return (v.x > v.y) ? 0 : 1;
}
template <typename _T> inline _T max_dimension(const Vector3<_T> &v) {
  return (v.x > v.y) ? ((v.x > v.z) ? 0 : 2) : ((v.y > v.z) ? 1 : 2);
}

template <typename _T>
inline Vector2<_T> min(const Vector2<_T> &v1, const Vector2<_T> &v2) {
  return Vector2<_T>{std::min(v1.x, v2.x), std::min(v1.y, v2.y)};
}
template <typename _T>
inline Vector3<_T> min(const Vector3<_T> &v1, const Vector3<_T> &v2) {
  return Vector3<_T>{std::min(v1.x, v2.x), std::min(v1.y, v2.y),
                     std::min(v1.z, v2.z)};
}
template <typename _T>
inline Vector2<_T> max(const Vector2<_T> &v1, const Vector2<_T> &v2) {
  return Vector2<_T>{std::max(v1.x, v2.x), std::max(v1.y, v2.y)};
}
template <typename _T>
inline Vector3<_T> max(const Vector3<_T> &v1, const Vector3<_T> &v2) {
  return Vector3<_T>{std::max(v1.x, v2.x), std::max(v1.y, v2.y),
                     std::max(v1.z, v2.z)};
}

template <typename _T>
inline Vector2<_T> permute(const Vector2<_T> &v, int x, int y) {
  return Vector2<_T>{v[x], v[y]};
}
template <typename _T>
inline Vector3<_T> permute(const Vector3<_T> &v, int x, int y, int z) {
  return Vector3<_T>{v[x], v[y], v[z]};
}

template <typename _T>
inline void coordinate_system(const Vector3<_T> &v1, Vector3<_T> &v2,
                              Vector3<_T> &v3) {
  if (std::abs(v1.x) > std::abs(v1.y))
    v2 = Vector3<_T>(-v1.z, 0, v1.x) / std::sqrt(v1.x * v1.x + v1.z * v1.z);
  else
    v2 = Vector3<_T>(0, v1.z, -v1.y) / std::sqrt(v1.y * v1.y + v1.z * v1.z);
  v3 = Cross(v1, v2);
}

} // namespace geometry
} // namespace specula

#endif // SPECULA_GEOMETRY_VECTOR_HPP_
