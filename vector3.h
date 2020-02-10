class Vector3 {
	public:
		float x;
		float y;
		float z;
		Vector3(float, float, float);
		friend ostream& operator<<(ostream& os, const Vector3& v);
};