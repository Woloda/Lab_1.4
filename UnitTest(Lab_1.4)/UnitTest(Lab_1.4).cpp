#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_1.4/Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab14
{
	TEST_CLASS(UnitTestLab14)
	{
	public:		
		TEST_METHOD(Test_Addition_Vectors)
		{
			Vector a, b, c;
			a.Init(1, -2, 3);
			b.Init(-2, 6, -4);
			c = a.Addition(b);
			Assert::AreEqual(c.Get_y(), 4);
		}

		TEST_METHOD(Test_Subtraction_Vectors)
		{
			Vector a, b, c;
			a.Init(1, -2, 3);
			b.Init(-2, 6, -4);
			c = b.Subtraction(a);
			Assert::AreEqual(c.Get_z(), 7);
		}

		TEST_METHOD(Test_Length_Vectora)
		{
			Vector a;
			double l;
			a.Init(0, -4, 3);
			l = a.Length_Vectora();
			Assert::AreEqual(l, 5.0);
		}
	};
}
