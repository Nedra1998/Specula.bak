#ifndef SPECULA_MATH_GEOMETRIC_HPP_
#define SPECULA_MATH_GEOMETRIC_HPP_

#include <cmath>

#include "matrix.hpp"
#include "vector.hpp"

namespace specula {
namespace math {

  template <typename _T>
  inline _T length(const _T& x) {
    return x;
  }
  template <typename _T>
  inline _T length(const Vec2<_T>& x) {
    return std::sqrt(std::pow(x.x, _T(2)) + std::pow(x.y, _T(2)));
  }
  template <typename _T>
  inline _T length(const Vec3<_T>& x) {
    return std::sqrt(std::pow(x.x, _T(2)) + std::pow(x.y, _T(2)) +
                     std::pow(x.z, _T(2)));
  }
  template <typename _T>
  inline _T length(const Vec4<_T>& x) {
    return std::sqrt(std::pow(x.x, _T(2)) + std::pow(x.y, _T(2)) +
                     std::pow(x.z, _T(2)) + std::pow(x.w, _T(2)));
  }

  template <typename _T>
  inline _T distance(const _T& p0, const _T& p1) {
    return p0 - p1;
  }
  template <typename _T>
  inline _T distance(const Vec2<_T>& p0, const Vec2<_T>& p1) {
    return std::sqrt(std::pow(p0.x - p1.x, _T(2)) +
                     std::pow(p0.y - p1.y, _T(2)));
  }
  template <typename _T>
  inline _T distance(const Vec3<_T>& p0, const Vec3<_T>& p1) {
    return std::sqrt(std::pow(p0.x - p1.x, _T(2)) +
                     std::pow(p0.y - p1.y, _T(2)) +
                     std::pow(p0.z - p1.z, _T(2)));
  }
  template <typename _T>
  inline _T distance(const Vec4<_T>& p0, const Vec4<_T>& p1) {
    return std::sqrt(
        std::pow(p0.x - p1.x, _T(2)) + std::pow(p0.y - p1.y, _T(2)) +
        std::pow(p0.z - p1.z, _T(2)) + std::pow(p0.w - p1.w, _T(2)));
  }

  template <typename _T>
  inline _T dot(const _T& x, const _T& y) {
    return x * y;
  }
  template <typename _T>
  inline _T dot(const Vec2<_T>& x, const Vec2<_T>& y) {
    return x.x * y.x + x.y * y.y;
  }
  template <typename _T>
  inline _T dot(const Vec3<_T>& x, const Vec3<_T>& y) {
    return x.x * y.x + x.y * y.y + x.z * y.z;
  }
  template <typename _T>
  inline _T dot(const Vec4<_T>& x, const Vec4<_T>& y) {
    return x.x * y.x + x.y * y.y + x.z * y.z + x.w * y.w;
  }

  template <typename _T>
  inline _T dot2(const _T& x) {
    return x * x;
  }
  template <typename _T>
  inline _T dot2(const Vec2<_T>& x) {
    return x.x * x.x + x.y * x.y;
  }
  template <typename _T>
  inline _T dot2(const Vec3<_T>& x) {
    return x.x * x.x + x.y * x.y + x.z * x.z;
  }
  template <typename _T>
  inline _T dot2(const Vec4<_T>& x) {
    return x.x * x.x + x.y * x.y + x.z * x.z + x.w * x.w;
  }

  template <typename _T>
  inline Vec2<_T> cross(const Vec2<_T>& x) {
    return Vec2<_T>{x.y, -x.x};
  }
  template <typename _T>
  inline Vec3<_T> cross(const Vec3<_T>& x, const Vec3<_T>& y) {
    return Vec3<_T>{x.y * y.z - x.z * y.y, x.z * y.x - x.x * y.z,
                    x.x * y.y - x.y * y.x};
  }
  template <typename _T>
  Vec4<_T> cross(const Vec4<_T>& x, const Vec4<_T>& y, const Vec4<_T>& z) {
    _T a = y.z * z.w - y.w * z.z;
    _T b = y.y * z.w - y.w * z.y;
    _T c = y.y * z.z - y.z * z.y;
    _T d = y.x * z.w - y.w * z.x;
    _T e = y.x * z.z - y.z * z.x;
    _T f = y.x * z.y - y.y * z.x;
    return Vec4<_T>(x.y * a - x.z * b + x.w * c, x.x * a - x.z * d + x.w * e,
                    x.x * b - x.y * d + x.w * f, x.x * c - x.y * e + x.z * f);
  }

