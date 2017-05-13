#include "Vec2.h"

namespace Snail { namespace Math {


void Vec2::operator+=(const Vec2 & other)
{
	this->x += other.x;
	this->y += other.y;
}
void Vec2::operator-=(const Vec2 & other)
{
	this->x -= other.x;
	this->y -= other.y;
}
void Vec2::operator*=(const Vec2 & other)
{
	this->x *= other.x;
	this->y *= other.y;
}
void Vec2::operator/=(const Vec2 & other)
{
	this->x /= other.x;
	this->y /= other.y;
}

void Vec2::operator+=(float num)
{
	this->x += num;
	this->y += num;
}
void Vec2::operator-=(float num)
{
	this->x -= num;
	this->y -= num;
}
void Vec2::operator*=(float num)
{
	this->x *= num;
	this->y *= num;
}
void Vec2::operator/=(float num)
{
	this->x /= num;
	this->y /= num;
}

Vec2 Vec2::operator*(float num)
{
	return Vec2(x*num, y*num);
}
Vec2 Vec2::operator/(float num)
{
	return Vec2(x/num, y/num);
}
Vec2 Vec2::operator+(float num)
{
	return Vec2(x+num, y+num);
}
Vec2 Vec2::operator-(float num)
{
	return Vec2(x-num, y-num);
}

Vec2 operator*(const Vec2& left, const Vec2 & right)
{
	return Vec2((left.x * right.x), (left.y * right.y));
}
Vec2 operator/(const Vec2& left, const Vec2 & right)
{
	return Vec2((left.x / right.x), (left.y / right.y));
}
Vec2 operator+(const Vec2& left, const Vec2 & right)
{
	return Vec2((left.x + right.x), (left.y + right.y));
}
Vec2 operator-(const Vec2& left, const Vec2 & right)
{
	return Vec2((left.x - right.x), (left.y - right.y));
}

bool operator==(const Vec2& left, const Vec2& right)
{
	return left.x == right.x && left.y == right.y;
}
bool operator!=(const Vec2& left, const Vec2& right)
{
	return !(left == right);
}
#pragma warning( disable : 4996)
float& Vec2::operator[](int index)
{
	switch (index) {
	case 0:
		return x;
	case 1:
		return y;
	default:
		const char* msg = strcat(
			"Vec2 has an index range of 0-1! Index given: ",
			std::to_string(index).c_str()
		);
		throw std::out_of_range(msg);
	}
}
#pragma warning( default : 4996)


void Vec2::operator=(float data[2]) {
	this->x = data[0];
	this->y = data[1];
}
void Vec2::operator=(int data[2]) {
	#pragma warning( disable : 4244)
	this->x = data[0];
	this->y = data[1];
	#pragma warning( default : 4244)
}

}}