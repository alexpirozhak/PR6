#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6_4_it/PR6_4_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64it
{
	TEST_CLASS(UnitTest64it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[7] = { -1, 2, -3, 4, -5, 6, -7 };
			int sum = SumNegative(t, 7);
			Assert::AreEqual(sum, -16);
		}
	};
}
