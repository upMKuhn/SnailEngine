#include "Vec4.h"

namespace Snail {
namespace Math {


void Vec4::operator+=(const Vec4 & other)
{
	this->x += other.x;
	this->y += other.y;
	this->z += other.z;
	this->w += other.w;
}
void Vec4::operator-=(const Vec4 & other)
{
	this->x -= other.x;
	this->y -= other.y;
	this->z -= other.z;
	this->w -= other.w;
}
void Vec4::operator*=(const Vec4 & other)
{
	this->x *= other.x;
	this->y *= other.y;
	this->z *= other.z;
	this->w *= other.w;
}
void Vec4::operator/=(const Vec4 & other)
{
	this->x /= other.x;
	this->y /= other.y;
	this->z /= other.z;
	this->w /= other.w;
}

void Vec4::operator+=(float num)
{
	this->x += num;
	this->y += num;
	this->z += num;
	this->w += num;
}
void Vec4::operator-=(float num)
{
	this->x -= num;
	this->y -= num;
	this->z -= num;
	this->w -= num;
}
void Vec4::operator*=(float num)
{
	this->x *= num;
	this->y *= num;
	this->z *= num;
	this->w *= num;
}
void Vec4::operator/=(float num)
{
	this->x /= num;
	this->y /= num;
	this->z /= num;
	this->w /= num;
}

Vec4 Vec4::operator*(float num)
{
	return Vec4(x*num, y*num, z*num, w*num);
}
Vec4 Vec4::operator/(float num)
{
	return Vec4(x / num, y / num, z / num, w/num);
}
Vec4 Vec4::operator+(float num)
{
	return Vec4(x + num, y + num, z + num, w+num);
}
Vec4 Vec4::operator-(float num)
{
	return Vec4(x - num, y - num, z - num, w-num);
}

bool operator==(Vec4 left, Vec4 right)
{
	return left.x == right.x && left.y == right.y && left.z == right.z && left.w == right.w;
}
bool operator!=(Vec4 left, Vec4 right)
{
	return !(left == right);
}


Vec4 operator*(Vec4 left, const Vec4 & right)
{
	return Vec4((left.x * right.x), (left.y * right.y), (left.z * right.z), (left.w * right.w));
}
Vec4 operator/(Vec4 left, const Vec4 & right)
{
	return Vec4((left.x / right.x), (left.y / right.y), (left.z / right.z), (left.w / right.w));
}
Vec4 operator+(Vec4 left, const Vec4 & right)
{
	return Vec4((left.x + right.x), (left.y + right.y), (left.z + right.z), (left.w + right.w));
}
Vec4 operator-(Vec4 left, const Vec4 & right)
{
	return Vec4((left.x - right.x), (left.y - right.y), (left.z - right.z), (left.w - right.w));
}


#pragma warning( disable : 4996)
float& Vec4::operator[](int index)
{
	switch (index) {
	case 0:
		return x;
	case 1:
		return y;
	case 2:
		return z;
	case 3:
		return w;
	default:
		const char* msg = strcat(
			"Vec4 has an index range of 0-1! Index given: ",
			std::to_string(index).c_str()
		);
		throw std::out_of_range(msg);
	}
}
#pragma warning( default : 4996)


void Vec4::operator=(float data[4]) {
	this->x = data[0];
	this->y = data[1];
	this->z = data[2];
	this->w = data[3];
}
void Vec4::operator=(int data[4]) {
	#pragma warning( disable : 4244)
	this->x = data[0];
	this->y = data[1];
	this->z = data[2];
	this->w = data[3];
	#pragma warning( default : 4244)
}

}
}