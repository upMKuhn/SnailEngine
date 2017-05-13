#include <stdafx.h>
#include "CppUnitTest.h"
#include <snail\Math\Mat4.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Snail::Math;

namespace SnailEngineCoreTests {
TEST_CLASS(Mat4Tests)
{
public:

	TEST_METHOD(identity_functionExported) {
		Mat4 mat = Mat4::identity();
		
		//Assert::IsTrue(mat.rows[0] == {0.0f, 0.0f, 0.0f, 0.0f});
	}

};
}