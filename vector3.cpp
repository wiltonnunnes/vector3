#include "vector3.h"

Vector3::Vector3(float x, float y, float z) {
  _x = x;
  _y = y;
  _z = z;
}

Vector3 Vector3::operator/(float scalar) {
  float x = _x / scalar;
  float y = _y / scalar;
  float z = _z / scalar;
  return Vector3(x, y, z);
}

void Vector3::operator/=(float scalar) {
  (*this) = (*this) / scalar;
}

ostream& operator<<(ostream& os, const Vector3& v) {
	os << '(' << v._x << ", " << v._y << ", " << v._z << ')';
	return os;
}

Vector3 Vector3::operator+(Vector3 other) {
	return Vector3(_x + other._x, _y + other._y, _z + other._z);
}

Vector3 operator-(Vector3 v) {
  return Vector3(-v.x, -v.y, v.z);
}

Vector3 Vector3::operator-(Vector3 other) {
	return (*this) + (-other);
}

float Vector3::norm() {
  return sqrtf(_x * _x + _y * _y + _z * _z);
}

Vector3& Vector3::normalize() {
  float n = norm();
  if(n) {
    (*this) /= n;
  }
  return *this;
}
