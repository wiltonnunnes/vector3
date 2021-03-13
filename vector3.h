#include <iostream>
#include <cmath>

using namespace std;

class Vector3 {
	public:
		float x;
		float y;
		float z;
		Vector3(float, float, float);
		friend ostream& operator<<(ostream& os, const Vector3& v);
		Vector3 operator+(Vector3 other);
		Vector3 operator-(Vector3 other);
    Vector3 operator/(float scalar);
    void operator/=(float scalar);

    float norm();
    Vector3& normalize();

  private:
    float _x, _y, _z;
};
