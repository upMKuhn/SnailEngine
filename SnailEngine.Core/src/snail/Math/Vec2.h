#pragma once
#include <snail\Common.h>
#include "Vec3.h"

namespace Snail { namespace Math {

	struct SN_API Vec2
	{
		float x, y;

		Vec2() : x(0), y(0) {}
		Vec2(float a) : x(a), y(a) {}
		Vec2(float x, float y) : x(x), y(y) {}
		Vec2(Vec3 v) : x(v.x), y(v.y) {}
		~Vec2() {}

		float& operator[](int index);

		void operator=(float data[2]);
		void operator=(int data[2]);
		void operator+=(const Vec2 &other);
		void operator-=(const Vec2 &other);
		void operator*=(const Vec2 &other);
		void operator/=(const Vec2 &other);

		void operator+=(float num);
		void operator-=(float num);
		void operator*=(float num);
		void operator/=(float other);

		Vec2 operator*(float num);
		Vec2 operator/(float num);
		Vec2 operator+(float num);
		Vec2 operator-(float num);

		friend bool SN_API operator==(const Vec2& left, const Vec2& right);
		friend bool SN_API operator!=(const Vec2& left, const Vec2& right);

		friend Vec2 SN_API operator*(const Vec2& left, const Vec2 &right);
		friend Vec2 SN_API operator/(const Vec2& left, const Vec2 &right);
		friend Vec2 SN_API operator+(const Vec2& left, const Vec2 &right);
		friend Vec2 SN_API operator-(const Vec2& left, const Vec2 &right);


	};
}}