#ifndef SPECULA_PRIMATIVES_PRIMATIVE_HPP_
#define SPECULA_PRIMATIVES_PRIMATIVE_HPP_

#include <array>
#include <glm/glm.hpp>
#include <memory>

namespace specula {
class Primative {
public:
  Primative();
  explicit Primative(const std::array<double, 3> &c);
  Primative(const glm::mat4 &obj, const glm::mat4 &inv);
  virtual float intersect(const glm::vec3 &o, const glm::vec3 &d) const;

  void rotate_x(const float &x);
  void rotate_y(const float &y);
  void rotate_z(const float &z);
  void rotate_xy(const float &x, const float &y);
  void rotate_xy(const glm::vec2 &a);
  void rotate_xz(const float &x, const float &z);
  void rotate_xz(const glm::vec2 &a);
  void rotate_yx(const float &y, const float &x);
  void rotate_yx(const glm::vec2 &a);
  void rotate_yz(const float &y, const float &z);
  void rotate_yz(const glm::vec2 &a);
  void rotate_zx(const float &z, const float &x);
  void rotate_zx(const glm::vec2 &a);
  void rotate_zy(const float &z, const float &y);
  void rotate_zy(const glm::vec2 &a);
  void rotate_xyz(const float &x, const float &y, const float &z);
  void rotate_xyz(const glm::vec3 &a);
  void rotate_xzy(const float &x, const float &z, const float &y);
  void rotate_xzy(const glm::vec3 &a);
  void rotate_yxz(const float &y, const float &x, const float &z);
  void rotate_yxz(const glm::vec3 &a);
  void rotate_yzx(const float &y, const float &z, const float &x);
  void rotate_yzx(const glm::vec3 &a);
  void rotate_zxy(const float &z, const float &x, const float &y);
  void rotate_zxy(const glm::vec3 &a);
  void rotate_zyx(const float &z, const float &y, const float &x);
  void rotate_zyx(const glm::vec3 &a);

  void scale(const float &x, const float &y, const float &z);
  void scale(const glm::vec3 &s);
  void translate(const float &x, const float &y, const float &z);
  void translate(const glm::vec3 &t);

  std::array<double, 3> color_;

protected:
  glm::mat4 obj_, inv_;

private:
};

class LuaPrimative {
public:
  inline LuaPrimative& rotate_x(const float &a) { base_->rotate_x(a); return *this;}
  inline LuaPrimative& rotate_y(const float &a) { base_->rotate_y(a); return *this;}
  inline LuaPrimative& rotate_z(const float &a) { base_->rotate_z(a); return *this;}
  inline void rotate_xy(const float &a, const float &b) {
    base_->rotate_xy(a, b);
  }
  inline void rotate_xz(const float &a, const float &b) {
    base_->rotate_xz(a, b);
  }
  inline void rotate_yx(const float &a, const float &b) {
    base_->rotate_yx(a, b);
  }
  inline void rotate_yz(const float &a, const float &b) {
    base_->rotate_yz(a, b);
  }
  inline void rotate_zx(const float &a, const float &b) {
    base_->rotate_zx(a, b);
  }
  inline void rotate_zy(const float &a, const float &b) {
    base_->rotate_zy(a, b);
  }
  inline void rotate_xyz(const float &a, const float &b, const float &c) {
    base_->rotate_xyz(a, b, c);
  }
  inline void rotate_xzy(const float &a, const float &b, const float &c) {
    base_->rotate_xzy(a, b, c);
  }
  inline void rotate_yxz(const float &a, const float &b, const float &c) {
    base_->rotate_yxz(a, b, c);
  }
  inline void rotate_yzx(const float &a, const float &b, const float &c) {
    base_->rotate_yzx(a, b, c);
  }
  inline void rotate_zxy(const float &a, const float &b, const float &c) {
    base_->rotate_zxy(a, b, c);
  }
  inline void rotate_zyx(const float &a, const float &b, const float &c) {
    base_->rotate_zyx(a, b, c);
  }

  inline void scale(const float &x, const float &y, const float &z) {
    base_->scale(x, y, z);
  }
  inline LuaPrimative& translate(const float &x, const float &y, const float &z) {
    base_->translate(x, y, z);
    return *this;
  }

  std::shared_ptr<Primative> base_;
};
inline LuaPrimative gen_LuaPrimative(){
  return LuaPrimative{std::make_shared<Primative>()};
}
} // namespace specula

#endif // SPECULA_PRIMATIVES_PRIMATIVE_HPP_