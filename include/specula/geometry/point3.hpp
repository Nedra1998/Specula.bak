#ifndef SPECULA_GEOMETRY_POINT3_HPP_
#define SPECULA_GEOMETRY_POINT3_HPP_

#include "vec3.hpp"

namespace specula {
  template <typename _T> class _point3 {
  public:
    _point3() : x(), y(), z() {}
    _point3(const _T &x, const _T &y, const _T &z) : x(x), y(y), z(z) {}
    template <typename _U>
    _point3(const _point3<_U> &v)
        : x(static_cast<_T>(v.x)), y(static_cast<_T>(v.y)),
          z(static_cast<_T>(v.z)) {}

    explicit operator _vec3<_T>() const { return _vec3<_T>(x, y, z); }
    template <typename _U> explicit operator _vec3<_U>() const {
      return _to<_U>();
    }
    template <typename _U>
    typename std::enable_if<std::is_convertible<_U, _T>::value, _vec3<_U>>::type
    _to() const {
      return _vec3<_U>(static_cast<_U>(x), static_cast<_U>(y),
                       static_cast<_U>(z));
    }

    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point3<_T>>::type
    operator+(const _vec3<_U> &v) const {
      return _point3<_T>(x + static_cast<_T>(v.x), y + static_cast<_T>(v.y),
                         z + static_cast<_T>(v.z));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point3<_T> &>::type
    operator+(const _vec3<_U> &v) {
      x += static_cast<_T>(v.x);
      y += static_cast<_T>(v.y);
      z += static_cast<_T>(v.z);
      return *this;
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point3<_T>>::type
    operator+(const _point3<_U> &v) const {
      return _point3<_T>(x + static_cast<_T>(v.x), y + static_cast<_T>(v.y));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point3<_T> &>::type
    operator+(const _point3<_U> &v) {
      x += static_cast<_T>(v.x);
      y += static_cast<_T>(v.y);
      return *this;
    }

    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec3<_T>>::type
    operator-(const _point3<_U> &p) const {
      return _vec3<_T>(x - static_cast<_T>(p.x), y - static_cast<_T>(p.y));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point3<_T>>::type
    operator-(const _vec3<_U> &v) const {
      return _point3<_T>(x - static_cast<_T>(v.x), y - static_cast<_T>(v.y));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point3<_T> &>::type
    operator-(const _vec3<_U> &v) {
      x -= static_cast<_T>(v.x);
      y -= static_cast<_T>(v.y);
      return *this;
    }

    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point3<_T>>::type
    operator*(const _U &s) {
      return _point3<_T>(x * static_cast<_T>(s), y * static_cast<_T>(s));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point3<_T> &>::type
    operator*=(const _U &s) {
      x *= static_cast<_T>(s);
      y *= static_cast<_T>(s);
      return *this;
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point3<_T>>::type
    operator/(const _U &s) {
      return _point3<_T>(x / static_cast<_T>(s), y / static_cast<_T>(s));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point3<_T> &>::type
    operator/=(const _U &s) {
      x /= static_cast<_T>(s);
      y /= static_cast<_T>(s);
      return *this;
    }

    _T x, y, z;
  };

  typedef _point3<bool> bpoint3;
  typedef _point3<int> ipoint3;
  typedef _point3<unsigned> upoint3;
  typedef _point3<float> point3;
  typedef _point3<double> dpoint3;

  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value, _T>::type
  dist(const _point3<_T> &p1, const _point3<_U> &p2) {
    return (p1 - p2).len();
  }
  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value, _T>::type
  dist2(const _point3<_T> &p1, const _point3<_U> &p2) {
    return (p1 - p2).len2();
  }

  template <typename _T, typename _U, typename _V>
  typename std::enable_if<std::is_convertible<_U, _T>::value &&
                              std::is_convertible<_V, _T>::valye,
                          _point3<_T>>::type
  lerp(const _T &t, const _point3<_U> &p0, const _point3<_V> &p1) {
    return (_T(1) - t) * p0 + t * p1;
  }

  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                 _point3<_T>>::type
  min(const _point3<_T> &v1, const _point3<_U> &v2) {
    return _point3<_T>(std::min(v1.x, static_cast<_T>(v2.x)),
                       std::min(v1.y, static_cast<_T>(v2.y)));
  }
  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                 _point3<_T>>::type
  max(const _point3<_T> &v1, const _point3<_U> &v2) {
    return _point3<_T>(std::max(v1.x, static_cast<_T>(v2.x)),
                       std::max(v1.y, static_cast<_T>(v2.y)));
  }

  template <typename _T> _point3<_T> floor(const _point3<_T> &p) {
    return _point3<_T>(std::floor(p.x), std::floor(p.y));
  }
  template <typename _T> _point3<_T> ceil(const _point3<_T> &p) {
    return _point3<_T>(std::ceil(p.x), std::ceil(p.y));
  }
  template <typename _T> _point3<_T> abs(const _point3<_T> &p) {
    return _point3<_T>(std::abs(p.x), std::abs(p.y));
  }

  template <typename _T>
  inline _point3<_T> permute(const _point3<_T> *v, const std::size_t &x,
                             const std::size_t &y) {
    return _point3<_T>(v[x], v[y]);
  }
} // namespace specula

#endif // SPECULA_GEOMETRY_POINT3_HPP_