  template <typename _T>
  inline _T normalize(const _T& x) {
    return _T(1);
  }
  template <typename _T>
  inline Vec2<_T> normalize(const Vec2<_T>& x) {
    return x / (std::sqrt(std::pow(x.x, _T(2)) + std::pow(x.y, _T(2))));
  }
  template <typename _T>
  inline Vec3<_T> normalize(const Vec3<_T>& x) {
    return x / (std::sqrt(std::pow(x.x, _T(2)) + std::pow(x.y, _T(2)) +
                          std::pow(x.z, _T(2))));
  }
  template <typename _T>
  inline Vec4<_T> normalize(const Vec4<_T>& x) {
    return x / (std::sqrt(std::pow(x.x, _T(2)) + std::pow(x.y, _T(2)) +
                          std::pow(x.z, _T(2)) + std::pow(x.w, _T(2))));
  }

  template <typename _T>
  inline _T faceforward(const _T& N, const _T& I, const _T& Nref) {
    (dot(Nref, I) < 0) ? N : -N;
  }
  template <typename _T>
  inline Vec2<_T> faceforward(const Vec2<_T>& N, const Vec2<_T>& I,
                              const Vec2<_T>& Nref) {
    (dot(Nref, I) < 0) ? N : -N;
  }
  template <typename _T>
  inline Vec3<_T> faceforward(const Vec3<_T>& N, const Vec3<_T>& I,
                              const Vec3<_T>& Nref) {
    (dot(Nref, I) < 0) ? N : -N;
  }
  template <typename _T>
  inline Vec4<_T> faceforward(const Vec4<_T>& N, const Vec4<_T>& I,
                              const Vec4<_T>& Nref) {
    (dot(Nref, I) < 0) ? N : -N;
  }

  template <typename _T>
  inline _T reflect(const _T& I, const _T& N) {
    return I - _T(2) * dot(N, I) * N;
  }
  template <typename _T>
  inline Vec2<_T> reflect(const Vec2<_T>& I, const Vec2<_T>& N) {
    return I - _T(2) * dot(N, I) * N;
  }
  template <typename _T>
  inline Vec3<_T> reflect(const Vec3<_T>& I, const Vec3<_T>& N) {
    return I - _T(2) * dot(N, I) * N;
  }
  template <typename _T>
  inline Vec4<_T> reflect(const Vec4<_T>& I, const Vec4<_T>& N) {
    return I - _T(2) * dot(N, I) * N;
  }

  template <typename _T>
  _T refract(const _T& I, const _T& N, const _T& eta) {
    _T k = _T(1) - eta * eta * (_T(1) - dot(N, I) * dot(N, I));
    if (k < _T(0)) {
      return _T(0);
    } else {
      return eta * I - (eta * dot(N, I) + sqrt(k)) * N;
    }
  }
  template <typename _T>
  Vec2<_T> refract(const Vec2<_T>& I, const Vec2<_T>& N, const _T& eta) {
    _T k = _T(1) - eta * eta * (_T(1) - dot(N, I) * dot(N, I));
    if (k < _T(0)) {
      return Vec2<_T>(0);
    } else {
      return eta * I - (eta * dot(N, I) + sqrt(k)) * N;
    }
  }
  template <typename _T>
  Vec3<_T> refract(const Vec3<_T>& I, const Vec3<_T>& N, const _T& eta) {
    _T k = _T(1) - eta * eta * (_T(1) - dot(N, I) * dot(N, I));
    if (k < _T(0)) {
      return Vec3<_T>(0);
    } else {
      return eta * I - (eta * dot(N, I) + sqrt(k)) * N;
    }
  }
  template <typename _T>
  Vec4<_T> refract(const Vec4<_T>& I, const Vec4<_T>& N, const _T& eta) {
    _T k = _T(1) - eta * eta * (_T(1) - dot(N, I) * dot(N, I));
    if (k < _T(0)) {
      return Vec4<_T>(0);
    } else {
      return eta * I - (eta * dot(N, I) + sqrt(k)) * N;
    }
  }

