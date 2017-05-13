#include "Vec3.h"

namespace Snail {
namespace Math {


void Vec3::operator+=(const Vec3 & other)
{
	this->x += other.x;
	this->y += other.y;
	this->z += other.z;
}
void Vec3::operator-=(const Vec3 & other)
{
	this->x -= other.x;
	this->y -= other.y;
	this->z -= other.z;
}
void Vec3::operator*=(const Vec3 & other)
{
	this->x *= other.x;
	this->y *= other.y;
	this->z *= other.z;
}
void Vec3::operator/=(const Vec3 & other)
{
	this->x /= other.x;
	this->y /= other.y;
	this->z /= other.z;
}

void Vec3::operator+=(float num)
{
	this->x += num;
	this->y += num;
	this->z += num;
}
void Vec3::operator-=(float num)
{
	this->x -= num;
	this->y -= num;
	this->z -= num;
}
void Vec3::operator*=(float num)
{
	this->x *= num;
	this->y *= num;
	this->z *= num;
}
void Vec3::operator/=(float num)
{
	this->x /= num;
	this->y /= num;
	this->z /= num;
}

Vec3 Vec3::operator*(float num)
{
	return Vec3(x*num, y*num, z*num);
}
Vec3 Vec3::operator/(float num)
{
	return Vec3(x / num, y / num, z/num);
}
Vec3 Vec3::operator+(float num)
{
	return Vec3(x + num, y + num, z + num);
}
Vec3 Vec3::operator-(float num)
{
	return Vec3(x - num, y - num, z - num);
}

Vec3 operator*(const Vec3 & left, const Vec3 & right)
{
	return Vec3((left.x * right.x), (left.y * right.y), (left.z * right.z));
}
Vec3 operator/(const Vec3 & left, const Vec3 & right)
{
	return Vec3((left.x / right.x), (left.y / right.y), (left.z / right.z));
}
Vec3 operator+(const Vec3 & left, const Vec3 & right)
{
	return Vec3((left.x + right.x), (left.y + right.y), (left.z + right.z));
}
Vec3 operator-(const Vec3 & left, const Vec3 & right)
{
	return Vec3((left.x - right.x), (left.y - right.y), (left.z - right.z));
}


bool operator==(const Vec3& left, const Vec3& right)
{
	return left.x == right.x && left.y == right.y && left.z == right.z;
}
bool operator!=(const Vec3& left, const Vec3& right)
{
	return !(left == right);
}

#pragma warning( disable : 4996)
float& Vec3::operator[](int index)
{
	switch (index) {
	case 0:
		return x;
	case 1:
		return y;
	case 2:
		return z;
	default:
		const char* msg = strcat(
			"Vec3 has an index range of 0-1! Index given: ",
			std::to_string(index).c_str()
		);
		throw std::out_of_range(msg);
	}
}
#pragma warning( default : 4996)


void Vec3::operator=(float data[3]) {
	this->x = data[0];
	this->y = data[1];
	this->z = data[2];
}
void Vec3::operator=(int data[3]) {
	#pragma warning( disable : 4244)
	this->x = data[0];
	this->y = data[1];
	this->z = data[2];
	#pragma warning( default : 4244)
}

}
}