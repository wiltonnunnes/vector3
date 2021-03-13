#include <iostream>
#include "vector3.h"

using namespace std;

int main() {
	Vector3 a(1, 2, 92);
	Vector3 b(2, 2, 2);

	cout << "a + b = " << (a + b) << endl;
  cout << "a / 2 = " << a / 2 << endl;
  cout << "norm(a) = " << a.norm() << endl;

  b /= 2;
  cout << "b = " << b << endl;
  
  a.normalize();
  cout << "a = " << a << endl;

	return 0;
}
