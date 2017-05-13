#pragma once
#include <snail\Common.h>

namespace Snail {
namespace Math {

struct SN_API Vec4 {
	float x, y, z, w;

	Vec4() : x(0), y(0), z(0), w(0) {}
	Vec4(float a) : x(a), y(a), z(a), w(a) {}
	Vec4(float x, float y, float z, float w) : x(x), y(y), z(z), w(w) {}
	~Vec4() {}

	float& operator[](int index);

	void operator=(float data[4]);
	void operator=(int data[4]);
	void operator+=(const Vec4 &other);
	void operator-=(const Vec4 &other);
	void operator*=(const Vec4 &other);
	void operator/=(const Vec4 &other);

	void operator+=(float num);
	void operator-=(float num);
	void operator*=(float num);
	void operator/=(float other);

	Vec4 operator*(float num);
	Vec4 operator/(float num);
	Vec4 operator+(float num);
	Vec4 operator-(float num);

	friend bool SN_API operator==(Vec4 left, Vec4 right);
	friend bool SN_API operator!=(Vec4 left, Vec4 right);

	friend Vec4 SN_API operator*(Vec4 left, const Vec4 &right);
	friend Vec4 SN_API operator/(Vec4 left, const Vec4 &right);
	friend Vec4 SN_API operator+(Vec4 left, const Vec4 &right);
	friend Vec4 SN_API operator-(Vec4 left, const Vec4 &right);

};
}
}