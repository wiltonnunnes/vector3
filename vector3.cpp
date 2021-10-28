#include "vector3.h"

Vector3::Vector3(float _x, float _y, float _z) {
  x = _x;
  y = _y;
  z = _z;
}

Vector3 Vector3::operator/(float scalar) {
  return Vector3(x / scalar, y / scalar, z / scalar);
}

void Vector3::operator/=(float scalar) {
  (*this) = (*this) / scalar;
}

ostream& operator<<(ostream& os, const Vector3& v) {
	os << '(' << v.x << ", " << v.y << ", " << v.z << ')';
	return os;
}

Vector3 Vector3::operator+(Vector3 other) {
	return Vector3(x + other.x, y + other.y, z + other.z);
}

Vector3 operator-(Vector3 v) {
  return Vector3(-v.x, -v.y, -v.z);
}

Vector3 Vector3::operator-(Vector3 other) {
	return (*this) + (-other);
}

float Vector3::norm() {
  return sqrtf(x * x + y * y + z * z);
}

Vector3& Vector3::normalize() {
  float n = norm();
  if(n) {
    (*this) /= n;
  }
  return *this;
}
