#include <stdafx.h>
#include "CppUnitTest.h"
#include <snail\Math\Vec2.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace Snail::Math;

namespace SnailEngineCoreTests
{		
	TEST_CLASS(Vec2Tests)
	{
	public:
		
		//Vec2()
		TEST_METHOD(NoArgsConstructor_defaultsValuesToZero)
		{
			Vec2 v;
			Assert::AreEqual(0.0f, v.x);
			Assert::AreEqual(0.0f, v.y);
		}
		TEST_METHOD(OneArgConstructor_setsXandY)
		{
			Vec2 v(1);
			Assert::AreEqual(1.0f, v.x);
			Assert::AreEqual(1.0f, v.y);
		}
		TEST_METHOD(TwoArgConstructor_setsXandYAccordingly)
		{
			Vec2 v(1, 2);
			Assert::AreEqual(1.0f, v.x);
			Assert::AreEqual(2.0f, v.y);
		}
		TEST_METHOD(copyConstructor_setsXandYAccordingly)
		{
			Vec2 v(1,2);
			Vec2 copy(v);
			Assert::AreEqual(1.0f, copy.x);
			Assert::AreEqual(2.0f, copy.y);
		}

		// Vec2 * Vec2
		TEST_METHOD(plusOperator_addingTwoVecs_producesThridVec)
		{
			Vec2 a(1, 2);
			Vec2 b(1, 2);
			Vec2 c = a + b;
			Assert::AreEqual(2.0f, c.x);
			Assert::AreEqual(4.0f, c.y);
			c.x += 1;
			Assert::AreEqual(1.0f, a.x);
			Assert::AreEqual(1.0f, b.x);
			Assert::AreEqual(3.0f, c.x);
		}
		TEST_METHOD(MinusOperator_subtractsTwoVecs_producesThridVec)
		{
			Vec2 a(3, 3);
			Vec2 b(2, 2);
			Vec2 c = a - b;
			Assert::AreEqual(1.0f, c.x);
			Assert::AreEqual(1.0f, c.y);
			c.x += 1;
			Assert::AreEqual(3.0f, a.x);
			Assert::AreEqual(2.0f, b.x);
			Assert::AreEqual(2.0f, c.x);
		}
		TEST_METHOD(DivideOperator_DividesTwoVecs_producesThridVec)
		{
			Vec2 a(1, 1);
			Vec2 b(2, 2);
			Vec2 c = a / b;
			Assert::AreEqual(0.5f, c.x);
			Assert::AreEqual(0.5f, c.y);
			c.x += 1;
			Assert::AreEqual(1.0f, a.x);
			Assert::AreEqual(2.0f, b.x);
			Assert::AreEqual(1.5f, c.x);
		}
		TEST_METHOD(TimesEqualsOperator_MultipliesTwoVecs_producesThridVec)
		{
			Vec2 a(2, 2);
			Vec2 b(2, 2);
			Vec2 c = a * b;
			Assert::AreEqual(4.0f, c.x);
			Assert::AreEqual(4.0f, c.y);
			c.x += 1;
			Assert::AreEqual(2.0f, a.x);
			Assert::AreEqual(2.0f, b.x);
			Assert::AreEqual(5.0f, c.x);
		}

		// Vec2 * 0.05f
		TEST_METHOD(plusOperator_addingWithFloat_producesThridVec) {
			Vec2 a(2);
			Vec2 result = a + 2;
			Assert::AreEqual(2.0f, a.x);
			Assert::AreEqual(2.0f, a.y);
			Assert::AreEqual(4.0f, result.x);
			Assert::AreEqual(4.0f, result.y);
		}
		TEST_METHOD(minusOperator_subtractsWithFloat_producesThridVec) {
			Vec2 a(4);
			Vec2 result = a - 2;
			Assert::AreEqual(4.0f, a.x);
			Assert::AreEqual(4.0f, a.y);
			Assert::AreEqual(2.0f, result.x);
			Assert::AreEqual(2.0f, result.y);
		}
		TEST_METHOD(TimesOperator_multiplesWithFloat_producesThridVec) {
			Vec2 a(2);
			Vec2 result = a * 2;
			Assert::AreEqual(2.0f, a.x);
			Assert::AreEqual(2.0f, a.y);
			Assert::AreEqual(4.0f, result.x);
			Assert::AreEqual(4.0f, result.y);
		}
		TEST_METHOD(divideOperator_addingWithFloat_producesThridVec) {
			Vec2 a(1);
			Vec2 result = a / 2;
			Assert::AreEqual(1.0f, a.x);
			Assert::AreEqual(1.0f, a.y);
			Assert::AreEqual(0.5f, result.x);
			Assert::AreEqual(0.5f, result.y);
		}

		//vec2 = [1,2] 
		TEST_METHOD(assignOperator_allowsIntArray_convertsIntoVec ) {
			Vec2 a = { 1, 2 };
			Assert::AreEqual(1.0f, a.x);
			Assert::AreEqual(2.0f, a.y);
		}
		TEST_METHOD(assignOperator_allowsFloatArray_convertsIntoVec) {
			Vec2 a = { 1.0f, 2.0f };
			Assert::AreEqual(1.0f, a.x);
			Assert::AreEqual(2.0f, a.y);
		}

		//== !=
		TEST_METHOD(equalsOperator_checksByValue) {
			Vec2 v1(1);
			Vec2 v2(1);
			Assert::IsTrue(v1 == v2);
		}
		TEST_METHOD(notEqualsOperator_checksByValue) {
			Vec2 v1(1);
			Vec2 v2(0);
			Assert::IsTrue(v1 != v2);
		}
	};
}