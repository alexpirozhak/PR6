#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6_3_it/PR6_3_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63it
{
	TEST_CLASS(UnitTest63it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t[10] = { 0, 1, 3, 3, 5, 6, 6, 9, 10, 17 };
			bool result;
			Check(t, 10, result);
			Assert::AreEqual(result, true);
		}
	};
}
