#include "Mat4.h"

namespace Snail { namespace Math {

	Mat4::Mat4()
	{
		for (int i = 0; i < 16; i++)
			elements[i] = 0.0f;
	}
	Mat4::Mat4(float data[4][4])
	{
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				elements[j + (i * 4)] = data[i][j];
	}
	Mat4::Mat4(int data[4][4])
	{
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				elements[j + (i * 4)] = data[i][j]/1;
	}

	Mat4::Mat4(Vec3 vec)
	{
		float data[4][4] = { { 1, 0, 0, 0 },{ 0, 1, 0, 0 },{ 0, 0, 1, 0 },{ 0,0,0,1 } };
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < 4; j++)
				elements[j + (i * 4)] = data[i][j] / 1;
	}

	Mat4 Mat4::identity()
	{
		float data[4][4] = { { 1, 0, 0, 0 }, { 0, 1, 0, 0 }, { 0, 0, 1, 0 }, { 0,0,0,1 } };
		return Mat4(data);
	}


}}