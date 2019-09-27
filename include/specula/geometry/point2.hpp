#ifndef SPECULA_GEOMETRY_POINT2_HPP_
#define SPECULA_GEOMETRY_POINT2_HPP_

#include "vec2.hpp"

namespace specula {
  template <typename _T> class _point2 {
  public:
    _point2() : x(), y() {}
    _point2(const _T &x, const _T &y) : x(x), y(y) {}
    template <typename _U>
    _point2(const _point2<_U> &v)
        : x(static_cast<_T>(v.x)), y(static_cast<_T>(v.y)) {}

    explicit operator _vec2<_T>() const { return _vec2<_T>(x, y); }
    template <typename _U> explicit operator _vec2<_U>() const {
      return _to<_U>();
    }
    template <typename _U>
    typename std::enable_if<std::is_convertible<_U, _T>::value, _vec2<_U>>::type
    _to() const {
      return _vec2<_U>(static_cast<_U>(x), static_cast<_U>(y));
    }

    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point2<_T>>::type
    operator+(const _vec2<_U> &v) const {
      return _point2<_T>(x + static_cast<_T>(v.x), y + static_cast<_T>(v.y));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point2<_T> &>::type
    operator+(const _vec2<_U> &v) {
      x += static_cast<_T>(v.x);
      y += static_cast<_T>(v.y);
      return *this;
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point2<_T>>::type
    operator+(const _point2<_U> &v) const {
      return _point2<_T>(x + static_cast<_T>(v.x), y + static_cast<_T>(v.y));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point2<_T> &>::type
    operator+(const _point2<_U> &v) {
      x += static_cast<_T>(v.x);
      y += static_cast<_T>(v.y);
      return *this;
    }

    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec2<_T>>::type
    operator-(const _point2<_U> &p) const {
      return _vec2<_T>(x - static_cast<_T>(p.x), y - static_cast<_T>(p.y));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point2<_T>>::type
    operator-(const _vec2<_U> &v) const {
      return _point2<_T>(x - static_cast<_T>(v.x), y - static_cast<_T>(v.y));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point2<_T> &>::type
    operator-(const _vec2<_U> &v) {
      x -= static_cast<_T>(v.x);
      y -= static_cast<_T>(v.y);
      return *this;
    }

    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point2<_T>>::type
    operator*(const _U &s) {
      return _point2<_T>(x * static_cast<_T>(s), y * static_cast<_T>(s));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point2<_T> &>::type
    operator*=(const _U &s) {
      x *= static_cast<_T>(s);
      y *= static_cast<_T>(s);
      return *this;
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point2<_T>>::type
    operator/(const _U &s) {
      return _point2<_T>(x / static_cast<_T>(s), y / static_cast<_T>(s));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _point2<_T> &>::type
    operator/=(const _U &s) {
      x /= static_cast<_T>(s);
      y /= static_cast<_T>(s);
      return *this;
    }

    _T x, y;
  };

  typedef _point2<bool> bpoint2;
  typedef _point2<int> ipoint2;
  typedef _point2<unsigned> upoint2;
  typedef _point2<float> point2;
  typedef _point2<double> dpoint2;

  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value, _T>::type
  dist(const _point2<_T> &p1, const _point2<_U> &p2) {
    return (p1 - p2).len();
  }
  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value, _T>::type
  dist2(const _point2<_T> &p1, const _point2<_U> &p2) {
    return (p1 - p2).len2();
  }

  template <typename _T, typename _U, typename _V>
  typename std::enable_if<std::is_convertible<_U, _T>::value &&
                              std::is_convertible<_V, _T>::valye,
                          _point2<_T>>::type
  lerp(const _T &t, const _point2<_U> &p0, const _point2<_V> &p1) {
    return (_T(1) - t) * p0 + t * p1;
  }

  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                 _point2<_T>>::type
  min(const _point2<_T> &v1, const _point2<_U> &v2) {
    return _point2<_T>(std::min(v1.x, static_cast<_T>(v2.x)),
                       std::min(v1.y, static_cast<_T>(v2.y)));
  }
  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                 _point2<_T>>::type
  max(const _point2<_T> &v1, const _point2<_U> &v2) {
    return _point2<_T>(std::max(v1.x, static_cast<_T>(v2.x)),
                       std::max(v1.y, static_cast<_T>(v2.y)));
  }

  template <typename _T> _point2<_T> floor(const _point2<_T> &p) {
    return _point2<_T>(std::floor(p.x), std::floor(p.y));
  }
  template <typename _T> _point2<_T> ceil(const _point2<_T> &p) {
    return _point2<_T>(std::ceil(p.x), std::ceil(p.y));
  }
  template <typename _T> _point2<_T> abs(const _point2<_T> &p) {
    return _point2<_T>(std::abs(p.x), std::abs(p.y));
  }

  template <typename _T>
  inline _point2<_T> permute(const _point2<_T> *v, const std::size_t &x,
                             const std::size_t &y) {
    return _point2<_T>(v[x], v[y]);
  }
} // namespace specula

#endif // SPECULA_GEOMETRY_POINT2_HPP_
