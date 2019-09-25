#ifndef SPECULA_GEOMETRY_VEC3_HPP_
#define SPECULA_GEOMETRY_VEC3_HPP_

#include <cassert>
#include <cmath>

namespace specula {
  template <typename _T> class _vec3 {
  public:
    _vec3() : x(), y(), z() {}
    _vec3(const _T &x, const _T &y, const _T &z) : x(x), y(y), z(z) {}

    inline _T operator[](const std::size_t &i) const {
      assert(i >= 0 && i <= 2);
      if (i == 0)
        return x;
      else if (i == 1)
        return y;
      else
        return z;
    }
    inline _T &operator[](const std::size_t &i) {
      assert(i >= 0 && i <= 2);
      if (i == 0)
        return x;
      else if (i == 1)
        return y;
      else
        return z;
    }

    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec3<_T>>::type
    operator+(const _vec3<_U> &v) {
      return _vec3<_T>(x + static_cast<_T>(v.x), y + static_cast<_T>(v.y),
                       z + static_cast<_T>(v.z));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec3<_T> &>::type
    operator+=(const _vec3<_U> &v) {
      x += static_cast<_T>(v.x);
      y += static_cast<_T>(v.y);
      z += static_cast<_T>(v.z);
      return *this;
    }

    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec3<_T>>::type
    operator-(const _vec3<_U> &v) {
      return _vec3<_T>(x - static_cast<_T>(v.x), y - static_cast<_T>(v.y),
                       z - static_cast<_T>(v.z));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec3<_T> &>::type
    operator-=(const _vec3<_U> &v) {
      x -= static_cast<_T>(v.x);
      y -= static_cast<_T>(v.y);
      z -= static_cast<_T>(v.z);
      return *this;
    }

    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec3<_T>>::type
    operator*(const _U &s) {
      return _vec3<_T>(x * static_cast<_T>(s), y * static_cast<_T>(s),
                       z * static_cast<_T>(s));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec3<_T> &>::type
    operator*=(const _U &s) {
      x *= static_cast<_T>(s);
      y *= static_cast<_T>(s);
      z *= static_cast<_T>(s);
      return *this;
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec3<_T>>::type
    operator/(const _U &s) {
      return _vec3<_T>(x / static_cast<_T>(s), y / static_cast<_T>(s),
                       z / static_cast<_T>(s));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec3<_T> &>::type
    operator/=(const _U &s) {
      x /= static_cast<_T>(s);
      y /= static_cast<_T>(s);
      z /= static_cast<_T>(s);
      return *this;
    }

    inline _vec3<_T> operator-() {
      return _vec3<_T>(x * _T(-1), y * _T(-1), z * _T(-1));
    }

    inline _T len() const { return std::sqrt(x * x + y * y + z * z); }
    inline _T len2() const { return (x * x + y * y + z * z); }

    _T x, y, z;

  private:
  };

  typedef _vec3<bool> bvec3;
  typedef _vec3<int> ivec3;
  typedef _vec3<unsigned> uvec3;
  typedef _vec3<float> vec3;
  typedef _vec3<double> dvec3;

  template <typename _T> inline _vec3<_T> abs(const _vec3<_T> &v) {
    return _vec3<_T>(std::abs(v.x), std::abs(v.y), std::abs(v.z));
  }

  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value, _T>::type
  dot(const _vec3<_T> &v1, const _vec3<_U> &v2) {
    return v1.x * static_cast<_T>(v2.x) + v1.y * static_cast<_T>(v2.y) +
           v1.z * static_cast<_T>(v2.z);
  }
  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value, _T>::type
  absdot(const _vec3<_T> &v1, const _vec3<_U> &v2) {
    return std::abs(v1.x * static_cast<_T>(v2.x) +
                    v1.y * static_cast<_T>(v2.y) +
                    v1.z * static_cast<_T>(v2.z));
  }

  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                 _vec3<_T>>::type
  cross(const _vec3<_T> &v1, const _vec3<_U> &v2) {
    return _vec3<_T>(
        (v1.y * static_cast<_T>(v2.z)) - (v1.z * static_cast<_T>(v2.y)),
        (v1.z * static_cast<_T>(v2.x)) - (v1.x * static_cast<_T>(v2.z)),
        (v1.x * static_cast<_T>(v2.y)) - (v1.y * static_cast<_T>(v2.z)));
  }

  template <typename _T> inline _vec3<_T> normalize(const _vec3<_T> &v) {
    return v / v.len();
  }

  template <typename _T> inline _T min(const _vec3<_T> &v) {
    return std::min(v.x, std::min(v.y, v.z));
  }
  template <typename _T> inline _T max(const _vec3<_T> &v) {
    return std::max(v.x, std::max(v.y, v.z));
  }

  template <typename _T> inline std::size_t min_dimension(const _vec3<_T> &v) {
    return (v.x < v.y) ? ((v.x < v.z) ? 0 : 2) : ((v.y < v.z) ? 1 : 2);
  }
  template <typename _T> inline std::size_t max_dimension(const _vec3<_T> &v) {
    return (v.x > v.y) ? ((v.x > v.z) ? 0 : 2) : ((v.y > v.z) ? 1 : 2);
  }

  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                 _vec3<_T>>::type
  min(const _vec3<_T> &v1, const _vec3<_U> &v2) {
    return _vec3<_T>(std::min(v1.x, static_cast<_T>(v2.x)),
                     std::min(v1.y, static_cast<_T>(v2.y)),
                     std::min(v1.z, static_cast<_T>(v2.z)));
  }
  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                 _vec3<_T>>::type
  max(const _vec3<_T> &v1, const _vec3<_U> &v2) {
    return _vec3<_T>(std::max(v1.x, static_cast<_T>(v2.x)),
                     std::max(v1.y, static_cast<_T>(v2.y)),
                     std::max(v2.z, static_cast<_T>(v2.z)));
  }

  template <typename _T>
  inline _vec3<_T> permute(const _vec3<_T> *v, const std::size_t &x,
                           const std::size_t &y, const std::size_t &z) {
    return _vec3<_T>(v[x], v[y], v[z]);
  }

} // namespace specula

#endif // SPECULA_GEOMETRY_VEC2_HPP_
