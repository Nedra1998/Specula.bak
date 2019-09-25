#ifndef SPECULA_GEOMETRY_VEC2_HPP_
#define SPECULA_GEOMETRY_VEC2_HPP_

#include <cassert>
#include <cmath>

namespace specula {
  template <typename _T> class _vec2 {
  public:
    _vec2() : x(), y() {}
    _vec2(const _T &x, const _T &y) : x(x), y(y) {}

    inline _T operator[](const std::size_t &i) const {
      assert(i >= 0 && i <= 1);
      if (i == 0)
        return x;
      else
        return y;
    }
    inline _T &operator[](const std::size_t &i) {
      assert(i >= 0 && i <= 1);
      if (i == 0)
        return x;
      else
        return y;
    }

    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec2<_T>>::type
    operator+(const _vec2<_U> &v) {
      return _vec2<_T>(x + static_cast<_T>(v.x), y + static_cast<_T>(v.y));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec2<_T> &>::type
    operator+=(const _vec2<_U> &v) {
      x += static_cast<_T>(v.x);
      y += static_cast<_T>(v.y);
      return *this;
    }

    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec2<_T>>::type
    operator-(const _vec2<_U> &v) {
      return _vec2<_T>(x - static_cast<_T>(v.x), y - static_cast<_T>(v.y));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec2<_T> &>::type
    operator-=(const _vec2<_U> &v) {
      x -= static_cast<_T>(v.x);
      y -= static_cast<_T>(v.y);
      return *this;
    }

    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec2<_T>>::type
    operator*(const _U &s) {
      return _vec2<_T>(x * static_cast<_T>(s), y * static_cast<_T>(s));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec2<_T> &>::type
    operator*=(const _U &s) {
      x *= static_cast<_T>(s);
      y *= static_cast<_T>(s);
      return *this;
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec2<_T>>::type
    operator/(const _U &s) {
      return _vec2<_T>(x / static_cast<_T>(s), y / static_cast<_T>(s));
    }
    template <typename _U>
    inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                   _vec2<_T> &>::type
    operator/=(const _U &s) {
      x /= static_cast<_T>(s);
      y /= static_cast<_T>(s);
      return *this;
    }

    inline _vec2<_T> operator-() { return _vec2<_T>(x * _T(-1), y * _T(-1)); }

    inline _T len() const { return std::sqrt(x * x + y * y); }
    inline _T len2() const { return (x * x + y * y); }

    _T x, y;

  private:
  };

  typedef _vec2<bool> bvec2;
  typedef _vec2<int> ivec2;
  typedef _vec2<unsigned> uvec2;
  typedef _vec2<float> vec2;
  typedef _vec2<double> dvec2;

  template <typename _T> inline _vec2<_T> abs(const _vec2<_T> &v) {
    return _vec2<_T>(std::abs(v.x), std::abs(v.y));
  }

  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value, _T>::type
  dot(const _vec2<_T> &v1, const _vec2<_U> &v2) {
    return v1.x * static_cast<_T>(v2.x) + v1.y * static_cast<_T>(v2.y);
  }
  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value, _T>::type
  absdot(const _vec2<_T> &v1, const _vec2<_U> &v2) {
    return std::abs(v1.x * static_cast<_T>(v2.x) +
                    v1.y * static_cast<_T>(v2.y));
  }

  template <typename _T> inline _vec2<_T> cross(const _vec2<_T> &v) {
    return _vec2<_T>(v.y, -v.x);
  }

  template <typename _T> inline _vec2<_T> normalize(const _vec2<_T> &v) {
    return v / v.len();
  }

  template <typename _T> inline _T min(const _vec2<_T> &v) {
    return std::min(v.x, v.y);
  }
  template <typename _T> inline _T max(const _vec2<_T> &v) {
    return std::max(v.x, v.y);
  }

  template <typename _T> inline std::size_t min_dimension(const _vec2<_T> &v) {
    return (v.x < v.y) ? 0 : 1;
  }
  template <typename _T> inline std::size_t max_dimension(const _vec2<_T> &v) {
    return (v.y < v.x) ? 1 : 0;
  }

  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                 _vec2<_T>>::type
  min(const _vec2<_T> &v1, const _vec2<_U> &v2) {
    return _vec2<_T>(std::min(v1.x, static_cast<_T>(v2.x)),
                     std::min(v1.y, static_cast<_T>(v2.y)));
  }
  template <typename _T, typename _U>
  inline typename std::enable_if<std::is_convertible<_U, _T>::value,
                                 _vec2<_T>>::type
  max(const _vec2<_T> &v1, const _vec2<_U> &v2) {
    return _vec2<_T>(std::max(v1.x, static_cast<_T>(v2.x)),
                     std::max(v1.y, static_cast<_T>(v2.y)));
  }

  template <typename _T>
  inline _vec2<_T> permute(const _vec2<_T> *v, const std::size_t &x,
                           const std::size_t &y) {
    return _vec2<_T>(v[x], v[y]);
  }

} // namespace specula

#endif // SPECULA_GEOMETRY_VEC2_HPP_
