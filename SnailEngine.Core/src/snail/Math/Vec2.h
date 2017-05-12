#include <snail\Common.h>

namespace Snail { namespace Maths {

	struct Vec2
	{
		float x, y;

		Vec2() : x(0), y(0) {}
		Vec2(float a) : x(a), y(a) {}
		Vec2(float x, float y) : x(x), y(y) {}
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

		void operator*(float num);
		void operator/(float num);
		void operator+(float num);
		void operator-(float num);

		friend static Vec2 operator*(const Vec2 &left, const Vec2 &right);
		friend static Vec2 operator/(const Vec2 &left, const Vec2 &right);
		friend static Vec2 operator+(const Vec2 &left, const Vec2 &right);
		friend static Vec2 operator-(const Vec2 &left, const Vec2 &right);


	};
}}