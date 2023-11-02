#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6_2_it/PR6_2_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest62it
{
	TEST_CLASS(UnitTest62it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[4] = { 1, 2, 3, 4 };
			Inverse(t, 4);
			int res[4] = { 2, 1, 4, 3 };
			for (int i = 0; i < 4; i++)
				Assert::AreEqual(t[i], res[i]);
		}
	};
}