  template <typename _T>
  std::pair<Mat4<_T>, Mat4<_T>> translate(const Mat4<_T>& mat,
                                          const Mat4<_T>& inv,
                                          const Vec3<_T>& d) {
    std::pair<Mat4<_T>, Mat4<_T>> ret;
    Mat4<_T> t(_T(1));
    t(0, 3) = d.x;
    t(1, 3) = d.y;
    t(2, 3) = d.z;
    ret.first = t * mat;
    t(0, 3) = -d.x;
    t(1, 3) = -d.y;
    t(2, 3) = -d.z;
    ret.second = inv * t;
    return ret;
  }
  template <typename _T>
  std::pair<Mat4<_T>, Mat4<_T>> scale(const Mat4<_T>& mat, const Mat4<_T>& inv,
                                      const Vec3<_T>& s) {
    std::pair<Mat4<_T>, Mat4<_T>> ret;
    Mat4<_T> t(_T(1));
    t(0, 0) = s.x;
    t(1, 1) = s.y;
    t(2, 2) = s.z;
    ret.first = t * mat;
    t(0, 0) = _T(1) / s.x;
    t(1, 1) = _T(1) / s.y;
    t(2, 2) = _T(1) / s.z;
    ret.second = inv * t;
    return ret;
  }
  template <typename _T>
  std::pair<Mat4<_T>, Mat4<_T>> rotateX(const Mat4<_T>& mat,
                                        const Mat4<_T>& inv,
                                        const _T& radians) {
    std::pair<Mat4<_T>, Mat4<_T>> ret;
    Mat4<_T> t(_T(1));
    _T cs = cos(radians), sn = sin(radians);
    t(1, 1) = cs;
    t(1, 2) = -sn;
    t(2, 1) = sn;
    t(2, 2) = cs;
    ret.first = t * mat;
    t(1, 1) = cs;
    t(1, 2) = sn;
    t(2, 1) = -sn;
    t(2, 2) = cs;
    ret.second = inv * t;
    return ret;
  }
  template <typename _T>
  std::pair<Mat4<_T>, Mat4<_T>> rotateY(const Mat4<_T>& mat,
                                        const Mat4<_T>& inv,
                                        const _T& radians) {
    std::pair<Mat4<_T>, Mat4<_T>> ret;
    Mat4<_T> t(_T(1));
    _T cs = cos(radians), sn = sin(radians);
    t(0, 0) = cs;
    t(0, 2) = sn;
    t(2, 0) = -sn;
    t(2, 2) = cs;
    ret.first = t * mat;
    t(0, 0) = cs;
    t(0, 2) = -sn;
    t(2, 0) = sn;
    t(2, 2) = cs;
    ret.second = inv * t;
    return ret;
  }
  template <typename _T>
  std::pair<Mat4<_T>, Mat4<_T>> rotateZ(const Mat4<_T>& mat,
                                        const Mat4<_T>& inv,
                                        const _T& radians) {
    std::pair<Mat4<_T>, Mat4<_T>> ret;
    Mat4<_T> t(_T(1));
    _T cs = cos(radians), sn = sin(radians);
    t(0, 0) = cs;
    t(0, 1) = -sn;
    t(1, 0) = sn;
    t(1, 1) = cs;
    ret.first = t * mat;
    t(0, 0) = cs;
    t(0, 1) = sn;
    t(1, 0) = -sn;
    t(1, 1) = cs;
    ret.second = inv * t;
    return ret;
  }

}  // namespace math
}  // namespace specula

#endif  // SPECULA_MATH_GEOMETRIC_HPP_