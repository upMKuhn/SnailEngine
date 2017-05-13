#pragma once
#include <snail\Common.h>

namespace Snail {
namespace Math {

struct SN_API Vec3 {
	float x, y, z;

	Vec3() : x(0), y(0), z(0) {}
	Vec3(float a) : x(a), y(a), z(a) {}
	Vec3(float x, float y, float z) : x(x), y(y), z(z) {}
	~Vec3() {}


	float& operator[](int index);

	void operator=(float data[3]);
	void operator=(int data[3]);
	void operator+=(const Vec3 &other);
	void operator-=(const Vec3 &other);
	void operator*=(const Vec3 &other);
	void operator/=(const Vec3 &other);

	void operator+=(float num);
	void operator-=(float num);
	void operator*=(float num);
	void operator/=(float other);

	Vec3 operator*(float num);
	Vec3 operator/(float num);
	Vec3 operator+(float num);
	Vec3 operator-(float num);

	friend bool SN_API operator==(const Vec3& left, const Vec3& right);
	friend bool SN_API operator!=(const Vec3& left, const Vec3& right);

	friend Vec3 SN_API operator*(const Vec3 &left, const Vec3 &right);
	friend Vec3 SN_API operator/(const Vec3 &left, const Vec3 &right);
	friend Vec3 SN_API operator+(const Vec3 &left, const Vec3 &right);
	friend Vec3 SN_API operator-(const Vec3 &left, const Vec3 &right);


};
}
}