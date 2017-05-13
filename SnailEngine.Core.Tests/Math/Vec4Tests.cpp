#include <stdafx.h>
#include "CppUnitTest.h"
#include <snail\Math\Vec4.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Snail::Math;

namespace SnailEngineCoreTests
{		
	TEST_CLASS(Vec4Tests)
	{
	public:
		
		//Vec4()
		TEST_METHOD(NoArgsConstructor_defaultsValuesToZero)
		{
			Vec4 v;
			Assert::AreEqual(0.0f, v.x);
			Assert::AreEqual(0.0f, v.y);
		}
		TEST_METHOD(OneArgConstructor_setsXandY)
		{
			Vec4 v(1);
			Assert::AreEqual(1.0f, v.x);
			Assert::AreEqual(1.0f, v.y);
		}
		TEST_METHOD(TwoArgConstructor_setsXandYAccordingly)
		{
			Vec4 v(1, 2, 3, 4);
			Assert::AreEqual(1.0f, v.x);
			Assert::AreEqual(2.0f, v.y);
			Assert::AreEqual(3.0f, v.z);
			Assert::AreEqual(4.0f, v.w);
		}
		TEST_METHOD(copyConstructor_setsXandYAccordingly)
		{
			Vec4 v(1, 2, 3, 4);
			Vec4 copy(v);
			Assert::AreEqual(1.0f, copy.x);
			Assert::AreEqual(2.0f, copy.y);
			Assert::AreEqual(3.0f, copy.z);
			Assert::AreEqual(4.0f, copy.w);
		}

		// Vec4 * Vec4
		TEST_METHOD(plusOperator_addingTwoVecs_producesThridVec)
		{
			Vec4 a(1, 2, 3, 4);
			Vec4 b(1, 2, 3, 4);
			Vec4 c = a + b;
			Assert::AreEqual(2.0f, c.x);
			Assert::AreEqual(4.0f, c.y);
			Assert::AreEqual(6.0f, c.z);
			Assert::AreEqual(8.0f, c.w);
			c.x += 1;
			Assert::AreEqual(1.0f, a.x);
			Assert::AreEqual(1.0f, b.x);
			Assert::AreEqual(3.0f, c.x);
		}
		TEST_METHOD(MinusOperator_subtractsTwoVecs_producesThridVec)
		{
			Vec4 a(3, 3, 1, 0);
			Vec4 b(2, 2, 1, 0);
			Vec4 c = a - b;
			Assert::AreEqual(1.0f, c.x);
			Assert::AreEqual(1.0f, c.y);
			c.x += 1;
			Assert::AreEqual(3.0f, a.x);
			Assert::AreEqual(2.0f, b.x);
			Assert::AreEqual(2.0f, c.x);
		}
		TEST_METHOD(DivideOperator_DividesTwoVecs_producesThridVec)
		{
			Vec4 a(1, 1, 1, 1);
			Vec4 b(2, 2, 1, 1);
			Vec4 c = a / b;
			Assert::AreEqual(0.5f, c.x);
			Assert::AreEqual(0.5f, c.y);
			c.x += 1;
			Assert::AreEqual(1.0f, a.x);
			Assert::AreEqual(2.0f, b.x);
			Assert::AreEqual(1.5f, c.x);
		}
		TEST_METHOD(TimesEqualsOperator_MultipliesTwoVecs_producesThridVec)
		{
			Vec4 a(2, 2, 2, 2);
			Vec4 b(2, 2, 2, 2);
			Vec4 c = a * b;
			Assert::AreEqual(4.0f, c.x);
			Assert::AreEqual(4.0f, c.y);
			Assert::AreEqual(4.0f, c.z);
			Assert::AreEqual(4.0f, c.w);
			c.x += 1;
			Assert::AreEqual(2.0f, a.x);
			Assert::AreEqual(2.0f, b.x);
			Assert::AreEqual(5.0f, c.x);
		}

		// Vec4 * 0.05f
		TEST_METHOD(plusOperator_addingWithFloat_producesThridVec) {
			Vec4 a(2);
			Vec4 result = a + 2;
			Assert::AreEqual(2.0f, a.x);
			Assert::AreEqual(2.0f, a.y);
			Assert::AreEqual(4.0f, result.x);
			Assert::AreEqual(4.0f, result.y);
		}
		TEST_METHOD(minusOperator_subtractsWithFloat_producesThridVec) {
			Vec4 a(4);
			Vec4 result = a - 2;
			Assert::AreEqual(4.0f, a.x);
			Assert::AreEqual(4.0f, a.y);
			Assert::AreEqual(2.0f, result.x);
			Assert::AreEqual(2.0f, result.y);
		}
		TEST_METHOD(TimesOperator_multiplesWithFloat_producesThridVec) {
			Vec4 a(2);
			Vec4 result = a * 2;
			Assert::AreEqual(2.0f, a.x);
			Assert::AreEqual(2.0f, a.y);
			Assert::AreEqual(4.0f, result.x);
			Assert::AreEqual(4.0f, result.y);
			Assert::AreEqual(4.0f, result.z);
		}
		TEST_METHOD(divideOperator_addingWithFloat_producesThridVec) {
			Vec4 a(1);
			Vec4 result = a / 2;
			Assert::AreEqual(1.0f, a.x);
			Assert::AreEqual(1.0f, a.y);
			Assert::AreEqual(0.5f, result.x);
			Assert::AreEqual(0.5f, result.y);
		}

		//Vec4 = [1,2] 
		TEST_METHOD(assignOperator_allowsIntArray_convertsIntoVec ) {
			Vec4 a = { 1, 2, 3, 4 };
			Assert::AreEqual(1.0f, a.x);
			Assert::AreEqual(2.0f, a.y);
			Assert::AreEqual(3.0f, a.z);
			Assert::AreEqual(4.0f, a.w);
		}
		TEST_METHOD(assignOperator_allowsFloatArray_convertsIntoVec) {
			Vec4 a = { 1.0f, 2.0f , 3.0f, 4.0f };
			Assert::AreEqual(1.0f, a.x);
			Assert::AreEqual(2.0f, a.y);
			Assert::AreEqual(3.0f, a.z);
			Assert::AreEqual(4.0f, a.w);
		}

		//== !=
		TEST_METHOD(equalsOperator_checksByValue) {
			Vec4 v1(1);
			Vec4 v2(1);
			Assert::IsTrue(v1 == v2);
		}
		TEST_METHOD(notEqualsOperator_checksByValue) {
			Vec4 v1(1);
			Vec4 v2(0);
			Assert::IsTrue(v1 != v2);
		}

	};
}