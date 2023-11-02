#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6_4_rec/PR6_4_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64rec
{
	TEST_CLASS(UnitTest64rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[7] = { 4, 3, -1, 2, 2, 5, 1 };
			int product = Task1_2(t, 7);
			Assert::AreEqual(product, 4);
		}
	};
}
