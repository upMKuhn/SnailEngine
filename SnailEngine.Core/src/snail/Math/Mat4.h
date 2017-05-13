#pragma once
#include "Vec4.h"
#include "Vec3.h"
namespace Snail { namespace Math {
struct SN_API Mat4 {

	union {
		float elements[4 * 4];
		Vec4 rows[4];
	};
	
	Mat4();
	Mat4(float data[4][4]);
	Mat4(int data[4][4]);
	Mat4(Vec3 vec);
	~Mat4() {}

	static Mat4 _cdecl identity();

	static Mat4 _cdecl Orthographic(float left, float right, float bottom, float top, float near, float far);
	static Mat4  _cdecl Perspective(float fov, float aspectRatio, float near, float far);
	static Mat4  _cdecl LookAt(const Vec3& camera, const Vec3& position, const Vec3& up);

	static Mat4  _cdecl Translate(const Vec3& translation);
	static Mat4 _cdecl Rotate(float angle, const Vec3& axis);
	//static Mat4 _cdecl Rotate(const Quaternion& quat);
	static Mat4 _cdecl Scale(const Vec3& scale);
	
	friend Mat4 Invert();
	friend Mat4 Transpose();

};

}}