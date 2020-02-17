#include "vector3.h"

Vector3::Vector3(float x1, float y1, float z1) {
	x = x1;
	y = y1;
	z = z1;
}

ostream& operator<<(ostream& os, const Vector3& v) {
	os << '(' << v.x << ", " << v.y << ", " << v.z << ')';
	return os;
}