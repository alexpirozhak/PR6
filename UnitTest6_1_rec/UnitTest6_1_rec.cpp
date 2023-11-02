#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6_1_rec/PR6_1_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rec
{
	TEST_CLASS(UnitTest61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[7] = { 8, 7, 6, 9, 2, 8, 5 };
			Change(t, 7, 0);
			int res[7] = { 0, 0, 0, 9, 0, 0, 5 };
			for (int i = 0; i < 7; i++)
				Assert::AreEqual(t[i], res[i]);
		}
	};
}
